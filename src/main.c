#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "fmi4c.h"
#include "neuralNetwork.h"

// ==============================================================================
// PARAMETRI GLOBALI
// ==============================================================================
#define POPULATION_SIZE 50 // Torniamo a 50 candidati (più veloci per iterare le epoche)
#define ALPHA 0.05         // Tasso di apprendimento (Learning Rate) iniziale
#define NUM_EPOCHS 500    // Diminuite a 500 come richiesto

// Struttura di comodo per aggregare lo stato di un singolo drone
typedef struct {
    int id;
    double x, y, z;
    double target_x, target_y, target_z; // Possiamo tenere target_x/y/z se serviranno in futuro
    double ux, uy, uz;
} DroneState;

// ==============================================================================
// FUNZIONE DI REWARD
// ==============================================================================
// Riscriviamo la reward da zero: se il drone è nel quadrato di pattugliamento,
// il costo è 0 (è felice). Se esce, o se va addosso agli altri, accumula penalità.
double getReward(DroneState drone, DroneState all_drones[], int num_drones, double last_visited[20][20], double time_sim) {
    double penalty = 0.0;
    
    // Penalità Muri: X[0, 20], Y[-10, 0], Z[-10, 10]
    if (drone.x < 0.0) penalty -= (0.0 - drone.x) * 10.0;
    else if (drone.x > 20.0) penalty -= (drone.x - 20.0) * 10.0;
    
    if (drone.y < -10.0) penalty -= (-10.0 - drone.y) * 10.0;
    else if (drone.y > 0.0) penalty -= (drone.y - 0.0) * 10.0;
    
    if (drone.z < -10.0) penalty -= (-10.0 - drone.z) * 10.0;
    else if (drone.z > 10.0) penalty -= (drone.z - 10.0) * 10.0;
    
    // Penalità Collisioni con altri droni
    for (int i=0; i<num_drones; i++) {
        if (all_drones[i].id != drone.id) {
            double dist = sqrt(pow(drone.x - all_drones[i].x, 2) + pow(drone.y - all_drones[i].y, 2) + pow(drone.z - all_drones[i].z, 2));
            if (dist < 4.0) {
                penalty -= (4.0 - dist) * 20.0; // Forte penalità se si avvicinano troppo (meno di 4 metri)
            }
        }
    }
    
    return penalty; // Il reward è sempre <= 0
}

// Callback necessarie per inizializzare lo standard FMI
void* allocateMemory(size_t nobj, size_t size) { return calloc(nobj, size); }
void freeMemory(void* obj) { free(obj); }
void logger(fmi2ComponentEnvironment componentEnvironment, fmi2String instanceName, fmi2Status status, fmi2String category, fmi2String message, ...) {}


// ==============================================================================
// LOGICA DEL WORKER (PROCESSO FIGLIO)
// ==============================================================================
// Questo codice viene eseguito SOLTANTO dai processi in background (i 50 Worker).
// Il loro unico scopo è simulare i 60 secondi di volo con i pesi ricevuti.
int run_worker(int worker_id) {
    // 1. CARICAMENTO ISOLATO DELLA FMU
    // Per evitare che i 50 worker cerchino di decomprimere l'FMU (.zip) nella stessa cartella,
    // diciamo alla libreria fmi4c di usare una cartella dedicata per ogni worker (es. fmu_extracted_4).
    char extract_path[256];
    sprintf(extract_path, "fmu_extracted_%d", worker_id);
    fmuHandle *fmu = fmi4c_loadFmu("DroneSwarm.fmu", extract_path);
    if (fmu == NULL) return 1;

    // Instanziamo la simulazione OpenModelica per questo specifico Worker
    fmi2InstanceHandle *instance = fmi2_instantiate(
        fmu, fmi2CoSimulation, logger, allocateMemory, freeMemory, NULL, NULL, fmi2False, fmi2False);
    if (instance == NULL) return 1;

    // 2. CREAZIONE DEI CANALI DI COMUNICAZIONE INTER-PROCESSO (Windows API)
    char event_start_name[64], event_done_name[64];
    // "Local\\" indica che questi segnali sono limitati alla sessione utente corrente.
    sprintf(event_start_name, "Local\\DroneSwarm_Start_%d", worker_id); // Evento Master -> Worker
    sprintf(event_done_name, "Local\\DroneSwarm_Done_%d", worker_id);   // Evento Worker -> Master
    
    // Apriamo gli Eventi e il Mutex Globale
    HANDLE hStart = CreateEvent(NULL, FALSE, FALSE, event_start_name);
    HANDLE hDone = CreateEvent(NULL, FALSE, FALSE, event_done_name);
    HANDLE hMutex = CreateMutex(NULL, FALSE, "Local\\DroneSwarmWeightsMutex");
    
    if (!hStart || !hDone || !hMutex) return 1;

    // Comunichiamo al Master che il processo è pronto per iniziare!
    SetEvent(hDone);

    // ==========================================
    // LOOP PRINCIPALE DEL WORKER (VITA PERSISTENTE)
    // ==========================================
    while (1) {
        // Il worker si "addormenta" qui. Consuma 0% di CPU.
        // Si risveglierà solo quando il Master preme il pulsante "START" (SetEvent(hStart)).
        WaitForSingleObject(hStart, INFINITE);

        // 3. LETTURA DEI PROPRI PESI (theta)
        char weight_file[256];
        sprintf(weight_file, "worker_%d_weights.bin", worker_id);
        FILE *f_in = fopen(weight_file, "rb");
        if (!f_in) {
            // Se il Master elimina questo file, è il segnale segreto per dire al Worker di terminare.
            break; 
        }
        
        double theta_candidate[PARAM_COUNT];
        fread(theta_candidate, sizeof(double), PARAM_COUNT, f_in);
        fclose(f_in);

        // 4. SINCRONIZZAZIONE DELLA BOTTIGLIA DI COLLO (Il file condiviso della DLL)
        // La FMU è programmata per leggere SEMPRE da "build/weights.bin" al tempo t=0.
        // Per evitare che i 50 worker scrivano e leggano questo file mischiando i pesi,
        // usiamo un MUTEX (Semaforo di Mutua Esclusione).
        
        // Aspetta finché il semaforo non è Verde
        WaitForSingleObject(hMutex, INFINITE); 
        
        // --- ZONA CRITICA PROTETTA (Solo 1 Worker alla volta può essere qui!) ---
        FILE *f_weights = fopen("weights.bin", "wb");
        if (f_weights) {
            fwrite(theta_candidate, sizeof(double), PARAM_COUNT, f_weights); // Scrivo i miei pesi
            fclose(f_weights);
        }

        // Resettiamo la fisica a t=0
        fmi2_reset(instance);
        fmi2_setupExperiment(instance, fmi2False, 0.0, 0.0, fmi2True, 60.0);
        fmi2_enterInitializationMode(instance);
        fmi2_exitInitializationMode(instance);

        // Questo avanzamento (doStep) fa scattare l'ai_controller.c dentro la DLL,
        // il quale leggerà il "weights.bin" appena scritto e lo salverà nella sua memoria privata.
        fmi2_doStep(instance, 0.0, 0.1, fmi2True);
        
        // Rilascia il Semaforo per far passare il prossimo Worker!
        ReleaseMutex(hMutex); 
        // -------------------------------------------------------------------------

        // 5. SIMULAZIONE DELLA FISICA IN PARALLELO
        // Da questo punto in poi, i 50 Worker girano in parallelo al 100% senza interferirsi!
        fmi2Real time_sim = 0.1;
        fmi2Real step_size = 0.1; // Ciclo di controllo a 0.1s
        fmi2Real stop_time = 150.0; // Aumentato da 60 a 150 per penalizzare i drift lenti
        
        fmi2ValueReference vr_pos_x[] = {328, 329, 330, 331};
        fmi2ValueReference vr_pos_y[] = {332, 333, 334, 335};
        fmi2ValueReference vr_pos_z[] = {336, 337, 338, 339};
        
        fmi2Real pos_x[4], pos_y[4], pos_z[4];
        fmi2Real known_pos_x[4] = {0}, known_pos_y[4] = {0}, known_pos_z[4] = {0};
        double total_swarm_reward = 0.0;
        
        // Heatmap temporale per il Grid Coverage
        double last_visited[20][20];
        for (int gx = 0; gx < 20; gx++) {
            for (int gz = 0; gz < 20; gz++) {
                last_visited[gx][gz] = -10.0; // Inizializzato a -10 per avere un premio già all'inizio
            }
        }

        NeuralNetwork candidate_nn;
        set_parameters(&candidate_nn, theta_candidate);

        fmi2_getReal(instance, vr_pos_x, 4, known_pos_x);
        fmi2_getReal(instance, vr_pos_y, 4, known_pos_y);
        fmi2_getReal(instance, vr_pos_z, 4, known_pos_z);
        
        // Inizializza il generatore di probabilità in modo diverso per ogni worker
        srand((unsigned int)time(NULL) ^ (worker_id * 999)); 
        
        // Loop del tempo (i famosi 60 secondi divisi in step da 0.1s)
        while (time_sim < stop_time) {
            fmi2_getReal(instance, vr_pos_x, 4, pos_x);
            fmi2_getReal(instance, vr_pos_y, 4, pos_y);
            fmi2_getReal(instance, vr_pos_z, 4, pos_z);
            // Non leggiamo più la batteria, usiamo solo la fisica
            
            // Simula i messaggi e il controllore ad ogni step del simulatore
            for (int i=0; i<4; i++) {
                // Packet loss rimosso dal C (gestito da Modelica se necessario, o assente)
                known_pos_x[i] = pos_x[i];
                known_pos_y[i] = pos_y[i];
                known_pos_z[i] = pos_z[i];
            }

            // Aggiorna lo stato dello sciame e accumula il punteggio (Reward)
            DroneState current_swarm[4];
            for (int i = 0; i < 4; i++) {
                current_swarm[i].id = i;
                current_swarm[i].x = pos_x[i];
                current_swarm[i].y = pos_y[i];
                current_swarm[i].z = pos_z[i];
                current_swarm[i].ux = 0.0;
                current_swarm[i].uy = 0.0;
                current_swarm[i].uz = 0.0;

                total_swarm_reward += getReward(current_swarm[i], current_swarm, 4, last_visited, time_sim);
            }

            // Fai avanzare la fisica OpenModelica di 0.1 secondi
            if (fmi2_doStep(instance, time_sim, step_size, fmi2True) != fmi2OK) break;
            time_sim += step_size;
        }

        // 6. SCRITTURA DEI RISULTATI DELLA SIMULAZIONE
        char res_file[256];
        sprintf(res_file, "worker_%d_result.txt", worker_id);
        FILE *f_out = fopen(res_file, "w");
        if (f_out) {
            fprintf(f_out, "%f\n", total_swarm_reward);
            fclose(f_out);
        }
        
        // Segnala al Master che abbiamo calcolato il punteggio per questo Candidato!
        SetEvent(hDone);
    } // <-- FINE WHILE(1) (Il worker torna ad addormentarsi aspettando la prossima Epoca!)
    
    // Uscita pulita (eseguita solo a fine addestramento)
    fmi2_terminate(instance);
    fmi2_freeInstance(instance);
    fmi4c_freeFmu(fmu);
    CloseHandle(hStart);
    CloseHandle(hDone);
    CloseHandle(hMutex);
    return 0;
}

// ==============================================================================
// LOGICA DEL MASTER (PROCESSO PRINCIPALE)
// ==============================================================================
int main(int argc, char *argv[]) {
    // SE il processo viene chiamato con il parametro "--worker 3", lui sa che deve comportarsi
    // da processo Figlio/Worker e avvia immediatamente la funzione `run_worker(3)`.
    if (argc >= 3 && strcmp(argv[1], "--worker") == 0) {
        return run_worker(atoi(argv[2]));
    }

    // ALTRIMENTI, se non ci sono parametri, io sono il Master!
    printf("=== V&V: Avvio Addestramento Parallelo (Master) ===\n");
    srand((unsigned int)time(NULL));

    double global_best_cost = 999999999.0;
    double global_worst_cost = -1.0;
    double global_best_theta[PARAM_COUNT];

    FILE *f_csv = fopen("costs.csv", "w");
    if (f_csv) fprintf(f_csv, "Restart,Epoch,BestCost,MeanCost\n");

    for (int restart = 1; restart <= 1; restart++) {
        printf("\n=== Avvio Addestramento ES (Restart %d/1) ===\n", restart);
        
        // La Rete Neurale "Madre" contenente i parametri base (Theta)
        NeuralNetwork policy_nn;
        initRandomNetwork(&policy_nn);
        double theta[PARAM_COUNT];
        get_parameters(&policy_nn, theta);

        double epsilon[POPULATION_SIZE][PARAM_COUNT];
        double fitness[POPULATION_SIZE];
        double current_sigma = 0.1;   // Quanto rumore aggiungiamo per esplorare? (Variazione genetica)
        double current_alpha = 0.05;  // Quanto velocemente ci muoviamo nella direzione vincente? (Learning rate)
        double restart_best_cost = 999999999.0;

        printf("[Master] Creazione Pool di %d Worker Persistenti...\n", POPULATION_SIZE);
        HANDLE hProcesses[POPULATION_SIZE];
        HANDLE hStartEvents[POPULATION_SIZE];
        HANDLE hDoneEvents[POPULATION_SIZE];

        // 1. SPAWN (GENERAZIONE) DEI 50 WORKERS
        // Questo ciclo crea 50 finestre "invisibili" in background che staranno in ascolto
        for (int p = 0; p < POPULATION_SIZE; p++) {
            char event_start_name[64], event_done_name[64];
            sprintf(event_start_name, "Local\\DroneSwarm_Start_%d", p);
            sprintf(event_done_name, "Local\\DroneSwarm_Done_%d", p);
            
            // Crea gli eventi (pulsanti digitali START e DONE) per il Worker P
            hStartEvents[p] = CreateEvent(NULL, FALSE, FALSE, event_start_name);
            hDoneEvents[p] = CreateEvent(NULL, FALSE, FALSE, event_done_name);
            
            STARTUPINFO si;
            PROCESS_INFORMATION pi;
            ZeroMemory(&si, sizeof(si));
            si.cb = sizeof(si);
            ZeroMemory(&pi, sizeof(pi));
            
            char cmdLine[256];
            sprintf(cmdLine, "controller.exe --worker %d", p);
            // CREATE_NO_WINDOW evita che ti si aprano 50 finestre cmd!
            if(CreateProcess(NULL, cmdLine, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi)) {
                hProcesses[p] = pi.hProcess;
                CloseHandle(pi.hThread);
            }
        }
        
        printf("[Master] Attesa inizializzazione Worker...\n");
        // Aspettiamo che tutti i 50 worker dicano "Pronto" (attivando il loro evento DONE iniziale)
        WaitForMultipleObjects(POPULATION_SIZE, hDoneEvents, TRUE, INFINITE);
        printf("[Master] Tutti i Worker pronti! Inizio epoche.\n");


        // ==========================================
        // CICLO DELLE EPOCHE (OpenAI Evolution Strategies)
        // ==========================================
        for (int epoch = 0; epoch < NUM_EPOCHS; epoch++) {
            
            // 2. CREAZIONE DELLA POPOLAZIONE (Candidati)
            for (int p = 0; p < POPULATION_SIZE; p++) {
                double theta_candidate[PARAM_COUNT];
                for (int j = 0; j < PARAM_COUNT; j++) {
                    // Si aggiunge rumore gaussiano casuale ai pesi della rete madre (theta)
                    epsilon[p][j] = random_normal();
                    theta_candidate[j] = theta[j] + (current_sigma * epsilon[p][j]);
                }
                
                // Salviamo i pesi del candidato in un file che il suo Worker leggerà
                char wfile[256];
                sprintf(wfile, "worker_%d_weights.bin", p);
                FILE *fw = fopen(wfile, "wb");
                if (fw) {
                    fwrite(theta_candidate, sizeof(double), PARAM_COUNT, fw);
                    fclose(fw);
                }
            }

            // 3. VIA ALLA SIMULAZIONE!
            // Il Master preme tutti e 50 i "pulsanti START" virtuali nello stesso istante.
            // I Worker si svegliano e iniziano a lavorare in parallelo.
            for (int p = 0; p < POPULATION_SIZE; p++) {
                SetEvent(hStartEvents[p]);
            }

            // 4. ATTESA DELLA FINE
            // Il Master si addormenta finché TUTTI E 50 i Worker non hanno premuto il loro "pulsante DONE"
            WaitForMultipleObjects(POPULATION_SIZE, hDoneEvents, TRUE, INFINITE);

            // 5. RACCOLTA DEI RISULTATI
            for (int p = 0; p < POPULATION_SIZE; p++) {
                char rfile[256];
                sprintf(rfile, "worker_%d_result.txt", p);
                FILE *fr = fopen(rfile, "r");
                if (fr) {
                    double rew = 0.0;
                    fscanf(fr, "%lf", &rew);
                    fclose(fr);
                    // L'algoritmo cerca di "minimizzare" il costo. Noi vogliamo "massimizzare" la reward.
                    // Quindi il costo è semplicemente l'inverso della Reward (se reward=+500, fitness=-500)
                    fitness[p] = -rew; 
                } else {
                    fitness[p] = 999999999.0;
                }
                
                // Statistiche globali
                if (fitness[p] > global_worst_cost) global_worst_cost = fitness[p];
                if (fitness[p] < global_best_cost) {
                    global_best_cost = fitness[p];
                    for (int j = 0; j < PARAM_COUNT; j++) global_best_theta[j] = theta[j] + (current_sigma * epsilon[p][j]);
                }
            }

            // 6. NORMALIZZAZIONE DEI RISULTATI (Standardizzazione statistica)
            // Serve per rendere l'algoritmo stabile, indipendentemente dal fatto che i droni prendano 10 punti o 10.000 punti.
            double mean = 0.0;
            for (int p = 0; p < POPULATION_SIZE; p++) mean += fitness[p];
            mean /= POPULATION_SIZE;

            double std_dev = 0.0;
            for (int p = 0; p < POPULATION_SIZE; p++) std_dev += pow(fitness[p] - mean, 2);
            std_dev = sqrt(std_dev / POPULATION_SIZE);
            if (std_dev < 1e-5) std_dev = 1e-5;

            double normalized_fitness[POPULATION_SIZE];
            for (int p = 0; p < POPULATION_SIZE; p++) {
                // Calcolo dello Z-Score: dice quanto ogni candidato è sopra o sotto la media
                normalized_fitness[p] = (fitness[p] - mean) / std_dev;
            }

            double best_cost_epoch = fitness[0];
            for (int p = 0; p < POPULATION_SIZE; p++) {
                if (fitness[p] < best_cost_epoch) best_cost_epoch = fitness[p];
            }
            if (best_cost_epoch < restart_best_cost) restart_best_cost = best_cost_epoch;

            printf(">>> [EPOCA %d] Reward Migliore: %.2f | Reward Media: %.2f\n", epoch, -best_cost_epoch, -mean);
            
            if (f_csv) {
                fprintf(f_csv, "%d,%d,%.2f,%.2f\n", restart, epoch, -best_cost_epoch, -mean);
                fflush(f_csv);
            }

            // 7. AGGIORNAMENTO DELLA RETE MADRE (Il cuore dell'algoritmo OpenAI ES)
            // Equazione: Theta_Nuovo = Theta_Vecchio - Alpha * (Sommatoria(Fitness_Normalizzata * Rumore_Usato))
            for (int j = 0; j < PARAM_COUNT; j++) {
                double gradient_estimate = 0.0;
                for (int p = 0; p < POPULATION_SIZE; p++) {
                    // I candidati peggiori (fitness alta) tireranno i pesi in direzione opposta.
                    // I candidati migliori (fitness bassa/negativa) tireranno i pesi verso di loro.
                    gradient_estimate += normalized_fitness[p] * epsilon[p][j];
                }
                // Si calcola la media e si fa un passo nella direzione calcolata (Discesa del Gradiente)
                theta[j] = theta[j] - current_alpha * (gradient_estimate / POPULATION_SIZE);
            }
            
            // Decadimento del rumore e dell'apprendimento (Man mano che impariamo, stringiamo il raggio d'azione)
            current_sigma *= 0.996;
            current_alpha *= 0.997;
            set_parameters(&policy_nn, theta);
        }

        // 8. PULIZIA E CHIUSURA
        // Terminazione forzata e sicura dei processi Worker (evita stalli dovuti a file bloccati)
        for (int p = 0; p < POPULATION_SIZE; p++) {
            TerminateProcess(hProcesses[p], 0);
            
            // Pulizia dei file spazzatura
            char wfile[256];
            sprintf(wfile, "worker_%d_weights.bin", p);
            remove(wfile); 
        }
        
        // Attendiamo che i processi si chiudano per davvero
        WaitForMultipleObjects(POPULATION_SIZE, hProcesses, TRUE, INFINITE);

        // Chiudiamo tutti i canali
        for (int p = 0; p < POPULATION_SIZE; p++) {
            CloseHandle(hProcesses[p]);
            CloseHandle(hStartEvents[p]);
            CloseHandle(hDoneEvents[p]);
        }
    }

    if (f_csv) fclose(f_csv);
    
    printf("\n=== Addestramento Concluso ===\n");
    printf(">> Reward MIGLIORE assoluta: %.2f\n", -global_best_cost);
    
    // Esportiamo la rete madre ottimizzata in un header C così potrà essere letta direttamente dal drone 
    // vero (senza usare pesi esterni!).
    FILE *f_weights = fopen("../src/best_weights.h", "w");
    if (f_weights) {
        fprintf(f_weights, "#ifndef BEST_WEIGHTS_H\n#define BEST_WEIGHTS_H\n\n");
        fprintf(f_weights, "double best_theta[%d] = {\n", PARAM_COUNT);
        for (int j = 0; j < PARAM_COUNT; j++) {
            fprintf(f_weights, "    %f%s\n", global_best_theta[j], (j == PARAM_COUNT - 1) ? "" : ",");
        }
        fprintf(f_weights, "};\n\n#endif\n");
        fclose(f_weights);
    }
    
    return 0;
}
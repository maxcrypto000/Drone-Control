#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
#include "fmi4c.h"
#include "neuralNetwork.h"

// Definiamo i pesi per bilanciare l'importanza degli obiettivi
#define W_NAV 1.0     // Importanza di restare in zona
#define W_ENE 0.1     // Importanza di risparmiare energia
#define W_COL 300.0   // Penalità immensa per le collisioni
#define W_BAT 10.0    // Penalità per stare lontani dalla base quando scarichi
#define W_SPREAD 5.0  // Incentivo per sparpagliarsi (copertura area)

// Parametri dell'Evolutionary Strategy
#define POPULATION_SIZE 20
#define ALPHA 0.05
#define NUM_EPOCHS 400

// Struttura di comodo per passare i dati del singolo drone
typedef struct {
    int id;
    double x, y, z;
    double target_x, target_y, target_z;
    double ux, uy, uz;
    double battery;
    int is_broadcasting_return;
} DroneState;

// Calcola il costo di una specifica azione/stato per un drone
double getCost(DroneState drone, DroneState all_drones[], int num_drones) {
    double cost = 0.0;

    double min_x = -20.0, max_x = 20.0;
    double min_y = -20.0, max_y = 20.0;
    double min_z = -10.0, max_z = -2.0;

    // 1. Costo di Navigazione (Linearizzato e più morbido)
    if (drone.x < min_x) cost += W_NAV * fabs(min_x - drone.x);
    if (drone.x > max_x) cost += W_NAV * fabs(drone.x - max_x);
    if (drone.y < min_y) cost += W_NAV * fabs(min_y - drone.y);
    if (drone.y > max_y) cost += W_NAV * fabs(drone.y - max_y);
    if (drone.z < min_z) cost += W_NAV * fabs(min_z - drone.z);
    if (drone.z > max_z) cost += W_NAV * fabs(max_z - drone.z);

    // 2. Costo Energetico (Sforzo dei motori)
    double effort = pow(drone.ux, 2) + pow(drone.uy, 2) + pow(drone.uz, 2);
    cost += W_ENE * effort;

    // 3. Costo Collisioni e Sparpagliamento
    for (int i = 0; i < num_drones; i++) {
        if (all_drones[i].id != drone.id) {
            double dist_drone = sqrt(pow(drone.x - all_drones[i].x, 2) + 
                                     pow(drone.y - all_drones[i].y, 2) + 
                                     pow(drone.z - all_drones[i].z, 2));
                                     
            if (dist_drone < 15.0) {
                // Penalità morbida per spingere i droni a massimizzare la distanza (copertura)
                cost += W_SPREAD * (15.0 - dist_drone);
            }
            if (dist_drone < 2.0) { 
                cost += W_COL; // Collisione grave, si somma alla penalità di sparpagliamento
            }
        }
    }

    // 4. Logica di Ricarica (Rientro alla Base)
    if (drone.is_broadcasting_return == 1) { // flag ISTERESI
        // Basi di ricarica personalizzate per ogni drone (stesse di DroneSwarm.mo)
        const double BASES_X[4] = {15.0, -15.0, -15.0, 15.0};
        const double BASES_Y[4] = {15.0, 15.0, -15.0, -15.0};
        const double BASES_Z[4] = {-10.0, -10.0, -10.0, -10.0};
        
        double base_x = BASES_X[drone.id];
        double base_y = BASES_Y[drone.id];
        double base_z = BASES_Z[drone.id];
        
        double dist_base = sqrt(pow(drone.x - base_x, 2) + pow(drone.y - base_y, 2) + pow(drone.z - base_z, 2));
        cost += W_BAT * dist_base; // Minimizza distanza dalla SUA stazione di ricarica
    }

    return cost;
}

// Callback obbligatorie per lo standard FMI 2.0
void* allocateMemory(size_t nobj, size_t size) {
    return calloc(nobj, size);
}

void freeMemory(void* obj) {
    free(obj);
}

void logger(fmi2ComponentEnvironment componentEnvironment, fmi2String instanceName, fmi2Status status, fmi2String category, fmi2String message, ...) {
    va_list args;
    va_start(args, message);
    printf("[%s] ", instanceName);
    vprintf(message, args);
    printf("\n");
    va_end(args);
}

int main() {
    printf("=== V&V: Inizializzazione Oracolo Fisico (FMU) ===\n");

    fmuHandle *fmu = fmi4c_loadFmu("DroneSwarm.fmu", "fmu_extracted");
    if (fmu == NULL) {
        printf("ERRORE CRITICO: Impossibile caricare o scompattare la FMU.\n");
        return 1;
    }
    printf("FMU scompattata e caricata in memoria con successo.\n");

    fmi2InstanceHandle *instance = fmi2_instantiate(
        fmu, 
        fmi2CoSimulation, 
        logger, 
        allocateMemory, 
        freeMemory, 
        NULL, 
        NULL, 
        fmi2False, 
        fmi2False
    );
    
    if (instance == NULL) {
        printf("ERRORE: Impossibile istanziare il simulatore OpenModelica.\n");
        fmi4c_freeFmu(fmu);
        return 1;
    }
    
    srand((unsigned int)time(NULL));

    double global_best_cost = 999999999.0;
    double global_worst_cost = -1.0;
    double global_best_theta[PARAM_COUNT];

    FILE *f_csv = fopen("costs.csv", "w");
    if (f_csv) {
        fprintf(f_csv, "Restart,Epoch,BestCost,MeanCost\n");
    }

    for (int restart = 1; restart <= 5; restart++) {
        printf("\n=== Avvio Addestramento ES (Restart %d/5) ===\n", restart);

        // Inizializzazione della rete neurale "madre" e delle strutture ES
        NeuralNetwork policy_nn;
        initRandomNetwork(&policy_nn);
        double theta[PARAM_COUNT];

        double epsilon[POPULATION_SIZE][PARAM_COUNT];
        double fitness[POPULATION_SIZE];
        
        double restart_best_cost = 999999999.0;

    // Riferimenti Value Reference per la FMU
    fmi2ValueReference vr_pos_x[] = {76, 77, 78, 79};
    fmi2ValueReference vr_pos_y[] = {80, 81, 82, 83};
    fmi2ValueReference vr_pos_z[] = {84, 85, 86, 87};
    fmi2ValueReference vr_bat[]   = {56, 57, 58, 59};
    fmi2ValueReference vr_ux[]    = {88, 89, 90, 91};
    fmi2ValueReference vr_uy[]    = {92, 93, 94, 95};
    fmi2ValueReference vr_uz[]    = {96, 97, 98, 99};

    printf("\n=== Avvio Addestramento Evolutionary Strategy ===\n");

        // === AVVIO ADDESTRAMENTO ===
        double current_sigma = 0.1;  // Rumore iniziale esplorativo
        double current_alpha = 0.05; // Learning rate effettivo
        
        for (int epoch = 0; epoch < NUM_EPOCHS; epoch++) {
        
        get_parameters(&policy_nn, theta);
        
        // --- CICLO DELLA POPOLAZIONE (Candidati) ---
        for (int p = 0; p < POPULATION_SIZE; p++) {
            
            NeuralNetwork candidate_nn;
            double theta_candidate[PARAM_COUNT];
            
            // Generazione del rumore e perturbazione dei pesi
            for (int j = 0; j < PARAM_COUNT; j++) {
                epsilon[p][j] = random_normal();
                theta_candidate[j] = theta[j] + (current_sigma * epsilon[p][j]);
            }
            set_parameters(&candidate_nn, theta_candidate);

            // Scriviamo i pesi su file per permettere all'FMU di leggerli a t=0
            FILE *f_weights = fopen("weights.bin", "wb");
            if (f_weights) {
                fwrite(theta_candidate, sizeof(double), PARAM_COUNT, f_weights);
                fclose(f_weights);
            }

            // Reset della FMU (usiamo fmi2_reset ora che il memory corruption è stato risolto)
            fmi2_reset(instance);
            
            fmi2_setupExperiment(instance, fmi2False, 0.0, 0.0, fmi2True, 60.0);
            fmi2_enterInitializationMode(instance);
            fmi2_exitInitializationMode(instance);

            fmi2Real time_sim = 0.0;
            fmi2Real step_size = 0.1;
            fmi2Real stop_time = 60.0;

            fmi2Real pos_x[4], pos_y[4], pos_z[4], bat[4];
            fmi2Real known_pos_x[4] = {0}, known_pos_y[4] = {0}, known_pos_z[4] = {0};
            fmi2Real last_ai_ux[4] = {0}, last_ai_uy[4] = {0}, last_ai_uz[4] = {0};
            double total_swarm_cost = 0.0;
            int is_returning[4] = {0, 0, 0, 0};

            // Primer per il network a t=0
            fmi2_getReal(instance, vr_pos_x, 4, known_pos_x);
            fmi2_getReal(instance, vr_pos_y, 4, known_pos_y);
            fmi2_getReal(instance, vr_pos_z, 4, known_pos_z);

            // --- LOOP TEMPORALE DI CO-SIMULAZIONE (60 secondi) ---
            while (time_sim < stop_time) {
                fmi2_getReal(instance, vr_pos_x, 4, pos_x);
                fmi2_getReal(instance, vr_pos_y, 4, pos_y);
                fmi2_getReal(instance, vr_pos_z, 4, pos_z);
                fmi2_getReal(instance, vr_bat, 4, bat);

                // --- 1. Rete di Comunicazione Discreta (2 Hz -> ogni 0.5s) ---
                if (fmod(time_sim, 0.5) < 0.05) { 
                    for (int i=0; i<4; i++) {
                        // Packet loss del 20% (viene aggiornato solo nell'80% dei casi)
                        if (((double)rand() / RAND_MAX) > 0.20) {
                            known_pos_x[i] = pos_x[i];
                            known_pos_y[i] = pos_y[i];
                            known_pos_z[i] = pos_z[i];
                        }
                    }

                    // --- 2. Elaborazione Rete Neurale Decentralizzata ---
                    for (int i = 0; i < 4; i++) {
                        // Ricava la coordinata della sua base
                        const double BASES_X[4] = {15.0, -15.0, -15.0, 15.0};
                        const double BASES_Y[4] = {15.0, 15.0, -15.0, -15.0};
                        const double BASES_Z[4] = {-10.0, -10.0, -10.0, -10.0};
                        double base_x = BASES_X[i];
                        double base_y = BASES_Y[i];
                        double base_z = BASES_Z[i];
                        
                        double inputs[INPUT_SIZE];
                        inputs[0] = pos_x[i] / 20.0; // Conosce la sua vera posizione (GPS/Sensori)
                        inputs[1] = pos_y[i] / 20.0; 
                        inputs[2] = pos_z[i] / 10.0; 
                        inputs[3] = bat[i] / 100.0;  
                        
                        double min_dist = 9999.0;
                        for (int j = 0; j < 4; j++) {
                            if (i != j) {
                                // Distanza rispetto alla *posizione nota* (ricevuta via messaggio) degli altri
                                double d = sqrt(pow(pos_x[i] - known_pos_x[j], 2) + 
                                                pow(pos_y[i] - known_pos_y[j], 2) + 
                                                pow(pos_z[i] - known_pos_z[j], 2));
                                if (d < min_dist) min_dist = d;
                            }
                        }
                        inputs[4] = min_dist / 40.0;
                        inputs[5] = i / 3.0; 
                        inputs[6] = (base_x - pos_x[i]) / 40.0;
                        inputs[7] = (base_y - pos_y[i]) / 40.0;
                        inputs[8] = (base_z - pos_z[i]) / 10.0;

                        double outputs[OUTPUT_SIZE];
                        forward_pass(&candidate_nn, inputs, outputs);

                        last_ai_ux[i] = outputs[0] * 10.0;
                        last_ai_uy[i] = outputs[1] * 10.0;
                        last_ai_uz[i] = outputs[2] * 10.0;
                    }
                }

                // --- 3. Calcolo Costo e Spinte (Continuo/Zero-Order Hold) ---
                DroneState current_swarm[4];
                for (int i = 0; i < 4; i++) {
                    if (bat[i] < 20.0) {
                        is_returning[i] = 1;
                    } else if (bat[i] > 80.0) {
                        is_returning[i] = 0;
                    }

                    current_swarm[i].id = i;
                    current_swarm[i].x = pos_x[i];
                    current_swarm[i].y = pos_y[i];
                    current_swarm[i].z = pos_z[i];
                    current_swarm[i].battery = bat[i];
                    current_swarm[i].ux = last_ai_ux[i];
                    current_swarm[i].uy = last_ai_uy[i];
                    current_swarm[i].uz = last_ai_uz[i];
                    current_swarm[i].is_broadcasting_return = is_returning[i];

                    total_swarm_cost += getCost(current_swarm[i], current_swarm, 4);
                }

                // Leggiamo la batteria (VR 56, 57, 58, 59)
                fmi2_getReal(instance, vr_bat, 4, bat);

                fmi2Status status = fmi2_doStep(instance, time_sim, step_size, fmi2True);
                if (status != fmi2OK) {
                    break;
                }

                time_sim += step_size;
            }

            fitness[p] = total_swarm_cost;
            if (fitness[p] > global_worst_cost) {
                global_worst_cost = fitness[p];
            }
            if (fitness[p] < global_best_cost) {
                global_best_cost = fitness[p];
                for (int j = 0; j < PARAM_COUNT; j++) {
                    global_best_theta[j] = theta_candidate[j];
                }
            }
            printf("Epoca %3d | Candidato %2d | Costo Totale: %.2f\n", epoch, p, fitness[p]);
        }
        
        // --- 1. NORMALIZZAZIONE DELLA FITNESS (Standardizzazione) ---
        double mean = 0.0;
        for (int p = 0; p < POPULATION_SIZE; p++) {
            mean += fitness[p];
        }
        mean /= POPULATION_SIZE;

        double std_dev = 0.0;
        for (int p = 0; p < POPULATION_SIZE; p++) {
            std_dev += pow(fitness[p] - mean, 2);
        }
        std_dev = sqrt(std_dev / POPULATION_SIZE);
        if (std_dev < 1e-5) std_dev = 1e-5; // Evita divisioni per zero se sono tutti uguali

        // Creiamo un array normalizzato (z-scores)
        double normalized_fitness[POPULATION_SIZE];
        for (int p = 0; p < POPULATION_SIZE; p++) {
            normalized_fitness[p] = (fitness[p] - mean) / std_dev;
        }

        // Stampiamo un resoconto dell'epoca per monitorare i miglioramenti
        double best_cost_epoch = fitness[0];
        for (int p = 0; p < POPULATION_SIZE; p++) {
            if (fitness[p] < best_cost_epoch) best_cost_epoch = fitness[p];
        }
        
        if (best_cost_epoch < restart_best_cost) {
            restart_best_cost = best_cost_epoch;
        }

        printf(">>> [EPOCA %d] Costo Migliore: %.2f | Costo Medio: %.2f\n", epoch, best_cost_epoch, mean);
        
        if (f_csv) {
            fprintf(f_csv, "%d,%d,%.2f,%.2f\n", restart, epoch, best_cost_epoch, mean);
            fflush(f_csv);
        }

        // --- 2. AGGIORNAMENTO DEI PESI USANDO LA FITNESS NORMALIZZATA ---
        for (int j = 0; j < PARAM_COUNT; j++) {
            double gradient_estimate = 0.0;
            for (int p = 0; p < POPULATION_SIZE; p++) {
                // Usiamo il valore normalizzato al posto del costo grezzo
                gradient_estimate += normalized_fitness[p] * epsilon[p][j];
            }
            // Sottraiamo per la minimizzazione del costo
            // NOTA: Togliamo la divisione per current_sigma altrimenti il gradiente esplode quando sigma tende a 0!
            theta[j] = theta[j] - current_alpha * (gradient_estimate / POPULATION_SIZE);
        }
        
        current_sigma *= 0.99; // Decadimento più lento (0.99 invece di 0.97) per epoche = 400
        current_alpha *= 0.995; // Decadimento alpha proporzionalmente rallentato
        
        // Aggiorna la rete madre con i nuovi parametri ottimizzati
        set_parameters(&policy_nn, theta);
        printf("=== Fine Epoca %d ===\n\n", epoch);
    }
    
        printf("=== Fine Restart %d (Costo Migliore: %.2f) ===\n", restart, restart_best_cost);
        if (restart_best_cost < global_best_cost) global_best_cost = restart_best_cost;
    }

    if (f_csv) fclose(f_csv);

    // Chiusura sicura e pulizia della memoria
    fmi2_terminate(instance);
    fmi2_freeInstance(instance);
    fmi4c_freeFmu(fmu);
    
    printf("\n=== Addestramento Concluso ===\n");
    printf(">> Costo MIGLIORE assoluto sui 5 restart: %.2f\n", global_best_cost);
    printf(">> Costo PEGGIORE assoluto sui 5 restart: %.2f\n", global_worst_cost);
    
    FILE *f_weights = fopen("../src/best_weights.h", "w");
    if (f_weights) {
        fprintf(f_weights, "#ifndef BEST_WEIGHTS_H\n#define BEST_WEIGHTS_H\n\n");
        fprintf(f_weights, "double best_theta[%d] = {\n", PARAM_COUNT);
        for (int j = 0; j < PARAM_COUNT; j++) {
            fprintf(f_weights, "    %f%s\n", global_best_theta[j], (j == PARAM_COUNT - 1) ? "" : ",");
        }
        fprintf(f_weights, "};\n\n#endif // BEST_WEIGHTS_H\n");
        fclose(f_weights);
        printf(">> Pesi ottimali esportati in ../src/best_weights.h\n");
    }
    
    return 0;
}
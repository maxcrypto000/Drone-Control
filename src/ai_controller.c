#include "neuralNetwork.h"
#include <stdio.h>
#include "best_weights.h"

// Memoria locale dei pesi (viene letta dal file "weights.bin" all'avvio)
static int weights_loaded = 0;
static double local_weights[PARAM_COUNT];
static NeuralNetwork drone_nn;

// Funzione richiamata da OpenModelica
void get_ai_thrust(double x, double y, double z,
                   const double* swarm_x, const double* swarm_y, const double* swarm_z,
                   const double* lidar_array, 
                   double drone_id_real, 
                   double current_time, 
                   double* ux, double* uy, double* uz) {
    
    // Ricarichiamo i pesi ad ogni nuova simulazione (time == 0.0)
    if (current_time <= 0.001) {
        FILE *f = fopen("weights.bin", "rb");
        if (f) {
            fread(local_weights, sizeof(double), PARAM_COUNT, f);
            fclose(f);
        } else {
            // Se non trova il file (come nella GUI di OpenModelica), usa i pesi addestrati
            for(int i=0; i<PARAM_COUNT; i++) local_weights[i] = best_theta[i];
        }
        
        set_parameters(&drone_nn, local_weights);
        weights_loaded = 1;
    }

    double outputs[OUTPUT_SIZE];
    
    // L'unico input è il lidar (125 celle). Ignoriamo x, y, z e le posizioni degli altri
    // perché l'IA deve usare solo la percezione locale.
    forward_pass(&drone_nn, lidar_array, outputs);

    // Mappiamo le uscite [-1, 1] a spinte fisiche. Aumentiamo la forza massima a 15.0 N
    *ux = outputs[0] * 15.0;
    *uy = outputs[1] * 15.0;
    *uz = outputs[2] * 15.0;
}

// Ritorna 1 se il pacchetto viene perso (drop_prob è la probabilità, es. 0.2 per 20%)
int check_packet_loss(double time, double drone_id, double drop_prob) {
    double r = (double)rand() / RAND_MAX;
    if (r < drop_prob) {
        return 1; // Pacchetto perso
    }
    return 0; // Pacchetto ricevuto
}

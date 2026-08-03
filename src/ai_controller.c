#include "neuralNetwork.h"
#include <stdio.h>
#include "best_weights.h"

static double current_fmu_theta[133] = {0};
static int theta_loaded_for_time = -1;
static int use_fallback = 1;

void get_ai_thrust(double x, double y, double z, double bat, double min_dist, double drone_id, double delta_x, double delta_y, double delta_z, double current_time, double* ux, double* uy, double* uz) {
    int current_time_ms = (int)(current_time * 1000.0);
    static int last_time_ms = -1;
    
    // Se il tempo torna indietro (reset) o è la prima chiamata, ricarichiamo i pesi
    if (current_time_ms < last_time_ms || last_time_ms == -1) {
        FILE *f = fopen("C:\\Users\\maxbu\\Desktop\\uni\\Verifica e validazione s\\progetto\\controllore\\build\\weights.bin", "rb");
        if (f) {
            fread(current_fmu_theta, sizeof(double), 133, f);
            fclose(f);
            use_fallback = 0;
        }
    }
    last_time_ms = current_time_ms;

    NeuralNetwork nn;
    if (use_fallback) {
        set_parameters(&nn, best_theta);
    } else {
        set_parameters(&nn, current_fmu_theta);
    }
    
    // Normalizziamo le distanze relative alla base (il mondo è largo 40m e alto 10m)
    double inputs[9] = {x/20.0, y/20.0, z/10.0, bat/100.0, min_dist/40.0, drone_id, delta_x/40.0, delta_y/40.0, delta_z/10.0};
    double outputs[3];
    forward_pass(&nn, inputs, outputs);
    
    *ux = outputs[0] * 10.0;
    *uy = outputs[1] * 10.0;
    *uz = outputs[2] * 10.0;
}

// Ritorna 1 se il pacchetto viene perso (drop_prob è la probabilità, es. 0.2 per 20%)
int check_packet_loss(double time, double drone_id, double drop_prob) {
    double r = (double)rand() / RAND_MAX;
    if (r < drop_prob) {
        return 1; // Pacchetto perso
    }
    return 0; // Pacchetto ricevuto
}

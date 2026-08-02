#include "neuralNetwork.h"
#include "best_weights.h"

void get_ai_thrust(double x, double y, double z, double bat, double min_dist, double drone_id, double* ux, double* uy, double* uz) {
    NeuralNetwork nn;
    set_parameters(&nn, best_theta);
    
    double inputs[6] = {x/20.0, y/20.0, z/10.0, bat/100.0, min_dist/40.0, drone_id};
    double outputs[3];
    forward_pass(&nn, inputs, outputs);
    
    *ux = outputs[0] * 10.0;
    *uy = outputs[1] * 10.0;
    *uz = outputs[2] * 10.0;
}

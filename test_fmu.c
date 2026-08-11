#include <stdio.h>
#include <stdlib.h>
#include "fmi4c.h"

void fmi2Logger(fmi2ComponentEnvironment componentEnvironment, fmi2String instanceName, fmi2Status status, fmi2String category, fmi2String message, ...) {
    printf("FMI Logger: %s\n", message);
}
void* fmi2AllocateMemory(size_t nobj, size_t size) { return calloc(nobj, size); }
void fmi2FreeMemory(void* obj) { free(obj); }

int main() {
    fmuHandle *fmu = fmi4c_loadFmu("DroneSwarm.fmu", "test_extract");
    if (!fmu) { printf("fmi4c_loadFmu failed!\n"); return 1; }
    printf("Loaded FMU\n"); fflush(stdout);
    fmi2InstanceHandle *instance = fmi2_instantiate(
        fmu, fmi2CoSimulation, fmi2Logger, fmi2AllocateMemory, fmi2FreeMemory, NULL, NULL, fmi2False, fmi2False);
    if (!instance) { printf("fmi2_instantiate failed!\n"); return 1; }
    
    printf("Instantiated\n"); fflush(stdout);
    fmi2_setupExperiment(instance, fmi2False, 0.0, 0.0, fmi2True, 150.0);
    fmi2_enterInitializationMode(instance);
    fmi2_exitInitializationMode(instance);
    printf("Initialized\n"); fflush(stdout);
    
    fmi2ValueReference vr[] = {16, 17, 18, 19, 340, 341, 342, 343};
    fmi2Real val[8];
    fmi2Status s = fmi2_getReal(instance, vr, 8, val);
    printf("Status: %d\n", s); fflush(stdout);
    
    printf("VR 16 (drones[1].x): %f\n", val[0]);
    printf("VR 17 (drones[2].x): %f\n", val[1]);
    printf("VR 18 (drones[3].x): %f\n", val[2]);
    printf("VR 19 (drones[4].x): %f\n", val[3]);
    printf("VR 340 (pos_x[1]): %f\n", val[4]);
    printf("VR 341 (pos_x[2]): %f\n", val[5]);
    printf("VR 342 (pos_x[3]): %f\n", val[6]);
    printf("VR 343 (pos_x[4]): %f\n", val[7]);
    fflush(stdout);
    
    fmi2_freeInstance(instance);
    fmi4c_freeFmu(fmu);
    return 0;
}
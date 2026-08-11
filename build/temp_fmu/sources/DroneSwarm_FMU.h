#ifndef DroneSwarm_FMU_H
#define DroneSwarm_FMU_H

#include "simulation_data.h"

// define class name and unique id
#define MODEL_IDENTIFIER DroneSwarm
#define MODEL_GUID "{41fc0f6a-9c14-4bca-b808-3a44b94f3e7c}"

// define model size
#define NUMBER_OF_STATES 28
#define NUMBER_OF_EVENT_INDICATORS 12
#define NUMBER_OF_REALS 1278
#define NUMBER_OF_REAL_INPUTS 0
#define NUMBER_OF_INTEGERS 40
#define NUMBER_OF_STRINGS 25
#define NUMBER_OF_BOOLEANS 27
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 }
#define STATESDERIVATIVES { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55 }


#ifdef __cplusplus
extern "C" {
#endif

extern void DroneSwarm_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc DroneSwarm_setupDataStruc
#include "fmi-export/fmu2_model_interface.h"
#include "fmi-export/fmu_read_flags.h"

#define FMI2_FUNCTION_PREFIX DroneSwarm_
#include "fmi2Functions.h"
#include "fmi-export/fmu2_model_interface.h"
#include "fmi-export/fmu_read_flags.h"

void setStartValues(ModelInstance *comp);
void setDefaultStartValues(ModelInstance *comp);
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo);
fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value);
fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value);
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value);
fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value);
fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value);
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr);


#ifdef __cplusplus
}
#endif

#endif /* DroneSwarm_FMU_H */
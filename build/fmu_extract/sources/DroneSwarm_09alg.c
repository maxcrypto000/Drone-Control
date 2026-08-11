/* Algebraic */
#include "DroneSwarm_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* forwarded equations */
extern void DroneSwarm_eqFunction_977(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_978(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_979(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_980(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_981(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_982(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_983(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_984(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_985(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_986(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_987(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_988(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_989(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_990(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_991(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_992(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1090(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1091(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1092(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1093(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1094(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1095(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1096(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1097(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1098(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1099(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1100(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1101(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1102(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1103(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1104(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1105(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1106(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1107(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1108(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1109(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1110(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1111(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1112(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1113(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1117(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1118(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1120(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1121(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1122(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1124(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1125(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[52])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_977,
    DroneSwarm_eqFunction_978,
    DroneSwarm_eqFunction_979,
    DroneSwarm_eqFunction_980,
    DroneSwarm_eqFunction_981,
    DroneSwarm_eqFunction_982,
    DroneSwarm_eqFunction_983,
    DroneSwarm_eqFunction_984,
    DroneSwarm_eqFunction_985,
    DroneSwarm_eqFunction_986,
    DroneSwarm_eqFunction_987,
    DroneSwarm_eqFunction_988,
    DroneSwarm_eqFunction_989,
    DroneSwarm_eqFunction_990,
    DroneSwarm_eqFunction_991,
    DroneSwarm_eqFunction_992,
    DroneSwarm_eqFunction_1090,
    DroneSwarm_eqFunction_1091,
    DroneSwarm_eqFunction_1092,
    DroneSwarm_eqFunction_1093,
    DroneSwarm_eqFunction_1094,
    DroneSwarm_eqFunction_1095,
    DroneSwarm_eqFunction_1096,
    DroneSwarm_eqFunction_1097,
    DroneSwarm_eqFunction_1098,
    DroneSwarm_eqFunction_1099,
    DroneSwarm_eqFunction_1100,
    DroneSwarm_eqFunction_1101,
    DroneSwarm_eqFunction_1102,
    DroneSwarm_eqFunction_1103,
    DroneSwarm_eqFunction_1104,
    DroneSwarm_eqFunction_1105,
    DroneSwarm_eqFunction_1106,
    DroneSwarm_eqFunction_1107,
    DroneSwarm_eqFunction_1108,
    DroneSwarm_eqFunction_1109,
    DroneSwarm_eqFunction_1110,
    DroneSwarm_eqFunction_1111,
    DroneSwarm_eqFunction_1112,
    DroneSwarm_eqFunction_1113,
    DroneSwarm_eqFunction_1114,
    DroneSwarm_eqFunction_1115,
    DroneSwarm_eqFunction_1116,
    DroneSwarm_eqFunction_1117,
    DroneSwarm_eqFunction_1118,
    DroneSwarm_eqFunction_1119,
    DroneSwarm_eqFunction_1120,
    DroneSwarm_eqFunction_1121,
    DroneSwarm_eqFunction_1122,
    DroneSwarm_eqFunction_1123,
    DroneSwarm_eqFunction_1124,
    DroneSwarm_eqFunction_1125
  };
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 52; id++) {
      eqFunctions[id](data, threadData);
    }
  }
}
/* for continuous time variables */
int DroneSwarm_functionAlgebraics(DATA *data, threadData_t *threadData)
{

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  DroneSwarm_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  return 0;
}

#ifdef __cplusplus
}
#endif

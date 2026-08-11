/* Algebraic */
#include "DroneSwarm_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* forwarded equations */
extern void DroneSwarm_eqFunction_993(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_994(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_995(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_996(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_997(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_998(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_999(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1000(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1001(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1002(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1003(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1004(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1005(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1006(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1007(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1008(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1118(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1120(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1121(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1122(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1124(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1125(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1126(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1127(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1128(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1129(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1130(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1131(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1132(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1133(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1134(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1135(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1136(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1137(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1138(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1139(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1140(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1141(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1142(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1143(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1144(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1145(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1146(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1147(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1148(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1149(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1150(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1151(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1152(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1153(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[52])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_993,
    DroneSwarm_eqFunction_994,
    DroneSwarm_eqFunction_995,
    DroneSwarm_eqFunction_996,
    DroneSwarm_eqFunction_997,
    DroneSwarm_eqFunction_998,
    DroneSwarm_eqFunction_999,
    DroneSwarm_eqFunction_1000,
    DroneSwarm_eqFunction_1001,
    DroneSwarm_eqFunction_1002,
    DroneSwarm_eqFunction_1003,
    DroneSwarm_eqFunction_1004,
    DroneSwarm_eqFunction_1005,
    DroneSwarm_eqFunction_1006,
    DroneSwarm_eqFunction_1007,
    DroneSwarm_eqFunction_1008,
    DroneSwarm_eqFunction_1118,
    DroneSwarm_eqFunction_1119,
    DroneSwarm_eqFunction_1120,
    DroneSwarm_eqFunction_1121,
    DroneSwarm_eqFunction_1122,
    DroneSwarm_eqFunction_1123,
    DroneSwarm_eqFunction_1124,
    DroneSwarm_eqFunction_1125,
    DroneSwarm_eqFunction_1126,
    DroneSwarm_eqFunction_1127,
    DroneSwarm_eqFunction_1128,
    DroneSwarm_eqFunction_1129,
    DroneSwarm_eqFunction_1130,
    DroneSwarm_eqFunction_1131,
    DroneSwarm_eqFunction_1132,
    DroneSwarm_eqFunction_1133,
    DroneSwarm_eqFunction_1134,
    DroneSwarm_eqFunction_1135,
    DroneSwarm_eqFunction_1136,
    DroneSwarm_eqFunction_1137,
    DroneSwarm_eqFunction_1138,
    DroneSwarm_eqFunction_1139,
    DroneSwarm_eqFunction_1140,
    DroneSwarm_eqFunction_1141,
    DroneSwarm_eqFunction_1142,
    DroneSwarm_eqFunction_1143,
    DroneSwarm_eqFunction_1144,
    DroneSwarm_eqFunction_1145,
    DroneSwarm_eqFunction_1146,
    DroneSwarm_eqFunction_1147,
    DroneSwarm_eqFunction_1148,
    DroneSwarm_eqFunction_1149,
    DroneSwarm_eqFunction_1150,
    DroneSwarm_eqFunction_1151,
    DroneSwarm_eqFunction_1152,
    DroneSwarm_eqFunction_1153
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

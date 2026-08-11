/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "DroneSwarm_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void DroneSwarm_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = 0.5 /* (max real for single time events) */;
  i++;
}

const char *DroneSwarm_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"drones[4].dist_to_base < drones[4].R_base",
  "noEvent(drones[4].B >= 100.0) and drones[4].net_charge > 0.0",
  "drones[3].dist_to_base < drones[3].R_base",
  "noEvent(drones[3].B >= 100.0) and drones[3].net_charge > 0.0",
  "drones[2].dist_to_base < drones[2].R_base",
  "noEvent(drones[2].B >= 100.0) and drones[2].net_charge > 0.0",
  "drones[1].dist_to_base < drones[1].R_base",
  "noEvent(drones[1].B >= 100.0) and drones[1].net_charge > 0.0"};
  static const int occurEqs0[] = {1,973};
  static const int occurEqs1[] = {1,1088};
  static const int occurEqs2[] = {1,967};
  static const int occurEqs3[] = {1,1065};
  static const int occurEqs4[] = {1,961};
  static const int occurEqs5[] = {1,1042};
  static const int occurEqs6[] = {1,955};
  static const int occurEqs7[] = {1,1019};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void DroneSwarm_eqFunction_953(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_954(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_955(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_956(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_957(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_958(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_959(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_960(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_961(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_962(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_963(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_964(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_965(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_966(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_967(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_968(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_969(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_970(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_971(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_972(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_973(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_974(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_975(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_976(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_993(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1015(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1016(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1017(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1018(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1019(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1020(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1038(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1039(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1040(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1041(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1042(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1043(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1061(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1062(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1063(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1064(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1065(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1066(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1084(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1085(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1086(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1087(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1088(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1089(DATA* data, threadData_t *threadData);

int DroneSwarm_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[49])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_953,
    DroneSwarm_eqFunction_954,
    DroneSwarm_eqFunction_955,
    DroneSwarm_eqFunction_956,
    DroneSwarm_eqFunction_957,
    DroneSwarm_eqFunction_958,
    DroneSwarm_eqFunction_959,
    DroneSwarm_eqFunction_960,
    DroneSwarm_eqFunction_961,
    DroneSwarm_eqFunction_962,
    DroneSwarm_eqFunction_963,
    DroneSwarm_eqFunction_964,
    DroneSwarm_eqFunction_965,
    DroneSwarm_eqFunction_966,
    DroneSwarm_eqFunction_967,
    DroneSwarm_eqFunction_968,
    DroneSwarm_eqFunction_969,
    DroneSwarm_eqFunction_970,
    DroneSwarm_eqFunction_971,
    DroneSwarm_eqFunction_972,
    DroneSwarm_eqFunction_973,
    DroneSwarm_eqFunction_974,
    DroneSwarm_eqFunction_975,
    DroneSwarm_eqFunction_976,
    DroneSwarm_eqFunction_993,
    DroneSwarm_eqFunction_1015,
    DroneSwarm_eqFunction_1016,
    DroneSwarm_eqFunction_1017,
    DroneSwarm_eqFunction_1018,
    DroneSwarm_eqFunction_1019,
    DroneSwarm_eqFunction_1020,
    DroneSwarm_eqFunction_1038,
    DroneSwarm_eqFunction_1039,
    DroneSwarm_eqFunction_1040,
    DroneSwarm_eqFunction_1041,
    DroneSwarm_eqFunction_1042,
    DroneSwarm_eqFunction_1043,
    DroneSwarm_eqFunction_1061,
    DroneSwarm_eqFunction_1062,
    DroneSwarm_eqFunction_1063,
    DroneSwarm_eqFunction_1064,
    DroneSwarm_eqFunction_1065,
    DroneSwarm_eqFunction_1066,
    DroneSwarm_eqFunction_1084,
    DroneSwarm_eqFunction_1085,
    DroneSwarm_eqFunction_1086,
    DroneSwarm_eqFunction_1087,
    DroneSwarm_eqFunction_1088,
    DroneSwarm_eqFunction_1089
  };
  
  for (int id = 0; id < 49; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int DroneSwarm_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
  tmp0 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */), tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp3 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */),100.0);
  tmp5 = 1.0;
  tmp6 = 0.0;
  tmp4 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */), 0.0, tmp5, tmp6, data->simulationInfo->storedRelations[1]);
  gout[start_index] = ((tmp3 && tmp4)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp8 = 1.0;
  tmp9 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
  tmp7 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */), tmp8, tmp9, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp7) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */),100.0);
  tmp12 = 1.0;
  tmp13 = 0.0;
  tmp11 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */), 0.0, tmp12, tmp13, data->simulationInfo->storedRelations[3]);
  gout[start_index] = ((tmp10 && tmp11)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp15 = 1.0;
  tmp16 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
  tmp14 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */), tmp15, tmp16, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (tmp14) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp17 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */),100.0);
  tmp19 = 1.0;
  tmp20 = 0.0;
  tmp18 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */), 0.0, tmp19, tmp20, data->simulationInfo->storedRelations[5]);
  gout[start_index] = ((tmp17 && tmp18)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = 1.0;
  tmp23 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
  tmp21 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */), tmp22, tmp23, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp21) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp24 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */),100.0);
  tmp26 = 1.0;
  tmp27 = 0.0;
  tmp25 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */), 0.0, tmp26, tmp27, data->simulationInfo->storedRelations[7]);
  gout[start_index] = ((tmp24 && tmp25)) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *DroneSwarm_relationDescription(int i)
{
  const char *res[] = {"drones[4].dist_to_base < drones[4].R_base",
  "drones[4].net_charge > 0.0",
  "drones[3].dist_to_base < drones[3].R_base",
  "drones[3].net_charge > 0.0",
  "drones[2].dist_to_base < drones[2].R_base",
  "drones[2].net_charge > 0.0",
  "drones[1].dist_to_base < drones[1].R_base",
  "drones[1].net_charge > 0.0"};
  return res[i];
}

int DroneSwarm_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_boolean tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp29 = 1.0;
    tmp30 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
    tmp28 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */), tmp29, tmp30, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp28;
    current_index++;

    start_index = current_index;
    tmp32 = 1.0;
    tmp33 = 0.0;
    tmp31 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */), 0.0, tmp32, tmp33, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp31;
    current_index++;

    start_index = current_index;
    tmp35 = 1.0;
    tmp36 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
    tmp34 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */), tmp35, tmp36, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp34;
    current_index++;

    start_index = current_index;
    tmp38 = 1.0;
    tmp39 = 0.0;
    tmp37 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */), 0.0, tmp38, tmp39, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp37;
    current_index++;

    start_index = current_index;
    tmp41 = 1.0;
    tmp42 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
    tmp40 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */), tmp41, tmp42, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp40;
    current_index++;

    start_index = current_index;
    tmp44 = 1.0;
    tmp45 = 0.0;
    tmp43 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */), 0.0, tmp44, tmp45, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp43;
    current_index++;

    start_index = current_index;
    tmp47 = 1.0;
    tmp48 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
    tmp46 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */), tmp47, tmp48, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp46;
    current_index++;

    start_index = current_index;
    tmp50 = 1.0;
    tmp51 = 0.0;
    tmp49 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */), 0.0, tmp50, tmp51, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp49;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */) > 0.0);
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif

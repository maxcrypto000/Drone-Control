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
  static const char *res[] = {"drones[1].B > 0.0",
  "drones[1].dist_to_base < drones[1].R_base",
  "drones[2].B > 0.0",
  "drones[2].dist_to_base < drones[2].R_base",
  "drones[3].B > 0.0",
  "drones[3].dist_to_base < drones[3].R_base",
  "drones[4].B > 0.0",
  "drones[4].dist_to_base < drones[4].R_base",
  "noEvent(drones[4].B >= 100.0) and drones[4].net_charge > 0.0",
  "noEvent(drones[3].B >= 100.0) and drones[3].net_charge > 0.0",
  "noEvent(drones[2].B >= 100.0) and drones[2].net_charge > 0.0",
  "noEvent(drones[1].B >= 100.0) and drones[1].net_charge > 0.0"};
  static const int occurEqs0[] = {1,992};
  static const int occurEqs1[] = {1,990};
  static const int occurEqs2[] = {1,985};
  static const int occurEqs3[] = {1,983};
  static const int occurEqs4[] = {1,978};
  static const int occurEqs5[] = {1,976};
  static const int occurEqs6[] = {1,971};
  static const int occurEqs7[] = {1,969};
  static const int occurEqs8[] = {1,1039};
  static const int occurEqs9[] = {1,1065};
  static const int occurEqs10[] = {1,1091};
  static const int occurEqs11[] = {1,1116};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
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
extern void DroneSwarm_eqFunction_1009(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1031(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1032(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1033(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1034(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1035(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1036(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1037(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1038(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1039(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1057(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1058(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1059(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1060(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1061(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1062(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1063(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1064(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1065(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1083(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1084(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1085(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1086(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1087(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1088(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1089(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1090(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1091(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1109(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1110(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1111(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1112(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1113(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1117(DATA* data, threadData_t *threadData);

int DroneSwarm_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[65])(DATA*, threadData_t*) = {
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
    DroneSwarm_eqFunction_1009,
    DroneSwarm_eqFunction_1031,
    DroneSwarm_eqFunction_1032,
    DroneSwarm_eqFunction_1033,
    DroneSwarm_eqFunction_1034,
    DroneSwarm_eqFunction_1035,
    DroneSwarm_eqFunction_1036,
    DroneSwarm_eqFunction_1037,
    DroneSwarm_eqFunction_1038,
    DroneSwarm_eqFunction_1039,
    DroneSwarm_eqFunction_1057,
    DroneSwarm_eqFunction_1058,
    DroneSwarm_eqFunction_1059,
    DroneSwarm_eqFunction_1060,
    DroneSwarm_eqFunction_1061,
    DroneSwarm_eqFunction_1062,
    DroneSwarm_eqFunction_1063,
    DroneSwarm_eqFunction_1064,
    DroneSwarm_eqFunction_1065,
    DroneSwarm_eqFunction_1083,
    DroneSwarm_eqFunction_1084,
    DroneSwarm_eqFunction_1085,
    DroneSwarm_eqFunction_1086,
    DroneSwarm_eqFunction_1087,
    DroneSwarm_eqFunction_1088,
    DroneSwarm_eqFunction_1089,
    DroneSwarm_eqFunction_1090,
    DroneSwarm_eqFunction_1091,
    DroneSwarm_eqFunction_1109,
    DroneSwarm_eqFunction_1110,
    DroneSwarm_eqFunction_1111,
    DroneSwarm_eqFunction_1112,
    DroneSwarm_eqFunction_1113,
    DroneSwarm_eqFunction_1114,
    DroneSwarm_eqFunction_1115,
    DroneSwarm_eqFunction_1116,
    DroneSwarm_eqFunction_1117
  };
  
  for (int id = 0; id < 65; id++) {
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
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
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
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 0.0;
  tmp0 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */), 0.0, tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
  tmp3 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = 0.0;
  tmp6 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */), 0.0, tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
  tmp9 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */), tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (tmp9) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp13 = 1.0;
  tmp14 = 0.0;
  tmp12 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */), 0.0, tmp13, tmp14, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (tmp12) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp16 = 1.0;
  tmp17 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
  tmp15 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */), tmp16, tmp17, data->simulationInfo->storedRelations[5]);
  gout[start_index] = (tmp15) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp19 = 1.0;
  tmp20 = 0.0;
  tmp18 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */), 0.0, tmp19, tmp20, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp18) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = 1.0;
  tmp23 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
  tmp21 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */), tmp22, tmp23, data->simulationInfo->storedRelations[7]);
  gout[start_index] = (tmp21) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp24 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */),100.0);
  tmp26 = 1.0;
  tmp27 = 0.0;
  tmp25 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */), 0.0, tmp26, tmp27, data->simulationInfo->storedRelations[8]);
  gout[start_index] = ((tmp24 && tmp25)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp28 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */),100.0);
  tmp30 = 1.0;
  tmp31 = 0.0;
  tmp29 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */), 0.0, tmp30, tmp31, data->simulationInfo->storedRelations[9]);
  gout[start_index] = ((tmp28 && tmp29)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp32 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */),100.0);
  tmp34 = 1.0;
  tmp35 = 0.0;
  tmp33 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */), 0.0, tmp34, tmp35, data->simulationInfo->storedRelations[10]);
  gout[start_index] = ((tmp32 && tmp33)) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp36 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */),100.0);
  tmp38 = 1.0;
  tmp39 = 0.0;
  tmp37 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */), 0.0, tmp38, tmp39, data->simulationInfo->storedRelations[11]);
  gout[start_index] = ((tmp36 && tmp37)) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *DroneSwarm_relationDescription(int i)
{
  const char *res[] = {"drones[1].B > 0.0",
  "drones[1].dist_to_base < drones[1].R_base",
  "drones[2].B > 0.0",
  "drones[2].dist_to_base < drones[2].R_base",
  "drones[3].B > 0.0",
  "drones[3].dist_to_base < drones[3].R_base",
  "drones[4].B > 0.0",
  "drones[4].dist_to_base < drones[4].R_base",
  "drones[4].net_charge > 0.0",
  "drones[3].net_charge > 0.0",
  "drones[2].net_charge > 0.0",
  "drones[1].net_charge > 0.0"};
  return res[i];
}

int DroneSwarm_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

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
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_boolean tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_boolean tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp41 = 1.0;
    tmp42 = 0.0;
    tmp40 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */), 0.0, tmp41, tmp42, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp40;
    current_index++;

    start_index = current_index;
    tmp44 = 1.0;
    tmp45 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
    tmp43 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */), tmp44, tmp45, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp43;
    current_index++;

    start_index = current_index;
    tmp47 = 1.0;
    tmp48 = 0.0;
    tmp46 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */), 0.0, tmp47, tmp48, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp46;
    current_index++;

    start_index = current_index;
    tmp50 = 1.0;
    tmp51 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
    tmp49 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */), tmp50, tmp51, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp49;
    current_index++;

    start_index = current_index;
    tmp53 = 1.0;
    tmp54 = 0.0;
    tmp52 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */), 0.0, tmp53, tmp54, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp52;
    current_index++;

    start_index = current_index;
    tmp56 = 1.0;
    tmp57 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
    tmp55 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */), tmp56, tmp57, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp55;
    current_index++;

    start_index = current_index;
    tmp59 = 1.0;
    tmp60 = 0.0;
    tmp58 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */), 0.0, tmp59, tmp60, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp58;
    current_index++;

    start_index = current_index;
    tmp62 = 1.0;
    tmp63 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
    tmp61 = LessZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */), tmp62, tmp63, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp61;
    current_index++;

    start_index = current_index;
    tmp65 = 1.0;
    tmp66 = 0.0;
    tmp64 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */), 0.0, tmp65, tmp66, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp64;
    current_index++;

    start_index = current_index;
    tmp68 = 1.0;
    tmp69 = 0.0;
    tmp67 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */), 0.0, tmp68, tmp69, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[start_index] = tmp67;
    current_index++;

    start_index = current_index;
    tmp71 = 1.0;
    tmp72 = 0.0;
    tmp70 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */), 0.0, tmp71, tmp72, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[start_index] = tmp70;
    current_index++;

    start_index = current_index;
    tmp74 = 1.0;
    tmp75 = 0.0;
    tmp73 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */), 0.0, tmp74, tmp75, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[start_index] = tmp73;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */) < (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */) > 0.0);
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

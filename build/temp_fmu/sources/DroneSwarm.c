/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "DroneSwarm_model.h"
#include "simulation/solver/events.h"
#include "simulation/arrayIndex.h"



/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int DroneSwarm_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int DroneSwarm_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int DroneSwarm_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int DroneSwarm_inputNames(DATA *data, char ** names){
  
  return 0;
}

int DroneSwarm_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int DroneSwarm_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int DroneSwarm_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int DroneSwarm_output_function(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* bat_level[1] variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* bat_level[2] variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* bat_level[3] variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* bat_level[4] variable */);
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* pos_x[1] variable */);
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* pos_x[2] variable */);
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* pos_x[3] variable */);
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* pos_x[4] variable */);
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* pos_y[1] variable */);
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* pos_y[2] variable */);
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* pos_y[3] variable */);
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* pos_y[4] variable */);
  data->simulationInfo->outputVars[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* pos_z[1] variable */);
  data->simulationInfo->outputVars[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* pos_z[2] variable */);
  data->simulationInfo->outputVars[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* pos_z[3] variable */);
  data->simulationInfo->outputVars[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* pos_z[4] variable */);
  
  return 0;
}

int DroneSwarm_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int DroneSwarm_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 965
type: SIMPLE_ASSIGN
$DER.drones[4].z = drones[4].vz
*/
void DroneSwarm_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* der(drones[4].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].vz STATE(1) */);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
$DER.drones[4].y = drones[4].vy
*/
void DroneSwarm_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* der(drones[4].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vy STATE(1) */);
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
$DER.drones[4].x = drones[4].vx
*/
void DroneSwarm_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* der(drones[4].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vx STATE(1) */);
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
drones[4].dist_to_base = sqrt((drones[4].x - bases_x[4]) ^ 2.0 + (drones[4].y - bases_y[4]) ^ 2.0 + (drones[4].z - bases_z[4]) ^ 2.0)
*/
void DroneSwarm_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  tmp0 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bases_x[4] PARAM */);
  tmp1 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* bases_y[4] PARAM */);
  tmp2 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* bases_z[4] PARAM */);
  tmp3 = (tmp0 * tmp0) + (tmp1 * tmp1) + (tmp2 * tmp2);
  if(!(tmp3 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[4].x - bases_x[4]) ^ 2.0 + (drones[4].y - bases_y[4]) ^ 2.0 + (drones[4].z - bases_z[4]) ^ 2.0) was %g should be >= 0", tmp3);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */) = sqrt(tmp3);
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
drones[4].is_charging = drones[4].dist_to_base < drones[4].R_base
*/
void DroneSwarm_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp5 = 1.0;
  tmp6 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
  relationhysteresis(data, &tmp4, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */), tmp5, tmp6, 7, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* drones[4].is_charging DISCRETE */) = tmp4;
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
drones[4].v_norm = sqrt(drones[4].vx ^ 2.0 + drones[4].vy ^ 2.0 + drones[4].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp7 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vx STATE(1) */);
  tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vy STATE(1) */);
  tmp9 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].vz STATE(1) */);
  tmp10 = (tmp7 * tmp7) + (tmp8 * tmp8) + (tmp9 * tmp9);
  if(!(tmp10 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[4].vx ^ 2.0 + drones[4].vy ^ 2.0 + drones[4].vz ^ 2.0) was %g should be >= 0", tmp10);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* drones[4].v_norm variable */) = sqrt(tmp10);
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
drones[4].is_active = drones[4].B > 0.0
*/
void DroneSwarm_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = 1.0;
  tmp13 = 0.0;
  relationhysteresis(data, &tmp11, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */), 0.0, tmp12, tmp13, 6, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* drones[4].is_active DISCRETE */) = tmp11;
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
$DER.drones[3].z = drones[3].vz
*/
void DroneSwarm_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* der(drones[3].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].vz STATE(1) */);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
$DER.drones[3].y = drones[3].vy
*/
void DroneSwarm_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* der(drones[3].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vy STATE(1) */);
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
$DER.drones[3].x = drones[3].vx
*/
void DroneSwarm_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* der(drones[3].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vx STATE(1) */);
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
drones[3].dist_to_base = sqrt((drones[3].x - bases_x[3]) ^ 2.0 + (drones[3].y - bases_y[3]) ^ 2.0 + (drones[3].z - bases_z[3]) ^ 2.0)
*/
void DroneSwarm_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  tmp14 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bases_x[3] PARAM */);
  tmp15 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* bases_y[3] PARAM */);
  tmp16 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* bases_z[3] PARAM */);
  tmp17 = (tmp14 * tmp14) + (tmp15 * tmp15) + (tmp16 * tmp16);
  if(!(tmp17 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[3].x - bases_x[3]) ^ 2.0 + (drones[3].y - bases_y[3]) ^ 2.0 + (drones[3].z - bases_z[3]) ^ 2.0) was %g should be >= 0", tmp17);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */) = sqrt(tmp17);
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
drones[3].is_charging = drones[3].dist_to_base < drones[3].R_base
*/
void DroneSwarm_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = 1.0;
  tmp20 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
  relationhysteresis(data, &tmp18, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */), tmp19, tmp20, 5, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* drones[3].is_charging DISCRETE */) = tmp18;
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
drones[3].v_norm = sqrt(drones[3].vx ^ 2.0 + drones[3].vy ^ 2.0 + drones[3].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  tmp21 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vx STATE(1) */);
  tmp22 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vy STATE(1) */);
  tmp23 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].vz STATE(1) */);
  tmp24 = (tmp21 * tmp21) + (tmp22 * tmp22) + (tmp23 * tmp23);
  if(!(tmp24 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[3].vx ^ 2.0 + drones[3].vy ^ 2.0 + drones[3].vz ^ 2.0) was %g should be >= 0", tmp24);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* drones[3].v_norm variable */) = sqrt(tmp24);
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
drones[3].is_active = drones[3].B > 0.0
*/
void DroneSwarm_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  tmp26 = 1.0;
  tmp27 = 0.0;
  relationhysteresis(data, &tmp25, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */), 0.0, tmp26, tmp27, 4, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* drones[3].is_active DISCRETE */) = tmp25;
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
$DER.drones[2].z = drones[2].vz
*/
void DroneSwarm_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* der(drones[2].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].vz STATE(1) */);
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
$DER.drones[2].y = drones[2].vy
*/
void DroneSwarm_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* der(drones[2].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vy STATE(1) */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
$DER.drones[2].x = drones[2].vx
*/
void DroneSwarm_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* der(drones[2].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vx STATE(1) */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
drones[2].dist_to_base = sqrt((drones[2].x - bases_x[2]) ^ 2.0 + (drones[2].y - bases_y[2]) ^ 2.0 + (drones[2].z - bases_z[2]) ^ 2.0)
*/
void DroneSwarm_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  tmp28 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bases_x[2] PARAM */);
  tmp29 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* bases_y[2] PARAM */);
  tmp30 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* bases_z[2] PARAM */);
  tmp31 = (tmp28 * tmp28) + (tmp29 * tmp29) + (tmp30 * tmp30);
  if(!(tmp31 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[2].x - bases_x[2]) ^ 2.0 + (drones[2].y - bases_y[2]) ^ 2.0 + (drones[2].z - bases_z[2]) ^ 2.0) was %g should be >= 0", tmp31);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */) = sqrt(tmp31);
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
drones[2].is_charging = drones[2].dist_to_base < drones[2].R_base
*/
void DroneSwarm_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  tmp33 = 1.0;
  tmp34 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
  relationhysteresis(data, &tmp32, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */), tmp33, tmp34, 3, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* drones[2].is_charging DISCRETE */) = tmp32;
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
drones[2].v_norm = sqrt(drones[2].vx ^ 2.0 + drones[2].vy ^ 2.0 + drones[2].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  tmp35 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vx STATE(1) */);
  tmp36 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vy STATE(1) */);
  tmp37 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].vz STATE(1) */);
  tmp38 = (tmp35 * tmp35) + (tmp36 * tmp36) + (tmp37 * tmp37);
  if(!(tmp38 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[2].vx ^ 2.0 + drones[2].vy ^ 2.0 + drones[2].vz ^ 2.0) was %g should be >= 0", tmp38);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* drones[2].v_norm variable */) = sqrt(tmp38);
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
drones[2].is_active = drones[2].B > 0.0
*/
void DroneSwarm_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  tmp40 = 1.0;
  tmp41 = 0.0;
  relationhysteresis(data, &tmp39, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */), 0.0, tmp40, tmp41, 2, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* drones[2].is_active DISCRETE */) = tmp39;
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$DER.drones[1].z = drones[1].vz
*/
void DroneSwarm_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* der(drones[1].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].vz STATE(1) */);
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
$DER.drones[1].y = drones[1].vy
*/
void DroneSwarm_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* der(drones[1].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vy STATE(1) */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 988
type: SIMPLE_ASSIGN
$DER.drones[1].x = drones[1].vx
*/
void DroneSwarm_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* der(drones[1].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vx STATE(1) */);
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
drones[1].dist_to_base = sqrt((drones[1].x - bases_x[1]) ^ 2.0 + (drones[1].y - bases_y[1]) ^ 2.0 + (drones[1].z - bases_z[1]) ^ 2.0)
*/
void DroneSwarm_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  tmp42 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bases_x[1] PARAM */);
  tmp43 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* bases_y[1] PARAM */);
  tmp44 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* bases_z[1] PARAM */);
  tmp45 = (tmp42 * tmp42) + (tmp43 * tmp43) + (tmp44 * tmp44);
  if(!(tmp45 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[1].x - bases_x[1]) ^ 2.0 + (drones[1].y - bases_y[1]) ^ 2.0 + (drones[1].z - bases_z[1]) ^ 2.0) was %g should be >= 0", tmp45);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */) = sqrt(tmp45);
  threadData->lastEquationSolved = 989;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
drones[1].is_charging = drones[1].dist_to_base < drones[1].R_base
*/
void DroneSwarm_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  tmp47 = 1.0;
  tmp48 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
  relationhysteresis(data, &tmp46, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */), tmp47, tmp48, 1, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* drones[1].is_charging DISCRETE */) = tmp46;
  threadData->lastEquationSolved = 990;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
drones[1].v_norm = sqrt(drones[1].vx ^ 2.0 + drones[1].vy ^ 2.0 + drones[1].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  tmp49 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vx STATE(1) */);
  tmp50 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vy STATE(1) */);
  tmp51 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].vz STATE(1) */);
  tmp52 = (tmp49 * tmp49) + (tmp50 * tmp50) + (tmp51 * tmp51);
  if(!(tmp52 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[1].vx ^ 2.0 + drones[1].vy ^ 2.0 + drones[1].vz ^ 2.0) was %g should be >= 0", tmp52);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* drones[1].v_norm variable */) = sqrt(tmp52);
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
drones[1].is_active = drones[1].B > 0.0
*/
void DroneSwarm_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  modelica_boolean tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  tmp54 = 1.0;
  tmp55 = 0.0;
  relationhysteresis(data, &tmp53, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */), 0.0, tmp54, tmp55, 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* drones[1].is_active DISCRETE */) = tmp53;
  threadData->lastEquationSolved = 992;
}

/*
equation index: 993
type: SIMPLE_ASSIGN
bat_level[4] = drones[4].B
*/
void DroneSwarm_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* bat_level[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */);
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
bat_level[3] = drones[3].B
*/
void DroneSwarm_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* bat_level[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */);
  threadData->lastEquationSolved = 994;
}

/*
equation index: 995
type: SIMPLE_ASSIGN
bat_level[2] = drones[2].B
*/
void DroneSwarm_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* bat_level[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */);
  threadData->lastEquationSolved = 995;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
bat_level[1] = drones[1].B
*/
void DroneSwarm_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* bat_level[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */);
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
pos_z[4] = drones[4].z
*/
void DroneSwarm_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* pos_z[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */);
  threadData->lastEquationSolved = 997;
}

/*
equation index: 998
type: SIMPLE_ASSIGN
pos_z[3] = drones[3].z
*/
void DroneSwarm_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* pos_z[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */);
  threadData->lastEquationSolved = 998;
}

/*
equation index: 999
type: SIMPLE_ASSIGN
pos_z[2] = drones[2].z
*/
void DroneSwarm_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* pos_z[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */);
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
pos_z[1] = drones[1].z
*/
void DroneSwarm_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* pos_z[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */);
  threadData->lastEquationSolved = 1000;
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
pos_y[4] = drones[4].y
*/
void DroneSwarm_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* pos_y[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */);
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
pos_y[3] = drones[3].y
*/
void DroneSwarm_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* pos_y[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */);
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
pos_y[2] = drones[2].y
*/
void DroneSwarm_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* pos_y[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */);
  threadData->lastEquationSolved = 1003;
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
pos_y[1] = drones[1].y
*/
void DroneSwarm_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* pos_y[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */);
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
pos_x[4] = drones[4].x
*/
void DroneSwarm_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* pos_x[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */);
  threadData->lastEquationSolved = 1005;
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
pos_x[3] = drones[3].x
*/
void DroneSwarm_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* pos_x[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */);
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
pos_x[2] = drones[2].x
*/
void DroneSwarm_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* pos_x[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */);
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
pos_x[1] = drones[1].x
*/
void DroneSwarm_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* pos_x[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */);
  threadData->lastEquationSolved = 1008;
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
$whenCondition1 = sample(1, 0.0, 0.5)
*/
void DroneSwarm_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = data->simulationInfo->samples[0];
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1010
type: WHEN

when {$whenCondition1} then
  drones[4].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* drones[4].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 1010;
}

/*
equation index: 1011
type: WHEN

when {$whenCondition1} then
  drones[3].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* drones[3].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: WHEN

when {$whenCondition1} then
  drones[2].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* drones[2].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1013
type: WHEN

when {$whenCondition1} then
  drones[1].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* drones[1].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 1013;
}

/*
equation index: 1014
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[4].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  modelica_boolean tmp56;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp56 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* drones[4].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp56)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[855] /* drones[4].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1015
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[4].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  modelica_boolean tmp57;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp57 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* drones[4].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp57)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[839] /* drones[4].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1015;
}

/*
equation index: 1016
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[4].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  modelica_boolean tmp58;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp58 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* drones[4].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp58)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[823] /* drones[4].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1017
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[4].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  modelica_boolean tmp59;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp59 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* drones[4].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp59)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[856] /* drones[4].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1017;
}

/*
equation index: 1018
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[4].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1018};
  modelica_boolean tmp60;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp60 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* drones[4].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp60)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[840] /* drones[4].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1018;
}

/*
equation index: 1019
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[4].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  modelica_boolean tmp61;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp61 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* drones[4].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp61)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[824] /* drones[4].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1020
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[4].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  modelica_boolean tmp62;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp62 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* drones[4].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp62)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[857] /* drones[4].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1020;
}

/*
equation index: 1021
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[4].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  modelica_boolean tmp63;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp63 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* drones[4].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp63)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[841] /* drones[4].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1021;
}

/*
equation index: 1022
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[4].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  modelica_boolean tmp64;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp64 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* drones[4].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp64)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[825] /* drones[4].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1022;
}

/*
equation index: 1023
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[4].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1023};
  modelica_boolean tmp65;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp65 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* drones[4].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp65)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[858] /* drones[4].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1023;
}

/*
equation index: 1024
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[4].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  modelica_boolean tmp66;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp66 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* drones[4].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp66)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[842] /* drones[4].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1025
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[4].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  modelica_boolean tmp67;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp67 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* drones[4].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp67)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[826] /* drones[4].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: WHEN

when {$whenCondition1} then
  drones[4].min_dist = DroneSwarm.drones.calculate_min_dist(drones[4].known_swarm_x, drones[4].known_swarm_y, drones[4].known_swarm_z, 4);
end when;
*/
void DroneSwarm_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  real_array tmp68;
  real_array tmp69;
  real_array tmp70;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp68, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* drones[4].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp69, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* drones[4].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp70, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* drones[4].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* drones[4].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp68, tmp69, tmp70, ((modelica_integer) 4));
  }
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: WHEN

when {$whenCondition1} then
  drones[4].target_x = 20.0;
end when;
*/
void DroneSwarm_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* drones[4].target_x DISCRETE */) = 20.0;
  }
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: WHEN

when {$whenCondition1} then
  drones[4].target_y = -9.0;
end when;
*/
void DroneSwarm_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* drones[4].target_y DISCRETE */) = -9.0;
  }
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: WHEN

when {$whenCondition1} then
  drones[4].target_z = 10.0;
end when;
*/
void DroneSwarm_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* drones[4].target_z DISCRETE */) = 10.0;
  }
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: WHEN

when {$whenCondition1} then
  (drones[4].ai_ux, drones[4].ai_uy, drones[4].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[4].x, drones[4].y, drones[4].z, drones[4].B, drones[4].min_dist, 1.0, drones[4].target_x - drones[4].x, drones[4].target_y - drones[4].y, drones[4].target_z - drones[4].z, time);
end when;
*/
void DroneSwarm_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* drones[4].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* drones[4].min_dist DISCRETE */), 1.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* drones[4].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* drones[4].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* drones[4].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* drones[4].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* drones[4].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
drones[4].uy_eff = if drones[4].is_active then drones[4].ai_uy else 0.0
*/
void DroneSwarm_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* drones[4].uy_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* drones[4].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* drones[4].ai_uy DISCRETE */):0.0);
  threadData->lastEquationSolved = 1031;
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
$DER.drones[4].vy = (drones[4].uy_eff - drones[4].kd * drones[4].vy * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* der(drones[4].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* drones[4].uy_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1032;
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
drones[4].uz_eff = if drones[4].is_active then drones[4].ai_uz else 0.0
*/
void DroneSwarm_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* drones[4].uz_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* drones[4].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* drones[4].ai_uz DISCRETE */):0.0);
  threadData->lastEquationSolved = 1033;
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
$DER.drones[4].vz = (drones[4].uz_eff - drones[4].kd * drones[4].vz * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* der(drones[4].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* drones[4].uz_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
drones[4].ux_eff = if drones[4].is_active then drones[4].ai_ux else 0.0
*/
void DroneSwarm_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].ux_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* drones[4].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* drones[4].ai_ux DISCRETE */):0.0);
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
$DER.drones[4].vx = (drones[4].ux_eff - drones[4].kd * drones[4].vx * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* der(drones[4].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].ux_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
drones[4].discharge_rate = drones[4].c1 + drones[4].c2 * (abs(drones[4].ux_eff) + abs(drones[4].uy_eff) + abs(drones[4].uz_eff))
*/
void DroneSwarm_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[4].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* drones[4].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* drones[4].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].ux_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* drones[4].uy_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* drones[4].uz_eff variable */)));
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
drones[4].net_charge = drones[4].charge_rate - drones[4].discharge_rate
*/
void DroneSwarm_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* drones[4].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[4].discharge_rate variable */);
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
$DER.drones[4].B = if drones[4].is_charging then if noEvent(drones[4].B >= 100.0) and drones[4].net_charge > 0.0 then 0.0 else drones[4].net_charge else if noEvent(drones[4].B <= 0.0) then 0.0 else -drones[4].discharge_rate
*/
void DroneSwarm_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1039};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  tmp76 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* drones[4].is_charging DISCRETE */);
  if(tmp76)
  {
    tmp71 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */),100.0);
    tmp73 = 1.0;
    tmp74 = 0.0;
    relationhysteresis(data, &tmp72, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */), 0.0, tmp73, tmp74, 8, Greater, GreaterZC);
    tmp77 = ((tmp71 && tmp72)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */));
  }
  else
  {
    tmp75 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */),0.0);
    tmp77 = (tmp75?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[4].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(drones[4].B) STATE_DER */) = tmp77;
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1040
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[3].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  modelica_boolean tmp78;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp78 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* drones[3].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp78)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[851] /* drones[3].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[3].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1041};
  modelica_boolean tmp79;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp79 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* drones[3].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp79)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[835] /* drones[3].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[3].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  modelica_boolean tmp80;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp80 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* drones[3].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp80)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[819] /* drones[3].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[3].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1043};
  modelica_boolean tmp81;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp81 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* drones[3].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp81)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[852] /* drones[3].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[3].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  modelica_boolean tmp82;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp82 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* drones[3].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp82)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[836] /* drones[3].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[3].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  modelica_boolean tmp83;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp83 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* drones[3].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp83)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[820] /* drones[3].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[3].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1046};
  modelica_boolean tmp84;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp84 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* drones[3].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp84)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[853] /* drones[3].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[3].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  modelica_boolean tmp85;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp85 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* drones[3].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp85)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[837] /* drones[3].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[3].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  modelica_boolean tmp86;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp86 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* drones[3].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp86)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[821] /* drones[3].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1049
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[3].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1049};
  modelica_boolean tmp87;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp87 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* drones[3].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp87)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[854] /* drones[3].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[3].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1050};
  modelica_boolean tmp88;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp88 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* drones[3].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp88)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[838] /* drones[3].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[3].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  modelica_boolean tmp89;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp89 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* drones[3].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp89)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[822] /* drones[3].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: WHEN

when {$whenCondition1} then
  drones[3].min_dist = DroneSwarm.drones.calculate_min_dist(drones[3].known_swarm_x, drones[3].known_swarm_y, drones[3].known_swarm_z, 3);
end when;
*/
void DroneSwarm_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  real_array tmp90;
  real_array tmp91;
  real_array tmp92;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp90, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* drones[3].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp91, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* drones[3].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp92, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* drones[3].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* drones[3].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp90, tmp91, tmp92, ((modelica_integer) 3));
  }
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: WHEN

when {$whenCondition1} then
  drones[3].target_x = 20.0;
end when;
*/
void DroneSwarm_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* drones[3].target_x DISCRETE */) = 20.0;
  }
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: WHEN

when {$whenCondition1} then
  drones[3].target_y = -9.0;
end when;
*/
void DroneSwarm_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* drones[3].target_y DISCRETE */) = -9.0;
  }
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: WHEN

when {$whenCondition1} then
  drones[3].target_z = 10.0;
end when;
*/
void DroneSwarm_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1055};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* drones[3].target_z DISCRETE */) = 10.0;
  }
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1056
type: WHEN

when {$whenCondition1} then
  (drones[3].ai_ux, drones[3].ai_uy, drones[3].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[3].x, drones[3].y, drones[3].z, drones[3].B, drones[3].min_dist, 0.6666666666666666, drones[3].target_x - drones[3].x, drones[3].target_y - drones[3].y, drones[3].target_z - drones[3].z, time);
end when;
*/
void DroneSwarm_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1056};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* drones[3].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* drones[3].min_dist DISCRETE */), 0.6666666666666666, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* drones[3].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* drones[3].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* drones[3].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* drones[3].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* drones[3].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1056;
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
drones[3].uy_eff = if drones[3].is_active then drones[3].ai_uy else 0.0
*/
void DroneSwarm_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* drones[3].uy_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* drones[3].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* drones[3].ai_uy DISCRETE */):0.0);
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
$DER.drones[3].vy = (drones[3].uy_eff - drones[3].kd * drones[3].vy * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* der(drones[3].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* drones[3].uy_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
drones[3].uz_eff = if drones[3].is_active then drones[3].ai_uz else 0.0
*/
void DroneSwarm_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* drones[3].uz_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* drones[3].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* drones[3].ai_uz DISCRETE */):0.0);
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
$DER.drones[3].vz = (drones[3].uz_eff - drones[3].kd * drones[3].vz * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* der(drones[3].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* drones[3].uz_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
drones[3].ux_eff = if drones[3].is_active then drones[3].ai_ux else 0.0
*/
void DroneSwarm_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].ux_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* drones[3].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* drones[3].ai_ux DISCRETE */):0.0);
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
$DER.drones[3].vx = (drones[3].ux_eff - drones[3].kd * drones[3].vx * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(drones[3].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].ux_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
drones[3].discharge_rate = drones[3].c1 + drones[3].c2 * (abs(drones[3].ux_eff) + abs(drones[3].uy_eff) + abs(drones[3].uz_eff))
*/
void DroneSwarm_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* drones[3].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* drones[3].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* drones[3].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].ux_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* drones[3].uy_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* drones[3].uz_eff variable */)));
  threadData->lastEquationSolved = 1063;
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
drones[3].net_charge = drones[3].charge_rate - drones[3].discharge_rate
*/
void DroneSwarm_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* drones[3].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* drones[3].discharge_rate variable */);
  threadData->lastEquationSolved = 1064;
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
$DER.drones[3].B = if drones[3].is_charging then if noEvent(drones[3].B >= 100.0) and drones[3].net_charge > 0.0 then 0.0 else drones[3].net_charge else if noEvent(drones[3].B <= 0.0) then 0.0 else -drones[3].discharge_rate
*/
void DroneSwarm_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1065};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  tmp98 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* drones[3].is_charging DISCRETE */);
  if(tmp98)
  {
    tmp93 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */),100.0);
    tmp95 = 1.0;
    tmp96 = 0.0;
    relationhysteresis(data, &tmp94, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */), 0.0, tmp95, tmp96, 9, Greater, GreaterZC);
    tmp99 = ((tmp93 && tmp94)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */));
  }
  else
  {
    tmp97 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */),0.0);
    tmp99 = (tmp97?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* drones[3].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(drones[3].B) STATE_DER */) = tmp99;
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[2].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  modelica_boolean tmp100;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp100 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* drones[2].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp100)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[847] /* drones[2].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[2].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  modelica_boolean tmp101;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp101 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* drones[2].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp101)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[831] /* drones[2].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[2].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  modelica_boolean tmp102;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp102 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* drones[2].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp102)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[815] /* drones[2].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[2].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  modelica_boolean tmp103;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp103 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* drones[2].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp103)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[848] /* drones[2].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[2].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  modelica_boolean tmp104;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp104 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* drones[2].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp104)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[832] /* drones[2].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[2].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  modelica_boolean tmp105;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp105 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* drones[2].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp105)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[816] /* drones[2].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[2].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  modelica_boolean tmp106;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp106 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* drones[2].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp106)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[849] /* drones[2].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[2].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  modelica_boolean tmp107;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp107 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* drones[2].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp107)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[833] /* drones[2].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[2].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  modelica_boolean tmp108;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp108 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* drones[2].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp108)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[817] /* drones[2].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[2].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  modelica_boolean tmp109;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp109 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* drones[2].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp109)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[850] /* drones[2].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[2].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  modelica_boolean tmp110;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp110 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* drones[2].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp110)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[834] /* drones[2].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[2].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  modelica_boolean tmp111;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp111 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* drones[2].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp111)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[818] /* drones[2].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: WHEN

when {$whenCondition1} then
  drones[2].min_dist = DroneSwarm.drones.calculate_min_dist(drones[2].known_swarm_x, drones[2].known_swarm_y, drones[2].known_swarm_z, 2);
end when;
*/
void DroneSwarm_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  real_array tmp112;
  real_array tmp113;
  real_array tmp114;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp112, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* drones[2].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp113, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* drones[2].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp114, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* drones[2].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* drones[2].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp112, tmp113, tmp114, ((modelica_integer) 2));
  }
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: WHEN

when {$whenCondition1} then
  drones[2].target_x = 20.0;
end when;
*/
void DroneSwarm_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* drones[2].target_x DISCRETE */) = 20.0;
  }
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: WHEN

when {$whenCondition1} then
  drones[2].target_y = -9.0;
end when;
*/
void DroneSwarm_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* drones[2].target_y DISCRETE */) = -9.0;
  }
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: WHEN

when {$whenCondition1} then
  drones[2].target_z = 10.0;
end when;
*/
void DroneSwarm_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* drones[2].target_z DISCRETE */) = 10.0;
  }
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: WHEN

when {$whenCondition1} then
  (drones[2].ai_ux, drones[2].ai_uy, drones[2].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[2].x, drones[2].y, drones[2].z, drones[2].B, drones[2].min_dist, 0.3333333333333333, drones[2].target_x - drones[2].x, drones[2].target_y - drones[2].y, drones[2].target_z - drones[2].z, time);
end when;
*/
void DroneSwarm_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* drones[2].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* drones[2].min_dist DISCRETE */), 0.3333333333333333, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* drones[2].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* drones[2].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* drones[2].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* drones[2].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* drones[2].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
drones[2].uz_eff = if drones[2].is_active then drones[2].ai_uz else 0.0
*/
void DroneSwarm_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* drones[2].uz_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* drones[2].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* drones[2].ai_uz DISCRETE */):0.0);
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
$DER.drones[2].vz = (drones[2].uz_eff - drones[2].kd * drones[2].vz * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* der(drones[2].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* drones[2].uz_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
drones[2].uy_eff = if drones[2].is_active then drones[2].ai_uy else 0.0
*/
void DroneSwarm_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* drones[2].uy_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* drones[2].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* drones[2].ai_uy DISCRETE */):0.0);
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
$DER.drones[2].vy = (drones[2].uy_eff - drones[2].kd * drones[2].vy * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* der(drones[2].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* drones[2].uy_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
drones[2].ux_eff = if drones[2].is_active then drones[2].ai_ux else 0.0
*/
void DroneSwarm_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].ux_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* drones[2].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* drones[2].ai_ux DISCRETE */):0.0);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
$DER.drones[2].vx = (drones[2].ux_eff - drones[2].kd * drones[2].vx * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* der(drones[2].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].ux_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
drones[2].discharge_rate = drones[2].c1 + drones[2].c2 * (abs(drones[2].ux_eff) + abs(drones[2].uy_eff) + abs(drones[2].uz_eff))
*/
void DroneSwarm_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* drones[2].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* drones[2].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].ux_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* drones[2].uy_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* drones[2].uz_eff variable */)));
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
drones[2].net_charge = drones[2].charge_rate - drones[2].discharge_rate
*/
void DroneSwarm_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* drones[2].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].discharge_rate variable */);
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
$DER.drones[2].B = if drones[2].is_charging then if noEvent(drones[2].B >= 100.0) and drones[2].net_charge > 0.0 then 0.0 else drones[2].net_charge else if noEvent(drones[2].B <= 0.0) then 0.0 else -drones[2].discharge_rate
*/
void DroneSwarm_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  tmp120 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* drones[2].is_charging DISCRETE */);
  if(tmp120)
  {
    tmp115 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */),100.0);
    tmp117 = 1.0;
    tmp118 = 0.0;
    relationhysteresis(data, &tmp116, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */), 0.0, tmp117, tmp118, 10, Greater, GreaterZC);
    tmp121 = ((tmp115 && tmp116)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */));
  }
  else
  {
    tmp119 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */),0.0);
    tmp121 = (tmp119?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(drones[2].B) STATE_DER */) = tmp121;
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[1].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  modelica_boolean tmp122;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp122 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* drones[1].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp122)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[843] /* drones[1].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[1].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  modelica_boolean tmp123;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp123 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* drones[1].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp123)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[827] /* drones[1].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[1].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  modelica_boolean tmp124;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp124 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* drones[1].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp124)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[811] /* drones[1].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[1].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  modelica_boolean tmp125;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp125 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* drones[1].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp125)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[844] /* drones[1].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[1].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  modelica_boolean tmp126;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp126 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* drones[1].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp126)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[828] /* drones[1].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[1].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  modelica_boolean tmp127;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp127 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* drones[1].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp127)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[812] /* drones[1].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[1].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  modelica_boolean tmp128;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp128 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* drones[1].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp128)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[845] /* drones[1].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[1].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  modelica_boolean tmp129;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp129 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* drones[1].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp129)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[829] /* drones[1].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[1].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  modelica_boolean tmp130;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp130 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* drones[1].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp130)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[813] /* drones[1].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[1].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  modelica_boolean tmp131;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp131 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* drones[1].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp131)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[846] /* drones[1].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[1].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  modelica_boolean tmp132;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp132 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* drones[1].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp132)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[830] /* drones[1].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[1].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  modelica_boolean tmp133;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp133 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* drones[1].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp133)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[814] /* drones[1].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: WHEN

when {$whenCondition1} then
  drones[1].min_dist = DroneSwarm.drones.calculate_min_dist(drones[1].known_swarm_x, drones[1].known_swarm_y, drones[1].known_swarm_z, 1);
end when;
*/
void DroneSwarm_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  real_array tmp134;
  real_array tmp135;
  real_array tmp136;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp134, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* drones[1].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp135, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* drones[1].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp136, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* drones[1].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* drones[1].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp134, tmp135, tmp136, ((modelica_integer) 1));
  }
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: WHEN

when {$whenCondition1} then
  drones[1].target_x = 20.0;
end when;
*/
void DroneSwarm_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* drones[1].target_x DISCRETE */) = 20.0;
  }
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: WHEN

when {$whenCondition1} then
  drones[1].target_y = -9.0;
end when;
*/
void DroneSwarm_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* drones[1].target_y DISCRETE */) = -9.0;
  }
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: WHEN

when {$whenCondition1} then
  drones[1].target_z = 10.0;
end when;
*/
void DroneSwarm_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* drones[1].target_z DISCRETE */) = 10.0;
  }
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: WHEN

when {$whenCondition1} then
  (drones[1].ai_ux, drones[1].ai_uy, drones[1].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[1].x, drones[1].y, drones[1].z, drones[1].B, drones[1].min_dist, 0.0, drones[1].target_x - drones[1].x, drones[1].target_y - drones[1].y, drones[1].target_z - drones[1].z, time);
end when;
*/
void DroneSwarm_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* drones[1].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* drones[1].min_dist DISCRETE */), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* drones[1].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* drones[1].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* drones[1].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* drones[1].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* drones[1].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
drones[1].uz_eff = if drones[1].is_active then drones[1].ai_uz else 0.0
*/
void DroneSwarm_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* drones[1].uz_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* drones[1].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* drones[1].ai_uz DISCRETE */):0.0);
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
$DER.drones[1].vz = (drones[1].uz_eff - drones[1].kd * drones[1].vz * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(drones[1].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* drones[1].uz_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
drones[1].uy_eff = if drones[1].is_active then drones[1].ai_uy else 0.0
*/
void DroneSwarm_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* drones[1].uy_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* drones[1].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* drones[1].ai_uy DISCRETE */):0.0);
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
$DER.drones[1].vy = (drones[1].uy_eff - drones[1].kd * drones[1].vy * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* der(drones[1].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* drones[1].uy_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
drones[1].ux_eff = if drones[1].is_active then drones[1].ai_ux else 0.0
*/
void DroneSwarm_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].ux_eff variable */) = ((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* drones[1].is_active DISCRETE */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* drones[1].ai_ux DISCRETE */):0.0);
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
drones[1].discharge_rate = drones[1].c1 + drones[1].c2 * (abs(drones[1].ux_eff) + abs(drones[1].uy_eff) + abs(drones[1].uz_eff))
*/
void DroneSwarm_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[1].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* drones[1].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* drones[1].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].ux_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* drones[1].uy_eff variable */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* drones[1].uz_eff variable */)));
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
drones[1].net_charge = drones[1].charge_rate - drones[1].discharge_rate
*/
void DroneSwarm_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* drones[1].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[1].discharge_rate variable */);
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
$DER.drones[1].B = if drones[1].is_charging then if noEvent(drones[1].B >= 100.0) and drones[1].net_charge > 0.0 then 0.0 else drones[1].net_charge else if noEvent(drones[1].B <= 0.0) then 0.0 else -drones[1].discharge_rate
*/
void DroneSwarm_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  tmp142 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* drones[1].is_charging DISCRETE */);
  if(tmp142)
  {
    tmp137 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */),100.0);
    tmp139 = 1.0;
    tmp140 = 0.0;
    relationhysteresis(data, &tmp138, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */), 0.0, tmp139, tmp140, 11, Greater, GreaterZC);
    tmp143 = ((tmp137 && tmp138)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */));
  }
  else
  {
    tmp141 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */),0.0);
    tmp143 = (tmp141?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[1].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(drones[1].B) STATE_DER */) = tmp143;
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
$DER.drones[1].vx = (drones[1].ux_eff - drones[1].kd * drones[1].vx * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* der(drones[1].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].ux_eff variable */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: ARRAY_CALL_ASSIGN

world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void DroneSwarm_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  real_array tmp144;
  real_array_create(&tmp144, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* world.z_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT3, _OMC_LIT2), tmp144);
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[2] = world.z_label.R_lines[1,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* world.z_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* world.z_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[2] = world.z_label.cylinders[2].lengthDirection[2]
*/
void DroneSwarm_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* world.z_label.cylinders[1].lengthDirection[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* world.z_label.cylinders[2].lengthDirection[2] variable */);
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[1] = world.z_label.R_lines[1,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* world.z_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* world.z_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[1] = world.z_label.cylinders[2].lengthDirection[1]
*/
void DroneSwarm_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* world.z_label.cylinders[1].lengthDirection[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* world.z_label.cylinders[2].lengthDirection[1] variable */);
  threadData->lastEquationSolved = 1122;
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[2] = world.z_label.R_lines[2,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* world.z_label.cylinders[3].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1123;
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[2] = world.z_label.cylinders[3].r[2]
*/
void DroneSwarm_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[756]] /* world.z_label.cylinders[2].r[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* world.z_label.cylinders[3].r[2] variable */);
  threadData->lastEquationSolved = 1124;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[2] = (world.z_label.R_lines[1,2] - world.z_label.R_lines[2,2]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* world.z_label.cylinders[3].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* world.z_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[1] = world.z_label.R_lines[2,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* world.z_label.cylinders[3].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1126;
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[1] = world.z_label.cylinders[3].r[1]
*/
void DroneSwarm_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[755]] /* world.z_label.cylinders[2].r[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* world.z_label.cylinders[3].r[1] variable */);
  threadData->lastEquationSolved = 1127;
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[1] = (world.z_label.R_lines[1,1] - world.z_label.R_lines[2,1]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* world.z_label.cylinders[3].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* world.z_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1128;
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[3] = world.z_label.R_lines[1,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* world.z_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* world.z_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1129;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[3] = world.z_label.cylinders[2].lengthDirection[3]
*/
void DroneSwarm_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* world.z_label.cylinders[1].lengthDirection[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* world.z_label.cylinders[2].lengthDirection[3] variable */);
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[3] = world.labelStart + world.z_label.R_lines[2,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* world.z_label.cylinders[3].r[3] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1131;
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[3] = world.z_label.cylinders[3].r[3]
*/
void DroneSwarm_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[757]] /* world.z_label.cylinders[2].r[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* world.z_label.cylinders[3].r[3] variable */);
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[3] = (world.z_label.R_lines[1,3] - world.z_label.R_lines[2,3]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* world.z_label.cylinders[3].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* world.z_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1133;
}

/*
equation index: 1134
type: ARRAY_CALL_ASSIGN

world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void DroneSwarm_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  real_array tmp145;
  real_array_create(&tmp145, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* world.y_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT2, _OMC_LIT4), tmp145);
  threadData->lastEquationSolved = 1134;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[2] = world.labelStart + world.y_label.R_lines[2,2] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[627]] /* world.y_label.cylinders[2].r[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[1] = world.y_label.R_lines[1,1] * world.scaledLabel + world.y_label.R_lines[2,1] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* world.y_label.cylinders[1].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* world.y_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1136;
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[1] = world.y_label.R_lines[2,1] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* world.y_label.cylinders[2].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1137;
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[1] = world.y_label.R_lines[1,1] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,1] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* world.y_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* world.y_label.R_lines[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1138;
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[2] = world.y_label.R_lines[1,2] * world.scaledLabel + world.y_label.R_lines[2,2] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.cylinders[1].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* world.y_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1139;
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[2] = world.y_label.R_lines[1,2] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,2] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* world.y_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* world.y_label.R_lines[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1140;
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[3] = world.y_label.R_lines[2,3] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[628]] /* world.y_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1141;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[3] = world.y_label.R_lines[1,3] * world.scaledLabel + world.y_label.R_lines[2,3] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* world.y_label.cylinders[1].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* world.y_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[3] = world.y_label.R_lines[1,3] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,3] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* world.y_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* world.y_label.R_lines[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1144
type: ARRAY_CALL_ASSIGN

world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void DroneSwarm_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  real_array tmp146;
  real_array_create(&tmp146, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* world.x_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT1, _OMC_LIT2), tmp146);
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[2] = world.x_label.R_lines[2,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[506]] /* world.x_label.cylinders[2].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[1] = world.scaledLabel * (world.x_label.R_lines[1,1] + world.x_label.R_lines[2,1])
*/
void DroneSwarm_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[499]] /* world.x_label.cylinders[1].lengthDirection[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* world.x_label.R_lines[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* world.x_label.R_lines[2,1] variable */));
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[1] = world.labelStart + world.x_label.R_lines[2,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[505]] /* world.x_label.cylinders[2].r[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1147;
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[1] = (world.x_label.R_lines[1,1] - world.x_label.R_lines[2,1]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[502]] /* world.x_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* world.x_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[2] = world.scaledLabel * (world.x_label.R_lines[1,2] + world.x_label.R_lines[2,2])
*/
void DroneSwarm_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[500]] /* world.x_label.cylinders[1].lengthDirection[2] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* world.x_label.R_lines[1,2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* world.x_label.R_lines[2,2] variable */));
  threadData->lastEquationSolved = 1149;
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[2] = (world.x_label.R_lines[1,2] - world.x_label.R_lines[2,2]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[503]] /* world.x_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* world.x_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1150;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[3] = world.x_label.R_lines[2,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[507]] /* world.x_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[3] = world.scaledLabel * (world.x_label.R_lines[1,3] + world.x_label.R_lines[2,3])
*/
void DroneSwarm_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[501]] /* world.x_label.cylinders[1].lengthDirection[3] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* world.x_label.R_lines[1,3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* world.x_label.R_lines[2,3] variable */));
  threadData->lastEquationSolved = 1152;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[3] = (world.x_label.R_lines[1,3] - world.x_label.R_lines[2,3]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[504]] /* world.x_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* world.x_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1153;
}

OMC_DISABLE_OPT
int DroneSwarm_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  DroneSwarm_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[189])(DATA*, threadData_t*) = {
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
    DroneSwarm_eqFunction_1009,
    DroneSwarm_eqFunction_1010,
    DroneSwarm_eqFunction_1011,
    DroneSwarm_eqFunction_1012,
    DroneSwarm_eqFunction_1013,
    DroneSwarm_eqFunction_1014,
    DroneSwarm_eqFunction_1015,
    DroneSwarm_eqFunction_1016,
    DroneSwarm_eqFunction_1017,
    DroneSwarm_eqFunction_1018,
    DroneSwarm_eqFunction_1019,
    DroneSwarm_eqFunction_1020,
    DroneSwarm_eqFunction_1021,
    DroneSwarm_eqFunction_1022,
    DroneSwarm_eqFunction_1023,
    DroneSwarm_eqFunction_1024,
    DroneSwarm_eqFunction_1025,
    DroneSwarm_eqFunction_1026,
    DroneSwarm_eqFunction_1027,
    DroneSwarm_eqFunction_1028,
    DroneSwarm_eqFunction_1029,
    DroneSwarm_eqFunction_1030,
    DroneSwarm_eqFunction_1031,
    DroneSwarm_eqFunction_1032,
    DroneSwarm_eqFunction_1033,
    DroneSwarm_eqFunction_1034,
    DroneSwarm_eqFunction_1035,
    DroneSwarm_eqFunction_1036,
    DroneSwarm_eqFunction_1037,
    DroneSwarm_eqFunction_1038,
    DroneSwarm_eqFunction_1039,
    DroneSwarm_eqFunction_1040,
    DroneSwarm_eqFunction_1041,
    DroneSwarm_eqFunction_1042,
    DroneSwarm_eqFunction_1043,
    DroneSwarm_eqFunction_1044,
    DroneSwarm_eqFunction_1045,
    DroneSwarm_eqFunction_1046,
    DroneSwarm_eqFunction_1047,
    DroneSwarm_eqFunction_1048,
    DroneSwarm_eqFunction_1049,
    DroneSwarm_eqFunction_1050,
    DroneSwarm_eqFunction_1051,
    DroneSwarm_eqFunction_1052,
    DroneSwarm_eqFunction_1053,
    DroneSwarm_eqFunction_1054,
    DroneSwarm_eqFunction_1055,
    DroneSwarm_eqFunction_1056,
    DroneSwarm_eqFunction_1057,
    DroneSwarm_eqFunction_1058,
    DroneSwarm_eqFunction_1059,
    DroneSwarm_eqFunction_1060,
    DroneSwarm_eqFunction_1061,
    DroneSwarm_eqFunction_1062,
    DroneSwarm_eqFunction_1063,
    DroneSwarm_eqFunction_1064,
    DroneSwarm_eqFunction_1065,
    DroneSwarm_eqFunction_1066,
    DroneSwarm_eqFunction_1067,
    DroneSwarm_eqFunction_1068,
    DroneSwarm_eqFunction_1069,
    DroneSwarm_eqFunction_1070,
    DroneSwarm_eqFunction_1071,
    DroneSwarm_eqFunction_1072,
    DroneSwarm_eqFunction_1073,
    DroneSwarm_eqFunction_1074,
    DroneSwarm_eqFunction_1075,
    DroneSwarm_eqFunction_1076,
    DroneSwarm_eqFunction_1077,
    DroneSwarm_eqFunction_1078,
    DroneSwarm_eqFunction_1079,
    DroneSwarm_eqFunction_1080,
    DroneSwarm_eqFunction_1081,
    DroneSwarm_eqFunction_1082,
    DroneSwarm_eqFunction_1083,
    DroneSwarm_eqFunction_1084,
    DroneSwarm_eqFunction_1085,
    DroneSwarm_eqFunction_1086,
    DroneSwarm_eqFunction_1087,
    DroneSwarm_eqFunction_1088,
    DroneSwarm_eqFunction_1089,
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
  
  for (int id = 0; id < 189; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int DroneSwarm_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
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

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
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
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 65; id++) {
      eqFunctions[id](data, threadData);
    }
  }
}

int DroneSwarm_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  DroneSwarm_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

void DroneSwarm_ODE_DAG(DATA* data, threadData_t* threadData)
{
  const size_t eqMap[] = {965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 1009, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117};
  buildEvalDAG_ODE(data->modelData, sizeof(eqMap)/sizeof(size_t), eqMap);
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "DroneSwarm_12jac.h"
#include "DroneSwarm_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks DroneSwarm_callback = {
  NULL,    /* performSimulation */
  NULL,    /* performQSSSimulation */
  NULL,    /* updateContinuousSystem */
  DroneSwarm_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  NULL,    /* initialNonLinearSystem */
  NULL,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  DroneSwarm_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  DroneSwarm_initializeDAEmodeData,
  DroneSwarm_ODE_DAG,
  DroneSwarm_functionODE,
  DroneSwarm_functionAlgebraics,
  DroneSwarm_functionDAE,
  DroneSwarm_functionLocalKnownVars,
  DroneSwarm_input_function,
  DroneSwarm_input_function_init,
  DroneSwarm_input_function_updateStartValues,
  DroneSwarm_data_function,
  DroneSwarm_output_function,
  DroneSwarm_setc_function,
  DroneSwarm_setb_function,
  DroneSwarm_function_storeDelayed,
  DroneSwarm_function_storeSpatialDistribution,
  DroneSwarm_function_initSpatialDistribution,
  DroneSwarm_updateBoundVariableAttributes,
  DroneSwarm_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  NULL,
  DroneSwarm_functionRemovedInitialEquations,
  DroneSwarm_updateBoundParameters,
  DroneSwarm_checkForAsserts,
  DroneSwarm_function_ZeroCrossingsEquations,
  DroneSwarm_function_ZeroCrossings,
  DroneSwarm_function_updateRelations,
  DroneSwarm_zeroCrossingDescription,
  DroneSwarm_relationDescription,
  DroneSwarm_function_initSample,
  DroneSwarm_INDEX_JAC_A,
  DroneSwarm_INDEX_JAC_ADJ,
  DroneSwarm_INDEX_JAC_B,
  DroneSwarm_INDEX_JAC_C,
  DroneSwarm_INDEX_JAC_D,
  DroneSwarm_INDEX_JAC_F,
  DroneSwarm_INDEX_JAC_H,
  DroneSwarm_initialAnalyticJacobianA,
  DroneSwarm_initialAnalyticJacobianADJ,
  DroneSwarm_initialAnalyticJacobianB,
  DroneSwarm_initialAnalyticJacobianC,
  DroneSwarm_initialAnalyticJacobianD,
  DroneSwarm_initialAnalyticJacobianF,
  DroneSwarm_initialAnalyticJacobianH,
  DroneSwarm_functionJacA_column,
  DroneSwarm_functionJacADJ_column,
  DroneSwarm_functionJacB_column,
  DroneSwarm_functionJacC_column,
  DroneSwarm_functionJacD_column,
  DroneSwarm_functionJacF_column,
  DroneSwarm_functionJacH_column,
  DroneSwarm_JacA_DAG,
  DroneSwarm_linear_model_frame,
  DroneSwarm_linear_model_datarecovery_frame,
  DroneSwarm_mayer,
  DroneSwarm_lagrange,
  DroneSwarm_getInputVarIndicesInOptimization,
  DroneSwarm_pickUpBoundsForInputsInOptimization,
  DroneSwarm_setInputData,
  DroneSwarm_getTimeGrid,
  DroneSwarm_symbolicInlineSystem,
  DroneSwarm_function_initSynchronous,
  DroneSwarm_function_updateSynchronous,
  DroneSwarm_function_equationsSynchronous,
  DroneSwarm_inputNames,
  DroneSwarm_dataReconciliationInputNames,
  DroneSwarm_dataReconciliationUnmeasuredVariables,
  DroneSwarm_read_simulation_info,
  DroneSwarm_read_input_fmu,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/maxbu/AppData/Roaming/.openmodelica/libraries/Complex 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,77,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "DroneSwarm"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,10,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,72,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/maxbu/AppData/Roaming/.openmodelica/libraries/Modelica 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,78,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/maxbu/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,86,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "UnderwaterDrone"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,15,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,72,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void DroneSwarm_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &DroneSwarm_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "DroneSwarm";
  data->modelData->modelFilePrefix = "DroneSwarm";
  data->modelData->modelFileName = "DroneSwarm.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore";
  data->modelData->modelGUID = "{41fc0f6a-9c14-4bca-b808-3a44b94f3e7c}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/DroneSwarm_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 28;
  data->modelData->nDiscreteReal = 76;
  data->modelData->nVariablesRealArray = 875;
  data->modelData->nVariablesIntegerArray = 16;
  data->modelData->nVariablesBooleanArray = 17;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 182;
  data->modelData->nParametersIntegerArray = 9;
  data->modelData->nParametersBooleanArray = 6;
  data->modelData->nParametersStringArray = 25;
  data->modelData->nParametersReal = 182;
  data->modelData->nParametersInteger = 9;
  data->modelData->nParametersBoolean = 6;
  data->modelData->nParametersString = 25;
  data->modelData->nAliasRealArray = 221;
  data->modelData->nAliasIntegerArray = 15;
  data->modelData->nAliasBooleanArray = 4;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 16;
  data->modelData->nZeroCrossings = 12;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 12;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1982;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 7;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}


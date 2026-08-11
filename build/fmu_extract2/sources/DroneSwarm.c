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
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* pos_x[1] variable */);
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* pos_x[2] variable */);
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* pos_x[3] variable */);
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* pos_x[4] variable */);
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* pos_y[1] variable */);
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* pos_y[2] variable */);
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* pos_y[3] variable */);
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* pos_y[4] variable */);
  data->simulationInfo->outputVars[12] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* pos_z[1] variable */);
  data->simulationInfo->outputVars[13] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* pos_z[2] variable */);
  data->simulationInfo->outputVars[14] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* pos_z[3] variable */);
  data->simulationInfo->outputVars[15] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* pos_z[4] variable */);
  
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
equation index: 953
type: SIMPLE_ASSIGN
drones[1].v_norm = sqrt(drones[1].vx ^ 2.0 + drones[1].vy ^ 2.0 + drones[1].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  tmp0 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vx STATE(1) */);
  tmp1 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vy STATE(1) */);
  tmp2 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].vz STATE(1) */);
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
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[1].vx ^ 2.0 + drones[1].vy ^ 2.0 + drones[1].vz ^ 2.0) was %g should be >= 0", tmp3);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].v_norm variable */) = sqrt(tmp3);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
drones[1].dist_to_base = sqrt((drones[1].x - bases_x[1]) ^ 2.0 + (drones[1].y - bases_y[1]) ^ 2.0 + (drones[1].z - bases_z[1]) ^ 2.0)
*/
void DroneSwarm_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bases_x[1] PARAM */);
  tmp5 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* bases_y[1] PARAM */);
  tmp6 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* bases_z[1] PARAM */);
  tmp7 = (tmp4 * tmp4) + (tmp5 * tmp5) + (tmp6 * tmp6);
  if(!(tmp7 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[1].x - bases_x[1]) ^ 2.0 + (drones[1].y - bases_y[1]) ^ 2.0 + (drones[1].z - bases_z[1]) ^ 2.0) was %g should be >= 0", tmp7);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */) = sqrt(tmp7);
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
drones[1].is_charging = drones[1].dist_to_base < drones[1].R_base
*/
void DroneSwarm_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  tmp9 = 1.0;
  tmp10 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */));
  relationhysteresis(data, &tmp8, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[1].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].R_base PARAM */), tmp9, tmp10, 6, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* drones[1].is_charging DISCRETE */) = tmp8;
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
$DER.drones[1].x = drones[1].vx
*/
void DroneSwarm_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* der(drones[1].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vx STATE(1) */);
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
$DER.drones[1].y = drones[1].vy
*/
void DroneSwarm_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* der(drones[1].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vy STATE(1) */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
$DER.drones[1].z = drones[1].vz
*/
void DroneSwarm_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* der(drones[1].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].vz STATE(1) */);
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
drones[2].v_norm = sqrt(drones[2].vx ^ 2.0 + drones[2].vy ^ 2.0 + drones[2].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  tmp11 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vx STATE(1) */);
  tmp12 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vy STATE(1) */);
  tmp13 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].vz STATE(1) */);
  tmp14 = (tmp11 * tmp11) + (tmp12 * tmp12) + (tmp13 * tmp13);
  if(!(tmp14 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[2].vx ^ 2.0 + drones[2].vy ^ 2.0 + drones[2].vz ^ 2.0) was %g should be >= 0", tmp14);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].v_norm variable */) = sqrt(tmp14);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
drones[2].dist_to_base = sqrt((drones[2].x - bases_x[2]) ^ 2.0 + (drones[2].y - bases_y[2]) ^ 2.0 + (drones[2].z - bases_z[2]) ^ 2.0)
*/
void DroneSwarm_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  tmp15 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bases_x[2] PARAM */);
  tmp16 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* bases_y[2] PARAM */);
  tmp17 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* bases_z[2] PARAM */);
  tmp18 = (tmp15 * tmp15) + (tmp16 * tmp16) + (tmp17 * tmp17);
  if(!(tmp18 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[2].x - bases_x[2]) ^ 2.0 + (drones[2].y - bases_y[2]) ^ 2.0 + (drones[2].z - bases_z[2]) ^ 2.0) was %g should be >= 0", tmp18);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */) = sqrt(tmp18);
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
drones[2].is_charging = drones[2].dist_to_base < drones[2].R_base
*/
void DroneSwarm_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  tmp20 = 1.0;
  tmp21 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */));
  relationhysteresis(data, &tmp19, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].R_base PARAM */), tmp20, tmp21, 4, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* drones[2].is_charging DISCRETE */) = tmp19;
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
$DER.drones[2].x = drones[2].vx
*/
void DroneSwarm_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* der(drones[2].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vx STATE(1) */);
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
$DER.drones[2].y = drones[2].vy
*/
void DroneSwarm_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* der(drones[2].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vy STATE(1) */);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
$DER.drones[2].z = drones[2].vz
*/
void DroneSwarm_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* der(drones[2].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].vz STATE(1) */);
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
drones[3].v_norm = sqrt(drones[3].vx ^ 2.0 + drones[3].vy ^ 2.0 + drones[3].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  tmp22 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vx STATE(1) */);
  tmp23 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vy STATE(1) */);
  tmp24 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].vz STATE(1) */);
  tmp25 = (tmp22 * tmp22) + (tmp23 * tmp23) + (tmp24 * tmp24);
  if(!(tmp25 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[3].vx ^ 2.0 + drones[3].vy ^ 2.0 + drones[3].vz ^ 2.0) was %g should be >= 0", tmp25);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].v_norm variable */) = sqrt(tmp25);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
drones[3].dist_to_base = sqrt((drones[3].x - bases_x[3]) ^ 2.0 + (drones[3].y - bases_y[3]) ^ 2.0 + (drones[3].z - bases_z[3]) ^ 2.0)
*/
void DroneSwarm_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  tmp26 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bases_x[3] PARAM */);
  tmp27 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* bases_y[3] PARAM */);
  tmp28 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* bases_z[3] PARAM */);
  tmp29 = (tmp26 * tmp26) + (tmp27 * tmp27) + (tmp28 * tmp28);
  if(!(tmp29 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[3].x - bases_x[3]) ^ 2.0 + (drones[3].y - bases_y[3]) ^ 2.0 + (drones[3].z - bases_z[3]) ^ 2.0) was %g should be >= 0", tmp29);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */) = sqrt(tmp29);
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
drones[3].is_charging = drones[3].dist_to_base < drones[3].R_base
*/
void DroneSwarm_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = 1.0;
  tmp32 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */));
  relationhysteresis(data, &tmp30, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].R_base PARAM */), tmp31, tmp32, 2, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* drones[3].is_charging DISCRETE */) = tmp30;
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
$DER.drones[3].x = drones[3].vx
*/
void DroneSwarm_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* der(drones[3].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vx STATE(1) */);
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
$DER.drones[3].y = drones[3].vy
*/
void DroneSwarm_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* der(drones[3].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vy STATE(1) */);
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
$DER.drones[3].z = drones[3].vz
*/
void DroneSwarm_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* der(drones[3].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].vz STATE(1) */);
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
drones[4].v_norm = sqrt(drones[4].vx ^ 2.0 + drones[4].vy ^ 2.0 + drones[4].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  tmp33 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vx STATE(1) */);
  tmp34 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vy STATE(1) */);
  tmp35 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].vz STATE(1) */);
  tmp36 = (tmp33 * tmp33) + (tmp34 * tmp34) + (tmp35 * tmp35);
  if(!(tmp36 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[4].vx ^ 2.0 + drones[4].vy ^ 2.0 + drones[4].vz ^ 2.0) was %g should be >= 0", tmp36);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].v_norm variable */) = sqrt(tmp36);
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
drones[4].dist_to_base = sqrt((drones[4].x - bases_x[4]) ^ 2.0 + (drones[4].y - bases_y[4]) ^ 2.0 + (drones[4].z - bases_z[4]) ^ 2.0)
*/
void DroneSwarm_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  tmp37 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bases_x[4] PARAM */);
  tmp38 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* bases_y[4] PARAM */);
  tmp39 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* bases_z[4] PARAM */);
  tmp40 = (tmp37 * tmp37) + (tmp38 * tmp38) + (tmp39 * tmp39);
  if(!(tmp40 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt((drones[4].x - bases_x[4]) ^ 2.0 + (drones[4].y - bases_y[4]) ^ 2.0 + (drones[4].z - bases_z[4]) ^ 2.0) was %g should be >= 0", tmp40);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */) = sqrt(tmp40);
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
drones[4].is_charging = drones[4].dist_to_base < drones[4].R_base
*/
void DroneSwarm_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  tmp42 = 1.0;
  tmp43 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */));
  relationhysteresis(data, &tmp41, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[4].dist_to_base variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].R_base PARAM */), tmp42, tmp43, 0, Less, LessZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* drones[4].is_charging DISCRETE */) = tmp41;
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
$DER.drones[4].x = drones[4].vx
*/
void DroneSwarm_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* der(drones[4].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vx STATE(1) */);
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
$DER.drones[4].y = drones[4].vy
*/
void DroneSwarm_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* der(drones[4].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vy STATE(1) */);
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
$DER.drones[4].z = drones[4].vz
*/
void DroneSwarm_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* der(drones[4].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].vz STATE(1) */);
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
bat_level[4] = drones[4].B
*/
void DroneSwarm_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* bat_level[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */);
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
bat_level[3] = drones[3].B
*/
void DroneSwarm_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* bat_level[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */);
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
bat_level[2] = drones[2].B
*/
void DroneSwarm_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* bat_level[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */);
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
bat_level[1] = drones[1].B
*/
void DroneSwarm_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* bat_level[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
pos_z[4] = drones[4].z
*/
void DroneSwarm_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* pos_z[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
pos_z[3] = drones[3].z
*/
void DroneSwarm_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* pos_z[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */);
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
pos_z[2] = drones[2].z
*/
void DroneSwarm_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* pos_z[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */);
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
pos_z[1] = drones[1].z
*/
void DroneSwarm_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* pos_z[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */);
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
pos_y[4] = drones[4].y
*/
void DroneSwarm_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* pos_y[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */);
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
pos_y[3] = drones[3].y
*/
void DroneSwarm_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* pos_y[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */);
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
pos_y[2] = drones[2].y
*/
void DroneSwarm_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* pos_y[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 988
type: SIMPLE_ASSIGN
pos_y[1] = drones[1].y
*/
void DroneSwarm_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* pos_y[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */);
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
pos_x[4] = drones[4].x
*/
void DroneSwarm_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* pos_x[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */);
  threadData->lastEquationSolved = 989;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
pos_x[3] = drones[3].x
*/
void DroneSwarm_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* pos_x[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */);
  threadData->lastEquationSolved = 990;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
pos_x[2] = drones[2].x
*/
void DroneSwarm_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* pos_x[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */);
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
pos_x[1] = drones[1].x
*/
void DroneSwarm_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* pos_x[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */);
  threadData->lastEquationSolved = 992;
}

/*
equation index: 993
type: SIMPLE_ASSIGN
$whenCondition1 = sample(1, 0.0, 0.5)
*/
void DroneSwarm_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = data->simulationInfo->samples[0];
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: WHEN

when {$whenCondition1} then
  drones[4].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* drones[4].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 994;
}

/*
equation index: 995
type: WHEN

when {$whenCondition1} then
  drones[3].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* drones[3].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 995;
}

/*
equation index: 996
type: WHEN

when {$whenCondition1} then
  drones[2].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* drones[2].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: WHEN

when {$whenCondition1} then
  drones[1].is_returning = false;
end when;
*/
void DroneSwarm_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* drones[1].is_returning DISCRETE */) = 0 /* false */;
  }
  threadData->lastEquationSolved = 997;
}

/*
equation index: 998
type: WHEN

when {$whenCondition1} then
  drones[1].target_z = bases_z[1];
end when;
*/
void DroneSwarm_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* drones[1].target_z DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* bases_z[1] PARAM */);
  }
  threadData->lastEquationSolved = 998;
}

/*
equation index: 999
type: WHEN

when {$whenCondition1} then
  drones[1].target_y = bases_y[1];
end when;
*/
void DroneSwarm_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* drones[1].target_y DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* bases_y[1] PARAM */);
  }
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1000
type: WHEN

when {$whenCondition1} then
  drones[1].target_x = bases_x[1];
end when;
*/
void DroneSwarm_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* drones[1].target_x DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* bases_x[1] PARAM */);
  }
  threadData->lastEquationSolved = 1000;
}

/*
equation index: 1001
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[1].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  modelica_boolean tmp44;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp44 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* drones[1].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp44)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[802] /* drones[1].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[1].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  modelica_boolean tmp45;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp45 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* drones[1].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp45)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[818] /* drones[1].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1003
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[1].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  modelica_boolean tmp46;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp46 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[834]] /* drones[1].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp46)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[834] /* drones[1].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1003;
}

/*
equation index: 1004
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[1].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  modelica_boolean tmp47;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp47 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* drones[1].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp47)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[801] /* drones[1].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1005
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[1].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  modelica_boolean tmp48;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp48 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* drones[1].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp48)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[817] /* drones[1].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1005;
}

/*
equation index: 1006
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[1].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  modelica_boolean tmp49;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp49 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[833]] /* drones[1].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp49)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[833] /* drones[1].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[1].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  modelica_boolean tmp50;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp50 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[800]] /* drones[1].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp50)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[800] /* drones[1].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1008
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[1].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  modelica_boolean tmp51;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp51 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* drones[1].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp51)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[816] /* drones[1].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1008;
}

/*
equation index: 1009
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[1].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  modelica_boolean tmp52;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp52 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[832]] /* drones[1].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp52)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[832] /* drones[1].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1010
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[1].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  modelica_boolean tmp53;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp53 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* drones[1].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp53)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[799] /* drones[1].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1010;
}

/*
equation index: 1011
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[1].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  modelica_boolean tmp54;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp54 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* drones[1].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp54)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[815] /* drones[1].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: WHEN

when {$whenCondition1} then
  drones[1].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 1.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[1].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  modelica_boolean tmp55;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp55 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* drones[1].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 1.0, 0.2) == ((modelica_integer) 0)) || tmp55)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[831] /* drones[1].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1013
type: WHEN

when {$whenCondition1} then
  drones[1].min_dist = DroneSwarm.drones.calculate_min_dist(drones[1].known_swarm_x, drones[1].known_swarm_y, drones[1].known_swarm_z, 1);
end when;
*/
void DroneSwarm_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  real_array tmp56;
  real_array tmp57;
  real_array tmp58;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp56, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[799]] /* drones[1].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp57, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* drones[1].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp58, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[831]] /* drones[1].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* drones[1].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp56, tmp57, tmp58, ((modelica_integer) 1));
  }
  threadData->lastEquationSolved = 1013;
}

/*
equation index: 1014
type: WHEN

when {$whenCondition1} then
  (drones[1].ai_ux, drones[1].ai_uy, drones[1].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[1].x, drones[1].y, drones[1].z, drones[1].B, drones[1].min_dist, 0.0, drones[1].target_x - drones[1].x, drones[1].target_y - drones[1].y, drones[1].target_z - drones[1].z, time);
end when;
*/
void DroneSwarm_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* drones[1].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* drones[1].min_dist DISCRETE */), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* drones[1].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* drones[1].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* drones[1].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* drones[1].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* drones[1].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
$DER.drones[1].vy = (drones[1].ai_uy - drones[1].kd * drones[1].vy * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* der(drones[1].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* drones[1].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1015;
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
$DER.drones[1].vz = (drones[1].ai_uz - drones[1].kd * drones[1].vz * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(drones[1].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* drones[1].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
drones[1].discharge_rate = drones[1].c1 + drones[1].c2 * (abs(drones[1].ai_ux) + abs(drones[1].ai_uy) + abs(drones[1].ai_uz))
*/
void DroneSwarm_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[1].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* drones[1].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* drones[1].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* drones[1].ai_ux DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* drones[1].ai_uy DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[795]] /* drones[1].ai_uz DISCRETE */)));
  threadData->lastEquationSolved = 1017;
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
drones[1].net_charge = drones[1].charge_rate - drones[1].discharge_rate
*/
void DroneSwarm_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* drones[1].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[1].discharge_rate variable */);
  threadData->lastEquationSolved = 1018;
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
$DER.drones[1].B = if drones[1].is_charging then if noEvent(drones[1].B >= 100.0) and drones[1].net_charge > 0.0 then 0.0 else drones[1].net_charge else if noEvent(drones[1].B <= 0.0) then 0.0 else -drones[1].discharge_rate
*/
void DroneSwarm_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  tmp64 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* drones[1].is_charging DISCRETE */);
  if(tmp64)
  {
    tmp59 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */),100.0);
    tmp61 = 1.0;
    tmp62 = 0.0;
    relationhysteresis(data, &tmp60, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */), 0.0, tmp61, tmp62, 7, Greater, GreaterZC);
    tmp65 = ((tmp59 && tmp60)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* drones[1].net_charge variable */));
  }
  else
  {
    tmp63 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].B STATE(1) */),0.0);
    tmp65 = (tmp63?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[1].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(drones[1].B) STATE_DER */) = tmp65;
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
$DER.drones[1].vx = (drones[1].ai_ux - drones[1].kd * drones[1].vx * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* der(drones[1].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* drones[1].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1020;
}

/*
equation index: 1021
type: WHEN

when {$whenCondition1} then
  drones[2].target_z = bases_z[2];
end when;
*/
void DroneSwarm_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* drones[2].target_z DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* bases_z[2] PARAM */);
  }
  threadData->lastEquationSolved = 1021;
}

/*
equation index: 1022
type: WHEN

when {$whenCondition1} then
  drones[2].target_y = bases_y[2];
end when;
*/
void DroneSwarm_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* drones[2].target_y DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* bases_y[2] PARAM */);
  }
  threadData->lastEquationSolved = 1022;
}

/*
equation index: 1023
type: WHEN

when {$whenCondition1} then
  drones[2].target_x = bases_x[2];
end when;
*/
void DroneSwarm_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1023};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* drones[2].target_x DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* bases_x[2] PARAM */);
  }
  threadData->lastEquationSolved = 1023;
}

/*
equation index: 1024
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[2].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  modelica_boolean tmp66;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp66 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[806]] /* drones[2].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp66)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[806] /* drones[2].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1025
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[2].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  modelica_boolean tmp67;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp67 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[822]] /* drones[2].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp67)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[822] /* drones[2].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[2].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  modelica_boolean tmp68;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp68 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* drones[2].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp68)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[838] /* drones[2].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[2].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  modelica_boolean tmp69;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp69 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[805]] /* drones[2].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp69)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[805] /* drones[2].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[2].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  modelica_boolean tmp70;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp70 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[821]] /* drones[2].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp70)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[821] /* drones[2].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[2].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  modelica_boolean tmp71;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp71 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* drones[2].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp71)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[837] /* drones[2].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[2].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  modelica_boolean tmp72;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp72 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[804]] /* drones[2].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp72)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[804] /* drones[2].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1031
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[2].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  modelica_boolean tmp73;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp73 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[820]] /* drones[2].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp73)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[820] /* drones[2].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1031;
}

/*
equation index: 1032
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[2].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  modelica_boolean tmp74;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp74 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[836]] /* drones[2].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp74)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[836] /* drones[2].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1032;
}

/*
equation index: 1033
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[2].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  modelica_boolean tmp75;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp75 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* drones[2].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp75)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[803] /* drones[2].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1033;
}

/*
equation index: 1034
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[2].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1034};
  modelica_boolean tmp76;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp76 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* drones[2].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp76)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[819] /* drones[2].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1035
type: WHEN

when {$whenCondition1} then
  drones[2].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 2.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[2].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1035};
  modelica_boolean tmp77;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp77 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* drones[2].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 2.0, 0.2) == ((modelica_integer) 0)) || tmp77)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[835] /* drones[2].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: WHEN

when {$whenCondition1} then
  drones[2].min_dist = DroneSwarm.drones.calculate_min_dist(drones[2].known_swarm_x, drones[2].known_swarm_y, drones[2].known_swarm_z, 2);
end when;
*/
void DroneSwarm_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  real_array tmp78;
  real_array tmp79;
  real_array tmp80;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp78, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* drones[2].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp79, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[819]] /* drones[2].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp80, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[835]] /* drones[2].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* drones[2].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp78, tmp79, tmp80, ((modelica_integer) 2));
  }
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: WHEN

when {$whenCondition1} then
  (drones[2].ai_ux, drones[2].ai_uy, drones[2].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[2].x, drones[2].y, drones[2].z, drones[2].B, drones[2].min_dist, 0.3333333333333333, drones[2].target_x - drones[2].x, drones[2].target_y - drones[2].y, drones[2].target_z - drones[2].z, time);
end when;
*/
void DroneSwarm_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* drones[2].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* drones[2].min_dist DISCRETE */), 0.3333333333333333, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* drones[2].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* drones[2].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* drones[2].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* drones[2].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* drones[2].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
$DER.drones[2].vz = (drones[2].ai_uz - drones[2].kd * drones[2].vz * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* der(drones[2].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* drones[2].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
$DER.drones[2].vx = (drones[2].ai_ux - drones[2].kd * drones[2].vx * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* der(drones[2].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* drones[2].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
drones[2].discharge_rate = drones[2].c1 + drones[2].c2 * (abs(drones[2].ai_ux) + abs(drones[2].ai_uy) + abs(drones[2].ai_uz))
*/
void DroneSwarm_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* drones[2].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* drones[2].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* drones[2].ai_ux DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* drones[2].ai_uy DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* drones[2].ai_uz DISCRETE */)));
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
drones[2].net_charge = drones[2].charge_rate - drones[2].discharge_rate
*/
void DroneSwarm_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* drones[2].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].discharge_rate variable */);
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
$DER.drones[2].B = if drones[2].is_charging then if noEvent(drones[2].B >= 100.0) and drones[2].net_charge > 0.0 then 0.0 else drones[2].net_charge else if noEvent(drones[2].B <= 0.0) then 0.0 else -drones[2].discharge_rate
*/
void DroneSwarm_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  tmp86 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* drones[2].is_charging DISCRETE */);
  if(tmp86)
  {
    tmp81 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */),100.0);
    tmp83 = 1.0;
    tmp84 = 0.0;
    relationhysteresis(data, &tmp82, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */), 0.0, tmp83, tmp84, 5, Greater, GreaterZC);
    tmp87 = ((tmp81 && tmp82)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* drones[2].net_charge variable */));
  }
  else
  {
    tmp85 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].B STATE(1) */),0.0);
    tmp87 = (tmp85?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(drones[2].B) STATE_DER */) = tmp87;
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
$DER.drones[2].vy = (drones[2].ai_uy - drones[2].kd * drones[2].vy * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* der(drones[2].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* drones[2].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: WHEN

when {$whenCondition1} then
  drones[3].target_z = bases_z[3];
end when;
*/
void DroneSwarm_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* drones[3].target_z DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* bases_z[3] PARAM */);
  }
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: WHEN

when {$whenCondition1} then
  drones[3].target_y = bases_y[3];
end when;
*/
void DroneSwarm_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* drones[3].target_y DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* bases_y[3] PARAM */);
  }
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: WHEN

when {$whenCondition1} then
  drones[3].target_x = bases_x[3];
end when;
*/
void DroneSwarm_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1046};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* drones[3].target_x DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* bases_x[3] PARAM */);
  }
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[3].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  modelica_boolean tmp88;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp88 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* drones[3].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp88)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[810] /* drones[3].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[3].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  modelica_boolean tmp89;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp89 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[826]] /* drones[3].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp89)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[826] /* drones[3].known_swarm_y[4] DISCRETE */));
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
  modelica_boolean tmp90;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp90 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* drones[3].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp90)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[842] /* drones[3].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[3].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1050};
  modelica_boolean tmp91;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp91 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[809]] /* drones[3].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp91)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[809] /* drones[3].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[3].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  modelica_boolean tmp92;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp92 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[825]] /* drones[3].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp92)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[825] /* drones[3].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[3].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  modelica_boolean tmp93;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp93 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* drones[3].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp93)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[841] /* drones[3].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[3].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  modelica_boolean tmp94;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp94 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[808]] /* drones[3].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp94)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[808] /* drones[3].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[3].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  modelica_boolean tmp95;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp95 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[824]] /* drones[3].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp95)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[824] /* drones[3].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[3].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1055};
  modelica_boolean tmp96;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp96 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* drones[3].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp96)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[840] /* drones[3].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1056
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[3].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1056};
  modelica_boolean tmp97;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp97 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* drones[3].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp97)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[807] /* drones[3].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1056;
}

/*
equation index: 1057
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[3].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  modelica_boolean tmp98;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp98 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* drones[3].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp98)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[823] /* drones[3].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: WHEN

when {$whenCondition1} then
  drones[3].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 3.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[3].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  modelica_boolean tmp99;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp99 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* drones[3].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 3.0, 0.2) == ((modelica_integer) 0)) || tmp99)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[839] /* drones[3].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: WHEN

when {$whenCondition1} then
  drones[3].min_dist = DroneSwarm.drones.calculate_min_dist(drones[3].known_swarm_x, drones[3].known_swarm_y, drones[3].known_swarm_z, 3);
end when;
*/
void DroneSwarm_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  real_array tmp100;
  real_array tmp101;
  real_array tmp102;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp100, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[807]] /* drones[3].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp101, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[823]] /* drones[3].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp102, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* drones[3].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* drones[3].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp100, tmp101, tmp102, ((modelica_integer) 3));
  }
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: WHEN

when {$whenCondition1} then
  (drones[3].ai_ux, drones[3].ai_uy, drones[3].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[3].x, drones[3].y, drones[3].z, drones[3].B, drones[3].min_dist, 0.6666666666666666, drones[3].target_x - drones[3].x, drones[3].target_y - drones[3].y, drones[3].target_z - drones[3].z, time);
end when;
*/
void DroneSwarm_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* drones[3].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* drones[3].min_dist DISCRETE */), 0.6666666666666666, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* drones[3].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* drones[3].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* drones[3].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* drones[3].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* drones[3].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
$DER.drones[3].vx = (drones[3].ai_ux - drones[3].kd * drones[3].vx * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(drones[3].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* drones[3].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
$DER.drones[3].vy = (drones[3].ai_uy - drones[3].kd * drones[3].vy * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* der(drones[3].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* drones[3].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
drones[3].discharge_rate = drones[3].c1 + drones[3].c2 * (abs(drones[3].ai_ux) + abs(drones[3].ai_uy) + abs(drones[3].ai_uz))
*/
void DroneSwarm_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* drones[3].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* drones[3].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* drones[3].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* drones[3].ai_ux DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* drones[3].ai_uy DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* drones[3].ai_uz DISCRETE */)));
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
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  tmp108 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* drones[3].is_charging DISCRETE */);
  if(tmp108)
  {
    tmp103 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */),100.0);
    tmp105 = 1.0;
    tmp106 = 0.0;
    relationhysteresis(data, &tmp104, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */), 0.0, tmp105, tmp106, 3, Greater, GreaterZC);
    tmp109 = ((tmp103 && tmp104)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* drones[3].net_charge variable */));
  }
  else
  {
    tmp107 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].B STATE(1) */),0.0);
    tmp109 = (tmp107?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* drones[3].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(drones[3].B) STATE_DER */) = tmp109;
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
$DER.drones[3].vz = (drones[3].ai_uz - drones[3].kd * drones[3].vz * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* der(drones[3].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[797]] /* drones[3].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: WHEN

when {$whenCondition1} then
  drones[4].target_z = bases_z[4];
end when;
*/
void DroneSwarm_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* drones[4].target_z DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* bases_z[4] PARAM */);
  }
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: WHEN

when {$whenCondition1} then
  drones[4].target_y = bases_y[4];
end when;
*/
void DroneSwarm_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* drones[4].target_y DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* bases_y[4] PARAM */);
  }
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: WHEN

when {$whenCondition1} then
  drones[4].target_x = bases_x[4];
end when;
*/
void DroneSwarm_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* drones[4].target_x DISCRETE */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* bases_x[4] PARAM */);
  }
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[4] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[4].x else pre(drones[4].known_swarm_x[4]);
end when;
*/
void DroneSwarm_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  modelica_boolean tmp110;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp110 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* drones[4].known_swarm_x[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp110)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */):(data->simulationInfo->realVarsPre[814] /* drones[4].known_swarm_x[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[4] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[4].y else pre(drones[4].known_swarm_y[4]);
end when;
*/
void DroneSwarm_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  modelica_boolean tmp111;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp111 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[830]] /* drones[4].known_swarm_y[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp111)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */):(data->simulationInfo->realVarsPre[830] /* drones[4].known_swarm_y[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[4] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[4].z else pre(drones[4].known_swarm_z[4]);
end when;
*/
void DroneSwarm_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  modelica_boolean tmp112;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp112 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* drones[4].known_swarm_z[4] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp112)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */):(data->simulationInfo->realVarsPre[846] /* drones[4].known_swarm_z[4] DISCRETE */));
  }
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[3] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[3].x else pre(drones[4].known_swarm_x[3]);
end when;
*/
void DroneSwarm_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  modelica_boolean tmp113;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp113 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* drones[4].known_swarm_x[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp113)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].x STATE(1,drones[3].vx) */):(data->simulationInfo->realVarsPre[813] /* drones[4].known_swarm_x[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[3] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[3].y else pre(drones[4].known_swarm_y[3]);
end when;
*/
void DroneSwarm_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  modelica_boolean tmp114;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp114 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[829]] /* drones[4].known_swarm_y[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp114)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].y STATE(1,drones[3].vy) */):(data->simulationInfo->realVarsPre[829] /* drones[4].known_swarm_y[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[3] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[3].z else pre(drones[4].known_swarm_z[3]);
end when;
*/
void DroneSwarm_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  modelica_boolean tmp115;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp115 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* drones[4].known_swarm_z[3] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp115)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* drones[3].z STATE(1,drones[3].vz) */):(data->simulationInfo->realVarsPre[845] /* drones[4].known_swarm_z[3] DISCRETE */));
  }
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[2] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[2].x else pre(drones[4].known_swarm_x[2]);
end when;
*/
void DroneSwarm_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  modelica_boolean tmp116;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp116 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* drones[4].known_swarm_x[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp116)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].x STATE(1,drones[2].vx) */):(data->simulationInfo->realVarsPre[812] /* drones[4].known_swarm_x[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[2] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[2].y else pre(drones[4].known_swarm_y[2]);
end when;
*/
void DroneSwarm_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  modelica_boolean tmp117;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp117 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[828]] /* drones[4].known_swarm_y[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp117)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].y STATE(1,drones[2].vy) */):(data->simulationInfo->realVarsPre[828] /* drones[4].known_swarm_y[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[2] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[2].z else pre(drones[4].known_swarm_z[2]);
end when;
*/
void DroneSwarm_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  modelica_boolean tmp118;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp118 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* drones[4].known_swarm_z[2] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp118)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* drones[2].z STATE(1,drones[2].vz) */):(data->simulationInfo->realVarsPre[844] /* drones[4].known_swarm_z[2] DISCRETE */));
  }
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_x[1] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[1].x else pre(drones[4].known_swarm_x[1]);
end when;
*/
void DroneSwarm_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  modelica_boolean tmp119;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp119 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* drones[4].known_swarm_x[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp119)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].x STATE(1,drones[1].vx) */):(data->simulationInfo->realVarsPre[811] /* drones[4].known_swarm_x[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_y[1] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[1].y else pre(drones[4].known_swarm_y[1]);
end when;
*/
void DroneSwarm_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  modelica_boolean tmp120;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp120 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* drones[4].known_swarm_y[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp120)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].y STATE(1,drones[1].vy) */):(data->simulationInfo->realVarsPre[827] /* drones[4].known_swarm_y[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: WHEN

when {$whenCondition1} then
  drones[4].known_swarm_z[1] = if DroneSwarm.drones.check_packet_loss(time, 4.0, 0.2) == 0 or time <= 0.01 then drones[1].z else pre(drones[4].known_swarm_z[1]);
end when;
*/
void DroneSwarm_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  modelica_boolean tmp121;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    tmp121 = LessEq(data->localData[0]->timeValue,0.01);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* drones[4].known_swarm_z[1] DISCRETE */) = (((omc_DroneSwarm_drones_check__packet__loss(threadData, data->localData[0]->timeValue, 4.0, 0.2) == ((modelica_integer) 0)) || tmp121)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* drones[1].z STATE(1,drones[1].vz) */):(data->simulationInfo->realVarsPre[843] /* drones[4].known_swarm_z[1] DISCRETE */));
  }
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: WHEN

when {$whenCondition1} then
  drones[4].min_dist = DroneSwarm.drones.calculate_min_dist(drones[4].known_swarm_x, drones[4].known_swarm_y, drones[4].known_swarm_z, 4);
end when;
*/
void DroneSwarm_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  real_array tmp122;
  real_array tmp123;
  real_array tmp124;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    real_array_create(&tmp122, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* drones[4].known_swarm_x[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp123, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[827]] /* drones[4].known_swarm_y[1] DISCRETE */))), 1, (_index_t)4);
    real_array_create(&tmp124, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* drones[4].known_swarm_z[1] DISCRETE */))), 1, (_index_t)4);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* drones[4].min_dist DISCRETE */) = omc_DroneSwarm_drones_calculate__min__dist(threadData, tmp122, tmp123, tmp124, ((modelica_integer) 4));
  }
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: WHEN

when {$whenCondition1} then
  (drones[4].ai_ux, drones[4].ai_uy, drones[4].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[4].x, drones[4].y, drones[4].z, drones[4].B, drones[4].min_dist, 1.0, drones[4].target_x - drones[4].x, drones[4].target_y - drones[4].y, drones[4].target_z - drones[4].z, time);
end when;
*/
void DroneSwarm_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* drones[4].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* drones[4].min_dist DISCRETE */), 1.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* drones[4].target_x DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].x STATE(1,drones[4].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* drones[4].target_y DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].y STATE(1,drones[4].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* drones[4].target_z DISCRETE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* drones[4].z STATE(1,drones[4].vz) */), data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* drones[4].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* drones[4].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
$DER.drones[4].vx = (drones[4].ai_ux - drones[4].kd * drones[4].vx * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* der(drones[4].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* drones[4].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
$DER.drones[4].vz = (drones[4].ai_uz - drones[4].kd * drones[4].vz * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* der(drones[4].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* drones[4].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
drones[4].discharge_rate = drones[4].c1 + drones[4].c2 * (abs(drones[4].ai_ux) + abs(drones[4].ai_uy) + abs(drones[4].ai_uz))
*/
void DroneSwarm_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[4].discharge_rate variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* drones[4].c1 PARAM */) + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* drones[4].c2 PARAM */)) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* drones[4].ai_ux DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* drones[4].ai_uy DISCRETE */)) + fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[798]] /* drones[4].ai_uz DISCRETE */)));
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
drones[4].net_charge = drones[4].charge_rate - drones[4].discharge_rate
*/
void DroneSwarm_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* drones[4].charge_rate PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[4].discharge_rate variable */);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
$DER.drones[4].B = if drones[4].is_charging then if noEvent(drones[4].B >= 100.0) and drones[4].net_charge > 0.0 then 0.0 else drones[4].net_charge else if noEvent(drones[4].B <= 0.0) then 0.0 else -drones[4].discharge_rate
*/
void DroneSwarm_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  modelica_real tmp131;
  tmp130 = (modelica_boolean)(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* drones[4].is_charging DISCRETE */);
  if(tmp130)
  {
    tmp125 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */),100.0);
    tmp127 = 1.0;
    tmp128 = 0.0;
    relationhysteresis(data, &tmp126, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */), 0.0, tmp127, tmp128, 1, Greater, GreaterZC);
    tmp131 = ((tmp125 && tmp126)?0.0:(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* drones[4].net_charge variable */));
  }
  else
  {
    tmp129 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].B STATE(1) */),0.0);
    tmp131 = (tmp129?0.0:(-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[4].discharge_rate variable */)));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(drones[4].B) STATE_DER */) = tmp131;
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
$DER.drones[4].vy = (drones[4].ai_uy - drones[4].kd * drones[4].vy * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* der(drones[4].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[794]] /* drones[4].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: ARRAY_CALL_ASSIGN

world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void DroneSwarm_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  real_array tmp132;
  real_array_create(&tmp132, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* world.z_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT3, _OMC_LIT2), tmp132);
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[2] = world.z_label.R_lines[1,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* world.z_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* world.z_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[2] = world.z_label.cylinders[2].lengthDirection[2]
*/
void DroneSwarm_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* world.z_label.cylinders[1].lengthDirection[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* world.z_label.cylinders[2].lengthDirection[2] variable */);
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[1] = world.z_label.R_lines[1,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* world.z_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* world.z_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[1] = world.z_label.cylinders[2].lengthDirection[1]
*/
void DroneSwarm_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* world.z_label.cylinders[1].lengthDirection[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* world.z_label.cylinders[2].lengthDirection[1] variable */);
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[2] = world.z_label.R_lines[2,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* world.z_label.cylinders[3].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[2] = world.z_label.cylinders[3].r[2]
*/
void DroneSwarm_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* world.z_label.cylinders[2].r[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* world.z_label.cylinders[3].r[2] variable */);
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[2] = (world.z_label.R_lines[1,2] - world.z_label.R_lines[2,2]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* world.z_label.cylinders[3].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[717]] /* world.z_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[720]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[1] = world.z_label.R_lines[2,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* world.z_label.cylinders[3].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[1] = world.z_label.cylinders[3].r[1]
*/
void DroneSwarm_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* world.z_label.cylinders[2].r[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* world.z_label.cylinders[3].r[1] variable */);
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[1] = (world.z_label.R_lines[1,1] - world.z_label.R_lines[2,1]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* world.z_label.cylinders[3].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[716]] /* world.z_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[719]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[3] = world.z_label.R_lines[1,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* world.z_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* world.z_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[3] = world.z_label.cylinders[2].lengthDirection[3]
*/
void DroneSwarm_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* world.z_label.cylinders[1].lengthDirection[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* world.z_label.cylinders[2].lengthDirection[3] variable */);
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[3] = world.labelStart + world.z_label.R_lines[2,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* world.z_label.cylinders[3].r[3] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[3] = world.z_label.cylinders[3].r[3]
*/
void DroneSwarm_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* world.z_label.cylinders[2].r[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* world.z_label.cylinders[3].r[3] variable */);
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[3] = (world.z_label.R_lines[1,3] - world.z_label.R_lines[2,3]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* world.z_label.cylinders[3].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[718]] /* world.z_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[721]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: ARRAY_CALL_ASSIGN

world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void DroneSwarm_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  real_array tmp133;
  real_array_create(&tmp133, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* world.y_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT2, _OMC_LIT4), tmp133);
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[2] = world.labelStart + world.y_label.R_lines[2,2] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* world.y_label.cylinders[2].r[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[1] = world.y_label.R_lines[1,1] * world.scaledLabel + world.y_label.R_lines[2,1] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* world.y_label.cylinders[1].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* world.y_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[1] = world.y_label.R_lines[2,1] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* world.y_label.cylinders[2].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[1] = world.y_label.R_lines[1,1] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,1] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* world.y_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[592]] /* world.y_label.R_lines[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[2] = world.y_label.R_lines[1,2] * world.scaledLabel + world.y_label.R_lines[2,2] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* world.y_label.cylinders[1].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* world.y_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[2] = world.y_label.R_lines[1,2] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,2] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* world.y_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[593]] /* world.y_label.R_lines[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[3] = world.y_label.R_lines[2,3] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* world.y_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[3] = world.y_label.R_lines[1,3] * world.scaledLabel + world.y_label.R_lines[2,3] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* world.y_label.cylinders[1].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* world.y_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[3] = world.y_label.R_lines[1,3] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,3] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* world.y_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[594]] /* world.y_label.R_lines[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[635]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: ARRAY_CALL_ASSIGN

world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void DroneSwarm_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  real_array tmp134;
  real_array_create(&tmp134, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* world.x_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT1, _OMC_LIT2), tmp134);
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[2] = world.x_label.R_lines[2,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* world.x_label.cylinders[2].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[1] = world.scaledLabel * (world.x_label.R_lines[1,1] + world.x_label.R_lines[2,1])
*/
void DroneSwarm_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* world.x_label.cylinders[1].lengthDirection[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* world.x_label.R_lines[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* world.x_label.R_lines[2,1] variable */));
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[1] = world.labelStart + world.x_label.R_lines[2,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* world.x_label.cylinders[2].r[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[1] = (world.x_label.R_lines[1,1] - world.x_label.R_lines[2,1]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* world.x_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* world.x_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[474]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[2] = world.scaledLabel * (world.x_label.R_lines[1,2] + world.x_label.R_lines[2,2])
*/
void DroneSwarm_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* world.x_label.cylinders[1].lengthDirection[2] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* world.x_label.R_lines[1,2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* world.x_label.R_lines[2,2] variable */));
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[2] = (world.x_label.R_lines[1,2] - world.x_label.R_lines[2,2]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* world.x_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* world.x_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1122;
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[3] = world.x_label.R_lines[2,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* world.x_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1123;
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[3] = world.scaledLabel * (world.x_label.R_lines[1,3] + world.x_label.R_lines[2,3])
*/
void DroneSwarm_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* world.x_label.cylinders[1].lengthDirection[3] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* world.x_label.R_lines[1,3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* world.x_label.R_lines[2,3] variable */));
  threadData->lastEquationSolved = 1124;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[3] = (world.x_label.R_lines[1,3] - world.x_label.R_lines[2,3]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* world.x_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[473]] /* world.x_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1125;
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
  static void (*const eqFunctions[173])(DATA*, threadData_t*) = {
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
    DroneSwarm_eqFunction_1125
  };
  
  for (int id = 0; id < 173; id++) {
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

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
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
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 49; id++) {
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
  const size_t eqMap[] = {953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 993, 1015, 1016, 1017, 1018, 1019, 1020, 1038, 1039, 1040, 1041, 1042, 1043, 1061, 1062, 1063, 1064, 1065, 1066, 1084, 1085, 1086, 1087, 1088, 1089};
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
  data->modelData->modelGUID = "{8ec2bec6-d959-470b-9a2a-db41f02190a8}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/DroneSwarm_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 28;
  data->modelData->nDiscreteReal = 76;
  data->modelData->nVariablesRealArray = 863;
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
  data->modelData->nAliasRealArray = 233;
  data->modelData->nAliasIntegerArray = 15;
  data->modelData->nAliasBooleanArray = 4;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 16;
  data->modelData->nZeroCrossings = 8;
  data->modelData->nSamples = 1;
  data->modelData->nRelations = 8;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1958;
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


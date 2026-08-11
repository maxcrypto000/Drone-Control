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
  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* pos_x[1] variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* pos_x[2] variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* pos_x[3] variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* pos_x[4] variable */);
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* pos_y[1] variable */);
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* pos_y[2] variable */);
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* pos_y[3] variable */);
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* pos_y[4] variable */);
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* pos_z[1] variable */);
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* pos_z[2] variable */);
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* pos_z[3] variable */);
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* pos_z[4] variable */);
  
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
equation index: 1796
type: SIMPLE_ASSIGN
$DER.drones[4].z = drones[4].vz
*/
void DroneSwarm_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* der(drones[4].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vz STATE(1) */);
  threadData->lastEquationSolved = 1796;
}

/*
equation index: 1797
type: SIMPLE_ASSIGN
$DER.drones[4].y = drones[4].vy
*/
void DroneSwarm_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* der(drones[4].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vy STATE(1) */);
  threadData->lastEquationSolved = 1797;
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
$DER.drones[4].x = drones[4].vx
*/
void DroneSwarm_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* der(drones[4].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].vx STATE(1) */);
  threadData->lastEquationSolved = 1798;
}

/*
equation index: 1799
type: SIMPLE_ASSIGN
drones[4].v_norm = sqrt(drones[4].vx ^ 2.0 + drones[4].vy ^ 2.0 + drones[4].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1799};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  tmp0 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].vx STATE(1) */);
  tmp1 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vy STATE(1) */);
  tmp2 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vz STATE(1) */);
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
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[4].vx ^ 2.0 + drones[4].vy ^ 2.0 + drones[4].vz ^ 2.0) was %g should be >= 0", tmp3);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* drones[4].v_norm variable */) = sqrt(tmp3);
  threadData->lastEquationSolved = 1799;
}

/*
equation index: 1800
type: SIMPLE_ASSIGN
$DER.drones[3].z = drones[3].vz
*/
void DroneSwarm_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* der(drones[3].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vz STATE(1) */);
  threadData->lastEquationSolved = 1800;
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
$DER.drones[3].y = drones[3].vy
*/
void DroneSwarm_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* der(drones[3].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vy STATE(1) */);
  threadData->lastEquationSolved = 1801;
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
$DER.drones[3].x = drones[3].vx
*/
void DroneSwarm_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* der(drones[3].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].vx STATE(1) */);
  threadData->lastEquationSolved = 1802;
}

/*
equation index: 1803
type: SIMPLE_ASSIGN
drones[3].v_norm = sqrt(drones[3].vx ^ 2.0 + drones[3].vy ^ 2.0 + drones[3].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1803};
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp4 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].vx STATE(1) */);
  tmp5 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vy STATE(1) */);
  tmp6 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vz STATE(1) */);
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
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[3].vx ^ 2.0 + drones[3].vy ^ 2.0 + drones[3].vz ^ 2.0) was %g should be >= 0", tmp7);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* drones[3].v_norm variable */) = sqrt(tmp7);
  threadData->lastEquationSolved = 1803;
}

/*
equation index: 1804
type: SIMPLE_ASSIGN
$DER.drones[2].z = drones[2].vz
*/
void DroneSwarm_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* der(drones[2].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vz STATE(1) */);
  threadData->lastEquationSolved = 1804;
}

/*
equation index: 1805
type: SIMPLE_ASSIGN
$DER.drones[2].y = drones[2].vy
*/
void DroneSwarm_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* der(drones[2].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vy STATE(1) */);
  threadData->lastEquationSolved = 1805;
}

/*
equation index: 1806
type: SIMPLE_ASSIGN
$DER.drones[2].x = drones[2].vx
*/
void DroneSwarm_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* der(drones[2].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].vx STATE(1) */);
  threadData->lastEquationSolved = 1806;
}

/*
equation index: 1807
type: SIMPLE_ASSIGN
drones[2].v_norm = sqrt(drones[2].vx ^ 2.0 + drones[2].vy ^ 2.0 + drones[2].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1807};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  tmp8 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].vx STATE(1) */);
  tmp9 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vy STATE(1) */);
  tmp10 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vz STATE(1) */);
  tmp11 = (tmp8 * tmp8) + (tmp9 * tmp9) + (tmp10 * tmp10);
  if(!(tmp11 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[2].vx ^ 2.0 + drones[2].vy ^ 2.0 + drones[2].vz ^ 2.0) was %g should be >= 0", tmp11);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* drones[2].v_norm variable */) = sqrt(tmp11);
  threadData->lastEquationSolved = 1807;
}

/*
equation index: 1808
type: SIMPLE_ASSIGN
$DER.drones[1].z = drones[1].vz
*/
void DroneSwarm_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* der(drones[1].z) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vz STATE(1) */);
  threadData->lastEquationSolved = 1808;
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
$DER.drones[1].y = drones[1].vy
*/
void DroneSwarm_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(drones[1].y) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vy STATE(1) */);
  threadData->lastEquationSolved = 1809;
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
$DER.drones[1].x = drones[1].vx
*/
void DroneSwarm_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* der(drones[1].x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].vx STATE(1) */);
  threadData->lastEquationSolved = 1810;
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
drones[1].v_norm = sqrt(drones[1].vx ^ 2.0 + drones[1].vy ^ 2.0 + drones[1].vz ^ 2.0)
*/
void DroneSwarm_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1811};
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp12 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].vx STATE(1) */);
  tmp13 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vy STATE(1) */);
  tmp14 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vz STATE(1) */);
  tmp15 = (tmp12 * tmp12) + (tmp13 * tmp13) + (tmp14 * tmp14);
  if(!(tmp15 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(drones[1].vx ^ 2.0 + drones[1].vy ^ 2.0 + drones[1].vz ^ 2.0) was %g should be >= 0", tmp15);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* drones[1].v_norm variable */) = sqrt(tmp15);
  threadData->lastEquationSolved = 1811;
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
pos_z[4] = drones[4].z
*/
void DroneSwarm_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* pos_z[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */);
  threadData->lastEquationSolved = 1812;
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
pos_z[3] = drones[3].z
*/
void DroneSwarm_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* pos_z[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */);
  threadData->lastEquationSolved = 1813;
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
pos_z[2] = drones[2].z
*/
void DroneSwarm_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* pos_z[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */);
  threadData->lastEquationSolved = 1814;
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
pos_z[1] = drones[1].z
*/
void DroneSwarm_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* pos_z[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */);
  threadData->lastEquationSolved = 1815;
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
pos_y[4] = drones[4].y
*/
void DroneSwarm_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* pos_y[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */);
  threadData->lastEquationSolved = 1816;
}

/*
equation index: 1817
type: SIMPLE_ASSIGN
pos_y[3] = drones[3].y
*/
void DroneSwarm_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* pos_y[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */);
  threadData->lastEquationSolved = 1817;
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
pos_y[2] = drones[2].y
*/
void DroneSwarm_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* pos_y[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */);
  threadData->lastEquationSolved = 1818;
}

/*
equation index: 1819
type: SIMPLE_ASSIGN
pos_y[1] = drones[1].y
*/
void DroneSwarm_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* pos_y[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */);
  threadData->lastEquationSolved = 1819;
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
pos_x[4] = drones[4].x
*/
void DroneSwarm_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* pos_x[4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */);
  threadData->lastEquationSolved = 1820;
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
pos_x[3] = drones[3].x
*/
void DroneSwarm_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* pos_x[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */);
  threadData->lastEquationSolved = 1821;
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
pos_x[2] = drones[2].x
*/
void DroneSwarm_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* pos_x[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */);
  threadData->lastEquationSolved = 1822;
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
pos_x[1] = drones[1].x
*/
void DroneSwarm_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* pos_x[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */);
  threadData->lastEquationSolved = 1823;
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
$whenCondition1 = sample(1, 0.0, drones[1].T_ctrl)
*/
void DroneSwarm_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1824};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = data->simulationInfo->samples[0];
  threadData->lastEquationSolved = 1824;
}

/*
equation index: 1825
type: WHEN

when {$whenCondition1} then
  drones[1].lidar_cloud = DroneSwarm.drones.scan_lidar(drones[1].x, drones[1].y, drones[1].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, 1, 5, drones[1].lidar_range, drones[1].p_x_min, drones[1].p_x_max, drones[1].p_y_min, drones[1].p_y_max, drones[1].p_z_min, drones[1].p_z_max);
end when;
*/
void DroneSwarm_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1825};
  real_array tmp16;
  real_array tmp17;
  real_array tmp18;
  real_array tmp19;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp16, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp17, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp18, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp19, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* drones[1].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    real_array_copy_data(omc_DroneSwarm_drones_scan__lidar(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), tmp16, tmp17, tmp18, ((modelica_integer) 1), ((modelica_integer) 5), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* drones[1].lidar_range PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* drones[1].p_x_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* drones[1].p_x_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* drones[1].p_y_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* drones[1].p_y_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* drones[1].p_z_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* drones[1].p_z_max PARAM */)), tmp19);
  }
  threadData->lastEquationSolved = 1825;
}

/*
equation index: 1826
type: WHEN

when {$whenCondition1} then
  (drones[1].ai_ux, drones[1].ai_uy, drones[1].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[1].x, drones[1].y, drones[1].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, drones[1].lidar_cloud, 0.0, time);
end when;
*/
void DroneSwarm_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1826};
  real_array tmp20;
  real_array tmp21;
  real_array tmp22;
  real_array tmp23;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp20, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp21, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp22, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp23, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* drones[1].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* drones[1].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), tmp20, tmp21, tmp22, tmp23, 0.0, data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* drones[1].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* drones[1].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1826;
}

/*
equation index: 1827
type: SIMPLE_ASSIGN
$DER.drones[1].vz = (drones[1].ai_uz - drones[1].kd * drones[1].vz * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* der(drones[1].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* drones[1].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* drones[1].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1827;
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
$DER.drones[1].vy = (drones[1].ai_uy - drones[1].kd * drones[1].vy * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(drones[1].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* drones[1].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* drones[1].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1828;
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
$DER.drones[1].vx = (drones[1].ai_ux - drones[1].kd * drones[1].vx * drones[1].v_norm) / drones[1].m
*/
void DroneSwarm_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(drones[1].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* drones[1].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* drones[1].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* drones[1].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* drones[1].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* drones[1].m PARAM */),"drones[1].m",equationIndexes);
  threadData->lastEquationSolved = 1829;
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
$whenCondition2 = sample(2, 0.0, drones[2].T_ctrl)
*/
void DroneSwarm_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1830};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = data->simulationInfo->samples[1];
  threadData->lastEquationSolved = 1830;
}

/*
equation index: 1831
type: WHEN

when {$whenCondition2} then
  drones[2].lidar_cloud = DroneSwarm.drones.scan_lidar(drones[2].x, drones[2].y, drones[2].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, 2, 5, drones[2].lidar_range, drones[2].p_x_min, drones[2].p_x_max, drones[2].p_y_min, drones[2].p_y_max, drones[2].p_z_min, drones[2].p_z_max);
end when;
*/
void DroneSwarm_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1831};
  real_array tmp24;
  real_array tmp25;
  real_array tmp26;
  real_array tmp27;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp24, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp25, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp26, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp27, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* drones[2].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    real_array_copy_data(omc_DroneSwarm_drones_scan__lidar(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), tmp24, tmp25, tmp26, ((modelica_integer) 2), ((modelica_integer) 5), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* drones[2].lidar_range PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* drones[2].p_x_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* drones[2].p_x_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* drones[2].p_y_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* drones[2].p_y_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* drones[2].p_z_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* drones[2].p_z_max PARAM */)), tmp27);
  }
  threadData->lastEquationSolved = 1831;
}

/*
equation index: 1832
type: WHEN

when {$whenCondition2} then
  (drones[2].ai_ux, drones[2].ai_uy, drones[2].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[2].x, drones[2].y, drones[2].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, drones[2].lidar_cloud, 0.3333333333333333, time);
end when;
*/
void DroneSwarm_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1832};
  real_array tmp28;
  real_array tmp29;
  real_array tmp30;
  real_array tmp31;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp28, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp29, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp30, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp31, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* drones[2].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* drones[2].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), tmp28, tmp29, tmp30, tmp31, 0.3333333333333333, data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* drones[2].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* drones[2].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1832;
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
$DER.drones[2].vz = (drones[2].ai_uz - drones[2].kd * drones[2].vz * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* der(drones[2].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* drones[2].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* drones[2].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1833;
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
$DER.drones[2].vx = (drones[2].ai_ux - drones[2].kd * drones[2].vx * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(drones[2].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* drones[2].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* drones[2].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1834;
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
$DER.drones[2].vy = (drones[2].ai_uy - drones[2].kd * drones[2].vy * drones[2].v_norm) / drones[2].m
*/
void DroneSwarm_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(drones[2].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[780]] /* drones[2].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* drones[2].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* drones[2].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* drones[2].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* drones[2].m PARAM */),"drones[2].m",equationIndexes);
  threadData->lastEquationSolved = 1835;
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
$whenCondition3 = sample(3, 0.0, drones[3].T_ctrl)
*/
void DroneSwarm_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1836};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = data->simulationInfo->samples[2];
  threadData->lastEquationSolved = 1836;
}

/*
equation index: 1837
type: WHEN

when {$whenCondition3} then
  drones[3].lidar_cloud = DroneSwarm.drones.scan_lidar(drones[3].x, drones[3].y, drones[3].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, 3, 5, drones[3].lidar_range, drones[3].p_x_min, drones[3].p_x_max, drones[3].p_y_min, drones[3].p_y_max, drones[3].p_z_min, drones[3].p_z_max);
end when;
*/
void DroneSwarm_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1837};
  real_array tmp32;
  real_array tmp33;
  real_array tmp34;
  real_array tmp35;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp32, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp33, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp34, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp35, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* drones[3].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    real_array_copy_data(omc_DroneSwarm_drones_scan__lidar(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), tmp32, tmp33, tmp34, ((modelica_integer) 3), ((modelica_integer) 5), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* drones[3].lidar_range PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* drones[3].p_x_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* drones[3].p_x_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* drones[3].p_y_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* drones[3].p_y_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* drones[3].p_z_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* drones[3].p_z_max PARAM */)), tmp35);
  }
  threadData->lastEquationSolved = 1837;
}

/*
equation index: 1838
type: WHEN

when {$whenCondition3} then
  (drones[3].ai_ux, drones[3].ai_uy, drones[3].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[3].x, drones[3].y, drones[3].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, drones[3].lidar_cloud, 0.6666666666666666, time);
end when;
*/
void DroneSwarm_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1838};
  real_array tmp36;
  real_array tmp37;
  real_array tmp38;
  real_array tmp39;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp36, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp37, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp38, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp39, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* drones[3].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* drones[3].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), tmp36, tmp37, tmp38, tmp39, 0.6666666666666666, data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* drones[3].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* drones[3].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1838;
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
$DER.drones[3].vx = (drones[3].ai_ux - drones[3].kd * drones[3].vx * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(drones[3].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* drones[3].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* drones[3].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1839;
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
$DER.drones[3].vy = (drones[3].ai_uy - drones[3].kd * drones[3].vy * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(drones[3].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[781]] /* drones[3].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* drones[3].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1840;
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
$DER.drones[3].vz = (drones[3].ai_uz - drones[3].kd * drones[3].vz * drones[3].v_norm) / drones[3].m
*/
void DroneSwarm_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(drones[3].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* drones[3].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* drones[3].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* drones[3].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* drones[3].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* drones[3].m PARAM */),"drones[3].m",equationIndexes);
  threadData->lastEquationSolved = 1841;
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
$whenCondition4 = sample(4, 0.0, drones[4].T_ctrl)
*/
void DroneSwarm_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1842};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = data->simulationInfo->samples[3];
  threadData->lastEquationSolved = 1842;
}

/*
equation index: 1843
type: WHEN

when {$whenCondition4} then
  drones[4].lidar_cloud = DroneSwarm.drones.scan_lidar(drones[4].x, drones[4].y, drones[4].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, 4, 5, drones[4].lidar_range, drones[4].p_x_min, drones[4].p_x_max, drones[4].p_y_min, drones[4].p_y_max, drones[4].p_z_min, drones[4].p_z_max);
end when;
*/
void DroneSwarm_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1843};
  real_array tmp40;
  real_array tmp41;
  real_array tmp42;
  real_array tmp43;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp40, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp41, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp42, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp43, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* drones[4].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    real_array_copy_data(omc_DroneSwarm_drones_scan__lidar(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */), tmp40, tmp41, tmp42, ((modelica_integer) 4), ((modelica_integer) 5), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* drones[4].lidar_range PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* drones[4].p_x_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* drones[4].p_x_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* drones[4].p_y_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* drones[4].p_y_max PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* drones[4].p_z_min PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* drones[4].p_z_max PARAM */)), tmp43);
  }
  threadData->lastEquationSolved = 1843;
}

/*
equation index: 1844
type: WHEN

when {$whenCondition4} then
  (drones[4].ai_ux, drones[4].ai_uy, drones[4].ai_uz) = DroneSwarm.drones.get_ai_thrust(drones[4].x, drones[4].y, drones[4].z, {drones[1].x, drones[2].x, drones[3].x, drones[4].x}, {drones[1].y, drones[2].y, drones[3].y, drones[4].y}, {drones[1].z, drones[2].z, drones[3].z, drones[4].z}, drones[4].lidar_cloud, 1.0, time);
end when;
*/
void DroneSwarm_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1844};
  real_array tmp44;
  real_array tmp45;
  real_array tmp46;
  real_array tmp47;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
  {
    array_alloc_scalar_real_array(&tmp44, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
    array_alloc_scalar_real_array(&tmp45, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
    array_alloc_scalar_real_array(&tmp46, 4, (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */), (modelica_real)(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
    real_array_create(&tmp47, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* drones[4].lidar_cloud[1,1,1] DISCRETE */))), 3, (_index_t)5, (_index_t)5, (_index_t)5);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* drones[4].ai_ux DISCRETE */) = omc_DroneSwarm_drones_get__ai__thrust(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */), tmp44, tmp45, tmp46, tmp47, 1.0, data->localData[0]->timeValue ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* drones[4].ai_uy DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* drones[4].ai_uz DISCRETE */));
  }
  threadData->lastEquationSolved = 1844;
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
$DER.drones[4].vz = (drones[4].ai_uz - drones[4].kd * drones[4].vz * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* der(drones[4].vz) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[786]] /* drones[4].ai_uz DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* drones[4].vz STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1845;
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
$DER.drones[4].vy = (drones[4].ai_uy - drones[4].kd * drones[4].vy * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(drones[4].vy) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[782]] /* drones[4].ai_uy DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* drones[4].vy STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1846;
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
$DER.drones[4].vx = (drones[4].ai_ux - drones[4].kd * drones[4].vx * drones[4].v_norm) / drones[4].m
*/
void DroneSwarm_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(drones[4].vx) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* drones[4].ai_ux DISCRETE */) - (((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* drones[4].kd PARAM */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* drones[4].vx STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* drones[4].v_norm variable */)))),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* drones[4].m PARAM */),"drones[4].m",equationIndexes);
  threadData->lastEquationSolved = 1847;
}

/*
equation index: 1848
type: ARRAY_CALL_ASSIGN

world.z_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 0.0, 1.0}, {0.0, 1.0, 0.0})
*/
void DroneSwarm_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1848};
  real_array tmp48;
  real_array_create(&tmp48, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* world.z_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT3, _OMC_LIT2), tmp48);
  threadData->lastEquationSolved = 1848;
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[2] = world.z_label.R_lines[1,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* world.z_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* world.z_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1849;
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[2] = world.z_label.cylinders[2].lengthDirection[2]
*/
void DroneSwarm_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[723]] /* world.z_label.cylinders[1].lengthDirection[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[726]] /* world.z_label.cylinders[2].lengthDirection[2] variable */);
  threadData->lastEquationSolved = 1850;
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[1] = world.z_label.R_lines[1,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* world.z_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* world.z_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1851;
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[1] = world.z_label.cylinders[2].lengthDirection[1]
*/
void DroneSwarm_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[722]] /* world.z_label.cylinders[1].lengthDirection[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[725]] /* world.z_label.cylinders[2].lengthDirection[1] variable */);
  threadData->lastEquationSolved = 1852;
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[2] = world.z_label.R_lines[2,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* world.z_label.cylinders[3].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1853;
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[2] = world.z_label.cylinders[3].r[2]
*/
void DroneSwarm_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* world.z_label.cylinders[2].r[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[735]] /* world.z_label.cylinders[3].r[2] variable */);
  threadData->lastEquationSolved = 1854;
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[2] = (world.z_label.R_lines[1,2] - world.z_label.R_lines[2,2]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* world.z_label.cylinders[3].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* world.z_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* world.z_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1855;
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[1] = world.z_label.R_lines[2,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* world.z_label.cylinders[3].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1856;
}

/*
equation index: 1857
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[1] = world.z_label.cylinders[3].r[1]
*/
void DroneSwarm_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* world.z_label.cylinders[2].r[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* world.z_label.cylinders[3].r[1] variable */);
  threadData->lastEquationSolved = 1857;
}

/*
equation index: 1858
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[1] = (world.z_label.R_lines[1,1] - world.z_label.R_lines[2,1]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* world.z_label.cylinders[3].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* world.z_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* world.z_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1858;
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].lengthDirection[3] = world.z_label.R_lines[1,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* world.z_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* world.z_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1859;
}

/*
equation index: 1860
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].lengthDirection[3] = world.z_label.cylinders[2].lengthDirection[3]
*/
void DroneSwarm_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[724]] /* world.z_label.cylinders[1].lengthDirection[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* world.z_label.cylinders[2].lengthDirection[3] variable */);
  threadData->lastEquationSolved = 1860;
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r[3] = world.labelStart + world.z_label.R_lines[2,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* world.z_label.cylinders[3].r[3] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1861;
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r[3] = world.z_label.cylinders[3].r[3]
*/
void DroneSwarm_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* world.z_label.cylinders[2].r[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* world.z_label.cylinders[3].r[3] variable */);
  threadData->lastEquationSolved = 1862;
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].lengthDirection[3] = (world.z_label.R_lines[1,3] - world.z_label.R_lines[2,3]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* world.z_label.cylinders[3].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* world.z_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* world.z_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1863;
}

/*
equation index: 1864
type: ARRAY_CALL_ASSIGN

world.y_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({0.0, 1.0, 0.0}, {-1.0, 0.0, 0.0})
*/
void DroneSwarm_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1864};
  real_array tmp49;
  real_array_create(&tmp49, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* world.y_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT2, _OMC_LIT4), tmp49);
  threadData->lastEquationSolved = 1864;
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[2] = world.labelStart + world.y_label.R_lines[2,2] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[603]] /* world.y_label.cylinders[2].r[2] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1865;
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[1] = world.y_label.R_lines[1,1] * world.scaledLabel + world.y_label.R_lines[2,1] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* world.y_label.cylinders[1].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* world.y_label.R_lines[1,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1866;
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[1] = world.y_label.R_lines[2,1] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* world.y_label.cylinders[2].r[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1867;
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[1] = world.y_label.R_lines[1,1] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,1] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* world.y_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[580]] /* world.y_label.R_lines[1,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[583]] /* world.y_label.R_lines[2,1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1868;
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[2] = world.y_label.R_lines[1,2] * world.scaledLabel + world.y_label.R_lines[2,2] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* world.y_label.cylinders[1].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* world.y_label.R_lines[1,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1869;
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[2] = world.y_label.R_lines[1,2] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,2] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* world.y_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[581]] /* world.y_label.R_lines[1,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[584]] /* world.y_label.R_lines[2,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1870;
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r[3] = world.y_label.R_lines[2,3] * world.y_label.lines[2,1,2]
*/
void DroneSwarm_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[604]] /* world.y_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1871;
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].lengthDirection[3] = world.y_label.R_lines[1,3] * world.scaledLabel + world.y_label.R_lines[2,3] * world.y_label.lines[1,2,2]
*/
void DroneSwarm_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* world.y_label.cylinders[1].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* world.y_label.R_lines[1,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* world.y_label.lines[1,2,2] variable */));
  threadData->lastEquationSolved = 1872;
}

/*
equation index: 1873
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].lengthDirection[3] = world.y_label.R_lines[1,3] * world.y_label.lines[2,2,1] + world.y_label.R_lines[2,3] * (world.y_label.lines[2,2,2] - world.y_label.lines[2,1,2])
*/
void DroneSwarm_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[601]] /* world.y_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[582]] /* world.y_label.R_lines[1,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[622]] /* world.y_label.lines[2,2,1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[585]] /* world.y_label.R_lines[2,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[623]] /* world.y_label.lines[2,2,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[621]] /* world.y_label.lines[2,1,2] variable */));
  threadData->lastEquationSolved = 1873;
}

/*
equation index: 1874
type: ARRAY_CALL_ASSIGN

world.x_label.R_lines = Modelica.Mechanics.MultiBody.Frames.TransformationMatrices.from_nxy({1.0, 0.0, 0.0}, {0.0, 1.0, 0.0})
*/
void DroneSwarm_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1874};
  real_array tmp50;
  real_array_create(&tmp50, ((modelica_real*)&((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* world.x_label.R_lines[1,1] variable */))), 2, (_index_t)3, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, _OMC_LIT1, _OMC_LIT2), tmp50);
  threadData->lastEquationSolved = 1874;
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[2] = world.x_label.R_lines[2,2] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* world.x_label.cylinders[2].r[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1875;
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[1] = world.scaledLabel * (world.x_label.R_lines[1,1] + world.x_label.R_lines[2,1])
*/
void DroneSwarm_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[475]] /* world.x_label.cylinders[1].lengthDirection[1] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* world.x_label.R_lines[1,1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* world.x_label.R_lines[2,1] variable */));
  threadData->lastEquationSolved = 1876;
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[1] = world.labelStart + world.x_label.R_lines[2,1] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* world.x_label.cylinders[2].r[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* world.labelStart PARAM */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1877;
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[1] = (world.x_label.R_lines[1,1] - world.x_label.R_lines[2,1]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[478]] /* world.x_label.cylinders[2].lengthDirection[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* world.x_label.R_lines[1,1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* world.x_label.R_lines[2,1] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1878;
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[2] = world.scaledLabel * (world.x_label.R_lines[1,2] + world.x_label.R_lines[2,2])
*/
void DroneSwarm_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[476]] /* world.x_label.cylinders[1].lengthDirection[2] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* world.x_label.R_lines[1,2] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* world.x_label.R_lines[2,2] variable */));
  threadData->lastEquationSolved = 1879;
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[2] = (world.x_label.R_lines[1,2] - world.x_label.R_lines[2,2]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* world.x_label.cylinders[2].lengthDirection[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* world.x_label.R_lines[1,2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* world.x_label.R_lines[2,2] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1880;
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r[3] = world.x_label.R_lines[2,3] * world.scaledLabel
*/
void DroneSwarm_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* world.x_label.cylinders[2].r[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1881;
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].lengthDirection[3] = world.scaledLabel * (world.x_label.R_lines[1,3] + world.x_label.R_lines[2,3])
*/
void DroneSwarm_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[477]] /* world.x_label.cylinders[1].lengthDirection[3] variable */) = ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* world.x_label.R_lines[1,3] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* world.x_label.R_lines[2,3] variable */));
  threadData->lastEquationSolved = 1882;
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].lengthDirection[3] = (world.x_label.R_lines[1,3] - world.x_label.R_lines[2,3]) * world.scaledLabel
*/
void DroneSwarm_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* world.x_label.cylinders[2].lengthDirection[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* world.x_label.R_lines[1,3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* world.x_label.R_lines[2,3] variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* world.scaledLabel PARAM */));
  threadData->lastEquationSolved = 1883;
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
  static void (*const eqFunctions[88])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_1796,
    DroneSwarm_eqFunction_1797,
    DroneSwarm_eqFunction_1798,
    DroneSwarm_eqFunction_1799,
    DroneSwarm_eqFunction_1800,
    DroneSwarm_eqFunction_1801,
    DroneSwarm_eqFunction_1802,
    DroneSwarm_eqFunction_1803,
    DroneSwarm_eqFunction_1804,
    DroneSwarm_eqFunction_1805,
    DroneSwarm_eqFunction_1806,
    DroneSwarm_eqFunction_1807,
    DroneSwarm_eqFunction_1808,
    DroneSwarm_eqFunction_1809,
    DroneSwarm_eqFunction_1810,
    DroneSwarm_eqFunction_1811,
    DroneSwarm_eqFunction_1812,
    DroneSwarm_eqFunction_1813,
    DroneSwarm_eqFunction_1814,
    DroneSwarm_eqFunction_1815,
    DroneSwarm_eqFunction_1816,
    DroneSwarm_eqFunction_1817,
    DroneSwarm_eqFunction_1818,
    DroneSwarm_eqFunction_1819,
    DroneSwarm_eqFunction_1820,
    DroneSwarm_eqFunction_1821,
    DroneSwarm_eqFunction_1822,
    DroneSwarm_eqFunction_1823,
    DroneSwarm_eqFunction_1824,
    DroneSwarm_eqFunction_1825,
    DroneSwarm_eqFunction_1826,
    DroneSwarm_eqFunction_1827,
    DroneSwarm_eqFunction_1828,
    DroneSwarm_eqFunction_1829,
    DroneSwarm_eqFunction_1830,
    DroneSwarm_eqFunction_1831,
    DroneSwarm_eqFunction_1832,
    DroneSwarm_eqFunction_1833,
    DroneSwarm_eqFunction_1834,
    DroneSwarm_eqFunction_1835,
    DroneSwarm_eqFunction_1836,
    DroneSwarm_eqFunction_1837,
    DroneSwarm_eqFunction_1838,
    DroneSwarm_eqFunction_1839,
    DroneSwarm_eqFunction_1840,
    DroneSwarm_eqFunction_1841,
    DroneSwarm_eqFunction_1842,
    DroneSwarm_eqFunction_1843,
    DroneSwarm_eqFunction_1844,
    DroneSwarm_eqFunction_1845,
    DroneSwarm_eqFunction_1846,
    DroneSwarm_eqFunction_1847,
    DroneSwarm_eqFunction_1848,
    DroneSwarm_eqFunction_1849,
    DroneSwarm_eqFunction_1850,
    DroneSwarm_eqFunction_1851,
    DroneSwarm_eqFunction_1852,
    DroneSwarm_eqFunction_1853,
    DroneSwarm_eqFunction_1854,
    DroneSwarm_eqFunction_1855,
    DroneSwarm_eqFunction_1856,
    DroneSwarm_eqFunction_1857,
    DroneSwarm_eqFunction_1858,
    DroneSwarm_eqFunction_1859,
    DroneSwarm_eqFunction_1860,
    DroneSwarm_eqFunction_1861,
    DroneSwarm_eqFunction_1862,
    DroneSwarm_eqFunction_1863,
    DroneSwarm_eqFunction_1864,
    DroneSwarm_eqFunction_1865,
    DroneSwarm_eqFunction_1866,
    DroneSwarm_eqFunction_1867,
    DroneSwarm_eqFunction_1868,
    DroneSwarm_eqFunction_1869,
    DroneSwarm_eqFunction_1870,
    DroneSwarm_eqFunction_1871,
    DroneSwarm_eqFunction_1872,
    DroneSwarm_eqFunction_1873,
    DroneSwarm_eqFunction_1874,
    DroneSwarm_eqFunction_1875,
    DroneSwarm_eqFunction_1876,
    DroneSwarm_eqFunction_1877,
    DroneSwarm_eqFunction_1878,
    DroneSwarm_eqFunction_1879,
    DroneSwarm_eqFunction_1880,
    DroneSwarm_eqFunction_1881,
    DroneSwarm_eqFunction_1882,
    DroneSwarm_eqFunction_1883
  };
  
  for (int id = 0; id < 88; id++) {
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
extern void DroneSwarm_eqFunction_1796(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1797(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1798(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1799(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1800(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1801(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1802(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1803(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1804(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1805(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1806(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1807(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1808(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1809(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1810(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1811(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1824(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1827(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1828(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1829(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1830(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1833(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1834(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1835(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1836(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1839(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1840(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1841(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1842(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1845(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1846(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1847(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[32])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_1796,
    DroneSwarm_eqFunction_1797,
    DroneSwarm_eqFunction_1798,
    DroneSwarm_eqFunction_1799,
    DroneSwarm_eqFunction_1800,
    DroneSwarm_eqFunction_1801,
    DroneSwarm_eqFunction_1802,
    DroneSwarm_eqFunction_1803,
    DroneSwarm_eqFunction_1804,
    DroneSwarm_eqFunction_1805,
    DroneSwarm_eqFunction_1806,
    DroneSwarm_eqFunction_1807,
    DroneSwarm_eqFunction_1808,
    DroneSwarm_eqFunction_1809,
    DroneSwarm_eqFunction_1810,
    DroneSwarm_eqFunction_1811,
    DroneSwarm_eqFunction_1824,
    DroneSwarm_eqFunction_1827,
    DroneSwarm_eqFunction_1828,
    DroneSwarm_eqFunction_1829,
    DroneSwarm_eqFunction_1830,
    DroneSwarm_eqFunction_1833,
    DroneSwarm_eqFunction_1834,
    DroneSwarm_eqFunction_1835,
    DroneSwarm_eqFunction_1836,
    DroneSwarm_eqFunction_1839,
    DroneSwarm_eqFunction_1840,
    DroneSwarm_eqFunction_1841,
    DroneSwarm_eqFunction_1842,
    DroneSwarm_eqFunction_1845,
    DroneSwarm_eqFunction_1846,
    DroneSwarm_eqFunction_1847
  };
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 32; id++) {
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
  const size_t eqMap[] = {1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1824, 1827, 1828, 1829, 1830, 1833, 1834, 1835, 1836, 1839, 1840, 1841, 1842, 1845, 1846, 1847};
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

#define _OMC_LIT_RESOURCE_4_name_data "TestLidarStandalone"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,19,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,72,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "UnderwaterDrone"
#define _OMC_LIT_RESOURCE_5_dir_data "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,15,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,72,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "UnderwaterDrone2"
#define _OMC_LIT_RESOURCE_6_dir_data "C:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,16,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,72,_OMC_LIT_RESOURCE_6_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,14,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir)}};
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
  data->modelData->modelGUID = "{6a67ba6b-c84b-42d1-a804-5fc097e0dbe0}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/DroneSwarm_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 24;
  data->modelData->nDiscreteReal = 512;
  data->modelData->nVariablesRealArray = 1287;
  data->modelData->nVariablesIntegerArray = 16;
  data->modelData->nVariablesBooleanArray = 4;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 162;
  data->modelData->nParametersIntegerArray = 13;
  data->modelData->nParametersBooleanArray = 6;
  data->modelData->nParametersStringArray = 25;
  data->modelData->nParametersReal = 162;
  data->modelData->nParametersInteger = 13;
  data->modelData->nParametersBoolean = 6;
  data->modelData->nParametersString = 25;
  data->modelData->nAliasRealArray = 217;
  data->modelData->nAliasIntegerArray = 15;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 12;
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 4;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 6;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2700;
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


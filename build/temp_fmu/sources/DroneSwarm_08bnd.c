/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "DroneSwarm_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1884
type: SIMPLE_ASSIGN
$START.drones[4].z = drones[4].start_z
*/
static void DroneSwarm_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1884};
  ((modelica_real *)((data->modelData->realVarsData[23] /* drones[4].z STATE(1,drones[4].vz) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* drones[4].start_z PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */) = ((modelica_real *)((data->modelData->realVarsData[23] /* drones[4].z STATE(1,drones[4].vz) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[23] /* drones[4].z */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* drones[4].z STATE(1,drones[4].vz) */));
  threadData->lastEquationSolved = 1884;
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
$START.drones[4].y = drones[4].start_y
*/
static void DroneSwarm_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1885};
  ((modelica_real *)((data->modelData->realVarsData[19] /* drones[4].y STATE(1,drones[4].vy) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* drones[4].start_y PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */) = ((modelica_real *)((data->modelData->realVarsData[19] /* drones[4].y STATE(1,drones[4].vy) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[19] /* drones[4].y */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* drones[4].y STATE(1,drones[4].vy) */));
  threadData->lastEquationSolved = 1885;
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
$START.drones[4].x = drones[4].start_x
*/
static void DroneSwarm_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1886};
  ((modelica_real *)((data->modelData->realVarsData[15] /* drones[4].x STATE(1,drones[4].vx) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* drones[4].start_x PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */) = ((modelica_real *)((data->modelData->realVarsData[15] /* drones[4].x STATE(1,drones[4].vx) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[15] /* drones[4].x */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* drones[4].x STATE(1,drones[4].vx) */));
  threadData->lastEquationSolved = 1886;
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
$START.drones[3].z = drones[3].start_z
*/
static void DroneSwarm_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1887};
  ((modelica_real *)((data->modelData->realVarsData[22] /* drones[3].z STATE(1,drones[3].vz) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* drones[3].start_z PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */) = ((modelica_real *)((data->modelData->realVarsData[22] /* drones[3].z STATE(1,drones[3].vz) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[22] /* drones[3].z */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* drones[3].z STATE(1,drones[3].vz) */));
  threadData->lastEquationSolved = 1887;
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
$START.drones[3].y = drones[3].start_y
*/
static void DroneSwarm_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1888};
  ((modelica_real *)((data->modelData->realVarsData[18] /* drones[3].y STATE(1,drones[3].vy) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* drones[3].start_y PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */) = ((modelica_real *)((data->modelData->realVarsData[18] /* drones[3].y STATE(1,drones[3].vy) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[18] /* drones[3].y */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* drones[3].y STATE(1,drones[3].vy) */));
  threadData->lastEquationSolved = 1888;
}

/*
equation index: 1889
type: SIMPLE_ASSIGN
$START.drones[3].x = drones[3].start_x
*/
static void DroneSwarm_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1889};
  ((modelica_real *)((data->modelData->realVarsData[14] /* drones[3].x STATE(1,drones[3].vx) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* drones[3].start_x PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */) = ((modelica_real *)((data->modelData->realVarsData[14] /* drones[3].x STATE(1,drones[3].vx) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[14] /* drones[3].x */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* drones[3].x STATE(1,drones[3].vx) */));
  threadData->lastEquationSolved = 1889;
}

/*
equation index: 1890
type: SIMPLE_ASSIGN
$START.drones[2].z = drones[2].start_z
*/
static void DroneSwarm_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1890};
  ((modelica_real *)((data->modelData->realVarsData[21] /* drones[2].z STATE(1,drones[2].vz) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* drones[2].start_z PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */) = ((modelica_real *)((data->modelData->realVarsData[21] /* drones[2].z STATE(1,drones[2].vz) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[21] /* drones[2].z */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* drones[2].z STATE(1,drones[2].vz) */));
  threadData->lastEquationSolved = 1890;
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
$START.drones[2].y = drones[2].start_y
*/
static void DroneSwarm_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1891};
  ((modelica_real *)((data->modelData->realVarsData[17] /* drones[2].y STATE(1,drones[2].vy) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* drones[2].start_y PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */) = ((modelica_real *)((data->modelData->realVarsData[17] /* drones[2].y STATE(1,drones[2].vy) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[17] /* drones[2].y */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* drones[2].y STATE(1,drones[2].vy) */));
  threadData->lastEquationSolved = 1891;
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
$START.drones[2].x = drones[2].start_x
*/
static void DroneSwarm_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1892};
  ((modelica_real *)((data->modelData->realVarsData[13] /* drones[2].x STATE(1,drones[2].vx) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* drones[2].start_x PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */) = ((modelica_real *)((data->modelData->realVarsData[13] /* drones[2].x STATE(1,drones[2].vx) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[13] /* drones[2].x */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* drones[2].x STATE(1,drones[2].vx) */));
  threadData->lastEquationSolved = 1892;
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
$START.drones[1].z = drones[1].start_z
*/
static void DroneSwarm_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1893};
  ((modelica_real *)((data->modelData->realVarsData[20] /* drones[1].z STATE(1,drones[1].vz) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* drones[1].start_z PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */) = ((modelica_real *)((data->modelData->realVarsData[20] /* drones[1].z STATE(1,drones[1].vz) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[20] /* drones[1].z */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* drones[1].z STATE(1,drones[1].vz) */));
  threadData->lastEquationSolved = 1893;
}

/*
equation index: 1894
type: SIMPLE_ASSIGN
$START.drones[1].y = drones[1].start_y
*/
static void DroneSwarm_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1894};
  ((modelica_real *)((data->modelData->realVarsData[16] /* drones[1].y STATE(1,drones[1].vy) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* drones[1].start_y PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */) = ((modelica_real *)((data->modelData->realVarsData[16] /* drones[1].y STATE(1,drones[1].vy) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[16] /* drones[1].y */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* drones[1].y STATE(1,drones[1].vy) */));
  threadData->lastEquationSolved = 1894;
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
$START.drones[1].x = drones[1].start_x
*/
static void DroneSwarm_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1895};
  ((modelica_real *)((data->modelData->realVarsData[12] /* drones[1].x STATE(1,drones[1].vx) */).attribute .start.data))[0] = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* drones[1].start_x PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */) = ((modelica_real *)((data->modelData->realVarsData[12] /* drones[1].x STATE(1,drones[1].vx) */).attribute .start.data))[0];
  infoStreamPrint(OMC_LOG_INIT_V, 0,
                  "updated start value: %s(start=%g)",
                  data->modelData->realVarsData[12] /* drones[1].x */ .info.name,
                  (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* drones[1].x STATE(1,drones[1].vx) */));
  threadData->lastEquationSolved = 1895;
}
OMC_DISABLE_OPT
int DroneSwarm_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  /* min ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating min-values");
  messageClose(OMC_LOG_INIT);
  
  /* max ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating max-values");
  messageClose(OMC_LOG_INIT);
  
  /* nominal **************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating nominal-values");
  messageClose(OMC_LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating primary start-values");
  DroneSwarm_eqFunction_1884(data, threadData);
  DroneSwarm_eqFunction_1885(data, threadData);
  DroneSwarm_eqFunction_1886(data, threadData);
  DroneSwarm_eqFunction_1887(data, threadData);
  DroneSwarm_eqFunction_1888(data, threadData);
  DroneSwarm_eqFunction_1889(data, threadData);
  DroneSwarm_eqFunction_1890(data, threadData);
  DroneSwarm_eqFunction_1891(data, threadData);
  DroneSwarm_eqFunction_1892(data, threadData);
  DroneSwarm_eqFunction_1893(data, threadData);
  DroneSwarm_eqFunction_1894(data, threadData);
  DroneSwarm_eqFunction_1895(data, threadData);
  messageClose(OMC_LOG_INIT);
  
  return 0;
}

void DroneSwarm_updateBoundParameters_0(DATA *data, threadData_t *threadData);
void DroneSwarm_updateBoundParameters_1(DATA *data, threadData_t *threadData);
OMC_DISABLE_OPT
int DroneSwarm_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* world.axisColor_x[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[4].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* world.axisColor_x[2] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[5].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* world.axisColor_x[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[6].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* world.gravityArrowColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[7].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* world.gravityArrowColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[9].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* world.gravitySphereColor[1] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[10].time_unvarying = 1;
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* world.gravitySphereColor[3] DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* N PARAM */) = ((modelica_integer) 4);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* drones[1].N PARAM */) = ((modelica_integer) 4);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* drones[2].N PARAM */) = ((modelica_integer) 4);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* drones[3].N PARAM */) = ((modelica_integer) 4);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* drones[4].N PARAM */) = ((modelica_integer) 4);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* drones[1].grid_res PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* drones[2].grid_res PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* drones[3].grid_res PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* drones[4].grid_res PARAM */) = ((modelica_integer) 5);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* world.x_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* world.y_label.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* world.z_label.n PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* world.n[1] PARAM */) = 0.0;
  data->modelData->realParameterData[99].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* world.n[2] PARAM */) = -1.0;
  data->modelData->realParameterData[100].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* world.n[3] PARAM */) = 0.0;
  data->modelData->realParameterData[101].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[0]] /* world.animateGravity PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1]] /* world.animateGround PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[2]] /* world.animateWorld PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[3]] /* world.axisShowLabels PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[5]] /* world.enableAnimation PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* world.gravityType PARAM */) = 1;
  data->modelData->integerParameterData[9].time_unvarying = 1;
  DroneSwarm_updateBoundParameters_0(data, threadData);
  DroneSwarm_updateBoundParameters_1(data, threadData);
  return 0;
}

#if defined(__cplusplus)
}
#endif

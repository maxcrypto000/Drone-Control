#include "DroneSwarm_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1348
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1348};
  (data->simulationInfo->realVarsPre[1063] /* drones[3].lidar_cloud[2,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1348;
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,1,2] = $PRE.drones[3].lidar_cloud[2,1,2]
*/
void DroneSwarm_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* drones[3].lidar_cloud[2,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1063] /* drones[3].lidar_cloud[2,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1349;
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1350};
  (data->simulationInfo->realVarsPre[1064] /* drones[3].lidar_cloud[2,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1350;
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,1,3] = $PRE.drones[3].lidar_cloud[2,1,3]
*/
void DroneSwarm_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1064]] /* drones[3].lidar_cloud[2,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1064] /* drones[3].lidar_cloud[2,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1351;
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1352};
  (data->simulationInfo->realVarsPre[1065] /* drones[3].lidar_cloud[2,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1352;
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,1,4] = $PRE.drones[3].lidar_cloud[2,1,4]
*/
void DroneSwarm_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1065]] /* drones[3].lidar_cloud[2,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1065] /* drones[3].lidar_cloud[2,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1353;
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1354};
  (data->simulationInfo->realVarsPre[1066] /* drones[3].lidar_cloud[2,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1354;
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,1,5] = $PRE.drones[3].lidar_cloud[2,1,5]
*/
void DroneSwarm_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1066]] /* drones[3].lidar_cloud[2,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1066] /* drones[3].lidar_cloud[2,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1355;
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1356};
  (data->simulationInfo->realVarsPre[1067] /* drones[3].lidar_cloud[2,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1356;
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,2,1] = $PRE.drones[3].lidar_cloud[2,2,1]
*/
void DroneSwarm_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1067]] /* drones[3].lidar_cloud[2,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1067] /* drones[3].lidar_cloud[2,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1357;
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1358};
  (data->simulationInfo->realVarsPre[1068] /* drones[3].lidar_cloud[2,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1358;
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,2,2] = $PRE.drones[3].lidar_cloud[2,2,2]
*/
void DroneSwarm_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1068]] /* drones[3].lidar_cloud[2,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1068] /* drones[3].lidar_cloud[2,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1359;
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1360};
  (data->simulationInfo->realVarsPre[1069] /* drones[3].lidar_cloud[2,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1360;
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,2,3] = $PRE.drones[3].lidar_cloud[2,2,3]
*/
void DroneSwarm_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1069]] /* drones[3].lidar_cloud[2,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1069] /* drones[3].lidar_cloud[2,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1361;
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1362};
  (data->simulationInfo->realVarsPre[1070] /* drones[3].lidar_cloud[2,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1362;
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,2,4] = $PRE.drones[3].lidar_cloud[2,2,4]
*/
void DroneSwarm_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1070]] /* drones[3].lidar_cloud[2,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1070] /* drones[3].lidar_cloud[2,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1363;
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1364};
  (data->simulationInfo->realVarsPre[1071] /* drones[3].lidar_cloud[2,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1364;
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,2,5] = $PRE.drones[3].lidar_cloud[2,2,5]
*/
void DroneSwarm_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1071]] /* drones[3].lidar_cloud[2,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1071] /* drones[3].lidar_cloud[2,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1365;
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1366};
  (data->simulationInfo->realVarsPre[1072] /* drones[3].lidar_cloud[2,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1366;
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,3,1] = $PRE.drones[3].lidar_cloud[2,3,1]
*/
void DroneSwarm_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1072]] /* drones[3].lidar_cloud[2,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1072] /* drones[3].lidar_cloud[2,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1367;
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1368};
  (data->simulationInfo->realVarsPre[1073] /* drones[3].lidar_cloud[2,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1368;
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,3,2] = $PRE.drones[3].lidar_cloud[2,3,2]
*/
void DroneSwarm_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1073]] /* drones[3].lidar_cloud[2,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1073] /* drones[3].lidar_cloud[2,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1369;
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1370};
  (data->simulationInfo->realVarsPre[1074] /* drones[3].lidar_cloud[2,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1370;
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,3,3] = $PRE.drones[3].lidar_cloud[2,3,3]
*/
void DroneSwarm_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1074]] /* drones[3].lidar_cloud[2,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1074] /* drones[3].lidar_cloud[2,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1371;
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1372};
  (data->simulationInfo->realVarsPre[1075] /* drones[3].lidar_cloud[2,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1372;
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,3,4] = $PRE.drones[3].lidar_cloud[2,3,4]
*/
void DroneSwarm_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1075]] /* drones[3].lidar_cloud[2,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1075] /* drones[3].lidar_cloud[2,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1373;
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1374};
  (data->simulationInfo->realVarsPre[1076] /* drones[3].lidar_cloud[2,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1374;
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,3,5] = $PRE.drones[3].lidar_cloud[2,3,5]
*/
void DroneSwarm_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1076]] /* drones[3].lidar_cloud[2,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1076] /* drones[3].lidar_cloud[2,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1375;
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1376};
  (data->simulationInfo->realVarsPre[1077] /* drones[3].lidar_cloud[2,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1376;
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,4,1] = $PRE.drones[3].lidar_cloud[2,4,1]
*/
void DroneSwarm_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1077]] /* drones[3].lidar_cloud[2,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1077] /* drones[3].lidar_cloud[2,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1377;
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1378};
  (data->simulationInfo->realVarsPre[1078] /* drones[3].lidar_cloud[2,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1378;
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,4,2] = $PRE.drones[3].lidar_cloud[2,4,2]
*/
void DroneSwarm_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1078]] /* drones[3].lidar_cloud[2,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1078] /* drones[3].lidar_cloud[2,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1379;
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1380};
  (data->simulationInfo->realVarsPre[1079] /* drones[3].lidar_cloud[2,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1380;
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,4,3] = $PRE.drones[3].lidar_cloud[2,4,3]
*/
void DroneSwarm_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* drones[3].lidar_cloud[2,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1079] /* drones[3].lidar_cloud[2,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1381;
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1382};
  (data->simulationInfo->realVarsPre[1080] /* drones[3].lidar_cloud[2,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1382;
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,4,4] = $PRE.drones[3].lidar_cloud[2,4,4]
*/
void DroneSwarm_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* drones[3].lidar_cloud[2,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1080] /* drones[3].lidar_cloud[2,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1383;
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1384};
  (data->simulationInfo->realVarsPre[1081] /* drones[3].lidar_cloud[2,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1384;
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,4,5] = $PRE.drones[3].lidar_cloud[2,4,5]
*/
void DroneSwarm_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* drones[3].lidar_cloud[2,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1081] /* drones[3].lidar_cloud[2,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1385;
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->realVarsPre[1082] /* drones[3].lidar_cloud[2,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1386;
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,5,1] = $PRE.drones[3].lidar_cloud[2,5,1]
*/
void DroneSwarm_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* drones[3].lidar_cloud[2,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1082] /* drones[3].lidar_cloud[2,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1387;
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1388};
  (data->simulationInfo->realVarsPre[1083] /* drones[3].lidar_cloud[2,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1388;
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,5,2] = $PRE.drones[3].lidar_cloud[2,5,2]
*/
void DroneSwarm_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* drones[3].lidar_cloud[2,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1083] /* drones[3].lidar_cloud[2,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1389;
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1390};
  (data->simulationInfo->realVarsPre[1084] /* drones[3].lidar_cloud[2,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1390;
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,5,3] = $PRE.drones[3].lidar_cloud[2,5,3]
*/
void DroneSwarm_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* drones[3].lidar_cloud[2,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1084] /* drones[3].lidar_cloud[2,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1391;
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1392};
  (data->simulationInfo->realVarsPre[1085] /* drones[3].lidar_cloud[2,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1392;
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,5,4] = $PRE.drones[3].lidar_cloud[2,5,4]
*/
void DroneSwarm_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1085]] /* drones[3].lidar_cloud[2,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1085] /* drones[3].lidar_cloud[2,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1393;
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1394};
  (data->simulationInfo->realVarsPre[1086] /* drones[3].lidar_cloud[2,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1394;
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,5,5] = $PRE.drones[3].lidar_cloud[2,5,5]
*/
void DroneSwarm_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1086]] /* drones[3].lidar_cloud[2,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1086] /* drones[3].lidar_cloud[2,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1395;
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1396};
  (data->simulationInfo->realVarsPre[1087] /* drones[3].lidar_cloud[3,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1396;
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,1,1] = $PRE.drones[3].lidar_cloud[3,1,1]
*/
void DroneSwarm_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1087]] /* drones[3].lidar_cloud[3,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1087] /* drones[3].lidar_cloud[3,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1397;
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1398};
  (data->simulationInfo->realVarsPre[1088] /* drones[3].lidar_cloud[3,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1398;
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,1,2] = $PRE.drones[3].lidar_cloud[3,1,2]
*/
void DroneSwarm_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1088]] /* drones[3].lidar_cloud[3,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1088] /* drones[3].lidar_cloud[3,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1399;
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1400};
  (data->simulationInfo->realVarsPre[1089] /* drones[3].lidar_cloud[3,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1400;
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,1,3] = $PRE.drones[3].lidar_cloud[3,1,3]
*/
void DroneSwarm_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* drones[3].lidar_cloud[3,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1089] /* drones[3].lidar_cloud[3,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1401;
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1402};
  (data->simulationInfo->realVarsPre[1090] /* drones[3].lidar_cloud[3,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1402;
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,1,4] = $PRE.drones[3].lidar_cloud[3,1,4]
*/
void DroneSwarm_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* drones[3].lidar_cloud[3,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1090] /* drones[3].lidar_cloud[3,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1403;
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1404};
  (data->simulationInfo->realVarsPre[1091] /* drones[3].lidar_cloud[3,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1404;
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,1,5] = $PRE.drones[3].lidar_cloud[3,1,5]
*/
void DroneSwarm_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1091]] /* drones[3].lidar_cloud[3,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1091] /* drones[3].lidar_cloud[3,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1405;
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1406};
  (data->simulationInfo->realVarsPre[1092] /* drones[3].lidar_cloud[3,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1406;
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,2,1] = $PRE.drones[3].lidar_cloud[3,2,1]
*/
void DroneSwarm_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* drones[3].lidar_cloud[3,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1092] /* drones[3].lidar_cloud[3,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1407;
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1408};
  (data->simulationInfo->realVarsPre[1093] /* drones[3].lidar_cloud[3,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1408;
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,2,2] = $PRE.drones[3].lidar_cloud[3,2,2]
*/
void DroneSwarm_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* drones[3].lidar_cloud[3,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1093] /* drones[3].lidar_cloud[3,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1409;
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1410};
  (data->simulationInfo->realVarsPre[1094] /* drones[3].lidar_cloud[3,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1410;
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,2,3] = $PRE.drones[3].lidar_cloud[3,2,3]
*/
void DroneSwarm_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* drones[3].lidar_cloud[3,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1094] /* drones[3].lidar_cloud[3,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1411;
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1412};
  (data->simulationInfo->realVarsPre[1095] /* drones[3].lidar_cloud[3,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1412;
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,2,4] = $PRE.drones[3].lidar_cloud[3,2,4]
*/
void DroneSwarm_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* drones[3].lidar_cloud[3,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1095] /* drones[3].lidar_cloud[3,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1413;
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1414};
  (data->simulationInfo->realVarsPre[1096] /* drones[3].lidar_cloud[3,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1414;
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,2,5] = $PRE.drones[3].lidar_cloud[3,2,5]
*/
void DroneSwarm_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* drones[3].lidar_cloud[3,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1096] /* drones[3].lidar_cloud[3,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1415;
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1416};
  (data->simulationInfo->realVarsPre[1097] /* drones[3].lidar_cloud[3,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1416;
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,3,1] = $PRE.drones[3].lidar_cloud[3,3,1]
*/
void DroneSwarm_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* drones[3].lidar_cloud[3,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1097] /* drones[3].lidar_cloud[3,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1417;
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1418};
  (data->simulationInfo->realVarsPre[1098] /* drones[3].lidar_cloud[3,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1418;
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,3,2] = $PRE.drones[3].lidar_cloud[3,3,2]
*/
void DroneSwarm_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1098]] /* drones[3].lidar_cloud[3,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1098] /* drones[3].lidar_cloud[3,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1419;
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1420};
  (data->simulationInfo->realVarsPre[1099] /* drones[3].lidar_cloud[3,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1420;
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,3,3] = $PRE.drones[3].lidar_cloud[3,3,3]
*/
void DroneSwarm_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1099]] /* drones[3].lidar_cloud[3,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1099] /* drones[3].lidar_cloud[3,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1421;
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1422};
  (data->simulationInfo->realVarsPre[1100] /* drones[3].lidar_cloud[3,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1422;
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,3,4] = $PRE.drones[3].lidar_cloud[3,3,4]
*/
void DroneSwarm_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1100]] /* drones[3].lidar_cloud[3,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1100] /* drones[3].lidar_cloud[3,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1423;
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1424};
  (data->simulationInfo->realVarsPre[1101] /* drones[3].lidar_cloud[3,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1424;
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,3,5] = $PRE.drones[3].lidar_cloud[3,3,5]
*/
void DroneSwarm_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1101]] /* drones[3].lidar_cloud[3,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1101] /* drones[3].lidar_cloud[3,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1425;
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1426};
  (data->simulationInfo->realVarsPre[1102] /* drones[3].lidar_cloud[3,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1426;
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,4,1] = $PRE.drones[3].lidar_cloud[3,4,1]
*/
void DroneSwarm_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1102]] /* drones[3].lidar_cloud[3,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1102] /* drones[3].lidar_cloud[3,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1427;
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1428};
  (data->simulationInfo->realVarsPre[1103] /* drones[3].lidar_cloud[3,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1428;
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,4,2] = $PRE.drones[3].lidar_cloud[3,4,2]
*/
void DroneSwarm_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1103]] /* drones[3].lidar_cloud[3,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1103] /* drones[3].lidar_cloud[3,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1429;
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1430};
  (data->simulationInfo->realVarsPre[1104] /* drones[3].lidar_cloud[3,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1430;
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,4,3] = $PRE.drones[3].lidar_cloud[3,4,3]
*/
void DroneSwarm_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1104]] /* drones[3].lidar_cloud[3,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1104] /* drones[3].lidar_cloud[3,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1431;
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1432};
  (data->simulationInfo->realVarsPre[1105] /* drones[3].lidar_cloud[3,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1432;
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,4,4] = $PRE.drones[3].lidar_cloud[3,4,4]
*/
void DroneSwarm_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1105]] /* drones[3].lidar_cloud[3,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1105] /* drones[3].lidar_cloud[3,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1433;
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1434};
  (data->simulationInfo->realVarsPre[1106] /* drones[3].lidar_cloud[3,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1434;
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,4,5] = $PRE.drones[3].lidar_cloud[3,4,5]
*/
void DroneSwarm_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1106]] /* drones[3].lidar_cloud[3,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1106] /* drones[3].lidar_cloud[3,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1435;
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1436};
  (data->simulationInfo->realVarsPre[1107] /* drones[3].lidar_cloud[3,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1436;
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,5,1] = $PRE.drones[3].lidar_cloud[3,5,1]
*/
void DroneSwarm_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1107]] /* drones[3].lidar_cloud[3,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1107] /* drones[3].lidar_cloud[3,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1437;
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1438};
  (data->simulationInfo->realVarsPre[1108] /* drones[3].lidar_cloud[3,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1438;
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,5,2] = $PRE.drones[3].lidar_cloud[3,5,2]
*/
void DroneSwarm_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1108]] /* drones[3].lidar_cloud[3,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1108] /* drones[3].lidar_cloud[3,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1439;
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1440};
  (data->simulationInfo->realVarsPre[1109] /* drones[3].lidar_cloud[3,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1440;
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,5,3] = $PRE.drones[3].lidar_cloud[3,5,3]
*/
void DroneSwarm_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1109]] /* drones[3].lidar_cloud[3,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1109] /* drones[3].lidar_cloud[3,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1441;
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1442};
  (data->simulationInfo->realVarsPre[1110] /* drones[3].lidar_cloud[3,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1442;
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,5,4] = $PRE.drones[3].lidar_cloud[3,5,4]
*/
void DroneSwarm_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1110]] /* drones[3].lidar_cloud[3,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1110] /* drones[3].lidar_cloud[3,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1443;
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[3,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1444};
  (data->simulationInfo->realVarsPre[1111] /* drones[3].lidar_cloud[3,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1444;
}

/*
equation index: 1445
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[3,5,5] = $PRE.drones[3].lidar_cloud[3,5,5]
*/
void DroneSwarm_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* drones[3].lidar_cloud[3,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1111] /* drones[3].lidar_cloud[3,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1445;
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1446};
  (data->simulationInfo->realVarsPre[1112] /* drones[3].lidar_cloud[4,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1446;
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,1,1] = $PRE.drones[3].lidar_cloud[4,1,1]
*/
void DroneSwarm_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1112]] /* drones[3].lidar_cloud[4,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1112] /* drones[3].lidar_cloud[4,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1447;
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1448};
  (data->simulationInfo->realVarsPre[1113] /* drones[3].lidar_cloud[4,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1448;
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,1,2] = $PRE.drones[3].lidar_cloud[4,1,2]
*/
void DroneSwarm_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* drones[3].lidar_cloud[4,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1113] /* drones[3].lidar_cloud[4,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1449;
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1450};
  (data->simulationInfo->realVarsPre[1114] /* drones[3].lidar_cloud[4,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1450;
}

/*
equation index: 1451
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,1,3] = $PRE.drones[3].lidar_cloud[4,1,3]
*/
void DroneSwarm_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1114]] /* drones[3].lidar_cloud[4,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1114] /* drones[3].lidar_cloud[4,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1451;
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1452};
  (data->simulationInfo->realVarsPre[1115] /* drones[3].lidar_cloud[4,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1452;
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,1,4] = $PRE.drones[3].lidar_cloud[4,1,4]
*/
void DroneSwarm_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* drones[3].lidar_cloud[4,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1115] /* drones[3].lidar_cloud[4,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1453;
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1454};
  (data->simulationInfo->realVarsPre[1116] /* drones[3].lidar_cloud[4,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1454;
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,1,5] = $PRE.drones[3].lidar_cloud[4,1,5]
*/
void DroneSwarm_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1455};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1116]] /* drones[3].lidar_cloud[4,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1116] /* drones[3].lidar_cloud[4,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1455;
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1456};
  (data->simulationInfo->realVarsPre[1117] /* drones[3].lidar_cloud[4,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1456;
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,2,1] = $PRE.drones[3].lidar_cloud[4,2,1]
*/
void DroneSwarm_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1457};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1117]] /* drones[3].lidar_cloud[4,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1117] /* drones[3].lidar_cloud[4,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1457;
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1458};
  (data->simulationInfo->realVarsPre[1118] /* drones[3].lidar_cloud[4,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1458;
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,2,2] = $PRE.drones[3].lidar_cloud[4,2,2]
*/
void DroneSwarm_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1118]] /* drones[3].lidar_cloud[4,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1118] /* drones[3].lidar_cloud[4,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1459;
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1460};
  (data->simulationInfo->realVarsPre[1119] /* drones[3].lidar_cloud[4,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1460;
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,2,3] = $PRE.drones[3].lidar_cloud[4,2,3]
*/
void DroneSwarm_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1461};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1119]] /* drones[3].lidar_cloud[4,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1119] /* drones[3].lidar_cloud[4,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1461;
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1462};
  (data->simulationInfo->realVarsPre[1120] /* drones[3].lidar_cloud[4,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1462;
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,2,4] = $PRE.drones[3].lidar_cloud[4,2,4]
*/
void DroneSwarm_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1463};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* drones[3].lidar_cloud[4,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1120] /* drones[3].lidar_cloud[4,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1463;
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1464};
  (data->simulationInfo->realVarsPre[1121] /* drones[3].lidar_cloud[4,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1464;
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,2,5] = $PRE.drones[3].lidar_cloud[4,2,5]
*/
void DroneSwarm_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* drones[3].lidar_cloud[4,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1121] /* drones[3].lidar_cloud[4,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1465;
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1466};
  (data->simulationInfo->realVarsPre[1122] /* drones[3].lidar_cloud[4,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1466;
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,3,1] = $PRE.drones[3].lidar_cloud[4,3,1]
*/
void DroneSwarm_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* drones[3].lidar_cloud[4,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1122] /* drones[3].lidar_cloud[4,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1467;
}

/*
equation index: 1468
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1468};
  (data->simulationInfo->realVarsPre[1123] /* drones[3].lidar_cloud[4,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1468;
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,3,2] = $PRE.drones[3].lidar_cloud[4,3,2]
*/
void DroneSwarm_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* drones[3].lidar_cloud[4,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1123] /* drones[3].lidar_cloud[4,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1469;
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1470};
  (data->simulationInfo->realVarsPre[1124] /* drones[3].lidar_cloud[4,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1470;
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,3,3] = $PRE.drones[3].lidar_cloud[4,3,3]
*/
void DroneSwarm_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1471};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* drones[3].lidar_cloud[4,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1124] /* drones[3].lidar_cloud[4,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1471;
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1472};
  (data->simulationInfo->realVarsPre[1125] /* drones[3].lidar_cloud[4,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1472;
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,3,4] = $PRE.drones[3].lidar_cloud[4,3,4]
*/
void DroneSwarm_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1473};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* drones[3].lidar_cloud[4,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1125] /* drones[3].lidar_cloud[4,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1473;
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1474};
  (data->simulationInfo->realVarsPre[1126] /* drones[3].lidar_cloud[4,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1474;
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,3,5] = $PRE.drones[3].lidar_cloud[4,3,5]
*/
void DroneSwarm_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1126]] /* drones[3].lidar_cloud[4,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1126] /* drones[3].lidar_cloud[4,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1475;
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1476};
  (data->simulationInfo->realVarsPre[1127] /* drones[3].lidar_cloud[4,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1476;
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,4,1] = $PRE.drones[3].lidar_cloud[4,4,1]
*/
void DroneSwarm_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1477};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1127]] /* drones[3].lidar_cloud[4,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1127] /* drones[3].lidar_cloud[4,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1477;
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1478};
  (data->simulationInfo->realVarsPre[1128] /* drones[3].lidar_cloud[4,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1478;
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,4,2] = $PRE.drones[3].lidar_cloud[4,4,2]
*/
void DroneSwarm_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1128]] /* drones[3].lidar_cloud[4,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1128] /* drones[3].lidar_cloud[4,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1479;
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1480};
  (data->simulationInfo->realVarsPre[1129] /* drones[3].lidar_cloud[4,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1480;
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,4,3] = $PRE.drones[3].lidar_cloud[4,4,3]
*/
void DroneSwarm_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* drones[3].lidar_cloud[4,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1129] /* drones[3].lidar_cloud[4,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1481;
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1482};
  (data->simulationInfo->realVarsPre[1130] /* drones[3].lidar_cloud[4,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1482;
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,4,4] = $PRE.drones[3].lidar_cloud[4,4,4]
*/
void DroneSwarm_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* drones[3].lidar_cloud[4,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1130] /* drones[3].lidar_cloud[4,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1483;
}

/*
equation index: 1484
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1484};
  (data->simulationInfo->realVarsPre[1131] /* drones[3].lidar_cloud[4,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1484;
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,4,5] = $PRE.drones[3].lidar_cloud[4,4,5]
*/
void DroneSwarm_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* drones[3].lidar_cloud[4,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1131] /* drones[3].lidar_cloud[4,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1485;
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1486};
  (data->simulationInfo->realVarsPre[1132] /* drones[3].lidar_cloud[4,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1486;
}

/*
equation index: 1487
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,5,1] = $PRE.drones[3].lidar_cloud[4,5,1]
*/
void DroneSwarm_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* drones[3].lidar_cloud[4,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1132] /* drones[3].lidar_cloud[4,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1487;
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1488};
  (data->simulationInfo->realVarsPre[1133] /* drones[3].lidar_cloud[4,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1488;
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,5,2] = $PRE.drones[3].lidar_cloud[4,5,2]
*/
void DroneSwarm_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* drones[3].lidar_cloud[4,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1133] /* drones[3].lidar_cloud[4,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1489;
}

/*
equation index: 1490
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1490};
  (data->simulationInfo->realVarsPre[1134] /* drones[3].lidar_cloud[4,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1490;
}

/*
equation index: 1491
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,5,3] = $PRE.drones[3].lidar_cloud[4,5,3]
*/
void DroneSwarm_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* drones[3].lidar_cloud[4,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1134] /* drones[3].lidar_cloud[4,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1491;
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1492};
  (data->simulationInfo->realVarsPre[1135] /* drones[3].lidar_cloud[4,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1492;
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,5,4] = $PRE.drones[3].lidar_cloud[4,5,4]
*/
void DroneSwarm_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1135]] /* drones[3].lidar_cloud[4,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1135] /* drones[3].lidar_cloud[4,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1493;
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[4,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1494};
  (data->simulationInfo->realVarsPre[1136] /* drones[3].lidar_cloud[4,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1494;
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[4,5,5] = $PRE.drones[3].lidar_cloud[4,5,5]
*/
void DroneSwarm_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1136]] /* drones[3].lidar_cloud[4,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1136] /* drones[3].lidar_cloud[4,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1495;
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1496};
  (data->simulationInfo->realVarsPre[1137] /* drones[3].lidar_cloud[5,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1496;
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,1,1] = $PRE.drones[3].lidar_cloud[5,1,1]
*/
void DroneSwarm_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1137]] /* drones[3].lidar_cloud[5,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1137] /* drones[3].lidar_cloud[5,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1497;
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1498};
  (data->simulationInfo->realVarsPre[1138] /* drones[3].lidar_cloud[5,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1498;
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,1,2] = $PRE.drones[3].lidar_cloud[5,1,2]
*/
void DroneSwarm_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1138]] /* drones[3].lidar_cloud[5,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1138] /* drones[3].lidar_cloud[5,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1499;
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1500};
  (data->simulationInfo->realVarsPre[1139] /* drones[3].lidar_cloud[5,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1500;
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,1,3] = $PRE.drones[3].lidar_cloud[5,1,3]
*/
void DroneSwarm_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1139]] /* drones[3].lidar_cloud[5,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1139] /* drones[3].lidar_cloud[5,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1501;
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1502};
  (data->simulationInfo->realVarsPre[1140] /* drones[3].lidar_cloud[5,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1502;
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,1,4] = $PRE.drones[3].lidar_cloud[5,1,4]
*/
void DroneSwarm_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1140]] /* drones[3].lidar_cloud[5,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1140] /* drones[3].lidar_cloud[5,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1503;
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1504};
  (data->simulationInfo->realVarsPre[1141] /* drones[3].lidar_cloud[5,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1504;
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,1,5] = $PRE.drones[3].lidar_cloud[5,1,5]
*/
void DroneSwarm_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* drones[3].lidar_cloud[5,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1141] /* drones[3].lidar_cloud[5,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1505;
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1506};
  (data->simulationInfo->realVarsPre[1142] /* drones[3].lidar_cloud[5,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1506;
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,2,1] = $PRE.drones[3].lidar_cloud[5,2,1]
*/
void DroneSwarm_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* drones[3].lidar_cloud[5,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1142] /* drones[3].lidar_cloud[5,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1507;
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realVarsPre[1143] /* drones[3].lidar_cloud[5,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1508;
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,2,2] = $PRE.drones[3].lidar_cloud[5,2,2]
*/
void DroneSwarm_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* drones[3].lidar_cloud[5,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1143] /* drones[3].lidar_cloud[5,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1509;
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1510};
  (data->simulationInfo->realVarsPre[1144] /* drones[3].lidar_cloud[5,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1510;
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,2,3] = $PRE.drones[3].lidar_cloud[5,2,3]
*/
void DroneSwarm_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1144]] /* drones[3].lidar_cloud[5,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1144] /* drones[3].lidar_cloud[5,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1511;
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1512};
  (data->simulationInfo->realVarsPre[1145] /* drones[3].lidar_cloud[5,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1512;
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,2,4] = $PRE.drones[3].lidar_cloud[5,2,4]
*/
void DroneSwarm_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1145]] /* drones[3].lidar_cloud[5,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1145] /* drones[3].lidar_cloud[5,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1513;
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->realVarsPre[1146] /* drones[3].lidar_cloud[5,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1514;
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,2,5] = $PRE.drones[3].lidar_cloud[5,2,5]
*/
void DroneSwarm_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1146]] /* drones[3].lidar_cloud[5,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1146] /* drones[3].lidar_cloud[5,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1515;
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1516};
  (data->simulationInfo->realVarsPre[1147] /* drones[3].lidar_cloud[5,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1516;
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,3,1] = $PRE.drones[3].lidar_cloud[5,3,1]
*/
void DroneSwarm_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1147]] /* drones[3].lidar_cloud[5,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1147] /* drones[3].lidar_cloud[5,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1517;
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1518};
  (data->simulationInfo->realVarsPre[1148] /* drones[3].lidar_cloud[5,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1518;
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,3,2] = $PRE.drones[3].lidar_cloud[5,3,2]
*/
void DroneSwarm_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1148]] /* drones[3].lidar_cloud[5,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1148] /* drones[3].lidar_cloud[5,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1519;
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1520};
  (data->simulationInfo->realVarsPre[1149] /* drones[3].lidar_cloud[5,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1520;
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,3,3] = $PRE.drones[3].lidar_cloud[5,3,3]
*/
void DroneSwarm_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1149]] /* drones[3].lidar_cloud[5,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1149] /* drones[3].lidar_cloud[5,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1521;
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1522};
  (data->simulationInfo->realVarsPre[1150] /* drones[3].lidar_cloud[5,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1522;
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,3,4] = $PRE.drones[3].lidar_cloud[5,3,4]
*/
void DroneSwarm_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* drones[3].lidar_cloud[5,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1150] /* drones[3].lidar_cloud[5,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1523;
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1524};
  (data->simulationInfo->realVarsPre[1151] /* drones[3].lidar_cloud[5,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1524;
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,3,5] = $PRE.drones[3].lidar_cloud[5,3,5]
*/
void DroneSwarm_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* drones[3].lidar_cloud[5,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1151] /* drones[3].lidar_cloud[5,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1525;
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1526};
  (data->simulationInfo->realVarsPre[1152] /* drones[3].lidar_cloud[5,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1526;
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,4,1] = $PRE.drones[3].lidar_cloud[5,4,1]
*/
void DroneSwarm_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* drones[3].lidar_cloud[5,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1152] /* drones[3].lidar_cloud[5,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1527;
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1528};
  (data->simulationInfo->realVarsPre[1153] /* drones[3].lidar_cloud[5,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1528;
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,4,2] = $PRE.drones[3].lidar_cloud[5,4,2]
*/
void DroneSwarm_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* drones[3].lidar_cloud[5,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1153] /* drones[3].lidar_cloud[5,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1529;
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1530};
  (data->simulationInfo->realVarsPre[1154] /* drones[3].lidar_cloud[5,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1530;
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,4,3] = $PRE.drones[3].lidar_cloud[5,4,3]
*/
void DroneSwarm_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* drones[3].lidar_cloud[5,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1154] /* drones[3].lidar_cloud[5,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1531;
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realVarsPre[1155] /* drones[3].lidar_cloud[5,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1532;
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,4,4] = $PRE.drones[3].lidar_cloud[5,4,4]
*/
void DroneSwarm_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* drones[3].lidar_cloud[5,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1155] /* drones[3].lidar_cloud[5,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1533;
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realVarsPre[1156] /* drones[3].lidar_cloud[5,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1534;
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,4,5] = $PRE.drones[3].lidar_cloud[5,4,5]
*/
void DroneSwarm_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1156]] /* drones[3].lidar_cloud[5,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1156] /* drones[3].lidar_cloud[5,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1535;
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realVarsPre[1157] /* drones[3].lidar_cloud[5,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1536;
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,5,1] = $PRE.drones[3].lidar_cloud[5,5,1]
*/
void DroneSwarm_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1157]] /* drones[3].lidar_cloud[5,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1157] /* drones[3].lidar_cloud[5,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1537;
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1538};
  (data->simulationInfo->realVarsPre[1158] /* drones[3].lidar_cloud[5,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1538;
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,5,2] = $PRE.drones[3].lidar_cloud[5,5,2]
*/
void DroneSwarm_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1158]] /* drones[3].lidar_cloud[5,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1158] /* drones[3].lidar_cloud[5,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1539;
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1540};
  (data->simulationInfo->realVarsPre[1159] /* drones[3].lidar_cloud[5,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1540;
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,5,3] = $PRE.drones[3].lidar_cloud[5,5,3]
*/
void DroneSwarm_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1159]] /* drones[3].lidar_cloud[5,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1159] /* drones[3].lidar_cloud[5,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1541;
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1542};
  (data->simulationInfo->realVarsPre[1160] /* drones[3].lidar_cloud[5,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1542;
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,5,4] = $PRE.drones[3].lidar_cloud[5,5,4]
*/
void DroneSwarm_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1160]] /* drones[3].lidar_cloud[5,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1160] /* drones[3].lidar_cloud[5,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1543;
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[5,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1544};
  (data->simulationInfo->realVarsPre[1161] /* drones[3].lidar_cloud[5,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1544;
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[5,5,5] = $PRE.drones[3].lidar_cloud[5,5,5]
*/
void DroneSwarm_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1161]] /* drones[3].lidar_cloud[5,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1161] /* drones[3].lidar_cloud[5,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1545;
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1546};
  (data->simulationInfo->realVarsPre[1162] /* drones[4].lidar_cloud[1,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1546;
}

/*
equation index: 1547
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,1,1] = $PRE.drones[4].lidar_cloud[1,1,1]
*/
void DroneSwarm_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1162]] /* drones[4].lidar_cloud[1,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1162] /* drones[4].lidar_cloud[1,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1547;
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1548};
  (data->simulationInfo->realVarsPre[1163] /* drones[4].lidar_cloud[1,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1548;
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,1,2] = $PRE.drones[4].lidar_cloud[1,1,2]
*/
void DroneSwarm_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1163]] /* drones[4].lidar_cloud[1,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1163] /* drones[4].lidar_cloud[1,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1549;
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1550};
  (data->simulationInfo->realVarsPre[1164] /* drones[4].lidar_cloud[1,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1550;
}

/*
equation index: 1551
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,1,3] = $PRE.drones[4].lidar_cloud[1,1,3]
*/
void DroneSwarm_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1164]] /* drones[4].lidar_cloud[1,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1164] /* drones[4].lidar_cloud[1,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1551;
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1552};
  (data->simulationInfo->realVarsPre[1165] /* drones[4].lidar_cloud[1,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1552;
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,1,4] = $PRE.drones[4].lidar_cloud[1,1,4]
*/
void DroneSwarm_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1165]] /* drones[4].lidar_cloud[1,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1165] /* drones[4].lidar_cloud[1,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1553;
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1554};
  (data->simulationInfo->realVarsPre[1166] /* drones[4].lidar_cloud[1,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1554;
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,1,5] = $PRE.drones[4].lidar_cloud[1,1,5]
*/
void DroneSwarm_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1166]] /* drones[4].lidar_cloud[1,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1166] /* drones[4].lidar_cloud[1,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1555;
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1556};
  (data->simulationInfo->realVarsPre[1167] /* drones[4].lidar_cloud[1,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1556;
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,2,1] = $PRE.drones[4].lidar_cloud[1,2,1]
*/
void DroneSwarm_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1167]] /* drones[4].lidar_cloud[1,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1167] /* drones[4].lidar_cloud[1,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1557;
}

/*
equation index: 1558
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1558};
  (data->simulationInfo->realVarsPre[1168] /* drones[4].lidar_cloud[1,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1558;
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,2,2] = $PRE.drones[4].lidar_cloud[1,2,2]
*/
void DroneSwarm_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1168]] /* drones[4].lidar_cloud[1,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1168] /* drones[4].lidar_cloud[1,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1559;
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1560};
  (data->simulationInfo->realVarsPre[1169] /* drones[4].lidar_cloud[1,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1560;
}

/*
equation index: 1561
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,2,3] = $PRE.drones[4].lidar_cloud[1,2,3]
*/
void DroneSwarm_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1169]] /* drones[4].lidar_cloud[1,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1169] /* drones[4].lidar_cloud[1,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1561;
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1562};
  (data->simulationInfo->realVarsPre[1170] /* drones[4].lidar_cloud[1,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1562;
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,2,4] = $PRE.drones[4].lidar_cloud[1,2,4]
*/
void DroneSwarm_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1170]] /* drones[4].lidar_cloud[1,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1170] /* drones[4].lidar_cloud[1,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1563;
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1564};
  (data->simulationInfo->realVarsPre[1171] /* drones[4].lidar_cloud[1,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1564;
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,2,5] = $PRE.drones[4].lidar_cloud[1,2,5]
*/
void DroneSwarm_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1171]] /* drones[4].lidar_cloud[1,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1171] /* drones[4].lidar_cloud[1,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1565;
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1566};
  (data->simulationInfo->realVarsPre[1172] /* drones[4].lidar_cloud[1,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1566;
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,3,1] = $PRE.drones[4].lidar_cloud[1,3,1]
*/
void DroneSwarm_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1172]] /* drones[4].lidar_cloud[1,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1172] /* drones[4].lidar_cloud[1,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1567;
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1568};
  (data->simulationInfo->realVarsPre[1173] /* drones[4].lidar_cloud[1,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1568;
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,3,2] = $PRE.drones[4].lidar_cloud[1,3,2]
*/
void DroneSwarm_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1173]] /* drones[4].lidar_cloud[1,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1173] /* drones[4].lidar_cloud[1,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1569;
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1570};
  (data->simulationInfo->realVarsPre[1174] /* drones[4].lidar_cloud[1,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1570;
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,3,3] = $PRE.drones[4].lidar_cloud[1,3,3]
*/
void DroneSwarm_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1174]] /* drones[4].lidar_cloud[1,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1174] /* drones[4].lidar_cloud[1,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1571;
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1572};
  (data->simulationInfo->realVarsPre[1175] /* drones[4].lidar_cloud[1,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1572;
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,3,4] = $PRE.drones[4].lidar_cloud[1,3,4]
*/
void DroneSwarm_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1175]] /* drones[4].lidar_cloud[1,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1175] /* drones[4].lidar_cloud[1,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1573;
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1574};
  (data->simulationInfo->realVarsPre[1176] /* drones[4].lidar_cloud[1,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1574;
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,3,5] = $PRE.drones[4].lidar_cloud[1,3,5]
*/
void DroneSwarm_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1176]] /* drones[4].lidar_cloud[1,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1176] /* drones[4].lidar_cloud[1,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1575;
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1576};
  (data->simulationInfo->realVarsPre[1177] /* drones[4].lidar_cloud[1,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1576;
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,4,1] = $PRE.drones[4].lidar_cloud[1,4,1]
*/
void DroneSwarm_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1177]] /* drones[4].lidar_cloud[1,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1177] /* drones[4].lidar_cloud[1,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1577;
}

/*
equation index: 1578
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1578};
  (data->simulationInfo->realVarsPre[1178] /* drones[4].lidar_cloud[1,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1578;
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,4,2] = $PRE.drones[4].lidar_cloud[1,4,2]
*/
void DroneSwarm_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1178]] /* drones[4].lidar_cloud[1,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1178] /* drones[4].lidar_cloud[1,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1579;
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1580};
  (data->simulationInfo->realVarsPre[1179] /* drones[4].lidar_cloud[1,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1580;
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,4,3] = $PRE.drones[4].lidar_cloud[1,4,3]
*/
void DroneSwarm_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1179]] /* drones[4].lidar_cloud[1,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1179] /* drones[4].lidar_cloud[1,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1581;
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1582};
  (data->simulationInfo->realVarsPre[1180] /* drones[4].lidar_cloud[1,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1582;
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,4,4] = $PRE.drones[4].lidar_cloud[1,4,4]
*/
void DroneSwarm_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1180]] /* drones[4].lidar_cloud[1,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1180] /* drones[4].lidar_cloud[1,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1583;
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1584};
  (data->simulationInfo->realVarsPre[1181] /* drones[4].lidar_cloud[1,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1584;
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,4,5] = $PRE.drones[4].lidar_cloud[1,4,5]
*/
void DroneSwarm_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1181]] /* drones[4].lidar_cloud[1,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1181] /* drones[4].lidar_cloud[1,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1585;
}

/*
equation index: 1586
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1586};
  (data->simulationInfo->realVarsPre[1182] /* drones[4].lidar_cloud[1,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1586;
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,5,1] = $PRE.drones[4].lidar_cloud[1,5,1]
*/
void DroneSwarm_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1182]] /* drones[4].lidar_cloud[1,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1182] /* drones[4].lidar_cloud[1,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1587;
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1588};
  (data->simulationInfo->realVarsPre[1183] /* drones[4].lidar_cloud[1,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1588;
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,5,2] = $PRE.drones[4].lidar_cloud[1,5,2]
*/
void DroneSwarm_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1183]] /* drones[4].lidar_cloud[1,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1183] /* drones[4].lidar_cloud[1,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1589;
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1590};
  (data->simulationInfo->realVarsPre[1184] /* drones[4].lidar_cloud[1,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1590;
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,5,3] = $PRE.drones[4].lidar_cloud[1,5,3]
*/
void DroneSwarm_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1184]] /* drones[4].lidar_cloud[1,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1184] /* drones[4].lidar_cloud[1,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1591;
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1592};
  (data->simulationInfo->realVarsPre[1185] /* drones[4].lidar_cloud[1,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1592;
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,5,4] = $PRE.drones[4].lidar_cloud[1,5,4]
*/
void DroneSwarm_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1185]] /* drones[4].lidar_cloud[1,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1185] /* drones[4].lidar_cloud[1,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1593;
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[1,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1594};
  (data->simulationInfo->realVarsPre[1186] /* drones[4].lidar_cloud[1,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1594;
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[1,5,5] = $PRE.drones[4].lidar_cloud[1,5,5]
*/
void DroneSwarm_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1186]] /* drones[4].lidar_cloud[1,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1186] /* drones[4].lidar_cloud[1,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1595;
}

/*
equation index: 1596
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1596};
  (data->simulationInfo->realVarsPre[1187] /* drones[4].lidar_cloud[2,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1596;
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,1,1] = $PRE.drones[4].lidar_cloud[2,1,1]
*/
void DroneSwarm_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1187]] /* drones[4].lidar_cloud[2,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1187] /* drones[4].lidar_cloud[2,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1597;
}

/*
equation index: 1598
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1598};
  (data->simulationInfo->realVarsPre[1188] /* drones[4].lidar_cloud[2,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1598;
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,1,2] = $PRE.drones[4].lidar_cloud[2,1,2]
*/
void DroneSwarm_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1188]] /* drones[4].lidar_cloud[2,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1188] /* drones[4].lidar_cloud[2,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1599;
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1600};
  (data->simulationInfo->realVarsPre[1189] /* drones[4].lidar_cloud[2,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1600;
}

/*
equation index: 1601
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,1,3] = $PRE.drones[4].lidar_cloud[2,1,3]
*/
void DroneSwarm_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1601};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1189]] /* drones[4].lidar_cloud[2,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1189] /* drones[4].lidar_cloud[2,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1601;
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1602};
  (data->simulationInfo->realVarsPre[1190] /* drones[4].lidar_cloud[2,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1602;
}

/*
equation index: 1603
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,1,4] = $PRE.drones[4].lidar_cloud[2,1,4]
*/
void DroneSwarm_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1190]] /* drones[4].lidar_cloud[2,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1190] /* drones[4].lidar_cloud[2,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1603;
}

/*
equation index: 1604
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1604};
  (data->simulationInfo->realVarsPre[1191] /* drones[4].lidar_cloud[2,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1604;
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,1,5] = $PRE.drones[4].lidar_cloud[2,1,5]
*/
void DroneSwarm_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1191]] /* drones[4].lidar_cloud[2,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1191] /* drones[4].lidar_cloud[2,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1605;
}

/*
equation index: 1606
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1606};
  (data->simulationInfo->realVarsPre[1192] /* drones[4].lidar_cloud[2,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1606;
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,2,1] = $PRE.drones[4].lidar_cloud[2,2,1]
*/
void DroneSwarm_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1192]] /* drones[4].lidar_cloud[2,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1192] /* drones[4].lidar_cloud[2,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1607;
}

/*
equation index: 1608
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1608};
  (data->simulationInfo->realVarsPre[1193] /* drones[4].lidar_cloud[2,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1608;
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,2,2] = $PRE.drones[4].lidar_cloud[2,2,2]
*/
void DroneSwarm_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1193]] /* drones[4].lidar_cloud[2,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1193] /* drones[4].lidar_cloud[2,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1609;
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1610};
  (data->simulationInfo->realVarsPre[1194] /* drones[4].lidar_cloud[2,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1610;
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,2,3] = $PRE.drones[4].lidar_cloud[2,2,3]
*/
void DroneSwarm_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1194]] /* drones[4].lidar_cloud[2,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1194] /* drones[4].lidar_cloud[2,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1611;
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1612};
  (data->simulationInfo->realVarsPre[1195] /* drones[4].lidar_cloud[2,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1612;
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,2,4] = $PRE.drones[4].lidar_cloud[2,2,4]
*/
void DroneSwarm_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1195]] /* drones[4].lidar_cloud[2,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1195] /* drones[4].lidar_cloud[2,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1613;
}

/*
equation index: 1614
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1614};
  (data->simulationInfo->realVarsPre[1196] /* drones[4].lidar_cloud[2,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1614;
}

/*
equation index: 1615
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,2,5] = $PRE.drones[4].lidar_cloud[2,2,5]
*/
void DroneSwarm_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1196]] /* drones[4].lidar_cloud[2,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1196] /* drones[4].lidar_cloud[2,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1615;
}

/*
equation index: 1616
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1616};
  (data->simulationInfo->realVarsPre[1197] /* drones[4].lidar_cloud[2,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1616;
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,3,1] = $PRE.drones[4].lidar_cloud[2,3,1]
*/
void DroneSwarm_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1197]] /* drones[4].lidar_cloud[2,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1197] /* drones[4].lidar_cloud[2,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1617;
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1618};
  (data->simulationInfo->realVarsPre[1198] /* drones[4].lidar_cloud[2,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1618;
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,3,2] = $PRE.drones[4].lidar_cloud[2,3,2]
*/
void DroneSwarm_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1198]] /* drones[4].lidar_cloud[2,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1198] /* drones[4].lidar_cloud[2,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1619;
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1620};
  (data->simulationInfo->realVarsPre[1199] /* drones[4].lidar_cloud[2,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1620;
}

/*
equation index: 1621
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,3,3] = $PRE.drones[4].lidar_cloud[2,3,3]
*/
void DroneSwarm_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1199]] /* drones[4].lidar_cloud[2,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1199] /* drones[4].lidar_cloud[2,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1621;
}

/*
equation index: 1622
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1622};
  (data->simulationInfo->realVarsPre[1200] /* drones[4].lidar_cloud[2,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1622;
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,3,4] = $PRE.drones[4].lidar_cloud[2,3,4]
*/
void DroneSwarm_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1200]] /* drones[4].lidar_cloud[2,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1200] /* drones[4].lidar_cloud[2,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1623;
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1624};
  (data->simulationInfo->realVarsPre[1201] /* drones[4].lidar_cloud[2,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1624;
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,3,5] = $PRE.drones[4].lidar_cloud[2,3,5]
*/
void DroneSwarm_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1201]] /* drones[4].lidar_cloud[2,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1201] /* drones[4].lidar_cloud[2,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1625;
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1626};
  (data->simulationInfo->realVarsPre[1202] /* drones[4].lidar_cloud[2,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1626;
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,4,1] = $PRE.drones[4].lidar_cloud[2,4,1]
*/
void DroneSwarm_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1202]] /* drones[4].lidar_cloud[2,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1202] /* drones[4].lidar_cloud[2,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1627;
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1628};
  (data->simulationInfo->realVarsPre[1203] /* drones[4].lidar_cloud[2,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1628;
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,4,2] = $PRE.drones[4].lidar_cloud[2,4,2]
*/
void DroneSwarm_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1203]] /* drones[4].lidar_cloud[2,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1203] /* drones[4].lidar_cloud[2,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1629;
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1630};
  (data->simulationInfo->realVarsPre[1204] /* drones[4].lidar_cloud[2,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1630;
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,4,3] = $PRE.drones[4].lidar_cloud[2,4,3]
*/
void DroneSwarm_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1204]] /* drones[4].lidar_cloud[2,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1204] /* drones[4].lidar_cloud[2,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1631;
}

/*
equation index: 1632
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1632};
  (data->simulationInfo->realVarsPre[1205] /* drones[4].lidar_cloud[2,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1632;
}

/*
equation index: 1633
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,4,4] = $PRE.drones[4].lidar_cloud[2,4,4]
*/
void DroneSwarm_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1205]] /* drones[4].lidar_cloud[2,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1205] /* drones[4].lidar_cloud[2,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1633;
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1634};
  (data->simulationInfo->realVarsPre[1206] /* drones[4].lidar_cloud[2,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1634;
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,4,5] = $PRE.drones[4].lidar_cloud[2,4,5]
*/
void DroneSwarm_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1206]] /* drones[4].lidar_cloud[2,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1206] /* drones[4].lidar_cloud[2,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1635;
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1636};
  (data->simulationInfo->realVarsPre[1207] /* drones[4].lidar_cloud[2,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1636;
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,5,1] = $PRE.drones[4].lidar_cloud[2,5,1]
*/
void DroneSwarm_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1207]] /* drones[4].lidar_cloud[2,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1207] /* drones[4].lidar_cloud[2,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1637;
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1638};
  (data->simulationInfo->realVarsPre[1208] /* drones[4].lidar_cloud[2,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1638;
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,5,2] = $PRE.drones[4].lidar_cloud[2,5,2]
*/
void DroneSwarm_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1208]] /* drones[4].lidar_cloud[2,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1208] /* drones[4].lidar_cloud[2,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1639;
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1640};
  (data->simulationInfo->realVarsPre[1209] /* drones[4].lidar_cloud[2,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1640;
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,5,3] = $PRE.drones[4].lidar_cloud[2,5,3]
*/
void DroneSwarm_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1209]] /* drones[4].lidar_cloud[2,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1209] /* drones[4].lidar_cloud[2,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1641;
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1642};
  (data->simulationInfo->realVarsPre[1210] /* drones[4].lidar_cloud[2,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1642;
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,5,4] = $PRE.drones[4].lidar_cloud[2,5,4]
*/
void DroneSwarm_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1210]] /* drones[4].lidar_cloud[2,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1210] /* drones[4].lidar_cloud[2,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1643;
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[2,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1644};
  (data->simulationInfo->realVarsPre[1211] /* drones[4].lidar_cloud[2,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1644;
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[2,5,5] = $PRE.drones[4].lidar_cloud[2,5,5]
*/
void DroneSwarm_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1211]] /* drones[4].lidar_cloud[2,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1211] /* drones[4].lidar_cloud[2,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1645;
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1646};
  (data->simulationInfo->realVarsPre[1212] /* drones[4].lidar_cloud[3,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1646;
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,1,1] = $PRE.drones[4].lidar_cloud[3,1,1]
*/
void DroneSwarm_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* drones[4].lidar_cloud[3,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1212] /* drones[4].lidar_cloud[3,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1647;
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1648};
  (data->simulationInfo->realVarsPre[1213] /* drones[4].lidar_cloud[3,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1648;
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,1,2] = $PRE.drones[4].lidar_cloud[3,1,2]
*/
void DroneSwarm_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1213]] /* drones[4].lidar_cloud[3,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1213] /* drones[4].lidar_cloud[3,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1649;
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1650};
  (data->simulationInfo->realVarsPre[1214] /* drones[4].lidar_cloud[3,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1650;
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,1,3] = $PRE.drones[4].lidar_cloud[3,1,3]
*/
void DroneSwarm_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1214]] /* drones[4].lidar_cloud[3,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1214] /* drones[4].lidar_cloud[3,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1651;
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1652};
  (data->simulationInfo->realVarsPre[1215] /* drones[4].lidar_cloud[3,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1652;
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,1,4] = $PRE.drones[4].lidar_cloud[3,1,4]
*/
void DroneSwarm_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* drones[4].lidar_cloud[3,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1215] /* drones[4].lidar_cloud[3,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1653;
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1654};
  (data->simulationInfo->realVarsPre[1216] /* drones[4].lidar_cloud[3,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1654;
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,1,5] = $PRE.drones[4].lidar_cloud[3,1,5]
*/
void DroneSwarm_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* drones[4].lidar_cloud[3,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1216] /* drones[4].lidar_cloud[3,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1655;
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1656};
  (data->simulationInfo->realVarsPre[1217] /* drones[4].lidar_cloud[3,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1656;
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,2,1] = $PRE.drones[4].lidar_cloud[3,2,1]
*/
void DroneSwarm_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* drones[4].lidar_cloud[3,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1217] /* drones[4].lidar_cloud[3,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1657;
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1658};
  (data->simulationInfo->realVarsPre[1218] /* drones[4].lidar_cloud[3,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1658;
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,2,2] = $PRE.drones[4].lidar_cloud[3,2,2]
*/
void DroneSwarm_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1218]] /* drones[4].lidar_cloud[3,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1218] /* drones[4].lidar_cloud[3,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1659;
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1660};
  (data->simulationInfo->realVarsPre[1219] /* drones[4].lidar_cloud[3,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1660;
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,2,3] = $PRE.drones[4].lidar_cloud[3,2,3]
*/
void DroneSwarm_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1219]] /* drones[4].lidar_cloud[3,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1219] /* drones[4].lidar_cloud[3,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1661;
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1662};
  (data->simulationInfo->realVarsPre[1220] /* drones[4].lidar_cloud[3,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1662;
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,2,4] = $PRE.drones[4].lidar_cloud[3,2,4]
*/
void DroneSwarm_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1220]] /* drones[4].lidar_cloud[3,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1220] /* drones[4].lidar_cloud[3,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1663;
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1664};
  (data->simulationInfo->realVarsPre[1221] /* drones[4].lidar_cloud[3,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1664;
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,2,5] = $PRE.drones[4].lidar_cloud[3,2,5]
*/
void DroneSwarm_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1221]] /* drones[4].lidar_cloud[3,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1221] /* drones[4].lidar_cloud[3,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1665;
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1666};
  (data->simulationInfo->realVarsPre[1222] /* drones[4].lidar_cloud[3,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1666;
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,3,1] = $PRE.drones[4].lidar_cloud[3,3,1]
*/
void DroneSwarm_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1222]] /* drones[4].lidar_cloud[3,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1222] /* drones[4].lidar_cloud[3,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1667;
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1668};
  (data->simulationInfo->realVarsPre[1223] /* drones[4].lidar_cloud[3,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1668;
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,3,2] = $PRE.drones[4].lidar_cloud[3,3,2]
*/
void DroneSwarm_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1223]] /* drones[4].lidar_cloud[3,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1223] /* drones[4].lidar_cloud[3,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1669;
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1670};
  (data->simulationInfo->realVarsPre[1224] /* drones[4].lidar_cloud[3,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1670;
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,3,3] = $PRE.drones[4].lidar_cloud[3,3,3]
*/
void DroneSwarm_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1224]] /* drones[4].lidar_cloud[3,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1224] /* drones[4].lidar_cloud[3,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1671;
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1672};
  (data->simulationInfo->realVarsPre[1225] /* drones[4].lidar_cloud[3,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1672;
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,3,4] = $PRE.drones[4].lidar_cloud[3,3,4]
*/
void DroneSwarm_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1225]] /* drones[4].lidar_cloud[3,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1225] /* drones[4].lidar_cloud[3,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1673;
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1674};
  (data->simulationInfo->realVarsPre[1226] /* drones[4].lidar_cloud[3,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1674;
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,3,5] = $PRE.drones[4].lidar_cloud[3,3,5]
*/
void DroneSwarm_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1226]] /* drones[4].lidar_cloud[3,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1226] /* drones[4].lidar_cloud[3,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1675;
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1676};
  (data->simulationInfo->realVarsPre[1227] /* drones[4].lidar_cloud[3,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1676;
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,4,1] = $PRE.drones[4].lidar_cloud[3,4,1]
*/
void DroneSwarm_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1227]] /* drones[4].lidar_cloud[3,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1227] /* drones[4].lidar_cloud[3,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1677;
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1678};
  (data->simulationInfo->realVarsPre[1228] /* drones[4].lidar_cloud[3,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1678;
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,4,2] = $PRE.drones[4].lidar_cloud[3,4,2]
*/
void DroneSwarm_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1228]] /* drones[4].lidar_cloud[3,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1228] /* drones[4].lidar_cloud[3,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1679;
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1680};
  (data->simulationInfo->realVarsPre[1229] /* drones[4].lidar_cloud[3,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1680;
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,4,3] = $PRE.drones[4].lidar_cloud[3,4,3]
*/
void DroneSwarm_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1229]] /* drones[4].lidar_cloud[3,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1229] /* drones[4].lidar_cloud[3,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1681;
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1682};
  (data->simulationInfo->realVarsPre[1230] /* drones[4].lidar_cloud[3,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1682;
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,4,4] = $PRE.drones[4].lidar_cloud[3,4,4]
*/
void DroneSwarm_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1230]] /* drones[4].lidar_cloud[3,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1230] /* drones[4].lidar_cloud[3,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1683;
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1684};
  (data->simulationInfo->realVarsPre[1231] /* drones[4].lidar_cloud[3,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1684;
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,4,5] = $PRE.drones[4].lidar_cloud[3,4,5]
*/
void DroneSwarm_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* drones[4].lidar_cloud[3,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1231] /* drones[4].lidar_cloud[3,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1685;
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1686};
  (data->simulationInfo->realVarsPre[1232] /* drones[4].lidar_cloud[3,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1686;
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,5,1] = $PRE.drones[4].lidar_cloud[3,5,1]
*/
void DroneSwarm_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* drones[4].lidar_cloud[3,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1232] /* drones[4].lidar_cloud[3,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1687;
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1688};
  (data->simulationInfo->realVarsPre[1233] /* drones[4].lidar_cloud[3,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1688;
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,5,2] = $PRE.drones[4].lidar_cloud[3,5,2]
*/
void DroneSwarm_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* drones[4].lidar_cloud[3,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1233] /* drones[4].lidar_cloud[3,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1689;
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1690};
  (data->simulationInfo->realVarsPre[1234] /* drones[4].lidar_cloud[3,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1690;
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,5,3] = $PRE.drones[4].lidar_cloud[3,5,3]
*/
void DroneSwarm_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1234]] /* drones[4].lidar_cloud[3,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1234] /* drones[4].lidar_cloud[3,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1691;
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1692};
  (data->simulationInfo->realVarsPre[1235] /* drones[4].lidar_cloud[3,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1692;
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,5,4] = $PRE.drones[4].lidar_cloud[3,5,4]
*/
void DroneSwarm_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1235]] /* drones[4].lidar_cloud[3,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1235] /* drones[4].lidar_cloud[3,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1693;
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[3,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1694};
  (data->simulationInfo->realVarsPre[1236] /* drones[4].lidar_cloud[3,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1694;
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[3,5,5] = $PRE.drones[4].lidar_cloud[3,5,5]
*/
void DroneSwarm_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1236]] /* drones[4].lidar_cloud[3,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1236] /* drones[4].lidar_cloud[3,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1695;
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1696};
  (data->simulationInfo->realVarsPre[1237] /* drones[4].lidar_cloud[4,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1696;
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,1,1] = $PRE.drones[4].lidar_cloud[4,1,1]
*/
void DroneSwarm_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1237]] /* drones[4].lidar_cloud[4,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1237] /* drones[4].lidar_cloud[4,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1697;
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1698};
  (data->simulationInfo->realVarsPre[1238] /* drones[4].lidar_cloud[4,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1698;
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,1,2] = $PRE.drones[4].lidar_cloud[4,1,2]
*/
void DroneSwarm_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1238]] /* drones[4].lidar_cloud[4,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1238] /* drones[4].lidar_cloud[4,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1699;
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1700};
  (data->simulationInfo->realVarsPre[1239] /* drones[4].lidar_cloud[4,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1700;
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,1,3] = $PRE.drones[4].lidar_cloud[4,1,3]
*/
void DroneSwarm_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1239]] /* drones[4].lidar_cloud[4,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1239] /* drones[4].lidar_cloud[4,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1701;
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1702};
  (data->simulationInfo->realVarsPre[1240] /* drones[4].lidar_cloud[4,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1702;
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,1,4] = $PRE.drones[4].lidar_cloud[4,1,4]
*/
void DroneSwarm_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1240]] /* drones[4].lidar_cloud[4,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1240] /* drones[4].lidar_cloud[4,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1703;
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1704};
  (data->simulationInfo->realVarsPre[1241] /* drones[4].lidar_cloud[4,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1704;
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,1,5] = $PRE.drones[4].lidar_cloud[4,1,5]
*/
void DroneSwarm_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1241]] /* drones[4].lidar_cloud[4,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1241] /* drones[4].lidar_cloud[4,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1705;
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1706};
  (data->simulationInfo->realVarsPre[1242] /* drones[4].lidar_cloud[4,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1706;
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,2,1] = $PRE.drones[4].lidar_cloud[4,2,1]
*/
void DroneSwarm_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1242]] /* drones[4].lidar_cloud[4,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1242] /* drones[4].lidar_cloud[4,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1707;
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1708};
  (data->simulationInfo->realVarsPre[1243] /* drones[4].lidar_cloud[4,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1708;
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,2,2] = $PRE.drones[4].lidar_cloud[4,2,2]
*/
void DroneSwarm_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1243]] /* drones[4].lidar_cloud[4,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1243] /* drones[4].lidar_cloud[4,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1709;
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1710};
  (data->simulationInfo->realVarsPre[1244] /* drones[4].lidar_cloud[4,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1710;
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,2,3] = $PRE.drones[4].lidar_cloud[4,2,3]
*/
void DroneSwarm_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1244]] /* drones[4].lidar_cloud[4,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1244] /* drones[4].lidar_cloud[4,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1711;
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1712};
  (data->simulationInfo->realVarsPre[1245] /* drones[4].lidar_cloud[4,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1712;
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,2,4] = $PRE.drones[4].lidar_cloud[4,2,4]
*/
void DroneSwarm_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1245]] /* drones[4].lidar_cloud[4,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1245] /* drones[4].lidar_cloud[4,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1713;
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1714};
  (data->simulationInfo->realVarsPre[1246] /* drones[4].lidar_cloud[4,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1714;
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,2,5] = $PRE.drones[4].lidar_cloud[4,2,5]
*/
void DroneSwarm_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1246]] /* drones[4].lidar_cloud[4,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1246] /* drones[4].lidar_cloud[4,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1715;
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1716};
  (data->simulationInfo->realVarsPre[1247] /* drones[4].lidar_cloud[4,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1716;
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,3,1] = $PRE.drones[4].lidar_cloud[4,3,1]
*/
void DroneSwarm_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1247]] /* drones[4].lidar_cloud[4,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1247] /* drones[4].lidar_cloud[4,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1717;
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1718};
  (data->simulationInfo->realVarsPre[1248] /* drones[4].lidar_cloud[4,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1718;
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,3,2] = $PRE.drones[4].lidar_cloud[4,3,2]
*/
void DroneSwarm_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1248]] /* drones[4].lidar_cloud[4,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1248] /* drones[4].lidar_cloud[4,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1719;
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1720};
  (data->simulationInfo->realVarsPre[1249] /* drones[4].lidar_cloud[4,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1720;
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,3,3] = $PRE.drones[4].lidar_cloud[4,3,3]
*/
void DroneSwarm_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1249]] /* drones[4].lidar_cloud[4,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1249] /* drones[4].lidar_cloud[4,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1721;
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1722};
  (data->simulationInfo->realVarsPre[1250] /* drones[4].lidar_cloud[4,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1722;
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,3,4] = $PRE.drones[4].lidar_cloud[4,3,4]
*/
void DroneSwarm_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1250]] /* drones[4].lidar_cloud[4,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1250] /* drones[4].lidar_cloud[4,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1723;
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1724};
  (data->simulationInfo->realVarsPre[1251] /* drones[4].lidar_cloud[4,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1724;
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,3,5] = $PRE.drones[4].lidar_cloud[4,3,5]
*/
void DroneSwarm_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1251]] /* drones[4].lidar_cloud[4,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1251] /* drones[4].lidar_cloud[4,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1725;
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1726};
  (data->simulationInfo->realVarsPre[1252] /* drones[4].lidar_cloud[4,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1726;
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,4,1] = $PRE.drones[4].lidar_cloud[4,4,1]
*/
void DroneSwarm_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1252]] /* drones[4].lidar_cloud[4,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1252] /* drones[4].lidar_cloud[4,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1727;
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1728};
  (data->simulationInfo->realVarsPre[1253] /* drones[4].lidar_cloud[4,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1728;
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,4,2] = $PRE.drones[4].lidar_cloud[4,4,2]
*/
void DroneSwarm_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1253]] /* drones[4].lidar_cloud[4,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1253] /* drones[4].lidar_cloud[4,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1729;
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1730};
  (data->simulationInfo->realVarsPre[1254] /* drones[4].lidar_cloud[4,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1730;
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,4,3] = $PRE.drones[4].lidar_cloud[4,4,3]
*/
void DroneSwarm_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1254]] /* drones[4].lidar_cloud[4,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1254] /* drones[4].lidar_cloud[4,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1731;
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1732};
  (data->simulationInfo->realVarsPre[1255] /* drones[4].lidar_cloud[4,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1732;
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,4,4] = $PRE.drones[4].lidar_cloud[4,4,4]
*/
void DroneSwarm_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1255]] /* drones[4].lidar_cloud[4,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1255] /* drones[4].lidar_cloud[4,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1733;
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1734};
  (data->simulationInfo->realVarsPre[1256] /* drones[4].lidar_cloud[4,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1734;
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,4,5] = $PRE.drones[4].lidar_cloud[4,4,5]
*/
void DroneSwarm_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1256]] /* drones[4].lidar_cloud[4,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1256] /* drones[4].lidar_cloud[4,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1735;
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1736};
  (data->simulationInfo->realVarsPre[1257] /* drones[4].lidar_cloud[4,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1736;
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,5,1] = $PRE.drones[4].lidar_cloud[4,5,1]
*/
void DroneSwarm_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1257]] /* drones[4].lidar_cloud[4,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1257] /* drones[4].lidar_cloud[4,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1737;
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1738};
  (data->simulationInfo->realVarsPre[1258] /* drones[4].lidar_cloud[4,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1738;
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,5,2] = $PRE.drones[4].lidar_cloud[4,5,2]
*/
void DroneSwarm_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1258]] /* drones[4].lidar_cloud[4,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1258] /* drones[4].lidar_cloud[4,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1739;
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1740};
  (data->simulationInfo->realVarsPre[1259] /* drones[4].lidar_cloud[4,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1740;
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,5,3] = $PRE.drones[4].lidar_cloud[4,5,3]
*/
void DroneSwarm_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1259]] /* drones[4].lidar_cloud[4,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1259] /* drones[4].lidar_cloud[4,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1741;
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1742};
  (data->simulationInfo->realVarsPre[1260] /* drones[4].lidar_cloud[4,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1742;
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,5,4] = $PRE.drones[4].lidar_cloud[4,5,4]
*/
void DroneSwarm_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1260]] /* drones[4].lidar_cloud[4,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1260] /* drones[4].lidar_cloud[4,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1743;
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[4,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1744};
  (data->simulationInfo->realVarsPre[1261] /* drones[4].lidar_cloud[4,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1744;
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[4,5,5] = $PRE.drones[4].lidar_cloud[4,5,5]
*/
void DroneSwarm_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1261]] /* drones[4].lidar_cloud[4,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1261] /* drones[4].lidar_cloud[4,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1745;
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1746};
  (data->simulationInfo->realVarsPre[1262] /* drones[4].lidar_cloud[5,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1746;
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,1,1] = $PRE.drones[4].lidar_cloud[5,1,1]
*/
void DroneSwarm_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1262]] /* drones[4].lidar_cloud[5,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1262] /* drones[4].lidar_cloud[5,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1747;
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1748};
  (data->simulationInfo->realVarsPre[1263] /* drones[4].lidar_cloud[5,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1748;
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,1,2] = $PRE.drones[4].lidar_cloud[5,1,2]
*/
void DroneSwarm_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1263]] /* drones[4].lidar_cloud[5,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1263] /* drones[4].lidar_cloud[5,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1749;
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1750};
  (data->simulationInfo->realVarsPre[1264] /* drones[4].lidar_cloud[5,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1750;
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,1,3] = $PRE.drones[4].lidar_cloud[5,1,3]
*/
void DroneSwarm_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1264]] /* drones[4].lidar_cloud[5,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1264] /* drones[4].lidar_cloud[5,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1751;
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1752};
  (data->simulationInfo->realVarsPre[1265] /* drones[4].lidar_cloud[5,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1752;
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,1,4] = $PRE.drones[4].lidar_cloud[5,1,4]
*/
void DroneSwarm_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1265]] /* drones[4].lidar_cloud[5,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1265] /* drones[4].lidar_cloud[5,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1753;
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1754};
  (data->simulationInfo->realVarsPre[1266] /* drones[4].lidar_cloud[5,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1754;
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,1,5] = $PRE.drones[4].lidar_cloud[5,1,5]
*/
void DroneSwarm_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1266]] /* drones[4].lidar_cloud[5,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1266] /* drones[4].lidar_cloud[5,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1755;
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1756};
  (data->simulationInfo->realVarsPre[1267] /* drones[4].lidar_cloud[5,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1756;
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,2,1] = $PRE.drones[4].lidar_cloud[5,2,1]
*/
void DroneSwarm_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1267]] /* drones[4].lidar_cloud[5,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1267] /* drones[4].lidar_cloud[5,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1757;
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1758};
  (data->simulationInfo->realVarsPre[1268] /* drones[4].lidar_cloud[5,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1758;
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,2,2] = $PRE.drones[4].lidar_cloud[5,2,2]
*/
void DroneSwarm_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1268]] /* drones[4].lidar_cloud[5,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1268] /* drones[4].lidar_cloud[5,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1759;
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1760};
  (data->simulationInfo->realVarsPre[1269] /* drones[4].lidar_cloud[5,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1760;
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,2,3] = $PRE.drones[4].lidar_cloud[5,2,3]
*/
void DroneSwarm_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1269]] /* drones[4].lidar_cloud[5,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1269] /* drones[4].lidar_cloud[5,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1761;
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1762};
  (data->simulationInfo->realVarsPre[1270] /* drones[4].lidar_cloud[5,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1762;
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,2,4] = $PRE.drones[4].lidar_cloud[5,2,4]
*/
void DroneSwarm_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1270]] /* drones[4].lidar_cloud[5,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1270] /* drones[4].lidar_cloud[5,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1763;
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1764};
  (data->simulationInfo->realVarsPre[1271] /* drones[4].lidar_cloud[5,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1764;
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,2,5] = $PRE.drones[4].lidar_cloud[5,2,5]
*/
void DroneSwarm_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* drones[4].lidar_cloud[5,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1271] /* drones[4].lidar_cloud[5,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1765;
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1766};
  (data->simulationInfo->realVarsPre[1272] /* drones[4].lidar_cloud[5,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1766;
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,3,1] = $PRE.drones[4].lidar_cloud[5,3,1]
*/
void DroneSwarm_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* drones[4].lidar_cloud[5,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1272] /* drones[4].lidar_cloud[5,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1767;
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1768};
  (data->simulationInfo->realVarsPre[1273] /* drones[4].lidar_cloud[5,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1768;
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,3,2] = $PRE.drones[4].lidar_cloud[5,3,2]
*/
void DroneSwarm_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* drones[4].lidar_cloud[5,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1273] /* drones[4].lidar_cloud[5,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1769;
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1770};
  (data->simulationInfo->realVarsPre[1274] /* drones[4].lidar_cloud[5,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1770;
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,3,3] = $PRE.drones[4].lidar_cloud[5,3,3]
*/
void DroneSwarm_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* drones[4].lidar_cloud[5,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1274] /* drones[4].lidar_cloud[5,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1771;
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1772};
  (data->simulationInfo->realVarsPre[1275] /* drones[4].lidar_cloud[5,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1772;
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,3,4] = $PRE.drones[4].lidar_cloud[5,3,4]
*/
void DroneSwarm_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* drones[4].lidar_cloud[5,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1275] /* drones[4].lidar_cloud[5,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1773;
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1774};
  (data->simulationInfo->realVarsPre[1276] /* drones[4].lidar_cloud[5,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1774;
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,3,5] = $PRE.drones[4].lidar_cloud[5,3,5]
*/
void DroneSwarm_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* drones[4].lidar_cloud[5,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1276] /* drones[4].lidar_cloud[5,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1775;
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1776};
  (data->simulationInfo->realVarsPre[1277] /* drones[4].lidar_cloud[5,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1776;
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,4,1] = $PRE.drones[4].lidar_cloud[5,4,1]
*/
void DroneSwarm_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* drones[4].lidar_cloud[5,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1277] /* drones[4].lidar_cloud[5,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1777;
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1778};
  (data->simulationInfo->realVarsPre[1278] /* drones[4].lidar_cloud[5,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1778;
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,4,2] = $PRE.drones[4].lidar_cloud[5,4,2]
*/
void DroneSwarm_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1278]] /* drones[4].lidar_cloud[5,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1278] /* drones[4].lidar_cloud[5,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1779;
}

/*
equation index: 1780
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1780};
  (data->simulationInfo->realVarsPre[1279] /* drones[4].lidar_cloud[5,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1780;
}

/*
equation index: 1781
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,4,3] = $PRE.drones[4].lidar_cloud[5,4,3]
*/
void DroneSwarm_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1279]] /* drones[4].lidar_cloud[5,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1279] /* drones[4].lidar_cloud[5,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1781;
}

/*
equation index: 1782
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1782};
  (data->simulationInfo->realVarsPre[1280] /* drones[4].lidar_cloud[5,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1782;
}

/*
equation index: 1783
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,4,4] = $PRE.drones[4].lidar_cloud[5,4,4]
*/
void DroneSwarm_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* drones[4].lidar_cloud[5,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1280] /* drones[4].lidar_cloud[5,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1783;
}

/*
equation index: 1784
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1784};
  (data->simulationInfo->realVarsPre[1281] /* drones[4].lidar_cloud[5,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1784;
}

/*
equation index: 1785
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,4,5] = $PRE.drones[4].lidar_cloud[5,4,5]
*/
void DroneSwarm_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* drones[4].lidar_cloud[5,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1281] /* drones[4].lidar_cloud[5,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1785;
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1786};
  (data->simulationInfo->realVarsPre[1282] /* drones[4].lidar_cloud[5,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1786;
}

/*
equation index: 1787
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,5,1] = $PRE.drones[4].lidar_cloud[5,5,1]
*/
void DroneSwarm_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* drones[4].lidar_cloud[5,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1282] /* drones[4].lidar_cloud[5,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1787;
}

/*
equation index: 1788
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1788};
  (data->simulationInfo->realVarsPre[1283] /* drones[4].lidar_cloud[5,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1788;
}

/*
equation index: 1789
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,5,2] = $PRE.drones[4].lidar_cloud[5,5,2]
*/
void DroneSwarm_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* drones[4].lidar_cloud[5,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1283] /* drones[4].lidar_cloud[5,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1789;
}

/*
equation index: 1790
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1790};
  (data->simulationInfo->realVarsPre[1284] /* drones[4].lidar_cloud[5,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1790;
}

/*
equation index: 1791
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,5,3] = $PRE.drones[4].lidar_cloud[5,5,3]
*/
void DroneSwarm_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1284]] /* drones[4].lidar_cloud[5,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1284] /* drones[4].lidar_cloud[5,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1791;
}

/*
equation index: 1792
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1792};
  (data->simulationInfo->realVarsPre[1285] /* drones[4].lidar_cloud[5,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1792;
}

/*
equation index: 1793
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,5,4] = $PRE.drones[4].lidar_cloud[5,5,4]
*/
void DroneSwarm_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* drones[4].lidar_cloud[5,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1285] /* drones[4].lidar_cloud[5,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1793;
}

/*
equation index: 1794
type: SIMPLE_ASSIGN
$PRE.drones[4].lidar_cloud[5,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1794};
  (data->simulationInfo->realVarsPre[1286] /* drones[4].lidar_cloud[5,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1794;
}

/*
equation index: 1795
type: SIMPLE_ASSIGN
drones[4].lidar_cloud[5,5,5] = $PRE.drones[4].lidar_cloud[5,5,5]
*/
void DroneSwarm_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1286]] /* drones[4].lidar_cloud[5,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1286] /* drones[4].lidar_cloud[5,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1795;
}
OMC_DISABLE_OPT
void DroneSwarm_functionInitialEquations_3(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[448])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_1348,
    DroneSwarm_eqFunction_1349,
    DroneSwarm_eqFunction_1350,
    DroneSwarm_eqFunction_1351,
    DroneSwarm_eqFunction_1352,
    DroneSwarm_eqFunction_1353,
    DroneSwarm_eqFunction_1354,
    DroneSwarm_eqFunction_1355,
    DroneSwarm_eqFunction_1356,
    DroneSwarm_eqFunction_1357,
    DroneSwarm_eqFunction_1358,
    DroneSwarm_eqFunction_1359,
    DroneSwarm_eqFunction_1360,
    DroneSwarm_eqFunction_1361,
    DroneSwarm_eqFunction_1362,
    DroneSwarm_eqFunction_1363,
    DroneSwarm_eqFunction_1364,
    DroneSwarm_eqFunction_1365,
    DroneSwarm_eqFunction_1366,
    DroneSwarm_eqFunction_1367,
    DroneSwarm_eqFunction_1368,
    DroneSwarm_eqFunction_1369,
    DroneSwarm_eqFunction_1370,
    DroneSwarm_eqFunction_1371,
    DroneSwarm_eqFunction_1372,
    DroneSwarm_eqFunction_1373,
    DroneSwarm_eqFunction_1374,
    DroneSwarm_eqFunction_1375,
    DroneSwarm_eqFunction_1376,
    DroneSwarm_eqFunction_1377,
    DroneSwarm_eqFunction_1378,
    DroneSwarm_eqFunction_1379,
    DroneSwarm_eqFunction_1380,
    DroneSwarm_eqFunction_1381,
    DroneSwarm_eqFunction_1382,
    DroneSwarm_eqFunction_1383,
    DroneSwarm_eqFunction_1384,
    DroneSwarm_eqFunction_1385,
    DroneSwarm_eqFunction_1386,
    DroneSwarm_eqFunction_1387,
    DroneSwarm_eqFunction_1388,
    DroneSwarm_eqFunction_1389,
    DroneSwarm_eqFunction_1390,
    DroneSwarm_eqFunction_1391,
    DroneSwarm_eqFunction_1392,
    DroneSwarm_eqFunction_1393,
    DroneSwarm_eqFunction_1394,
    DroneSwarm_eqFunction_1395,
    DroneSwarm_eqFunction_1396,
    DroneSwarm_eqFunction_1397,
    DroneSwarm_eqFunction_1398,
    DroneSwarm_eqFunction_1399,
    DroneSwarm_eqFunction_1400,
    DroneSwarm_eqFunction_1401,
    DroneSwarm_eqFunction_1402,
    DroneSwarm_eqFunction_1403,
    DroneSwarm_eqFunction_1404,
    DroneSwarm_eqFunction_1405,
    DroneSwarm_eqFunction_1406,
    DroneSwarm_eqFunction_1407,
    DroneSwarm_eqFunction_1408,
    DroneSwarm_eqFunction_1409,
    DroneSwarm_eqFunction_1410,
    DroneSwarm_eqFunction_1411,
    DroneSwarm_eqFunction_1412,
    DroneSwarm_eqFunction_1413,
    DroneSwarm_eqFunction_1414,
    DroneSwarm_eqFunction_1415,
    DroneSwarm_eqFunction_1416,
    DroneSwarm_eqFunction_1417,
    DroneSwarm_eqFunction_1418,
    DroneSwarm_eqFunction_1419,
    DroneSwarm_eqFunction_1420,
    DroneSwarm_eqFunction_1421,
    DroneSwarm_eqFunction_1422,
    DroneSwarm_eqFunction_1423,
    DroneSwarm_eqFunction_1424,
    DroneSwarm_eqFunction_1425,
    DroneSwarm_eqFunction_1426,
    DroneSwarm_eqFunction_1427,
    DroneSwarm_eqFunction_1428,
    DroneSwarm_eqFunction_1429,
    DroneSwarm_eqFunction_1430,
    DroneSwarm_eqFunction_1431,
    DroneSwarm_eqFunction_1432,
    DroneSwarm_eqFunction_1433,
    DroneSwarm_eqFunction_1434,
    DroneSwarm_eqFunction_1435,
    DroneSwarm_eqFunction_1436,
    DroneSwarm_eqFunction_1437,
    DroneSwarm_eqFunction_1438,
    DroneSwarm_eqFunction_1439,
    DroneSwarm_eqFunction_1440,
    DroneSwarm_eqFunction_1441,
    DroneSwarm_eqFunction_1442,
    DroneSwarm_eqFunction_1443,
    DroneSwarm_eqFunction_1444,
    DroneSwarm_eqFunction_1445,
    DroneSwarm_eqFunction_1446,
    DroneSwarm_eqFunction_1447,
    DroneSwarm_eqFunction_1448,
    DroneSwarm_eqFunction_1449,
    DroneSwarm_eqFunction_1450,
    DroneSwarm_eqFunction_1451,
    DroneSwarm_eqFunction_1452,
    DroneSwarm_eqFunction_1453,
    DroneSwarm_eqFunction_1454,
    DroneSwarm_eqFunction_1455,
    DroneSwarm_eqFunction_1456,
    DroneSwarm_eqFunction_1457,
    DroneSwarm_eqFunction_1458,
    DroneSwarm_eqFunction_1459,
    DroneSwarm_eqFunction_1460,
    DroneSwarm_eqFunction_1461,
    DroneSwarm_eqFunction_1462,
    DroneSwarm_eqFunction_1463,
    DroneSwarm_eqFunction_1464,
    DroneSwarm_eqFunction_1465,
    DroneSwarm_eqFunction_1466,
    DroneSwarm_eqFunction_1467,
    DroneSwarm_eqFunction_1468,
    DroneSwarm_eqFunction_1469,
    DroneSwarm_eqFunction_1470,
    DroneSwarm_eqFunction_1471,
    DroneSwarm_eqFunction_1472,
    DroneSwarm_eqFunction_1473,
    DroneSwarm_eqFunction_1474,
    DroneSwarm_eqFunction_1475,
    DroneSwarm_eqFunction_1476,
    DroneSwarm_eqFunction_1477,
    DroneSwarm_eqFunction_1478,
    DroneSwarm_eqFunction_1479,
    DroneSwarm_eqFunction_1480,
    DroneSwarm_eqFunction_1481,
    DroneSwarm_eqFunction_1482,
    DroneSwarm_eqFunction_1483,
    DroneSwarm_eqFunction_1484,
    DroneSwarm_eqFunction_1485,
    DroneSwarm_eqFunction_1486,
    DroneSwarm_eqFunction_1487,
    DroneSwarm_eqFunction_1488,
    DroneSwarm_eqFunction_1489,
    DroneSwarm_eqFunction_1490,
    DroneSwarm_eqFunction_1491,
    DroneSwarm_eqFunction_1492,
    DroneSwarm_eqFunction_1493,
    DroneSwarm_eqFunction_1494,
    DroneSwarm_eqFunction_1495,
    DroneSwarm_eqFunction_1496,
    DroneSwarm_eqFunction_1497,
    DroneSwarm_eqFunction_1498,
    DroneSwarm_eqFunction_1499,
    DroneSwarm_eqFunction_1500,
    DroneSwarm_eqFunction_1501,
    DroneSwarm_eqFunction_1502,
    DroneSwarm_eqFunction_1503,
    DroneSwarm_eqFunction_1504,
    DroneSwarm_eqFunction_1505,
    DroneSwarm_eqFunction_1506,
    DroneSwarm_eqFunction_1507,
    DroneSwarm_eqFunction_1508,
    DroneSwarm_eqFunction_1509,
    DroneSwarm_eqFunction_1510,
    DroneSwarm_eqFunction_1511,
    DroneSwarm_eqFunction_1512,
    DroneSwarm_eqFunction_1513,
    DroneSwarm_eqFunction_1514,
    DroneSwarm_eqFunction_1515,
    DroneSwarm_eqFunction_1516,
    DroneSwarm_eqFunction_1517,
    DroneSwarm_eqFunction_1518,
    DroneSwarm_eqFunction_1519,
    DroneSwarm_eqFunction_1520,
    DroneSwarm_eqFunction_1521,
    DroneSwarm_eqFunction_1522,
    DroneSwarm_eqFunction_1523,
    DroneSwarm_eqFunction_1524,
    DroneSwarm_eqFunction_1525,
    DroneSwarm_eqFunction_1526,
    DroneSwarm_eqFunction_1527,
    DroneSwarm_eqFunction_1528,
    DroneSwarm_eqFunction_1529,
    DroneSwarm_eqFunction_1530,
    DroneSwarm_eqFunction_1531,
    DroneSwarm_eqFunction_1532,
    DroneSwarm_eqFunction_1533,
    DroneSwarm_eqFunction_1534,
    DroneSwarm_eqFunction_1535,
    DroneSwarm_eqFunction_1536,
    DroneSwarm_eqFunction_1537,
    DroneSwarm_eqFunction_1538,
    DroneSwarm_eqFunction_1539,
    DroneSwarm_eqFunction_1540,
    DroneSwarm_eqFunction_1541,
    DroneSwarm_eqFunction_1542,
    DroneSwarm_eqFunction_1543,
    DroneSwarm_eqFunction_1544,
    DroneSwarm_eqFunction_1545,
    DroneSwarm_eqFunction_1546,
    DroneSwarm_eqFunction_1547,
    DroneSwarm_eqFunction_1548,
    DroneSwarm_eqFunction_1549,
    DroneSwarm_eqFunction_1550,
    DroneSwarm_eqFunction_1551,
    DroneSwarm_eqFunction_1552,
    DroneSwarm_eqFunction_1553,
    DroneSwarm_eqFunction_1554,
    DroneSwarm_eqFunction_1555,
    DroneSwarm_eqFunction_1556,
    DroneSwarm_eqFunction_1557,
    DroneSwarm_eqFunction_1558,
    DroneSwarm_eqFunction_1559,
    DroneSwarm_eqFunction_1560,
    DroneSwarm_eqFunction_1561,
    DroneSwarm_eqFunction_1562,
    DroneSwarm_eqFunction_1563,
    DroneSwarm_eqFunction_1564,
    DroneSwarm_eqFunction_1565,
    DroneSwarm_eqFunction_1566,
    DroneSwarm_eqFunction_1567,
    DroneSwarm_eqFunction_1568,
    DroneSwarm_eqFunction_1569,
    DroneSwarm_eqFunction_1570,
    DroneSwarm_eqFunction_1571,
    DroneSwarm_eqFunction_1572,
    DroneSwarm_eqFunction_1573,
    DroneSwarm_eqFunction_1574,
    DroneSwarm_eqFunction_1575,
    DroneSwarm_eqFunction_1576,
    DroneSwarm_eqFunction_1577,
    DroneSwarm_eqFunction_1578,
    DroneSwarm_eqFunction_1579,
    DroneSwarm_eqFunction_1580,
    DroneSwarm_eqFunction_1581,
    DroneSwarm_eqFunction_1582,
    DroneSwarm_eqFunction_1583,
    DroneSwarm_eqFunction_1584,
    DroneSwarm_eqFunction_1585,
    DroneSwarm_eqFunction_1586,
    DroneSwarm_eqFunction_1587,
    DroneSwarm_eqFunction_1588,
    DroneSwarm_eqFunction_1589,
    DroneSwarm_eqFunction_1590,
    DroneSwarm_eqFunction_1591,
    DroneSwarm_eqFunction_1592,
    DroneSwarm_eqFunction_1593,
    DroneSwarm_eqFunction_1594,
    DroneSwarm_eqFunction_1595,
    DroneSwarm_eqFunction_1596,
    DroneSwarm_eqFunction_1597,
    DroneSwarm_eqFunction_1598,
    DroneSwarm_eqFunction_1599,
    DroneSwarm_eqFunction_1600,
    DroneSwarm_eqFunction_1601,
    DroneSwarm_eqFunction_1602,
    DroneSwarm_eqFunction_1603,
    DroneSwarm_eqFunction_1604,
    DroneSwarm_eqFunction_1605,
    DroneSwarm_eqFunction_1606,
    DroneSwarm_eqFunction_1607,
    DroneSwarm_eqFunction_1608,
    DroneSwarm_eqFunction_1609,
    DroneSwarm_eqFunction_1610,
    DroneSwarm_eqFunction_1611,
    DroneSwarm_eqFunction_1612,
    DroneSwarm_eqFunction_1613,
    DroneSwarm_eqFunction_1614,
    DroneSwarm_eqFunction_1615,
    DroneSwarm_eqFunction_1616,
    DroneSwarm_eqFunction_1617,
    DroneSwarm_eqFunction_1618,
    DroneSwarm_eqFunction_1619,
    DroneSwarm_eqFunction_1620,
    DroneSwarm_eqFunction_1621,
    DroneSwarm_eqFunction_1622,
    DroneSwarm_eqFunction_1623,
    DroneSwarm_eqFunction_1624,
    DroneSwarm_eqFunction_1625,
    DroneSwarm_eqFunction_1626,
    DroneSwarm_eqFunction_1627,
    DroneSwarm_eqFunction_1628,
    DroneSwarm_eqFunction_1629,
    DroneSwarm_eqFunction_1630,
    DroneSwarm_eqFunction_1631,
    DroneSwarm_eqFunction_1632,
    DroneSwarm_eqFunction_1633,
    DroneSwarm_eqFunction_1634,
    DroneSwarm_eqFunction_1635,
    DroneSwarm_eqFunction_1636,
    DroneSwarm_eqFunction_1637,
    DroneSwarm_eqFunction_1638,
    DroneSwarm_eqFunction_1639,
    DroneSwarm_eqFunction_1640,
    DroneSwarm_eqFunction_1641,
    DroneSwarm_eqFunction_1642,
    DroneSwarm_eqFunction_1643,
    DroneSwarm_eqFunction_1644,
    DroneSwarm_eqFunction_1645,
    DroneSwarm_eqFunction_1646,
    DroneSwarm_eqFunction_1647,
    DroneSwarm_eqFunction_1648,
    DroneSwarm_eqFunction_1649,
    DroneSwarm_eqFunction_1650,
    DroneSwarm_eqFunction_1651,
    DroneSwarm_eqFunction_1652,
    DroneSwarm_eqFunction_1653,
    DroneSwarm_eqFunction_1654,
    DroneSwarm_eqFunction_1655,
    DroneSwarm_eqFunction_1656,
    DroneSwarm_eqFunction_1657,
    DroneSwarm_eqFunction_1658,
    DroneSwarm_eqFunction_1659,
    DroneSwarm_eqFunction_1660,
    DroneSwarm_eqFunction_1661,
    DroneSwarm_eqFunction_1662,
    DroneSwarm_eqFunction_1663,
    DroneSwarm_eqFunction_1664,
    DroneSwarm_eqFunction_1665,
    DroneSwarm_eqFunction_1666,
    DroneSwarm_eqFunction_1667,
    DroneSwarm_eqFunction_1668,
    DroneSwarm_eqFunction_1669,
    DroneSwarm_eqFunction_1670,
    DroneSwarm_eqFunction_1671,
    DroneSwarm_eqFunction_1672,
    DroneSwarm_eqFunction_1673,
    DroneSwarm_eqFunction_1674,
    DroneSwarm_eqFunction_1675,
    DroneSwarm_eqFunction_1676,
    DroneSwarm_eqFunction_1677,
    DroneSwarm_eqFunction_1678,
    DroneSwarm_eqFunction_1679,
    DroneSwarm_eqFunction_1680,
    DroneSwarm_eqFunction_1681,
    DroneSwarm_eqFunction_1682,
    DroneSwarm_eqFunction_1683,
    DroneSwarm_eqFunction_1684,
    DroneSwarm_eqFunction_1685,
    DroneSwarm_eqFunction_1686,
    DroneSwarm_eqFunction_1687,
    DroneSwarm_eqFunction_1688,
    DroneSwarm_eqFunction_1689,
    DroneSwarm_eqFunction_1690,
    DroneSwarm_eqFunction_1691,
    DroneSwarm_eqFunction_1692,
    DroneSwarm_eqFunction_1693,
    DroneSwarm_eqFunction_1694,
    DroneSwarm_eqFunction_1695,
    DroneSwarm_eqFunction_1696,
    DroneSwarm_eqFunction_1697,
    DroneSwarm_eqFunction_1698,
    DroneSwarm_eqFunction_1699,
    DroneSwarm_eqFunction_1700,
    DroneSwarm_eqFunction_1701,
    DroneSwarm_eqFunction_1702,
    DroneSwarm_eqFunction_1703,
    DroneSwarm_eqFunction_1704,
    DroneSwarm_eqFunction_1705,
    DroneSwarm_eqFunction_1706,
    DroneSwarm_eqFunction_1707,
    DroneSwarm_eqFunction_1708,
    DroneSwarm_eqFunction_1709,
    DroneSwarm_eqFunction_1710,
    DroneSwarm_eqFunction_1711,
    DroneSwarm_eqFunction_1712,
    DroneSwarm_eqFunction_1713,
    DroneSwarm_eqFunction_1714,
    DroneSwarm_eqFunction_1715,
    DroneSwarm_eqFunction_1716,
    DroneSwarm_eqFunction_1717,
    DroneSwarm_eqFunction_1718,
    DroneSwarm_eqFunction_1719,
    DroneSwarm_eqFunction_1720,
    DroneSwarm_eqFunction_1721,
    DroneSwarm_eqFunction_1722,
    DroneSwarm_eqFunction_1723,
    DroneSwarm_eqFunction_1724,
    DroneSwarm_eqFunction_1725,
    DroneSwarm_eqFunction_1726,
    DroneSwarm_eqFunction_1727,
    DroneSwarm_eqFunction_1728,
    DroneSwarm_eqFunction_1729,
    DroneSwarm_eqFunction_1730,
    DroneSwarm_eqFunction_1731,
    DroneSwarm_eqFunction_1732,
    DroneSwarm_eqFunction_1733,
    DroneSwarm_eqFunction_1734,
    DroneSwarm_eqFunction_1735,
    DroneSwarm_eqFunction_1736,
    DroneSwarm_eqFunction_1737,
    DroneSwarm_eqFunction_1738,
    DroneSwarm_eqFunction_1739,
    DroneSwarm_eqFunction_1740,
    DroneSwarm_eqFunction_1741,
    DroneSwarm_eqFunction_1742,
    DroneSwarm_eqFunction_1743,
    DroneSwarm_eqFunction_1744,
    DroneSwarm_eqFunction_1745,
    DroneSwarm_eqFunction_1746,
    DroneSwarm_eqFunction_1747,
    DroneSwarm_eqFunction_1748,
    DroneSwarm_eqFunction_1749,
    DroneSwarm_eqFunction_1750,
    DroneSwarm_eqFunction_1751,
    DroneSwarm_eqFunction_1752,
    DroneSwarm_eqFunction_1753,
    DroneSwarm_eqFunction_1754,
    DroneSwarm_eqFunction_1755,
    DroneSwarm_eqFunction_1756,
    DroneSwarm_eqFunction_1757,
    DroneSwarm_eqFunction_1758,
    DroneSwarm_eqFunction_1759,
    DroneSwarm_eqFunction_1760,
    DroneSwarm_eqFunction_1761,
    DroneSwarm_eqFunction_1762,
    DroneSwarm_eqFunction_1763,
    DroneSwarm_eqFunction_1764,
    DroneSwarm_eqFunction_1765,
    DroneSwarm_eqFunction_1766,
    DroneSwarm_eqFunction_1767,
    DroneSwarm_eqFunction_1768,
    DroneSwarm_eqFunction_1769,
    DroneSwarm_eqFunction_1770,
    DroneSwarm_eqFunction_1771,
    DroneSwarm_eqFunction_1772,
    DroneSwarm_eqFunction_1773,
    DroneSwarm_eqFunction_1774,
    DroneSwarm_eqFunction_1775,
    DroneSwarm_eqFunction_1776,
    DroneSwarm_eqFunction_1777,
    DroneSwarm_eqFunction_1778,
    DroneSwarm_eqFunction_1779,
    DroneSwarm_eqFunction_1780,
    DroneSwarm_eqFunction_1781,
    DroneSwarm_eqFunction_1782,
    DroneSwarm_eqFunction_1783,
    DroneSwarm_eqFunction_1784,
    DroneSwarm_eqFunction_1785,
    DroneSwarm_eqFunction_1786,
    DroneSwarm_eqFunction_1787,
    DroneSwarm_eqFunction_1788,
    DroneSwarm_eqFunction_1789,
    DroneSwarm_eqFunction_1790,
    DroneSwarm_eqFunction_1791,
    DroneSwarm_eqFunction_1792,
    DroneSwarm_eqFunction_1793,
    DroneSwarm_eqFunction_1794,
    DroneSwarm_eqFunction_1795
  };
  
  for (int id = 0; id < 448; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif
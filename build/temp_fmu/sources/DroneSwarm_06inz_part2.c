#include "DroneSwarm_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 899
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,1,2] = $PRE.drones[1].lidar_cloud[3,1,2]
*/
void DroneSwarm_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* drones[1].lidar_cloud[3,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[838] /* drones[1].lidar_cloud[3,1,2] DISCRETE */);
  threadData->lastEquationSolved = 899;
}

/*
equation index: 900
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,1,3] = 0.0
*/
void DroneSwarm_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  (data->simulationInfo->realVarsPre[839] /* drones[1].lidar_cloud[3,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 900;
}

/*
equation index: 901
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,1,3] = $PRE.drones[1].lidar_cloud[3,1,3]
*/
void DroneSwarm_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* drones[1].lidar_cloud[3,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[839] /* drones[1].lidar_cloud[3,1,3] DISCRETE */);
  threadData->lastEquationSolved = 901;
}

/*
equation index: 902
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,1,4] = 0.0
*/
void DroneSwarm_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->simulationInfo->realVarsPre[840] /* drones[1].lidar_cloud[3,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 902;
}

/*
equation index: 903
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,1,4] = $PRE.drones[1].lidar_cloud[3,1,4]
*/
void DroneSwarm_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* drones[1].lidar_cloud[3,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[840] /* drones[1].lidar_cloud[3,1,4] DISCRETE */);
  threadData->lastEquationSolved = 903;
}

/*
equation index: 904
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,1,5] = 0.0
*/
void DroneSwarm_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  (data->simulationInfo->realVarsPre[841] /* drones[1].lidar_cloud[3,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 904;
}

/*
equation index: 905
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,1,5] = $PRE.drones[1].lidar_cloud[3,1,5]
*/
void DroneSwarm_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* drones[1].lidar_cloud[3,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[841] /* drones[1].lidar_cloud[3,1,5] DISCRETE */);
  threadData->lastEquationSolved = 905;
}

/*
equation index: 906
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,2,1] = 0.0
*/
void DroneSwarm_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->simulationInfo->realVarsPre[842] /* drones[1].lidar_cloud[3,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 906;
}

/*
equation index: 907
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,2,1] = $PRE.drones[1].lidar_cloud[3,2,1]
*/
void DroneSwarm_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* drones[1].lidar_cloud[3,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[842] /* drones[1].lidar_cloud[3,2,1] DISCRETE */);
  threadData->lastEquationSolved = 907;
}

/*
equation index: 908
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,2,2] = 0.0
*/
void DroneSwarm_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->simulationInfo->realVarsPre[843] /* drones[1].lidar_cloud[3,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 908;
}

/*
equation index: 909
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,2,2] = $PRE.drones[1].lidar_cloud[3,2,2]
*/
void DroneSwarm_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* drones[1].lidar_cloud[3,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[843] /* drones[1].lidar_cloud[3,2,2] DISCRETE */);
  threadData->lastEquationSolved = 909;
}

/*
equation index: 910
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,2,3] = 0.0
*/
void DroneSwarm_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  (data->simulationInfo->realVarsPre[844] /* drones[1].lidar_cloud[3,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 910;
}

/*
equation index: 911
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,2,3] = $PRE.drones[1].lidar_cloud[3,2,3]
*/
void DroneSwarm_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* drones[1].lidar_cloud[3,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[844] /* drones[1].lidar_cloud[3,2,3] DISCRETE */);
  threadData->lastEquationSolved = 911;
}

/*
equation index: 912
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,2,4] = 0.0
*/
void DroneSwarm_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->simulationInfo->realVarsPre[845] /* drones[1].lidar_cloud[3,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 912;
}

/*
equation index: 913
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,2,4] = $PRE.drones[1].lidar_cloud[3,2,4]
*/
void DroneSwarm_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* drones[1].lidar_cloud[3,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[845] /* drones[1].lidar_cloud[3,2,4] DISCRETE */);
  threadData->lastEquationSolved = 913;
}

/*
equation index: 914
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,2,5] = 0.0
*/
void DroneSwarm_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->simulationInfo->realVarsPre[846] /* drones[1].lidar_cloud[3,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 914;
}

/*
equation index: 915
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,2,5] = $PRE.drones[1].lidar_cloud[3,2,5]
*/
void DroneSwarm_eqFunction_915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* drones[1].lidar_cloud[3,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[846] /* drones[1].lidar_cloud[3,2,5] DISCRETE */);
  threadData->lastEquationSolved = 915;
}

/*
equation index: 916
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,3,1] = 0.0
*/
void DroneSwarm_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->simulationInfo->realVarsPre[847] /* drones[1].lidar_cloud[3,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 916;
}

/*
equation index: 917
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,3,1] = $PRE.drones[1].lidar_cloud[3,3,1]
*/
void DroneSwarm_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* drones[1].lidar_cloud[3,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[847] /* drones[1].lidar_cloud[3,3,1] DISCRETE */);
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,3,2] = 0.0
*/
void DroneSwarm_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  (data->simulationInfo->realVarsPre[848] /* drones[1].lidar_cloud[3,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 918;
}

/*
equation index: 919
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,3,2] = $PRE.drones[1].lidar_cloud[3,3,2]
*/
void DroneSwarm_eqFunction_919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* drones[1].lidar_cloud[3,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[848] /* drones[1].lidar_cloud[3,3,2] DISCRETE */);
  threadData->lastEquationSolved = 919;
}

/*
equation index: 920
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,3,3] = 0.0
*/
void DroneSwarm_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  (data->simulationInfo->realVarsPre[849] /* drones[1].lidar_cloud[3,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 920;
}

/*
equation index: 921
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,3,3] = $PRE.drones[1].lidar_cloud[3,3,3]
*/
void DroneSwarm_eqFunction_921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* drones[1].lidar_cloud[3,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[849] /* drones[1].lidar_cloud[3,3,3] DISCRETE */);
  threadData->lastEquationSolved = 921;
}

/*
equation index: 922
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,3,4] = 0.0
*/
void DroneSwarm_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->simulationInfo->realVarsPre[850] /* drones[1].lidar_cloud[3,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 922;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,3,4] = $PRE.drones[1].lidar_cloud[3,3,4]
*/
void DroneSwarm_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* drones[1].lidar_cloud[3,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[850] /* drones[1].lidar_cloud[3,3,4] DISCRETE */);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,3,5] = 0.0
*/
void DroneSwarm_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  (data->simulationInfo->realVarsPre[851] /* drones[1].lidar_cloud[3,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,3,5] = $PRE.drones[1].lidar_cloud[3,3,5]
*/
void DroneSwarm_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[851]] /* drones[1].lidar_cloud[3,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[851] /* drones[1].lidar_cloud[3,3,5] DISCRETE */);
  threadData->lastEquationSolved = 925;
}

/*
equation index: 926
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,4,1] = 0.0
*/
void DroneSwarm_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->simulationInfo->realVarsPre[852] /* drones[1].lidar_cloud[3,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 926;
}

/*
equation index: 927
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,4,1] = $PRE.drones[1].lidar_cloud[3,4,1]
*/
void DroneSwarm_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[852]] /* drones[1].lidar_cloud[3,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[852] /* drones[1].lidar_cloud[3,4,1] DISCRETE */);
  threadData->lastEquationSolved = 927;
}

/*
equation index: 928
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,4,2] = 0.0
*/
void DroneSwarm_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->simulationInfo->realVarsPre[853] /* drones[1].lidar_cloud[3,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 928;
}

/*
equation index: 929
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,4,2] = $PRE.drones[1].lidar_cloud[3,4,2]
*/
void DroneSwarm_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[853]] /* drones[1].lidar_cloud[3,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[853] /* drones[1].lidar_cloud[3,4,2] DISCRETE */);
  threadData->lastEquationSolved = 929;
}

/*
equation index: 930
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,4,3] = 0.0
*/
void DroneSwarm_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->simulationInfo->realVarsPre[854] /* drones[1].lidar_cloud[3,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 930;
}

/*
equation index: 931
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,4,3] = $PRE.drones[1].lidar_cloud[3,4,3]
*/
void DroneSwarm_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[854]] /* drones[1].lidar_cloud[3,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[854] /* drones[1].lidar_cloud[3,4,3] DISCRETE */);
  threadData->lastEquationSolved = 931;
}

/*
equation index: 932
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,4,4] = 0.0
*/
void DroneSwarm_eqFunction_932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,932};
  (data->simulationInfo->realVarsPre[855] /* drones[1].lidar_cloud[3,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 932;
}

/*
equation index: 933
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,4,4] = $PRE.drones[1].lidar_cloud[3,4,4]
*/
void DroneSwarm_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[855]] /* drones[1].lidar_cloud[3,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[855] /* drones[1].lidar_cloud[3,4,4] DISCRETE */);
  threadData->lastEquationSolved = 933;
}

/*
equation index: 934
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,4,5] = 0.0
*/
void DroneSwarm_eqFunction_934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,934};
  (data->simulationInfo->realVarsPre[856] /* drones[1].lidar_cloud[3,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 934;
}

/*
equation index: 935
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,4,5] = $PRE.drones[1].lidar_cloud[3,4,5]
*/
void DroneSwarm_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[856]] /* drones[1].lidar_cloud[3,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[856] /* drones[1].lidar_cloud[3,4,5] DISCRETE */);
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,5,1] = 0.0
*/
void DroneSwarm_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  (data->simulationInfo->realVarsPre[857] /* drones[1].lidar_cloud[3,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,5,1] = $PRE.drones[1].lidar_cloud[3,5,1]
*/
void DroneSwarm_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[857]] /* drones[1].lidar_cloud[3,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[857] /* drones[1].lidar_cloud[3,5,1] DISCRETE */);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,5,2] = 0.0
*/
void DroneSwarm_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->simulationInfo->realVarsPre[858] /* drones[1].lidar_cloud[3,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,5,2] = $PRE.drones[1].lidar_cloud[3,5,2]
*/
void DroneSwarm_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[858]] /* drones[1].lidar_cloud[3,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[858] /* drones[1].lidar_cloud[3,5,2] DISCRETE */);
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,5,3] = 0.0
*/
void DroneSwarm_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->simulationInfo->realVarsPre[859] /* drones[1].lidar_cloud[3,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,5,3] = $PRE.drones[1].lidar_cloud[3,5,3]
*/
void DroneSwarm_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[859]] /* drones[1].lidar_cloud[3,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[859] /* drones[1].lidar_cloud[3,5,3] DISCRETE */);
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,5,4] = 0.0
*/
void DroneSwarm_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  (data->simulationInfo->realVarsPre[860] /* drones[1].lidar_cloud[3,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,5,4] = $PRE.drones[1].lidar_cloud[3,5,4]
*/
void DroneSwarm_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[860]] /* drones[1].lidar_cloud[3,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[860] /* drones[1].lidar_cloud[3,5,4] DISCRETE */);
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[3,5,5] = 0.0
*/
void DroneSwarm_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->simulationInfo->realVarsPre[861] /* drones[1].lidar_cloud[3,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[3,5,5] = $PRE.drones[1].lidar_cloud[3,5,5]
*/
void DroneSwarm_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[861]] /* drones[1].lidar_cloud[3,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[861] /* drones[1].lidar_cloud[3,5,5] DISCRETE */);
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,1,1] = 0.0
*/
void DroneSwarm_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->simulationInfo->realVarsPre[862] /* drones[1].lidar_cloud[4,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,1,1] = $PRE.drones[1].lidar_cloud[4,1,1]
*/
void DroneSwarm_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[862]] /* drones[1].lidar_cloud[4,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[862] /* drones[1].lidar_cloud[4,1,1] DISCRETE */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,1,2] = 0.0
*/
void DroneSwarm_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->simulationInfo->realVarsPre[863] /* drones[1].lidar_cloud[4,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,1,2] = $PRE.drones[1].lidar_cloud[4,1,2]
*/
void DroneSwarm_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[863]] /* drones[1].lidar_cloud[4,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[863] /* drones[1].lidar_cloud[4,1,2] DISCRETE */);
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,1,3] = 0.0
*/
void DroneSwarm_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->simulationInfo->realVarsPre[864] /* drones[1].lidar_cloud[4,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,1,3] = $PRE.drones[1].lidar_cloud[4,1,3]
*/
void DroneSwarm_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[864]] /* drones[1].lidar_cloud[4,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[864] /* drones[1].lidar_cloud[4,1,3] DISCRETE */);
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,1,4] = 0.0
*/
void DroneSwarm_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  (data->simulationInfo->realVarsPre[865] /* drones[1].lidar_cloud[4,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,1,4] = $PRE.drones[1].lidar_cloud[4,1,4]
*/
void DroneSwarm_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[865]] /* drones[1].lidar_cloud[4,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[865] /* drones[1].lidar_cloud[4,1,4] DISCRETE */);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,1,5] = 0.0
*/
void DroneSwarm_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  (data->simulationInfo->realVarsPre[866] /* drones[1].lidar_cloud[4,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,1,5] = $PRE.drones[1].lidar_cloud[4,1,5]
*/
void DroneSwarm_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[866]] /* drones[1].lidar_cloud[4,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[866] /* drones[1].lidar_cloud[4,1,5] DISCRETE */);
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,2,1] = 0.0
*/
void DroneSwarm_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->simulationInfo->realVarsPre[867] /* drones[1].lidar_cloud[4,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,2,1] = $PRE.drones[1].lidar_cloud[4,2,1]
*/
void DroneSwarm_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[867]] /* drones[1].lidar_cloud[4,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[867] /* drones[1].lidar_cloud[4,2,1] DISCRETE */);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,2,2] = 0.0
*/
void DroneSwarm_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->simulationInfo->realVarsPre[868] /* drones[1].lidar_cloud[4,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,2,2] = $PRE.drones[1].lidar_cloud[4,2,2]
*/
void DroneSwarm_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[868]] /* drones[1].lidar_cloud[4,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[868] /* drones[1].lidar_cloud[4,2,2] DISCRETE */);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,2,3] = 0.0
*/
void DroneSwarm_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  (data->simulationInfo->realVarsPre[869] /* drones[1].lidar_cloud[4,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,2,3] = $PRE.drones[1].lidar_cloud[4,2,3]
*/
void DroneSwarm_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[869]] /* drones[1].lidar_cloud[4,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[869] /* drones[1].lidar_cloud[4,2,3] DISCRETE */);
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,2,4] = 0.0
*/
void DroneSwarm_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  (data->simulationInfo->realVarsPre[870] /* drones[1].lidar_cloud[4,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,2,4] = $PRE.drones[1].lidar_cloud[4,2,4]
*/
void DroneSwarm_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[870]] /* drones[1].lidar_cloud[4,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[870] /* drones[1].lidar_cloud[4,2,4] DISCRETE */);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,2,5] = 0.0
*/
void DroneSwarm_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->simulationInfo->realVarsPre[871] /* drones[1].lidar_cloud[4,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,2,5] = $PRE.drones[1].lidar_cloud[4,2,5]
*/
void DroneSwarm_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[871]] /* drones[1].lidar_cloud[4,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[871] /* drones[1].lidar_cloud[4,2,5] DISCRETE */);
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,3,1] = 0.0
*/
void DroneSwarm_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  (data->simulationInfo->realVarsPre[872] /* drones[1].lidar_cloud[4,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 966;
}

/*
equation index: 967
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,3,1] = $PRE.drones[1].lidar_cloud[4,3,1]
*/
void DroneSwarm_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[872]] /* drones[1].lidar_cloud[4,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[872] /* drones[1].lidar_cloud[4,3,1] DISCRETE */);
  threadData->lastEquationSolved = 967;
}

/*
equation index: 968
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,3,2] = 0.0
*/
void DroneSwarm_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->simulationInfo->realVarsPre[873] /* drones[1].lidar_cloud[4,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 968;
}

/*
equation index: 969
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,3,2] = $PRE.drones[1].lidar_cloud[4,3,2]
*/
void DroneSwarm_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[873]] /* drones[1].lidar_cloud[4,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[873] /* drones[1].lidar_cloud[4,3,2] DISCRETE */);
  threadData->lastEquationSolved = 969;
}

/*
equation index: 970
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,3,3] = 0.0
*/
void DroneSwarm_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->simulationInfo->realVarsPre[874] /* drones[1].lidar_cloud[4,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 970;
}

/*
equation index: 971
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,3,3] = $PRE.drones[1].lidar_cloud[4,3,3]
*/
void DroneSwarm_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[874]] /* drones[1].lidar_cloud[4,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[874] /* drones[1].lidar_cloud[4,3,3] DISCRETE */);
  threadData->lastEquationSolved = 971;
}

/*
equation index: 972
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,3,4] = 0.0
*/
void DroneSwarm_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->simulationInfo->realVarsPre[875] /* drones[1].lidar_cloud[4,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 972;
}

/*
equation index: 973
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,3,4] = $PRE.drones[1].lidar_cloud[4,3,4]
*/
void DroneSwarm_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[875]] /* drones[1].lidar_cloud[4,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[875] /* drones[1].lidar_cloud[4,3,4] DISCRETE */);
  threadData->lastEquationSolved = 973;
}

/*
equation index: 974
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,3,5] = 0.0
*/
void DroneSwarm_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->simulationInfo->realVarsPre[876] /* drones[1].lidar_cloud[4,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 974;
}

/*
equation index: 975
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,3,5] = $PRE.drones[1].lidar_cloud[4,3,5]
*/
void DroneSwarm_eqFunction_975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[876]] /* drones[1].lidar_cloud[4,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[876] /* drones[1].lidar_cloud[4,3,5] DISCRETE */);
  threadData->lastEquationSolved = 975;
}

/*
equation index: 976
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,4,1] = 0.0
*/
void DroneSwarm_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  (data->simulationInfo->realVarsPre[877] /* drones[1].lidar_cloud[4,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,4,1] = $PRE.drones[1].lidar_cloud[4,4,1]
*/
void DroneSwarm_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[877]] /* drones[1].lidar_cloud[4,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[877] /* drones[1].lidar_cloud[4,4,1] DISCRETE */);
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,4,2] = 0.0
*/
void DroneSwarm_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  (data->simulationInfo->realVarsPre[878] /* drones[1].lidar_cloud[4,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,4,2] = $PRE.drones[1].lidar_cloud[4,4,2]
*/
void DroneSwarm_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[878]] /* drones[1].lidar_cloud[4,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[878] /* drones[1].lidar_cloud[4,4,2] DISCRETE */);
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,4,3] = 0.0
*/
void DroneSwarm_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->simulationInfo->realVarsPre[879] /* drones[1].lidar_cloud[4,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,4,3] = $PRE.drones[1].lidar_cloud[4,4,3]
*/
void DroneSwarm_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[879]] /* drones[1].lidar_cloud[4,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[879] /* drones[1].lidar_cloud[4,4,3] DISCRETE */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,4,4] = 0.0
*/
void DroneSwarm_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  (data->simulationInfo->realVarsPre[880] /* drones[1].lidar_cloud[4,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,4,4] = $PRE.drones[1].lidar_cloud[4,4,4]
*/
void DroneSwarm_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[880]] /* drones[1].lidar_cloud[4,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[880] /* drones[1].lidar_cloud[4,4,4] DISCRETE */);
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,4,5] = 0.0
*/
void DroneSwarm_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->simulationInfo->realVarsPre[881] /* drones[1].lidar_cloud[4,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,4,5] = $PRE.drones[1].lidar_cloud[4,4,5]
*/
void DroneSwarm_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[881]] /* drones[1].lidar_cloud[4,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[881] /* drones[1].lidar_cloud[4,4,5] DISCRETE */);
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,5,1] = 0.0
*/
void DroneSwarm_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->simulationInfo->realVarsPre[882] /* drones[1].lidar_cloud[4,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,5,1] = $PRE.drones[1].lidar_cloud[4,5,1]
*/
void DroneSwarm_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[882]] /* drones[1].lidar_cloud[4,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[882] /* drones[1].lidar_cloud[4,5,1] DISCRETE */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 988
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,5,2] = 0.0
*/
void DroneSwarm_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->simulationInfo->realVarsPre[883] /* drones[1].lidar_cloud[4,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,5,2] = $PRE.drones[1].lidar_cloud[4,5,2]
*/
void DroneSwarm_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[883]] /* drones[1].lidar_cloud[4,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[883] /* drones[1].lidar_cloud[4,5,2] DISCRETE */);
  threadData->lastEquationSolved = 989;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,5,3] = 0.0
*/
void DroneSwarm_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  (data->simulationInfo->realVarsPre[884] /* drones[1].lidar_cloud[4,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 990;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,5,3] = $PRE.drones[1].lidar_cloud[4,5,3]
*/
void DroneSwarm_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[884]] /* drones[1].lidar_cloud[4,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[884] /* drones[1].lidar_cloud[4,5,3] DISCRETE */);
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,5,4] = 0.0
*/
void DroneSwarm_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->simulationInfo->realVarsPre[885] /* drones[1].lidar_cloud[4,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 992;
}

/*
equation index: 993
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,5,4] = $PRE.drones[1].lidar_cloud[4,5,4]
*/
void DroneSwarm_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[885]] /* drones[1].lidar_cloud[4,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[885] /* drones[1].lidar_cloud[4,5,4] DISCRETE */);
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[4,5,5] = 0.0
*/
void DroneSwarm_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  (data->simulationInfo->realVarsPre[886] /* drones[1].lidar_cloud[4,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 994;
}

/*
equation index: 995
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[4,5,5] = $PRE.drones[1].lidar_cloud[4,5,5]
*/
void DroneSwarm_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[886]] /* drones[1].lidar_cloud[4,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[886] /* drones[1].lidar_cloud[4,5,5] DISCRETE */);
  threadData->lastEquationSolved = 995;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,1,1] = 0.0
*/
void DroneSwarm_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  (data->simulationInfo->realVarsPre[887] /* drones[1].lidar_cloud[5,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,1,1] = $PRE.drones[1].lidar_cloud[5,1,1]
*/
void DroneSwarm_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[887]] /* drones[1].lidar_cloud[5,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[887] /* drones[1].lidar_cloud[5,1,1] DISCRETE */);
  threadData->lastEquationSolved = 997;
}

/*
equation index: 998
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,1,2] = 0.0
*/
void DroneSwarm_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->simulationInfo->realVarsPre[888] /* drones[1].lidar_cloud[5,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 998;
}

/*
equation index: 999
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,1,2] = $PRE.drones[1].lidar_cloud[5,1,2]
*/
void DroneSwarm_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[888]] /* drones[1].lidar_cloud[5,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[888] /* drones[1].lidar_cloud[5,1,2] DISCRETE */);
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  (data->simulationInfo->realVarsPre[889] /* drones[1].lidar_cloud[5,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1000;
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,1,3] = $PRE.drones[1].lidar_cloud[5,1,3]
*/
void DroneSwarm_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[889]] /* drones[1].lidar_cloud[5,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[889] /* drones[1].lidar_cloud[5,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->simulationInfo->realVarsPre[890] /* drones[1].lidar_cloud[5,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,1,4] = $PRE.drones[1].lidar_cloud[5,1,4]
*/
void DroneSwarm_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[890]] /* drones[1].lidar_cloud[5,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[890] /* drones[1].lidar_cloud[5,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1003;
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->simulationInfo->realVarsPre[891] /* drones[1].lidar_cloud[5,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,1,5] = $PRE.drones[1].lidar_cloud[5,1,5]
*/
void DroneSwarm_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* drones[1].lidar_cloud[5,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[891] /* drones[1].lidar_cloud[5,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1005;
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->simulationInfo->realVarsPre[892] /* drones[1].lidar_cloud[5,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,2,1] = $PRE.drones[1].lidar_cloud[5,2,1]
*/
void DroneSwarm_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[892]] /* drones[1].lidar_cloud[5,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[892] /* drones[1].lidar_cloud[5,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  (data->simulationInfo->realVarsPre[893] /* drones[1].lidar_cloud[5,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1008;
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,2,2] = $PRE.drones[1].lidar_cloud[5,2,2]
*/
void DroneSwarm_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[893]] /* drones[1].lidar_cloud[5,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[893] /* drones[1].lidar_cloud[5,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  (data->simulationInfo->realVarsPre[894] /* drones[1].lidar_cloud[5,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1010;
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,2,3] = $PRE.drones[1].lidar_cloud[5,2,3]
*/
void DroneSwarm_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* drones[1].lidar_cloud[5,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[894] /* drones[1].lidar_cloud[5,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->simulationInfo->realVarsPre[895] /* drones[1].lidar_cloud[5,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,2,4] = $PRE.drones[1].lidar_cloud[5,2,4]
*/
void DroneSwarm_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[895]] /* drones[1].lidar_cloud[5,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[895] /* drones[1].lidar_cloud[5,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1013;
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->simulationInfo->realVarsPre[896] /* drones[1].lidar_cloud[5,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,2,5] = $PRE.drones[1].lidar_cloud[5,2,5]
*/
void DroneSwarm_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[896]] /* drones[1].lidar_cloud[5,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[896] /* drones[1].lidar_cloud[5,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1015;
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  (data->simulationInfo->realVarsPre[897] /* drones[1].lidar_cloud[5,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,3,1] = $PRE.drones[1].lidar_cloud[5,3,1]
*/
void DroneSwarm_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[897]] /* drones[1].lidar_cloud[5,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[897] /* drones[1].lidar_cloud[5,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1017;
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1018};
  (data->simulationInfo->realVarsPre[898] /* drones[1].lidar_cloud[5,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1018;
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,3,2] = $PRE.drones[1].lidar_cloud[5,3,2]
*/
void DroneSwarm_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[898]] /* drones[1].lidar_cloud[5,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[898] /* drones[1].lidar_cloud[5,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->simulationInfo->realVarsPre[899] /* drones[1].lidar_cloud[5,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1020;
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,3,3] = $PRE.drones[1].lidar_cloud[5,3,3]
*/
void DroneSwarm_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[899]] /* drones[1].lidar_cloud[5,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[899] /* drones[1].lidar_cloud[5,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1021;
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  (data->simulationInfo->realVarsPre[900] /* drones[1].lidar_cloud[5,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1022;
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,3,4] = $PRE.drones[1].lidar_cloud[5,3,4]
*/
void DroneSwarm_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[900]] /* drones[1].lidar_cloud[5,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[900] /* drones[1].lidar_cloud[5,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1023;
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  (data->simulationInfo->realVarsPre[901] /* drones[1].lidar_cloud[5,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,3,5] = $PRE.drones[1].lidar_cloud[5,3,5]
*/
void DroneSwarm_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[901]] /* drones[1].lidar_cloud[5,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[901] /* drones[1].lidar_cloud[5,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->simulationInfo->realVarsPre[902] /* drones[1].lidar_cloud[5,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,4,1] = $PRE.drones[1].lidar_cloud[5,4,1]
*/
void DroneSwarm_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[902]] /* drones[1].lidar_cloud[5,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[902] /* drones[1].lidar_cloud[5,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->simulationInfo->realVarsPre[903] /* drones[1].lidar_cloud[5,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,4,2] = $PRE.drones[1].lidar_cloud[5,4,2]
*/
void DroneSwarm_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* drones[1].lidar_cloud[5,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[903] /* drones[1].lidar_cloud[5,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  (data->simulationInfo->realVarsPre[904] /* drones[1].lidar_cloud[5,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1030;
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,4,3] = $PRE.drones[1].lidar_cloud[5,4,3]
*/
void DroneSwarm_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* drones[1].lidar_cloud[5,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[904] /* drones[1].lidar_cloud[5,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1031;
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->simulationInfo->realVarsPre[905] /* drones[1].lidar_cloud[5,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1032;
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,4,4] = $PRE.drones[1].lidar_cloud[5,4,4]
*/
void DroneSwarm_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* drones[1].lidar_cloud[5,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[905] /* drones[1].lidar_cloud[5,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1033;
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1034};
  (data->simulationInfo->realVarsPre[906] /* drones[1].lidar_cloud[5,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1034;
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,4,5] = $PRE.drones[1].lidar_cloud[5,4,5]
*/
void DroneSwarm_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* drones[1].lidar_cloud[5,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[906] /* drones[1].lidar_cloud[5,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1035;
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  (data->simulationInfo->realVarsPre[907] /* drones[1].lidar_cloud[5,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1036;
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,5,1] = $PRE.drones[1].lidar_cloud[5,5,1]
*/
void DroneSwarm_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* drones[1].lidar_cloud[5,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[907] /* drones[1].lidar_cloud[5,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1037;
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1038};
  (data->simulationInfo->realVarsPre[908] /* drones[1].lidar_cloud[5,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1038;
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,5,2] = $PRE.drones[1].lidar_cloud[5,5,2]
*/
void DroneSwarm_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* drones[1].lidar_cloud[5,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[908] /* drones[1].lidar_cloud[5,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1039;
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  (data->simulationInfo->realVarsPre[909] /* drones[1].lidar_cloud[5,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,5,3] = $PRE.drones[1].lidar_cloud[5,5,3]
*/
void DroneSwarm_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* drones[1].lidar_cloud[5,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[909] /* drones[1].lidar_cloud[5,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  (data->simulationInfo->realVarsPre[910] /* drones[1].lidar_cloud[5,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,5,4] = $PRE.drones[1].lidar_cloud[5,5,4]
*/
void DroneSwarm_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* drones[1].lidar_cloud[5,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[910] /* drones[1].lidar_cloud[5,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
$PRE.drones[1].lidar_cloud[5,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  (data->simulationInfo->realVarsPre[911] /* drones[1].lidar_cloud[5,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
drones[1].lidar_cloud[5,5,5] = $PRE.drones[1].lidar_cloud[5,5,5]
*/
void DroneSwarm_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[911]] /* drones[1].lidar_cloud[5,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[911] /* drones[1].lidar_cloud[5,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1046};
  (data->simulationInfo->realVarsPre[912] /* drones[2].lidar_cloud[1,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,1,1] = $PRE.drones[2].lidar_cloud[1,1,1]
*/
void DroneSwarm_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[912]] /* drones[2].lidar_cloud[1,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[912] /* drones[2].lidar_cloud[1,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  (data->simulationInfo->realVarsPre[913] /* drones[2].lidar_cloud[1,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,1,2] = $PRE.drones[2].lidar_cloud[1,1,2]
*/
void DroneSwarm_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[913]] /* drones[2].lidar_cloud[1,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[913] /* drones[2].lidar_cloud[1,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1050};
  (data->simulationInfo->realVarsPre[914] /* drones[2].lidar_cloud[1,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,1,3] = $PRE.drones[2].lidar_cloud[1,1,3]
*/
void DroneSwarm_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[914]] /* drones[2].lidar_cloud[1,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[914] /* drones[2].lidar_cloud[1,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  (data->simulationInfo->realVarsPre[915] /* drones[2].lidar_cloud[1,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,1,4] = $PRE.drones[2].lidar_cloud[1,1,4]
*/
void DroneSwarm_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[915]] /* drones[2].lidar_cloud[1,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[915] /* drones[2].lidar_cloud[1,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  (data->simulationInfo->realVarsPre[916] /* drones[2].lidar_cloud[1,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,1,5] = $PRE.drones[2].lidar_cloud[1,1,5]
*/
void DroneSwarm_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[916]] /* drones[2].lidar_cloud[1,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[916] /* drones[2].lidar_cloud[1,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1055;
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1056};
  (data->simulationInfo->realVarsPre[917] /* drones[2].lidar_cloud[1,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1056;
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,2,1] = $PRE.drones[2].lidar_cloud[1,2,1]
*/
void DroneSwarm_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* drones[2].lidar_cloud[1,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[917] /* drones[2].lidar_cloud[1,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1057;
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->simulationInfo->realVarsPre[918] /* drones[2].lidar_cloud[1,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1058;
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,2,2] = $PRE.drones[2].lidar_cloud[1,2,2]
*/
void DroneSwarm_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[918]] /* drones[2].lidar_cloud[1,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[918] /* drones[2].lidar_cloud[1,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1059;
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  (data->simulationInfo->realVarsPre[919] /* drones[2].lidar_cloud[1,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1060;
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,2,3] = $PRE.drones[2].lidar_cloud[1,2,3]
*/
void DroneSwarm_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* drones[2].lidar_cloud[1,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[919] /* drones[2].lidar_cloud[1,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1061;
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->simulationInfo->realVarsPre[920] /* drones[2].lidar_cloud[1,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1062;
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,2,4] = $PRE.drones[2].lidar_cloud[1,2,4]
*/
void DroneSwarm_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* drones[2].lidar_cloud[1,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[920] /* drones[2].lidar_cloud[1,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1063;
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1064};
  (data->simulationInfo->realVarsPre[921] /* drones[2].lidar_cloud[1,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1064;
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,2,5] = $PRE.drones[2].lidar_cloud[1,2,5]
*/
void DroneSwarm_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* drones[2].lidar_cloud[1,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[921] /* drones[2].lidar_cloud[1,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  (data->simulationInfo->realVarsPre[922] /* drones[2].lidar_cloud[1,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,3,1] = $PRE.drones[2].lidar_cloud[1,3,1]
*/
void DroneSwarm_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* drones[2].lidar_cloud[1,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[922] /* drones[2].lidar_cloud[1,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->simulationInfo->realVarsPre[923] /* drones[2].lidar_cloud[1,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,3,2] = $PRE.drones[2].lidar_cloud[1,3,2]
*/
void DroneSwarm_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* drones[2].lidar_cloud[1,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[923] /* drones[2].lidar_cloud[1,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  (data->simulationInfo->realVarsPre[924] /* drones[2].lidar_cloud[1,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,3,3] = $PRE.drones[2].lidar_cloud[1,3,3]
*/
void DroneSwarm_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* drones[2].lidar_cloud[1,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[924] /* drones[2].lidar_cloud[1,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  (data->simulationInfo->realVarsPre[925] /* drones[2].lidar_cloud[1,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,3,4] = $PRE.drones[2].lidar_cloud[1,3,4]
*/
void DroneSwarm_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* drones[2].lidar_cloud[1,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[925] /* drones[2].lidar_cloud[1,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  (data->simulationInfo->realVarsPre[926] /* drones[2].lidar_cloud[1,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,3,5] = $PRE.drones[2].lidar_cloud[1,3,5]
*/
void DroneSwarm_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[926]] /* drones[2].lidar_cloud[1,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[926] /* drones[2].lidar_cloud[1,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  (data->simulationInfo->realVarsPre[927] /* drones[2].lidar_cloud[1,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,4,1] = $PRE.drones[2].lidar_cloud[1,4,1]
*/
void DroneSwarm_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[927]] /* drones[2].lidar_cloud[1,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[927] /* drones[2].lidar_cloud[1,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->simulationInfo->realVarsPre[928] /* drones[2].lidar_cloud[1,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,4,2] = $PRE.drones[2].lidar_cloud[1,4,2]
*/
void DroneSwarm_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[928]] /* drones[2].lidar_cloud[1,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[928] /* drones[2].lidar_cloud[1,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  (data->simulationInfo->realVarsPre[929] /* drones[2].lidar_cloud[1,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,4,3] = $PRE.drones[2].lidar_cloud[1,4,3]
*/
void DroneSwarm_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[929]] /* drones[2].lidar_cloud[1,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[929] /* drones[2].lidar_cloud[1,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->simulationInfo->realVarsPre[930] /* drones[2].lidar_cloud[1,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,4,4] = $PRE.drones[2].lidar_cloud[1,4,4]
*/
void DroneSwarm_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[930]] /* drones[2].lidar_cloud[1,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[930] /* drones[2].lidar_cloud[1,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  (data->simulationInfo->realVarsPre[931] /* drones[2].lidar_cloud[1,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1084;
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,4,5] = $PRE.drones[2].lidar_cloud[1,4,5]
*/
void DroneSwarm_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[931]] /* drones[2].lidar_cloud[1,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[931] /* drones[2].lidar_cloud[1,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  (data->simulationInfo->realVarsPre[932] /* drones[2].lidar_cloud[1,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,5,1] = $PRE.drones[2].lidar_cloud[1,5,1]
*/
void DroneSwarm_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[932]] /* drones[2].lidar_cloud[1,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[932] /* drones[2].lidar_cloud[1,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  (data->simulationInfo->realVarsPre[933] /* drones[2].lidar_cloud[1,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,5,2] = $PRE.drones[2].lidar_cloud[1,5,2]
*/
void DroneSwarm_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[933]] /* drones[2].lidar_cloud[1,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[933] /* drones[2].lidar_cloud[1,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  (data->simulationInfo->realVarsPre[934] /* drones[2].lidar_cloud[1,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,5,3] = $PRE.drones[2].lidar_cloud[1,5,3]
*/
void DroneSwarm_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[934]] /* drones[2].lidar_cloud[1,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[934] /* drones[2].lidar_cloud[1,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  (data->simulationInfo->realVarsPre[935] /* drones[2].lidar_cloud[1,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,5,4] = $PRE.drones[2].lidar_cloud[1,5,4]
*/
void DroneSwarm_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[935]] /* drones[2].lidar_cloud[1,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[935] /* drones[2].lidar_cloud[1,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[1,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  (data->simulationInfo->realVarsPre[936] /* drones[2].lidar_cloud[1,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1095
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[1,5,5] = $PRE.drones[2].lidar_cloud[1,5,5]
*/
void DroneSwarm_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[936]] /* drones[2].lidar_cloud[1,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[936] /* drones[2].lidar_cloud[1,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  (data->simulationInfo->realVarsPre[937] /* drones[2].lidar_cloud[2,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,1,1] = $PRE.drones[2].lidar_cloud[2,1,1]
*/
void DroneSwarm_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[937]] /* drones[2].lidar_cloud[2,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[937] /* drones[2].lidar_cloud[2,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  (data->simulationInfo->realVarsPre[938] /* drones[2].lidar_cloud[2,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,1,2] = $PRE.drones[2].lidar_cloud[2,1,2]
*/
void DroneSwarm_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[938]] /* drones[2].lidar_cloud[2,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[938] /* drones[2].lidar_cloud[2,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  (data->simulationInfo->realVarsPre[939] /* drones[2].lidar_cloud[2,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,1,3] = $PRE.drones[2].lidar_cloud[2,1,3]
*/
void DroneSwarm_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[939]] /* drones[2].lidar_cloud[2,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[939] /* drones[2].lidar_cloud[2,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  (data->simulationInfo->realVarsPre[940] /* drones[2].lidar_cloud[2,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,1,4] = $PRE.drones[2].lidar_cloud[2,1,4]
*/
void DroneSwarm_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[940]] /* drones[2].lidar_cloud[2,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[940] /* drones[2].lidar_cloud[2,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  (data->simulationInfo->realVarsPre[941] /* drones[2].lidar_cloud[2,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,1,5] = $PRE.drones[2].lidar_cloud[2,1,5]
*/
void DroneSwarm_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* drones[2].lidar_cloud[2,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[941] /* drones[2].lidar_cloud[2,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  (data->simulationInfo->realVarsPre[942] /* drones[2].lidar_cloud[2,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,2,1] = $PRE.drones[2].lidar_cloud[2,2,1]
*/
void DroneSwarm_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[942]] /* drones[2].lidar_cloud[2,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[942] /* drones[2].lidar_cloud[2,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  (data->simulationInfo->realVarsPre[943] /* drones[2].lidar_cloud[2,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,2,2] = $PRE.drones[2].lidar_cloud[2,2,2]
*/
void DroneSwarm_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[943]] /* drones[2].lidar_cloud[2,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[943] /* drones[2].lidar_cloud[2,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  (data->simulationInfo->realVarsPre[944] /* drones[2].lidar_cloud[2,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,2,3] = $PRE.drones[2].lidar_cloud[2,2,3]
*/
void DroneSwarm_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[944]] /* drones[2].lidar_cloud[2,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[944] /* drones[2].lidar_cloud[2,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1112};
  (data->simulationInfo->realVarsPre[945] /* drones[2].lidar_cloud[2,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1112;
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,2,4] = $PRE.drones[2].lidar_cloud[2,2,4]
*/
void DroneSwarm_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[945]] /* drones[2].lidar_cloud[2,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[945] /* drones[2].lidar_cloud[2,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1113;
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1114};
  (data->simulationInfo->realVarsPre[946] /* drones[2].lidar_cloud[2,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1114;
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,2,5] = $PRE.drones[2].lidar_cloud[2,2,5]
*/
void DroneSwarm_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[946]] /* drones[2].lidar_cloud[2,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[946] /* drones[2].lidar_cloud[2,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1115;
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1116};
  (data->simulationInfo->realVarsPre[947] /* drones[2].lidar_cloud[2,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1116;
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,3,1] = $PRE.drones[2].lidar_cloud[2,3,1]
*/
void DroneSwarm_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[947]] /* drones[2].lidar_cloud[2,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[947] /* drones[2].lidar_cloud[2,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1117;
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1118};
  (data->simulationInfo->realVarsPre[948] /* drones[2].lidar_cloud[2,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1118;
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,3,2] = $PRE.drones[2].lidar_cloud[2,3,2]
*/
void DroneSwarm_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[948]] /* drones[2].lidar_cloud[2,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[948] /* drones[2].lidar_cloud[2,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1119;
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1120};
  (data->simulationInfo->realVarsPre[949] /* drones[2].lidar_cloud[2,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1120;
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,3,3] = $PRE.drones[2].lidar_cloud[2,3,3]
*/
void DroneSwarm_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[949]] /* drones[2].lidar_cloud[2,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[949] /* drones[2].lidar_cloud[2,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1121;
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1122};
  (data->simulationInfo->realVarsPre[950] /* drones[2].lidar_cloud[2,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1122;
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,3,4] = $PRE.drones[2].lidar_cloud[2,3,4]
*/
void DroneSwarm_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[950]] /* drones[2].lidar_cloud[2,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[950] /* drones[2].lidar_cloud[2,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1123;
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1124};
  (data->simulationInfo->realVarsPre[951] /* drones[2].lidar_cloud[2,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1124;
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,3,5] = $PRE.drones[2].lidar_cloud[2,3,5]
*/
void DroneSwarm_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[951]] /* drones[2].lidar_cloud[2,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[951] /* drones[2].lidar_cloud[2,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1125;
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1126};
  (data->simulationInfo->realVarsPre[952] /* drones[2].lidar_cloud[2,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1126;
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,4,1] = $PRE.drones[2].lidar_cloud[2,4,1]
*/
void DroneSwarm_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* drones[2].lidar_cloud[2,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[952] /* drones[2].lidar_cloud[2,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1127;
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1128};
  (data->simulationInfo->realVarsPre[953] /* drones[2].lidar_cloud[2,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1128;
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,4,2] = $PRE.drones[2].lidar_cloud[2,4,2]
*/
void DroneSwarm_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* drones[2].lidar_cloud[2,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[953] /* drones[2].lidar_cloud[2,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1129;
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1130};
  (data->simulationInfo->realVarsPre[954] /* drones[2].lidar_cloud[2,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1130;
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,4,3] = $PRE.drones[2].lidar_cloud[2,4,3]
*/
void DroneSwarm_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* drones[2].lidar_cloud[2,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[954] /* drones[2].lidar_cloud[2,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1131;
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1132};
  (data->simulationInfo->realVarsPre[955] /* drones[2].lidar_cloud[2,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1132;
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,4,4] = $PRE.drones[2].lidar_cloud[2,4,4]
*/
void DroneSwarm_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* drones[2].lidar_cloud[2,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[955] /* drones[2].lidar_cloud[2,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1133;
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1134};
  (data->simulationInfo->realVarsPre[956] /* drones[2].lidar_cloud[2,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1134;
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,4,5] = $PRE.drones[2].lidar_cloud[2,4,5]
*/
void DroneSwarm_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[956]] /* drones[2].lidar_cloud[2,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[956] /* drones[2].lidar_cloud[2,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1135;
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1136};
  (data->simulationInfo->realVarsPre[957] /* drones[2].lidar_cloud[2,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1136;
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,5,1] = $PRE.drones[2].lidar_cloud[2,5,1]
*/
void DroneSwarm_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[957]] /* drones[2].lidar_cloud[2,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[957] /* drones[2].lidar_cloud[2,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1137;
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1138};
  (data->simulationInfo->realVarsPre[958] /* drones[2].lidar_cloud[2,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1138;
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,5,2] = $PRE.drones[2].lidar_cloud[2,5,2]
*/
void DroneSwarm_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[958]] /* drones[2].lidar_cloud[2,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[958] /* drones[2].lidar_cloud[2,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1139;
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1140};
  (data->simulationInfo->realVarsPre[959] /* drones[2].lidar_cloud[2,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1140;
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,5,3] = $PRE.drones[2].lidar_cloud[2,5,3]
*/
void DroneSwarm_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[959]] /* drones[2].lidar_cloud[2,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[959] /* drones[2].lidar_cloud[2,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1141;
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1142};
  (data->simulationInfo->realVarsPre[960] /* drones[2].lidar_cloud[2,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1142;
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,5,4] = $PRE.drones[2].lidar_cloud[2,5,4]
*/
void DroneSwarm_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[960]] /* drones[2].lidar_cloud[2,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[960] /* drones[2].lidar_cloud[2,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1143;
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[2,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1144};
  (data->simulationInfo->realVarsPre[961] /* drones[2].lidar_cloud[2,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1144;
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[2,5,5] = $PRE.drones[2].lidar_cloud[2,5,5]
*/
void DroneSwarm_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[961]] /* drones[2].lidar_cloud[2,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[961] /* drones[2].lidar_cloud[2,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1145;
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1146};
  (data->simulationInfo->realVarsPre[962] /* drones[2].lidar_cloud[3,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1146;
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,1,1] = $PRE.drones[2].lidar_cloud[3,1,1]
*/
void DroneSwarm_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[962]] /* drones[2].lidar_cloud[3,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[962] /* drones[2].lidar_cloud[3,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1147;
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1148};
  (data->simulationInfo->realVarsPre[963] /* drones[2].lidar_cloud[3,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1148;
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,1,2] = $PRE.drones[2].lidar_cloud[3,1,2]
*/
void DroneSwarm_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* drones[2].lidar_cloud[3,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[963] /* drones[2].lidar_cloud[3,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1149;
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1150};
  (data->simulationInfo->realVarsPre[964] /* drones[2].lidar_cloud[3,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1150;
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,1,3] = $PRE.drones[2].lidar_cloud[3,1,3]
*/
void DroneSwarm_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* drones[2].lidar_cloud[3,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[964] /* drones[2].lidar_cloud[3,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1151;
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1152};
  (data->simulationInfo->realVarsPre[965] /* drones[2].lidar_cloud[3,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1152;
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,1,4] = $PRE.drones[2].lidar_cloud[3,1,4]
*/
void DroneSwarm_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* drones[2].lidar_cloud[3,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[965] /* drones[2].lidar_cloud[3,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1153;
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1154};
  (data->simulationInfo->realVarsPre[966] /* drones[2].lidar_cloud[3,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1154;
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,1,5] = $PRE.drones[2].lidar_cloud[3,1,5]
*/
void DroneSwarm_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* drones[2].lidar_cloud[3,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[966] /* drones[2].lidar_cloud[3,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1155;
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1156};
  (data->simulationInfo->realVarsPre[967] /* drones[2].lidar_cloud[3,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1156;
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,2,1] = $PRE.drones[2].lidar_cloud[3,2,1]
*/
void DroneSwarm_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* drones[2].lidar_cloud[3,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[967] /* drones[2].lidar_cloud[3,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1157;
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1158};
  (data->simulationInfo->realVarsPre[968] /* drones[2].lidar_cloud[3,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1158;
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,2,2] = $PRE.drones[2].lidar_cloud[3,2,2]
*/
void DroneSwarm_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* drones[2].lidar_cloud[3,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[968] /* drones[2].lidar_cloud[3,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1159;
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1160};
  (data->simulationInfo->realVarsPre[969] /* drones[2].lidar_cloud[3,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1160;
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,2,3] = $PRE.drones[2].lidar_cloud[3,2,3]
*/
void DroneSwarm_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* drones[2].lidar_cloud[3,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[969] /* drones[2].lidar_cloud[3,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1161;
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1162};
  (data->simulationInfo->realVarsPre[970] /* drones[2].lidar_cloud[3,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1162;
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,2,4] = $PRE.drones[2].lidar_cloud[3,2,4]
*/
void DroneSwarm_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* drones[2].lidar_cloud[3,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[970] /* drones[2].lidar_cloud[3,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1163;
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1164};
  (data->simulationInfo->realVarsPre[971] /* drones[2].lidar_cloud[3,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1164;
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,2,5] = $PRE.drones[2].lidar_cloud[3,2,5]
*/
void DroneSwarm_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* drones[2].lidar_cloud[3,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[971] /* drones[2].lidar_cloud[3,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1165;
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1166};
  (data->simulationInfo->realVarsPre[972] /* drones[2].lidar_cloud[3,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1166;
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,3,1] = $PRE.drones[2].lidar_cloud[3,3,1]
*/
void DroneSwarm_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* drones[2].lidar_cloud[3,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[972] /* drones[2].lidar_cloud[3,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1167;
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1168};
  (data->simulationInfo->realVarsPre[973] /* drones[2].lidar_cloud[3,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1168;
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,3,2] = $PRE.drones[2].lidar_cloud[3,3,2]
*/
void DroneSwarm_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* drones[2].lidar_cloud[3,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[973] /* drones[2].lidar_cloud[3,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1169;
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1170};
  (data->simulationInfo->realVarsPre[974] /* drones[2].lidar_cloud[3,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1170;
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,3,3] = $PRE.drones[2].lidar_cloud[3,3,3]
*/
void DroneSwarm_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* drones[2].lidar_cloud[3,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[974] /* drones[2].lidar_cloud[3,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1171;
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1172};
  (data->simulationInfo->realVarsPre[975] /* drones[2].lidar_cloud[3,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1172;
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,3,4] = $PRE.drones[2].lidar_cloud[3,3,4]
*/
void DroneSwarm_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[975]] /* drones[2].lidar_cloud[3,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[975] /* drones[2].lidar_cloud[3,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1173;
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1174};
  (data->simulationInfo->realVarsPre[976] /* drones[2].lidar_cloud[3,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1174;
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,3,5] = $PRE.drones[2].lidar_cloud[3,3,5]
*/
void DroneSwarm_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[976]] /* drones[2].lidar_cloud[3,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[976] /* drones[2].lidar_cloud[3,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1175;
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1176};
  (data->simulationInfo->realVarsPre[977] /* drones[2].lidar_cloud[3,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1176;
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,4,1] = $PRE.drones[2].lidar_cloud[3,4,1]
*/
void DroneSwarm_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[977]] /* drones[2].lidar_cloud[3,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[977] /* drones[2].lidar_cloud[3,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1177;
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1178};
  (data->simulationInfo->realVarsPre[978] /* drones[2].lidar_cloud[3,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1178;
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,4,2] = $PRE.drones[2].lidar_cloud[3,4,2]
*/
void DroneSwarm_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* drones[2].lidar_cloud[3,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[978] /* drones[2].lidar_cloud[3,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1179;
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1180};
  (data->simulationInfo->realVarsPre[979] /* drones[2].lidar_cloud[3,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1180;
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,4,3] = $PRE.drones[2].lidar_cloud[3,4,3]
*/
void DroneSwarm_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* drones[2].lidar_cloud[3,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[979] /* drones[2].lidar_cloud[3,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1181;
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1182};
  (data->simulationInfo->realVarsPre[980] /* drones[2].lidar_cloud[3,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1182;
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,4,4] = $PRE.drones[2].lidar_cloud[3,4,4]
*/
void DroneSwarm_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* drones[2].lidar_cloud[3,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[980] /* drones[2].lidar_cloud[3,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1183;
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1184};
  (data->simulationInfo->realVarsPre[981] /* drones[2].lidar_cloud[3,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1184;
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,4,5] = $PRE.drones[2].lidar_cloud[3,4,5]
*/
void DroneSwarm_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[981]] /* drones[2].lidar_cloud[3,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[981] /* drones[2].lidar_cloud[3,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1185;
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1186};
  (data->simulationInfo->realVarsPre[982] /* drones[2].lidar_cloud[3,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1186;
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,5,1] = $PRE.drones[2].lidar_cloud[3,5,1]
*/
void DroneSwarm_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[982]] /* drones[2].lidar_cloud[3,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[982] /* drones[2].lidar_cloud[3,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1187;
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1188};
  (data->simulationInfo->realVarsPre[983] /* drones[2].lidar_cloud[3,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1188;
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,5,2] = $PRE.drones[2].lidar_cloud[3,5,2]
*/
void DroneSwarm_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[983]] /* drones[2].lidar_cloud[3,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[983] /* drones[2].lidar_cloud[3,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1189;
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1190};
  (data->simulationInfo->realVarsPre[984] /* drones[2].lidar_cloud[3,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1190;
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,5,3] = $PRE.drones[2].lidar_cloud[3,5,3]
*/
void DroneSwarm_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[984]] /* drones[2].lidar_cloud[3,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[984] /* drones[2].lidar_cloud[3,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1191;
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1192};
  (data->simulationInfo->realVarsPre[985] /* drones[2].lidar_cloud[3,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1192;
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,5,4] = $PRE.drones[2].lidar_cloud[3,5,4]
*/
void DroneSwarm_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[985]] /* drones[2].lidar_cloud[3,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[985] /* drones[2].lidar_cloud[3,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1193;
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[3,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1194};
  (data->simulationInfo->realVarsPre[986] /* drones[2].lidar_cloud[3,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1194;
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[3,5,5] = $PRE.drones[2].lidar_cloud[3,5,5]
*/
void DroneSwarm_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[986]] /* drones[2].lidar_cloud[3,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[986] /* drones[2].lidar_cloud[3,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1195;
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1196};
  (data->simulationInfo->realVarsPre[987] /* drones[2].lidar_cloud[4,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1196;
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,1,1] = $PRE.drones[2].lidar_cloud[4,1,1]
*/
void DroneSwarm_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[987]] /* drones[2].lidar_cloud[4,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[987] /* drones[2].lidar_cloud[4,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1197;
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1198};
  (data->simulationInfo->realVarsPre[988] /* drones[2].lidar_cloud[4,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1198;
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,1,2] = $PRE.drones[2].lidar_cloud[4,1,2]
*/
void DroneSwarm_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[988]] /* drones[2].lidar_cloud[4,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[988] /* drones[2].lidar_cloud[4,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1199;
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1200};
  (data->simulationInfo->realVarsPre[989] /* drones[2].lidar_cloud[4,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1200;
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,1,3] = $PRE.drones[2].lidar_cloud[4,1,3]
*/
void DroneSwarm_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[989]] /* drones[2].lidar_cloud[4,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[989] /* drones[2].lidar_cloud[4,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1201;
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1202};
  (data->simulationInfo->realVarsPre[990] /* drones[2].lidar_cloud[4,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1202;
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,1,4] = $PRE.drones[2].lidar_cloud[4,1,4]
*/
void DroneSwarm_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[990]] /* drones[2].lidar_cloud[4,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[990] /* drones[2].lidar_cloud[4,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1203;
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1204};
  (data->simulationInfo->realVarsPre[991] /* drones[2].lidar_cloud[4,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1204;
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,1,5] = $PRE.drones[2].lidar_cloud[4,1,5]
*/
void DroneSwarm_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[991]] /* drones[2].lidar_cloud[4,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[991] /* drones[2].lidar_cloud[4,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1205;
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1206};
  (data->simulationInfo->realVarsPre[992] /* drones[2].lidar_cloud[4,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1206;
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,2,1] = $PRE.drones[2].lidar_cloud[4,2,1]
*/
void DroneSwarm_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[992]] /* drones[2].lidar_cloud[4,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[992] /* drones[2].lidar_cloud[4,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1207;
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1208};
  (data->simulationInfo->realVarsPre[993] /* drones[2].lidar_cloud[4,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1208;
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,2,2] = $PRE.drones[2].lidar_cloud[4,2,2]
*/
void DroneSwarm_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[993]] /* drones[2].lidar_cloud[4,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[993] /* drones[2].lidar_cloud[4,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1209;
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1210};
  (data->simulationInfo->realVarsPre[994] /* drones[2].lidar_cloud[4,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1210;
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,2,3] = $PRE.drones[2].lidar_cloud[4,2,3]
*/
void DroneSwarm_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[994]] /* drones[2].lidar_cloud[4,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[994] /* drones[2].lidar_cloud[4,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1211;
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1212};
  (data->simulationInfo->realVarsPre[995] /* drones[2].lidar_cloud[4,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1212;
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,2,4] = $PRE.drones[2].lidar_cloud[4,2,4]
*/
void DroneSwarm_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[995]] /* drones[2].lidar_cloud[4,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[995] /* drones[2].lidar_cloud[4,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1213;
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1214};
  (data->simulationInfo->realVarsPre[996] /* drones[2].lidar_cloud[4,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1214;
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,2,5] = $PRE.drones[2].lidar_cloud[4,2,5]
*/
void DroneSwarm_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[996]] /* drones[2].lidar_cloud[4,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[996] /* drones[2].lidar_cloud[4,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1215;
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1216};
  (data->simulationInfo->realVarsPre[997] /* drones[2].lidar_cloud[4,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1216;
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,3,1] = $PRE.drones[2].lidar_cloud[4,3,1]
*/
void DroneSwarm_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[997]] /* drones[2].lidar_cloud[4,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[997] /* drones[2].lidar_cloud[4,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1217;
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1218};
  (data->simulationInfo->realVarsPre[998] /* drones[2].lidar_cloud[4,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1218;
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,3,2] = $PRE.drones[2].lidar_cloud[4,3,2]
*/
void DroneSwarm_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[998]] /* drones[2].lidar_cloud[4,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[998] /* drones[2].lidar_cloud[4,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1219;
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1220};
  (data->simulationInfo->realVarsPre[999] /* drones[2].lidar_cloud[4,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1220;
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,3,3] = $PRE.drones[2].lidar_cloud[4,3,3]
*/
void DroneSwarm_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* drones[2].lidar_cloud[4,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[999] /* drones[2].lidar_cloud[4,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1221;
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1222};
  (data->simulationInfo->realVarsPre[1000] /* drones[2].lidar_cloud[4,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1222;
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,3,4] = $PRE.drones[2].lidar_cloud[4,3,4]
*/
void DroneSwarm_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* drones[2].lidar_cloud[4,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1000] /* drones[2].lidar_cloud[4,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1223;
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1224};
  (data->simulationInfo->realVarsPre[1001] /* drones[2].lidar_cloud[4,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1224;
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,3,5] = $PRE.drones[2].lidar_cloud[4,3,5]
*/
void DroneSwarm_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* drones[2].lidar_cloud[4,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1001] /* drones[2].lidar_cloud[4,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1225;
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->realVarsPre[1002] /* drones[2].lidar_cloud[4,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1226;
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,4,1] = $PRE.drones[2].lidar_cloud[4,4,1]
*/
void DroneSwarm_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* drones[2].lidar_cloud[4,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1002] /* drones[2].lidar_cloud[4,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1227;
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1228};
  (data->simulationInfo->realVarsPre[1003] /* drones[2].lidar_cloud[4,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1228;
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,4,2] = $PRE.drones[2].lidar_cloud[4,4,2]
*/
void DroneSwarm_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1003]] /* drones[2].lidar_cloud[4,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1003] /* drones[2].lidar_cloud[4,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1229;
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1230};
  (data->simulationInfo->realVarsPre[1004] /* drones[2].lidar_cloud[4,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1230;
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,4,3] = $PRE.drones[2].lidar_cloud[4,4,3]
*/
void DroneSwarm_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* drones[2].lidar_cloud[4,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1004] /* drones[2].lidar_cloud[4,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1231;
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1232};
  (data->simulationInfo->realVarsPre[1005] /* drones[2].lidar_cloud[4,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1232;
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,4,4] = $PRE.drones[2].lidar_cloud[4,4,4]
*/
void DroneSwarm_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* drones[2].lidar_cloud[4,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1005] /* drones[2].lidar_cloud[4,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1233;
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1234};
  (data->simulationInfo->realVarsPre[1006] /* drones[2].lidar_cloud[4,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1234;
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,4,5] = $PRE.drones[2].lidar_cloud[4,4,5]
*/
void DroneSwarm_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* drones[2].lidar_cloud[4,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1006] /* drones[2].lidar_cloud[4,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1235;
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1236};
  (data->simulationInfo->realVarsPre[1007] /* drones[2].lidar_cloud[4,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1236;
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,5,1] = $PRE.drones[2].lidar_cloud[4,5,1]
*/
void DroneSwarm_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* drones[2].lidar_cloud[4,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1007] /* drones[2].lidar_cloud[4,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1237;
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1238};
  (data->simulationInfo->realVarsPre[1008] /* drones[2].lidar_cloud[4,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1238;
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,5,2] = $PRE.drones[2].lidar_cloud[4,5,2]
*/
void DroneSwarm_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1008]] /* drones[2].lidar_cloud[4,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1008] /* drones[2].lidar_cloud[4,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1239;
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1240};
  (data->simulationInfo->realVarsPre[1009] /* drones[2].lidar_cloud[4,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1240;
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,5,3] = $PRE.drones[2].lidar_cloud[4,5,3]
*/
void DroneSwarm_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1009]] /* drones[2].lidar_cloud[4,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1009] /* drones[2].lidar_cloud[4,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1241;
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1242};
  (data->simulationInfo->realVarsPre[1010] /* drones[2].lidar_cloud[4,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1242;
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,5,4] = $PRE.drones[2].lidar_cloud[4,5,4]
*/
void DroneSwarm_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1010]] /* drones[2].lidar_cloud[4,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1010] /* drones[2].lidar_cloud[4,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1243;
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[4,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1244};
  (data->simulationInfo->realVarsPre[1011] /* drones[2].lidar_cloud[4,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1244;
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[4,5,5] = $PRE.drones[2].lidar_cloud[4,5,5]
*/
void DroneSwarm_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1011]] /* drones[2].lidar_cloud[4,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1011] /* drones[2].lidar_cloud[4,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1245;
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1246};
  (data->simulationInfo->realVarsPre[1012] /* drones[2].lidar_cloud[5,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1246;
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,1,1] = $PRE.drones[2].lidar_cloud[5,1,1]
*/
void DroneSwarm_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1012]] /* drones[2].lidar_cloud[5,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1012] /* drones[2].lidar_cloud[5,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1247;
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1248};
  (data->simulationInfo->realVarsPre[1013] /* drones[2].lidar_cloud[5,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1248;
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,1,2] = $PRE.drones[2].lidar_cloud[5,1,2]
*/
void DroneSwarm_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1013]] /* drones[2].lidar_cloud[5,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1013] /* drones[2].lidar_cloud[5,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1249;
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1250};
  (data->simulationInfo->realVarsPre[1014] /* drones[2].lidar_cloud[5,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1250;
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,1,3] = $PRE.drones[2].lidar_cloud[5,1,3]
*/
void DroneSwarm_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1014]] /* drones[2].lidar_cloud[5,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1014] /* drones[2].lidar_cloud[5,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1251;
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1252};
  (data->simulationInfo->realVarsPre[1015] /* drones[2].lidar_cloud[5,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1252;
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,1,4] = $PRE.drones[2].lidar_cloud[5,1,4]
*/
void DroneSwarm_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1015]] /* drones[2].lidar_cloud[5,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1015] /* drones[2].lidar_cloud[5,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1253;
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1254};
  (data->simulationInfo->realVarsPre[1016] /* drones[2].lidar_cloud[5,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1254;
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,1,5] = $PRE.drones[2].lidar_cloud[5,1,5]
*/
void DroneSwarm_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1016]] /* drones[2].lidar_cloud[5,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1016] /* drones[2].lidar_cloud[5,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1255;
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1256};
  (data->simulationInfo->realVarsPre[1017] /* drones[2].lidar_cloud[5,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1256;
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,2,1] = $PRE.drones[2].lidar_cloud[5,2,1]
*/
void DroneSwarm_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1017]] /* drones[2].lidar_cloud[5,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1017] /* drones[2].lidar_cloud[5,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1257;
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1258};
  (data->simulationInfo->realVarsPre[1018] /* drones[2].lidar_cloud[5,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1258;
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,2,2] = $PRE.drones[2].lidar_cloud[5,2,2]
*/
void DroneSwarm_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1018]] /* drones[2].lidar_cloud[5,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1018] /* drones[2].lidar_cloud[5,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1259;
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1260};
  (data->simulationInfo->realVarsPre[1019] /* drones[2].lidar_cloud[5,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1260;
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,2,3] = $PRE.drones[2].lidar_cloud[5,2,3]
*/
void DroneSwarm_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1019]] /* drones[2].lidar_cloud[5,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1019] /* drones[2].lidar_cloud[5,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1261;
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realVarsPre[1020] /* drones[2].lidar_cloud[5,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1262;
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,2,4] = $PRE.drones[2].lidar_cloud[5,2,4]
*/
void DroneSwarm_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1020]] /* drones[2].lidar_cloud[5,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1020] /* drones[2].lidar_cloud[5,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1263;
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realVarsPre[1021] /* drones[2].lidar_cloud[5,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1264;
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,2,5] = $PRE.drones[2].lidar_cloud[5,2,5]
*/
void DroneSwarm_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1021]] /* drones[2].lidar_cloud[5,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1021] /* drones[2].lidar_cloud[5,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1265;
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1266};
  (data->simulationInfo->realVarsPre[1022] /* drones[2].lidar_cloud[5,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1266;
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,3,1] = $PRE.drones[2].lidar_cloud[5,3,1]
*/
void DroneSwarm_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1022]] /* drones[2].lidar_cloud[5,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1022] /* drones[2].lidar_cloud[5,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1267;
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1268};
  (data->simulationInfo->realVarsPre[1023] /* drones[2].lidar_cloud[5,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1268;
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,3,2] = $PRE.drones[2].lidar_cloud[5,3,2]
*/
void DroneSwarm_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1023]] /* drones[2].lidar_cloud[5,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1023] /* drones[2].lidar_cloud[5,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1269;
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1270};
  (data->simulationInfo->realVarsPre[1024] /* drones[2].lidar_cloud[5,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1270;
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,3,3] = $PRE.drones[2].lidar_cloud[5,3,3]
*/
void DroneSwarm_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1024]] /* drones[2].lidar_cloud[5,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1024] /* drones[2].lidar_cloud[5,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1271;
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1272};
  (data->simulationInfo->realVarsPre[1025] /* drones[2].lidar_cloud[5,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1272;
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,3,4] = $PRE.drones[2].lidar_cloud[5,3,4]
*/
void DroneSwarm_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1025]] /* drones[2].lidar_cloud[5,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1025] /* drones[2].lidar_cloud[5,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1273;
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1274};
  (data->simulationInfo->realVarsPre[1026] /* drones[2].lidar_cloud[5,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1274;
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,3,5] = $PRE.drones[2].lidar_cloud[5,3,5]
*/
void DroneSwarm_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1026]] /* drones[2].lidar_cloud[5,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1026] /* drones[2].lidar_cloud[5,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1275;
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1276};
  (data->simulationInfo->realVarsPre[1027] /* drones[2].lidar_cloud[5,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1276;
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,4,1] = $PRE.drones[2].lidar_cloud[5,4,1]
*/
void DroneSwarm_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1027]] /* drones[2].lidar_cloud[5,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1027] /* drones[2].lidar_cloud[5,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1277;
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1278};
  (data->simulationInfo->realVarsPre[1028] /* drones[2].lidar_cloud[5,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1278;
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,4,2] = $PRE.drones[2].lidar_cloud[5,4,2]
*/
void DroneSwarm_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1028]] /* drones[2].lidar_cloud[5,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1028] /* drones[2].lidar_cloud[5,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1279;
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1280};
  (data->simulationInfo->realVarsPre[1029] /* drones[2].lidar_cloud[5,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1280;
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,4,3] = $PRE.drones[2].lidar_cloud[5,4,3]
*/
void DroneSwarm_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1029]] /* drones[2].lidar_cloud[5,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1029] /* drones[2].lidar_cloud[5,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1281;
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1282};
  (data->simulationInfo->realVarsPre[1030] /* drones[2].lidar_cloud[5,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1282;
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,4,4] = $PRE.drones[2].lidar_cloud[5,4,4]
*/
void DroneSwarm_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1030]] /* drones[2].lidar_cloud[5,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1030] /* drones[2].lidar_cloud[5,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1283;
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1284};
  (data->simulationInfo->realVarsPre[1031] /* drones[2].lidar_cloud[5,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1284;
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,4,5] = $PRE.drones[2].lidar_cloud[5,4,5]
*/
void DroneSwarm_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1031]] /* drones[2].lidar_cloud[5,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1031] /* drones[2].lidar_cloud[5,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1285;
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1286};
  (data->simulationInfo->realVarsPre[1032] /* drones[2].lidar_cloud[5,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1286;
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,5,1] = $PRE.drones[2].lidar_cloud[5,5,1]
*/
void DroneSwarm_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1032]] /* drones[2].lidar_cloud[5,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1032] /* drones[2].lidar_cloud[5,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1287;
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1288};
  (data->simulationInfo->realVarsPre[1033] /* drones[2].lidar_cloud[5,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1288;
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,5,2] = $PRE.drones[2].lidar_cloud[5,5,2]
*/
void DroneSwarm_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1033]] /* drones[2].lidar_cloud[5,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1033] /* drones[2].lidar_cloud[5,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1289;
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1290};
  (data->simulationInfo->realVarsPre[1034] /* drones[2].lidar_cloud[5,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1290;
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,5,3] = $PRE.drones[2].lidar_cloud[5,5,3]
*/
void DroneSwarm_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1034]] /* drones[2].lidar_cloud[5,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1034] /* drones[2].lidar_cloud[5,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1291;
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1292};
  (data->simulationInfo->realVarsPre[1035] /* drones[2].lidar_cloud[5,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1292;
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,5,4] = $PRE.drones[2].lidar_cloud[5,5,4]
*/
void DroneSwarm_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1035]] /* drones[2].lidar_cloud[5,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1035] /* drones[2].lidar_cloud[5,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1293;
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
$PRE.drones[2].lidar_cloud[5,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1294};
  (data->simulationInfo->realVarsPre[1036] /* drones[2].lidar_cloud[5,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1294;
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
drones[2].lidar_cloud[5,5,5] = $PRE.drones[2].lidar_cloud[5,5,5]
*/
void DroneSwarm_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1036]] /* drones[2].lidar_cloud[5,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1036] /* drones[2].lidar_cloud[5,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1295;
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1296};
  (data->simulationInfo->realVarsPre[1037] /* drones[3].lidar_cloud[1,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1296;
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,1,1] = $PRE.drones[3].lidar_cloud[1,1,1]
*/
void DroneSwarm_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1037]] /* drones[3].lidar_cloud[1,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1037] /* drones[3].lidar_cloud[1,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1297;
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,1,2] = 0.0
*/
void DroneSwarm_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1298};
  (data->simulationInfo->realVarsPre[1038] /* drones[3].lidar_cloud[1,1,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1298;
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,1,2] = $PRE.drones[3].lidar_cloud[1,1,2]
*/
void DroneSwarm_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1038]] /* drones[3].lidar_cloud[1,1,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1038] /* drones[3].lidar_cloud[1,1,2] DISCRETE */);
  threadData->lastEquationSolved = 1299;
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,1,3] = 0.0
*/
void DroneSwarm_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1300};
  (data->simulationInfo->realVarsPre[1039] /* drones[3].lidar_cloud[1,1,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1300;
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,1,3] = $PRE.drones[3].lidar_cloud[1,1,3]
*/
void DroneSwarm_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1039]] /* drones[3].lidar_cloud[1,1,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1039] /* drones[3].lidar_cloud[1,1,3] DISCRETE */);
  threadData->lastEquationSolved = 1301;
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,1,4] = 0.0
*/
void DroneSwarm_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1302};
  (data->simulationInfo->realVarsPre[1040] /* drones[3].lidar_cloud[1,1,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1302;
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,1,4] = $PRE.drones[3].lidar_cloud[1,1,4]
*/
void DroneSwarm_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1040]] /* drones[3].lidar_cloud[1,1,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1040] /* drones[3].lidar_cloud[1,1,4] DISCRETE */);
  threadData->lastEquationSolved = 1303;
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,1,5] = 0.0
*/
void DroneSwarm_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1304};
  (data->simulationInfo->realVarsPre[1041] /* drones[3].lidar_cloud[1,1,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1304;
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,1,5] = $PRE.drones[3].lidar_cloud[1,1,5]
*/
void DroneSwarm_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1041]] /* drones[3].lidar_cloud[1,1,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1041] /* drones[3].lidar_cloud[1,1,5] DISCRETE */);
  threadData->lastEquationSolved = 1305;
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,2,1] = 0.0
*/
void DroneSwarm_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1306};
  (data->simulationInfo->realVarsPre[1042] /* drones[3].lidar_cloud[1,2,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1306;
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,2,1] = $PRE.drones[3].lidar_cloud[1,2,1]
*/
void DroneSwarm_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1042]] /* drones[3].lidar_cloud[1,2,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1042] /* drones[3].lidar_cloud[1,2,1] DISCRETE */);
  threadData->lastEquationSolved = 1307;
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,2,2] = 0.0
*/
void DroneSwarm_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1308};
  (data->simulationInfo->realVarsPre[1043] /* drones[3].lidar_cloud[1,2,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1308;
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,2,2] = $PRE.drones[3].lidar_cloud[1,2,2]
*/
void DroneSwarm_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1043]] /* drones[3].lidar_cloud[1,2,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1043] /* drones[3].lidar_cloud[1,2,2] DISCRETE */);
  threadData->lastEquationSolved = 1309;
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,2,3] = 0.0
*/
void DroneSwarm_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1310};
  (data->simulationInfo->realVarsPre[1044] /* drones[3].lidar_cloud[1,2,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1310;
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,2,3] = $PRE.drones[3].lidar_cloud[1,2,3]
*/
void DroneSwarm_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1044]] /* drones[3].lidar_cloud[1,2,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1044] /* drones[3].lidar_cloud[1,2,3] DISCRETE */);
  threadData->lastEquationSolved = 1311;
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,2,4] = 0.0
*/
void DroneSwarm_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1312};
  (data->simulationInfo->realVarsPre[1045] /* drones[3].lidar_cloud[1,2,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1312;
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,2,4] = $PRE.drones[3].lidar_cloud[1,2,4]
*/
void DroneSwarm_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1045]] /* drones[3].lidar_cloud[1,2,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1045] /* drones[3].lidar_cloud[1,2,4] DISCRETE */);
  threadData->lastEquationSolved = 1313;
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,2,5] = 0.0
*/
void DroneSwarm_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1314};
  (data->simulationInfo->realVarsPre[1046] /* drones[3].lidar_cloud[1,2,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1314;
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,2,5] = $PRE.drones[3].lidar_cloud[1,2,5]
*/
void DroneSwarm_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1046]] /* drones[3].lidar_cloud[1,2,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1046] /* drones[3].lidar_cloud[1,2,5] DISCRETE */);
  threadData->lastEquationSolved = 1315;
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,3,1] = 0.0
*/
void DroneSwarm_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1316};
  (data->simulationInfo->realVarsPre[1047] /* drones[3].lidar_cloud[1,3,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1316;
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,3,1] = $PRE.drones[3].lidar_cloud[1,3,1]
*/
void DroneSwarm_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1047]] /* drones[3].lidar_cloud[1,3,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1047] /* drones[3].lidar_cloud[1,3,1] DISCRETE */);
  threadData->lastEquationSolved = 1317;
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,3,2] = 0.0
*/
void DroneSwarm_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1318};
  (data->simulationInfo->realVarsPre[1048] /* drones[3].lidar_cloud[1,3,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1318;
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,3,2] = $PRE.drones[3].lidar_cloud[1,3,2]
*/
void DroneSwarm_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1048]] /* drones[3].lidar_cloud[1,3,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1048] /* drones[3].lidar_cloud[1,3,2] DISCRETE */);
  threadData->lastEquationSolved = 1319;
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,3,3] = 0.0
*/
void DroneSwarm_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1320};
  (data->simulationInfo->realVarsPre[1049] /* drones[3].lidar_cloud[1,3,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1320;
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,3,3] = $PRE.drones[3].lidar_cloud[1,3,3]
*/
void DroneSwarm_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1049]] /* drones[3].lidar_cloud[1,3,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1049] /* drones[3].lidar_cloud[1,3,3] DISCRETE */);
  threadData->lastEquationSolved = 1321;
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,3,4] = 0.0
*/
void DroneSwarm_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1322};
  (data->simulationInfo->realVarsPre[1050] /* drones[3].lidar_cloud[1,3,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1322;
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,3,4] = $PRE.drones[3].lidar_cloud[1,3,4]
*/
void DroneSwarm_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1050]] /* drones[3].lidar_cloud[1,3,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1050] /* drones[3].lidar_cloud[1,3,4] DISCRETE */);
  threadData->lastEquationSolved = 1323;
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,3,5] = 0.0
*/
void DroneSwarm_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1324};
  (data->simulationInfo->realVarsPre[1051] /* drones[3].lidar_cloud[1,3,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1324;
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,3,5] = $PRE.drones[3].lidar_cloud[1,3,5]
*/
void DroneSwarm_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1051]] /* drones[3].lidar_cloud[1,3,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1051] /* drones[3].lidar_cloud[1,3,5] DISCRETE */);
  threadData->lastEquationSolved = 1325;
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,4,1] = 0.0
*/
void DroneSwarm_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1326};
  (data->simulationInfo->realVarsPre[1052] /* drones[3].lidar_cloud[1,4,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1326;
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,4,1] = $PRE.drones[3].lidar_cloud[1,4,1]
*/
void DroneSwarm_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1052]] /* drones[3].lidar_cloud[1,4,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1052] /* drones[3].lidar_cloud[1,4,1] DISCRETE */);
  threadData->lastEquationSolved = 1327;
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,4,2] = 0.0
*/
void DroneSwarm_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1328};
  (data->simulationInfo->realVarsPre[1053] /* drones[3].lidar_cloud[1,4,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1328;
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,4,2] = $PRE.drones[3].lidar_cloud[1,4,2]
*/
void DroneSwarm_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1053]] /* drones[3].lidar_cloud[1,4,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1053] /* drones[3].lidar_cloud[1,4,2] DISCRETE */);
  threadData->lastEquationSolved = 1329;
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,4,3] = 0.0
*/
void DroneSwarm_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1330};
  (data->simulationInfo->realVarsPre[1054] /* drones[3].lidar_cloud[1,4,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1330;
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,4,3] = $PRE.drones[3].lidar_cloud[1,4,3]
*/
void DroneSwarm_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1054]] /* drones[3].lidar_cloud[1,4,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1054] /* drones[3].lidar_cloud[1,4,3] DISCRETE */);
  threadData->lastEquationSolved = 1331;
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,4,4] = 0.0
*/
void DroneSwarm_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1332};
  (data->simulationInfo->realVarsPre[1055] /* drones[3].lidar_cloud[1,4,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1332;
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,4,4] = $PRE.drones[3].lidar_cloud[1,4,4]
*/
void DroneSwarm_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1055]] /* drones[3].lidar_cloud[1,4,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1055] /* drones[3].lidar_cloud[1,4,4] DISCRETE */);
  threadData->lastEquationSolved = 1333;
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,4,5] = 0.0
*/
void DroneSwarm_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1334};
  (data->simulationInfo->realVarsPre[1056] /* drones[3].lidar_cloud[1,4,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1334;
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,4,5] = $PRE.drones[3].lidar_cloud[1,4,5]
*/
void DroneSwarm_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1056]] /* drones[3].lidar_cloud[1,4,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1056] /* drones[3].lidar_cloud[1,4,5] DISCRETE */);
  threadData->lastEquationSolved = 1335;
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,5,1] = 0.0
*/
void DroneSwarm_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1336};
  (data->simulationInfo->realVarsPre[1057] /* drones[3].lidar_cloud[1,5,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1336;
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,5,1] = $PRE.drones[3].lidar_cloud[1,5,1]
*/
void DroneSwarm_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1057]] /* drones[3].lidar_cloud[1,5,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1057] /* drones[3].lidar_cloud[1,5,1] DISCRETE */);
  threadData->lastEquationSolved = 1337;
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,5,2] = 0.0
*/
void DroneSwarm_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1338};
  (data->simulationInfo->realVarsPre[1058] /* drones[3].lidar_cloud[1,5,2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1338;
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,5,2] = $PRE.drones[3].lidar_cloud[1,5,2]
*/
void DroneSwarm_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* drones[3].lidar_cloud[1,5,2] DISCRETE */) = (data->simulationInfo->realVarsPre[1058] /* drones[3].lidar_cloud[1,5,2] DISCRETE */);
  threadData->lastEquationSolved = 1339;
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,5,3] = 0.0
*/
void DroneSwarm_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1340};
  (data->simulationInfo->realVarsPre[1059] /* drones[3].lidar_cloud[1,5,3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1340;
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,5,3] = $PRE.drones[3].lidar_cloud[1,5,3]
*/
void DroneSwarm_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* drones[3].lidar_cloud[1,5,3] DISCRETE */) = (data->simulationInfo->realVarsPre[1059] /* drones[3].lidar_cloud[1,5,3] DISCRETE */);
  threadData->lastEquationSolved = 1341;
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,5,4] = 0.0
*/
void DroneSwarm_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1342};
  (data->simulationInfo->realVarsPre[1060] /* drones[3].lidar_cloud[1,5,4] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1342;
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,5,4] = $PRE.drones[3].lidar_cloud[1,5,4]
*/
void DroneSwarm_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* drones[3].lidar_cloud[1,5,4] DISCRETE */) = (data->simulationInfo->realVarsPre[1060] /* drones[3].lidar_cloud[1,5,4] DISCRETE */);
  threadData->lastEquationSolved = 1343;
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[1,5,5] = 0.0
*/
void DroneSwarm_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1344};
  (data->simulationInfo->realVarsPre[1061] /* drones[3].lidar_cloud[1,5,5] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1344;
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[1,5,5] = $PRE.drones[3].lidar_cloud[1,5,5]
*/
void DroneSwarm_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1061]] /* drones[3].lidar_cloud[1,5,5] DISCRETE */) = (data->simulationInfo->realVarsPre[1061] /* drones[3].lidar_cloud[1,5,5] DISCRETE */);
  threadData->lastEquationSolved = 1345;
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
$PRE.drones[3].lidar_cloud[2,1,1] = 0.0
*/
void DroneSwarm_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1346};
  (data->simulationInfo->realVarsPre[1062] /* drones[3].lidar_cloud[2,1,1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1346;
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
drones[3].lidar_cloud[2,1,1] = $PRE.drones[3].lidar_cloud[2,1,1]
*/
void DroneSwarm_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1062]] /* drones[3].lidar_cloud[2,1,1] DISCRETE */) = (data->simulationInfo->realVarsPre[1062] /* drones[3].lidar_cloud[2,1,1] DISCRETE */);
  threadData->lastEquationSolved = 1347;
}
OMC_DISABLE_OPT
void DroneSwarm_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[449])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_899,
    DroneSwarm_eqFunction_900,
    DroneSwarm_eqFunction_901,
    DroneSwarm_eqFunction_902,
    DroneSwarm_eqFunction_903,
    DroneSwarm_eqFunction_904,
    DroneSwarm_eqFunction_905,
    DroneSwarm_eqFunction_906,
    DroneSwarm_eqFunction_907,
    DroneSwarm_eqFunction_908,
    DroneSwarm_eqFunction_909,
    DroneSwarm_eqFunction_910,
    DroneSwarm_eqFunction_911,
    DroneSwarm_eqFunction_912,
    DroneSwarm_eqFunction_913,
    DroneSwarm_eqFunction_914,
    DroneSwarm_eqFunction_915,
    DroneSwarm_eqFunction_916,
    DroneSwarm_eqFunction_917,
    DroneSwarm_eqFunction_918,
    DroneSwarm_eqFunction_919,
    DroneSwarm_eqFunction_920,
    DroneSwarm_eqFunction_921,
    DroneSwarm_eqFunction_922,
    DroneSwarm_eqFunction_923,
    DroneSwarm_eqFunction_924,
    DroneSwarm_eqFunction_925,
    DroneSwarm_eqFunction_926,
    DroneSwarm_eqFunction_927,
    DroneSwarm_eqFunction_928,
    DroneSwarm_eqFunction_929,
    DroneSwarm_eqFunction_930,
    DroneSwarm_eqFunction_931,
    DroneSwarm_eqFunction_932,
    DroneSwarm_eqFunction_933,
    DroneSwarm_eqFunction_934,
    DroneSwarm_eqFunction_935,
    DroneSwarm_eqFunction_936,
    DroneSwarm_eqFunction_937,
    DroneSwarm_eqFunction_938,
    DroneSwarm_eqFunction_939,
    DroneSwarm_eqFunction_940,
    DroneSwarm_eqFunction_941,
    DroneSwarm_eqFunction_942,
    DroneSwarm_eqFunction_943,
    DroneSwarm_eqFunction_944,
    DroneSwarm_eqFunction_945,
    DroneSwarm_eqFunction_946,
    DroneSwarm_eqFunction_947,
    DroneSwarm_eqFunction_948,
    DroneSwarm_eqFunction_949,
    DroneSwarm_eqFunction_950,
    DroneSwarm_eqFunction_951,
    DroneSwarm_eqFunction_952,
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
    DroneSwarm_eqFunction_1153,
    DroneSwarm_eqFunction_1154,
    DroneSwarm_eqFunction_1155,
    DroneSwarm_eqFunction_1156,
    DroneSwarm_eqFunction_1157,
    DroneSwarm_eqFunction_1158,
    DroneSwarm_eqFunction_1159,
    DroneSwarm_eqFunction_1160,
    DroneSwarm_eqFunction_1161,
    DroneSwarm_eqFunction_1162,
    DroneSwarm_eqFunction_1163,
    DroneSwarm_eqFunction_1164,
    DroneSwarm_eqFunction_1165,
    DroneSwarm_eqFunction_1166,
    DroneSwarm_eqFunction_1167,
    DroneSwarm_eqFunction_1168,
    DroneSwarm_eqFunction_1169,
    DroneSwarm_eqFunction_1170,
    DroneSwarm_eqFunction_1171,
    DroneSwarm_eqFunction_1172,
    DroneSwarm_eqFunction_1173,
    DroneSwarm_eqFunction_1174,
    DroneSwarm_eqFunction_1175,
    DroneSwarm_eqFunction_1176,
    DroneSwarm_eqFunction_1177,
    DroneSwarm_eqFunction_1178,
    DroneSwarm_eqFunction_1179,
    DroneSwarm_eqFunction_1180,
    DroneSwarm_eqFunction_1181,
    DroneSwarm_eqFunction_1182,
    DroneSwarm_eqFunction_1183,
    DroneSwarm_eqFunction_1184,
    DroneSwarm_eqFunction_1185,
    DroneSwarm_eqFunction_1186,
    DroneSwarm_eqFunction_1187,
    DroneSwarm_eqFunction_1188,
    DroneSwarm_eqFunction_1189,
    DroneSwarm_eqFunction_1190,
    DroneSwarm_eqFunction_1191,
    DroneSwarm_eqFunction_1192,
    DroneSwarm_eqFunction_1193,
    DroneSwarm_eqFunction_1194,
    DroneSwarm_eqFunction_1195,
    DroneSwarm_eqFunction_1196,
    DroneSwarm_eqFunction_1197,
    DroneSwarm_eqFunction_1198,
    DroneSwarm_eqFunction_1199,
    DroneSwarm_eqFunction_1200,
    DroneSwarm_eqFunction_1201,
    DroneSwarm_eqFunction_1202,
    DroneSwarm_eqFunction_1203,
    DroneSwarm_eqFunction_1204,
    DroneSwarm_eqFunction_1205,
    DroneSwarm_eqFunction_1206,
    DroneSwarm_eqFunction_1207,
    DroneSwarm_eqFunction_1208,
    DroneSwarm_eqFunction_1209,
    DroneSwarm_eqFunction_1210,
    DroneSwarm_eqFunction_1211,
    DroneSwarm_eqFunction_1212,
    DroneSwarm_eqFunction_1213,
    DroneSwarm_eqFunction_1214,
    DroneSwarm_eqFunction_1215,
    DroneSwarm_eqFunction_1216,
    DroneSwarm_eqFunction_1217,
    DroneSwarm_eqFunction_1218,
    DroneSwarm_eqFunction_1219,
    DroneSwarm_eqFunction_1220,
    DroneSwarm_eqFunction_1221,
    DroneSwarm_eqFunction_1222,
    DroneSwarm_eqFunction_1223,
    DroneSwarm_eqFunction_1224,
    DroneSwarm_eqFunction_1225,
    DroneSwarm_eqFunction_1226,
    DroneSwarm_eqFunction_1227,
    DroneSwarm_eqFunction_1228,
    DroneSwarm_eqFunction_1229,
    DroneSwarm_eqFunction_1230,
    DroneSwarm_eqFunction_1231,
    DroneSwarm_eqFunction_1232,
    DroneSwarm_eqFunction_1233,
    DroneSwarm_eqFunction_1234,
    DroneSwarm_eqFunction_1235,
    DroneSwarm_eqFunction_1236,
    DroneSwarm_eqFunction_1237,
    DroneSwarm_eqFunction_1238,
    DroneSwarm_eqFunction_1239,
    DroneSwarm_eqFunction_1240,
    DroneSwarm_eqFunction_1241,
    DroneSwarm_eqFunction_1242,
    DroneSwarm_eqFunction_1243,
    DroneSwarm_eqFunction_1244,
    DroneSwarm_eqFunction_1245,
    DroneSwarm_eqFunction_1246,
    DroneSwarm_eqFunction_1247,
    DroneSwarm_eqFunction_1248,
    DroneSwarm_eqFunction_1249,
    DroneSwarm_eqFunction_1250,
    DroneSwarm_eqFunction_1251,
    DroneSwarm_eqFunction_1252,
    DroneSwarm_eqFunction_1253,
    DroneSwarm_eqFunction_1254,
    DroneSwarm_eqFunction_1255,
    DroneSwarm_eqFunction_1256,
    DroneSwarm_eqFunction_1257,
    DroneSwarm_eqFunction_1258,
    DroneSwarm_eqFunction_1259,
    DroneSwarm_eqFunction_1260,
    DroneSwarm_eqFunction_1261,
    DroneSwarm_eqFunction_1262,
    DroneSwarm_eqFunction_1263,
    DroneSwarm_eqFunction_1264,
    DroneSwarm_eqFunction_1265,
    DroneSwarm_eqFunction_1266,
    DroneSwarm_eqFunction_1267,
    DroneSwarm_eqFunction_1268,
    DroneSwarm_eqFunction_1269,
    DroneSwarm_eqFunction_1270,
    DroneSwarm_eqFunction_1271,
    DroneSwarm_eqFunction_1272,
    DroneSwarm_eqFunction_1273,
    DroneSwarm_eqFunction_1274,
    DroneSwarm_eqFunction_1275,
    DroneSwarm_eqFunction_1276,
    DroneSwarm_eqFunction_1277,
    DroneSwarm_eqFunction_1278,
    DroneSwarm_eqFunction_1279,
    DroneSwarm_eqFunction_1280,
    DroneSwarm_eqFunction_1281,
    DroneSwarm_eqFunction_1282,
    DroneSwarm_eqFunction_1283,
    DroneSwarm_eqFunction_1284,
    DroneSwarm_eqFunction_1285,
    DroneSwarm_eqFunction_1286,
    DroneSwarm_eqFunction_1287,
    DroneSwarm_eqFunction_1288,
    DroneSwarm_eqFunction_1289,
    DroneSwarm_eqFunction_1290,
    DroneSwarm_eqFunction_1291,
    DroneSwarm_eqFunction_1292,
    DroneSwarm_eqFunction_1293,
    DroneSwarm_eqFunction_1294,
    DroneSwarm_eqFunction_1295,
    DroneSwarm_eqFunction_1296,
    DroneSwarm_eqFunction_1297,
    DroneSwarm_eqFunction_1298,
    DroneSwarm_eqFunction_1299,
    DroneSwarm_eqFunction_1300,
    DroneSwarm_eqFunction_1301,
    DroneSwarm_eqFunction_1302,
    DroneSwarm_eqFunction_1303,
    DroneSwarm_eqFunction_1304,
    DroneSwarm_eqFunction_1305,
    DroneSwarm_eqFunction_1306,
    DroneSwarm_eqFunction_1307,
    DroneSwarm_eqFunction_1308,
    DroneSwarm_eqFunction_1309,
    DroneSwarm_eqFunction_1310,
    DroneSwarm_eqFunction_1311,
    DroneSwarm_eqFunction_1312,
    DroneSwarm_eqFunction_1313,
    DroneSwarm_eqFunction_1314,
    DroneSwarm_eqFunction_1315,
    DroneSwarm_eqFunction_1316,
    DroneSwarm_eqFunction_1317,
    DroneSwarm_eqFunction_1318,
    DroneSwarm_eqFunction_1319,
    DroneSwarm_eqFunction_1320,
    DroneSwarm_eqFunction_1321,
    DroneSwarm_eqFunction_1322,
    DroneSwarm_eqFunction_1323,
    DroneSwarm_eqFunction_1324,
    DroneSwarm_eqFunction_1325,
    DroneSwarm_eqFunction_1326,
    DroneSwarm_eqFunction_1327,
    DroneSwarm_eqFunction_1328,
    DroneSwarm_eqFunction_1329,
    DroneSwarm_eqFunction_1330,
    DroneSwarm_eqFunction_1331,
    DroneSwarm_eqFunction_1332,
    DroneSwarm_eqFunction_1333,
    DroneSwarm_eqFunction_1334,
    DroneSwarm_eqFunction_1335,
    DroneSwarm_eqFunction_1336,
    DroneSwarm_eqFunction_1337,
    DroneSwarm_eqFunction_1338,
    DroneSwarm_eqFunction_1339,
    DroneSwarm_eqFunction_1340,
    DroneSwarm_eqFunction_1341,
    DroneSwarm_eqFunction_1342,
    DroneSwarm_eqFunction_1343,
    DroneSwarm_eqFunction_1344,
    DroneSwarm_eqFunction_1345,
    DroneSwarm_eqFunction_1346,
    DroneSwarm_eqFunction_1347
  };
  
  for (int id = 0; id < 449; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif
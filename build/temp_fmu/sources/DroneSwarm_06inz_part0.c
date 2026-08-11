#include "DroneSwarm_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1
type: SIMPLE_ASSIGN
world.frame_b.f[1] = 0.0
*/
void DroneSwarm_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* world.frame_b.f[1] variable */) = 0.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
world.frame_b.f[2] = 0.0
*/
void DroneSwarm_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* world.frame_b.f[2] variable */) = 0.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
world.frame_b.f[3] = 0.0
*/
void DroneSwarm_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* world.frame_b.f[3] variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
world.frame_b.t[1] = 0.0
*/
void DroneSwarm_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* world.frame_b.t[1] variable */) = 0.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
world.frame_b.t[2] = 0.0
*/
void DroneSwarm_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* world.frame_b.t[2] variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
world.frame_b.t[3] = 0.0
*/
void DroneSwarm_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* world.frame_b.t[3] variable */) = 0.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* drones[1].drone_shape.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* drones[1].drone_shape.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* drones[1].drone_shape.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* drones[1].drone_shape.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* drones[1].drone_shape.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* drones[1].drone_shape.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* drones[1].drone_shape.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* drones[1].drone_shape.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* drones[1].drone_shape.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* drones[1].drone_shape.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* drones[1].drone_shape.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
drones[1].drone_shape.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* drones[1].drone_shape.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
drones[1].drone_shape.r[1] = 0.0
*/
void DroneSwarm_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* drones[1].drone_shape.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
drones[1].drone_shape.r[2] = 0.0
*/
void DroneSwarm_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* drones[1].drone_shape.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
drones[1].drone_shape.r[3] = 0.0
*/
void DroneSwarm_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* drones[1].drone_shape.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
drones[1].drone_shape.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* drones[1].drone_shape.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
drones[1].drone_shape.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* drones[1].drone_shape.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
drones[1].drone_shape.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* drones[1].drone_shape.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
drones[1].drone_shape.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* drones[1].drone_shape.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
drones[1].drone_shape.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* drones[1].drone_shape.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
drones[1].drone_shape.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* drones[1].drone_shape.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
drones[1].drone_shape.color[1] = 255.0
*/
void DroneSwarm_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* drones[1].drone_shape.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
drones[1].drone_shape.color[2] = 0.0
*/
void DroneSwarm_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* drones[1].drone_shape.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
drones[1].drone_shape.color[3] = 0.0
*/
void DroneSwarm_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* drones[1].drone_shape.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* drones[1].patrol_area.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* drones[1].patrol_area.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* drones[1].patrol_area.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* drones[1].patrol_area.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* drones[1].patrol_area.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* drones[1].patrol_area.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* drones[1].patrol_area.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* drones[1].patrol_area.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* drones[1].patrol_area.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* drones[1].patrol_area.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* drones[1].patrol_area.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
drones[1].patrol_area.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* drones[1].patrol_area.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 42;
}

/*
equation index: 43
type: SIMPLE_ASSIGN
drones[1].patrol_area.r[1] = 0.0
*/
void DroneSwarm_eqFunction_43(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* drones[1].patrol_area.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 43;
}

/*
equation index: 44
type: SIMPLE_ASSIGN
drones[1].patrol_area.r[2] = 0.0
*/
void DroneSwarm_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* drones[1].patrol_area.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
drones[1].patrol_area.r[3] = 0.0
*/
void DroneSwarm_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* drones[1].patrol_area.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
drones[1].patrol_area.r_shape[1] = 10.0
*/
void DroneSwarm_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* drones[1].patrol_area.r_shape[1] variable */) = 10.0;
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
drones[1].patrol_area.r_shape[2] = -10.0
*/
void DroneSwarm_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* drones[1].patrol_area.r_shape[2] variable */) = -10.0;
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
drones[1].patrol_area.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* drones[1].patrol_area.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
drones[1].patrol_area.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* drones[1].patrol_area.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
drones[1].patrol_area.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* drones[1].patrol_area.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
drones[1].patrol_area.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* drones[1].patrol_area.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
drones[1].patrol_area.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* drones[1].patrol_area.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
drones[1].patrol_area.widthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* drones[1].patrol_area.widthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
drones[1].patrol_area.widthDirection[3] = 1.0
*/
void DroneSwarm_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* drones[1].patrol_area.widthDirection[3] variable */) = 1.0;
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
drones[1].patrol_area.color[1] = 255.0
*/
void DroneSwarm_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* drones[1].patrol_area.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
drones[1].patrol_area.color[2] = 255.0
*/
void DroneSwarm_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* drones[1].patrol_area.color[2] variable */) = 255.0;
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
drones[1].patrol_area.color[3] = 0.0
*/
void DroneSwarm_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* drones[1].patrol_area.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* drones[2].drone_shape.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* drones[2].drone_shape.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* drones[2].drone_shape.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 60;
}

/*
equation index: 61
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_61(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* drones[2].drone_shape.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 61;
}

/*
equation index: 62
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_62(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* drones[2].drone_shape.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 62;
}

/*
equation index: 63
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* drones[2].drone_shape.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* drones[2].drone_shape.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* drones[2].drone_shape.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 65;
}

/*
equation index: 66
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_66(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* drones[2].drone_shape.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 66;
}

/*
equation index: 67
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_67(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* drones[2].drone_shape.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 67;
}

/*
equation index: 68
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_68(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* drones[2].drone_shape.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 68;
}

/*
equation index: 69
type: SIMPLE_ASSIGN
drones[2].drone_shape.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* drones[2].drone_shape.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
drones[2].drone_shape.r[1] = 0.0
*/
void DroneSwarm_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* drones[2].drone_shape.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
drones[2].drone_shape.r[2] = 0.0
*/
void DroneSwarm_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* drones[2].drone_shape.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
drones[2].drone_shape.r[3] = 0.0
*/
void DroneSwarm_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* drones[2].drone_shape.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
drones[2].drone_shape.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* drones[2].drone_shape.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
drones[2].drone_shape.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* drones[2].drone_shape.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
drones[2].drone_shape.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* drones[2].drone_shape.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
drones[2].drone_shape.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* drones[2].drone_shape.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
drones[2].drone_shape.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* drones[2].drone_shape.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
drones[2].drone_shape.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* drones[2].drone_shape.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
drones[2].drone_shape.color[1] = 255.0
*/
void DroneSwarm_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* drones[2].drone_shape.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
drones[2].drone_shape.color[2] = 0.0
*/
void DroneSwarm_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* drones[2].drone_shape.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 80;
}

/*
equation index: 81
type: SIMPLE_ASSIGN
drones[2].drone_shape.color[3] = 0.0
*/
void DroneSwarm_eqFunction_81(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* drones[2].drone_shape.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 81;
}

/*
equation index: 82
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_82(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* drones[2].patrol_area.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 82;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* drones[2].patrol_area.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 83;
}

/*
equation index: 84
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_84(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* drones[2].patrol_area.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 84;
}

/*
equation index: 85
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_85(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* drones[2].patrol_area.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 85;
}

/*
equation index: 86
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_86(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* drones[2].patrol_area.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 86;
}

/*
equation index: 87
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_87(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* drones[2].patrol_area.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 87;
}

/*
equation index: 88
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_88(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* drones[2].patrol_area.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 88;
}

/*
equation index: 89
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_89(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* drones[2].patrol_area.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 89;
}

/*
equation index: 90
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_90(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* drones[2].patrol_area.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 90;
}

/*
equation index: 91
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_91(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* drones[2].patrol_area.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 91;
}

/*
equation index: 92
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* drones[2].patrol_area.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 92;
}

/*
equation index: 93
type: SIMPLE_ASSIGN
drones[2].patrol_area.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_93(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* drones[2].patrol_area.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 93;
}

/*
equation index: 94
type: SIMPLE_ASSIGN
drones[2].patrol_area.r[1] = 0.0
*/
void DroneSwarm_eqFunction_94(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* drones[2].patrol_area.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 94;
}

/*
equation index: 95
type: SIMPLE_ASSIGN
drones[2].patrol_area.r[2] = 0.0
*/
void DroneSwarm_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* drones[2].patrol_area.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
drones[2].patrol_area.r[3] = 0.0
*/
void DroneSwarm_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* drones[2].patrol_area.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 96;
}

/*
equation index: 97
type: SIMPLE_ASSIGN
drones[2].patrol_area.r_shape[1] = 10.0
*/
void DroneSwarm_eqFunction_97(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* drones[2].patrol_area.r_shape[1] variable */) = 10.0;
  threadData->lastEquationSolved = 97;
}

/*
equation index: 98
type: SIMPLE_ASSIGN
drones[2].patrol_area.r_shape[2] = -10.0
*/
void DroneSwarm_eqFunction_98(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* drones[2].patrol_area.r_shape[2] variable */) = -10.0;
  threadData->lastEquationSolved = 98;
}

/*
equation index: 99
type: SIMPLE_ASSIGN
drones[2].patrol_area.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* drones[2].patrol_area.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 99;
}

/*
equation index: 100
type: SIMPLE_ASSIGN
drones[2].patrol_area.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* drones[2].patrol_area.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 100;
}

/*
equation index: 101
type: SIMPLE_ASSIGN
drones[2].patrol_area.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* drones[2].patrol_area.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 101;
}

/*
equation index: 102
type: SIMPLE_ASSIGN
drones[2].patrol_area.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* drones[2].patrol_area.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 102;
}

/*
equation index: 103
type: SIMPLE_ASSIGN
drones[2].patrol_area.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* drones[2].patrol_area.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 103;
}

/*
equation index: 104
type: SIMPLE_ASSIGN
drones[2].patrol_area.widthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* drones[2].patrol_area.widthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 104;
}

/*
equation index: 105
type: SIMPLE_ASSIGN
drones[2].patrol_area.widthDirection[3] = 1.0
*/
void DroneSwarm_eqFunction_105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* drones[2].patrol_area.widthDirection[3] variable */) = 1.0;
  threadData->lastEquationSolved = 105;
}

/*
equation index: 106
type: SIMPLE_ASSIGN
drones[2].patrol_area.color[1] = 255.0
*/
void DroneSwarm_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* drones[2].patrol_area.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 106;
}

/*
equation index: 107
type: SIMPLE_ASSIGN
drones[2].patrol_area.color[2] = 255.0
*/
void DroneSwarm_eqFunction_107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* drones[2].patrol_area.color[2] variable */) = 255.0;
  threadData->lastEquationSolved = 107;
}

/*
equation index: 108
type: SIMPLE_ASSIGN
drones[2].patrol_area.color[3] = 0.0
*/
void DroneSwarm_eqFunction_108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* drones[2].patrol_area.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 108;
}

/*
equation index: 109
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* drones[3].drone_shape.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 109;
}

/*
equation index: 110
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* drones[3].drone_shape.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 110;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* drones[3].drone_shape.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* drones[3].drone_shape.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* drones[3].drone_shape.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* drones[3].drone_shape.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 114;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* drones[3].drone_shape.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 115;
}

/*
equation index: 116
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* drones[3].drone_shape.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* drones[3].drone_shape.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 117;
}

/*
equation index: 118
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* drones[3].drone_shape.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 118;
}

/*
equation index: 119
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* drones[3].drone_shape.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 119;
}

/*
equation index: 120
type: SIMPLE_ASSIGN
drones[3].drone_shape.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* drones[3].drone_shape.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 120;
}

/*
equation index: 121
type: SIMPLE_ASSIGN
drones[3].drone_shape.r[1] = 0.0
*/
void DroneSwarm_eqFunction_121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* drones[3].drone_shape.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 121;
}

/*
equation index: 122
type: SIMPLE_ASSIGN
drones[3].drone_shape.r[2] = 0.0
*/
void DroneSwarm_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* drones[3].drone_shape.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
drones[3].drone_shape.r[3] = 0.0
*/
void DroneSwarm_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* drones[3].drone_shape.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 123;
}

/*
equation index: 124
type: SIMPLE_ASSIGN
drones[3].drone_shape.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* drones[3].drone_shape.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 124;
}

/*
equation index: 125
type: SIMPLE_ASSIGN
drones[3].drone_shape.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* drones[3].drone_shape.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 125;
}

/*
equation index: 126
type: SIMPLE_ASSIGN
drones[3].drone_shape.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* drones[3].drone_shape.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 126;
}

/*
equation index: 127
type: SIMPLE_ASSIGN
drones[3].drone_shape.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* drones[3].drone_shape.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 127;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
drones[3].drone_shape.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* drones[3].drone_shape.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 128;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
drones[3].drone_shape.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* drones[3].drone_shape.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 129;
}

/*
equation index: 130
type: SIMPLE_ASSIGN
drones[3].drone_shape.color[1] = 255.0
*/
void DroneSwarm_eqFunction_130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* drones[3].drone_shape.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 130;
}

/*
equation index: 131
type: SIMPLE_ASSIGN
drones[3].drone_shape.color[2] = 0.0
*/
void DroneSwarm_eqFunction_131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* drones[3].drone_shape.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 131;
}

/*
equation index: 132
type: SIMPLE_ASSIGN
drones[3].drone_shape.color[3] = 0.0
*/
void DroneSwarm_eqFunction_132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* drones[3].drone_shape.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 132;
}

/*
equation index: 133
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* drones[3].patrol_area.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 133;
}

/*
equation index: 134
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* drones[3].patrol_area.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 134;
}

/*
equation index: 135
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* drones[3].patrol_area.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 135;
}

/*
equation index: 136
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* drones[3].patrol_area.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 136;
}

/*
equation index: 137
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* drones[3].patrol_area.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 137;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* drones[3].patrol_area.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 138;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* drones[3].patrol_area.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 139;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* drones[3].patrol_area.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 140;
}

/*
equation index: 141
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* drones[3].patrol_area.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 141;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* drones[3].patrol_area.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 142;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* drones[3].patrol_area.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 143;
}

/*
equation index: 144
type: SIMPLE_ASSIGN
drones[3].patrol_area.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* drones[3].patrol_area.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
drones[3].patrol_area.r[1] = 0.0
*/
void DroneSwarm_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* drones[3].patrol_area.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
drones[3].patrol_area.r[2] = 0.0
*/
void DroneSwarm_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* drones[3].patrol_area.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 146;
}

/*
equation index: 147
type: SIMPLE_ASSIGN
drones[3].patrol_area.r[3] = 0.0
*/
void DroneSwarm_eqFunction_147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* drones[3].patrol_area.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 147;
}

/*
equation index: 148
type: SIMPLE_ASSIGN
drones[3].patrol_area.r_shape[1] = 10.0
*/
void DroneSwarm_eqFunction_148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* drones[3].patrol_area.r_shape[1] variable */) = 10.0;
  threadData->lastEquationSolved = 148;
}

/*
equation index: 149
type: SIMPLE_ASSIGN
drones[3].patrol_area.r_shape[2] = -10.0
*/
void DroneSwarm_eqFunction_149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* drones[3].patrol_area.r_shape[2] variable */) = -10.0;
  threadData->lastEquationSolved = 149;
}

/*
equation index: 150
type: SIMPLE_ASSIGN
drones[3].patrol_area.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* drones[3].patrol_area.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 150;
}

/*
equation index: 151
type: SIMPLE_ASSIGN
drones[3].patrol_area.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* drones[3].patrol_area.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 151;
}

/*
equation index: 152
type: SIMPLE_ASSIGN
drones[3].patrol_area.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* drones[3].patrol_area.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
drones[3].patrol_area.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* drones[3].patrol_area.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 153;
}

/*
equation index: 154
type: SIMPLE_ASSIGN
drones[3].patrol_area.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* drones[3].patrol_area.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 154;
}

/*
equation index: 155
type: SIMPLE_ASSIGN
drones[3].patrol_area.widthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* drones[3].patrol_area.widthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 155;
}

/*
equation index: 156
type: SIMPLE_ASSIGN
drones[3].patrol_area.widthDirection[3] = 1.0
*/
void DroneSwarm_eqFunction_156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* drones[3].patrol_area.widthDirection[3] variable */) = 1.0;
  threadData->lastEquationSolved = 156;
}

/*
equation index: 157
type: SIMPLE_ASSIGN
drones[3].patrol_area.color[1] = 255.0
*/
void DroneSwarm_eqFunction_157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* drones[3].patrol_area.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 157;
}

/*
equation index: 158
type: SIMPLE_ASSIGN
drones[3].patrol_area.color[2] = 255.0
*/
void DroneSwarm_eqFunction_158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* drones[3].patrol_area.color[2] variable */) = 255.0;
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: SIMPLE_ASSIGN
drones[3].patrol_area.color[3] = 0.0
*/
void DroneSwarm_eqFunction_159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* drones[3].patrol_area.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* drones[4].drone_shape.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 160;
}

/*
equation index: 161
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* drones[4].drone_shape.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 161;
}

/*
equation index: 162
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* drones[4].drone_shape.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 162;
}

/*
equation index: 163
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* drones[4].drone_shape.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 163;
}

/*
equation index: 164
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* drones[4].drone_shape.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 164;
}

/*
equation index: 165
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* drones[4].drone_shape.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 165;
}

/*
equation index: 166
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* drones[4].drone_shape.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 166;
}

/*
equation index: 167
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* drones[4].drone_shape.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 167;
}

/*
equation index: 168
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* drones[4].drone_shape.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* drones[4].drone_shape.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* drones[4].drone_shape.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 170;
}

/*
equation index: 171
type: SIMPLE_ASSIGN
drones[4].drone_shape.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* drones[4].drone_shape.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 171;
}

/*
equation index: 172
type: SIMPLE_ASSIGN
drones[4].drone_shape.r[1] = 0.0
*/
void DroneSwarm_eqFunction_172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* drones[4].drone_shape.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 172;
}

/*
equation index: 173
type: SIMPLE_ASSIGN
drones[4].drone_shape.r[2] = 0.0
*/
void DroneSwarm_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* drones[4].drone_shape.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 173;
}

/*
equation index: 174
type: SIMPLE_ASSIGN
drones[4].drone_shape.r[3] = 0.0
*/
void DroneSwarm_eqFunction_174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* drones[4].drone_shape.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 174;
}

/*
equation index: 175
type: SIMPLE_ASSIGN
drones[4].drone_shape.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* drones[4].drone_shape.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 175;
}

/*
equation index: 176
type: SIMPLE_ASSIGN
drones[4].drone_shape.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* drones[4].drone_shape.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 176;
}

/*
equation index: 177
type: SIMPLE_ASSIGN
drones[4].drone_shape.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* drones[4].drone_shape.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 177;
}

/*
equation index: 178
type: SIMPLE_ASSIGN
drones[4].drone_shape.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* drones[4].drone_shape.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 178;
}

/*
equation index: 179
type: SIMPLE_ASSIGN
drones[4].drone_shape.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* drones[4].drone_shape.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 179;
}

/*
equation index: 180
type: SIMPLE_ASSIGN
drones[4].drone_shape.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* drones[4].drone_shape.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 180;
}

/*
equation index: 181
type: SIMPLE_ASSIGN
drones[4].drone_shape.color[1] = 255.0
*/
void DroneSwarm_eqFunction_181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* drones[4].drone_shape.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 181;
}

/*
equation index: 182
type: SIMPLE_ASSIGN
drones[4].drone_shape.color[2] = 0.0
*/
void DroneSwarm_eqFunction_182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* drones[4].drone_shape.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 182;
}

/*
equation index: 183
type: SIMPLE_ASSIGN
drones[4].drone_shape.color[3] = 0.0
*/
void DroneSwarm_eqFunction_183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* drones[4].drone_shape.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 183;
}

/*
equation index: 184
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* drones[4].patrol_area.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 184;
}

/*
equation index: 185
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* drones[4].patrol_area.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 185;
}

/*
equation index: 186
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* drones[4].patrol_area.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 186;
}

/*
equation index: 187
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* drones[4].patrol_area.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 187;
}

/*
equation index: 188
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* drones[4].patrol_area.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 188;
}

/*
equation index: 189
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* drones[4].patrol_area.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 189;
}

/*
equation index: 190
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* drones[4].patrol_area.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 190;
}

/*
equation index: 191
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* drones[4].patrol_area.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 191;
}

/*
equation index: 192
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* drones[4].patrol_area.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 192;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* drones[4].patrol_area.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 193;
}

/*
equation index: 194
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* drones[4].patrol_area.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 194;
}

/*
equation index: 195
type: SIMPLE_ASSIGN
drones[4].patrol_area.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* drones[4].patrol_area.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
drones[4].patrol_area.r[1] = 0.0
*/
void DroneSwarm_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* drones[4].patrol_area.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 196;
}

/*
equation index: 197
type: SIMPLE_ASSIGN
drones[4].patrol_area.r[2] = 0.0
*/
void DroneSwarm_eqFunction_197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* drones[4].patrol_area.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 197;
}

/*
equation index: 198
type: SIMPLE_ASSIGN
drones[4].patrol_area.r[3] = 0.0
*/
void DroneSwarm_eqFunction_198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* drones[4].patrol_area.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 198;
}

/*
equation index: 199
type: SIMPLE_ASSIGN
drones[4].patrol_area.r_shape[1] = 10.0
*/
void DroneSwarm_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* drones[4].patrol_area.r_shape[1] variable */) = 10.0;
  threadData->lastEquationSolved = 199;
}

/*
equation index: 200
type: SIMPLE_ASSIGN
drones[4].patrol_area.r_shape[2] = -10.0
*/
void DroneSwarm_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* drones[4].patrol_area.r_shape[2] variable */) = -10.0;
  threadData->lastEquationSolved = 200;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
drones[4].patrol_area.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* drones[4].patrol_area.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 201;
}

/*
equation index: 202
type: SIMPLE_ASSIGN
drones[4].patrol_area.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* drones[4].patrol_area.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 202;
}

/*
equation index: 203
type: SIMPLE_ASSIGN
drones[4].patrol_area.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* drones[4].patrol_area.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 203;
}

/*
equation index: 204
type: SIMPLE_ASSIGN
drones[4].patrol_area.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* drones[4].patrol_area.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 204;
}

/*
equation index: 205
type: SIMPLE_ASSIGN
drones[4].patrol_area.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* drones[4].patrol_area.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 205;
}

/*
equation index: 206
type: SIMPLE_ASSIGN
drones[4].patrol_area.widthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* drones[4].patrol_area.widthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 206;
}

/*
equation index: 207
type: SIMPLE_ASSIGN
drones[4].patrol_area.widthDirection[3] = 1.0
*/
void DroneSwarm_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* drones[4].patrol_area.widthDirection[3] variable */) = 1.0;
  threadData->lastEquationSolved = 207;
}

/*
equation index: 208
type: SIMPLE_ASSIGN
drones[4].patrol_area.color[1] = 255.0
*/
void DroneSwarm_eqFunction_208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* drones[4].patrol_area.color[1] variable */) = 255.0;
  threadData->lastEquationSolved = 208;
}

/*
equation index: 209
type: SIMPLE_ASSIGN
drones[4].patrol_area.color[2] = 255.0
*/
void DroneSwarm_eqFunction_209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* drones[4].patrol_area.color[2] variable */) = 255.0;
  threadData->lastEquationSolved = 209;
}

/*
equation index: 210
type: SIMPLE_ASSIGN
drones[4].patrol_area.color[3] = 0.0
*/
void DroneSwarm_eqFunction_210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* drones[4].patrol_area.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 210;
}

/*
equation index: 211
type: SIMPLE_ASSIGN
world.gravityArrowColor[1] = 0.0
*/
void DroneSwarm_eqFunction_211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[7]] /* world.gravityArrowColor[1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 211;
}

/*
equation index: 212
type: SIMPLE_ASSIGN
world.gravityArrowColor[2] = 230
*/
void DroneSwarm_eqFunction_212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,212};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[8]] /* world.gravityArrowColor[2] DISCRETE */) = ((modelica_integer) 230);
  threadData->lastEquationSolved = 212;
}

/*
equation index: 213
type: SIMPLE_ASSIGN
world.gravityArrowColor[3] = 0.0
*/
void DroneSwarm_eqFunction_213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[9]] /* world.gravityArrowColor[3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 213;
}

/*
equation index: 214
type: SIMPLE_ASSIGN
world.gravitySphereColor[1] = 0.0
*/
void DroneSwarm_eqFunction_214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[10]] /* world.gravitySphereColor[1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 214;
}

/*
equation index: 215
type: SIMPLE_ASSIGN
world.gravitySphereColor[2] = 230
*/
void DroneSwarm_eqFunction_215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[11]] /* world.gravitySphereColor[2] DISCRETE */) = ((modelica_integer) 230);
  threadData->lastEquationSolved = 215;
}

/*
equation index: 216
type: SIMPLE_ASSIGN
world.gravitySphereColor[3] = 0.0
*/
void DroneSwarm_eqFunction_216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[12]] /* world.gravitySphereColor[3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 216;
}

/*
equation index: 217
type: SIMPLE_ASSIGN
world.groundColor[1] = 200
*/
void DroneSwarm_eqFunction_217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[13]] /* world.groundColor[1] DISCRETE */) = ((modelica_integer) 200);
  threadData->lastEquationSolved = 217;
}

/*
equation index: 218
type: SIMPLE_ASSIGN
world.groundColor[2] = 200
*/
void DroneSwarm_eqFunction_218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,218};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[14]] /* world.groundColor[2] DISCRETE */) = ((modelica_integer) 200);
  threadData->lastEquationSolved = 218;
}

/*
equation index: 219
type: SIMPLE_ASSIGN
world.groundColor[3] = 200
*/
void DroneSwarm_eqFunction_219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[15]] /* world.groundColor[3] DISCRETE */) = ((modelica_integer) 200);
  threadData->lastEquationSolved = 219;
}

/*
equation index: 220
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* world.x_arrowLine.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* world.x_arrowLine.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* world.x_arrowLine.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 222;
}

/*
equation index: 223
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* world.x_arrowLine.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 223;
}

/*
equation index: 224
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* world.x_arrowLine.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* world.x_arrowLine.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* world.x_arrowLine.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* world.x_arrowLine.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 227;
}

/*
equation index: 228
type: SIMPLE_ASSIGN
world.x_arrowLine.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* world.x_arrowLine.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 228;
}

/*
equation index: 229
type: SIMPLE_ASSIGN
world.x_arrowLine.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* world.x_arrowLine.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 229;
}

/*
equation index: 230
type: SIMPLE_ASSIGN
world.x_arrowLine.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* world.x_arrowLine.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 230;
}

/*
equation index: 231
type: SIMPLE_ASSIGN
world.x_arrowLine.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* world.x_arrowLine.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 231;
}

/*
equation index: 232
type: SIMPLE_ASSIGN
world.x_arrowLine.r[1] = 0.0
*/
void DroneSwarm_eqFunction_232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* world.x_arrowLine.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 232;
}

/*
equation index: 233
type: SIMPLE_ASSIGN
world.x_arrowLine.r[2] = 0.0
*/
void DroneSwarm_eqFunction_233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* world.x_arrowLine.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 233;
}

/*
equation index: 234
type: SIMPLE_ASSIGN
world.x_arrowLine.r[3] = 0.0
*/
void DroneSwarm_eqFunction_234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* world.x_arrowLine.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 234;
}

/*
equation index: 235
type: SIMPLE_ASSIGN
world.x_arrowLine.r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* world.x_arrowLine.r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 235;
}

/*
equation index: 236
type: SIMPLE_ASSIGN
world.x_arrowLine.r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* world.x_arrowLine.r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 236;
}

/*
equation index: 237
type: SIMPLE_ASSIGN
world.x_arrowLine.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* world.x_arrowLine.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 237;
}

/*
equation index: 238
type: SIMPLE_ASSIGN
world.x_arrowLine.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_238(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* world.x_arrowLine.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 238;
}

/*
equation index: 239
type: SIMPLE_ASSIGN
world.x_arrowLine.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* world.x_arrowLine.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 239;
}

/*
equation index: 240
type: SIMPLE_ASSIGN
world.x_arrowLine.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* world.x_arrowLine.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 240;
}

/*
equation index: 241
type: SIMPLE_ASSIGN
world.x_arrowLine.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* world.x_arrowLine.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 241;
}

/*
equation index: 242
type: SIMPLE_ASSIGN
world.x_arrowLine.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* world.x_arrowLine.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 242;
}

/*
equation index: 243
type: SIMPLE_ASSIGN
world.x_arrowLine.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_243(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* world.x_arrowLine.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 243;
}

/*
equation index: 244
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_244(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* world.x_arrowHead.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 244;
}

/*
equation index: 245
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* world.x_arrowHead.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* world.x_arrowHead.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* world.x_arrowHead.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 247;
}

/*
equation index: 248
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* world.x_arrowHead.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 248;
}

/*
equation index: 249
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* world.x_arrowHead.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 249;
}

/*
equation index: 250
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* world.x_arrowHead.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 250;
}

/*
equation index: 251
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* world.x_arrowHead.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 251;
}

/*
equation index: 252
type: SIMPLE_ASSIGN
world.x_arrowHead.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* world.x_arrowHead.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 252;
}

/*
equation index: 253
type: SIMPLE_ASSIGN
world.x_arrowHead.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* world.x_arrowHead.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 253;
}

/*
equation index: 254
type: SIMPLE_ASSIGN
world.x_arrowHead.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_254(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* world.x_arrowHead.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 254;
}

/*
equation index: 255
type: SIMPLE_ASSIGN
world.x_arrowHead.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* world.x_arrowHead.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
world.x_arrowHead.r[2] = 0.0
*/
void DroneSwarm_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* world.x_arrowHead.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
world.x_arrowHead.r[3] = 0.0
*/
void DroneSwarm_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* world.x_arrowHead.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
world.x_arrowHead.r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* world.x_arrowHead.r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 258;
}

/*
equation index: 259
type: SIMPLE_ASSIGN
world.x_arrowHead.r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_259(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* world.x_arrowHead.r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 259;
}

/*
equation index: 260
type: SIMPLE_ASSIGN
world.x_arrowHead.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_260(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* world.x_arrowHead.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 260;
}

/*
equation index: 261
type: SIMPLE_ASSIGN
world.x_arrowHead.lengthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_261(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* world.x_arrowHead.lengthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 261;
}

/*
equation index: 262
type: SIMPLE_ASSIGN
world.x_arrowHead.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* world.x_arrowHead.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
world.x_arrowHead.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* world.x_arrowHead.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
world.x_arrowHead.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* world.x_arrowHead.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 264;
}

/*
equation index: 265
type: SIMPLE_ASSIGN
world.x_arrowHead.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_265(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* world.x_arrowHead.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 265;
}

/*
equation index: 266
type: SIMPLE_ASSIGN
world.x_arrowHead.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_266(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* world.x_arrowHead.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 266;
}

/*
equation index: 267
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* world.x_label.cylinders[1].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* world.x_label.cylinders[1].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* world.x_label.cylinders[1].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 269;
}

/*
equation index: 270
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[490]] /* world.x_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 270;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[491]] /* world.x_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 271;
}

/*
equation index: 272
type: SIMPLE_ASSIGN
world.x_label.cylinders[1].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_272(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[492]] /* world.x_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 272;
}

/*
equation index: 273
type: SIMPLE_ASSIGN
world.x_label.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* world.x_label.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 273;
}

/*
equation index: 274
type: SIMPLE_ASSIGN
world.x_label.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_274(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* world.x_label.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 274;
}

/*
equation index: 275
type: SIMPLE_ASSIGN
world.x_label.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_275(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* world.x_label.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 275;
}

/*
equation index: 276
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_276(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* world.x_label.cylinders[2].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 276;
}

/*
equation index: 277
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_277(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[488]] /* world.x_label.cylinders[2].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 277;
}

/*
equation index: 278
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_278(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[489]] /* world.x_label.cylinders[2].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 278;
}

/*
equation index: 279
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[493]] /* world.x_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 279;
}

/*
equation index: 280
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_280(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[494]] /* world.x_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 280;
}

/*
equation index: 281
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[495]] /* world.x_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* world.y_arrowLine.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* world.y_arrowLine.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* world.y_arrowLine.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 284;
}

/*
equation index: 285
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_285(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[545]] /* world.y_arrowLine.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 285;
}

/*
equation index: 286
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_286(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[546]] /* world.y_arrowLine.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 286;
}

/*
equation index: 287
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[547]] /* world.y_arrowLine.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[548]] /* world.y_arrowLine.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 288;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[549]] /* world.y_arrowLine.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 289;
}

/*
equation index: 290
type: SIMPLE_ASSIGN
world.y_arrowLine.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[550]] /* world.y_arrowLine.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 290;
}

/*
equation index: 291
type: SIMPLE_ASSIGN
world.y_arrowLine.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* world.y_arrowLine.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 291;
}

/*
equation index: 292
type: SIMPLE_ASSIGN
world.y_arrowLine.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* world.y_arrowLine.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 292;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
world.y_arrowLine.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* world.y_arrowLine.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 293;
}

/*
equation index: 294
type: SIMPLE_ASSIGN
world.y_arrowLine.r[1] = 0.0
*/
void DroneSwarm_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[558]] /* world.y_arrowLine.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 294;
}

/*
equation index: 295
type: SIMPLE_ASSIGN
world.y_arrowLine.r[2] = 0.0
*/
void DroneSwarm_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[559]] /* world.y_arrowLine.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 295;
}

/*
equation index: 296
type: SIMPLE_ASSIGN
world.y_arrowLine.r[3] = 0.0
*/
void DroneSwarm_eqFunction_296(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[560]] /* world.y_arrowLine.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 296;
}

/*
equation index: 297
type: SIMPLE_ASSIGN
world.y_arrowLine.r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[561]] /* world.y_arrowLine.r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 297;
}

/*
equation index: 298
type: SIMPLE_ASSIGN
world.y_arrowLine.r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[562]] /* world.y_arrowLine.r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 298;
}

/*
equation index: 299
type: SIMPLE_ASSIGN
world.y_arrowLine.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* world.y_arrowLine.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 299;
}

/*
equation index: 300
type: SIMPLE_ASSIGN
world.y_arrowLine.lengthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_300(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* world.y_arrowLine.lengthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 300;
}

/*
equation index: 301
type: SIMPLE_ASSIGN
world.y_arrowLine.lengthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_301(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* world.y_arrowLine.lengthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 301;
}

/*
equation index: 302
type: SIMPLE_ASSIGN
world.y_arrowLine.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[557]] /* world.y_arrowLine.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 302;
}

/*
equation index: 303
type: SIMPLE_ASSIGN
world.y_arrowLine.widthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_303(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* world.y_arrowLine.widthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 303;
}

/*
equation index: 304
type: SIMPLE_ASSIGN
world.y_arrowLine.widthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_304(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* world.y_arrowLine.widthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 304;
}

/*
equation index: 305
type: SIMPLE_ASSIGN
world.y_arrowLine.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_305(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* world.y_arrowLine.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 305;
}

/*
equation index: 306
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* world.y_arrowHead.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* world.y_arrowHead.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* world.y_arrowHead.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* world.y_arrowHead.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* world.y_arrowHead.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* world.y_arrowHead.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* world.y_arrowHead.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 312;
}

/*
equation index: 313
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* world.y_arrowHead.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 313;
}

/*
equation index: 314
type: SIMPLE_ASSIGN
world.y_arrowHead.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* world.y_arrowHead.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
world.y_arrowHead.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* world.y_arrowHead.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
world.y_arrowHead.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[524]] /* world.y_arrowHead.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
world.y_arrowHead.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[525]] /* world.y_arrowHead.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
world.y_arrowHead.r[1] = 0.0
*/
void DroneSwarm_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* world.y_arrowHead.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
world.y_arrowHead.r[3] = 0.0
*/
void DroneSwarm_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* world.y_arrowHead.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
world.y_arrowHead.r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* world.y_arrowHead.r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
world.y_arrowHead.r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[536]] /* world.y_arrowHead.r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
world.y_arrowHead.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[537]] /* world.y_arrowHead.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
world.y_arrowHead.lengthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* world.y_arrowHead.lengthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
world.y_arrowHead.lengthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* world.y_arrowHead.lengthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
world.y_arrowHead.lengthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* world.y_arrowHead.lengthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
world.y_arrowHead.widthDirection[1] = 1.0
*/
void DroneSwarm_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* world.y_arrowHead.widthDirection[1] variable */) = 1.0;
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
world.y_arrowHead.widthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* world.y_arrowHead.widthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
world.y_arrowHead.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* world.y_arrowHead.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[605]] /* world.y_label.cylinders[1].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 329;
}

/*
equation index: 330
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[606]] /* world.y_label.cylinders[1].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 330;
}

/*
equation index: 331
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* world.y_label.cylinders[1].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 331;
}

/*
equation index: 332
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* world.y_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 332;
}

/*
equation index: 333
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[612]] /* world.y_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
world.y_label.cylinders[1].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* world.y_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
world.y_label.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* world.y_label.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: SIMPLE_ASSIGN
world.y_label.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* world.y_label.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
world.y_label.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* world.y_label.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 337;
}

/*
equation index: 338
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* world.y_label.cylinders[2].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 338;
}

/*
equation index: 339
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* world.y_label.cylinders[2].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 339;
}

/*
equation index: 340
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* world.y_label.cylinders[2].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 340;
}

/*
equation index: 341
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* world.y_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[615]] /* world.y_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 342;
}

/*
equation index: 343
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* world.y_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 343;
}

/*
equation index: 344
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[666]] /* world.z_arrowLine.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 344;
}

/*
equation index: 345
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* world.z_arrowLine.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* world.z_arrowLine.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 346;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* world.z_arrowLine.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 347;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[670]] /* world.z_arrowLine.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 348;
}

/*
equation index: 349
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[671]] /* world.z_arrowLine.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[672]] /* world.z_arrowLine.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[673]] /* world.z_arrowLine.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 351;
}

/*
equation index: 352
type: SIMPLE_ASSIGN
world.z_arrowLine.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[674]] /* world.z_arrowLine.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 352;
}

/*
equation index: 353
type: SIMPLE_ASSIGN
world.z_arrowLine.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[675]] /* world.z_arrowLine.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 353;
}

/*
equation index: 354
type: SIMPLE_ASSIGN
world.z_arrowLine.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* world.z_arrowLine.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 354;
}

/*
equation index: 355
type: SIMPLE_ASSIGN
world.z_arrowLine.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* world.z_arrowLine.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: SIMPLE_ASSIGN
world.z_arrowLine.r[1] = 0.0
*/
void DroneSwarm_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* world.z_arrowLine.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 356;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
world.z_arrowLine.r[2] = 0.0
*/
void DroneSwarm_eqFunction_357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* world.z_arrowLine.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 357;
}

/*
equation index: 358
type: SIMPLE_ASSIGN
world.z_arrowLine.r[3] = 0.0
*/
void DroneSwarm_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* world.z_arrowLine.r[3] variable */) = 0.0;
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
world.z_arrowLine.r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[685]] /* world.z_arrowLine.r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 359;
}

/*
equation index: 360
type: SIMPLE_ASSIGN
world.z_arrowLine.r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[686]] /* world.z_arrowLine.r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
world.z_arrowLine.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[687]] /* world.z_arrowLine.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
world.z_arrowLine.lengthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* world.z_arrowLine.lengthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
world.z_arrowLine.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* world.z_arrowLine.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
world.z_arrowLine.lengthDirection[3] = 1.0
*/
void DroneSwarm_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* world.z_arrowLine.lengthDirection[3] variable */) = 1.0;
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
world.z_arrowLine.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[689]] /* world.z_arrowLine.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
world.z_arrowLine.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[690]] /* world.z_arrowLine.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
world.z_arrowLine.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[691]] /* world.z_arrowLine.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[638]] /* world.z_arrowHead.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[639]] /* world.z_arrowHead.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* world.z_arrowHead.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* world.z_arrowHead.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* world.z_arrowHead.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 372;
}

/*
equation index: 373
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* world.z_arrowHead.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* world.z_arrowHead.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 374;
}

/*
equation index: 375
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* world.z_arrowHead.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
world.z_arrowHead.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[646]] /* world.z_arrowHead.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
world.z_arrowHead.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[647]] /* world.z_arrowHead.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 377;
}

/*
equation index: 378
type: SIMPLE_ASSIGN
world.z_arrowHead.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[648]] /* world.z_arrowHead.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 378;
}

/*
equation index: 379
type: SIMPLE_ASSIGN
world.z_arrowHead.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* world.z_arrowHead.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 379;
}

/*
equation index: 380
type: SIMPLE_ASSIGN
world.z_arrowHead.r[1] = 0.0
*/
void DroneSwarm_eqFunction_380(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,380};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* world.z_arrowHead.r[1] variable */) = 0.0;
  threadData->lastEquationSolved = 380;
}

/*
equation index: 381
type: SIMPLE_ASSIGN
world.z_arrowHead.r[2] = 0.0
*/
void DroneSwarm_eqFunction_381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,381};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* world.z_arrowHead.r[2] variable */) = 0.0;
  threadData->lastEquationSolved = 381;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
world.z_arrowHead.r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* world.z_arrowHead.r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 382;
}

/*
equation index: 383
type: SIMPLE_ASSIGN
world.z_arrowHead.r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[660]] /* world.z_arrowHead.r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
world.z_arrowHead.r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[661]] /* world.z_arrowHead.r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 384;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
world.z_arrowHead.lengthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* world.z_arrowHead.lengthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 385;
}

/*
equation index: 386
type: SIMPLE_ASSIGN
world.z_arrowHead.lengthDirection[2] = 0.0
*/
void DroneSwarm_eqFunction_386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* world.z_arrowHead.lengthDirection[2] variable */) = 0.0;
  threadData->lastEquationSolved = 386;
}

/*
equation index: 387
type: SIMPLE_ASSIGN
world.z_arrowHead.lengthDirection[3] = 1.0
*/
void DroneSwarm_eqFunction_387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* world.z_arrowHead.lengthDirection[3] variable */) = 1.0;
  threadData->lastEquationSolved = 387;
}

/*
equation index: 388
type: SIMPLE_ASSIGN
world.z_arrowHead.widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,388};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[663]] /* world.z_arrowHead.widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 388;
}

/*
equation index: 389
type: SIMPLE_ASSIGN
world.z_arrowHead.widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[664]] /* world.z_arrowHead.widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 389;
}

/*
equation index: 390
type: SIMPLE_ASSIGN
world.z_arrowHead.widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[665]] /* world.z_arrowHead.widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 390;
}

/*
equation index: 391
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[737]] /* world.z_label.cylinders[1].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 391;
}

/*
equation index: 392
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[738]] /* world.z_label.cylinders[1].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 392;
}

/*
equation index: 393
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[739]] /* world.z_label.cylinders[1].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 393;
}

/*
equation index: 394
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[746]] /* world.z_label.cylinders[1].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 394;
}

/*
equation index: 395
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* world.z_label.cylinders[1].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 395;
}

/*
equation index: 396
type: SIMPLE_ASSIGN
world.z_label.cylinders[1].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* world.z_label.cylinders[1].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 396;
}

/*
equation index: 397
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[740]] /* world.z_label.cylinders[2].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 397;
}

/*
equation index: 398
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* world.z_label.cylinders[2].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 398;
}

/*
equation index: 399
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* world.z_label.cylinders[2].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 399;
}

/*
equation index: 400
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[749]] /* world.z_label.cylinders[2].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 400;
}

/*
equation index: 401
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* world.z_label.cylinders[2].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 401;
}

/*
equation index: 402
type: SIMPLE_ASSIGN
world.z_label.cylinders[2].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* world.z_label.cylinders[2].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 402;
}

/*
equation index: 403
type: SIMPLE_ASSIGN
world.z_label.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[701]] /* world.z_label.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 403;
}

/*
equation index: 404
type: SIMPLE_ASSIGN
world.z_label.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[702]] /* world.z_label.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 404;
}

/*
equation index: 405
type: SIMPLE_ASSIGN
world.z_label.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_405(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* world.z_label.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 405;
}

/*
equation index: 406
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r_shape[1] = 0.0
*/
void DroneSwarm_eqFunction_406(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* world.z_label.cylinders[3].r_shape[1] variable */) = 0.0;
  threadData->lastEquationSolved = 406;
}

/*
equation index: 407
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r_shape[2] = 0.0
*/
void DroneSwarm_eqFunction_407(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* world.z_label.cylinders[3].r_shape[2] variable */) = 0.0;
  threadData->lastEquationSolved = 407;
}

/*
equation index: 408
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].r_shape[3] = 0.0
*/
void DroneSwarm_eqFunction_408(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* world.z_label.cylinders[3].r_shape[3] variable */) = 0.0;
  threadData->lastEquationSolved = 408;
}

/*
equation index: 409
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].widthDirection[1] = 0.0
*/
void DroneSwarm_eqFunction_409(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[752]] /* world.z_label.cylinders[3].widthDirection[1] variable */) = 0.0;
  threadData->lastEquationSolved = 409;
}

/*
equation index: 410
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].widthDirection[2] = 1.0
*/
void DroneSwarm_eqFunction_410(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* world.z_label.cylinders[3].widthDirection[2] variable */) = 1.0;
  threadData->lastEquationSolved = 410;
}

/*
equation index: 411
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].widthDirection[3] = 0.0
*/
void DroneSwarm_eqFunction_411(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* world.z_label.cylinders[3].widthDirection[3] variable */) = 0.0;
  threadData->lastEquationSolved = 411;
}

/*
equation index: 412
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].color[3] = 0.0
*/
void DroneSwarm_eqFunction_412(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[715]] /* world.z_label.cylinders[3].color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 412;
}

/*
equation index: 413
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].color[2] = 0.0
*/
void DroneSwarm_eqFunction_413(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[714]] /* world.z_label.cylinders[3].color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 413;
}

/*
equation index: 414
type: SIMPLE_ASSIGN
world.z_label.cylinders[3].color[1] = 0.0
*/
void DroneSwarm_eqFunction_414(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[713]] /* world.z_label.cylinders[3].color[1] variable */) = 0.0;
  threadData->lastEquationSolved = 414;
}

/*
equation index: 415
type: SIMPLE_ASSIGN
world.z_arrowHead.color[3] = 0.0
*/
void DroneSwarm_eqFunction_415(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[652]] /* world.z_arrowHead.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 415;
}

/*
equation index: 416
type: SIMPLE_ASSIGN
world.z_arrowHead.color[2] = 0.0
*/
void DroneSwarm_eqFunction_416(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* world.z_arrowHead.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 416;
}

/*
equation index: 417
type: SIMPLE_ASSIGN
world.z_arrowHead.color[1] = 0.0
*/
void DroneSwarm_eqFunction_417(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* world.z_arrowHead.color[1] variable */) = 0.0;
  threadData->lastEquationSolved = 417;
}

/*
equation index: 418
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].color[3] = 0.0
*/
void DroneSwarm_eqFunction_418(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[591]] /* world.y_label.cylinders[2].color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 418;
}

/*
equation index: 419
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].color[2] = 0.0
*/
void DroneSwarm_eqFunction_419(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[590]] /* world.y_label.cylinders[2].color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 419;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
world.y_label.cylinders[2].color[1] = 0.0
*/
void DroneSwarm_eqFunction_420(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,420};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[589]] /* world.y_label.cylinders[2].color[1] variable */) = 0.0;
  threadData->lastEquationSolved = 420;
}

/*
equation index: 421
type: SIMPLE_ASSIGN
world.y_arrowHead.color[3] = 0.0
*/
void DroneSwarm_eqFunction_421(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* world.y_arrowHead.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 421;
}

/*
equation index: 422
type: SIMPLE_ASSIGN
world.y_arrowHead.color[2] = 0.0
*/
void DroneSwarm_eqFunction_422(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* world.y_arrowHead.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 422;
}

/*
equation index: 423
type: SIMPLE_ASSIGN
world.y_arrowHead.color[1] = 0.0
*/
void DroneSwarm_eqFunction_423(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[526]] /* world.y_arrowHead.color[1] variable */) = 0.0;
  threadData->lastEquationSolved = 423;
}

/*
equation index: 424
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].color[3] = 0.0
*/
void DroneSwarm_eqFunction_424(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* world.x_label.cylinders[2].color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 424;
}

/*
equation index: 425
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].color[2] = 0.0
*/
void DroneSwarm_eqFunction_425(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[469]] /* world.x_label.cylinders[2].color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 425;
}

/*
equation index: 426
type: SIMPLE_ASSIGN
world.x_label.cylinders[2].color[1] = 0.0
*/
void DroneSwarm_eqFunction_426(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[468]] /* world.x_label.cylinders[2].color[1] variable */) = 0.0;
  threadData->lastEquationSolved = 426;
}

/*
equation index: 427
type: SIMPLE_ASSIGN
world.x_arrowHead.color[3] = 0.0
*/
void DroneSwarm_eqFunction_427(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* world.x_arrowHead.color[3] variable */) = 0.0;
  threadData->lastEquationSolved = 427;
}

/*
equation index: 428
type: SIMPLE_ASSIGN
world.x_arrowHead.color[2] = 0.0
*/
void DroneSwarm_eqFunction_428(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* world.x_arrowHead.color[2] variable */) = 0.0;
  threadData->lastEquationSolved = 428;
}

/*
equation index: 429
type: SIMPLE_ASSIGN
world.x_arrowHead.color[1] = 0.0
*/
void DroneSwarm_eqFunction_429(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* world.x_arrowHead.color[1] variable */) = 0.0;
  threadData->lastEquationSolved = 429;
}

/*
equation index: 430
type: SIMPLE_ASSIGN
world.axisColor_x[1] = 0.0
*/
void DroneSwarm_eqFunction_430(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[4]] /* world.axisColor_x[1] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 430;
}

/*
equation index: 431
type: SIMPLE_ASSIGN
world.axisColor_x[2] = 0.0
*/
void DroneSwarm_eqFunction_431(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[5]] /* world.axisColor_x[2] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 431;
}

/*
equation index: 432
type: SIMPLE_ASSIGN
world.axisColor_x[3] = 0.0
*/
void DroneSwarm_eqFunction_432(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[6]] /* world.axisColor_x[3] DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 432;
}

/*
equation index: 433
type: SIMPLE_ASSIGN
world.frame_b.r_0[1] = 0.0
*/
void DroneSwarm_eqFunction_433(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* world.frame_b.r_0[1] variable */) = 0.0;
  threadData->lastEquationSolved = 433;
}

/*
equation index: 434
type: SIMPLE_ASSIGN
world.frame_b.r_0[2] = 0.0
*/
void DroneSwarm_eqFunction_434(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* world.frame_b.r_0[2] variable */) = 0.0;
  threadData->lastEquationSolved = 434;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
world.frame_b.r_0[3] = 0.0
*/
void DroneSwarm_eqFunction_435(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* world.frame_b.r_0[3] variable */) = 0.0;
  threadData->lastEquationSolved = 435;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
world.frame_b.R.w[1] = 0.0
*/
void DroneSwarm_eqFunction_436(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* world.frame_b.R.w[1] variable */) = 0.0;
  threadData->lastEquationSolved = 436;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
world.frame_b.R.w[2] = 0.0
*/
void DroneSwarm_eqFunction_437(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* world.frame_b.R.w[2] variable */) = 0.0;
  threadData->lastEquationSolved = 437;
}

/*
equation index: 438
type: SIMPLE_ASSIGN
world.frame_b.R.w[3] = 0.0
*/
void DroneSwarm_eqFunction_438(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* world.frame_b.R.w[3] variable */) = 0.0;
  threadData->lastEquationSolved = 438;
}

/*
equation index: 439
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_439(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* world.frame_b.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 439;
}

/*
equation index: 440
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_440(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* world.frame_b.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 440;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
world.frame_b.R.T[1,3] = 0.0
*/
void DroneSwarm_eqFunction_441(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* world.frame_b.R.T[1,3] variable */) = 0.0;
  threadData->lastEquationSolved = 441;
}

/*
equation index: 442
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,1] = 0.0
*/
void DroneSwarm_eqFunction_442(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* world.frame_b.R.T[2,1] variable */) = 0.0;
  threadData->lastEquationSolved = 442;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,2] = 1.0
*/
void DroneSwarm_eqFunction_443(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* world.frame_b.R.T[2,2] variable */) = 1.0;
  threadData->lastEquationSolved = 443;
}

/*
equation index: 444
type: SIMPLE_ASSIGN
world.frame_b.R.T[2,3] = 0.0
*/
void DroneSwarm_eqFunction_444(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* world.frame_b.R.T[2,3] variable */) = 0.0;
  threadData->lastEquationSolved = 444;
}

/*
equation index: 445
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,1] = 0.0
*/
void DroneSwarm_eqFunction_445(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* world.frame_b.R.T[3,1] variable */) = 0.0;
  threadData->lastEquationSolved = 445;
}

/*
equation index: 446
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,2] = 0.0
*/
void DroneSwarm_eqFunction_446(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* world.frame_b.R.T[3,2] variable */) = 0.0;
  threadData->lastEquationSolved = 446;
}

/*
equation index: 447
type: SIMPLE_ASSIGN
world.frame_b.R.T[3,3] = 1.0
*/
void DroneSwarm_eqFunction_447(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* world.frame_b.R.T[3,3] variable */) = 1.0;
  threadData->lastEquationSolved = 447;
}

/*
equation index: 448
type: SIMPLE_ASSIGN
sea_floor.R.T[1,1] = 1.0
*/
void DroneSwarm_eqFunction_448(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* sea_floor.R.T[1,1] variable */) = 1.0;
  threadData->lastEquationSolved = 448;
}

/*
equation index: 449
type: SIMPLE_ASSIGN
sea_floor.R.T[1,2] = 0.0
*/
void DroneSwarm_eqFunction_449(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* sea_floor.R.T[1,2] variable */) = 0.0;
  threadData->lastEquationSolved = 449;
}
OMC_DISABLE_OPT
void DroneSwarm_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[449])(DATA*, threadData_t*) = {
    DroneSwarm_eqFunction_1,
    DroneSwarm_eqFunction_2,
    DroneSwarm_eqFunction_3,
    DroneSwarm_eqFunction_4,
    DroneSwarm_eqFunction_5,
    DroneSwarm_eqFunction_6,
    DroneSwarm_eqFunction_7,
    DroneSwarm_eqFunction_8,
    DroneSwarm_eqFunction_9,
    DroneSwarm_eqFunction_10,
    DroneSwarm_eqFunction_11,
    DroneSwarm_eqFunction_12,
    DroneSwarm_eqFunction_13,
    DroneSwarm_eqFunction_14,
    DroneSwarm_eqFunction_15,
    DroneSwarm_eqFunction_16,
    DroneSwarm_eqFunction_17,
    DroneSwarm_eqFunction_18,
    DroneSwarm_eqFunction_19,
    DroneSwarm_eqFunction_20,
    DroneSwarm_eqFunction_21,
    DroneSwarm_eqFunction_22,
    DroneSwarm_eqFunction_23,
    DroneSwarm_eqFunction_24,
    DroneSwarm_eqFunction_25,
    DroneSwarm_eqFunction_26,
    DroneSwarm_eqFunction_27,
    DroneSwarm_eqFunction_28,
    DroneSwarm_eqFunction_29,
    DroneSwarm_eqFunction_30,
    DroneSwarm_eqFunction_31,
    DroneSwarm_eqFunction_32,
    DroneSwarm_eqFunction_33,
    DroneSwarm_eqFunction_34,
    DroneSwarm_eqFunction_35,
    DroneSwarm_eqFunction_36,
    DroneSwarm_eqFunction_37,
    DroneSwarm_eqFunction_38,
    DroneSwarm_eqFunction_39,
    DroneSwarm_eqFunction_40,
    DroneSwarm_eqFunction_41,
    DroneSwarm_eqFunction_42,
    DroneSwarm_eqFunction_43,
    DroneSwarm_eqFunction_44,
    DroneSwarm_eqFunction_45,
    DroneSwarm_eqFunction_46,
    DroneSwarm_eqFunction_47,
    DroneSwarm_eqFunction_48,
    DroneSwarm_eqFunction_49,
    DroneSwarm_eqFunction_50,
    DroneSwarm_eqFunction_51,
    DroneSwarm_eqFunction_52,
    DroneSwarm_eqFunction_53,
    DroneSwarm_eqFunction_54,
    DroneSwarm_eqFunction_55,
    DroneSwarm_eqFunction_56,
    DroneSwarm_eqFunction_57,
    DroneSwarm_eqFunction_58,
    DroneSwarm_eqFunction_59,
    DroneSwarm_eqFunction_60,
    DroneSwarm_eqFunction_61,
    DroneSwarm_eqFunction_62,
    DroneSwarm_eqFunction_63,
    DroneSwarm_eqFunction_64,
    DroneSwarm_eqFunction_65,
    DroneSwarm_eqFunction_66,
    DroneSwarm_eqFunction_67,
    DroneSwarm_eqFunction_68,
    DroneSwarm_eqFunction_69,
    DroneSwarm_eqFunction_70,
    DroneSwarm_eqFunction_71,
    DroneSwarm_eqFunction_72,
    DroneSwarm_eqFunction_73,
    DroneSwarm_eqFunction_74,
    DroneSwarm_eqFunction_75,
    DroneSwarm_eqFunction_76,
    DroneSwarm_eqFunction_77,
    DroneSwarm_eqFunction_78,
    DroneSwarm_eqFunction_79,
    DroneSwarm_eqFunction_80,
    DroneSwarm_eqFunction_81,
    DroneSwarm_eqFunction_82,
    DroneSwarm_eqFunction_83,
    DroneSwarm_eqFunction_84,
    DroneSwarm_eqFunction_85,
    DroneSwarm_eqFunction_86,
    DroneSwarm_eqFunction_87,
    DroneSwarm_eqFunction_88,
    DroneSwarm_eqFunction_89,
    DroneSwarm_eqFunction_90,
    DroneSwarm_eqFunction_91,
    DroneSwarm_eqFunction_92,
    DroneSwarm_eqFunction_93,
    DroneSwarm_eqFunction_94,
    DroneSwarm_eqFunction_95,
    DroneSwarm_eqFunction_96,
    DroneSwarm_eqFunction_97,
    DroneSwarm_eqFunction_98,
    DroneSwarm_eqFunction_99,
    DroneSwarm_eqFunction_100,
    DroneSwarm_eqFunction_101,
    DroneSwarm_eqFunction_102,
    DroneSwarm_eqFunction_103,
    DroneSwarm_eqFunction_104,
    DroneSwarm_eqFunction_105,
    DroneSwarm_eqFunction_106,
    DroneSwarm_eqFunction_107,
    DroneSwarm_eqFunction_108,
    DroneSwarm_eqFunction_109,
    DroneSwarm_eqFunction_110,
    DroneSwarm_eqFunction_111,
    DroneSwarm_eqFunction_112,
    DroneSwarm_eqFunction_113,
    DroneSwarm_eqFunction_114,
    DroneSwarm_eqFunction_115,
    DroneSwarm_eqFunction_116,
    DroneSwarm_eqFunction_117,
    DroneSwarm_eqFunction_118,
    DroneSwarm_eqFunction_119,
    DroneSwarm_eqFunction_120,
    DroneSwarm_eqFunction_121,
    DroneSwarm_eqFunction_122,
    DroneSwarm_eqFunction_123,
    DroneSwarm_eqFunction_124,
    DroneSwarm_eqFunction_125,
    DroneSwarm_eqFunction_126,
    DroneSwarm_eqFunction_127,
    DroneSwarm_eqFunction_128,
    DroneSwarm_eqFunction_129,
    DroneSwarm_eqFunction_130,
    DroneSwarm_eqFunction_131,
    DroneSwarm_eqFunction_132,
    DroneSwarm_eqFunction_133,
    DroneSwarm_eqFunction_134,
    DroneSwarm_eqFunction_135,
    DroneSwarm_eqFunction_136,
    DroneSwarm_eqFunction_137,
    DroneSwarm_eqFunction_138,
    DroneSwarm_eqFunction_139,
    DroneSwarm_eqFunction_140,
    DroneSwarm_eqFunction_141,
    DroneSwarm_eqFunction_142,
    DroneSwarm_eqFunction_143,
    DroneSwarm_eqFunction_144,
    DroneSwarm_eqFunction_145,
    DroneSwarm_eqFunction_146,
    DroneSwarm_eqFunction_147,
    DroneSwarm_eqFunction_148,
    DroneSwarm_eqFunction_149,
    DroneSwarm_eqFunction_150,
    DroneSwarm_eqFunction_151,
    DroneSwarm_eqFunction_152,
    DroneSwarm_eqFunction_153,
    DroneSwarm_eqFunction_154,
    DroneSwarm_eqFunction_155,
    DroneSwarm_eqFunction_156,
    DroneSwarm_eqFunction_157,
    DroneSwarm_eqFunction_158,
    DroneSwarm_eqFunction_159,
    DroneSwarm_eqFunction_160,
    DroneSwarm_eqFunction_161,
    DroneSwarm_eqFunction_162,
    DroneSwarm_eqFunction_163,
    DroneSwarm_eqFunction_164,
    DroneSwarm_eqFunction_165,
    DroneSwarm_eqFunction_166,
    DroneSwarm_eqFunction_167,
    DroneSwarm_eqFunction_168,
    DroneSwarm_eqFunction_169,
    DroneSwarm_eqFunction_170,
    DroneSwarm_eqFunction_171,
    DroneSwarm_eqFunction_172,
    DroneSwarm_eqFunction_173,
    DroneSwarm_eqFunction_174,
    DroneSwarm_eqFunction_175,
    DroneSwarm_eqFunction_176,
    DroneSwarm_eqFunction_177,
    DroneSwarm_eqFunction_178,
    DroneSwarm_eqFunction_179,
    DroneSwarm_eqFunction_180,
    DroneSwarm_eqFunction_181,
    DroneSwarm_eqFunction_182,
    DroneSwarm_eqFunction_183,
    DroneSwarm_eqFunction_184,
    DroneSwarm_eqFunction_185,
    DroneSwarm_eqFunction_186,
    DroneSwarm_eqFunction_187,
    DroneSwarm_eqFunction_188,
    DroneSwarm_eqFunction_189,
    DroneSwarm_eqFunction_190,
    DroneSwarm_eqFunction_191,
    DroneSwarm_eqFunction_192,
    DroneSwarm_eqFunction_193,
    DroneSwarm_eqFunction_194,
    DroneSwarm_eqFunction_195,
    DroneSwarm_eqFunction_196,
    DroneSwarm_eqFunction_197,
    DroneSwarm_eqFunction_198,
    DroneSwarm_eqFunction_199,
    DroneSwarm_eqFunction_200,
    DroneSwarm_eqFunction_201,
    DroneSwarm_eqFunction_202,
    DroneSwarm_eqFunction_203,
    DroneSwarm_eqFunction_204,
    DroneSwarm_eqFunction_205,
    DroneSwarm_eqFunction_206,
    DroneSwarm_eqFunction_207,
    DroneSwarm_eqFunction_208,
    DroneSwarm_eqFunction_209,
    DroneSwarm_eqFunction_210,
    DroneSwarm_eqFunction_211,
    DroneSwarm_eqFunction_212,
    DroneSwarm_eqFunction_213,
    DroneSwarm_eqFunction_214,
    DroneSwarm_eqFunction_215,
    DroneSwarm_eqFunction_216,
    DroneSwarm_eqFunction_217,
    DroneSwarm_eqFunction_218,
    DroneSwarm_eqFunction_219,
    DroneSwarm_eqFunction_220,
    DroneSwarm_eqFunction_221,
    DroneSwarm_eqFunction_222,
    DroneSwarm_eqFunction_223,
    DroneSwarm_eqFunction_224,
    DroneSwarm_eqFunction_225,
    DroneSwarm_eqFunction_226,
    DroneSwarm_eqFunction_227,
    DroneSwarm_eqFunction_228,
    DroneSwarm_eqFunction_229,
    DroneSwarm_eqFunction_230,
    DroneSwarm_eqFunction_231,
    DroneSwarm_eqFunction_232,
    DroneSwarm_eqFunction_233,
    DroneSwarm_eqFunction_234,
    DroneSwarm_eqFunction_235,
    DroneSwarm_eqFunction_236,
    DroneSwarm_eqFunction_237,
    DroneSwarm_eqFunction_238,
    DroneSwarm_eqFunction_239,
    DroneSwarm_eqFunction_240,
    DroneSwarm_eqFunction_241,
    DroneSwarm_eqFunction_242,
    DroneSwarm_eqFunction_243,
    DroneSwarm_eqFunction_244,
    DroneSwarm_eqFunction_245,
    DroneSwarm_eqFunction_246,
    DroneSwarm_eqFunction_247,
    DroneSwarm_eqFunction_248,
    DroneSwarm_eqFunction_249,
    DroneSwarm_eqFunction_250,
    DroneSwarm_eqFunction_251,
    DroneSwarm_eqFunction_252,
    DroneSwarm_eqFunction_253,
    DroneSwarm_eqFunction_254,
    DroneSwarm_eqFunction_255,
    DroneSwarm_eqFunction_256,
    DroneSwarm_eqFunction_257,
    DroneSwarm_eqFunction_258,
    DroneSwarm_eqFunction_259,
    DroneSwarm_eqFunction_260,
    DroneSwarm_eqFunction_261,
    DroneSwarm_eqFunction_262,
    DroneSwarm_eqFunction_263,
    DroneSwarm_eqFunction_264,
    DroneSwarm_eqFunction_265,
    DroneSwarm_eqFunction_266,
    DroneSwarm_eqFunction_267,
    DroneSwarm_eqFunction_268,
    DroneSwarm_eqFunction_269,
    DroneSwarm_eqFunction_270,
    DroneSwarm_eqFunction_271,
    DroneSwarm_eqFunction_272,
    DroneSwarm_eqFunction_273,
    DroneSwarm_eqFunction_274,
    DroneSwarm_eqFunction_275,
    DroneSwarm_eqFunction_276,
    DroneSwarm_eqFunction_277,
    DroneSwarm_eqFunction_278,
    DroneSwarm_eqFunction_279,
    DroneSwarm_eqFunction_280,
    DroneSwarm_eqFunction_281,
    DroneSwarm_eqFunction_282,
    DroneSwarm_eqFunction_283,
    DroneSwarm_eqFunction_284,
    DroneSwarm_eqFunction_285,
    DroneSwarm_eqFunction_286,
    DroneSwarm_eqFunction_287,
    DroneSwarm_eqFunction_288,
    DroneSwarm_eqFunction_289,
    DroneSwarm_eqFunction_290,
    DroneSwarm_eqFunction_291,
    DroneSwarm_eqFunction_292,
    DroneSwarm_eqFunction_293,
    DroneSwarm_eqFunction_294,
    DroneSwarm_eqFunction_295,
    DroneSwarm_eqFunction_296,
    DroneSwarm_eqFunction_297,
    DroneSwarm_eqFunction_298,
    DroneSwarm_eqFunction_299,
    DroneSwarm_eqFunction_300,
    DroneSwarm_eqFunction_301,
    DroneSwarm_eqFunction_302,
    DroneSwarm_eqFunction_303,
    DroneSwarm_eqFunction_304,
    DroneSwarm_eqFunction_305,
    DroneSwarm_eqFunction_306,
    DroneSwarm_eqFunction_307,
    DroneSwarm_eqFunction_308,
    DroneSwarm_eqFunction_309,
    DroneSwarm_eqFunction_310,
    DroneSwarm_eqFunction_311,
    DroneSwarm_eqFunction_312,
    DroneSwarm_eqFunction_313,
    DroneSwarm_eqFunction_314,
    DroneSwarm_eqFunction_315,
    DroneSwarm_eqFunction_316,
    DroneSwarm_eqFunction_317,
    DroneSwarm_eqFunction_318,
    DroneSwarm_eqFunction_319,
    DroneSwarm_eqFunction_320,
    DroneSwarm_eqFunction_321,
    DroneSwarm_eqFunction_322,
    DroneSwarm_eqFunction_323,
    DroneSwarm_eqFunction_324,
    DroneSwarm_eqFunction_325,
    DroneSwarm_eqFunction_326,
    DroneSwarm_eqFunction_327,
    DroneSwarm_eqFunction_328,
    DroneSwarm_eqFunction_329,
    DroneSwarm_eqFunction_330,
    DroneSwarm_eqFunction_331,
    DroneSwarm_eqFunction_332,
    DroneSwarm_eqFunction_333,
    DroneSwarm_eqFunction_334,
    DroneSwarm_eqFunction_335,
    DroneSwarm_eqFunction_336,
    DroneSwarm_eqFunction_337,
    DroneSwarm_eqFunction_338,
    DroneSwarm_eqFunction_339,
    DroneSwarm_eqFunction_340,
    DroneSwarm_eqFunction_341,
    DroneSwarm_eqFunction_342,
    DroneSwarm_eqFunction_343,
    DroneSwarm_eqFunction_344,
    DroneSwarm_eqFunction_345,
    DroneSwarm_eqFunction_346,
    DroneSwarm_eqFunction_347,
    DroneSwarm_eqFunction_348,
    DroneSwarm_eqFunction_349,
    DroneSwarm_eqFunction_350,
    DroneSwarm_eqFunction_351,
    DroneSwarm_eqFunction_352,
    DroneSwarm_eqFunction_353,
    DroneSwarm_eqFunction_354,
    DroneSwarm_eqFunction_355,
    DroneSwarm_eqFunction_356,
    DroneSwarm_eqFunction_357,
    DroneSwarm_eqFunction_358,
    DroneSwarm_eqFunction_359,
    DroneSwarm_eqFunction_360,
    DroneSwarm_eqFunction_361,
    DroneSwarm_eqFunction_362,
    DroneSwarm_eqFunction_363,
    DroneSwarm_eqFunction_364,
    DroneSwarm_eqFunction_365,
    DroneSwarm_eqFunction_366,
    DroneSwarm_eqFunction_367,
    DroneSwarm_eqFunction_368,
    DroneSwarm_eqFunction_369,
    DroneSwarm_eqFunction_370,
    DroneSwarm_eqFunction_371,
    DroneSwarm_eqFunction_372,
    DroneSwarm_eqFunction_373,
    DroneSwarm_eqFunction_374,
    DroneSwarm_eqFunction_375,
    DroneSwarm_eqFunction_376,
    DroneSwarm_eqFunction_377,
    DroneSwarm_eqFunction_378,
    DroneSwarm_eqFunction_379,
    DroneSwarm_eqFunction_380,
    DroneSwarm_eqFunction_381,
    DroneSwarm_eqFunction_382,
    DroneSwarm_eqFunction_383,
    DroneSwarm_eqFunction_384,
    DroneSwarm_eqFunction_385,
    DroneSwarm_eqFunction_386,
    DroneSwarm_eqFunction_387,
    DroneSwarm_eqFunction_388,
    DroneSwarm_eqFunction_389,
    DroneSwarm_eqFunction_390,
    DroneSwarm_eqFunction_391,
    DroneSwarm_eqFunction_392,
    DroneSwarm_eqFunction_393,
    DroneSwarm_eqFunction_394,
    DroneSwarm_eqFunction_395,
    DroneSwarm_eqFunction_396,
    DroneSwarm_eqFunction_397,
    DroneSwarm_eqFunction_398,
    DroneSwarm_eqFunction_399,
    DroneSwarm_eqFunction_400,
    DroneSwarm_eqFunction_401,
    DroneSwarm_eqFunction_402,
    DroneSwarm_eqFunction_403,
    DroneSwarm_eqFunction_404,
    DroneSwarm_eqFunction_405,
    DroneSwarm_eqFunction_406,
    DroneSwarm_eqFunction_407,
    DroneSwarm_eqFunction_408,
    DroneSwarm_eqFunction_409,
    DroneSwarm_eqFunction_410,
    DroneSwarm_eqFunction_411,
    DroneSwarm_eqFunction_412,
    DroneSwarm_eqFunction_413,
    DroneSwarm_eqFunction_414,
    DroneSwarm_eqFunction_415,
    DroneSwarm_eqFunction_416,
    DroneSwarm_eqFunction_417,
    DroneSwarm_eqFunction_418,
    DroneSwarm_eqFunction_419,
    DroneSwarm_eqFunction_420,
    DroneSwarm_eqFunction_421,
    DroneSwarm_eqFunction_422,
    DroneSwarm_eqFunction_423,
    DroneSwarm_eqFunction_424,
    DroneSwarm_eqFunction_425,
    DroneSwarm_eqFunction_426,
    DroneSwarm_eqFunction_427,
    DroneSwarm_eqFunction_428,
    DroneSwarm_eqFunction_429,
    DroneSwarm_eqFunction_430,
    DroneSwarm_eqFunction_431,
    DroneSwarm_eqFunction_432,
    DroneSwarm_eqFunction_433,
    DroneSwarm_eqFunction_434,
    DroneSwarm_eqFunction_435,
    DroneSwarm_eqFunction_436,
    DroneSwarm_eqFunction_437,
    DroneSwarm_eqFunction_438,
    DroneSwarm_eqFunction_439,
    DroneSwarm_eqFunction_440,
    DroneSwarm_eqFunction_441,
    DroneSwarm_eqFunction_442,
    DroneSwarm_eqFunction_443,
    DroneSwarm_eqFunction_444,
    DroneSwarm_eqFunction_445,
    DroneSwarm_eqFunction_446,
    DroneSwarm_eqFunction_447,
    DroneSwarm_eqFunction_448,
    DroneSwarm_eqFunction_449
  };
  
  for (int id = 0; id < 449; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif
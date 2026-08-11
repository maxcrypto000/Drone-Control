/* Initialization */
#include "DroneSwarm_model.h"
#include "DroneSwarm_11mix.h"
#include "DroneSwarm_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void DroneSwarm_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void DroneSwarm_functionInitialEquations_1(DATA *data, threadData_t *threadData);

int DroneSwarm_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  DroneSwarm_functionInitialEquations_0(data, threadData);
  DroneSwarm_functionInitialEquations_1(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}

/* No DroneSwarm_functionInitialEquations_lambda0 function */

int DroneSwarm_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  return 0;
}


#if defined(__cplusplus)
}
#endif

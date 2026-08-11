/* Jacobians */
static _index_t one_dim[1] = { 1 };
static modelica_real nominal_data[1] = { 1.0 };
static modelica_real start_data[1]   = { 0.0 };
static modelica_real min_data[1]   = { -DBL_MAX };
static modelica_real max_data[1]   = { DBL_MAX };
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = {
  .unit = NULL,
  .displayUnit = NULL,
  .min = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) min_data,
    .flexible  = FALSE
  },
  .max = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) max_data,
    .flexible  = FALSE
  },
  .fixed = FALSE,
  .useNominal = FALSE,
  .nominal = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) nominal_data,
    .flexible  = FALSE
  },
  .start = {
    .ndims     = 1,
    .dim_size  = one_dim,
    .data      = (void*) start_data,
    .flexible  = FALSE
  }
};

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define DroneSwarm_INDEX_JAC_ADJ 0
int DroneSwarm_functionJacADJ_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianADJ(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacADJ_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define DroneSwarm_INDEX_JAC_H 1
int DroneSwarm_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacH_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define DroneSwarm_INDEX_JAC_F 2
int DroneSwarm_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacF_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define DroneSwarm_INDEX_JAC_D 3
int DroneSwarm_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacD_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define DroneSwarm_INDEX_JAC_C 4
int DroneSwarm_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacC_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define DroneSwarm_INDEX_JAC_B 5
int DroneSwarm_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacB_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define DroneSwarm_INDEX_JAC_A 6
int DroneSwarm_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int DroneSwarm_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);
void DroneSwarm_JacA_DAG(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
  extern "C" {
#endif
  int DroneSwarm_mayer(DATA* data, modelica_real** res, short*);
  int DroneSwarm_lagrange(DATA* data, modelica_real** res, short *, short *);
  int DroneSwarm_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int DroneSwarm_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int DroneSwarm_setInputData(DATA *data, const modelica_boolean file);
  int DroneSwarm_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif

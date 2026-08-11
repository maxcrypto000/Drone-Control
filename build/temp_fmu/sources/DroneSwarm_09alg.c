/* Algebraic */
#include "DroneSwarm_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* forwarded equations */
extern void DroneSwarm_eqFunction_1812(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1813(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1814(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1815(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1816(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1817(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1818(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1819(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1820(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1821(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1822(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1823(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1848(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1849(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1850(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1851(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1852(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1853(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1854(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1855(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1856(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1857(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1858(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1859(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1860(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1861(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1862(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1863(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1864(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1865(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1866(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1867(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1868(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1869(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1870(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1871(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1872(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1873(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1874(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1875(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1876(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1877(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1878(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1879(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1880(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1881(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1882(DATA* data, threadData_t *threadData);
extern void DroneSwarm_eqFunction_1883(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[48])(DATA*, threadData_t*) = {
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
  
  if (data->simulationInfo->evalSelection) {
    for (int i = 0; i < data->simulationInfo->evalSelection->n; i++) {
      int id = data->simulationInfo->evalSelection->idx[i];
      eqFunctions[id](data, threadData);
    }
  } else {
    for (int id = 0; id < 48; id++) {
      eqFunctions[id](data, threadData);
    }
  }
}
/* for continuous time variables */
int DroneSwarm_functionAlgebraics(DATA *data, threadData_t *threadData)
{

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  DroneSwarm_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  return 0;
}

#ifdef __cplusplus
}
#endif

#include "omc_simulation_settings.h"
#include "DroneSwarm_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "DroneSwarm_includes.h"


DLLDirection
modelica_real omc_DroneSwarm_drones_calculate__min__dist(threadData_t *threadData, real_array _x, real_array _y, real_array _z, modelica_integer _target_idx)
{
  modelica_real _min_d;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _min_d has no default value.
  _min_d = 9999.0;

  tmp8 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = tmp8;
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp5, tmp7); _j += tmp6)
    {
      if((_j != _target_idx))
      {
        tmp1 = real_array_get(_x, 1, _target_idx) - real_array_get(_x, 1, _j);
        tmp2 = real_array_get(_y, 1, _target_idx) - real_array_get(_y, 1, _j);
        tmp3 = real_array_get(_z, 1, _target_idx) - real_array_get(_z, 1, _j);
        tmp4 = (tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3);
        if(!(tmp4 >= 0.0))
        {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert(threadData, info, "Model error: Argument of sqrt((x[target_idx] - x[j]) ^ 2.0 + (y[target_idx] - y[j]) ^ 2.0 + (z[target_idx] - z[j]) ^ 2.0) was %g should be >= 0", tmp4);
        }
        _min_d = fmin(_min_d,sqrt(tmp4));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _min_d;
}
modelica_metatype boxptr_DroneSwarm_drones_calculate__min__dist(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _z, modelica_metatype _target_idx)
{
  modelica_integer tmp1;
  modelica_real _min_d;
  modelica_metatype out_min_d;
  tmp1 = mmc_unbox_integer(_target_idx);
  _min_d = omc_DroneSwarm_drones_calculate__min__dist(threadData, *((base_array_t*)_x), *((base_array_t*)_y), *((base_array_t*)_z), tmp1);
  out_min_d = mmc_mk_rcon(_min_d);
  return out_min_d;
}

modelica_integer omc_DroneSwarm_drones_check__packet__loss(threadData_t *threadData, modelica_real _time_val, modelica_real _drone_id, modelica_real _drop_prob)
{
  double _time_val_ext;
  double _drone_id_ext;
  double _drop_prob_ext;
  int _is_dropped_ext;
  modelica_integer _is_dropped;
  // _is_dropped has no default value.
  _time_val_ext = (double) _time_val;
  _drone_id_ext = (double) _drone_id;
  _drop_prob_ext = (double) _drop_prob;
  _is_dropped_ext = check_packet_loss(_time_val_ext, _drone_id_ext, _drop_prob_ext);
  _is_dropped = (modelica_integer)_is_dropped_ext;
  return _is_dropped;
}
modelica_metatype boxptr_DroneSwarm_drones_check__packet__loss(threadData_t *threadData, modelica_metatype _time_val, modelica_metatype _drone_id, modelica_metatype _drop_prob)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _is_dropped;
  modelica_metatype out_is_dropped;
  tmp1 = mmc_unbox_real(_time_val);
  tmp2 = mmc_unbox_real(_drone_id);
  tmp3 = mmc_unbox_real(_drop_prob);
  _is_dropped = omc_DroneSwarm_drones_check__packet__loss(threadData, tmp1, tmp2, tmp3);
  out_is_dropped = mmc_mk_icon(_is_dropped);
  return out_is_dropped;
}

modelica_real omc_DroneSwarm_drones_get__ai__thrust(threadData_t *threadData, modelica_real _x, modelica_real _y, modelica_real _z, modelica_real _bat, modelica_real _min_dist, modelica_real _drone_id, modelica_real _delta_x, modelica_real _delta_y, modelica_real _delta_z, modelica_real _current_time, modelica_real *out_uy, modelica_real *out_uz)
{
  double _x_ext;
  double _y_ext;
  double _z_ext;
  double _bat_ext;
  double _min_dist_ext;
  double _drone_id_ext;
  double _delta_x_ext;
  double _delta_y_ext;
  double _delta_z_ext;
  double _current_time_ext;
  double _ux_ext;
  double _uy_ext;
  double _uz_ext;
  modelica_real _ux;
  modelica_real _uy;
  modelica_real _uz;
  // _ux has no default value.
  // _uy has no default value.
  // _uz has no default value.
  _x_ext = (double) _x;
  _y_ext = (double) _y;
  _z_ext = (double) _z;
  _bat_ext = (double) _bat;
  _min_dist_ext = (double) _min_dist;
  _drone_id_ext = (double) _drone_id;
  _delta_x_ext = (double) _delta_x;
  _delta_y_ext = (double) _delta_y;
  _delta_z_ext = (double) _delta_z;
  _current_time_ext = (double) _current_time;
  get_ai_thrust(_x_ext, _y_ext, _z_ext, _bat_ext, _min_dist_ext, _drone_id_ext, _delta_x_ext, _delta_y_ext, _delta_z_ext, _current_time_ext, &_ux_ext, &_uy_ext, &_uz_ext);
  _ux = (modelica_real)_ux_ext;
  _uy = (modelica_real)_uy_ext;
  _uz = (modelica_real)_uz_ext;
  if (out_uy) { *out_uy = _uy; }
  if (out_uz) { *out_uz = _uz; }
  return _ux;
}
modelica_metatype boxptr_DroneSwarm_drones_get__ai__thrust(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _z, modelica_metatype _bat, modelica_metatype _min_dist, modelica_metatype _drone_id, modelica_metatype _delta_x, modelica_metatype _delta_y, modelica_metatype _delta_z, modelica_metatype _current_time, modelica_metatype *out_uy, modelica_metatype *out_uz)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real _uy;
  modelica_real _uz;
  modelica_real _ux;
  modelica_metatype out_ux;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y);
  tmp3 = mmc_unbox_real(_z);
  tmp4 = mmc_unbox_real(_bat);
  tmp5 = mmc_unbox_real(_min_dist);
  tmp6 = mmc_unbox_real(_drone_id);
  tmp7 = mmc_unbox_real(_delta_x);
  tmp8 = mmc_unbox_real(_delta_y);
  tmp9 = mmc_unbox_real(_delta_z);
  tmp10 = mmc_unbox_real(_current_time);
  _ux = omc_DroneSwarm_drones_get__ai__thrust(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, &_uy, &_uz);
  out_ux = mmc_mk_rcon(_ux);
  if (out_uy) { *out_uy = mmc_mk_rcon(_uy); }
  if (out_uz) { *out_uz = mmc_mk_rcon(_uz); }
  return out_ux;
}

DLLDirection
modelica_real omc_Modelica_Math_Vectors_length(threadData_t *threadData, real_array _v)
{
  modelica_real _result;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmp1 = mul_real_scalar_product(_v, _v);
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(v * v) was %g should be >= 0", tmp1);
  }
  _result = sqrt(tmp1);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_length(threadData_t *threadData, modelica_metatype _v)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Math_Vectors_length(threadData, *((base_array_t*)_v));
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLDirection
real_array omc_Modelica_Math_Vectors_normalize(threadData_t *threadData, real_array _v, modelica_real _eps)
{
  real_array _result;
  modelica_integer tmp1;
  modelica_boolean tmp2;
  real_array tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_v, ((modelica_integer) 1));
  alloc_real_array(&(_result), 1, (_index_t)tmp1); // _result has no default value.
  tmp2 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _v) >= _eps);
  if(tmp2)
  {
    tmp3 = div_alloc_real_array_scalar(_v, omc_Modelica_Math_Vectors_length(threadData, _v));
  }
  else
  {
    tmp3 = div_alloc_real_array_scalar(_v, _eps);
  }
  real_array_copy_data(tmp3, _result);
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Vectors_normalize(threadData_t *threadData, modelica_metatype _v, modelica_metatype _eps)
{
  modelica_real tmp1;
  real_array _result;
  modelica_integer tmp2;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_eps);
  _result = omc_Modelica_Math_Vectors_normalize(threadData, *((base_array_t*)_v), tmp1);
  out_result = mmc_mk_modelica_array(_result);
  return out_result;
}

Modelica_Mechanics_MultiBody_Frames_Orientation omc_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, real_array omc_T, real_array omc_w)
{
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp1;
  tmp1._T = omc_T;
  tmp1._w = omc_w;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_Orientation(threadData_t *threadData, modelica_metatype _T, modelica_metatype _w)
{
  return mmc_mk_box3(3, &Modelica_Mechanics_MultiBody_Frames_Orientation__desc, _T, _w);
}

DLLDirection
real_array omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, real_array _n_x, real_array _n_y)
{
  real_array _T;
  real_array _e_x;
  modelica_boolean tmp1;
  real_array tmp2;
  real_array _e_y;
  modelica_boolean tmp3;
  real_array tmp4;
  real_array _n_z_aux;
  real_array tmp5;
  real_array _n_y_aux;
  modelica_boolean tmp6;
  real_array tmp7;
  modelica_boolean tmp8;
  real_array tmp9;
  real_array _e_z_aux;
  real_array tmp10;
  real_array _e_z;
  real_array tmp11;
  real_array tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_T), 2, (_index_t)3, (_index_t)3); // _T has no default value.
  alloc_real_array(&(_e_x), 1, (_index_t)3);
  tmp1 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _n_x) < 1e-10);
  if(tmp1)
  {
    tmp2 = _OMC_LIT1;
  }
  else
  {
    tmp2 = omc_Modelica_Math_Vectors_normalize(threadData, _n_x, 2.220446049250313e-14);
  }
  real_array_copy_data(tmp2, _e_x);
  
  alloc_real_array(&(_e_y), 1, (_index_t)3);
  tmp3 = (modelica_boolean)(omc_Modelica_Math_Vectors_length(threadData, _n_y) < 1e-10);
  if(tmp3)
  {
    tmp4 = _OMC_LIT2;
  }
  else
  {
    tmp4 = omc_Modelica_Math_Vectors_normalize(threadData, _n_y, 2.220446049250313e-14);
  }
  real_array_copy_data(tmp4, _e_y);
  
  alloc_real_array(&(_n_z_aux), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp5, 3, (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_e_y, 1, ((modelica_integer) 3))) - ((real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_e_y, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_e_y, 1, ((modelica_integer) 1))) - ((real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_e_y, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_e_y, 1, ((modelica_integer) 2))) - ((real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_e_y, 1, ((modelica_integer) 1)))));
  real_array_copy_data(tmp5, _n_z_aux);
  
  alloc_real_array(&(_n_y_aux), 1, (_index_t)3);
  tmp8 = (modelica_boolean)((real_array_get(_n_z_aux, 1, ((modelica_integer) 1))) * (real_array_get(_n_z_aux, 1, ((modelica_integer) 1))) + (real_array_get(_n_z_aux, 1, ((modelica_integer) 2))) * (real_array_get(_n_z_aux, 1, ((modelica_integer) 2))) + (real_array_get(_n_z_aux, 1, ((modelica_integer) 3))) * (real_array_get(_n_z_aux, 1, ((modelica_integer) 3))) > 1e-6);
  if(tmp8)
  {
    tmp9 = _e_y;
  }
  else
  {
    tmp6 = (modelica_boolean)(fabs(real_array_get(_e_x, 1, ((modelica_integer) 1))) > 1e-6);
    if(tmp6)
    {
      tmp7 = _OMC_LIT2;
    }
    else
    {
      tmp7 = _OMC_LIT1;
    }
    tmp9 = tmp7;
  }
  real_array_copy_data(tmp9, _n_y_aux);
  
  alloc_real_array(&(_e_z_aux), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp10, 3, (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 3))) - ((real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 3))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 1))) - ((real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get(_e_x, 1, ((modelica_integer) 1))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 2))) - ((real_array_get(_e_x, 1, ((modelica_integer) 2))) * (real_array_get(_n_y_aux, 1, ((modelica_integer) 1)))));
  real_array_copy_data(tmp10, _e_z_aux);
  
  alloc_real_array(&(_e_z), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Math_Vectors_normalize(threadData, _e_z_aux, 2.220446049250313e-14), _e_z);
  
  array_alloc_scalar_real_array(&tmp12, 3, (modelica_real)(real_array_get(_e_z, 1, ((modelica_integer) 2))) * (real_array_get(_e_x, 1, ((modelica_integer) 3))) - ((real_array_get(_e_z, 1, ((modelica_integer) 3))) * (real_array_get(_e_x, 1, ((modelica_integer) 2)))), (modelica_real)(real_array_get(_e_z, 1, ((modelica_integer) 3))) * (real_array_get(_e_x, 1, ((modelica_integer) 1))) - ((real_array_get(_e_z, 1, ((modelica_integer) 1))) * (real_array_get(_e_x, 1, ((modelica_integer) 3)))), (modelica_real)(real_array_get(_e_z, 1, ((modelica_integer) 1))) * (real_array_get(_e_x, 1, ((modelica_integer) 2))) - ((real_array_get(_e_z, 1, ((modelica_integer) 2))) * (real_array_get(_e_x, 1, ((modelica_integer) 1)))));
  array_alloc_real_array(&tmp11, 3, _e_x, tmp12, _e_z);
  real_array_copy_data(tmp11, _T);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData_t *threadData, modelica_metatype _n_x, modelica_metatype _n_y)
{
  real_array _T;
  modelica_metatype out_T;
  _T = omc_Modelica_Mechanics_MultiBody_Frames_TransformationMatrices_from__nxy(threadData, *((base_array_t*)_n_x), *((base_array_t*)_n_y));
  out_T = mmc_mk_modelica_array(_T);
  return out_T;
}

#ifdef __cplusplus
}
#endif

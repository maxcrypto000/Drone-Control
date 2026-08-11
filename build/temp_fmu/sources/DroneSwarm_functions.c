#include "omc_simulation_settings.h"
#include "DroneSwarm_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "DroneSwarm_includes.h"


modelica_real omc_DroneSwarm_drones_get__ai__thrust(threadData_t *threadData, modelica_real _x, modelica_real _y, modelica_real _z, real_array _swarm_x_real, real_array _swarm_y_real, real_array _swarm_z_real, real_array _lidar_grid, modelica_real _drone_id, modelica_real _current_time, modelica_real *out_uy, modelica_real *out_uz)
{
  double _x_ext;
  double _y_ext;
  double _z_ext;
  double _drone_id_ext;
  double _current_time_ext;
  double _ux_ext;
  double _uy_ext;
  double _uz_ext;
  const double* _swarm_x_real_c89;
  const double* _swarm_y_real_c89;
  const double* _swarm_z_real_c89;
  const double* _lidar_grid_c89;
  modelica_real _ux;
  modelica_real _uy;
  modelica_real _uz;
  // _ux has no default value.
  // _uy has no default value.
  // _uz has no default value.
  _x_ext = (double) _x;
  _y_ext = (double) _y;
  _z_ext = (double) _z;
  _drone_id_ext = (double) _drone_id;
  _current_time_ext = (double) _current_time;
  _swarm_x_real_c89 = data_of_real_c89_array(_swarm_x_real);
  _swarm_y_real_c89 = data_of_real_c89_array(_swarm_y_real);
  _swarm_z_real_c89 = data_of_real_c89_array(_swarm_z_real);
  _lidar_grid_c89 = data_of_real_c89_array(_lidar_grid);
  get_ai_thrust(_x_ext, _y_ext, _z_ext, _swarm_x_real_c89, _swarm_y_real_c89, _swarm_z_real_c89, _lidar_grid_c89, _drone_id_ext, _current_time_ext, &_ux_ext, &_uy_ext, &_uz_ext);
  _ux = (modelica_real)_ux_ext;
  _uy = (modelica_real)_uy_ext;
  _uz = (modelica_real)_uz_ext;
  if (out_uy) { *out_uy = _uy; }
  if (out_uz) { *out_uz = _uz; }
  return _ux;
}
modelica_metatype boxptr_DroneSwarm_drones_get__ai__thrust(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _z, modelica_metatype _swarm_x_real, modelica_metatype _swarm_y_real, modelica_metatype _swarm_z_real, modelica_metatype _lidar_grid, modelica_metatype _drone_id, modelica_metatype _current_time, modelica_metatype *out_uy, modelica_metatype *out_uz)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _uy;
  modelica_real _uz;
  modelica_real _ux;
  modelica_metatype out_ux;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y);
  tmp3 = mmc_unbox_real(_z);
  tmp4 = mmc_unbox_real(_drone_id);
  tmp5 = mmc_unbox_real(_current_time);
  _ux = omc_DroneSwarm_drones_get__ai__thrust(threadData, tmp1, tmp2, tmp3, *((base_array_t*)_swarm_x_real), *((base_array_t*)_swarm_y_real), *((base_array_t*)_swarm_z_real), *((base_array_t*)_lidar_grid), tmp4, tmp5, &_uy, &_uz);
  out_ux = mmc_mk_rcon(_ux);
  if (out_uy) { *out_uy = mmc_mk_rcon(_uy); }
  if (out_uz) { *out_uz = mmc_mk_rcon(_uz); }
  return out_ux;
}

DLLDirection
real_array omc_DroneSwarm_drones_scan__lidar(threadData_t *threadData, modelica_real _drone_x, modelica_real _drone_y, modelica_real _drone_z, real_array _swarm_x, real_array _swarm_y, real_array _swarm_z, modelica_integer _my_idx, modelica_integer _res, modelica_real _max_range, modelica_real _x_min, modelica_real _x_max, modelica_real _y_min, modelica_real _y_max, modelica_real _z_min, modelica_real _z_max)
{
  real_array _cloud;
  modelica_real _rel_x;
  modelica_real _rel_y;
  modelica_real _rel_z;
  modelica_integer _idx_x;
  modelica_integer _idx_y;
  modelica_integer _idx_z;
  modelica_real _voxel_size;
  modelica_real _glob_x;
  modelica_real _glob_y;
  modelica_real _glob_z;
  modelica_real tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  _tailrecursive: OMC_LABEL_UNUSED
  alloc_real_array(&(_cloud), 3, (_index_t)_res, (_index_t)_res, (_index_t)_res); // _cloud has no default value.
  // _rel_x has no default value.
  // _rel_y has no default value.
  // _rel_z has no default value.
  // _idx_x has no default value.
  // _idx_y has no default value.
  // _idx_z has no default value.
  // _voxel_size has no default value.
  // _glob_x has no default value.
  // _glob_y has no default value.
  // _glob_z has no default value.
  tmp1 = 0.0;
  fill_alloc_real_array(&tmp2, tmp1, 3, _res, _res, _res);
  real_array_copy_data(tmp2, _cloud);

  tmp3 = ((modelica_real)_res);
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * max_range / /*Real*/(res)");}
  _voxel_size = ((2.0) * (_max_range)) / tmp3;

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = _res;
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp10, tmp12); _i += tmp11)
    {
      tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = _res;
      if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
      {
        modelica_integer _j;
        for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp7, tmp9); _j += tmp8)
        {
          tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = _res;
          if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
          {
            modelica_integer _k;
            for(_k = ((modelica_integer) 1); in_range_integer(_k, tmp4, tmp6); _k += tmp5)
            {
              _rel_x = (((modelica_real)_i) - 0.5) * (_voxel_size) - _max_range;

              _rel_y = (((modelica_real)_j) - 0.5) * (_voxel_size) - _max_range;

              _rel_z = (((modelica_real)_k) - 0.5) * (_voxel_size) - _max_range;

              _glob_x = _drone_x + _rel_x;

              _glob_y = _drone_y + _rel_y;

              _glob_z = _drone_z + _rel_z;

              if(((((((_glob_x <= _x_min) || (_glob_x >= _x_max)) || (_glob_y <= _y_min)) || (_glob_y >= _y_max)) || (_glob_z <= _z_min)) || (_glob_z >= _z_max)))
              {
                real_array_get(_cloud, 3, _i, _j, _k) = 1.0;
              }
            }
          }
        }
      }
    }
  }

  tmp19 = size_of_dimension_base_array(_swarm_x, ((modelica_integer) 1));
  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = tmp19;
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _j;
    for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp16, tmp18); _j += tmp17)
    {
      if((_j != _my_idx))
      {
        _rel_x = real_array_get(_swarm_x, 1, _j) - _drone_x;

        _rel_y = real_array_get(_swarm_y, 1, _j) - _drone_y;

        _rel_z = real_array_get(_swarm_z, 1, _j) - _drone_z;

        if((((fabs(_rel_x) <= _max_range) && (fabs(_rel_y) <= _max_range)) && (fabs(_rel_z) <= _max_range)))
        {
          tmp13 = (2.0) * (_max_range);
          if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(rel_x + max_range) / (2.0 * max_range)");}
          _idx_x = ((modelica_integer)floor(floor(((_rel_x + _max_range) / tmp13) * (((modelica_real)_res - ((modelica_integer) 1)))))) + ((modelica_integer) 1);

          tmp14 = (2.0) * (_max_range);
          if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(rel_y + max_range) / (2.0 * max_range)");}
          _idx_y = ((modelica_integer)floor(floor(((_rel_y + _max_range) / tmp14) * (((modelica_real)_res - ((modelica_integer) 1)))))) + ((modelica_integer) 1);

          tmp15 = (2.0) * (_max_range);
          if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(rel_z + max_range) / (2.0 * max_range)");}
          _idx_z = ((modelica_integer)floor(floor(((_rel_z + _max_range) / tmp15) * (((modelica_real)_res - ((modelica_integer) 1)))))) + ((modelica_integer) 1);

          _idx_x = modelica_integer_max((modelica_integer)(((modelica_integer) 1)),(modelica_integer)(modelica_integer_min((modelica_integer)(_res),(modelica_integer)(_idx_x))));

          _idx_y = modelica_integer_max((modelica_integer)(((modelica_integer) 1)),(modelica_integer)(modelica_integer_min((modelica_integer)(_res),(modelica_integer)(_idx_y))));

          _idx_z = modelica_integer_max((modelica_integer)(((modelica_integer) 1)),(modelica_integer)(modelica_integer_min((modelica_integer)(_res),(modelica_integer)(_idx_z))));

          real_array_get(_cloud, 3, _idx_x, _idx_y, _idx_z) = 1.0;
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _cloud;
}
modelica_metatype boxptr_DroneSwarm_drones_scan__lidar(threadData_t *threadData, modelica_metatype _drone_x, modelica_metatype _drone_y, modelica_metatype _drone_z, modelica_metatype _swarm_x, modelica_metatype _swarm_y, modelica_metatype _swarm_z, modelica_metatype _my_idx, modelica_metatype _res, modelica_metatype _max_range, modelica_metatype _x_min, modelica_metatype _x_max, modelica_metatype _y_min, modelica_metatype _y_max, modelica_metatype _z_min, modelica_metatype _z_max)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  real_array _cloud;
  modelica_metatype out_cloud;
  tmp1 = mmc_unbox_real(_drone_x);
  tmp2 = mmc_unbox_real(_drone_y);
  tmp3 = mmc_unbox_real(_drone_z);
  tmp4 = mmc_unbox_integer(_my_idx);
  tmp5 = mmc_unbox_integer(_res);
  tmp6 = mmc_unbox_real(_max_range);
  tmp7 = mmc_unbox_real(_x_min);
  tmp8 = mmc_unbox_real(_x_max);
  tmp9 = mmc_unbox_real(_y_min);
  tmp10 = mmc_unbox_real(_y_max);
  tmp11 = mmc_unbox_real(_z_min);
  tmp12 = mmc_unbox_real(_z_max);
  _cloud = omc_DroneSwarm_drones_scan__lidar(threadData, tmp1, tmp2, tmp3, *((base_array_t*)_swarm_x), *((base_array_t*)_swarm_y), *((base_array_t*)_swarm_z), tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  out_cloud = mmc_mk_modelica_array(_cloud);
  return out_cloud;
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

#pragma once
#include "json.hpp"
#include <cmath>
namespace ngp {
inline bool damper_coefficient_binding_matches(const nlohmann::json& b,const nlohmann::json& reference){
 try{
  if(b.at("contract")!="car_config_declared_blend_v1"||b.at("source")!="CAR_CONFIG_DECLARED_DAMPER"||
     b.at("car_id")!=reference.at("car_id")||b.at("physical_output_allowed")!=false||b.at("curve_equivalence_verified")!=false)return false;
  const auto& wheels=b.at("coefficients");if(!wheels.is_array()||wheels.size()!=4)return false;
  for(unsigned i=0;i<4;++i)for(const char* key:{"DAMP_BUMP","DAMP_FAST_BUMP","DAMP_REBOUND","DAMP_FAST_REBOUND","DAMP_FAST_BUMPTHRESHOLD","DAMP_FAST_REBOUNDTHRESHOLD"}){
   const auto& expected=reference.at("damper_reference").at("axles").at(i<2?"FRONT":"REAR").at(key);
   const auto& actual=wheels[i].at(key);if(!expected.is_number()||!actual.is_number())return false;
   double a=expected.get<double>(),v=actual.get<double>();if(!std::isfinite(a)||!std::isfinite(v)||a<0.||a!=v)return false;
  }
  return true;
 }catch(...){return false;}
}
}

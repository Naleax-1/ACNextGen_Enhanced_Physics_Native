#pragma once
#include "json.hpp"
#include <cmath>
namespace ngp {
inline bool spring_base_binding_matches(const nlohmann::json& b,const nlohmann::json& reference){
 try{
  if(b.at("contract")!="car_config_base_rate_v1"||b.at("source")!="CAR_CONFIG_DECLARED_SPRING_RATE"||
     b.at("car_id")!=reference.at("car_id")||b.at("physical_output_allowed")!=false||b.at("wheel_rate_qualified")!=false)return false;
  const auto& rates=b.at("base_rate");if(!rates.is_array()||rates.size()!=4)return false;
  for(unsigned i=0;i<4;++i){const auto& expected=reference.at("car_config").at(i<2?"FRONT":"REAR").at("SPRING_RATE");
   if(!expected.is_number()||!rates[i].is_number())return false;
   double a=expected.get<double>(),v=rates[i].get<double>();
   if(!std::isfinite(a)||!std::isfinite(v)||a<=0.||a!=v)return false;
  }
  return true;
 }catch(...){return false;}
}
}

#pragma once
#include "json.hpp"
#include <cmath>
namespace ngp {
// Echoed model inputs must match this exact update, not a prior shared alias.
inline bool chassis_temperature_binding_matches(const nlohmann::json& b,const nlohmann::json& input){
 try{
  if(!input.at("id").is_string()||input.at("id").get<std::string>().empty())return false;
  if(b.at("owner")!="chassis_roll"||b.at("contract")!="current_wheel_brake_temperature_max_v1"||b.at("source")!="CURRENT_WHEEL_BRAKE_TEMPERATURE_MAX"||
     b.at("car_id")!=input.at("id")||b.at("physical_output_allowed")!=false||b.at("thermal_coupling_verified")!=false)return false;
  const auto& temperatures=b.at("temperature_input_c");if(!temperatures.is_array()||temperatures.size()!=4)return false;
  double maximum=-273.15;
  for(unsigned i=0;i<4;++i){
   const auto& value=input.at("wheels").at(std::to_string(i)).at("brakeTemperature");
   if(!value.is_number()||!temperatures[i].is_number())return false;
   const double v=value.get<double>(),t=temperatures[i].get<double>();
   if(!std::isfinite(v)||!std::isfinite(t)||v< -273.15||v!=t)return false;
   maximum=std::fmax(maximum,v);
  }
  const auto& stress=b.at("thermal_stress");if(!stress.is_number())return false;
  double expected=std::fmax(0.,std::fmin(1.,(maximum-25.)/700.));
  return std::isfinite(stress.get<double>())&&std::abs(stress.get<double>()-expected)<=1e-12;
 }catch(...){return false;}
}
}

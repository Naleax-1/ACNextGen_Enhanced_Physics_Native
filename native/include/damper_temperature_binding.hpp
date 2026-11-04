#pragma once
#include "json.hpp"
#include <cmath>
namespace ngp {
// Echoed model inputs must match this exact update, not a prior shared alias.
inline bool damper_temperature_binding_matches(const nlohmann::json& b,const nlohmann::json& input){
 try{
  if(!input.at("id").is_string()||input.at("id").get<std::string>().empty())return false;
  if(b.at("contract")!="current_wheel_brake_temperature_v1"||b.at("source")!="CURRENT_WHEEL_BRAKE_TEMPERATURE"||
     b.at("car_id")!=input.at("id")||b.at("physical_output_allowed")!=false||b.at("thermal_coupling_verified")!=false)return false;
  const auto& temperatures=b.at("temperature_input_c");if(!temperatures.is_array()||temperatures.size()!=4)return false;
  for(unsigned i=0;i<4;++i){
   const auto& value=input.at("wheels").at(std::to_string(i)).at("brakeTemperature");
   if(!value.is_number()||!temperatures[i].is_number())return false;
   const double v=value.get<double>(),t=temperatures[i].get<double>();
   if(!std::isfinite(v)||!std::isfinite(t)||v< -273.15||v!=t)return false;
  }
  return true;
 }catch(...){return false;}
}
}

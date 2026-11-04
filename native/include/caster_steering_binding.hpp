#pragma once
#include "json.hpp"
#include <cmath>
namespace ngp {
inline bool caster_steering_binding_matches(const nlohmann::json& b,const nlohmann::json& input){
 try{
  const auto& v=input.at("frontSteeringDeflection");const auto& id=input.at("id");const auto& frame=input.at("frame");
  if(!id.is_string()||id.get<std::string>().empty()||!frame.is_number())return false;
  double f=frame.get<double>();if(!std::isfinite(f)||f<0||f>9007199254740991.||std::floor(f)!=f)return false;
  if(v.at("schema")!=1||v.at("car_id")!=id||v.at("frame")!=frame||v.at("baseline_subtracted")!=true||v.at("sign_convention")!="model_positive_steer")return false;
  if(b.at("owner")!="caster_effect"||b.at("contract")!="current_front_deflection_radians_v1"||b.at("source")!="CURRENT_FRONT_DEFLECTION_RADIANS"||b.at("car_id")!=id||b.at("frame")!=frame||b.at("physical_output_allowed")!=false||b.at("baseline_subtracted")!=true||b.at("sign_convention")!="model_positive_steer")return false;
  const auto& out=b.at("deflection_rad");if(!out.is_array()||out.size()!=2)return false;
  for(unsigned i=0;i<2;++i){
   const auto& raw=v.at("deflection_rad").at(std::to_string(i));if(!raw.is_number()||!out[i].is_number())return false;
   double n=raw.get<double>(),o=out[i].get<double>();if(!std::isfinite(n)||!std::isfinite(o)||std::abs(n)>1.5707963267948966||n!=o)return false;
  }
  return true;
 }catch(...){return false;}
}
}

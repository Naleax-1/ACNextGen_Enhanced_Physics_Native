#pragma once
#include "json.hpp"
#include <cmath>
namespace ngp {
inline bool suspension_travel_binding_matches(const nlohmann::json& b,const nlohmann::json& input){
 try{
  if(!input.at("id").is_string()||input.at("id").get<std::string>().empty()||
     b.at("contract")!="per_update_travel_v1"||b.at("owner")!="suspension"||
     b.at("car_id")!=input.at("id")||b.at("physical_output_allowed")!=false)return false;
  const auto& values=b.at("travel");const auto& published=b.at("published");
  if(!values.is_array()||values.size()!=4||!published.is_array()||published.size()!=4)return false;
  for(unsigned i=0;i<4;++i){
   const auto& raw=input.at("wheels").at(std::to_string(i)).at("suspensionTravel");
   if(!raw.is_number()||!values[i].is_number()||!published[i].is_number())return false;
   double r=raw.get<double>(),v=values[i].get<double>(),p=published[i].get<double>();
   if(!std::isfinite(r)||!std::isfinite(v)||!std::isfinite(p)||std::abs(r)>1.||r!=v||v!=p)return false;
  }
  return true;
 }catch(...){return false;}
}
}

#pragma once
#include "json.hpp"
#include <cmath>
#include <cstdint>
namespace ngp {
// Observation only: does not return hints or grant actuator permission.
inline nlohmann::json compare_tyre_reference(const nlohmann::json& shadow,
 const double* current,uint32_t current_mask,bool matched){
 using J=nlohmann::json;
 J rejected={{"available",false},{"application_enabled",false}};
 if(!matched||!current||current_mask>15||!shadow.is_object()||
    !shadow.contains("valid")||shadow["valid"]!=true||
    !shadow.contains("mask")||!shadow["mask"].is_number_unsigned()||
    !shadow.contains("coefficient")||!shadow["coefficient"].is_array()||shadow["coefficient"].size()!=4)return rejected;
 auto raw_mask=shadow["mask"].get<uint64_t>();if(raw_mask>15)return rejected;
 uint32_t mask=uint32_t(raw_mask);
 if(mask&~current_mask)return rejected;
 J candidate=J::array(),baseline=J::array(),delta=J::array(),ratio=J::array();
 for(unsigned i=0;i<4;++i){
  auto& value=shadow["coefficient"][i];if(!value.is_number())return rejected;
  double c=value.get<double>(),b=current[i];
  if(!std::isfinite(c)||!std::isfinite(b)||c<0||c>8||b<0||b>8||
     (!(mask&(1u<<i))&&c!=0)||(!(current_mask&(1u<<i))&&b!=0))return rejected;
  candidate.push_back(c);baseline.push_back(b);delta.push_back(c-b);
  ratio.push_back(b>0?J(c/b):J());
 }
 return {{"available",true},{"application_enabled",false},{"candidate_mask",mask},
  {"current_mask",current_mask},{"candidate_ns_m",candidate},{"current_ns_m",baseline},
  {"delta_ns_m",delta},{"candidate_to_current_ratio",ratio}};
}
}

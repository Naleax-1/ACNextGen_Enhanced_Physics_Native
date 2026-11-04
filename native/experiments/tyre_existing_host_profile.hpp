#pragma once
#include "json.hpp"
#include <string>
namespace ngp::experiment {
// Identity binding for the already deployed body-only effect; never grants
// new model gain, wheel reaction or torque calibration.
struct ExistingTyreHostProfile {
 bool selected=false,valid=false;
 std::string source="owned";
 bool matches(const std::string& car,uint32_t patch)const{
  return selected&&valid&&car=="wdts_nissan_silvia_s14"&&patch==3465;
 }
};
inline ExistingTyreHostProfile existing_tyre_host_profile(const nlohmann::json& config){
 ExistingTyreHostProfile out;
 try{
  const auto& e=config.at("enhancement");
  out.selected=e.value("tyre_bound_existing",false);
  out.source=e.value("tyre_bound_source",std::string("owned"));
  const auto& p=e.at("tyre_lateral_profile");
  out.valid=out.selected&&(out.source=="owned"||out.source=="reference_observe")&&config.at("physics_mode")=="bounded"&&e.at("capture")==true&&
   !e.value("calibration_capture_only",false)&&p.at("enabled")==true&&
   p.at("car_id")=="wdts_nissan_silvia_s14"&&p.at("patch_code")==3465&&
   p.at("force_unit")=="N"&&p.at("evidence_id")=="body-force-N-20261014";
 }catch(...){out.valid=false;}
 return out;
}
}

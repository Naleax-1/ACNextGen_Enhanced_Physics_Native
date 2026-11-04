#pragma once
#include "brake_force_channel.hpp"
#include "json.hpp"
#include <string>
namespace ngp {
// Declaration parsing only; never certifies the supplied evidence.
struct LoadedBrakeProfile {
 std::string car_id,evidence_reference;uint32_t patch_code=0;BrakeForceProfile force;bool valid=false,local_execution=false;double model_hold_seconds=0;
};
inline LoadedBrakeProfile brake_profile(const nlohmann::json& j){
 try{
  LoadedBrakeProfile out;
  auto integer=[](const nlohmann::json& v,double maximum){
   if(!v.is_number())throw 0;double n=v.get<double>();
   if(!std::isfinite(n)||n<1||n>maximum||std::floor(n)!=n)throw 0;return uint64_t(n);
  };
  auto number=[](const nlohmann::json& v){if(!v.is_number())throw 0;double n=v.get<double>();if(!std::isfinite(n))throw 0;return n;};
  auto yes=[](const nlohmann::json& v){if(!v.is_boolean()||!v.get<bool>())throw 0;};
  if(integer(j.at("schema"),1)!=1)return {};yes(j.at("enabled"));
  auto mode=j.at("execution_mode").get<std::string>();
  out.local_execution=mode=="worker_local_brake_residual_v1";
  if(mode!="brake_residual_v1"&&!out.local_execution)return {};
  if(out.local_execution){yes(j.at("same_callback_sample_verified"));yes(j.at("model_hold_verified"));
   out.model_hold_seconds=number(j.at("model_hold_seconds"));if(out.model_hold_seconds<=0||out.model_hold_seconds>.1)return {};}
  out.car_id=j.at("car_id").get<std::string>();out.evidence_reference=j.at("evidence_reference").get<std::string>();
  if(out.car_id.empty()||out.car_id.size()>200||out.evidence_reference.empty()||out.evidence_reference.size()>500)return {};
  uint32_t a=1,b=0;for(unsigned char c:out.car_id){
   if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return {};
   a=(a+c)%65521;b=(b+a)%65521;
  }
  auto& p=out.force;p.car_hash=uint32_t(integer(j.at("car_hash"),4294967295.));if(p.car_hash!=b*65536+a)return {};
  out.patch_code=uint32_t(integer(j.at("patch_code"),2147483646.));p.evidence_id=integer(j.at("evidence_id"),9007199254740991.);
  for(const char* k:{"baseline_isolated","units_verified","exclusive_owner","abs_contract_verified","native_fade_double_counting_excluded","phase_verified"})yes(j.at(k));
  p.baseline_isolated=p.units_verified=p.exclusive_owner=p.abs_contract_verified=p.native_fade_double_counting_excluded=p.phase_verified=true;
  p.baseline_mode=unsigned(integer(j.at("baseline_mode"),2));
  p.baseline_scale_nm_per_raw=number(j.at("baseline_scale_nm_per_raw"));p.command_scale_raw_per_nm=number(j.at("command_scale_raw_per_nm"));p.dt=number(j.at("dt"));
  if(!p.ready(p.car_hash))return {};out.valid=true;return out;
 }catch(...){return {};}
}
inline bool brake_profile_context_ready(const LoadedBrakeProfile& p,const std::string& car,uint32_t hash,uint32_t patch,bool fresh,bool conflict){
 return p.valid&&fresh&&!conflict&&p.car_id==car&&p.patch_code==patch&&p.force.ready(hash);
}
}

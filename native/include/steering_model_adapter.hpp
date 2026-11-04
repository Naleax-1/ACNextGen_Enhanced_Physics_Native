#pragma once
#include "model_runtime.hpp"
namespace ngp {
// Diagnostic model values only. No steering override, FFB command, Nm scale,
// output authorization or vehicle-contribution claim is encoded here.
struct SteeringModelCandidate {
 double ffb_normalized=0,raw_ffb_normalized=0;
 std::array<double,3> knuckle_model{};
 bool valid=false,units_qualified=false;
};
inline SteeringModelCandidate extract_steering_model(Runtime& runtime){
 SteeringModelCandidate out;if(!runtime.errors.empty()||isnil(runtime.car))return out;
 try{
  auto it=runtime.modules.find("steering_mechanism");if(it==runtime.modules.end())return out;
  auto state=get(it->second,V("state")),params=get(it->second,V("params"));
  auto yes=[](V v){return std::holds_alternative<bool>(v.data)&&std::get<bool>(v.data);};
  auto number=[](V v){if(!std::holds_alternative<double>(v.data)||!std::isfinite(num(v)))throw 0;return num(v);};
  auto applied=get(params,V("applyFFB"));
  if(!std::holds_alternative<bool>(applied.data)||std::get<bool>(applied.data)||text(get(state,V("status")))!="RUNNING"||
     !yes(get(state,V("active")))||!yes(get(state,V("wheelsValid")))||!yes(get(state,V("initialized"))))return out;
  double low=number(get(params,V("minFFB"))),high=number(get(params,V("maxFFB")));
  if(low>=high)return out;
  out.ffb_normalized=number(get(state,V("finalFFB")));out.raw_ffb_normalized=number(get(state,V("rawFFB")));
  if(out.ffb_normalized<low||out.ffb_normalized>high||out.raw_ffb_normalized<low||out.raw_ffb_normalized>high)return {};
  const char* keys[]={"knuckleFX","knuckleFY","knuckleMZ"};
  for(unsigned i=0;i<3;++i)out.knuckle_model[i]=number(get(state,V(keys[i])));
  out.valid=true;return out;
 }catch(...){return {};}
}
}

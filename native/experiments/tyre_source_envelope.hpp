#pragma once
#include "enhancement_protocol.h"
#include <array>
#include <cmath>
namespace ngp::experiment {
// Verify that the force bound is exactly the force computed from this sensor
// and hint snapshot. This proves mathematical coherence only: the caller must
// separately authenticate the sensor frame, hint provenance and calibration.
using EnhancementCompute=uint32_t(*)(const NgpeSensor*,const NgpeHints*,double,uint32_t,uint32_t,NgpeCommand*);
inline bool source_tyre_envelope(const NgpeSensor& sensor,const NgpeHints& hints,double model_age,
 uint32_t generation,const NgpeCommand& submitted,EnhancementCompute compute,std::array<double,4>& out){
 out={};if(!compute||submitted.abi!=NGPE_ABI||submitted.epoch!=sensor.epoch||
   submitted.generation!=generation||submitted.car_hash!=sensor.car_hash||submitted.source_clock!=sensor.clock||
   !(submitted.channels&NGPE_TYRE)||!submitted.flags)return false;
 NgpeCommand check{};
 if(compute(&sensor,&hints,model_age,generation,NGPE_TYRE,&check)!=0||
    !(check.channels&NGPE_TYRE)||check.epoch!=submitted.epoch||check.generation!=submitted.generation||
    check.car_hash!=submitted.car_hash||check.source_clock!=submitted.source_clock)return false;
 std::array<double,4> result{};
 for(unsigned i=0;i<4;++i){
  double squared=0;
  for(unsigned j=0;j<3;++j){
   const double v=submitted.tyre_force[i][j];
   if(!std::isfinite(v)||v!=check.tyre_force[i][j]||submitted.positions[i][j]!=check.positions[i][j])return false;
   squared+=v*v;
  }
  result[i]=std::sqrt(squared);if(!std::isfinite(result[i])||result[i]>8.000000001)return false;
 }
 out=result;return true;
}
}

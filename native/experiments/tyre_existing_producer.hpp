#pragma once
#include "tyre_local_producer.hpp"
#include "enhancement_protocol.h"
namespace ngp::experiment {
// Copy the already-selected model's coefficients unchanged. The calling Host
// must independently validate model provenance, selected contract, physical
// authorization and calibration. This adapter does not assert any of these.
inline bool make_existing_tyre_frame(const TyreLocalExpected& context,
 uint32_t sequence,uint32_t sensor_sequence,uint32_t model_sequence,
 double sensor_clock,double model_clock,const NgpeHints& hints,NgpTyreLocalHintFrame& out){
 out={};
 if(context.effect_id!=NGP_TYRE_LOCAL_EXISTING_EFFECT||hints.abi!=NGPE_ABI||hints.tyre_mask>15)return false;
 TyreReferenceCandidate value{};value.valid=true;value.mask=hints.tyre_mask;
 for(unsigned i=0;i<4;++i)value.coefficient[i]=hints.tyre_ns_m[i];
 return make_tyre_local_frame(context,sequence,sensor_sequence,model_sequence,sensor_clock,model_clock,value,out);
}
}

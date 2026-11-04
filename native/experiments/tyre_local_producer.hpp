#pragma once
#include "../include/tyre_local_validation.hpp"
#include "tyre_reference_onset.hpp"
namespace ngp::experiment {
// Builds an isolated wire frame, but does not open a mapping or grant output
// authorization. The caller must supply independently verified context and
// an onset-limited candidate from the actual model generation.
inline bool make_tyre_local_frame(const TyreLocalExpected& context,
 uint32_t sequence,uint32_t sensor_sequence,uint32_t model_sequence,
 double sensor_clock,double model_clock,const TyreReferenceCandidate& candidate,
 NgpTyreLocalHintFrame& out){
 out={};
 if(!candidate.valid)return false;
 NgpTyreLocalHintFrame next{};
 auto& p=next.packet;
 p.abi=NGP_TYRE_LOCAL_ABI;p.epoch=context.epoch;p.generation=context.generation;p.car_hash=context.car_hash;
 p.patch_code=context.patch_code;p.sequence=sequence;p.sensor_sequence=sensor_sequence;p.model_sequence=model_sequence;
 p.valid_mask=candidate.mask;p.effect_id=context.effect_id;p.evidence_id=context.evidence_id;
 p.sensor_clock=sensor_clock;p.model_clock=model_clock;
 for(unsigned i=0;i<4;++i)p.coefficient[i]=candidate.coefficient[i];
 if(sequence==0||sequence>=1073741823u)return false;
 next.commit=sequence*2u;next.checksum=tyre_local_checksum(&p,sizeof p);
 if(!tyre_local_hint_valid(next,next.commit,next.commit,context))return false;
 out=next;return true;
}
}

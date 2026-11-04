#pragma once
#include "tyre_source_envelope.hpp"
#include "tyre_local_validation.hpp"
namespace ngp::experiment {
// In-memory composition only: the hint's authenticated sequence must be the
// very sensor used by the source force recomputation. This does not create a
// transport or establish the caller's profile/physical authority.
inline bool bound_source_tyre_envelope(const TyreLocalExpected& expected,
 const NgpTyreLocalHintFrame& hint,const NgpeSensor& source,const NgpeHints& hints,
 double age,const NgpeCommand& command,EnhancementCompute compute,std::array<double,4>& out){
 out={};
 if(expected.effect_id!=NGP_TYRE_LOCAL_EXISTING_EFFECT||
    !tyre_local_hint_valid(hint,hint.commit,hint.commit,expected)||
    source.epoch!=hint.packet.epoch||source.generation!=hint.packet.generation||
    source.car_hash!=hint.packet.car_hash||source.sequence!=hint.packet.sensor_sequence||
    source.clock!=hint.packet.sensor_clock||hints.tyre_mask!=hint.packet.valid_mask)return false;
 for(unsigned i=0;i<4;++i)if(hints.tyre_ns_m[i]!=hint.packet.coefficient[i])return false;
 return source_tyre_envelope(source,hints,age,expected.generation,command,compute,out);
}
}

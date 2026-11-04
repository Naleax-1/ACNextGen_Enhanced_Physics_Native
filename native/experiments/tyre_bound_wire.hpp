#pragma once
#include "tyre_bound_envelope.hpp"
#include "tyre_existing_producer.hpp"
namespace ngp::experiment {
// Experimental ABI only. Not registered with the Host or Worker; profile
// validity and sensor ownership must be established outside this packet.
struct BoundTyrePacket {NgpTyreLocalHint hint;double source_magnitude[4];};
struct BoundTyreFrame {uint32_t commit,checksum;BoundTyrePacket packet;};
static_assert(sizeof(BoundTyrePacket)==128&&sizeof(BoundTyreFrame)==136,"bound tyre ABI");
inline bool bound_tyre_wire_valid(const BoundTyreFrame& f,uint32_t before,uint32_t after,const TyreLocalExpected& expected){
 if(!before||(before&1u)||before!=after||before!=f.commit||
    f.checksum!=tyre_local_checksum(&f.packet,sizeof f.packet))return false;
 NgpTyreLocalHintFrame hint{};hint.commit=f.commit;hint.packet=f.packet.hint;
 hint.checksum=tyre_local_checksum(&hint.packet,sizeof hint.packet);
 if(expected.effect_id!=NGP_TYRE_LOCAL_EXISTING_EFFECT||!tyre_local_hint_valid(hint,before,after,expected))return false;
 for(unsigned i=0;i<4;++i){double x=f.packet.source_magnitude[i];
  if(!std::isfinite(x)||x<0||x>8.000000001||(!(hint.packet.valid_mask&(1u<<i))&&x!=0))return false;}
 return true;
}
inline bool make_bound_tyre_wire(const TyreLocalExpected& expected,uint32_t publication,uint32_t model_frame,
 const NgpeSensor& sensor,const NgpeHints& hints,double model_clock,double model_age,const NgpeCommand& source,
 EnhancementCompute compute,BoundTyreFrame& out){
 out={};NgpTyreLocalHintFrame hint{};std::array<double,4> envelope{};
 if(!make_existing_tyre_frame(expected,publication,sensor.sequence,model_frame,sensor.clock,model_clock,hints,hint)||
    !bound_source_tyre_envelope(expected,hint,sensor,hints,model_age,source,compute,envelope))return false;
 BoundTyreFrame next{};next.commit=hint.commit;next.packet.hint=hint.packet;
 for(unsigned i=0;i<4;++i)next.packet.source_magnitude[i]=envelope[i];
 next.checksum=tyre_local_checksum(&next.packet,sizeof next.packet);
 if(!bound_tyre_wire_valid(next,next.commit,next.commit,expected))return false;out=next;return true;
}
}

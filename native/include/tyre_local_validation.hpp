#pragma once
#include "tyre_local_protocol.h"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace ngp {
struct TyreLocalExpected {
 uint32_t epoch=0,generation=0,car_hash=0,patch_code=0,current_sensor_sequence=0;
 uint64_t evidence_id=0;
 double clock=0.;
 bool profile_verified=false;
 uint32_t effect_id=NGP_TYRE_LOCAL_EFFECT;
};
inline uint32_t tyre_local_checksum(const void* source,std::size_t count){
 auto bytes=static_cast<const unsigned char*>(source);uint32_t a=1,b=0;
 for(std::size_t i=0;i<count;++i){a=(a+bytes[i])%65521;b=(b+a)%65521;}
 return (b<<16)|a;
}
// Validate an already-copied frame against both memory commit reads. Profile
// verification and authorization remain the caller's independent obligation.
inline bool tyre_local_hint_valid(const NgpTyreLocalHintFrame& f,uint32_t before,uint32_t after,const TyreLocalExpected& expected){
 const auto& p=f.packet;
 if(!expected.profile_verified||!expected.epoch||!expected.generation||!expected.car_hash||!expected.patch_code||!expected.evidence_id||
    expected.evidence_id>9007199254740991ULL||!expected.current_sensor_sequence||!std::isfinite(expected.clock)||expected.clock<0||
    (expected.effect_id!=NGP_TYRE_LOCAL_EFFECT&&expected.effect_id!=NGP_TYRE_LOCAL_EXISTING_EFFECT))return false;
 if(!before||before&1u||before!=after||before!=f.commit||p.sequence==0||p.sequence>=1073741823u||before!=p.sequence*2u||
    f.checksum!=tyre_local_checksum(&p,sizeof p))return false;
 if(p.abi!=NGP_TYRE_LOCAL_ABI||p.epoch!=expected.epoch||p.generation!=expected.generation||p.car_hash!=expected.car_hash||
    p.patch_code!=expected.patch_code||p.evidence_id!=expected.evidence_id||p.effect_id!=expected.effect_id||p.valid_mask&~15u||
    !p.sensor_sequence||p.sensor_sequence>expected.current_sensor_sequence||!p.model_sequence)return false;
 if(!std::isfinite(p.sensor_clock)||!std::isfinite(p.model_clock)||p.model_clock<0||p.sensor_clock<p.model_clock||
    p.sensor_clock>expected.clock||expected.clock-p.sensor_clock>.012||p.sensor_clock-p.model_clock>.1)return false;
 for(unsigned i=0;i<4;++i){
  const double c=p.coefficient[i];
  if(!std::isfinite(c)||c<0||c>8||(!(p.valid_mask&(1u<<i))&&c!=0))return false;
 }
 return true;
}
// Callback-observed status, not a solver receipt. Counter monotonicity and
// freshness of the publisher itself are the caller's separate obligations.
inline bool tyre_local_status_valid(const NgpTyreLocalStatusFrame& f,uint32_t before,uint32_t after,
 const TyreLocalExpected& expected,uint32_t latest_hint_sequence){
 const auto& p=f.packet;
 if(!expected.profile_verified||!expected.epoch||!expected.generation||!expected.car_hash||!expected.patch_code||
    !expected.evidence_id||expected.evidence_id>9007199254740991ULL||!std::isfinite(expected.clock)||expected.clock<0)return false;
 if(!before||(before&1u)||before!=after||before!=f.commit||!p.sequence||p.sequence>=1073741823u||before!=p.sequence*2u||
    f.checksum!=tyre_local_checksum(&p,sizeof p))return false;
 if(p.abi!=NGP_TYRE_LOCAL_ABI||p.epoch!=expected.epoch||p.generation!=expected.generation||p.car_hash!=expected.car_hash||
    p.patch_code!=expected.patch_code||p.evidence_id!=expected.evidence_id||p.flags&~127u||p.active_mask&~15u||p.fault>1||
    (expected.effect_id!=NGP_TYRE_LOCAL_EFFECT&&expected.effect_id!=NGP_TYRE_LOCAL_EXISTING_EFFECT)||
    ((p.flags&NGP_TYRE_STATUS_EXISTING)!=0)!=(expected.effect_id==NGP_TYRE_LOCAL_EXISTING_EFFECT)||
    p.ack_hint_sequence>latest_hint_sequence||p.applied_frames>p.api_calls||
    ((p.flags&NGP_TYRE_STATUS_UNCERTAIN)&&!p.fault))return false;
 if(!std::isfinite(p.clock)||p.clock<0||p.clock>expected.clock+.006||expected.clock-p.clock>.03||
    !std::isfinite(p.observed_power_w)||p.observed_power_w>1e-9||
    !std::isfinite(p.observed_dissipated_j)||p.observed_dissipated_j<0)return false;
 return true;
}
}

#pragma once
#include "tyre_local_validation.hpp"
#include <array>
#include <limits>

// Deliberately incompatible with both physical hint effect IDs. An observation
// carries no evidence ID and can never authorize or be parsed as an actuator
// hint. This is diagnostic data only.
namespace ngp {
constexpr uint32_t TYRE_OBSERVATION_MAGIC=0x4f425359u;
struct TyreObservation {
 uint32_t magic,epoch,generation,car_hash,sequence,sensor_sequence,model_frame,mask;
 double sensor_clock,model_clock,coefficient[4];
};
struct TyreObservationFrame {uint32_t commit,checksum;TyreObservation packet;};
static_assert(sizeof(TyreObservation)==80 && sizeof(TyreObservationFrame)==88,"tyre observation ABI");
struct TyreObservationContext {uint32_t epoch,generation,car_hash,sensor_sequence;double clock;};
inline bool tyre_observation_valid(const TyreObservationFrame& f,uint32_t before,uint32_t after,const TyreObservationContext& c){
 const auto& p=f.packet;
 if(!c.epoch||!c.generation||!c.car_hash||!c.sensor_sequence||!std::isfinite(c.clock)||c.clock<0)return false;
 if(!before||(before&1)||before!=after||before!=f.commit||!p.sequence||p.sequence>=1073741823u||before!=p.sequence*2u||
    f.checksum!=tyre_local_checksum(&p,sizeof p))return false;
 if(p.magic!=TYRE_OBSERVATION_MAGIC||p.epoch!=c.epoch||p.generation!=c.generation||p.car_hash!=c.car_hash||
    !p.sensor_sequence||p.sensor_sequence>c.sensor_sequence||!p.model_frame||p.mask>15)return false;
 if(!std::isfinite(p.sensor_clock)||!std::isfinite(p.model_clock)||p.model_clock<0||p.sensor_clock<p.model_clock||
    p.sensor_clock>c.clock||c.clock-p.sensor_clock>.012||p.sensor_clock-p.model_clock>.1)return false;
 for(unsigned i=0;i<4;++i)if(!std::isfinite(p.coefficient[i])||p.coefficient[i]<0||p.coefficient[i]>8||
     (!(p.mask&(1u<<i))&&p.coefficient[i]!=0))return false;
 return true;
}
inline bool make_tyre_observation(const TyreObservationContext& c,uint32_t sequence,uint64_t model_frame,
 double sensor_clock,double model_clock,uint32_t mask,const std::array<double,4>& coefficient,TyreObservationFrame& out){
 out={};if(!sequence||sequence>=1073741823u||!model_frame||model_frame>std::numeric_limits<uint32_t>::max())return false;
 auto& p=out.packet;p.magic=TYRE_OBSERVATION_MAGIC;p.epoch=c.epoch;p.generation=c.generation;p.car_hash=c.car_hash;
 p.sequence=sequence;p.sensor_sequence=c.sensor_sequence;p.model_frame=static_cast<uint32_t>(model_frame);p.mask=mask;
 p.sensor_clock=sensor_clock;p.model_clock=model_clock;
 for(unsigned i=0;i<4;++i)p.coefficient[i]=coefficient[i];
 out.commit=sequence*2;out.checksum=tyre_local_checksum(&p,sizeof p);
 if(!tyre_observation_valid(out,out.commit,out.commit,c)){out={};return false;}return true;
}
}

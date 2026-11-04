#pragma once
#include "wheel_interval_protocol.h"
#include "damper_displacement_work.hpp"
namespace ngp {
inline uint32_t wheel_material_checksum(const void* data,size_t size){
    auto bytes=static_cast<const unsigned char*>(data);uint32_t a=1,b=0;
    for(size_t i=0;i<size;++i){a=(a+bytes[i])%65521;b=(b+a)%65521;}return b*65536+a;
}
template<class Frame> inline bool wheel_snapshot(const Frame& f,uint32_t before,uint32_t after){
    auto& p=f.packet;
    return before==after&&before==f.commit&&before>0&&before%2==0&&p.sequence>0&&p.sequence<1073741823&&
        before==p.sequence*2&&p.abi==1&&p.flags==15&&!p.reserved&&
        f.checksum==wheel_material_checksum(&p,sizeof p);
}
// Transport validation only: diagnostics do not attest API calls or metrology.
inline DamperDisplacementReceipt wheel_material_sample(const NgpWheelMaterialFrame& m,uint32_t mb,uint32_t ma,
    const NgpWheelIntervalFrame& w,uint32_t wb,uint32_t wa,uint32_t epoch,uint32_t generation,
    uint32_t car,uint32_t patch,double age){
    DamperDisplacementReceipt out;auto& p=m.packet;auto& q=w.packet;
    if(!wheel_snapshot(m,mb,ma)||!wheel_snapshot(w,wb,wa)||!epoch||!generation||!car||!patch||
       !std::isfinite(age)||age<0||age>.003001||p.epoch!=epoch||p.generation!=generation||p.car_hash!=car||p.patch_code!=patch||
       q.epoch!=p.epoch||q.generation!=p.generation||q.car_hash!=p.car_hash||q.patch_code!=p.patch_code||q.sequence!=p.sequence||
       !std::isfinite(p.dt)||p.dt<=0||p.dt>.003001||!std::isfinite(p.clock_before)||p.clock_before<0||
       !std::isfinite(p.clock_after)||p.clock_after<=p.clock_before||std::abs(p.clock_after-p.clock_before-p.dt)>1e-7||
       q.dt!=p.dt||q.clock_before!=p.clock_before||q.clock_after!=p.clock_after)return out;
    for(unsigned a=0;a<3;++a){
        for(double x:{q.origin_before[a],q.origin_after[a]})if(!std::isfinite(x)||std::abs(x)>1e7)return {};
        for(double x:{q.up_before[a],q.up_after[a]})if(!std::isfinite(x))return {};
    }
    double n0=0,n1=0;for(unsigned a=0;a<3;++a){n0+=q.up_before[a]*q.up_before[a];n1+=q.up_after[a]*q.up_after[a];}
    if(std::abs(n0-1)>1e-4||std::abs(n1-1)>1e-4)return out;
    for(unsigned i=0;i<4;++i)for(unsigned a=0;a<3;++a){
        for(double x:{p.body_before[i][a],p.body_after[i][a],p.wheel_before[i][a],p.wheel_after[i][a]})
            if(!std::isfinite(x)||std::abs(x)>1e7)return {};
        for(double x:{q.body_velocity_before[i][a],q.body_velocity_after[i][a]})
            if(!std::isfinite(x)||std::abs(x)>300)return {};
        if(p.body_before[i][a]!=p.wheel_before[i][a]||p.wheel_before[i][a]!=q.positions_before[i][a]||p.wheel_after[i][a]!=q.positions_after[i][a])return {};
        out.body_before[i][a]=p.body_before[i][a];out.body_after[i][a]=p.body_after[i][a];
        out.wheel_before[i][a]=p.wheel_before[i][a];out.wheel_after[i][a]=p.wheel_after[i][a];
    }
    out.epoch=epoch;out.generation=generation;out.car_hash=car;out.patch_code=patch;out.sequence=p.sequence;out.mask=15;
    out.clock_before=p.clock_before;out.clock_after=p.clock_after;
    // evidence_id and every qualification/application flag stay zero/false.
    return out;
}
}

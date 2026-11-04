#pragma once
#include "damper_force_protocol.h"
#include "damper_receipt_adapter.hpp"
#include "wheel_material_transport.hpp"
namespace ngp {
inline NgpDamperCommand damper_wire_command(const DamperForceIntent& c,double work_bound_j){
    NgpDamperCommand p{};p.abi=1;
    if(!c.epoch||!c.generation||!c.car_hash||!c.patch_code||!c.sequence||c.sequence>=1073741823||!c.mask||(c.mask&~15u)||
       !c.evidence_id||c.evidence_id>9007199254740991ULL||!std::isfinite(c.source_clock)||c.source_clock<0||
       !std::isfinite(c.dt)||c.dt<=0||c.dt>.003001||!std::isfinite(work_bound_j)||work_bound_j<0||work_bound_j>1)return p;
    for(unsigned i=0;i<4;++i){double norm2=0;
        for(unsigned a=0;a<3;++a){
            double b=c.body_local_point[i][a],w=c.wheel_local_point[i][a],f=c.world_force_n[i][a];
            if(!std::isfinite(b)||!std::isfinite(w)||!std::isfinite(f)||std::abs(b)>3||std::abs(w)>3)return {};
            if(!(c.mask&(1u<<i))&&(b!=0||w!=0||f!=0))return {};
            norm2+=f*f;p.body_local_point[i][a]=b;p.wheel_local_point[i][a]=w;p.world_force_n[i][a]=f;
        }
        if(!std::isfinite(norm2)||norm2>400)return {};
    }
    p.epoch=c.epoch;p.generation=c.generation;p.car_hash=c.car_hash;p.patch_code=c.patch_code;p.sequence=c.sequence;p.mask=c.mask;
    p.evidence_id=c.evidence_id;p.source_clock=c.source_clock;p.dt=c.dt;p.work_bound_j=work_bound_j;return p;
}
inline DamperMeasuredWork damper_wire_work(const NgpDamperObservationFrame& f,uint32_t before,uint32_t after,
    const DamperForceIntent& c,const DamperReceiptProfile& profile){
    auto& p=f.packet;
    if(before!=after||before!=f.commit||!before||before%2||p.abi!=1||!p.sequence||p.sequence>=1073741823||
       before!=p.sequence*2||p.fault>1||p.samples_valid!=1||p.api_calls>8||
       f.checksum!=wheel_material_checksum(&p,sizeof p))return {};
    DamperAppliedObservation raw;raw.command_sequence=p.sequence;raw.evidence_id=p.evidence_id;
    raw.completed_mask=p.completed_mask;raw.api_calls=p.api_calls;raw.api_fault=p.fault!=0;
    auto& r=raw.displacement;r.epoch=p.epoch;r.generation=p.generation;r.car_hash=p.car_hash;r.patch_code=p.patch_code;
    r.sequence=p.sequence;r.mask=p.completed_mask;r.clock_before=p.clock_before;r.clock_after=p.clock_after;
    for(unsigned i=0;i<4;++i)for(unsigned a=0;a<3;++a){
        raw.body_local_point[i][a]=p.body_local_point[i][a];raw.wheel_local_point[i][a]=p.wheel_local_point[i][a];
        raw.body_force_n[i][a]=p.body_force_n[i][a];raw.wheel_force_n[i][a]=p.wheel_force_n[i][a];
        r.body_before[i][a]=p.body_before[i][a];r.body_after[i][a]=p.body_after[i][a];
        r.wheel_before[i][a]=p.wheel_before[i][a];r.wheel_after[i][a]=p.wheel_after[i][a];
    }
    return damper_applied_work(c,raw,profile);
}
}

#pragma once
#include "body_force_protocol.h"
#include "body_receipt_adapter.hpp"
namespace ngp {
inline uint32_t body_checksum(const void* data,size_t size){
    const auto* bytes=static_cast<const unsigned char*>(data);uint32_t a=1,b=0;
    for(size_t i=0;i<size;++i){a=(a+bytes[i])%65521;b=(b+a)%65521;}return b*65536+a;
}
inline NgpBodyForceCommand body_wire_command(const BodyForceCommand& c){
    NgpBodyForceCommand out{};out.abi=1;
    if(!c.sequence||c.sequence>=1073741823||!c.epoch||!c.generation||!c.car_hash||!c.evidence_id||c.evidence_id>9007199254740991ULL||
       !std::isfinite(c.source_clock)||!std::isfinite(c.work_bound_j)||c.work_bound_j<0)return out;
    for(unsigned i=0;i<4;++i)for(unsigned j=0;j<3;++j)
        if(!std::isfinite(c.positions[i][j])||!std::isfinite(c.forces[i][j]))return out;
    out.epoch=c.epoch;out.generation=c.generation;out.car_hash=c.car_hash;out.sequence=uint32_t(c.sequence);out.mask=15;
    out.evidence_id=c.evidence_id;out.source_clock=c.source_clock;out.work_bound_j=c.work_bound_j;
    for(unsigned i=0;i<4;++i)for(unsigned j=0;j<3;++j){out.positions[i][j]=c.positions[i][j];out.forces[i][j]=c.forces[i][j];}
    return out;
}
// Snapshot consistency must additionally be checked by the MMF reader.
inline BodyForceReceipt body_wire_receipt(const NgpBodyObservationFrame& f,const BodyForceCommand& c,const BodyWorkProfile& profile){
    const auto& p=f.packet;
    if(!f.commit||f.commit%2||!p.sequence||p.sequence>=1073741823||f.commit!=p.sequence*2||p.abi!=1||p.reserved||
       p.fault>1||p.samples_valid>1||f.checksum!=body_checksum(&p,sizeof p))return {};
    BodyAppliedObservation raw;
    raw.sequence=p.sequence;raw.evidence_id=p.evidence_id;raw.epoch=p.epoch;raw.generation=p.generation;raw.car_hash=p.car_hash;
    raw.completed_mask=p.completed_mask;raw.api_calls=p.api_calls;raw.api_fault=p.fault!=0;raw.samples_valid=p.samples_valid==1;
    raw.clock_before=p.clock_before;raw.clock_after=p.clock_after;
    for(unsigned i=0;i<4;++i)for(unsigned j=0;j<3;++j){raw.positions[i][j]=p.positions[i][j];raw.forces[i][j]=p.forces[i][j];
        raw.velocity_before[i][j]=p.velocity_before[i][j];raw.velocity_after[i][j]=p.velocity_after[i][j];}
    return body_receipt(c,raw,profile);
}
}

#pragma once
#include "drive_force_protocol.h"
#include "drive_receipt_adapter.hpp"
namespace ngp {
inline uint32_t drive_checksum(const void* data,size_t size){
    const auto* bytes=static_cast<const unsigned char*>(data);uint32_t a=1,b=0;
    for(size_t i=0;i<size;++i){a=(a+bytes[i])%65521;b=(b+a)%65521;}return b*65536+a;
}
inline NgpdForceCommand drive_wire_command(const DriveExecutionCommand& c,uint64_t evidence){
    NgpdForceCommand out{};out.abi=NGPD_FORCE_ABI;
    if(!c.sequence||c.sequence>=1073741823||!c.epoch||!c.generation||!c.car_hash||!c.sensor_sequence||
       !evidence||evidence>9007199254740991ULL||!std::isfinite(c.source_clock)||
       !std::isfinite(c.work_bound_j)||c.work_bound_j<0)return out;
    for(double t:c.delta_nm)if(!std::isfinite(t)||std::abs(t)>40000)return out;
    out.epoch=c.epoch;out.generation=c.generation;out.car_hash=c.car_hash;out.sequence=uint32_t(c.sequence);
    out.sensor_sequence=c.sensor_sequence;out.mask=3;out.evidence_id=evidence;
    out.source_clock=c.source_clock;out.work_bound_j=c.work_bound_j;
    for(unsigned i=0;i<2;++i)out.delta_nm[i]=c.delta_nm[i];return out;
}
// Caller snapshots immutable bytes between matching acquire-loaded commits.
inline DriveExecutionReceipt drive_wire_receipt(const NgpdForceObservationFrame& frame,
    const DriveExecutionCommand& command,uint64_t evidence,const DriveWorkProfile& profile){
    const auto& p=frame.packet;
    if(!frame.commit||frame.commit%2||!p.sequence||p.sequence>=1073741823||frame.commit!=p.sequence*2||
       frame.checksum!=drive_checksum(&p,sizeof p)||p.abi!=NGPD_FORCE_ABI||p.reserved||p.fault>1||p.samples_valid>1||
       !evidence||evidence>9007199254740991ULL||p.evidence_id!=evidence)return {};
    DriveAppliedObservation raw;
    raw.sequence=p.sequence;raw.epoch=p.epoch;raw.generation=p.generation;raw.car_hash=p.car_hash;
    raw.clock_before=p.clock_before;raw.clock_after=p.clock_after;raw.completed_mask=p.completed_mask;
    raw.samples_valid=p.samples_valid==1;raw.api_fault=p.fault!=0;
    unsigned expected=0;for(double t:command.delta_nm)expected+=t!=0.;
    if(p.api_calls!=expected)raw.api_fault=true;
    for(unsigned i=0;i<2;++i){raw.omega_before[i]=p.omega_before[i];raw.omega_after[i]=p.omega_after[i];raw.applied_nm[i]=p.applied_nm[i];}
    return drive_receipt(command,raw,profile);
}
}

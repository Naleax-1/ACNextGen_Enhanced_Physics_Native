#pragma once
#include "body_execution.hpp"
#include "body_work.hpp"
namespace ngp {
struct BodyAppliedObservation {
    uint64_t sequence=0,evidence_id=0;
    uint32_t epoch=0,generation=0,car_hash=0,completed_mask=0,api_calls=0;
    double clock_before=0,clock_after=0;
    std::array<BodyVec,4> positions{},forces{},velocity_before{},velocity_after{};
    bool samples_valid=false,api_fault=false;
};
struct BodyWorkProfile {
    uint32_t car_hash=0;
    uint64_t evidence_id=0;
    double dt=0;
    std::array<double,4> acceleration_bound_ms2{},velocity_error_ms{};
    bool units_verified=false,interval_verified=false,constant_local_force_verified=false;
    bool sample_coordinates_verified=false,bounds_verified=false;
};
inline BodyForceReceipt body_receipt(const BodyForceCommand& c,const BodyAppliedObservation& raw,const BodyWorkProfile& p){
    BodyForceReceipt out;
    if(!c.sequence||raw.sequence!=c.sequence||raw.evidence_id!=c.evidence_id||raw.epoch!=c.epoch||
       raw.generation!=c.generation||raw.car_hash!=c.car_hash)return out;
    out={c.sequence,c.evidence_id,c.epoch,c.generation,c.car_hash,raw.completed_mask,raw.clock_after,0,true,false};
    if(raw.api_fault||raw.completed_mask!=15||!raw.samples_valid||p.car_hash!=c.car_hash||p.evidence_id!=c.evidence_id||
       !p.units_verified||!p.interval_verified||!p.constant_local_force_verified||!p.sample_coordinates_verified||!p.bounds_verified||
       !std::isfinite(p.dt)||p.dt<=0||p.dt>.003||!std::isfinite(c.source_clock)||!std::isfinite(raw.clock_before)||
       !std::isfinite(raw.clock_after)||raw.clock_before<c.source_clock||raw.clock_before-c.source_clock>.003001||
       std::abs(raw.clock_after-raw.clock_before-p.dt)>1e-7)return out;
    unsigned expected_calls=0;
    for(unsigned i=0;i<4;++i){
        bool nonzero=false;
        for(unsigned axis=0;axis<3;++axis){
            if(!std::isfinite(raw.positions[i][axis])||!std::isfinite(raw.forces[i][axis])||
               raw.positions[i][axis]!=c.positions[i][axis]||raw.forces[i][axis]!=c.forces[i][axis])return out;
            nonzero|=c.forces[i][axis]!=0;
        }
        expected_calls+=nonzero;
    }
    if(raw.api_calls!=expected_calls)return out;
    BodyWorkInterval interval;interval.dt=p.dt;interval.constant_force_local_n=c.forces;
    interval.velocity_before_local_ms=raw.velocity_before;interval.velocity_after_local_ms=raw.velocity_after;
    interval.local_acceleration_bound_ms2=p.acceleration_bound_ms2;interval.velocity_error_ms=p.velocity_error_ms;
    interval.force_units_verified=interval.interval_verified=interval.constant_local_force_verified=interval.velocity_units_verified=interval.bounds_verified=true;
    auto bound=body_work_bound(interval);if(!bound.valid)return out;
    out.work_debit_upper_j=bound.positive_work_upper_j;
    out.absorbed_work_lower_j=bound.absorbed_work_lower_j;
    out.work_verified=true;out.fault=false;return out;
}
}

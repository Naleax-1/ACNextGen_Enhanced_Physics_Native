#pragma once
#include "body_model_protocol.h"
#include "body_model_path.hpp"
#include "body_sensor_validation.hpp"
#include "body_receipt_adapter.hpp"
namespace ngp {
struct BodyForceCandidate {
    BodyMomentOutput forces;
    uint32_t epoch=0,generation=0,car_hash=0,sensor_sequence=0;
    uint64_t evidence_id=0;
    double source_clock=0,reservation_j=0;
    bool valid=false;
};
// This is a proposed transaction, not authorization to write physics APIs.
// bounds_verified must cover local point acceleration over the entire sensor
// lease AND force interval, including rotation of the local coordinate basis.
inline BodyForceCandidate body_force_candidate(const NgpBodySensor& sensor,const NgpBodyModelHints& hints,
    uint32_t epoch,uint32_t generation,uint32_t car,double sensor_age,double model_age,
    const BodyMomentProfile& moment,const BodyWorkProfile& work,bool enabled){
    BodyForceCandidate out;
    constexpr double lease=.003001;
    if(!enabled||!body_sensor_valid(sensor,epoch,generation,car,sensor_age)||sensor_age<0||sensor_age>lease||
       hints.abi!=NGP_BODY_MODEL_ABI||hints.valid!=1||hints.units_qualified||hints.reserved||
       !moment.ready(car,sensor.patch_code)||work.car_hash!=car||work.evidence_id!=moment.evidence_id||
       !work.units_verified||!work.interval_verified||!work.constant_local_force_verified||
       !work.sample_coordinates_verified||!work.bounds_verified||!std::isfinite(work.dt)||
       work.dt<=0||work.dt>.003||std::abs(sensor.dt-work.dt)>1e-7||
       moment.half_width_m!=.5||moment.half_length_m!=1||moment.max_force_n>20)return out;
    BodyModelCandidate model;model.valid=true;
    std::array<BodyVec,4> velocities{};
    for(unsigned i=0;i<4;++i){
        model.normalized[i]=hints.normalized[i];
        for(unsigned a=0;a<3;++a)velocities[i][a]=sensor.velocity_local[i][a];
    }
    auto candidate=body_model_candidate(model,moment,car,sensor.patch_code,model_age,velocities);
    if(!candidate.valid)return out;
    BodyWorkInterval interval;interval.dt=work.dt;interval.constant_force_local_n=candidate.forces.force_local_n;
    // Future velocities are not measured yet. Use the current sample as the
    // centre and inflate uncertainty for the maximum permitted delivery delay.
    interval.velocity_before_local_ms=interval.velocity_after_local_ms=velocities;
    interval.local_acceleration_bound_ms2=work.acceleration_bound_ms2;
    for(unsigned i=0;i<4;++i){
        if(!std::isfinite(work.acceleration_bound_ms2[i])||work.acceleration_bound_ms2[i]<0||
           !std::isfinite(work.velocity_error_ms[i])||work.velocity_error_ms[i]<0)return out;
        interval.velocity_error_ms[i]=work.velocity_error_ms[i]+work.acceleration_bound_ms2[i]*lease;
    }
    interval.force_units_verified=interval.interval_verified=interval.constant_local_force_verified=
        interval.velocity_units_verified=interval.bounds_verified=true;
    auto bound=body_work_bound(interval);if(!bound.valid)return out;
    out.forces=candidate.forces;out.epoch=epoch;out.generation=generation;out.car_hash=car;
    out.sensor_sequence=sensor.sequence;out.evidence_id=moment.evidence_id;out.source_clock=sensor.clock;
    out.reservation_j=bound.positive_work_upper_j;out.valid=true;return out;
}
}

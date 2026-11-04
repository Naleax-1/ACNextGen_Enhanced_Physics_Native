#pragma once
#include "four_wheel_torque_composition.hpp"
#include <limits>
namespace ngp {
struct FourWheelWorkProfile {
    uint32_t car_hash=0;uint64_t evidence_id=0;double dt=0;
    std::array<double,4> acceleration_bound{},omega_error{},total_torque_error_nm{};
    bool recovery_contract_verified=false,windup_scale_verified=false;
    bool units_verified=false,baseline_isolated=false,native_interval_verified=false;
    bool bounds_verified=false,torque_error_verified=false,paired_order_verified=false;
    bool common_phase_verified=false,single_owner_verified=false,action_interval_verified=false,constant_torque_verified=false,sample_units_verified=false;
};
struct FourWheelWorkBound {double positive_work_upper_j=0,absorbed_work_lower_j=0;bool valid=false;};
inline FourWheelWorkBound four_wheel_work_bound(const FourWheelTorqueComposition& c,const BrakeForceCandidate& b,
    const RearTorqueComposition& rear,const DriveExecutionCommand& command,const FourWheelWorkProfile& p,
    const std::array<double,4>& omega,double duration,bool preflight){
    FourWheelWorkBound out;
    if(!p.common_phase_verified||!p.single_owner_verified||!p.action_interval_verified||!p.constant_torque_verified||!p.sample_units_verified||!p.units_verified||!p.baseline_isolated||!p.native_interval_verified||!p.bounds_verified||!p.torque_error_verified||!p.paired_order_verified||
       p.car_hash!=b.car_hash||p.evidence_id!=b.evidence_id||!std::isfinite(p.dt)||p.dt<=0||p.dt>.003||
       !std::isfinite(duration)||duration<=0||std::abs(duration-p.dt)>1e-7)return out;
    if(p.recovery_contract_verified){
        if(!p.windup_scale_verified||!rear.windup_qualified)return out;
        for(double t:rear.windup_nm)if(!std::isfinite(t)||std::abs(t)>12)return out;
    }
    if(rear.pair_nm[0]!=-rear.pair_nm[1])return out;
    for(unsigned i=0;i<2;++i)if(!std::isfinite(rear.drive_nm[i])||std::abs(rear.drive_nm[i])>12||!std::isfinite(rear.pair_nm[i])||std::abs(rear.pair_nm[i])>12||rear.total_nm[i]!=rear.drive_nm[i]+rear.pair_nm[i])return out;
    auto rebuilt=compose_brake_rear(b,rear,command,p.dt,20000,true,true);
    if(!c.valid||!rebuilt.valid||c.api_correction_nm!=rebuilt.api_correction_nm||c.known_combined_nm!=rebuilt.known_combined_nm)return out;
    std::array<double,4> uncertainty{},error_power{},known_upper{};
    double front=0,drive=0,rear_error_absorption=0;
    for(unsigned i=0;i<4;++i){
        if(!std::isfinite(omega[i])||std::abs(omega[i])>2000||!std::isfinite(p.acceleration_bound[i])||p.acceleration_bound[i]<0||
           !std::isfinite(p.omega_error[i])||p.omega_error[i]<0||!std::isfinite(p.total_torque_error_nm[i])||p.total_torque_error_nm[i]<0||p.total_torque_error_nm[i]>20000)return out;
        uncertainty[i]=p.acceleration_bound[i]*duration+(preflight?3:1)*p.omega_error[i];
        if(!std::isfinite(uncertainty[i]))return out;
        // Constant signed native brake must remain opposing the wheel over the
        // whole certified interval, not merely at its sampled endpoints.
        if(b.baseline_nm[i]*omega[i]+std::abs(b.baseline_nm[i])*uncertainty[i]>0)return out;
        double rounding=0;
        const bool exact_front=i<2&&(b.ratio[i]==0||c.api_correction_nm[i]==0);
        const bool exact_idle=c.api_correction_nm[i]==0&&b.ratio[i]==1&&(i<2||(rear.drive_nm[i-2]==0&&rear.pair_nm[i-2]==0));
        if(!exact_front&&!exact_idle){
            const double magnitude=std::abs(b.baseline_nm[i])+std::abs(b.baseline_nm[i]*b.ratio[i])+std::abs(c.api_correction_nm[i])+
                (i>=2?std::abs(rear.drive_nm[i-2])+std::abs(rear.pair_nm[i-2]):0);
            rounding=64*std::numeric_limits<double>::epsilon()*magnitude+64*std::numeric_limits<double>::denorm_min();
        }
        const double error=p.total_torque_error_nm[i]+rounding;
        error_power[i]=error*(std::abs(omega[i])+uncertainty[i]);
        known_upper[i]=c.known_combined_nm[i]*omega[i]+std::abs(c.known_combined_nm[i])*uncertainty[i];
        if(i<2)front+=std::max(0.,known_upper[i]+error_power[i]);
        else {
            const double drive_upper=rear.drive_nm[i-2]*omega[i]+std::abs(rear.drive_nm[i-2])*uncertainty[i];
            const double native_upper=b.baseline_nm[i]*b.ratio[i]*omega[i]+std::abs(b.baseline_nm[i]*b.ratio[i])*uncertainty[i];
            drive+=std::max(0.,drive_upper);
            rear_error_absorption+=std::max(0.,-drive_upper)+std::max(0.,-native_upper);
        }
    }
    const double pair=rear.pair_nm[0]*(omega[2]-omega[3])+std::abs(rear.pair_nm[0])*(uncertainty[2]+uncertainty[3]);
    if(!std::isfinite(pair)||pair>0)return out;
    // Pair dissipation may cover concurrent pair numerical/actuator error;
    // it never becomes stored credit or pays for the drive component itself.
    // Concurrent, guaranteed native/drive absorption can cover actuator and
    // arithmetic error even when equal wheel speeds make LSD dissipation zero.
    // Positive drive still pays its FULL reservation; absorption is neither
    // stored credit nor permission to fund another positive drive component.
    const double completed=drive+std::max(0.,pair+error_power[2]+error_power[3]-rear_error_absorption);
    // Front corrections occur first. For a partial rear write, the Actor
    // chooses the smaller nominal upper power. Either selected wheel's error
    // is bounded by max(error_power), without relying on a later absorption.
    const double first_rear=std::max(0.,std::min(known_upper[2],known_upper[3])+std::max(error_power[2],error_power[3]));
    const double power=front+(preflight?std::max(completed,first_rear):completed);
    if(!std::isfinite(power)||power<0)return out;
    out.positive_work_upper_j=power>0?std::nextafter(power*duration,std::numeric_limits<double>::infinity()):0;if(!std::isfinite(out.positive_work_upper_j))return {};
    if(!preflight&&p.recovery_contract_verified){
        double guaranteed_absorption=0;
        for(unsigned i=2;i<4;++i){
            const double d=rear.drive_nm[i-2],w=rear.windup_nm[i-2];
            const double drive_upper=d*omega[i]+std::abs(d)*uncertainty[i]+error_power[i];
            const double windup_upper=w*omega[i]+std::abs(w)*uncertainty[i]+error_power[i];
            guaranteed_absorption+=std::min(std::max(0.,-drive_upper),std::max(0.,-windup_upper));
        }
        if(!std::isfinite(guaranteed_absorption))return {};
        const double recovered=guaranteed_absorption*duration;
        if(!std::isfinite(recovered))return {};
        // Receipt only, downward rounding. Neither the native brake nor LSD
        // absorption enters this attribution or creates advance credit.
        out.absorbed_work_lower_j=recovered>0?std::nextafter(recovered,0.):0;
    }
    out.valid=true;return out;
}
struct FourWheelAppliedObservation {
    uint64_t sequence=0,evidence_id=0;uint32_t epoch=0,generation=0,car_hash=0,completed_mask=0,calls=0,attempts=0;
    double clock_before=0,clock_after=0;
    std::array<double,4> applied_nm{},baseline_nm{},ratio{},omega_before{},omega_after{};
    bool samples_valid=false,api_fault=false;
};
inline DriveExecutionReceipt four_wheel_receipt(const FourWheelTorqueComposition& c,const BrakeForceCandidate& b,
    const RearTorqueComposition& rear,const DriveExecutionCommand& command,const FourWheelWorkProfile& p,const FourWheelAppliedObservation& raw){
    DriveExecutionReceipt out;
    if(raw.sequence!=command.sequence||raw.epoch!=command.epoch||raw.generation!=command.generation||raw.car_hash!=command.car_hash||raw.evidence_id!=p.evidence_id)return out;
    out.sequence=raw.sequence;out.epoch=raw.epoch;out.generation=raw.generation;out.car_hash=raw.car_hash;out.clock=raw.clock_after;out.fault=true;
    unsigned expected=0;for(double t:c.api_correction_nm)expected+=t!=0;
    if(raw.api_fault||!raw.samples_valid||raw.completed_mask!=15||raw.calls!=expected||raw.attempts!=expected||raw.applied_nm!=c.api_correction_nm||
       raw.baseline_nm!=b.baseline_nm||raw.ratio!=b.ratio||!std::isfinite(raw.clock_before)||!std::isfinite(raw.clock_after)||
       raw.clock_before<command.source_clock||raw.clock_before-command.source_clock>.003001)return out;
    const double duration=raw.clock_after-raw.clock_before;
    for(unsigned i=0;i<4;++i)if(!std::isfinite(raw.omega_before[i])||!std::isfinite(raw.omega_after[i])||
        std::abs(raw.omega_before[i]-b.omega[i])>2*p.omega_error[i]||
        std::abs(raw.omega_after[i]-raw.omega_before[i])>p.acceleration_bound[i]*duration+2*p.omega_error[i])return out;
    auto bound=four_wheel_work_bound(c,b,rear,command,p,raw.omega_before,duration,false);
    if(!bound.valid)return out;
    out.conservative_work_debit_j=bound.positive_work_upper_j;out.completed_mask=3;
    out.absorbed_work_lower_j=bound.absorbed_work_lower_j;out.work_measurement_verified=true;out.fault=false;return out;
}
}

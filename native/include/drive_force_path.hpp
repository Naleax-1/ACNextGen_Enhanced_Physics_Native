#pragma once
#include "drive_transport.hpp"
#include <utility>
namespace ngp {
struct DriveForcePathProfile {
    DriveWorkProfile work;
    uint64_t evidence_id=0;
};
struct DriveForceRequest {
    uint32_t epoch=0,generation=0,car_hash=0,sensor_sequence=0;
    double source_clock=0,model_age=0;
    DriveResidualInput input;
};
// One owner for residual conversion, future work reservation and raw ACK
// settlement. Profiles are copied at construction; packets cannot qualify them.
class DriveForcePath {
    const DriveForcePathProfile profile;
    DriveExecution ledger;
    DriveExecutionCommand pending{};
    uint32_t epoch=0,generation=0,car=0;
    bool qualified()const{
        const auto& p=profile.work;
        if(!profile.evidence_id||profile.evidence_id>9007199254740991ULL||!p.car_hash||
           !p.units_verified||!p.action_interval_verified||!p.constant_torque_verified||
           !p.acceleration_bound_verified||!p.sample_units_verified||!std::isfinite(p.dt)||p.dt<=0||p.dt>.003)return false;
        for(unsigned i=0;i<2;++i)if(!std::isfinite(p.acceleration_bound_rad_s2[i])||p.acceleration_bound_rad_s2[i]<0||
            !std::isfinite(p.omega_error_rad_s[i])||p.omega_error_rad_s[i]<0)return false;
        return true;
    }
public:
    explicit DriveForcePath(DriveForcePathProfile p):profile(std::move(p)){}
    bool begin(uint32_t e,uint32_t g,uint32_t c,double verified_energy_j,bool energy_verified){
        if(!qualified()||c!=profile.work.car_hash||!ledger.begin(e,g,c,verified_energy_j,energy_verified))return false;
        if(e!=epoch||g!=generation||c!=car)pending={};
        epoch=e;generation=g;car=c;return true;
    }
    void stop(){ledger.stop();pending={};}
    void expire(double clock){ledger.expire(clock);if(!ledger.waiting())pending={};}
    bool waiting()const{return ledger.waiting();}
    bool faulted()const{return ledger.faulted();}
    double available()const{return ledger.available();}
    double held()const{return ledger.unresolved_reservation();}
    NgpdForceCommand prepare(const DriveForceRequest& request,double clock){
        expire(clock);NgpdForceCommand empty{};empty.abi=NGPD_FORCE_ABI;
        if(!qualified()||request.epoch!=epoch||request.generation!=generation||request.car_hash!=car||
           !std::isfinite(request.source_clock)||!std::isfinite(clock)||clock<request.source_clock||clock-request.source_clock>.003001||
           !std::isfinite(request.model_age)||request.model_age<0||request.model_age>.1||request.input.dt!=profile.work.dt)return empty;
        auto input=request.input;input.available_additional_energy_j=ledger.available();
        auto value=drive_residual(input);if(!value.valid)return empty;
        // Bound every possible positive-work interval before dispatch. No
        // fabricated future omega sample and no credit for predicted losses.
        const double duration=profile.work.dt+1e-7,lease=clock-request.source_clock;
        double reserve=0;
        for(unsigned i=0;i<2;++i){
            const double torque=value.delta_nm[i],omega=input.omega_rad_s[i];
            const double error=profile.work.acceleration_bound_rad_s2[i]*(lease+duration)+profile.work.omega_error_rad_s[i];
            const double power=torque*omega+std::abs(torque)*error;
            if(!std::isfinite(error)||!std::isfinite(power))return empty;
            reserve+=std::max(0.,power)*duration;
        }
        if(!std::isfinite(reserve))return empty;
        auto command=ledger.prepare(value,request.sensor_sequence,request.source_clock,clock,reserve,true);
        auto wire=drive_wire_command(command,profile.evidence_id);
        if(!wire.sequence){if(command.sequence)ledger.stop();return empty;}
        pending=command;return wire;
    }
    bool acknowledge(const NgpdForceObservationFrame& raw,double clock){
        expire(clock);if(!pending.sequence)return false;
        const auto receipt=drive_wire_receipt(raw,pending,profile.evidence_id,profile.work);
        const bool accepted=ledger.acknowledge(receipt,clock);
        if(!ledger.waiting())pending={};return accepted;
    }
};
}

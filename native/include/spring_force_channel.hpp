#pragma once
#include "enhancement_protocol.h"
#include "spring_protocol.h"
#include "spring_force_protocol.h"
#include "spring_execution.hpp"

namespace ngp {
struct SpringForceProfile {
    uint32_t car_hash=0;
    uint64_t evidence_id=0;
    double additional_gain_n_m=0.;
    bool force_units_verified=false,velocity_verified=false,gain_verified=false,reference_verified=false;
    bool ready(uint32_t car) const {
        return car&&car==car_hash&&evidence_id&&force_units_verified&&velocity_verified&&gain_verified&&reference_verified&&
               std::isfinite(additional_gain_n_m)&&additional_gain_n_m>=0.&&additional_gain_n_m<=120.;
    }
};
// Sensor/model adapters and a canonical receipt coordinator. Does not recover
// energy from estimated receipt work or infer calibration from raw hints.
class SpringForceChannel {
    SpringExecution execution;
    SpringForceProfile registered;
    uint32_t epoch=0,generation=0,car_hash=0,last_sensor=0,next_command=1;
    static bool positions(const NgpeSensor& s,std::array<double,4>& relative) {
        double norm=0.;for(double v:s.up){if(!std::isfinite(v))return false;norm+=v*v;}
        if(norm<.99||norm>1.01)return false;
        for(unsigned i=0;i<4;++i){
            double distance=0.;relative[i]=0.;
            for(unsigned j=0;j<3;++j){
                if(!std::isfinite(s.positions[i][j])||!std::isfinite(s.body_origin[j])||
                   std::abs(s.positions[i][j])>1e7||std::abs(s.body_origin[j])>1e7)return false;
                const double offset=s.positions[i][j]-s.body_origin[j];distance+=offset*offset;
                relative[i]+=offset*s.up[j]/std::sqrt(norm);
            }
            if(distance<.01||distance>36.)return false;
        }
        auto separation=[&](unsigned a,unsigned b){double distance=0.;for(unsigned j=0;j<3;++j){
            const double delta=s.positions[a][j]-s.positions[b][j];distance+=delta*delta;}return std::sqrt(distance);};
        const double front=separation(0,1),rear=separation(2,3),left=separation(0,2),right=separation(1,3);
        return front>=.3&&front<=4.&&rear>=.3&&rear<=4.&&left>=.5&&left<=8.&&right>=.5&&right<=8.;
    }
    static bool sensor_ready(const NgpeSensor& s,double age) {
        if(s.abi!=NGPE_ABI||!s.epoch||!s.generation||!s.car_hash||!s.sequence||(s.flags&15)!=15||s.fault||!(s.api_mask&1)||
           !std::isfinite(age)||age<0.||age>.012||!std::isfinite(s.clock)||
           !std::isfinite(s.dt)||s.dt<=0.||s.dt>.02||!std::isfinite(s.supplement_age)||s.supplement_age<0.||s.supplement_age>.03)return false;
        for(unsigned i=0;i<4;++i){
            if(!(s.flags&(1u<<(16+i)))||!(s.flags&(1u<<(20+i)))||!std::isfinite(s.load[i])||s.load[i]<80.||s.load[i]>100000.)return false;
            double relative=0.;
            for(unsigned j=0;j<3;++j){
                if(!std::isfinite(s.body_velocity[i][j])||!std::isfinite(s.wheel_velocity[i][j])||
                   std::abs(s.body_velocity[i][j])>200.||std::abs(s.wheel_velocity[i][j])>200.)return false;
                relative+=(s.wheel_velocity[i][j]-s.body_velocity[i][j])*s.up[j];
            }
            if(!std::isfinite(relative)||std::abs(relative)>.25)return false;
        }
        return true;
    }
public:
    void reset(){execution.reset();registered={};epoch=generation=car_hash=last_sensor=0;}
    uint64_t reference_lease()const{return execution.reference_lease();}
    bool waiting()const{return execution.waiting();}
    bool referenced()const{return execution.referenced();}
    bool begin_reference(const NgpeSensor& s,double sensor_age,const SpringForceProfile& profile,bool stationary) {
        reset();std::array<double,4> relative{};
        if(!profile.ready(s.car_hash)||!stationary||!sensor_ready(s,sensor_age)||!positions(s,relative))return false;
        for(unsigned i=0;i<4;++i){
            double bodySpeed=0.,wheelSpeed=0.;
            for(unsigned j=0;j<3;++j){bodySpeed+=s.body_velocity[i][j]*s.body_velocity[i][j];wheelSpeed+=s.wheel_velocity[i][j]*s.wheel_velocity[i][j];}
            if(bodySpeed>.005*.005||wheelSpeed>.005*.005)return false;
        }
        if(!execution.anchor(s.epoch,s.generation,s.car_hash,relative,true,true))return false;
        registered=profile;epoch=s.epoch;generation=s.generation;car_hash=s.car_hash;return true;
    }
    NgpsForceCommand prepare(const NgpeSensor& s,double sensor_age,const NgpsModelHints& hints,
                             double model_age,const SpringForceProfile& profile,bool enabled) {
        NgpsForceCommand command{};command.abi=NGPS_FORCE_ABI;
        if(!enabled||!epoch||s.epoch!=epoch||s.generation!=generation||s.car_hash!=car_hash||
           !profile.ready(s.car_hash)||profile.evidence_id!=registered.evidence_id||
           profile.additional_gain_n_m!=registered.additional_gain_n_m||!sensor_ready(s,sensor_age)){
            reset();return command;
        }
        if(execution.expire(s.clock)) {reset();return command;}
        if(execution.waiting()||s.sequence<=last_sensor||next_command>=1073741823u)return command;
        if(hints.abi!=NGPS_ABI||hints.units_qualified||hints.reserved||hints.valid_mask!=15||
           !std::isfinite(model_age)||model_age<0.||model_age>.2)return command;
        SpringModelCandidate model;model.valid_mask=15;
        for(unsigned i=0;i<4;++i){
            const auto rate=hints.effective_rate[i],base=hints.base_rate[i],ratio=hints.excess_ratio[i];
            if(!std::isfinite(rate)||rate<0.||!std::isfinite(base)||base<=0.||!std::isfinite(ratio)||ratio<0.||
               std::abs(ratio-std::max(0.,rate/base-1.))>1e-9*std::max(1.,ratio))return command;
            model.excess_ratio[i]=ratio;
        }
        std::array<double,4> relative{};if(!positions(s,relative)){reset();return command;}
        SpringConversion conversion;conversion.units_qualified=true;conversion.additional_gain_n_m=profile.additional_gain_n_m;
        auto proposal=execution.prepare(next_command,s.clock,model,conversion,model_age,relative,15,true);
        if(!proposal.valid_mask)return command;
        command.epoch=epoch;command.generation=generation;command.car_hash=car_hash;command.sequence=next_command++;
        command.mask=proposal.valid_mask;command.reference_lease=execution.reference_lease();
        command.source_clock=s.clock;command.ttl=.012;
        double norm=0.;for(double v:s.up)norm+=v*v;
        for(unsigned j=0;j<3;++j)command.up[j]=s.up[j]/std::sqrt(norm);
        for(unsigned i=0;i<4;++i){
            command.body_force_n[i]=proposal.pairs[i].body_n;command.return_energy_j+=proposal.pairs[i].potential_j;
            for(unsigned j=0;j<3;++j)command.positions[i][j]=s.positions[i][j];
        }
        command.return_energy_j=std::min(1.,command.return_energy_j);last_sensor=s.sequence;return command;
    }
    bool acknowledge(const NgpsForceReceipt& receipt,double now) {
        if(receipt.abi!=NGPS_FORCE_ABI||receipt.reserved||receipt.work_qualified)return false;
        SpringExecution::Receipt r{receipt.epoch,receipt.generation,receipt.car_hash,receipt.sequence,
            receipt.completed_mask,receipt.api_calls,receipt.fault,receipt.clock,receipt.reference_lease};
        return execution.acknowledge(r,now);
    }
};
}

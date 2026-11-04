#pragma once
#include "drive_residual.hpp"
#include <cstdint>
#include <limits>

namespace ngp {
struct DriveExecutionCommand {
    uint64_t sequence=0;
    uint32_t epoch=0,generation=0,car_hash=0,sensor_sequence=0;
    double source_clock=0,work_bound_j=0;
    std::array<double,2> delta_nm{};
};
struct DriveExecutionReceipt {
    uint64_t sequence=0;
    uint32_t epoch=0,generation=0,car_hash=0,completed_mask=0;
    double clock=0,conservative_work_debit_j=0;
    bool fault=false,work_measurement_verified=false;
    double absorbed_work_lower_j=0;
};
// Internal ledger only, not a wire ABI. Credits come from a separately verified
// energy source; neither model windupEnergy nor predicted negative work grants
// energy. Optional qualified storage recovers only completed receipt lower bounds.
// Unknown/partial application retains the entire reservation.
class DriveExecution {
    DriveExecutionCommand pending{};
    uint64_t next_sequence=1;
    uint32_t epoch=0,generation=0,car=0,last_sensor=0;
    double credit=0,spent=0,held=0,recovery_capacity=0;
    bool active=false,latched=false,qualified=false;
    void fail(){latched=true;active=false;pending={};}
public:
    bool waiting()const{return pending.sequence!=0;}
    bool faulted()const{return latched;}
    double available()const{return std::max(0.,credit-spent-held);}
    double consumed()const{return spent;}
    double unresolved_reservation()const{return held;}
    bool begin(uint32_t e,uint32_t g,uint32_t c,double verified_energy_j,bool energy_verified,double verified_recovery_capacity_j=0){
        // Reject the complete initialization request before touching context,
        // pending work, fault state, or credit. Invalid requests are not resets.
        if(!e||!g||!c||!energy_verified||!std::isfinite(verified_energy_j)||verified_energy_j<0||
           !std::isfinite(verified_recovery_capacity_j)||verified_recovery_capacity_j<0||
           (verified_recovery_capacity_j>0&&verified_energy_j>verified_recovery_capacity_j))return false;
        // Repeated begin cannot replenish or clear a fault in the same context.
        if(e==epoch&&g==generation&&c==car)return active&&!latched;
        // A stale context must not clear unresolved work or replenish energy.
        if(e==epoch&&epoch&&g<=generation)return false;
        epoch=e;generation=g;car=c;last_sensor=0;pending={};spent=held=credit=0;active=false;latched=false;qualified=false;
        credit=verified_energy_j;recovery_capacity=verified_recovery_capacity_j;active=qualified=true;return true;
    }
    void stop(){if(waiting())fail();else active=false;}
    bool resume(){if(!qualified||latched)return false;active=true;return true;}
    void expire(double clock){
        if(waiting()&&(!std::isfinite(clock)||clock<pending.source_clock||clock-pending.source_clock>.006))fail();
    }
    DriveExecutionCommand prepare(const DriveResidualOutput& value,uint32_t sensor,double source_clock,double clock,
                                  double verified_work_bound_j,bool work_bound_verified){
        expire(clock);DriveExecutionCommand empty;
        if(!active||latched||waiting()||!value.valid||!sensor||sensor<=last_sensor||!work_bound_verified||
           !std::isfinite(source_clock)||!std::isfinite(clock)||clock<source_clock||clock-source_clock>.006||
           !std::isfinite(value.positive_work_reservation_j)||value.positive_work_reservation_j<0||
           !std::isfinite(verified_work_bound_j)||verified_work_bound_j<value.positive_work_reservation_j||
           verified_work_bound_j>available()||next_sequence==std::numeric_limits<uint64_t>::max())return empty;
        for(double v:value.delta_nm)if(!std::isfinite(v)||std::abs(v)>40000)return empty;
        pending={next_sequence++,epoch,generation,car,sensor,source_clock,verified_work_bound_j,value.delta_nm};
        held=verified_work_bound_j;last_sensor=sensor;return pending;
    }
    bool acknowledge(const DriveExecutionReceipt& r,double clock){
        expire(clock);if(!waiting())return false;
        if(r.sequence!=pending.sequence||r.epoch!=epoch||r.generation!=generation||r.car_hash!=car)return false;
        if(!std::isfinite(r.clock)||!std::isfinite(clock)||r.clock<pending.source_clock||r.clock>clock||clock-r.clock>.006)return false;
        if(r.fault||r.completed_mask!=3||!r.work_measurement_verified||!std::isfinite(r.conservative_work_debit_j)||
           r.conservative_work_debit_j<0||r.conservative_work_debit_j>held||
           !std::isfinite(r.absorbed_work_lower_j)||r.absorbed_work_lower_j<0||
           !std::isfinite(spent+r.conservative_work_debit_j)){fail();return false;}
        spent+=r.conservative_work_debit_j;held=0;pending={};
        if(recovery_capacity>0){
            const double balance=std::min(recovery_capacity,std::max(0.,credit-spent));
            const double recovered=std::min(r.absorbed_work_lower_j,recovery_capacity-balance);
            if(!std::isfinite(spent+balance+recovered)){fail();return false;}
            credit=spent+balance+recovered;
        }
        return true;
    }
};
}

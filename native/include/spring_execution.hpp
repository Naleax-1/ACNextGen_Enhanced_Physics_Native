#pragma once
#include "spring_model_path.hpp"

namespace ngp {
// One outstanding proposal. A receipt refers to the canonical local proposal;
// transport must not supply stiffness or debit amounts back to commit().
class SpringExecution {
    SpringModelPath path;
    SpringModelPath::Output pending;
    uint32_t pending_sequence=0,last_command=0,last_damping_receipt=0;
    uint64_t lease=0;
    double pending_deadline=0.,balance=0.;
public:
    struct Receipt {
        uint32_t epoch=0,generation=0,car_hash=0,sequence=0,completed_mask=0,api_calls=0,fault=0;
        double clock=0.;
        uint64_t reference_lease=0;
    };
    struct DampingReceipt {
        Receipt identity;
        double measured_work_j=0.;
        bool units_qualified=false,velocity_qualified=false;
    };
    double energy_j() const { return balance; }
    uint64_t reference_lease() const { return lease; }
    bool waiting() const { return pending_sequence!=0; }
    bool referenced() const { return path.anchored; }
    void reset() {
        path.reset();pending={};pending_sequence=last_command=last_damping_receipt=0;
        if(lease!=UINT64_MAX)++lease;
        pending_deadline=0.;balance=0.;
    }
    bool anchor(uint32_t epoch,uint32_t generation,uint32_t car,
                const std::array<double,4>& reference,bool stationary,bool qualified) {
        // Never carry energy or pending confirmations across a reference reset.
        reset();return lease!=UINT64_MAX&&path.anchor(epoch,generation,car,reference,stationary,qualified);
    }
    bool matches(const Receipt& receipt) const {
        return path.anchored&&receipt.epoch==path.epoch&&receipt.generation==path.generation&&
               receipt.car_hash==path.car_hash&&receipt.reference_lease==lease&&
               receipt.sequence&&std::isfinite(receipt.clock);
    }
    static unsigned pair_calls(unsigned mask) {
        unsigned count=0;for(unsigned i=0;i<4;++i)if(mask&(1u<<i))count+=2;return count;
    }
    // Default recovery=0. Only qualified measured work from completed damping
    // pairs may be recovered; candidate power and spring return work cannot
    // enter here. The caller must split recovered work from dissipated heat.
    bool credit(const DampingReceipt& receipt,double now,double recovery=0.) {
        const auto& r=receipt.identity;
        if(!matches(r)||waiting()||r.sequence<=last_damping_receipt||r.fault||
           r.completed_mask<1||r.completed_mask>15||r.api_calls!=pair_calls(r.completed_mask)||
           !std::isfinite(now)||r.clock>now||now-r.clock>.02||
           !receipt.units_qualified||!receipt.velocity_qualified||
           !std::isfinite(receipt.measured_work_j)||receipt.measured_work_j>0.||
           receipt.measured_work_j< -1.||!std::isfinite(recovery)||recovery<0.||recovery>1.)return false;
        balance=std::min(1.,balance-receipt.measured_work_j*recovery);
        last_damping_receipt=r.sequence;return true;
    }
    SpringModelPath::Output prepare(uint32_t sequence,double now,const SpringModelCandidate& model,
        const SpringConversion& conversion,double age,const std::array<double,4>& relative,
        unsigned velocity_mask,bool enabled) {
        if(!enabled){reset();return {};}
        if(waiting()||!sequence||sequence>=1073741823u||sequence<=last_command||!std::isfinite(now))return {};
        auto proposal=path.compute(model,conversion,path.epoch,path.generation,path.car_hash,age,
                                   relative,velocity_mask,balance,true);
        if(!proposal.valid_mask)return {};
        pending=proposal;pending_sequence=sequence;pending_deadline=now+.012;last_command=sequence;
        return proposal;
    }
    bool acknowledge(const Receipt& receipt,double now) {
        if(!waiting()||!matches(receipt)||receipt.sequence!=pending_sequence)return false;
        if(!std::isfinite(now)||now>pending_deadline||receipt.clock>now||receipt.clock<pending_deadline-.012||
           receipt.fault||receipt.completed_mask!=pending.valid_mask||
           receipt.api_calls!=pair_calls(pending.valid_mask)) {
            // An incomplete pair can already have affected the game. Drop the
            // reference and reservoir, never retry or credit the partial step.
            reset();return false;
        }
        const bool applied=path.commit(pending,true,balance);
        pending={};pending_sequence=0;
        if(!applied)reset();return applied;
    }
    bool expire(double now) {
        if(waiting()&&(!std::isfinite(now)||now>pending_deadline)){reset();return true;}
        return false;
    }
};
}

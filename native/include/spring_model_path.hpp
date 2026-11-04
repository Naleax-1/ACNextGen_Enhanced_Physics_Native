#pragma once
#include "spring_model_adapter.hpp"
#include <cstdint>

namespace ngp {
// Native assembly component; transport/application is not implemented here.
// caller must use measured, qualified wheel-minus-body up-axis positions.
struct SpringModelPath {
    uint32_t epoch=0,generation=0,car_hash=0;
    std::array<double,4> reference{};
    std::array<SpringResidual,4> springs{};
    bool anchored=false;
    uint64_t revision=0;
    void reset() { const auto next=revision+1;*this=SpringModelPath{};revision=next; }
    bool anchor(uint32_t e,uint32_t g,uint32_t car,const std::array<double,4>& relative,
                bool stationary,bool reference_qualified) {
        if(!e||!g||!car||!stationary||!reference_qualified) return false;
        for(double value:relative) if(!std::isfinite(value)||std::abs(value)>6.) return false;
        reset();epoch=e;generation=g;car_hash=car;reference=relative;anchored=true;return true;
    }
    struct Output {
        std::array<SpringResidual::Pair,4> pairs{};
        std::array<double,4> proposed_stiffness{};
        uint64_t revision=0;
        double energy_cost_j=0.;unsigned valid_mask=0;
    };
    Output compute(const SpringModelCandidate& model,const SpringConversion& conversion,
                   uint32_t e,uint32_t g,uint32_t car,double model_age,
                   const std::array<double,4>& relative,unsigned velocity_mask,
                   double accounted_energy_j,bool enabled) {
        Output out;
        if(!enabled||!anchored||e!=epoch||g!=generation||car!=car_hash||
           !std::isfinite(model_age)||model_age<0.||model_age>.2||
           !std::isfinite(accounted_energy_j)||accounted_energy_j<0.) {
            reset();return out;
        }
        // Transactional proposal: no partial stiffness update or energy debit.
        // The caller may commit this copy only after the complete force packet
        // is acknowledged. compute() itself does not mutate the live springs.
        auto proposed=springs;
        for(unsigned i=0;i<4;++i) {
            if(!(model.valid_mask&(1u<<i))) continue;
            if(!(velocity_mask&(1u<<i))) return Output{};
            double stiffness=0.,cost=0.;
            const double x=relative[i]-reference[i];
            if(!conversion.stiffness(model,i,stiffness)||
               !proposed[i].set_stiffness(stiffness,x,accounted_energy_j-out.energy_cost_j,cost)) return Output{};
            out.energy_cost_j+=cost;
            out.pairs[i]=proposed[i].evaluate(x,true,true);
            if(!out.pairs[i].valid) return Output{};
            out.valid_mask|=1u<<i;
        }
        for(unsigned i=0;i<4;++i) out.proposed_stiffness[i]=proposed[i].stiffness_n_m;
        out.revision=revision;return out;
    }
    bool commit(const Output& proposal,bool complete_packet_acknowledged,double& energy_j) {
        if(!anchored||!complete_packet_acknowledged||!proposal.valid_mask||
           proposal.revision!=revision||!std::isfinite(energy_j)||
           proposal.energy_cost_j<0.||!std::isfinite(proposal.energy_cost_j)||
           proposal.energy_cost_j>energy_j) return false;
        for(double value:proposal.proposed_stiffness)
            if(!std::isfinite(value)||value<0.||value>SpringResidual::stiffness_cap_n_m) return false;
        for(unsigned i=0;i<4;++i) springs[i].stiffness_n_m=proposal.proposed_stiffness[i];
        energy_j-=proposal.energy_cost_j;++revision;return true;
    }
};
}

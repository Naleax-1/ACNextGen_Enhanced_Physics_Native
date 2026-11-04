#pragma once
#include "body_model_adapter.hpp"
#include "body_moment_adapter.hpp"
#include <cstdint>
namespace ngp {
struct BodyMomentProfile {
    uint32_t car_hash=0,patch_code=0;
    uint64_t evidence_id=0;
    std::array<double,2> neutral_normalized{},signed_nm_per_normalized{};
    double half_width_m=0,half_length_m=0,max_force_n=0;
    // Storage capacity only. Starting a context never fills it with energy.
    double storage_capacity_j=0;
    // Optional yaw conversion. Loader/Host ownership integration is separate;
    // legacy profiles cannot enable this by merely carrying a model hint.
    bool yaw_enabled=false,yaw_normalization_verified=false,yaw_neutral_verified=false,yaw_exclusive_owner_verified=false;
    double yaw_neutral_normalized=0,yaw_signed_nm_per_normalized=0;
    bool normalization_contract_verified=false,neutral_verified=false,exclusive_owner=false;
    bool body_force_units_verified=false,coordinates_verified=false;
    bool ready(uint32_t car,uint32_t patch)const{
        if(!car||car!=car_hash||!patch||patch!=patch_code||!evidence_id||evidence_id>9007199254740991ULL||
           !normalization_contract_verified||!neutral_verified||!exclusive_owner||!body_force_units_verified||!coordinates_verified||
           !std::isfinite(storage_capacity_j)||storage_capacity_j<0||storage_capacity_j>1)return false;
        for(unsigned i=0;i<2;++i)
            if(!std::isfinite(neutral_normalized[i])||!std::isfinite(signed_nm_per_normalized[i])||
               std::abs(neutral_normalized[i])>10||std::abs(signed_nm_per_normalized[i])>1000)return false;
        if(!std::isfinite(yaw_neutral_normalized)||!std::isfinite(yaw_signed_nm_per_normalized)||
           std::abs(yaw_neutral_normalized)>10||std::abs(yaw_signed_nm_per_normalized)>1000)return false;
        if(yaw_enabled){
            if(!yaw_normalization_verified||!yaw_neutral_verified||!yaw_exclusive_owner_verified)return false;
        }else if(yaw_neutral_normalized!=0||yaw_signed_nm_per_normalized!=0)return false;
        return true;
    }
};
struct BodyMomentCandidate {
    BodyMomentOutput forces;
    double roll_nm=0,pitch_nm=0,yaw_nm=0;
    bool valid=false,application_authorized=false;
};
inline BodyMomentCandidate body_model_candidate(const BodyModelCandidate& model,const BodyMomentProfile& profile,
    uint32_t car,uint32_t patch,double model_age,const std::array<BodyVec,4>& point_velocity_local_ms){
    BodyMomentCandidate out;
    if(!model.valid||model.units_qualified||!profile.ready(car,patch)||!std::isfinite(model_age)||model_age<0||model_age>.1)return out;
    // These are explicitly defined extra moments; not a reconstructed native
    // AC moment and not proof that the legacy model states are SI angles.
    for(double v:model.normalized)if(!std::isfinite(v))return out;
    BodyMomentInput input;
    input.roll_moment_nm=(model.normalized[0]-profile.neutral_normalized[0])*profile.signed_nm_per_normalized[0];
    input.pitch_moment_nm=(model.normalized[1]-profile.neutral_normalized[1])*profile.signed_nm_per_normalized[1];
    if(profile.yaw_enabled)
        input.yaw_moment_nm=(model.normalized[3]-profile.yaw_neutral_normalized)*profile.yaw_signed_nm_per_normalized;
    input.half_width_m=profile.half_width_m;input.half_length_m=profile.half_length_m;input.max_force_n=profile.max_force_n;
    input.point_velocity_local_ms=point_velocity_local_ms;
    input.residual_contract_verified=input.body_force_units_verified=input.coordinates_verified=true;
    out.forces=body_moment_forces(input);if(!out.forces.valid)return BodyMomentCandidate{};
    out.roll_nm=input.roll_moment_nm;out.pitch_nm=input.pitch_moment_nm;out.yaw_nm=input.yaw_moment_nm;out.valid=true;
    // An independent execution ledger must authorize energy and API writes.
    return out;
}
}

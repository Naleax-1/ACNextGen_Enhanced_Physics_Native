#pragma once
#include <algorithm>
#include <cmath>
#include <cstdint>
namespace ngp::experiment {
// Dimensionless response only. Does not convert to N or N.s/m, grant physics
// permission, alter an owner state, or supply a guessed reference model.
struct TyreResponseSample {
    uint32_t epoch=0,generation=0,car_hash=0,sequence=0;
    uint64_t model_units_id=0;
    double clock=0.,response=0.;
};
enum class TyreResponseRejection {none,context,units,phase,numeric,reference_unresolved,sign};
struct TyreReferenceRatio {
    bool available=false;
    double attenuation=0.;
    TyreResponseRejection rejection=TyreResponseRejection::context;
};
inline TyreReferenceRatio tyre_reference_response(const TyreResponseSample& owner,
    const TyreResponseSample& reference,double reference_resolution){
    auto reject=[](TyreResponseRejection reason){return TyreReferenceRatio{false,0.,reason};};
    if(!owner.epoch||!owner.generation||!owner.car_hash||!owner.sequence||
       owner.epoch!=reference.epoch||owner.generation!=reference.generation||
       owner.car_hash!=reference.car_hash)return reject(TyreResponseRejection::context);
    if(!owner.model_units_id||owner.model_units_id!=reference.model_units_id)
        return reject(TyreResponseRejection::units);
    if(!std::isfinite(owner.clock)||!std::isfinite(reference.clock)||owner.clock<0||
       owner.sequence!=reference.sequence||owner.clock!=reference.clock)
        return reject(TyreResponseRejection::phase);
    if(!std::isfinite(owner.response)||!std::isfinite(reference.response)||
       !std::isfinite(reference_resolution)||reference_resolution<=0)
        return reject(TyreResponseRejection::numeric);
    if(std::abs(reference.response)<=reference_resolution)
        return reject(TyreResponseRejection::reference_unresolved);
    // Comparing signs avoids overflow from multiplying large responses.
    if(owner.response!=0&&std::signbit(owner.response)!=std::signbit(reference.response))
        return reject(TyreResponseRejection::sign);
    // Compare before dividing: ratio overflow must not turn into an output.
    const double attenuation=std::abs(owner.response)>=std::abs(reference.response)?1.:
        std::abs(owner.response)/std::abs(reference.response);
    return {true,attenuation,TyreResponseRejection::none};
}
}

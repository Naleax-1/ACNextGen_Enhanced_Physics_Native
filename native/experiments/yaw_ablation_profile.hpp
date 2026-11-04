#pragma once
#include "yaw_ablation_gate.hpp"
#include "bridge_protocol.h"
#include "json.hpp"
#include <string>
#include <stdexcept>

namespace ngp::experiment {
struct YawAblationProfile {YawAblationConfig config;std::string car_id,job_id;};
inline YawAblationProfile yaw_ablation_profile(const nlohmann::json& j){
    auto integer=[](const nlohmann::json& v,double low,double high){
        if(!v.is_number())throw std::runtime_error("Ablation numeric integer required");
        double n=v.get<double>();if(!std::isfinite(n)||n<low||n>high||std::floor(n)!=n)throw std::runtime_error("Invalid ablation integer");
        return uint32_t(n);
    };
    if(integer(j.at("schema"),1,1)!=1||!j.at("enabled").is_boolean()||!j.at("enabled").get<bool>())throw std::runtime_error("Explicit ablation grant required");
    YawAblationProfile p;p.config.enabled=true;
    p.car_id=j.at("car_id").get<std::string>();p.job_id=j.at("job_id").get<std::string>();
    if(p.car_id.empty()||p.car_id.size()>200||p.job_id.size()!=48)throw std::runtime_error("Invalid ablation identity");
    for(unsigned char c:p.car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))throw std::runtime_error("Invalid ablation car");
    for(unsigned char c:p.job_id)if(!((c>='0'&&c<='9')||(c>='a'&&c<='f')))throw std::runtime_error("Invalid ablation job");
    p.config.car_hash=integer(j.at("car_hash"),1,4294967295.);
    if(p.config.car_hash!=ngp4_checksum(p.car_id.data(),p.car_id.size()))throw std::runtime_error("Ablation car hash mismatch");
    p.config.patch_code=integer(j.at("patch_code"),1,2147483646.);
    p.config.pairs=integer(j.at("pairs"),1,32);
    p.config.pair_order_bits=integer(j.at("pair_order_bits"),0,4294967295.);
    const auto& phase=j.at("phase_seconds");if(!phase.is_number())throw std::runtime_error("Ablation phase must be numeric");
    p.config.phase_seconds=phase.get<double>();
    if(!std::isfinite(p.config.phase_seconds)||p.config.phase_seconds<.25||2*p.config.pairs*p.config.phase_seconds>60.)throw std::runtime_error("Ablation duration invalid");
    return p;
}
}

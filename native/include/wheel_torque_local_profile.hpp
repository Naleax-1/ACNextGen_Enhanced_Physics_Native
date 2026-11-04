#pragma once
#include "drive_transport.hpp"
#include "json.hpp"
#include <array>
#include <string>
namespace ngp {
// Validates a declaration; never certifies its asserted measurement flags.
struct WheelTorqueLocalProfile {
    std::string car_id,evidence_reference;
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    double dt=0,storage_capacity_j=0,lsd_nm_per_hint=0;
    std::array<double,2> windup_nm_per_normalized{};
    bool valid=false;
};
inline WheelTorqueLocalProfile wheel_torque_local_profile(const nlohmann::json& j){
    WheelTorqueLocalProfile p;
    try{
        auto number=[](const nlohmann::json& v){if(!v.is_number())throw 0;double x=v.get<double>();if(!std::isfinite(x))throw 0;return x;};
        auto integer=[&](const nlohmann::json& v,double max){double x=number(v);if(x<1||x>max||std::floor(x)!=x)throw 0;return uint64_t(x);};
        auto yes=[](const nlohmann::json& v){if(!v.is_boolean()||!v.get<bool>())throw 0;};
        auto truth=[&](const char* key){return j.contains(key)&&j.at(key).is_boolean()&&j.at(key).get<bool>();};
        auto array=[&](const nlohmann::json& v,unsigned count,double lo,double hi,bool nonzero){
            if(!v.is_array()||v.size()!=count)throw 0;
            for(const auto& value:v){double x=number(value);if(x<lo||x>hi||(nonzero&&x==0))throw 0;}
        };
        if(!j.is_object()||integer(j.at("schema"),1)!=1)return {};yes(j.at("enabled"));
        if(j.at("execution_mode").get<std::string>()!="worker_local_four_wheel_v1"||j.at("torque_argument_contract").get<std::string>()!="constant_raw_per_nm")return {};
        p.car_id=j.at("car_id").get<std::string>();p.evidence_reference=j.at("evidence_reference").get<std::string>();
        if(p.car_id.empty()||p.car_id.size()>200||p.evidence_reference.empty()||p.evidence_reference.size()>500)return {};
        for(unsigned char c:p.car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return {};
        p.car_hash=uint32_t(integer(j.at("car_hash"),4294967295.));if(p.car_hash!=drive_checksum(p.car_id.data(),p.car_id.size()))return {};
        p.patch_code=uint32_t(integer(j.at("patch_code"),2147483646.));p.evidence_id=integer(j.at("evidence_id"),9007199254740991.);
        for(const char* key:{"units_verified","baseline_isolated","single_four_wheel_owner_verified","legacy_brake_disabled_verified","legacy_drive_disabled_verified","coordinator_work_accounting_verified",
            "phase_verified","native_baseline_interval_verified","native_fade_double_counting_excluded","rwd_verified","paired_application_order_verified","bounds_verified","constant_torque_verified",
            "torque_error_verified","action_interval_verified","sample_units_verified","additional_windup_contract_verified","same_callback_sample_verified","additional_lsd_contract_verified","legacy_diff_disabled_verified","brake_fade_contract_verified"})yes(j.at(key));
        p.dt=number(j.at("dt"));if(p.dt<=0||p.dt>.003)return {};
        integer(j.at("baseline_mode"),2);
        const double baseline=number(j.at("baseline_scale_nm_per_raw")),command=number(j.at("command_scale_raw_per_nm")),limit=number(j.at("max_api_argument")),rear=number(j.at("max_rear_additional_nm"));
        if(baseline<=0||baseline>1000||command==0||std::abs(command)>1000||limit<=0||limit>20000||rear<=0||rear>12)return {};
        p.lsd_nm_per_hint=number(j.at("lsd_nm_per_hint"));if(p.lsd_nm_per_hint<0||p.lsd_nm_per_hint>12)return {};
        array(j.at("windup_nm_per_normalized"),2,-1000,1000,true);p.windup_nm_per_normalized=j.at("windup_nm_per_normalized").get<std::array<double,2>>();
        array(j.at("acceleration_bound_rad_s2"),4,0,1e300,false);array(j.at("omega_error_rad_s"),4,0,1e300,false);array(j.at("total_torque_error_nm"),4,0,20000,false);
        if(number(j.at("initial_energy_j"))!=0)return {};
        if(j.contains("storage_capacity_j"))p.storage_capacity_j=number(j.at("storage_capacity_j"));
        if(p.storage_capacity_j<0||p.storage_capacity_j>1||(p.storage_capacity_j>0&&!truth("recovery_contract_verified"))||(truth("recovery_contract_verified")&&!truth("windup_scale_verified")))return {};
        p.valid=true;return p;
    }catch(...){return {};}
}
}

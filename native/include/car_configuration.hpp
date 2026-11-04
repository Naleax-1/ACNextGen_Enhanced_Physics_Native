#pragma once
// Literal vehicle-data adapter for the existing Core car_config interface.
// No file writes, physical qualification, guessed CG height or tyre/suspension merge.
#include "json.hpp"
#include <cmath>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>

namespace ngp {
using VehicleIni=std::map<std::string,std::map<std::string,std::string>>;
inline std::string ini_trim(std::string value){
    auto begin=value.find_first_not_of(" \t\r\n");
    if(begin==std::string::npos)return {};
    return value.substr(begin,value.find_last_not_of(" \t\r\n")-begin+1);
}
inline VehicleIni parse_vehicle_ini(std::string text){
    if(text.compare(0,3,"\xef\xbb\xbf")==0)text.erase(0,3);
    VehicleIni out;std::string line,section;std::istringstream stream(text);
    while(std::getline(stream,line)){
        line=ini_trim(line.substr(0,line.find_first_of(";#")));
        if(line.empty())continue;
        if(line.front()=='['){
            if(line.back()!=']'||line.size()<3)throw std::runtime_error("Malformed INI section");
            section=ini_trim(line.substr(1,line.size()-2));
            if(section.empty())throw std::runtime_error("Empty INI section");
            continue;
        }
        auto equals=line.find('=');
        if(section.empty())throw std::runtime_error("Malformed INI entry");
        if(equals==std::string::npos){
            // Some mods contain bare annotation lines in unrelated sections.
            // Never admit such a line in a section used by this adapter.
            if(section=="BASIC"||section=="FRONT"||section=="REAR"||section=="_EXTENSION_FLEX"||section=="GEARS")
                throw std::runtime_error("Malformed relevant INI entry");
            continue;
        }
        auto key=ini_trim(line.substr(0,equals));auto value=ini_trim(line.substr(equals+1));
        if(key.empty()||!out[section].emplace(key,value).second)throw std::runtime_error("Duplicate or empty INI key");
    }
    return out;
}
inline nlohmann::json vehicle_car_configuration(const std::string& car_text,const std::string& suspension_text){
    auto car=parse_vehicle_ini(car_text),suspension=parse_vehicle_ini(suspension_text);
    nlohmann::json config=nlohmann::json::object(),routes=nlohmann::json::array();
    auto take=[&](const VehicleIni& source,const char* file,const char* section,const char* key,
                  const char* destination_section,const char* destination_key,bool positive){
        auto s=source.find(section);if(s==source.end())return;
        auto v=s->second.find(key);if(v==s->second.end())return;
        size_t consumed=0;double number;
        try{number=std::stod(v->second,&consumed);}catch(...){throw std::runtime_error("Nonnumeric vehicle parameter");}
        if(consumed!=v->second.size()||!std::isfinite(number)||(positive?number<=0:number<0))
            throw std::runtime_error("Invalid vehicle parameter");
        config[destination_section][destination_key]=number;
        routes.push_back({{"file",file},{"section",section},{"key",key},
                          {"target_section",destination_section},{"target_key",destination_key}});
    };
    take(car,"car.ini","BASIC","TOTALMASS","BASIC","TOTALMASS",true);
    take(suspension,"suspensions.ini","BASIC","WHEELBASE","BASIC","WHEELBASE",true);
    // CG_LOCATION is a dimensionless fore/aft fraction, never a CG height.
    take(suspension,"suspensions.ini","BASIC","CG_LOCATION","BASIC","CG_LOCATION",false);
    if(config.contains("BASIC")&&config["BASIC"].contains("CG_LOCATION")&&config["BASIC"]["CG_LOCATION"].get<double>()>1.)
        throw std::runtime_error("Invalid CG location fraction");
    for(const char* axle:{"FRONT","REAR"}){
        for(const char* key:{"TRACK","SPRING_RATE","DAMP_BUMP"})
            take(suspension,"suspensions.ini",axle,key,axle,key,std::string(key)=="TRACK");
        take(suspension,"suspensions.ini",axle,"TRACK","BASIC",std::string(axle)=="FRONT"?"FRONT_TRACK":"REAR_TRACK",true);
    }
    for(const char* key:{"TORSIONAL_STIFFNESS","TORSIONAL_DAMPING"})
        take(suspension,"suspensions.ini","_EXTENSION_FLEX",key,"_EXTENSION_FLEX",key,false);
    return {{"schema",1},{"car_config",config},{"routes",routes},
            {"physical_units_qualified",false},{"actuation_allowed",false},
            {"missing_fields_policy","absent; existing model defaults remain visible and unqualified"}};
}
// Keep native spring, bump-stop and ride-height literals distinct. None is a
// calibrated mapping to the enhancement model's virtual travel or neutral.
inline nlohmann::json vehicle_spring_reference(const std::string& text){
    auto ini=parse_vehicle_ini(text);
    nlohmann::json axles=nlohmann::json::object();
    for(const char* axle:{"FRONT","REAR"}){
        auto section=ini.find(axle);if(section==ini.end())continue;
        nlohmann::json values=nlohmann::json::object();
        for(const char* key:{"SPRING_RATE","PROGRESSIVE_SPRING_RATE","BUMP_STOP_RATE","BUMPSTOP_UP","BUMPSTOP_DN","PACKER_RANGE","ROD_LENGTH"}){
            auto entry=section->second.find(key);if(entry==section->second.end())continue;
            size_t used=0;double value;
            try{value=std::stod(entry->second,&used);}catch(...){throw std::runtime_error("Nonnumeric spring reference");}
            if(used!=entry->second.size()||!std::isfinite(value)||(std::string(key)!="ROD_LENGTH"&&value<0.))
                throw std::runtime_error("Invalid spring reference");
            values[key]=value; // Explicit zero is data, not a missing-field fallback.
        }
        if(!values.empty())axles[axle]=values;
    }
    return {{"available",!axles.empty()},{"axles",axles},{"source","suspensions.ini"},
            {"physical_units_qualified",false},{"physical_output_allowed",false},
            {"wheel_to_spring_motion_ratio_verified",false},{"static_zero_verified",false},
            {"model_parameter_binding","none"}};
}
// Declared damper coefficients and separate bump/rebound thresholds only.
// Fast coefficients may be lower than slow coefficients; no curve is inferred.
inline nlohmann::json vehicle_damper_reference(const std::string& text){
    const auto ini=parse_vehicle_ini(text);
    nlohmann::json axles=nlohmann::json::object();
    for(const char* axle:{"FRONT","REAR"}){
        auto section=ini.find(axle);if(section==ini.end())continue;
        nlohmann::json values=nlohmann::json::object();
        for(const char* key:{"DAMP_BUMP","DAMP_FAST_BUMP","DAMP_FAST_BUMPTHRESHOLD",
                             "DAMP_REBOUND","DAMP_FAST_REBOUND","DAMP_FAST_REBOUNDTHRESHOLD"}){
            auto entry=section->second.find(key);if(entry==section->second.end())continue;
            size_t used=0;double value;
            try{value=std::stod(entry->second,&used);}catch(...){throw std::runtime_error("Nonnumeric damper reference");}
            if(used!=entry->second.size()||!std::isfinite(value)||value<0.)
                throw std::runtime_error("Invalid damper reference");
            values[key]=value;
        }
        if(!values.empty())axles[axle]=values;
    }
    return {{"available",!axles.empty()},{"axles",axles},{"source","suspensions.ini"},
            {"physical_units_qualified",false},{"physical_output_allowed",false},
            {"wheel_to_damper_motion_ratio_verified",false},{"velocity_sign_verified",false},
            {"curve_equivalence_verified",false},{"model_parameter_binding","none"}};
}
// Literal baseline declarations only: no per-wheel torque or live bias inference.
inline nlohmann::json vehicle_brake_reference(const std::string& text){
    const auto ini=parse_vehicle_ini(text);nlohmann::json values=nlohmann::json::object();
    auto section=ini.find("DATA");
    if(section!=ini.end())for(const char* key:{"MAX_TORQUE","FRONT_SHARE","HANDBRAKE_TORQUE"}){
        auto entry=section->second.find(key);if(entry==section->second.end())continue;
        size_t used=0;double value;
        try{value=std::stod(entry->second,&used);}catch(...){throw std::runtime_error("Nonnumeric brake reference");}
        if(used!=entry->second.size()||!std::isfinite(value)||value<0.||
           (std::string(key)=="FRONT_SHARE"&&value>1.))throw std::runtime_error("Invalid brake reference");
        values[key]=value;
    }
    return {{"available",!values.empty()},{"data",values},{"source","brakes.ini DATA"},
            {"physical_output_allowed",false},{"physical_units_qualified",false},
            {"live_brake_bias_verified",false},{"per_wheel_torque_verified",false},
            {"native_fade_isolated",false},{"model_parameter_binding","none"}};
}
// Explicit gear ratios only: never synthesise engine torque or wheel actuation.
// Kept separate until consumer replay and Host provenance are verified.
inline nlohmann::json vehicle_gear_configuration(const std::string& text){
    auto ini=parse_vehicle_ini(text);
    auto section=ini.find("GEARS");
    if(section==ini.end())throw std::runtime_error("Missing GEARS section");
    auto number=[&](const std::string& key){
        auto entry=section->second.find(key);
        if(entry==section->second.end())throw std::runtime_error("Missing gear parameter");
        size_t used=0;double value;
        try{value=std::stod(entry->second,&used);}catch(...){throw std::runtime_error("Nonnumeric gear parameter");}
        if(used!=entry->second.size()||!std::isfinite(value))throw std::runtime_error("Invalid gear parameter");
        return value;
    };
    double count=number("COUNT"),final=number("FINAL"),reverse=number("GEAR_R");
    if(count!=std::floor(count)||count<1||count>10||final<=0||reverse>=0)
        throw std::runtime_error("Invalid gear range or direction");
    nlohmann::json gears={{"COUNT",count},{"FINAL",final},{"GEAR_R",reverse}};
    for(int index=1;index<=static_cast<int>(count);++index){
        auto key="GEAR_"+std::to_string(index);double ratio=number(key);
        if(ratio<=0)throw std::runtime_error("Invalid forward gear direction");
        gears[key]=ratio;
    }
    return {{"car_config",{{"GEARS",gears}}},{"source","drivetrain.ini"},
            {"actuation_allowed",false},{"consumer_replay_verified",false}};
}
inline void validate_vehicle_gear_input(const nlohmann::json& input,const nlohmann::json& reference){
    const auto& config=reference.at("car_config");
    if(!config.contains("GEARS"))return; // Original/no-gear contract stays unchanged.
    auto gear=input.find("gear");
    if(gear==input.end()||!gear->is_number())throw std::runtime_error("Vehicle gear input missing or nonnumeric");
    double value=gear->get<double>();
    if(!std::isfinite(value)||value!=std::floor(value)||value< -1||value>config["GEARS"].at("COUNT").get<double>())
        throw std::runtime_error("Vehicle gear input outside declared range");
}
inline void validate_vehicle_gear_consumption(const nlohmann::json& configuration,const nlohmann::json& reference){
    const auto& config=reference.at("car_config");if(!config.contains("GEARS"))return;
    double minimum=.001; // Original drivetrain default; explicit override is honoured.
    if(configuration.contains("parameters")&&configuration["parameters"].contains("drivetrain")&&
       configuration["parameters"]["drivetrain"].contains("minGearRatioAbs")){
        const auto& value=configuration["parameters"]["drivetrain"]["minGearRatioAbs"];
        if(!value.is_number())throw std::runtime_error("Invalid minimum gear ratio");
        minimum=value.get<double>();
    }
    if(!std::isfinite(minimum)||minimum<0)throw std::runtime_error("Invalid minimum gear ratio");
    for(auto item=config["GEARS"].begin();item!=config["GEARS"].end();++item)
        if(item.key().rfind("GEAR_",0)==0&&std::abs(item.value().get<double>())<=minimum)
            throw std::runtime_error("Vehicle gear ratio below model consumption threshold");
}
inline nlohmann::json vehicle_rear_lsd_reference(const std::string& text){
    const auto ini=parse_vehicle_ini(text);
    nlohmann::json out={{"available",false},{"physical_output_allowed",false},{"baseline_residual_verified",false},
        {"preload_units_qualified",false},{"source","drivetrain.ini"}};
    auto traction=ini.find("TRACTION");
    if(traction==ini.end()||!traction->second.count("TYPE")){out["reason"]="traction_missing";return out;}
    const auto type=traction->second.at("TYPE");out["traction_type"]=type;
    if(type!="RWD"){out["reason"]="rear_rwd_contract_only";return out;}
    auto diff=ini.find("DIFFERENTIAL");
    if(diff==ini.end()){out["reason"]="standard_differential_missing";return out;}
    for(const char* alias:{"DIFFERENTIAL_0","DIFF","REAR_DIFFERENTIAL"})
        if(ini.count(alias)){out["reason"]="ambiguous_differential_sections";return out;}
    for(const char* key:{"CAM_POWER","POWER_ANGLE","CAM_1","CAM_COAST","COAST_ANGLE","CAM_2"})
        if(diff->second.count(key)){out["reason"]="custom_cam_configuration_unqualified";return out;}
    nlohmann::json values=nlohmann::json::object();
    for(const char* key:{"POWER","COAST","PRELOAD"}){
        auto entry=diff->second.find(key);
        if(entry==diff->second.end()){out["reason"]="differential_parameter_missing";return out;}
        size_t used=0;double value;
        try{value=std::stod(entry->second,&used);}catch(...){throw std::runtime_error("Nonnumeric rear LSD reference");}
        const double maximum=std::string(key)=="PRELOAD"?500.:1.;
        if(used!=entry->second.size()||!std::isfinite(value)||value<0||value>maximum)
            throw std::runtime_error("Rear LSD reference outside supported range");
        values[key]=value;
    }
    out["available"]=true;out["reason"]="static_rwd_reference_only";out["differential"]=values;
    return out;
}
inline nlohmann::json vehicle_clutch_reference(const std::string& text){
    auto ini=parse_vehicle_ini(text);
    nlohmann::json out={{"available",false},{"source","drivetrain.ini CLUTCH.MAX_TORQUE"},
        {"physical_units_qualified",false},{"physical_output_allowed",false}};
    auto section=ini.find("CLUTCH");
    if(section==ini.end()||!section->second.count("MAX_TORQUE")){out["reason"]="clutch_parameter_missing";return out;}
    const auto& raw=section->second.at("MAX_TORQUE");size_t used=0;double value;
    try{value=std::stod(raw,&used);}catch(...){throw std::runtime_error("Nonnumeric clutch reference");}
    if(used!=raw.size()||!std::isfinite(value)||value<1.)throw std::runtime_error("Clutch reference outside supported model range");
    out["available"]=true;out["reason"]="static_clutch_reference_only";out["max_torque_model"]=value;
    return out;
}
inline void bind_vehicle_clutch_configuration(nlohmann::json& configuration,nlohmann::json& reference){
    if(!reference.contains("clutch_reference")||!reference["clutch_reference"].value("available",false))return;
    const auto& source=reference["clutch_reference"];auto& parameters=configuration["parameters"];
    if(parameters.is_null())parameters=nlohmann::json::object();
    if(!parameters.is_object())throw std::runtime_error("Invalid model parameter configuration");
    auto& owner=parameters["drivetrain"];if(owner.is_null())owner=nlohmann::json::object();
    if(!owner.is_object())throw std::runtime_error("Invalid drivetrain parameter configuration");
    bool explicit_value=owner.contains("clutchTorqueCapacityNm");
    if(!explicit_value)owner["clutchTorqueCapacityNm"]=source.at("max_torque_model");
    const auto& value=owner["clutchTorqueCapacityNm"];
    if(!value.is_number()||!std::isfinite(value.get<double>())||value.get<double>()<1.)throw std::runtime_error("Invalid clutch model capacity");
    reference["clutch_parameter_route"]={{"owner","drivetrain"},{"parameter","clutchTorqueCapacityNm"},
        {"source","drivetrain.ini CLUTCH.MAX_TORQUE"},{"value",value},
        {"status",explicit_value?"explicit_parameter_retained":"static_reference_bound"},
        {"physical_units_qualified",false},{"physical_output_allowed",false}};
}
inline nlohmann::json load_vehicle_car_configuration(const std::filesystem::path& ac_root,const std::string& car_id){
    namespace fs=std::filesystem;
    if(car_id.empty()||car_id=="."||car_id==".."||car_id.size()>255)
        throw std::runtime_error("Invalid vehicle configuration car identity");
    for(unsigned char c:car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'||c=='.'))
        throw std::runtime_error("Invalid vehicle configuration car identity");
    auto cars=fs::canonical(ac_root/"content"/"cars");
    auto data=fs::canonical(cars/car_id/"data");
    auto relative=data.lexically_relative(cars);
    if(relative.empty()||*relative.begin()=="..")throw std::runtime_error("Vehicle configuration path escapes car root");
    auto read=[&](const char* name){
        auto path=fs::canonical(data/name);
        if(path.parent_path()!=data||!fs::is_regular_file(path)||fs::file_size(path)>262144)
            throw std::runtime_error("Invalid unpacked vehicle configuration file");
        std::ifstream stream(path,std::ios::binary);
        if(!stream)throw std::runtime_error("Cannot read unpacked vehicle configuration");
        std::string value{std::istreambuf_iterator<char>(stream),{}};
        if(stream.bad())throw std::runtime_error("Vehicle configuration read failed");
        return value;
    };
    auto car=read("car.ini"),suspension=read("suspensions.ini");
    // Optional for compatibility with existing car/suspension-only references.
    // If present it must be valid; malformed data never falls back silently.
    bool has_gears=fs::exists(data/"drivetrain.ini");
    std::string drivetrain=has_gears?read("drivetrain.ini"):std::string{};
    bool has_brakes=fs::exists(data/"brakes.ini");
    std::string brakes=has_brakes?read("brakes.ini"):std::string{};
    if(car!=read("car.ini")||suspension!=read("suspensions.ini"))throw std::runtime_error("Vehicle configuration changed during read");
    if(has_gears!=fs::exists(data/"drivetrain.ini")||(has_gears&&drivetrain!=read("drivetrain.ini")))
        throw std::runtime_error("Vehicle gear configuration changed during read");
    if(has_brakes!=fs::exists(data/"brakes.ini")||(has_brakes&&brakes!=read("brakes.ini")))
        throw std::runtime_error("Vehicle brake configuration changed during read");
    auto result=vehicle_car_configuration(car,suspension);
    result["brake_reference"]=vehicle_brake_reference(brakes);
    result["spring_reference"]=vehicle_spring_reference(suspension);
    result["damper_reference"]=vehicle_damper_reference(suspension);
    if(has_gears){
        auto gear_reference=vehicle_gear_configuration(drivetrain);
        result["rear_lsd_reference"]=vehicle_rear_lsd_reference(drivetrain);
        result["clutch_reference"]=vehicle_clutch_reference(drivetrain);
        if(result["clutch_reference"]["available"]==true)
            result["car_config"]["CLUTCH"]["MAX_TORQUE"]=result["clutch_reference"]["max_torque_model"];
        if(result["rear_lsd_reference"]["available"]==true){
            result["car_config"]["TRACTION"]["TYPE"]="RWD";
            result["car_config"]["DIFFERENTIAL"]=result["rear_lsd_reference"]["differential"];
        }
        result["car_config"]["GEARS"]=gear_reference["car_config"]["GEARS"];
        for(auto entry=gear_reference["car_config"]["GEARS"].begin();entry!=gear_reference["car_config"]["GEARS"].end();++entry)
            result["routes"].push_back({{"file","drivetrain.ini"},{"section","GEARS"},{"key",entry.key()},
                {"target_section","GEARS"},{"target_key",entry.key()}});
    }
    result["gear_configuration_status"]=has_gears?"explicit_unpacked_gears":"absent_model_defaults";
    result["original_model_file_rereads_frozen"]=false;
    const auto& config=result["car_config"];
    if(!config.contains("BASIC")||!config["BASIC"].contains("TOTALMASS")||!config["BASIC"].contains("WHEELBASE")||
       !config["BASIC"].contains("FRONT_TRACK")||!config["BASIC"].contains("REAR_TRACK"))
        throw std::runtime_error("Required unpacked vehicle configuration fields missing");
    auto checksum=[](const std::string& text){uint32_t a=1,b=0;for(unsigned char c:text){a=(a+c)%65521;b=(b+a)%65521;}return (b<<16)|a;};
    result["car_id"]=car_id;result["source"]="unpacked_ini_readonly_v1";
    result["source_checksums_adler32"]={{"car.ini",checksum(car)},{"suspensions.ini",checksum(suspension)}};
    if(has_gears)result["source_checksums_adler32"]["drivetrain.ini"]=checksum(drivetrain);
    if(has_brakes)result["source_checksums_adler32"]["brakes.ini"]=checksum(brakes);
    result["source_directory"]=data.u8string();
    return result;
}
// Bind static baseline mass only to existing model fallback parameters. A live
// car.mass measurement still has priority inside the original models.
inline void bind_vehicle_static_mass(nlohmann::json& configuration,nlohmann::json& reference){
    const auto& config=reference.at("car_config");
    if(!config.contains("BASIC")||!config["BASIC"].contains("TOTALMASS"))return;
    const auto& value=config["BASIC"]["TOTALMASS"];
    if(!value.is_number()||!std::isfinite(value.get<double>())||value.get<double>()<=0.)
        throw std::runtime_error("Invalid static vehicle mass baseline");
    auto& parameters=configuration["parameters"];
    if(parameters.is_null())parameters=nlohmann::json::object();
    if(!parameters.is_object())throw std::runtime_error("Invalid model parameter configuration");
    auto routes=nlohmann::json::array();
    for(const auto& entry:{std::pair<const char*,const char*>{"mass_balance","baseMass"},{"load_transfer","defaultMass"}}){
        auto& target=parameters[entry.first];if(target.is_null())target=nlohmann::json::object();
        if(!target.is_object())throw std::runtime_error("Invalid owner parameter configuration");
        bool explicit_value=target.contains(entry.second);
        if(!explicit_value)target[entry.second]=value;
        routes.push_back({{"source","car.ini BASIC.TOTALMASS"},{"owner",entry.first},{"parameter",entry.second},
                          {"status",explicit_value?"explicit_parameter_retained":"static_baseline_bound"},
                          {"value",target[entry.second]},{"live_mass_measurement",false}});
    }
    // Kunos SDK: TOTALMASS includes driver but excludes fuel; CG_LOCATION is
    // front weight distribution. This is a nominal no-fuel normalization,
    // not an estimate of instantaneous wheel load or CG height.
    nlohmann::json front={{"owner","mass_balance"},{"parameter","frontLoadReference"},
        {"source","TOTALMASS * 9.81 * CG_LOCATION / 2"},{"live_mass_measurement",false},
        {"assumptions",{"driver included, fuel excluded","level road","equal front left/right loads"}}};
    const auto& basic=config["BASIC"];
    bool known=basic.contains("CG_LOCATION")&&basic["CG_LOCATION"].is_number();
    double share=known?basic["CG_LOCATION"].get<double>():0.;
    known=known&&std::isfinite(share)&&share>0.&&share<1.;
    if(known){
        double nominal=value.get<double>()*9.81*share/2.;
        if(!std::isfinite(nominal)||nominal<=0.)throw std::runtime_error("Invalid nominal front load reference");
        auto& owner=parameters["mass_balance"];bool explicit_value=owner.contains("frontLoadReference");
        if(!explicit_value)owner["frontLoadReference"]=nominal;
        front["status"]=explicit_value?"explicit_parameter_retained":"static_baseline_bound";
        front["value"]=owner["frontLoadReference"];front["nominal_no_fuel_value_n"]=nominal;
    }else front["status"]="unbound_missing_or_degenerate_front_weight_fraction";
    routes.push_back(std::move(front));
    reference["static_mass_parameter_routes"]=std::move(routes);
}
// Compare the actual consumer state with this context's validated gear table.
inline bool drivetrain_gear_binding_matches(const nlohmann::json& binding,const nlohmann::json& reference){
 try{
  if(binding.at("contract")!="validated_gears_v1"||binding.at("source")!="VALIDATED_GEARS_V1"||
     binding.at("car_id")!=reference.at("car_id")||binding.at("physical_output_allowed")!=false||
     binding.at("engine_files_frozen")!=false)return false;
  const auto& expected=reference.at("car_config").at("GEARS");const auto& actual=binding.at("gears");
  if(!expected.at("COUNT").is_number()||!actual.is_object())return false;
  double n=expected.at("COUNT").get<double>();if(!std::isfinite(n)||n<1||n>10||std::floor(n)!=n)return false;
  auto equal=[&](const std::string& key){return expected.at(key).is_number()&&actual.at(key).is_number()&&
    std::isfinite(expected.at(key).get<double>())&&std::isfinite(actual.at(key).get<double>())&&actual.at(key)==expected.at(key);};
  if(!equal("COUNT")||!equal("FINAL")||!equal("GEAR_R")||actual.size()!=unsigned(n)+3)return false;
  for(unsigned i=1;i<=unsigned(n);++i)if(!equal("GEAR_"+std::to_string(i)))return false;
  return true;
 }catch(...){return false;}
}

}

#include "model_runtime.hpp"
#include "json.hpp"
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <limits>
#include <regex>
#include <sstream>
#include <chrono>
namespace ngp {
thread_local Runtime* current=nullptr;
Key::Key(const V& v){if(auto p=std::get_if<double>(&v.data)){if(std::isnan(*p))throw std::runtime_error("NaN table key");data=*p;}
else if(auto p=std::get_if<std::string>(&v.data))data=*p;else throw std::runtime_error("Unsupported table key");}
static void valid_key(const V& v){if(auto n=std::get_if<double>(&v.data)){if(std::isnan(*n))throw std::runtime_error("NaN table key");}
else if(!std::holds_alternative<std::string>(v.data))throw std::runtime_error("Unsupported table key");}
bool KeyLess::operator()(const Key& a,const V& b)const{
 if(auto n=std::get_if<double>(&b.data))return std::holds_alternative<double>(a.data)&&std::get<double>(a.data)<*n;
 return std::holds_alternative<double>(a.data)||std::get<std::string>(a.data)<std::get<std::string>(b.data);}
bool KeyLess::operator()(const V& a,const Key& b)const{
 if(auto n=std::get_if<double>(&a.data))return std::holds_alternative<std::string>(b.data)||*n<std::get<double>(b.data);
 return std::holds_alternative<std::string>(b.data)&&std::get<std::string>(a.data)<std::get<std::string>(b.data);}
bool isnil(const V& v){return std::holds_alternative<std::monostate>(v.data);}
bool truth(const V& v){return !isnil(v)&&(!std::holds_alternative<bool>(v.data)||std::get<bool>(v.data));}
double num(const V& v){if(auto p=std::get_if<double>(&v.data))return *p;if(auto s=std::get_if<std::string>(&v.data)){
char* end=nullptr;double n=std::strtod(s->c_str(),&end);if(end!=s->c_str()){while(*end==' '||*end=='\t'||*end=='\r'||*end=='\n')++end;if(!*end)return n;}}
throw std::runtime_error("Expected number");}
std::string text(const V& v){if(auto s=std::get_if<std::string>(&v.data))return *s;if(auto n=std::get_if<double>(&v.data)){char b[80];std::snprintf(b,sizeof b,"%.14g",*n);return b;}
if(auto b=std::get_if<bool>(&v.data))return *b?"true":"false";if(isnil(v))return "nil";return std::holds_alternative<std::shared_ptr<Table>>(v.data)?"table":"function";}
V table(){return V(std::make_shared<Table>());}
V native(std::function<Args(const Args&)> fn){auto f=std::make_shared<Function>();f->fn=std::move(fn);return V(f);}
V get(const V& o,const V& k){if(auto t=std::get_if<std::shared_ptr<Table>>(&o.data)){valid_key(k);auto it=(*t)->values.find(k);return it==(*t)->values.end()?V():it->second;}
if(std::holds_alternative<std::string>(o.data)&&current)return get(current->stringlib,k);
if(isnil(o))throw std::runtime_error("Indexing nil: "+text(k));throw std::runtime_error("Indexing non-table ["+text(o)+"] key ["+text(k)+"]");}
void set(V o,const V& k,V v){auto t=std::get_if<std::shared_ptr<Table>>(&o.data);if(!t)throw std::runtime_error("Writing non-table");valid_key(k);auto& values=(*t)->values;auto it=values.find(k);
if(isnil(v)){if(it!=values.end())values.erase(it);}else if(it!=values.end())it->second=std::move(v);else values.emplace(Key(k),std::move(v));}
Args call(const V& f,const Args& a){auto p=std::get_if<std::shared_ptr<Function>>(&f.data);if(!p)throw std::runtime_error("Calling "+text(f));return (*p)->fn(a);}
Args method(const V& obj,const std::string& name,const Args& a){return call(get(obj,V(name)),joined(Args{obj},a));}
V length(const V& v){if(auto s=std::get_if<std::string>(&v.data))return V(double(s->size()));if(std::holds_alternative<std::shared_ptr<Table>>(v.data)){
double i=0;while(!isnil(get(v,V(i+1))))++i;return V(i);}throw std::runtime_error("Length of non-table");}
void append(V t,const Args& a){double i=num(length(t));for(auto& v:a)set(t,V(++i),v);}
V Env::get(const std::string& k)const{auto it=vars.find(k);return it!=vars.end()?it->second:parent_ptr?parent_ptr->get(k):V();}
void Env::assign(const std::string& k,V v){auto it=vars.find(k);if(it!=vars.end())it->second=std::move(v);else if(parent_ptr)parent_ptr->assign(k,std::move(v));else vars[k]=std::move(v);}
void Ref::put(V v)const{if(local)target->slot(depth,index)=std::move(v);else if(target)target->assign(name,std::move(v));else set(object,key,std::move(v));}
V eq(V a,V b){return V(a.data==b.data);} V lt(V a,V b){if(std::holds_alternative<std::string>(a.data)&&std::holds_alternative<std::string>(b.data))return V(text(a)<text(b));return V(num(a)<num(b));}
static std::string pattern(std::string s){std::string out;for(size_t i=0;i<s.size();++i){char c=s[i];if(c=='%'&&i+1<s.size()){
char n=s[++i];if(n=='s')out+="\\s";else if(n=='w')out+="\\w";else if(n=='d')out+="\\d";else{out+='\\';out+=n;}}
else if(c=='\\')out+="\\\\";else if(c=='|')out+="\\|";else if(c=='-'&&i>0&&s[i-1]=='.')out+='*',out+='?';else out+=c;}return out;}
static Args match(const Args& a,bool find){std::string s=text(arg(a,0)),p=text(arg(a,1));int start=isnil(arg(a,2))?1:int(num(arg(a,2)));
if(start<0)start=int(s.size())+start+1;start=std::max(start,1);if(size_t(start-1)>s.size())return {V()};
if(find&&truth(arg(a,3))){auto pos=s.find(p,size_t(start-1));return pos==std::string::npos?Args{V()}:Args{V(double(pos+1)),V(double(pos+p.size()))};}
std::smatch m;std::string sub=s.substr(size_t(start-1));if(!std::regex_search(sub,m,std::regex(pattern(p))))return {V()};
Args r;if(find){r={V(double(start+m.position())),V(double(start+m.position()+m.length()-1))};}
if(m.size()>1)for(size_t i=1;i<m.size();++i)r.emplace_back(m[i].str());else if(!find)r.emplace_back(m.str());return r;}
static V json_value(const nlohmann::json& j){if(j.is_null())return V();if(j.is_boolean())return V(j.get<bool>());if(j.is_number())return V(j.get<double>());if(j.is_string())return V(j.get<std::string>());
V t=table();if(j.is_array()){double n=0;for(const auto& v:j)set(t,V(n++),json_value(v));}else{for(auto it=j.begin();it!=j.end();++it){V k(it.key());char* end;double n=std::strtod(it.key().c_str(),&end);if(*end==0)k=V(n);set(t,k,json_value(it.value()));}}return t;}
V from_json(const std::string& s){return json_value(nlohmann::json::parse(s));}
static nlohmann::json plain(const V& v){if(auto n=std::get_if<double>(&v.data))return std::isfinite(*n)?nlohmann::json(*n):nlohmann::json();if(auto b=std::get_if<bool>(&v.data))return *b;if(auto s=std::get_if<std::string>(&v.data))return *s;return nullptr;}
// Read the same model state used immediately afterwards by ngpe_extract_hints.
// No signals/debug publication delay, state writes, or force recomputation.
static nlohmann::json tyre_inputs(Runtime& r){
 auto field=[](V v,V key){return std::holds_alternative<std::shared_ptr<Table>>(v.data)?get(v,key):V();};
 auto state=[&](const char* name){auto it=r.modules.find(name);return it==r.modules.end()?V():field(it->second,V("state"));};
 auto tyre=state("tire_force"),audit=state("wheel_audit"),thermal=state("thermal"),damage=state("damage_state");
 nlohmann::json d={{"schema",1},{"states",nlohmann::json::object()},{"wheels",nlohmann::json::array()}};
 for(const char* name:{"tire_force","wheel_audit","thermal","damage_state","vehicle_condition"})
  d["states"][name]=plain(field(state(name),V("status")));
 d["wheels_valid"]=plain(field(tyre,V("wheelsValid")));
 d["tyre_stress"]=plain(field(thermal,V("tyreStress")));
 d["damage_runtime"]=nlohmann::json::object();
 for(const char* key:{"runtimeDamageAdd","impactSensorValue","bodyRuntimePenalty","brakeThermalStress","suspensionStress","contactLossAvg",
                      "lastEventDelta","lastEventTotal","lastEventType","lastRepairCount"})
  d["damage_runtime"][key]=plain(field(damage,V(key)));
 auto damage_module=r.modules.find("damage_state");
 auto parameters=damage_module==r.modules.end()?V():field(damage_module->second,V("params"));
 d["damage_parameters"]=nlohmann::json::object();
 for(const char* key:{"impactSensorGain","bodyRuntimeGain","brakeThermalGain","suspensionStressGain","tireContactGain","maxRuntimeDamageAdd",
                      "runtimeAccumulationScale","wheelGain"})d["damage_parameters"][key]=plain(field(parameters,V(key)));
 for(unsigned i=0;i<4;++i){
  auto at=[&](V v,const char* key){return field(field(v,V(key)),V(double(i)));};
  auto wheel=at(tyre,"force"),availability=at(audit,"available");
  d["wheels"].push_back({{"index",i},{"exists",plain(at(audit,"wheelExists"))},
   {"load_available",plain(field(availability,V("load")))},{"omega_available",plain(field(availability,V("angularSpeed")))},
   {"active",plain(field(wheel,V("active")))},{"slip_angle_rad",plain(field(wheel,V("slipAngle")))},
   {"contact_quality",plain(field(wheel,V("contactQuality")))},{"damage",plain(at(damage,"wheel"))}});
 }
 return d;
}
// Observes owner state only: no model update, gain conversion or force writes.
static nlohmann::json spring_input_diagnostics(Runtime& r){
    nlohmann::json out={{"available",false},{"units_qualified",false},{"values_contract","original_model_units"}};
    try{
        auto model=r.modules.find("progressive_spring");if(model==r.modules.end())return out;
        auto state=get(model->second,V("state")),params=get(model->second,V("params"));
        if(text(get(state,V("status")))!="RUNNING")return out;
        auto required=[](V v){if(!std::holds_alternative<double>(v.data)||!std::isfinite(num(v)))throw 0;return num(v);};
        nlohmann::json values;
        for(const char* key:{"startTravel","progressiveRate","baseRate"})values[key]=required(get(params,V(key)));
        for(const char* key:{"rawTravel","effectiveTravel","travel","progressiveAmount","rateScale"}){
            values[key]=nlohmann::json::array();
            for(unsigned i=0;i<4;++i)values[key].push_back(required(get(get(state,V(key)),V(double(i)))));
        }
        unsigned mask=0;for(unsigned i=0;i<4;++i)if(values["progressiveAmount"][i].get<double>()>0)mask|=1u<<i;
        values["progressive_active_mask"]=mask;values["available"]=true;values["units_qualified"]=false;
        values["values_contract"]="original_model_units";return values;
    }catch(...){return out;}
}
std::string snapshot_json(Runtime& r,bool compact){nlohmann::json j;j["module_count"]=r.modules.size();j["errors"]=r.errors;j["signals"]=nlohmann::json::object();
j["spring_inputs"]=spring_input_diagnostics(r);
if(r.event_damage){
 auto m=r.modules.find("damage_state");j["damage_persistent"]=nlohmann::json::array();
 if(m!=r.modules.end()){
  auto state=get(m->second,V("state"));j["damage_persistent"].push_back(plain(get(state,V("chassis"))));
  for(unsigned i=0;i<4;++i)j["damage_persistent"].push_back(plain(get(get(state,V("wheel")),V(double(i)))));
 }
}
j["input_contract"]=r.normalized_inputs?"csp_g_v1":"original";
if(r.damper_current_travel)j["damper_input_contract"]="current_suspension_travel_v1";
if(r.carcass_current_slip)j["carcass_input_contract"]="current_wheel_slip_v1";
auto caster=r.modules.find("caster_effect");
if(caster!=r.modules.end()&&text(get(get(caster->second,V("params")),V("steeringInputContract")))=="current_front_deflection_radians_v1"){
 auto state=get(caster->second,V("state"));nlohmann::json angles=nlohmann::json::array();
 for(unsigned i=0;i<2;++i)angles.push_back(plain(get(get(state,V("frontSteeringDeflectionRad")),V(double(i)))));
 j["caster_steering_binding"]={{"contract","current_front_deflection_radians_v1"},{"owner","caster_effect"},
  {"source",plain(get(state,V("steeringSource")))},{"car_id",plain(get(state,V("steeringCarID")))},
  {"frame",plain(get(state,V("steeringFrame")))},{"deflection_rad",angles},
  {"baseline_subtracted",true},{"sign_convention","model_positive_steer"},{"physical_output_allowed",false}};
}
auto lsd=r.modules.find("diff_lsd");
auto windup=r.modules.find("driveline_windup");
auto damper=r.modules.find("damper_model");
if(damper!=r.modules.end()&&text(get(get(damper->second,V("params")),V("coefficientInputContract")))=="car_config_declared_blend_v1"){
 auto state=get(damper->second,V("state"));auto refs=get(state,V("referenceCoefficients"));
 nlohmann::json values=nlohmann::json::array();
 for(unsigned i=0;i<4;++i){
  auto wheel=isnil(refs)?V():get(refs,V(double(i)));
  if(isnil(wheel)){values.push_back(nullptr);continue;}
  nlohmann::json fields=nlohmann::json::object();
  for(const char* key:{"DAMP_BUMP","DAMP_FAST_BUMP","DAMP_REBOUND","DAMP_FAST_REBOUND","DAMP_FAST_BUMPTHRESHOLD","DAMP_FAST_REBOUNDTHRESHOLD"})fields[key]=plain(get(wheel,V(key)));
  values.push_back(fields);
 }
 j["damper_coefficient_binding"]={{"contract","car_config_declared_blend_v1"},{"source",plain(get(state,V("coefficientSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"coefficients",values},{"physical_output_allowed",false},{"curve_equivalence_verified",false}};
}
auto spring=r.modules.find("progressive_spring");
if(spring!=r.modules.end()&&text(get(get(spring->second,V("params")),V("baseRateInputContract")))=="car_config_base_rate_v1"){
 auto state=get(spring->second,V("state"));nlohmann::json rates=nlohmann::json::array();
 auto references=get(state,V("referenceBaseRate"));
 for(unsigned i=0;i<4;++i)rates.push_back(isnil(references)?nlohmann::json(nullptr):plain(get(references,V(double(i)))));
 j["spring_base_binding"]={{"contract","car_config_base_rate_v1"},{"source",plain(get(state,V("baseRateSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"base_rate",rates},{"physical_output_allowed",false},{"wheel_rate_qualified",false}};
}
if(damper!=r.modules.end()&&text(get(get(damper->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_v1"){
 auto state=get(damper->second,V("state"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(plain(get(get(state,V("brakeTemp")),V(double(i)))));
 j["damper_temperature_binding"]={{"contract","current_wheel_brake_temperature_v1"},{"source",plain(get(state,V("brakeTemperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"physical_output_allowed",false},{"thermal_coupling_verified",false}};
}
auto body_temperature=r.modules.find("body_rigidity_estimator");
if(body_temperature!=r.modules.end()&&text(get(get(body_temperature->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_max_v1"){
 auto state=get(body_temperature->second,V("state"));auto inputs=get(state,V("brakeTemperatureInput"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(isnil(inputs)?nlohmann::json(nullptr):plain(get(inputs,V(double(i)))));
 j["body_temperature_binding"]={{"contract","current_wheel_brake_temperature_max_v1"},{"source",plain(get(state,V("brakeTemperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"thermal_stress",plain(get(state,V("brakeThermalStress")))},
  {"physical_output_allowed",false},{"thermal_coupling_verified",false}};
}
auto chassis_temperature=r.modules.find("chassis_roll");
if(chassis_temperature!=r.modules.end()&&text(get(get(chassis_temperature->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_max_v1"){
 auto state=get(chassis_temperature->second,V("state"));auto inputs=get(state,V("brakeTemperatureInput"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(isnil(inputs)?nlohmann::json(nullptr):plain(get(inputs,V(double(i)))));
 j["chassis_temperature_binding"]={{"owner","chassis_roll"},{"contract","current_wheel_brake_temperature_max_v1"},{"source",plain(get(state,V("brakeTemperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"thermal_stress",plain(get(state,V("brakeThermalStress")))},
  {"physical_output_allowed",false},{"thermal_coupling_verified",false}};
}
auto energy_temperature=r.modules.find("chassis_energy");
if(energy_temperature!=r.modules.end()&&text(get(get(energy_temperature->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_max_v1"){
 auto state=get(energy_temperature->second,V("state"));auto inputs=get(state,V("brakeTemperatureInput"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(isnil(inputs)?nlohmann::json(nullptr):plain(get(inputs,V(double(i)))));
 j["energy_temperature_binding"]={{"owner","chassis_energy"},{"contract","current_wheel_brake_temperature_max_v1"},{"source",plain(get(state,V("brakeTemperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"thermal_stress",plain(get(state,V("brakeThermalStress")))},
  {"physical_output_allowed",false},{"thermal_coupling_verified",false}};
}
auto flex_temperature=r.modules.find("chassis_flex");
if(flex_temperature!=r.modules.end()&&text(get(get(flex_temperature->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_max_v1"){
 auto state=get(flex_temperature->second,V("state"));auto inputs=get(state,V("brakeTemperatureInput"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(isnil(inputs)?nlohmann::json(nullptr):plain(get(inputs,V(double(i)))));
 j["flex_temperature_binding"]={{"owner","chassis_flex"},{"contract","current_wheel_brake_temperature_max_v1"},{"source",plain(get(state,V("brakeTemperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"thermal_stress",plain(get(state,V("brakeThermalStress")))},
  {"physical_output_allowed",false},{"thermal_coupling_verified",false}};
}
auto inertia_temperature=r.modules.find("virtual_inertia");
if(inertia_temperature!=r.modules.end()&&text(get(get(inertia_temperature->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_max_v1"){
 auto state=get(inertia_temperature->second,V("state"));auto inputs=get(state,V("brakeTemperatureInput"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(isnil(inputs)?nlohmann::json(nullptr):plain(get(inputs,V(double(i)))));
 j["inertia_temperature_binding"]={{"owner","virtual_inertia"},{"contract","current_wheel_brake_temperature_max_v1"},{"source",plain(get(state,V("brakeTemperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"thermal_stress",plain(get(state,V("thermalStress")))},
  {"physical_output_allowed",false},{"thermal_coupling_verified",false}};
}
// Read-only publication observation; publication age is not sensor freshness.
if(inertia_temperature!=r.modules.end()&&text(get(get(inertia_temperature->second,V("params")),V("brakeTemperatureInputContract")))=="current_wheel_brake_temperature_max_v1"){
 nlohmann::json publication={{"owner","virtual_inertia"},{"contract","owned_response_stress_observation_v1"},
  {"car_id",plain(get(r.car,V("id")))},{"physical_output_allowed",false},{"publication_freshness_qualified",false}};
 for(const char* key:{"ngp_virtual_response_thermal_stress","ngp_virtual_thermal_stress","ngp_thermal_stress"}){
  auto it=r.signals.find(key);publication[key]=it==r.signals.end()?nlohmann::json(nullptr):plain(it->second);
 }
 j["inertia_thermal_publication"]=std::move(publication);
}
auto suspension=r.modules.find("suspension");
if(suspension!=r.modules.end()&&text(get(get(suspension->second,V("params")),V("travelPublicationContract")))=="per_update_travel_v1"){
 auto state=get(suspension->second,V("state"));nlohmann::json travel=nlohmann::json::array(),published=nlohmann::json::array();
 for(unsigned i=0;i<4;++i){travel.push_back(plain(get(get(state,V("suspTravel")),V(double(i)))));
  auto it=r.signals.find("ngp_susp_travel_"+std::to_string(i));published.push_back(it==r.signals.end()?nlohmann::json(nullptr):plain(it->second));}
 j["suspension_travel_binding"]={{"contract","per_update_travel_v1"},{"owner","suspension"},{"car_id",plain(get(r.car,V("id")))},
  {"travel",travel},{"published",published},{"physical_output_allowed",false}};
}
auto brake_fade=r.modules.find("brake_fade");
if(brake_fade!=r.modules.end()&&text(get(get(brake_fade->second,V("params")),V("temperatureInputContract")))=="current_wheel_brake_temperature_v1"){
 auto state=get(brake_fade->second,V("state"));nlohmann::json temperatures=nlohmann::json::array();
 for(unsigned i=0;i<4;++i)temperatures.push_back(plain(get(get(state,V("temp")),V(double(i)))));
 j["brake_temperature_binding"]={{"contract","current_wheel_brake_temperature_v1"},{"source",plain(get(state,V("temperatureSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"temperature_input_c",temperatures},{"physical_output_allowed",false},{"native_fade_isolated",false}};
}
auto drivetrain=r.modules.find("drivetrain");
if(drivetrain!=r.modules.end()&&text(get(get(drivetrain->second,V("params")),V("gearInputContract")))=="validated_gears_v1"){
 auto state=get(drivetrain->second,V("state"));
 nlohmann::json gears={{"COUNT",plain(get(state,V("gearCount")))},{"FINAL",plain(get(state,V("finalRatio")))},
  {"GEAR_R",plain(get(get(state,V("gearRatios")),V(-1.)))}};
 for(unsigned i=1;i<=10;++i){auto value=get(get(state,V("gearRatios")),V(double(i)));if(!isnil(value))gears["GEAR_"+std::to_string(i)]=plain(value);}
 j["drivetrain_gear_binding"]={{"contract","validated_gears_v1"},{"source",plain(get(state,V("configSource")))},
  {"car_id",plain(get(r.car,V("id")))},{"gears",gears},{"physical_output_allowed",false},{"engine_files_frozen",false}};
}
auto hop=r.modules.find("tire_hop");
if(hop!=r.modules.end()&&text(get(get(hop->second,V("params")),V("drivetrainInputContract")))=="single_drivetrain_nm_v1"){
 auto state=get(hop->second,V("state"));
 j["hop_input_binding"]={{"contract","single_drivetrain_nm_v1"},{"source",plain(get(state,V("drivetrainNmSource")))},
  {"input_model_nm",plain(get(state,V("diffInputTorqueNm")))},{"duplicate_alias_term",plain(get(state,V("driveTorqueNm")))},
  {"physical_output_allowed",false}};
}
if(windup!=r.modules.end()&&text(get(get(windup->second,V("params")),V("torqueInputContract")))=="drivetrain_normalized_v1"){
 auto state=get(windup->second,V("state"));
 j["windup_input_binding"]={{"contract","drivetrain_normalized_v1"},{"producer","drivetrain"},
  {"source",plain(get(state,V("torqueSource")))},{"value",plain(get(state,V("driveTorqueIn")))},
  {"physical_output_allowed",false}};
}
if(lsd!=r.modules.end()&&text(get(get(lsd->second,V("params")),V("configurationInputContract")))=="car_config_rear_v1"){
 auto state=get(lsd->second,V("state"));
 j["lsd_configuration_binding"]={{"contract","car_config_rear_v1"},{"source",plain(get(state,V("configSource")))},
  {"traction_type",plain(get(state,V("drivetrainType")))},{"power",plain(get(state,V("powerLockRatio")))},
  {"coast",plain(get(state,V("coastLockRatio")))},{"preload_model",plain(get(state,V("preloadTorqueNm")))},
  {"physical_output_allowed",false},{"baseline_residual_verified",false}};
}
if(lsd!=r.modules.end()&&text(get(get(lsd->second,V("params")),V("torqueInputContract")))=="drivetrain_nm_v1"){
 j["lsd_input_binding"]={{"contract","drivetrain_nm_v1"},{"producer_delay_updates",1},{"initial_input","producer_init_zero"}};
 for(const char* k:{"ngp_lsd_torque_source","ngp_lsd_input_torque_nm","ngp_lsd_mode"}){
  auto it=r.signals.find(k);if(it!=r.signals.end())j["lsd_input_binding"][k]=plain(it->second);
 }
}
if(r.normalized_inputs&&!isnil(r.input_routes))j["input_routes"]=nlohmann::json::parse(text(r.input_routes));
if(r.tyre_owner_inputs)j["tyre_input_binding"]={{"contract","owner_state_v1"},{"valid_mask",r.tyre_owner_input_mask},
 {"owner","tire_state"},{"consumer","tire_force"},{"angle",r.tyre_owner_angle},{"ratio",r.tyre_owner_ratio}};
if(compact){for(const char* k:{"ngp_impact_status","ngp_tire_force_lat_0","ngp_tire_force_long_0","ngp_diff_input_torque_nm","ngp_lsd_lock"}){
 auto it=r.signals.find(k);if(it!=r.signals.end())j["signals"][k]=plain(it->second);}}
else for(const auto& [k,v]:r.signals)j["signals"][k]=plain(v);
j["module_status"]=nlohmann::json::object();
for(const auto& [k,m]:r.modules){V state=get(m,V("state"));j["module_status"][k]=isnil(state)?nlohmann::json(nullptr):plain(get(state,V("status")));}
if(compact)j["tyre_inputs"]=tyre_inputs(r);
return j.dump();}
Runtime::Runtime(std::string root):globals(std::make_shared<Env>()),root_folder(std::move(root)){}
Runtime::~Runtime(){for(auto& e:module_envs){e->vars.clear();e->clear_slots();}modules.clear();globals->vars.clear();if(current==this)current=nullptr;}
static void fn(V t,const char* k,std::function<Args(const Args&)> f){set(t,V(k),native(std::move(f)));}
static std::string formatted(const Args& a){std::string fmt=text(arg(a,0)),out;size_t parameter=1;for(size_t i=0;i<fmt.size();++i){if(fmt[i]!='%'){out+=fmt[i];continue;}if(i+1<fmt.size()&&fmt[i+1]=='%'){out+='%';++i;continue;}
size_t end=i+1;while(end<fmt.size()&&std::string("-+ #0.123456789").find(fmt[end])!=std::string::npos)++end;if(end>=fmt.size())throw std::runtime_error("Invalid format");
std::string spec=fmt.substr(i,end-i+1);char b[1024];V v=arg(a,parameter++);char kind=fmt[end];if(kind=='s')std::snprintf(b,sizeof b,spec.c_str(),text(v).c_str());
else if(kind=='d'||kind=='i')std::snprintf(b,sizeof b,spec.c_str(),int(num(v)));else std::snprintf(b,sizeof b,spec.c_str(),num(v));out+=b;i=end;}return out;}
void Runtime::initialize(){current=this;auto g=globals;
g->define("tonumber",native([](const Args& a){try{return Args{V(num(arg(a,0)))};}catch(...){return Args{V()};}}));
g->define("tostring",native([](const Args& a){return Args{V(text(arg(a,0)))};}));
g->define("error",native([](const Args& a)->Args{throw std::runtime_error(text(arg(a,0)));}));
g->define("type",native([](const Args& a){V v=arg(a,0);static const char* types[]={"nil","number","boolean","string","table","function"};return Args{V(types[v.data.index()])};}));
g->define("pcall",native([](const Args& a){try{return joined(Args{V(true)},call(arg(a,0),tail(a,1)));}catch(const std::exception& e){return Args{V(false),V(e.what())};}}));
g->define("select",native([](const Args& a){if(text(arg(a,0))=="#")return Args{V(double(a.size()-1))};int i=int(num(arg(a,0)));if(i<0)i=int(a.size())+i;return tail(a,size_t(i));}));
g->define("ipairs",native([](const Args& a){V iter=native([](const Args& x){V i=V(num(arg(x,1))+1);V v=get(arg(x,0),i);return isnil(v)?Args{V()}:Args{i,v};});return Args{iter,arg(a,0),V(0.)};}));
g->define("pairs",native([](const Args& a){auto t=std::get<std::shared_ptr<Table>>(arg(a,0).data);auto pos=std::make_shared<size_t>(0);V iter=native([t,pos](const Args&){if(*pos>=t->values.size())return Args{V()};auto it=t->values.begin();std::advance(it,long((*pos)++));V k=std::holds_alternative<double>(it->first.data)?V(std::get<double>(it->first.data)):V(std::get<std::string>(it->first.data));return Args{k,it->second};});return Args{iter,V(),V()};}));
V math=table();set(math,V("huge"),V(std::numeric_limits<double>::infinity()));set(math,V("pi"),V(3.14159265358979323846));
fn(math,"abs",[](const Args& a){return Args{V(std::abs(num(arg(a,0))))};});
fn(math,"min",[](const Args& a){double v=num(arg(a,0));for(size_t i=1;i<a.size();++i)if(num(a[i])<v)v=num(a[i]);return Args{V(v)};});
fn(math,"max",[](const Args& a){double v=num(arg(a,0));for(size_t i=1;i<a.size();++i)if(num(a[i])>v)v=num(a[i]);return Args{V(v)};});
for(const std::string name:{"sqrt","sin","cos","tan","atan","asin","acos","exp","floor","ceil","rad","deg"})fn(math,name.c_str(),[name](const Args& a){double x=num(arg(a,0)),r=0;
if(name=="sqrt")r=std::sqrt(x);else if(name=="sin")r=std::sin(x);else if(name=="cos")r=std::cos(x);else if(name=="tan")r=std::tan(x);else if(name=="atan")r=std::atan(x);else if(name=="asin")r=std::asin(x);else if(name=="acos")r=std::acos(x);else if(name=="exp")r=std::exp(x);else if(name=="floor")r=std::floor(x);else if(name=="ceil")r=std::ceil(x);else if(name=="rad")r=x*3.14159265358979323846/180.;else r=x*180./3.14159265358979323846;return Args{V(r)};});
fn(math,"atan2",[](const Args& a){return Args{V(std::atan2(num(arg(a,0)),num(arg(a,1))))};});g->define("math",math);
stringlib=table();fn(stringlib,"format",[](const Args& a){return Args{V(formatted(a))};});
fn(stringlib,"match",[](const Args& a){return match(a,false);});fn(stringlib,"find",[](const Args& a){return match(a,true);});
fn(stringlib,"gsub",[](const Args& a){std::string s=text(arg(a,0)),p=pattern(text(arg(a,1)));std::regex re(p);double count=double(std::distance(std::sregex_iterator(s.begin(),s.end(),re),std::sregex_iterator()));return Args{V(std::regex_replace(s,re,text(arg(a,2)))),V(count)};});
fn(stringlib,"gmatch",[](const Args& a){auto values=std::make_shared<std::vector<Args>>();std::string s=text(arg(a,0));std::regex re(pattern(text(arg(a,1))));for(std::sregex_iterator it(s.begin(),s.end(),re),end;it!=end;++it){Args v;if(it->size()>1)for(size_t i=1;i<it->size();++i)v.emplace_back((*it)[i].str());else v.emplace_back(it->str());values->push_back(v);}auto i=std::make_shared<size_t>(0);return Args{native([values,i](const Args&){return *i<values->size()?(*values)[(*i)++]:Args{V()};})};});
fn(stringlib,"sub",[](const Args& a){std::string s=text(arg(a,0));int i=int(num(arg(a,1))),j=isnil(arg(a,2))?int(s.size()):int(num(arg(a,2)));if(i<0)i=int(s.size())+i+1;if(j<0)j=int(s.size())+j+1;i=std::max(i,1);j=std::min(j,int(s.size()));return Args{V(j<i?"":s.substr(size_t(i-1),size_t(j-i+1)))};});
fn(stringlib,"upper",[](const Args& a){std::string s=text(arg(a,0));for(char& c:s)c=char(std::toupper(static_cast<unsigned char>(c)));return Args{V(s)};});
fn(stringlib,"lower",[](const Args& a){std::string s=text(arg(a,0));for(char& c:s)c=char(std::tolower(static_cast<unsigned char>(c)));return Args{V(s)};});g->define("string",stringlib);
V io=table();fn(io,"open",[](const Args& a){auto file=std::make_shared<std::ifstream>(text(arg(a,0)),std::ios::binary);if(!*file)return Args{V()};V t=table();
fn(t,"read",[file](const Args&){std::ostringstream s;s<<file->rdbuf();return Args{V(s.str())};});
fn(t,"lines",[file](const Args&){return Args{native([file](const Args&){std::string line;if(!std::getline(*file,line))return Args{V()};return Args{V(line)};})};});
fn(t,"close",[file](const Args&){file->close();return Args{};});return Args{t};});g->define("io",io);
V os=table();fn(os,"clock",[](const Args&){return Args{V(0.)};});g->define("os",os);
V ac=table();fn(ac,"getSim",[this](const Args&){return Args{isnil(car)?V():get(car,V("sim"))};});fn(ac,"getCar",[this](const Args&){return Args{car};});
fn(ac,"getCarID",[this](const Args&){return Args{isnil(car)?V():get(car,V("id"))};});
fn(ac,"getFolder",[this](const Args& a){return Args{V(root_folder+(num(arg(a,0))==1.?"/content/cars":""))};});
V folders=table();set(folders,V("ContentCars"),V(1.));set(folders,V("Root"),V(2.));set(folders,V("AC"),V(2.));set(folders,V("AssettoCorsa"),V(2.));set(ac,V("FolderID"),folders);
fn(ac,"getCarConfig",[this](const Args& a){if(!isnil(config)){V section=get(config,arg(a,1));if(!isnil(section)){V v=get(section,arg(a,2));if(!isnil(v))return Args{v};}}return Args{arg(a,3)};});
fn(ac,"log",[](const Args&){return Args{};});g->define("ac",ac);
V core=table();fn(core,"safeLoadRaw",[this](const Args& a){
 const auto key=text(arg(a,0));
 static constexpr std::array<const char*,4> damper_keys={"ngp_susp_damper_travel_0","ngp_susp_damper_travel_1","ngp_susp_damper_travel_2","ngp_susp_damper_travel_3"};
 static constexpr std::array<const char*,4> contact_angles={"ngp_contact_slip_angle_0","ngp_contact_slip_angle_1","ngp_contact_slip_angle_2","ngp_contact_slip_angle_3"};
 static constexpr std::array<const char*,4> contact_ratios={"ngp_contact_slip_ratio_0","ngp_contact_slip_ratio_1","ngp_contact_slip_ratio_2","ngp_contact_slip_ratio_3"};
 static constexpr std::array<const char*,4> tyre_angles={"ngp_tire_slip_angle_0","ngp_tire_slip_angle_1","ngp_tire_slip_angle_2","ngp_tire_slip_angle_3"};
 static constexpr std::array<const char*,4> tyre_ratios={"ngp_tire_slip_ratio_0","ngp_tire_slip_ratio_1","ngp_tire_slip_ratio_2","ngp_tire_slip_ratio_3"};
 if(damper_current_travel&&active_input_owner=="damper_model")for(unsigned i=0;i<4;++i){
  if(key==damper_keys[i])
   return Args{get(get(get(car,V("wheels")),V(double(i))),V("suspensionTravel"))};
 }
 // Break the contact/carcass slip alias cycle at its measurement input only.
 // The original carcass filter and downstream publication remain authoritative.
 if(carcass_current_slip&&active_input_owner=="tire_carcass")for(unsigned i=0;i<4;++i){
  // Most reads request unrelated shared state: do not walk four wheel tables
  // until the requested key actually selects a measured slip input.
  if(key==contact_angles[i])return Args{get(get(get(car,V("wheels")),V(double(i))),V("slipAngle"))};
  if(key==contact_ratios[i])return Args{get(get(get(car,V("wheels")),V(double(i))),V("slipRatio"))};
 }
 if(tyre_owner_inputs&&active_input_owner=="tire_force")for(unsigned i=0;i<4;++i){
  if(key==tyre_angles[i])return Args{tyre_owner_input_mask&(1u<<i)?V(tyre_owner_angle[i]):V()};
  if(key==tyre_ratios[i])return Args{tyre_owner_input_mask&(1u<<i)?V(tyre_owner_ratio[i]):V()};
 }
 auto it=signals.find(key);return Args{it==signals.end()?V():it->second};});
fn(core,"safeStore",[this](const Args& a){signals[text(arg(a,0))]=arg(a,1);return Args{V(true)};});
fn(core,"safeField",[](const Args& a){try{if(isnil(arg(a,0)))return Args{arg(a,2)};V v=get(arg(a,0),arg(a,1));return Args{isnil(v)?arg(a,2):v};}catch(...){return Args{arg(a,2)};}});
g->define("require",native([this,core](const Args& a){
 const auto request=text(arg(a,0));
 if(request=="modules.ngp_core")return Args{core};
 if(selected_dependencies&&(request.rfind("modules.",0)==0||request.rfind("modules/",0)==0)){
  // Only return the already constructed selected instance. Never load files,
  // create a second state, or resolve arbitrary dotted/path expressions.
  auto found=modules.find(request.substr(8));
  if(found!=modules.end()){
   if(event_damage&&request.substr(8)=="damage_state"){
    if(isnil(impact_damage_proxy)){
     impact_damage_proxy=table();
     std::get<std::shared_ptr<Table>>(impact_damage_proxy.data)->values=std::get<std::shared_ptr<Table>>(found->second.data)->values;
     // impact_sensor still observes the same state. Collision mutation belongs
     // to damage_event -> damage_state; ROOT only modifies that event below.
     fn(impact_damage_proxy,"damageChassis",[](const Args&){return Args{};});
     fn(impact_damage_proxy,"damageWheel",[](const Args&){return Args{};});
    }
    return Args{impact_damage_proxy};
   }
   return Args{found->second};
  }
 }
 throw std::runtime_error("Unselected or not-yet-loaded dependency: "+request);
}));
V tabs=table();fn(tabs,"insert",[](const Args& a){append(arg(a,0),Args{arg(a,1)});return Args{};});
fn(tabs,"sort",[](const Args& a){V t=arg(a,0),compare=arg(a,1);size_t n=size_t(num(length(t)));std::vector<V> v;for(size_t i=1;i<=n;++i)v.push_back(get(t,V(double(i))));
std::stable_sort(v.begin(),v.end(),[compare](const V& x,const V& y){return isnil(compare)?truth(lt(x,y)):truth(first(call(compare,Args{x,y})));});for(size_t i=0;i<n;++i)set(t,V(double(i+1)),v[i]);return Args{};});g->define("table",tabs);
}
// Native module constructors are generated once, then compiled and linked.
#include "module_registry.inc"
static V scoped_input(Runtime& r,const std::string& name,V base){
 if(!r.normalized_inputs||isnil(base))return base;
 bool shock=name=="damage_event"||name=="impact_sensor";
 bool xyz=name=="load_transfer"||name=="vehicle_condition";
 bool pending=name=="arm_compliance"||name=="road_input_interpreter";
 if(!shock&&!xyz&&!pending)return base;
 auto ptr=std::get_if<std::shared_ptr<Table>>(&base.data);if(!ptr)return base;
 V view=table();std::get<std::shared_ptr<Table>>(view.data)->values=(*ptr)->values;
 set(view,V("acceleration"),V()); // Missing never masquerades as a measured zero.
 auto routes=nlohmann::json::parse(text(r.input_routes));
 if(pending){routes[name]={{"status","pending_calibration"}};r.input_routes=V(routes.dump());return view;}
 auto tag=get(base,V("acceleration_contract")),g=get(base,V("gForces"));
 bool valid=false;double a[3]{};
 try{
  valid=text(get(tag,V("units")))=="g"&&text(get(tag,V("axes")))=="car_xyz"&&
        text(get(tag,V("source")))=="original_ac"&&num(get(tag,V("schema")))==1;
  unsigned i=0;for(const char* axis:{"x","y","z"}){a[i]=num(get(g,V(axis)));valid=valid&&std::isfinite(a[i])&&std::abs(a[i])<=40;++i;}
 }catch(...){valid=false;}
 if(valid){
  V acceleration=table();set(acceleration,V("x"),V(a[0]*9.81));
  set(acceleration,V("y"),V(a[shock?2:1]*9.81));set(acceleration,V("z"),V(a[shock?1:2]*9.81));
  set(view,V("acceleration"),acceleration);
  routes[name]={{"status","connected"},{"units","m/s2"},{"axes",shock?"lateral,longitudinal,vertical":"lateral,vertical,longitudinal"},
      {"acceleration",{a[0]*9.81,a[shock?2:1]*9.81,a[shock?1:2]*9.81}}};
 }else routes[name]={{"status","source_unavailable_or_unqualified"}};
 r.input_routes=V(routes.dump());return view;
}
void Runtime::prepare_tyre_owner_inputs(){
 tyre_owner_input_mask=0;tyre_owner_angle.fill(0.);tyre_owner_ratio.fill(0.);
 if(!tyre_owner_inputs||!tyre_state_updated)return;
 auto m=modules.find("tire_state");if(m==modules.end())return;
 auto state=get(m->second,V("state"));
 if(!truth(get(state,V("valid")))||!truth(get(state,V("wheelsValid"))))return;
 auto wheels=get(state,V("wheels"));
 for(unsigned i=0;i<4;++i){
  auto wheel=get(wheels,V(double(i)));
  if(!truth(get(wheel,V("active")))||truth(get(wheel,V("storeOnly"))))continue;
  auto angle=get(wheel,V("filteredSlipAngle")),ratio=get(wheel,V("filteredSlipRatio"));
  auto a=std::get_if<double>(&angle.data),b=std::get_if<double>(&ratio.data);
  if(!a||!b||!std::isfinite(*a)||!std::isfinite(*b)||std::abs(*a)>1.5707963267948966)continue;
  tyre_owner_angle[i]=*a;tyre_owner_ratio[i]=*b;tyre_owner_input_mask|=1u<<i;
 }
}
void Runtime::step(V c,double dt){current=this;car=std::move(c);errors.clear();input_routes=V("{}");V base=car;
// This opt-in input conversion never falls back to a held diagnostic alias.
// Reject the complete step if a requested wheel measurement is unavailable.
if(damper_current_travel){
 for(unsigned i=0;i<4;++i){
  auto value=get(get(get(car,V("wheels")),V(double(i))),V("suspensionTravel"));
  auto n=std::get_if<double>(&value.data);
  if(!n||!std::isfinite(*n)||std::abs(*n)>1.)throw std::runtime_error("Missing or invalid current suspension travel");
 }
}
if(carcass_current_slip){
 for(unsigned i=0;i<4;++i){
  auto wheel=get(get(car,V("wheels")),V(double(i)));
  for(const char* field:{"slipAngle","slipRatio"}){
   auto value=get(wheel,V(field));auto n=std::get_if<double>(&value.data);
   if(!n||!std::isfinite(*n)||(std::string(field)=="slipAngle"&&std::abs(*n)>1.5707963267948966))
    throw std::runtime_error("Missing or invalid current wheel slip");
  }
 }
}
tyre_state_updated=false;tyre_owner_input_mask=0;active_input_owner.clear();
if(modules.empty())for(const auto& [name,load]:loaders){auto e=std::make_shared<Env>(globals);module_envs.push_back(e);V m=load(e);modules[name]=m;
if(!isnil(overrides)){V p=get(overrides,V(name));if(!isnil(p)){V dest=get(m,V("params"));for(const auto& [k,v]:std::get<std::shared_ptr<Table>>(p.data)->values){V key=std::holds_alternative<std::string>(k.data)?V(std::get<std::string>(k.data)):V(std::get<double>(k.data));set(dest,key,v);}}}
if(event_damage&&std::string(name)=="damage_state")set(get(m,V("params")),V("runtimeAccumulationScale"),V(0.));
// Unpacked file configuration remains in C++; no Apps dependency.
V init=get(m,V("init"));if(!isnil(init)){try{car=scoped_input(*this,name,base);call(init,Args{car});}catch(const std::exception& ex){errors.push_back(std::string(name)+" init: "+ex.what());}car=base;}
if(event_damage&&std::string(name)=="damage_state"&&!isnil(initial_damage)){
 call(get(m,V("setChassis")),Args{get(initial_damage,V(0.))});
 for(unsigned i=0;i<4;++i)call(get(m,V("setWheel")),Args{V(double(i)),get(initial_damage,V(double(i+1)))});
 initial_damage=V();
}}
input_routes=V("{}");
bool damage_event_updated=false;
for(const auto& [name,load]:loaders){(void)load;auto begin=std::chrono::steady_clock::now();try{
V damage_state;double before[5]{};
if(event_damage&&std::string(name)=="damage_state"){
 damage_state=get(modules[name],V("state"));before[0]=num(get(damage_state,V("chassis")));
 for(unsigned i=0;i<4;++i)before[i+1]=num(get(get(damage_state,V("wheel")),V(double(i))));
}
active_input_owner=name;
if(tyre_owner_inputs&&std::string(name)=="tire_force")prepare_tyre_owner_inputs();
car=scoped_input(*this,name,base);call(get(modules[name],V("update")),Args{V(dt),car,V()});
if(std::string(name)=="tire_state")tyre_state_updated=true;
if(event_damage&&std::string(name)=="damage_state"){
 double ratio=0.;
 if(impact_event_sample_valid&&num(get(damage_state,V("lastEventDelta")))>0.&&
    num(get(damage_state,V("lastEventTotal")))==impact_event_total)ratio=impact_event_root;
 signals["ngp_damage_root_event_ratio"]=V(ratio);
 signals["ngp_damage_owner"]=V("damage_event_with_impact_root");
 // Scale only the event increment actually admitted by the original owner.
 // This retains its dt, direction, repair and saturation behavior.
 double after[5];after[0]=num(get(damage_state,V("chassis")));
 for(unsigned i=0;i<4;++i)after[i+1]=num(get(get(damage_state,V("wheel")),V(double(i))));
 if(ratio>0.){
  call(get(modules[name],V("damageChassis")),Args{V(std::max(0.,after[0]-before[0])*ratio)});
  for(unsigned i=0;i<4;++i)call(get(modules[name],V("damageWheel")),Args{V(double(i)),V(std::max(0.,after[i+1]-before[i+1])*ratio)});
 }
 impact_event_sample_valid=false;
}
if(event_damage&&std::string(name)=="damage_event")damage_event_updated=true;
if(event_damage&&std::string(name)=="impact_sensor"){
 auto root=signals.find("ngp_impact_root_value"),total=signals.find("ngp_damage_event_total");
 impact_event_sample_valid=false;
 if(errors.empty()&&damage_event_updated&&!isnil(car)&&root!=signals.end()&&total!=signals.end()){
  double r=num(root->second),t=num(total->second);
  if(std::isfinite(r)&&r>=0.&&r<=.45&&std::isfinite(t)&&t>=0.){
   impact_event_root=r;impact_event_total=t;impact_event_sample_valid=true;
  }
 }
}
}catch(const std::exception& ex){if(event_damage)impact_event_sample_valid=false;errors.push_back(std::string(name)+": "+ex.what());}
car=base;
active_input_owner.clear();
module_us[name]=std::chrono::duration<double,std::micro>(std::chrono::steady_clock::now()-begin).count();}}
}

// Generated native C++ from pinned caster_effect.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("steeringInputContract");
static const V lit3("original");
static const V lit4("casterAngleDeg");
static const V lit5("kpiAngleDeg");
static const V lit6("maxSteerAngleDeg");
static const V lit7("autoGeometryEnabled");
static const V lit8("iniRelativePath");
static const V lit9("data/suspensions.ini");
static const V lit10("geometryReloadEachUpdate");
static const V lit11("fallbackCasterAngleDeg");
static const V lit12("fallbackKpiAngleDeg");
static const V lit13("casterSign");
static const V lit14("minCasterAngleDeg");
static const V lit15("maxCasterAngleDeg");
static const V lit16("minKpiAngleDeg");
static const V lit17("maxKpiAngleDeg");
static const V lit18("minKingpinVerticalDistance");
static const V lit19("mechanicalTrail");
static const V lit20("pneumaticTrailBase");
static const V lit21("scrubRadius");
static const V lit22("trailLoadReference");
static const V lit23("wheelLoadReference");
static const V lit24("casterCamberGain");
static const V lit25("kpiCamberGain");
static const V lit26("casterToeGain");
static const V lit27("scrubContactShiftGain");
static const V lit28("aligningTorqueGain");
static const V lit29("trailTorqueGain");
static const V lit30("ultraChassisInfluence");
static const V lit31("bodyFlexInfluence");
static const V lit32("optimalCamberDeg");
static const V lit33("camberGripSensitivity");
static const V lit34("toeGripSensitivity");
static const V lit35("trailGripSensitivity");
static const V lit36("slipGripSensitivity");
static const V lit37("contactGripInfluence");
static const V lit38("minGrip");
static const V lit39("maxGrip");
static const V lit40("slipCollapseAngleRad");
static const V lit41("slipCollapseStrength");
static const V lit42("minPneumaticTrail");
static const V lit43("maxPneumaticTrail");
static const V lit44("tauGeometry");
static const V lit45("tauGrip");
static const V lit46("tauTorque");
static const V lit47("minDt");
static const V lit48("maxDt");
static const V lit49("estimateCasterFromCamber");
static const V lit50("estimateMinSteerDeg");
static const V lit51("estimateMaxSteerDeg");
static const V lit52("estimateMinSpeedKmh");
static const V lit53("estimateMaxSpeedKmh");
static const V lit54("estimateMinCamberDeltaDeg");
static const V lit55("estimateTau");
static const V lit56("estimatedCasterMinDeg");
static const V lit57("estimatedCasterMaxDeg");
static const V lit58("useEstimatedCasterWhenIniMissing");
static const V lit59("outputEnabled");
static const V lit60("debugStoreInterval");
static const V lit61("status");
static const V lit62("INIT");
static const V lit63("updateCount");
static const V lit64("wheelsValid");
static const V lit65("geometryLoaded");
static const V lit66("geometryAttempted");
static const V lit67("geometryStatus");
static const V lit68("NOT LOADED");
static const V lit69("geometryPath");
static const V lit70("");
static const V lit71("geometrySource");
static const V lit72("NONE");
static const V lit73("geometryWarning");
static const V lit74("suspensionTypeFront");
static const V lit75("UNKNOWN");
static const V lit76("suspensionTypeRear");
static const V lit77("geometryCasterFrontDeg");
static const V lit78("geometryKpiFrontDeg");
static const V lit79("geometryCasterRearDeg");
static const V lit80("geometryKpiRearDeg");
static const V lit81("geometryTieToeFront");
static const V lit82("geometryTieToeRear");
static const V lit83("geometryCasterRawDeg");
static const V lit84("geometryKpiRawDeg");
static const V lit85("geometryAxisX");
static const V lit86("geometryAxisY");
static const V lit87("geometryAxisZ");
static const V lit88("estimatedCasterDeg");
static const V lit89("estimatedCasterValid");
static const V lit90("estimatedCasterSamples");
static const V lit91("lastCasterEstimateDeg");
static const V lit92("steerNorm");
static const V lit93("steerDeg");
static const V lit94("steerRad");
static const V lit95("casterDeg");
static const V lit96("casterRad");
static const V lit97("kpiDeg");
static const V lit98("kpiRad");
static const V lit99("frontAxisAnchor");
static const V lit100("frontAxisAuthority");
static const V lit101("frontAxisSteerWeight");
static const V lit102("bodySteer");
static const V lit103("bodyFlexFactor");
static const V lit104("bodyTorsionFactor");
static const V lit105("bodyRigidity");
static const V lit106("load");
static const V lit107("slipAngle");
static const V lit108("fy");
static const V lit109("contact");
static const V lit110("ucCamber");
static const V lit111("ucToe");
static const V lit112("casterCamberDeg");
static const V lit113("kpiCamberDeg");
static const V lit114("totalCamberDeg");
static const V lit115("casterToeDeg");
static const V lit116("totalToeDeg");
static const V lit117("pneumaticTrail");
static const V lit118("contactShift");
static const V lit119("trailTorque");
static const V lit120("aligningHint");
static const V lit121("grip");
static const V lit122("targetGrip");
static const V lit123("geometryLinked");
static const V lit124("tireForceLinked");
static const V lit125("frontAxisLinked");
static const V lit126("bodyLinked");
static const V lit127("contactLinked");
static const V lit128("debugStoreTimer");
static const V lit129("debugStoreNow");
static const V lit130("_dt");
static const V lit131("state");
static const V lit132("debug");
static const V lit133("atan2");
static const V lit134("atan");
static const V lit135("safeLoadRaw");
static const V lit136("safeStore");
static const V lit137("safeField");
static const V lit138("max");
static const V lit139("^%s+");
static const V lit140("%s+$");
static const V lit141("([%-%+%.%d]+)%s*,%s*([%-%+%.%d]+)%s*,%s*([%-%+%.%d]+)");
static const V lit142("x");
static const V lit143("y");
static const V lit144("z");
static const V lit145("open");
static const V lit146("r");
static const V lit147(";.*$");
static const V lit148("//.*$");
static const V lit149("^%[(.-)%]$");
static const V lit150("^([%w_]+)%s*=%s*(.+)$");
static const V lit151("getCarID");
static const V lit152("getFolder");
static const V lit153("FolderID");
static const V lit154("ContentCars");
static const V lit155("/");
static const V lit156("content/cars/");
static const V lit157("STRUT_CAR");
static const V lit158("WBTYRE_BOTTOM");
static const V lit159("STRUT");
static const V lit160("WBTYRE_TOP");
static const V lit161("DOUBLE_WISHBONE");
static const V lit162("NO KINGPIN AXIS");
static const V lit163("abs");
static const V lit164("KINGPIN VERTICAL TOO SMALL");
static const V lit165("deg");
static const V lit166("CASTER CLAMPED");
static const V lit167("KPI CLAMPED");
static const V lit168("WBTYRE_STEER");
static const V lit169("sqrt");
static const V lit170("suspensionType");
static const V lit171("tieToe");
static const V lit172("fallback");
static const V lit173("FALLBACK");
static const V lit174("AUTO DISABLED");
static const V lit175("LOADING");
static const V lit176("NO CAR PATH");
static const V lit177("INI NOT FOUND");
static const V lit178("FRONT");
static const V lit179("FRONT_0");
static const V lit180("SUSPENSION_FRONT");
static const V lit181("REAR");
static const V lit182("REAR_0");
static const V lit183("SUSPENSION_REAR");
static const V lit184("NO FRONT SECTION");
static const V lit185("OK");
static const V lit186("INI");
static const V lit187("speedKmh");
static const V lit188("velocity");
static const V lit189("length");
static const V lit190("current_front_deflection_radians_v1");
static const V lit191("Invalid caster steering input contract");
static const V lit192("frontSteeringDeflection");
static const V lit193("id");
static const V lit194("frame");
static const V lit195("table");
static const V lit196("string");
static const V lit197("number");
static const V lit198("floor");
static const V lit199("schema");
static const V lit200("car_id");
static const V lit201("baseline_subtracted");
static const V lit202("sign_convention");
static const V lit203("model_positive_steer");
static const V lit204("deflection_rad");
static const V lit205("Current caster deflection context unavailable");
static const V lit206("steeringCarID");
static const V lit207("steeringFrame");
static const V lit208("Current caster deflection frame did not advance");
static const V lit209("pi");
static const V lit210("Current caster front deflection unavailable");
static const V lit211("frontSteeringDeflectionRad");
static const V lit212("steeringSource");
static const V lit213("CURRENT_FRONT_DEFLECTION_RADIANS");
static const V lit214("steer");
static const V lit215("ngp_body_steer");
static const V lit216("rad");
static const V lit217("ngp_body_rigidity");
static const V lit218("ngp_body_flex_factor");
static const V lit219("ngp_body_torsion_factor");
static const V lit220("ngp_front_axis_anchor");
static const V lit221("ngp_front_axis_authority");
static const V lit222("ngp_front_axis_steer_weight");
static const V lit223("ngp_tire_state_load_");
static const V lit224("ngp_tire_load_");
static const V lit225("ngp_wheel_load_");
static const V lit226("ngp_sprung_load_");
static const V lit227("ngp_dlt_load_");
static const V lit228("ngp_tire_slip_angle_");
static const V lit229("ngp_slip_angle_");
static const V lit230("ngp_filtered_slip_angle_");
static const V lit231("ngp_rf2_fy_");
static const V lit232("ngp_tire_force_lat_");
static const V lit233("ngp_tf_lat_");
static const V lit234("ngp_contact_quality_");
static const V lit235("ngp_tc_contact_");
static const V lit236("ngp_tire_contact_");
static const V lit237("ngp_uc_camber_");
static const V lit238("ngp_arm_camber_");
static const V lit239("ngp_control_arm_camber_");
static const V lit240("ngp_uc_toe_");
static const V lit241("ngp_arm_toe_");
static const V lit242("ngp_control_arm_toe_");
static const V lit243("wheels");
static const V lit244("sin");
static const V lit245("ACD_ESTIMATE");
static const V lit246("ESTIMATED");
static const V lit247("CASTER ESTIMATED FROM CAMBER");
static const V lit248("cos");
static const V lit249("asin");
static const V lit250("ngp_caster_grip_");
static const V lit251("ngp_caster_camber_");
static const V lit252("ngp_caster_toe_");
static const V lit253("ngp_caster_camber_gain_");
static const V lit254("ngp_caster_kpi_camber_");
static const V lit255("ngp_caster_total_camber_");
static const V lit256("ngp_caster_total_toe_");
static const V lit257("ngp_caster_pneumatic_trail_");
static const V lit258("ngp_caster_mechanical_trail_");
static const V lit259("ngp_caster_trail_torque_");
static const V lit260("ngp_caster_aligning_hint_");
static const V lit261("ngp_caster_contact_shift_");
static const V lit262("ngp_caster_fy_");
static const V lit263("ngp_caster_load_");
static const V lit264("ngp_caster_slip_angle_");
static const V lit265("ngp_caster_contact_");
static const V lit266("ngp_caster_target_grip_");
static const V lit267("ngp_caster_status");
static const V lit268("ngp_caster_update_count");
static const V lit269("ngp_caster_wheels_valid");
static const V lit270("ngp_caster_steer_deg");
static const V lit271("ngp_caster_angle_deg");
static const V lit272("ngp_caster_kpi_deg");
static const V lit273("ngp_caster_geometry_source");
static const V lit274("ngp_caster_geometry_warning");
static const V lit275("ngp_caster_geometry_status");
static const V lit276("ngp_caster_geometry_path");
static const V lit277("ngp_caster_suspension_type_front");
static const V lit278("ngp_caster_suspension_type_rear");
static const V lit279("ngp_caster_geometry_caster_front");
static const V lit280("ngp_caster_geometry_kpi_front");
static const V lit281("ngp_caster_geometry_caster_raw");
static const V lit282("ngp_caster_geometry_kpi_raw");
static const V lit283("ngp_caster_geometry_tie_toe_front");
static const V lit284("ngp_caster_geometry_axis_x");
static const V lit285("ngp_caster_geometry_axis_y");
static const V lit286("ngp_caster_geometry_axis_z");
static const V lit287("ngp_caster_front_axis_anchor");
static const V lit288("ngp_caster_front_axis_authority");
static const V lit289("ngp_caster_front_axis_steer_weight");
static const V lit290("ngp_caster_geometry_linked");
static const V lit291("ngp_caster_tire_force_linked");
static const V lit292("ngp_caster_front_axis_linked");
static const V lit293("ngp_caster_body_linked");
static const V lit294("ngp_caster_contact_linked");
static const V lit295("ngp_caster_estimated_caster");
static const V lit296("ngp_caster_estimated_samples");
static const V lit297("init");
static const V lit298("update");
static const V lit299("getCar");
static const V lit300("NO CAR");
static const V lit301("NO WHEELS");
static const V lit302("RUNNING");
static const V lit303("getGrip");
static const V lit304("getCamber");
static const V lit305("getToe");
static const V lit306("getAligningHint");
static const V lit307("getPneumaticTrail");
static const V lit308("debugStr");
static const V lit309("format");
static const V lit310("Caster W%d Grip %.3f / Cam %.3f / Toe %.3f\nTrail P %.3f M %.3f / Torque %.1f\nAlign %.3f / Shift %.4f / Fy %.0f");
static const V lit311("Status %s / Count %.0f / Wheels %s\nSteer %.2f deg / Caster %.2f / KPI %.2f\nSusp %s / Geo %s / Source %s\nWarn %s\nFrontAxis A %.3f Auth %.3f\nLinks Geo:%s TireF:%s FrontAxis:%s Body:%s Contact:%s\nGrip %.3f %.3f %.3f %.3f");
static const V lit312("NIL");
V load_caster_effect(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(50);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{Args t3=Args{V(0.0),V(1.0),V(2.0),V(3.0)};e->slot(0,2)=arg(t3,0);e->slot(0,3)=arg(t3,1);e->slot(0,4)=arg(t3,2);e->slot(0,5)=arg(t3,3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t4=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(7.5));set(z,lit5,V(12.0));set(z,lit6,V(35.0));set(z,lit7,V(true));set(z,lit8,lit9);set(z,lit10,V(false));set(z,lit11,V(7.5));set(z,lit12,V(12.0));set(z,lit13,V(-num(V(1.0))));set(z,lit14,V(-num(V(3.0))));set(z,lit15,V(18.0));set(z,lit16,V(0.0));set(z,lit17,V(28.0));set(z,lit18,V(0.02));set(z,lit19,V(0.06));set(z,lit20,V(0.045));set(z,lit21,V(0.035));set(z,lit22,V(3200.0));set(z,lit23,V(3000.0));set(z,lit24,V(1.0));set(z,lit25,V(0.85));set(z,lit26,V(0.35));set(z,lit27,V(1.0));set(z,lit28,V(0.0018));set(z,lit29,V(1.0));set(z,lit30,V(0.25));set(z,lit31,V(0.12));set(z,lit32,V(-num(V(0.5))));set(z,lit33,V(0.035));set(z,lit34,V(0.09));set(z,lit35,V(0.03));set(z,lit36,V(0.35));set(z,lit37,V(0.1));set(z,lit38,V(0.68));set(z,lit39,V(1.08));set(z,lit40,V(0.28));set(z,lit41,V(0.55));set(z,lit42,V(0.005));set(z,lit43,V(0.075));set(z,lit44,V(0.055));set(z,lit45,V(0.07));set(z,lit46,V(0.05));set(z,lit47,V(5e-05));set(z,lit48,V(0.03));set(z,lit49,V(true));set(z,lit50,V(8.0));set(z,lit51,V(28.0));set(z,lit52,V(1.0));set(z,lit53,V(80.0));set(z,lit54,V(0.05));set(z,lit55,V(1.25));set(z,lit56,V(1.0));set(z,lit57,V(14.0));set(z,lit58,V(true));set(z,lit59,V(true));set(z,lit60,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit61,lit62);set(z,lit63,V(0.0));set(z,lit64,V(false));set(z,lit65,V(false));set(z,lit66,V(false));set(z,lit67,lit68);set(z,lit69,lit70);set(z,lit71,lit72);set(z,lit73,lit72);set(z,lit74,lit75);set(z,lit76,lit75);set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(false));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(7.5));set(z,lit96,V(0.0));set(z,lit97,V(12.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(1.0));set(z,lit104,V(1.0));set(z,lit105,V(1.0));set(z,lit106,([&](){V z=table();set(z,V(0.0),V(3000.0));set(z,V(1.0),V(3000.0));set(z,V(2.0),V(3000.0));set(z,V(3.0),V(3000.0));return z;})());set(z,lit107,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit108,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit109,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit110,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit111,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit112,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit113,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit114,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit115,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit116,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit117,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit19,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit118,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit119,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit120,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit121,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit122,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit123,V(false));set(z,lit124,V(false));set(z,lit125,V(false));set(z,lit126,V(false));set(z,lit127,V(false));set(z,lit128,V(999.0));set(z,lit129,V(true));set(z,lit130,V(0.001));return z;})();e->slot(0,6)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t6=e->slot(0,6);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit132)};V t7=e->slot(0,6);refs[0].put(std::move(t7));}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=eq(e->slot(0,2),V());return !truth(t9)?ne(e->slot(0,2),e->slot(0,2)):t9;})())){return Args{([&](){V t10=e->slot(0,1);return !truth(t10)?V(0.0):t10;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t11=first(call(e->slot(1,7),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t11));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(V(1.0)))};
}
if(truth(gt(e->slot(0,0),V(0.0)))){return Args{V(1.0)};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(get(e->get("math"),lit133))){return call(get(e->get("math"),lit133),Args{e->slot(0,0),e->slot(0,1)});
}
return call(get(e->get("math"),lit134),Args{e->slot(0,0),e->slot(0,1)});
return Args{};});
{V t13=get(e->slot(0,0),lit135);e->slot(0,11)=std::move(t13);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->slot(1,11),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return call(e->slot(1,7),Args{e->slot(0,2),([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(get(get(e->slot(1,1),lit1),lit59))))){return Args{};
}
return call(get(e->slot(1,0),lit136),Args{e->slot(0,0),e->slot(0,1)});
return Args{};});
{V t17=get(e->slot(0,0),lit137);e->slot(0,14)=std::move(t17);}
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t19=first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t19));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t20=first(call(get(e->get("math"),lit138),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.001)})),V(0.0001)}));refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t21=first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t21));}
{V t22=first(call(e->slot(1,8),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t22);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit128)};V t23=add(([&](){V t24=get(e->slot(1,6),lit128);return !truth(t24)?V(0.0):t24;})(),first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t23));}
if(truth(ge(get(e->slot(1,6),lit128),get(get(e->slot(1,1),lit1),lit60)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit128)};V t25=V(0.0);refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit129)};V t26=V(true);refs[0].put(std::move(t26));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,6),lit129)};V t27=V(false);refs[0].put(std::move(t27));}
}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return method(first(method(first(call(e->get("tostring"),Args{([&](){V t28=e->slot(0,0);return !truth(t28)?lit70:t28;})()})),"gsub",Args{lit139,lit70})),"gsub",Args{lit140,lit70});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{V()};
}
{Args t29=method(first(call(e->get("tostring"),Args{e->slot(0,0)})),"match",Args{lit141});e->slot(0,1)=arg(t29,0);e->slot(0,2)=arg(t29,1);e->slot(0,3)=arg(t29,2);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V()};
}
return Args{([&](){V z=table();set(z,lit142,first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)})));set(z,lit143,first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})));set(z,lit144,first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)})));return z;})()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t30=V(!truth(e->slot(0,0)));return !truth(t30)?V(!truth(e->slot(0,1))):t30;})())){return Args{V()};
}
return Args{([&](){V z=table();set(z,lit142,sub(first(call(e->slot(1,7),Args{get(e->slot(0,0),lit142),V(0.0)})),first(call(e->slot(1,7),Args{get(e->slot(0,1),lit142),V(0.0)}))));set(z,lit143,sub(first(call(e->slot(1,7),Args{get(e->slot(0,0),lit143),V(0.0)})),first(call(e->slot(1,7),Args{get(e->slot(0,1),lit143),V(0.0)}))));set(z,lit144,sub(first(call(e->slot(1,7),Args{get(e->slot(0,0),lit144),V(0.0)})),first(call(e->slot(1,7),Args{get(e->slot(0,1),lit144),V(0.0)}))));return z;})()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);if(truth(([&](){V t31=V(!truth(e->get("io")));return !truth(t31)?V(!truth(get(e->get("io"),lit145))):t31;})())){return Args{V()};
}
{Args t32=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("io"),lit145),Args{e->slot(1,0),lit146});
return Args{};})});e->slot(0,1)=arg(t32,0);e->slot(0,2)=arg(t32,1);}
if(truth(([&](){V t33=V(!truth(e->slot(0,1)));return !truth(t33)?V(!truth(e->slot(0,2))):t33;})())){return Args{V()};
}
{V t34=([&](){V z=table();return z;})();e->slot(0,3)=std::move(t34);}
{V t35=V();e->slot(0,4)=std::move(t35);}
{Args t36=method(e->slot(0,2),"lines",Args{});V t37=arg(t36,2);while(true){Args t38=call(arg(t36,0),Args{arg(t36,1),t37});t37=arg(t38,0);if(isnil(t37))break;auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=arg(t38,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t39=first(call(e->get("tostring"),Args{([&](){V t40=e->slot(0,0);return !truth(t40)?lit70:t40;})()}));refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t41=first(method(e->slot(0,0),"gsub",Args{lit147,lit70}));refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t42=first(method(e->slot(0,0),"gsub",Args{lit148,lit70}));refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t43=first(call(e->slot(2,17),Args{e->slot(0,0)}));refs[0].put(std::move(t43));}
if(truth(ne(e->slot(0,0),lit70))){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);{V t44=first(method(e->slot(1,0),"match",Args{lit149}));e->slot(0,0)=std::move(t44);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,2,4)};V t45=first(call(e->slot(3,17),Args{e->slot(0,0)}));refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),e->slot(2,4))};V t46=([&](){V t47=get(e->slot(2,3),e->slot(2,4));return !truth(t47)?([&](){V z=table();return z;})():t47;})();refs[0].put(std::move(t46));}
}else{auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t48=method(e->slot(2,0),"match",Args{lit150});e->slot(0,0)=arg(t48,0);e->slot(0,1)=arg(t48,1);}
if(truth(([&](){V t49=([&](){V t50=e->slot(0,0);return truth(t50)?e->slot(0,1):t50;})();return truth(t49)?e->slot(3,4):t49;})())){{std::array<Ref,1> refs{Ref(get(e->slot(3,3),e->slot(3,4)),first(call(e->slot(4,17),Args{e->slot(0,0)})))};V t51=first(call(e->slot(4,17),Args{e->slot(0,1)}));refs[0].put(std::move(t51));}
}
}
}
}}
method(e->slot(0,2),"close",Args{});
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);e->slot(0,0)=arg(a,0);{V t52=V();e->slot(0,1)=std::move(t52);}
if(truth(ne(e->slot(0,1),V()))){return call(e->get("tostring"),Args{e->slot(0,1)});
}
if(truth(([&](){V t53=e->get("ac");return truth(t53)?get(e->get("ac"),lit151):t53;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t54=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit151),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t54,0);e->slot(0,1)=arg(t54,1);}
if(truth(([&](){V t55=e->slot(0,0);return truth(t55)?e->slot(0,1):t55;})())){return call(e->get("tostring"),Args{e->slot(0,1)});
}
}
return Args{V()};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);e->slot(0,0)=arg(a,0);{V t56=first(call(e->slot(1,21),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t56);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V()};
}
if(truth(([&](){V t57=([&](){V t58=([&](){V t59=e->get("ac");return truth(t59)?get(e->get("ac"),lit152):t59;})();return truth(t58)?get(e->get("ac"),lit153):t58;})();return truth(t57)?get(get(e->get("ac"),lit153),lit154):t57;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t60=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit152),Args{get(get(e->get("ac"),lit153),lit154)});
return Args{};})});e->slot(0,0)=arg(t60,0);e->slot(0,1)=arg(t60,1);}
if(truth(([&](){V t61=e->slot(0,0);return truth(t61)?e->slot(0,1):t61;})())){return Args{concat(first(call(e->get("tostring"),Args{e->slot(0,1)})),concat(lit155,concat(e->slot(1,1),concat(lit155,get(get(e->slot(2,1),lit1),lit8)))))};
}
}
return Args{concat(lit156,concat(e->slot(0,1),concat(lit155,get(get(e->slot(1,1),lit1),lit8))))};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{lit75};
}
if(truth(([&](){V t62=ne(get(e->slot(0,0),lit157),V());return truth(t62)?ne(get(e->slot(0,0),lit158),V()):t62;})())){return Args{lit159};
}
if(truth(([&](){V t63=ne(get(e->slot(0,0),lit160),V());return truth(t63)?ne(get(e->slot(0,0),lit158),V()):t63;})())){return Args{lit161};
}
return Args{lit75};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V(),V()};
}
if(truth(eq(e->slot(0,1),lit159))){return joined(Args{first(call(e->slot(1,18),Args{get(e->slot(0,0),lit157)}))},call(e->slot(1,18),Args{get(e->slot(0,0),lit158)}));
}
if(truth(eq(e->slot(0,1),lit161))){return joined(Args{first(call(e->slot(1,18),Args{get(e->slot(0,0),lit160)}))},call(e->slot(1,18),Args{get(e->slot(0,0),lit158)}));
}
return Args{V(),V()};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t64=first(call(e->slot(1,19),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,2)=std::move(t64);}
if(truth(V(!truth(e->slot(0,2))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t65=lit162;refs[0].put(std::move(t65));}
return Args{get(get(e->slot(1,1),lit1),lit11)};
}
{V t66=first(call(get(e->get("math"),lit163),call(e->slot(1,7),Args{get(e->slot(0,2),lit143),V(0.0)})));e->slot(0,3)=std::move(t66);}
{V t67=first(call(e->slot(1,7),Args{get(e->slot(0,2),lit144),V(0.0)}));e->slot(0,4)=std::move(t67);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit85)};V t68=first(call(e->slot(1,7),Args{get(e->slot(0,2),lit142),V(0.0)}));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit86)};V t69=first(call(e->slot(1,7),Args{get(e->slot(0,2),lit143),V(0.0)}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit87)};V t70=first(call(e->slot(1,7),Args{get(e->slot(0,2),lit144),V(0.0)}));refs[0].put(std::move(t70));}
if(truth(lt(e->slot(0,3),get(get(e->slot(1,1),lit1),lit18)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t71=lit164;refs[0].put(std::move(t71));}
return Args{get(get(e->slot(1,1),lit1),lit11)};
}
{V t72=mul(get(get(e->slot(1,1),lit1),lit13),first(call(get(e->get("math"),lit165),call(e->slot(1,10),Args{e->slot(0,4),e->slot(0,3)}))));e->slot(0,5)=std::move(t72);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit83)};V t73=e->slot(0,5);refs[0].put(std::move(t73));}
{V t74=first(call(e->slot(1,8),Args{e->slot(0,5),get(get(e->slot(1,1),lit1),lit14),get(get(e->slot(1,1),lit1),lit15)}));e->slot(0,6)=std::move(t74);}
if(truth(gt(first(call(get(e->get("math"),lit163),Args{sub(e->slot(0,6),e->slot(0,5))})),V(0.001)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t75=lit166;refs[0].put(std::move(t75));}
}
return Args{e->slot(0,6)};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t76=first(call(e->slot(1,19),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,2)=std::move(t76);}
if(truth(V(!truth(e->slot(0,2))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t77=lit162;refs[0].put(std::move(t77));}
return Args{get(get(e->slot(1,1),lit1),lit12)};
}
{V t78=first(call(get(e->get("math"),lit163),call(e->slot(1,7),Args{get(e->slot(0,2),lit143),V(0.0)})));e->slot(0,3)=std::move(t78);}
{V t79=first(call(get(e->get("math"),lit163),call(e->slot(1,7),Args{get(e->slot(0,2),lit142),V(0.0)})));e->slot(0,4)=std::move(t79);}
if(truth(lt(e->slot(0,3),get(get(e->slot(1,1),lit1),lit18)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t80=lit164;refs[0].put(std::move(t80));}
return Args{get(get(e->slot(1,1),lit1),lit12)};
}
{V t81=first(call(get(e->get("math"),lit165),call(e->slot(1,10),Args{e->slot(0,4),e->slot(0,3)})));e->slot(0,5)=std::move(t81);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit84)};V t82=e->slot(0,5);refs[0].put(std::move(t82));}
{V t83=first(call(e->slot(1,8),Args{e->slot(0,5),get(get(e->slot(1,1),lit1),lit16),get(get(e->slot(1,1),lit1),lit17)}));e->slot(0,6)=std::move(t83);}
if(truth(gt(first(call(get(e->get("math"),lit163),Args{sub(e->slot(0,6),e->slot(0,5))})),V(0.001)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t84=lit167;refs[0].put(std::move(t84));}
}
return Args{e->slot(0,6)};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t85=first(call(e->slot(1,18),Args{get(e->slot(0,0),lit168)}));e->slot(0,1)=std::move(t85);}
{V t86=first(call(e->slot(1,18),Args{get(e->slot(0,0),lit158)}));e->slot(0,2)=std::move(t86);}
if(truth(([&](){V t87=V(!truth(e->slot(0,1)));return !truth(t87)?V(!truth(e->slot(0,2))):t87;})())){return Args{V(0.0)};
}
{V t88=first(call(e->slot(1,19),Args{e->slot(0,1),e->slot(0,2)}));e->slot(0,3)=std::move(t88);}
if(truth(V(!truth(e->slot(0,3))))){return Args{V(0.0)};
}
{V t89=first(call(get(e->get("math"),lit169),Args{add(mul(get(e->slot(0,3),lit142),get(e->slot(0,3),lit142)),mul(get(e->slot(0,3),lit144),get(e->slot(0,3),lit144)))}));e->slot(0,4)=std::move(t89);}
if(truth(lt(e->slot(0,4),V(0.0001)))){return Args{V(0.0)};
}
return call(e->slot(1,8),Args{divv(get(e->slot(0,3),lit144),e->slot(0,4)),V(-num(V(1.0))),V(1.0)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t90=first(call(e->slot(1,23),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t90);}
{Args t91=call(e->slot(1,24),Args{e->slot(0,0),e->slot(0,1)});e->slot(0,2)=arg(t91,0);e->slot(0,3)=arg(t91,1);}
if(truth(([&](){V t92=V(!truth(e->slot(0,2)));return !truth(t92)?V(!truth(e->slot(0,3))):t92;})())){return Args{([&](){V z=table();set(z,lit170,e->slot(0,1));set(z,lit95,get(get(e->slot(1,1),lit1),lit11));set(z,lit97,get(get(e->slot(1,1),lit1),lit12));set(z,lit171,V(0.0));set(z,lit172,V(true));return z;})()};
}
return Args{([&](){V z=table();set(z,lit170,e->slot(0,1));set(z,lit95,first(call(e->slot(1,25),Args{e->slot(0,2),e->slot(0,3)})));set(z,lit97,first(call(e->slot(1,26),Args{e->slot(0,2),e->slot(0,3)})));set(z,lit171,first(call(e->slot(1,27),Args{e->slot(0,0)})));set(z,lit172,V(false));return z;})()};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit65)};V t93=V(true);refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit67)};V t94=lit173;refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t95=lit173;refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t96=first(call(e->get("tostring"),Args{([&](){V t97=e->slot(0,0);return !truth(t97)?lit75:t97;})()}));refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit74)};V t98=lit173;refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit76)};V t99=lit173;refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit77)};V t100=get(get(e->slot(1,1),lit1),lit11);refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit78)};V t101=get(get(e->slot(1,1),lit1),lit12);refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit79)};V t102=V(0.0);refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit80)};V t103=V(0.0);refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit81)};V t104=V(0.0);refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit82)};V t105=V(0.0);refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit1),lit4)};V t106=get(e->slot(1,6),lit77);refs[0].put(std::move(t106));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit1),lit5)};V t107=get(e->slot(1,6),lit78);refs[0].put(std::move(t107));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(get(get(e->slot(1,1),lit1),lit7))))){call(e->slot(1,29),Args{lit174});
return Args{V(false)};
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit66)};V t108=V(true);refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit67)};V t109=lit175;refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t110=lit72;refs[0].put(std::move(t110));}
{V t111=first(call(e->slot(1,22),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t111);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit69)};V t112=first(call(e->get("tostring"),Args{([&](){V t113=e->slot(0,1);return !truth(t113)?lit70:t113;})()}));refs[0].put(std::move(t112));}
if(truth(V(!truth(e->slot(0,1))))){call(e->slot(1,29),Args{lit176});
return Args{V(false)};
}
{V t114=first(call(e->slot(1,20),Args{e->slot(0,1)}));e->slot(0,2)=std::move(t114);}
if(truth(V(!truth(e->slot(0,2))))){call(e->slot(1,29),Args{lit177});
return Args{V(false)};
}
{V t115=([&](){V t116=([&](){V t117=get(e->slot(0,2),lit178);return !truth(t117)?get(e->slot(0,2),lit179):t117;})();return !truth(t116)?get(e->slot(0,2),lit180):t116;})();e->slot(0,3)=std::move(t115);}
{V t118=([&](){V t119=([&](){V t120=get(e->slot(0,2),lit181);return !truth(t120)?get(e->slot(0,2),lit182):t120;})();return !truth(t119)?get(e->slot(0,2),lit183):t119;})();e->slot(0,4)=std::move(t118);}
if(truth(V(!truth(e->slot(0,3))))){call(e->slot(1,29),Args{lit184});
return Args{V(false)};
}
{V t121=first(call(e->slot(1,28),Args{e->slot(0,3)}));e->slot(0,5)=std::move(t121);}
{V t122=([&](){V t123=([&](){V t124=e->slot(0,4);return truth(t124)?first(call(e->slot(1,28),Args{e->slot(0,4)})):t124;})();return !truth(t123)?([&](){V z=table();set(z,lit170,lit75);set(z,lit95,V(0.0));set(z,lit97,V(0.0));set(z,lit171,V(0.0));set(z,lit172,V(true));return z;})():t123;})();e->slot(0,6)=std::move(t122);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit74)};V t125=get(e->slot(0,5),lit170);refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit76)};V t126=get(e->slot(0,6),lit170);refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit77)};V t127=get(e->slot(0,5),lit95);refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit78)};V t128=get(e->slot(0,5),lit97);refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit79)};V t129=get(e->slot(0,6),lit95);refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit80)};V t130=get(e->slot(0,6),lit97);refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit81)};V t131=get(e->slot(0,5),lit171);refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit82)};V t132=get(e->slot(0,6),lit171);refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit1),lit4)};V t133=get(e->slot(1,6),lit77);refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit1),lit5)};V t134=get(e->slot(1,6),lit78);refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit65)};V t135=V(true);refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit67)};V t136=([&](){V t137=([&](){V t138=get(e->slot(0,5),lit172);return truth(t138)?lit173:t138;})();return !truth(t137)?lit185:t137;})();refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t139=([&](){V t140=([&](){V t141=get(e->slot(0,5),lit172);return truth(t141)?lit173:t141;})();return !truth(t140)?lit186:t140;})();refs[0].put(std::move(t139));}
if(truth(eq(get(e->slot(1,6),lit73),lit70))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t142=lit72;refs[0].put(std::move(t142));}
}
return Args{eq(get(e->slot(1,6),lit71),lit186)};
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t143=first(call(e->slot(1,14),Args{e->slot(0,0),lit187,V()}));e->slot(0,1)=std::move(t143);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,7),Args{e->slot(0,1),V(0.0)});
}
{V t144=first(call(e->slot(1,14),Args{e->slot(0,0),lit188,V()}));e->slot(0,2)=std::move(t144);}
if(truth(([&](){V t145=e->slot(0,2);return truth(t145)?get(e->slot(0,2),lit189):t145;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t146=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{mul(first(method(e->slot(2,2),"length",Args{})),V(3.6))};
return Args{};})});e->slot(0,0)=arg(t146,0);e->slot(0,1)=arg(t146,1);}
if(truth(e->slot(0,0))){return call(e->slot(2,7),Args{e->slot(0,1),V(0.0)});
}
}
return Args{V(0.0)};
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t147=get(get(e->slot(1,1),lit1),lit2);e->slot(0,1)=std::move(t147);}
if(truth(([&](){V t148=ne(e->slot(0,1),lit3);return truth(t148)?ne(e->slot(0,1),lit190):t148;})())){call(e->get("error"),Args{lit191});
}
if(truth(eq(e->slot(0,1),lit190))){auto parent=e;Env storage(parent,false,4);auto e=&storage;{V t149=first(call(e->slot(2,14),Args{e->slot(1,0),lit192,V()}));e->slot(0,0)=std::move(t149);}
{V t150=first(call(e->slot(2,14),Args{e->slot(1,0),lit193,V()}));e->slot(0,1)=std::move(t150);}
{V t151=first(call(e->slot(2,14),Args{e->slot(1,0),lit194,V()}));e->slot(0,2)=std::move(t151);}
if(truth(([&](){V t152=([&](){V t153=([&](){V t154=([&](){V t155=([&](){V t156=([&](){V t157=([&](){V t158=([&](){V t159=([&](){V t160=([&](){V t161=([&](){V t162=([&](){V t163=([&](){V t164=ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit195);return !truth(t164)?ne(first(call(e->get("type"),Args{e->slot(0,1)})),lit196):t164;})();return !truth(t163)?eq(e->slot(0,1),lit70):t163;})();return !truth(t162)?ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit197):t162;})();return !truth(t161)?ne(e->slot(0,2),e->slot(0,2)):t161;})();return !truth(t160)?lt(e->slot(0,2),V(0.0)):t160;})();return !truth(t159)?gt(e->slot(0,2),V(9007199254740991.0)):t159;})();return !truth(t158)?ne(first(call(get(e->get("math"),lit198),Args{e->slot(0,2)})),e->slot(0,2)):t158;})();return !truth(t157)?ne(get(e->slot(0,0),lit199),V(1.0)):t157;})();return !truth(t156)?ne(get(e->slot(0,0),lit200),e->slot(0,1)):t156;})();return !truth(t155)?ne(get(e->slot(0,0),lit194),e->slot(0,2)):t155;})();return !truth(t154)?ne(get(e->slot(0,0),lit201),V(true)):t154;})();return !truth(t153)?ne(get(e->slot(0,0),lit202),lit203):t153;})();return !truth(t152)?ne(first(call(e->get("type"),Args{get(e->slot(0,0),lit204)})),lit195):t152;})())){call(e->get("error"),Args{lit205});
}
if(truth(([&](){V t165=([&](){V t166=eq(get(e->slot(2,6),lit206),e->slot(0,1));return truth(t166)?ne(get(e->slot(2,6),lit207),V()):t166;})();return truth(t165)?le(e->slot(0,2),get(e->slot(2,6),lit207)):t165;})())){call(e->get("error"),Args{lit208});
}
{V t167=([&](){V z=table();return z;})();e->slot(0,3)=std::move(t167);}
{double t168=num(V(0.0)),t169=num(V(1.0)),t170=num(V(1.0));for(double t171=t168;(t170>0?t171<=t169:t171>=t169);t171+=t170){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t171);{V t172=get(get(e->slot(1,0),lit204),e->slot(0,0));e->slot(0,1)=std::move(t172);}
if(truth(([&](){V t173=([&](){V t174=ne(first(call(e->get("type"),Args{e->slot(0,1)})),lit197);return !truth(t174)?ne(e->slot(0,1),e->slot(0,1)):t174;})();return !truth(t173)?gt(first(call(get(e->get("math"),lit163),Args{e->slot(0,1)})),mul(get(e->get("math"),lit209),V(0.5))):t173;})())){call(e->get("error"),Args{lit210});
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),e->slot(0,0))};V t175=e->slot(0,1);refs[0].put(std::move(t175));}
}}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit211)};V t176=e->slot(0,3);refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit212)};V t177=lit213;refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit207)};V t178=e->slot(0,2);refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit206)};V t179=e->slot(0,1);refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit94)};V t180=mul(add(get(e->slot(0,3),V(0.0)),get(e->slot(0,3),V(1.0))),V(0.5));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit93)};V t181=divv(mul(get(e->slot(2,6),lit94),V(180.0)),get(e->get("math"),lit209));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit92)};V t182=first(call(e->slot(2,7),Args{first(call(e->slot(2,14),Args{e->slot(1,0),lit214,V(0.0)})),V(0.0)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(2,6),lit102)};V t183=V(0.0);refs[0].put(std::move(t183));}
return Args{};
}
{V t184=first(call(e->slot(1,7),Args{first(call(e->slot(1,14),Args{e->slot(0,0),lit214,V(0.0)})),V(0.0)}));e->slot(0,2)=std::move(t184);}
{V t185=first(call(e->slot(1,11),Args{lit215}));e->slot(0,3)=std::move(t185);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit102)};V t186=first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t186));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,6),lit102)};V t187=V(0.0);refs[0].put(std::move(t187));}
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t188=first(call(e->slot(1,8),Args{add(e->slot(0,2),mul(get(e->slot(1,6),lit102),get(get(e->slot(1,1),lit1),lit31))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit92)};V t189=e->slot(0,2);refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit93)};V t190=mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit6));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit94)};V t191=first(call(get(e->get("math"),lit216),Args{get(e->slot(1,6),lit93)}));refs[0].put(std::move(t191));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t192=first(call(e->slot(1,11),Args{lit217}));e->slot(0,0)=std::move(t192);}
{V t193=first(call(e->slot(1,11),Args{lit218}));e->slot(0,1)=std::move(t193);}
{V t194=first(call(e->slot(1,11),Args{lit219}));e->slot(0,2)=std::move(t194);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit126)};V t195=([&](){V t196=([&](){V t197=ne(e->slot(0,0),V());return !truth(t197)?ne(e->slot(0,1),V()):t197;})();return !truth(t196)?ne(e->slot(0,2),V()):t196;})();refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit105)};V t198=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,0),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit103)};V t199=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,1),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit104)};V t200=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t200));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t201=first(call(e->slot(1,11),Args{lit220}));e->slot(0,0)=std::move(t201);}
{V t202=first(call(e->slot(1,11),Args{lit221}));e->slot(0,1)=std::move(t202);}
{V t203=first(call(e->slot(1,11),Args{lit222}));e->slot(0,2)=std::move(t203);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit125)};V t204=([&](){V t205=([&](){V t206=ne(e->slot(0,0),V());return !truth(t206)?ne(e->slot(0,1),V()):t206;})();return !truth(t205)?ne(e->slot(0,2),V()):t205;})();refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit99)};V t207=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)})),V(0.0),V(1.25)}));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit100)};V t208=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.25)}));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit101)};V t209=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t209));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t210=([&](){V t211=([&](){V t212=([&](){V t213=first(call(e->slot(1,11),Args{concat(lit223,e->slot(0,0))}));return !truth(t213)?first(call(e->slot(1,11),Args{concat(lit224,e->slot(0,0))})):t213;})();return !truth(t212)?first(call(e->slot(1,11),Args{concat(lit225,e->slot(0,0))})):t212;})();return !truth(t211)?first(call(e->slot(1,11),Args{concat(lit226,e->slot(0,0))})):t211;})();e->slot(0,2)=std::move(t210);}
if(truth(eq(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t214=first(call(e->slot(2,11),Args{concat(lit227,e->slot(1,0))}));e->slot(0,0)=std::move(t214);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,2)};V t215=add(get(get(e->slot(2,1),lit1),lit23),first(call(e->slot(2,7),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t215));}
}
}
if(truth(([&](){V t216=eq(e->slot(0,2),V());return truth(t216)?e->slot(0,1):t216;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t217=first(call(e->slot(1,14),Args{e->slot(0,1),lit106,get(get(e->slot(1,1),lit1),lit23)}));refs[0].put(std::move(t217));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit106),e->slot(0,0))};V t218=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit23)})),V(0.0),V(12000.0)}));refs[0].put(std::move(t218));}
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t219=([&](){V t220=([&](){V t221=first(call(e->slot(1,11),Args{concat(lit228,e->slot(0,0))}));return !truth(t221)?first(call(e->slot(1,11),Args{concat(lit229,e->slot(0,0))})):t221;})();return !truth(t220)?first(call(e->slot(1,11),Args{concat(lit230,e->slot(0,0))})):t220;})();e->slot(0,2)=std::move(t219);}
if(truth(([&](){V t222=eq(e->slot(0,2),V());return truth(t222)?e->slot(0,1):t222;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t223=first(call(e->slot(1,14),Args{e->slot(0,1),lit107,V(0.0)}));refs[0].put(std::move(t223));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit107),e->slot(0,0))};V t224=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(-num(V(0.8))),V(0.8)}));refs[0].put(std::move(t224));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t225=([&](){V t226=([&](){V t227=first(call(e->slot(1,11),Args{concat(lit231,e->slot(0,0))}));return !truth(t227)?first(call(e->slot(1,11),Args{concat(lit232,e->slot(0,0))})):t227;})();return !truth(t226)?first(call(e->slot(1,11),Args{concat(lit233,e->slot(0,0))})):t226;})();e->slot(0,1)=std::move(t225);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit124)};V t228=([&](){V t229=get(e->slot(1,6),lit124);return !truth(t229)?ne(e->slot(0,1),V()):t229;})();refs[0].put(std::move(t228));}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t230=mul(mul(V(-num(get(get(e->slot(1,6),lit107),e->slot(0,0)))),get(get(e->slot(1,6),lit106),e->slot(0,0))),V(2.2));refs[0].put(std::move(t230));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit108),e->slot(0,0))};V t231=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)})),V(-num(V(8000.0))),V(8000.0)}));refs[0].put(std::move(t231));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t232=([&](){V t233=([&](){V t234=first(call(e->slot(1,11),Args{concat(lit234,e->slot(0,0))}));return !truth(t234)?first(call(e->slot(1,11),Args{concat(lit235,e->slot(0,0))})):t234;})();return !truth(t233)?first(call(e->slot(1,11),Args{concat(lit236,e->slot(0,0))})):t233;})();e->slot(0,1)=std::move(t232);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit127)};V t235=([&](){V t236=get(e->slot(1,6),lit127);return !truth(t236)?ne(e->slot(0,1),V()):t236;})();refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit109),e->slot(0,0))};V t237=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t237));}
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t238=([&](){V t239=([&](){V t240=first(call(e->slot(1,11),Args{concat(lit237,e->slot(0,0))}));return !truth(t240)?first(call(e->slot(1,11),Args{concat(lit238,e->slot(0,0))})):t240;})();return !truth(t239)?first(call(e->slot(1,11),Args{concat(lit239,e->slot(0,0))})):t239;})();e->slot(0,1)=std::move(t238);}
{V t241=([&](){V t242=([&](){V t243=first(call(e->slot(1,11),Args{concat(lit240,e->slot(0,0))}));return !truth(t243)?first(call(e->slot(1,11),Args{concat(lit241,e->slot(0,0))})):t243;})();return !truth(t242)?first(call(e->slot(1,11),Args{concat(lit242,e->slot(0,0))})):t242;})();e->slot(0,2)=std::move(t241);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit123)};V t244=([&](){V t245=([&](){V t246=get(e->slot(1,6),lit123);return !truth(t246)?ne(e->slot(0,1),V()):t246;})();return !truth(t245)?ne(e->slot(0,2),V()):t245;})();refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit110),e->slot(0,0))};V t247=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)})),V(-num(V(0.35))),V(0.35)}));refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit111),e->slot(0,0))};V t248=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(-num(V(0.25))),V(0.25)}));refs[0].put(std::move(t248));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t249=num(V(0.0)),t250=num(V(3.0)),t251=num(V(1.0));for(double t252=t249;(t251>0?t252<=t250:t252>=t250);t252+=t251){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t252);{V t253=V();e->slot(0,1)=std::move(t253);}
if(truth(([&](){V t254=e->slot(1,0);return truth(t254)?get(e->slot(1,0),lit243):t254;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t255=get(get(e->slot(1,0),lit243),e->slot(0,0));refs[0].put(std::move(t255));}
}
call(e->slot(2,35),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(2,36),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(2,37),Args{e->slot(0,0)});
call(e->slot(2,38),Args{e->slot(0,0)});
call(e->slot(2,39),Args{e->slot(0,0)});
}}
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t256=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t256);}
if(truth(eq(get(e->slot(0,1),lit2),lit190))){return Args{};
}
if(truth(V(!truth(get(e->slot(0,1),lit49))))){return Args{};
}
if(truth(eq(get(e->slot(1,6),lit71),lit186))){return Args{};
}
{V t257=first(call(e->slot(1,31),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t257);}
if(truth(([&](){V t258=lt(e->slot(0,2),get(e->slot(0,1),lit52));return !truth(t258)?gt(e->slot(0,2),get(e->slot(0,1),lit53)):t258;})())){return Args{};
}
{V t259=first(call(get(e->get("math"),lit163),Args{([&](){V t260=get(e->slot(1,6),lit93);return !truth(t260)?V(0.0):t260;})()}));e->slot(0,3)=std::move(t259);}
if(truth(([&](){V t261=lt(e->slot(0,3),get(e->slot(0,1),lit50));return !truth(t261)?gt(e->slot(0,3),get(e->slot(0,1),lit51)):t261;})())){return Args{};
}
{V t262=first(call(get(e->get("math"),lit244),call(get(e->get("math"),lit163),Args{([&](){V t263=get(e->slot(1,6),lit94);return !truth(t263)?V(0.0):t263;})()})));e->slot(0,4)=std::move(t262);}
if(truth(lt(first(call(get(e->get("math"),lit163),Args{e->slot(0,4)})),V(0.001)))){return Args{};
}
{V t264=divv(mul(first(call(e->slot(1,7),Args{get(get(e->slot(1,6),lit110),e->slot(1,2)),V(0.0)})),V(180.0)),get(e->get("math"),lit209));e->slot(0,5)=std::move(t264);}
{V t265=divv(mul(first(call(e->slot(1,7),Args{get(get(e->slot(1,6),lit110),e->slot(1,3)),V(0.0)})),V(180.0)),get(e->get("math"),lit209));e->slot(0,6)=std::move(t265);}
{V t266=first(call(get(e->get("math"),lit163),Args{sub(e->slot(0,5),e->slot(0,6))}));e->slot(0,7)=std::move(t266);}
if(truth(lt(e->slot(0,7),get(e->slot(0,1),lit54)))){return Args{};
}
{V t267=first(call(e->slot(1,8),Args{divv(e->slot(0,7),mul(V(2.0),e->slot(0,4))),get(e->slot(0,1),lit56),get(e->slot(0,1),lit57)}));e->slot(0,8)=std::move(t267);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit91)};V t268=e->slot(0,8);refs[0].put(std::move(t268));}
if(truth(V(!truth(get(e->slot(1,6),lit89))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit88)};V t269=e->slot(0,8);refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit89)};V t270=V(true);refs[0].put(std::move(t270));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,6),lit88)};V t271=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit88),e->slot(0,8),get(e->slot(0,1),lit55),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t271));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit90)};V t272=add(([&](){V t273=get(e->slot(1,6),lit90);return !truth(t273)?V(0.0):t273;})(),V(1.0));refs[0].put(std::move(t272));}
if(truth(get(e->slot(0,1),lit58))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t274=lit245;refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit67)};V t275=lit246;refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t276=lit247;refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit1),lit4)};V t277=get(e->slot(1,6),lit88);refs[0].put(std::move(t277));}
}
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(([&](){V t278=eq(e->slot(0,0),e->slot(1,3));return !truth(t278)?eq(e->slot(0,0),e->slot(1,5)):t278;})())){return Args{V(1.0)};
}
return Args{V(-num(V(1.0)))};
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t279=eq(e->slot(0,0),e->slot(1,2));return !truth(t279)?eq(e->slot(0,0),e->slot(1,3)):t279;})()};
return Args{};});
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);{V t280=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t280);}
{V t281=first(call(e->slot(1,42),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t281);}
if(truth(V(!truth(first(call(e->slot(1,43),Args{e->slot(0,0)})))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit112),e->slot(0,0))};V t282=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit112),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit113),e->slot(0,0))};V t283=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit113),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit115),e->slot(0,0))};V t284=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit115),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit114),e->slot(0,0))};V t285=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit114),e->slot(0,0)),divv(mul(get(get(e->slot(1,6),lit110),e->slot(0,0)),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit116),e->slot(0,0))};V t286=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit116),e->slot(0,0)),divv(mul(get(get(e->slot(1,6),lit111),e->slot(0,0)),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit118),e->slot(0,0))};V t287=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit118),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t287));}
return Args{};
}
{V t288=([&](){V t289=get(e->slot(1,6),lit94);return !truth(t289)?V(0.0):t289;})();e->slot(0,3)=std::move(t288);}
if(truth(eq(get(e->slot(0,1),lit2),lit190))){{std::array<Ref,1> refs{Ref(e,0,3)};V t290=get(get(e->slot(1,6),lit211),e->slot(0,0));refs[0].put(std::move(t290));}
}
{V t291=mul(first(call(get(e->get("math"),lit244),Args{get(e->slot(1,6),lit96)})),first(call(get(e->get("math"),lit244),Args{e->slot(0,3)})));e->slot(0,4)=std::move(t291);}
{V t292=mul(sub(mul(first(call(get(e->get("math"),lit244),Args{get(e->slot(1,6),lit98)})),first(call(get(e->get("math"),lit248),Args{e->slot(0,3)}))),first(call(get(e->get("math"),lit244),Args{get(e->slot(1,6),lit98)}))),V(-num(e->slot(0,2))));e->slot(0,5)=std::move(t292);}
{V t293=mul(first(call(get(e->get("math"),lit249),call(e->slot(1,8),Args{e->slot(0,4),V(-num(V(1.0))),V(1.0)}))),get(e->slot(0,1),lit24));e->slot(0,6)=std::move(t293);}
{V t294=mul(first(call(get(e->get("math"),lit249),call(e->slot(1,8),Args{e->slot(0,5),V(-num(V(1.0))),V(1.0)}))),get(e->slot(0,1),lit25));e->slot(0,7)=std::move(t294);}
{V t295=mul(mul(e->slot(0,3),add(mul(first(call(get(e->get("math"),lit244),Args{get(e->slot(1,6),lit96)})),get(e->slot(0,1),lit26)),mul(get(e->slot(1,6),lit81),V(0.08)))),add(V(0.65),mul(V(0.35),get(e->slot(1,6),lit100))));e->slot(0,8)=std::move(t295);}
{V t296=mul(get(get(e->slot(1,6),lit110),e->slot(0,0)),get(e->slot(0,1),lit30));e->slot(0,9)=std::move(t296);}
{V t297=mul(get(get(e->slot(1,6),lit111),e->slot(0,0)),get(e->slot(0,1),lit30));e->slot(0,10)=std::move(t297);}
{V t298=add(add(e->slot(0,6),e->slot(0,7)),e->slot(0,9));e->slot(0,11)=std::move(t298);}
{V t299=add(e->slot(0,8),e->slot(0,10));e->slot(0,12)=std::move(t299);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit112),e->slot(0,0))};V t300=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit112),e->slot(0,0)),divv(mul(e->slot(0,6),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit113),e->slot(0,0))};V t301=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit113),e->slot(0,0)),divv(mul(e->slot(0,7),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit114),e->slot(0,0))};V t302=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit114),e->slot(0,0)),divv(mul(e->slot(0,11),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit115),e->slot(0,0))};V t303=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit115),e->slot(0,0)),divv(mul(e->slot(0,8),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit116),e->slot(0,0))};V t304=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit116),e->slot(0,0)),divv(mul(e->slot(0,12),V(180.0)),get(e->get("math"),lit209)),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t304));}
{V t305=mul(mul(mul(first(call(get(e->get("math"),lit244),Args{e->slot(0,3)})),get(e->slot(0,1),lit21)),e->slot(0,2)),get(e->slot(0,1),lit27));e->slot(0,13)=std::move(t305);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit118),e->slot(0,0))};V t306=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit118),e->slot(0,0)),e->slot(0,13),get(e->slot(0,1),lit44),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t306));}
return Args{};});
e->slot(0,45)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t307=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t307);}
if(truth(V(!truth(first(call(e->slot(1,43),Args{e->slot(0,0)})))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit19),e->slot(0,0))};V t308=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit19),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t308));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit117),e->slot(0,0))};V t309=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit117),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit119),e->slot(0,0))};V t310=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit119),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit120),e->slot(0,0))};V t311=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit120),e->slot(0,0)),V(0.0),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t311));}
return Args{};
}
{V t312=first(call(e->slot(1,8),Args{divv(get(get(e->slot(1,6),lit106),e->slot(0,0)),first(call(get(e->get("math"),lit138),Args{get(e->slot(0,1),lit22),V(1.0)}))),V(0.0),V(1.35)}));e->slot(0,2)=std::move(t312);}
{V t313=first(call(get(e->get("math"),lit163),Args{([&](){V t314=get(get(e->slot(1,6),lit107),e->slot(0,0));return !truth(t314)?V(0.0):t314;})()}));e->slot(0,3)=std::move(t313);}
{V t315=first(call(e->slot(1,8),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit138),Args{get(e->slot(0,1),lit40),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t315);}
{V t316=mul(mul(mul(get(e->slot(0,1),lit20),e->slot(0,2)),sub(V(1.0),mul(e->slot(0,4),get(e->slot(0,1),lit41)))),add(V(0.7),mul(V(0.3),get(e->slot(1,6),lit99))));e->slot(0,5)=std::move(t316);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t317=first(call(e->slot(1,8),Args{e->slot(0,5),get(e->slot(0,1),lit42),get(e->slot(0,1),lit43)}));refs[0].put(std::move(t317));}
{V t318=mul(get(e->slot(0,1),lit19),add(V(0.85),mul(V(0.15),get(e->slot(1,6),lit99))));e->slot(0,6)=std::move(t318);}
{V t319=mul(mul(([&](){V t320=get(get(e->slot(1,6),lit108),e->slot(0,0));return !truth(t320)?V(0.0):t320;})(),add(e->slot(0,6),e->slot(0,5))),get(e->slot(0,1),lit29));e->slot(0,7)=std::move(t319);}
{V t321=first(call(e->slot(1,8),Args{mul(e->slot(0,7),get(e->slot(0,1),lit28)),V(-num(V(1.5))),V(1.5)}));e->slot(0,8)=std::move(t321);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit19),e->slot(0,0))};V t322=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit19),e->slot(0,0)),e->slot(0,6),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit117),e->slot(0,0))};V t323=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit117),e->slot(0,0)),e->slot(0,5),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t323));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit119),e->slot(0,0))};V t324=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit119),e->slot(0,0)),e->slot(0,7),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t324));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit120),e->slot(0,0))};V t325=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit120),e->slot(0,0)),e->slot(0,8),get(e->slot(0,1),lit46),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t325));}
return Args{};});
e->slot(0,46)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t326=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t326);}
if(truth(V(!truth(first(call(e->slot(1,43),Args{e->slot(0,0)})))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit122),e->slot(0,0))};V t327=V(1.0);refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit121),e->slot(0,0))};V t328=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit121),e->slot(0,0)),V(1.0),get(e->slot(0,1),lit45),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t328));}
return Args{};
}
{V t329=first(call(get(e->get("math"),lit163),Args{sub(([&](){V t330=get(get(e->slot(1,6),lit114),e->slot(0,0));return !truth(t330)?V(0.0):t330;})(),get(e->slot(0,1),lit32))}));e->slot(0,2)=std::move(t329);}
{V t331=first(call(get(e->get("math"),lit163),Args{([&](){V t332=get(get(e->slot(1,6),lit116),e->slot(0,0));return !truth(t332)?V(0.0):t332;})()}));e->slot(0,3)=std::move(t331);}
{V t333=first(call(get(e->get("math"),lit163),Args{([&](){V t334=get(get(e->slot(1,6),lit107),e->slot(0,0));return !truth(t334)?V(0.0):t334;})()}));e->slot(0,4)=std::move(t333);}
{V t335=([&](){V t336=get(get(e->slot(1,6),lit117),e->slot(0,0));return !truth(t336)?get(e->slot(0,1),lit20):t336;})();e->slot(0,5)=std::move(t335);}
{V t337=mul(first(call(get(e->get("math"),lit163),Args{sub(e->slot(0,5),get(e->slot(0,1),lit20))})),get(e->slot(0,1),lit35));e->slot(0,6)=std::move(t337);}
{V t338=first(call(e->slot(1,8),Args{([&](){V t339=get(get(e->slot(1,6),lit109),e->slot(0,0));return !truth(t339)?V(1.0):t339;})(),V(0.0),V(1.2)}));e->slot(0,7)=std::move(t338);}
{V t340=sub(sub(sub(sub(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit33))),mul(e->slot(0,3),get(e->slot(0,1),lit34))),mul(e->slot(0,4),get(e->slot(0,1),lit36))),e->slot(0,6));e->slot(0,8)=std::move(t340);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t341=mul(e->slot(0,8),add(V(0.88),mul(V(0.12),get(e->slot(1,6),lit99))));refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e,0,8)};V t342=mul(e->slot(0,8),sub(V(1.0),mul(sub(get(e->slot(1,6),lit103),V(1.0)),V(0.03))));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e,0,8)};V t343=mul(e->slot(0,8),sub(V(1.0),mul(sub(V(1.0),first(call(e->slot(1,8),Args{e->slot(0,7),V(0.0),V(1.0)}))),get(e->slot(0,1),lit37))));refs[0].put(std::move(t343));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit122),e->slot(0,0))};V t344=first(call(e->slot(1,8),Args{e->slot(0,8),get(e->slot(0,1),lit38),get(e->slot(0,1),lit39)}));refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit121),e->slot(0,0))};V t345=first(call(e->slot(1,15),Args{get(get(e->slot(1,6),lit121),e->slot(0,0)),get(get(e->slot(1,6),lit122),e->slot(0,0)),get(e->slot(0,1),lit45),get(e->slot(1,6),lit130)}));refs[0].put(std::move(t345));}
return Args{};});
e->slot(0,47)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(eq(get(e->slot(1,6),lit71),lit186))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit95)};V t346=first(call(e->slot(1,7),Args{get(e->slot(1,6),lit77),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit97)};V t347=first(call(e->slot(1,7),Args{get(e->slot(1,6),lit78),get(get(e->slot(1,1),lit1),lit5)}));refs[0].put(std::move(t347));}
}else if(truth(([&](){V t348=get(e->slot(1,6),lit89);return truth(t348)?get(get(e->slot(1,1),lit1),lit58):t348;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit95)};V t349=first(call(e->slot(1,7),Args{get(e->slot(1,6),lit88),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit97)};V t350=get(get(e->slot(1,1),lit1),lit5);refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t351=lit245;refs[0].put(std::move(t351));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,6),lit95)};V t352=get(get(e->slot(1,1),lit1),lit4);refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit97)};V t353=get(get(e->slot(1,1),lit1),lit5);refs[0].put(std::move(t353));}
if(truth(([&](){V t354=ne(get(e->slot(1,6),lit71),lit186);return truth(t354)?ne(get(e->slot(1,6),lit71),lit245):t354;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t355=lit173;refs[0].put(std::move(t355));}
}
}

{std::array<Ref,1> refs{Ref(e->slot(1,6),lit96)};V t356=first(call(get(e->get("math"),lit216),Args{get(e->slot(1,6),lit95)}));refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit98)};V t357=first(call(get(e->get("math"),lit216),Args{get(e->slot(1,6),lit97)}));refs[0].put(std::move(t357));}
{double t358=num(V(0.0)),t359=num(V(3.0)),t360=num(V(1.0));for(double t361=t358;(t360>0?t361<=t359:t361>=t359);t361+=t360){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t361);call(e->slot(2,44),Args{e->slot(0,0)});
call(e->slot(2,45),Args{e->slot(0,0)});
call(e->slot(2,46),Args{e->slot(0,0)});
}}
return Args{};});
e->slot(0,48)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,13),Args{concat(lit250,e->slot(0,0)),([&](){V t362=get(get(e->slot(1,6),lit121),e->slot(0,0));return !truth(t362)?V(1.0):t362;})()});
call(e->slot(1,13),Args{concat(lit251,e->slot(0,0)),([&](){V t363=get(get(e->slot(1,6),lit114),e->slot(0,0));return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,13),Args{concat(lit252,e->slot(0,0)),([&](){V t364=get(get(e->slot(1,6),lit116),e->slot(0,0));return !truth(t364)?V(0.0):t364;})()});
call(e->slot(1,13),Args{concat(lit253,e->slot(0,0)),([&](){V t365=get(get(e->slot(1,6),lit112),e->slot(0,0));return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,13),Args{concat(lit254,e->slot(0,0)),([&](){V t366=get(get(e->slot(1,6),lit113),e->slot(0,0));return !truth(t366)?V(0.0):t366;})()});
call(e->slot(1,13),Args{concat(lit255,e->slot(0,0)),([&](){V t367=get(get(e->slot(1,6),lit114),e->slot(0,0));return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,13),Args{concat(lit256,e->slot(0,0)),([&](){V t368=get(get(e->slot(1,6),lit116),e->slot(0,0));return !truth(t368)?V(0.0):t368;})()});
call(e->slot(1,13),Args{concat(lit257,e->slot(0,0)),([&](){V t369=get(get(e->slot(1,6),lit117),e->slot(0,0));return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,13),Args{concat(lit258,e->slot(0,0)),([&](){V t370=get(get(e->slot(1,6),lit19),e->slot(0,0));return !truth(t370)?V(0.0):t370;})()});
call(e->slot(1,13),Args{concat(lit259,e->slot(0,0)),([&](){V t371=get(get(e->slot(1,6),lit119),e->slot(0,0));return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,13),Args{concat(lit260,e->slot(0,0)),([&](){V t372=get(get(e->slot(1,6),lit120),e->slot(0,0));return !truth(t372)?V(0.0):t372;})()});
call(e->slot(1,13),Args{concat(lit261,e->slot(0,0)),([&](){V t373=get(get(e->slot(1,6),lit118),e->slot(0,0));return !truth(t373)?V(0.0):t373;})()});
if(truth(V(!truth(get(e->slot(1,6),lit129))))){return Args{};
}
call(e->slot(1,13),Args{concat(lit262,e->slot(0,0)),([&](){V t374=get(get(e->slot(1,6),lit108),e->slot(0,0));return !truth(t374)?V(0.0):t374;})()});
call(e->slot(1,13),Args{concat(lit263,e->slot(0,0)),([&](){V t375=get(get(e->slot(1,6),lit106),e->slot(0,0));return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,13),Args{concat(lit264,e->slot(0,0)),([&](){V t376=get(get(e->slot(1,6),lit107),e->slot(0,0));return !truth(t376)?V(0.0):t376;})()});
call(e->slot(1,13),Args{concat(lit265,e->slot(0,0)),([&](){V t377=get(get(e->slot(1,6),lit109),e->slot(0,0));return !truth(t377)?V(1.0):t377;})()});
call(e->slot(1,13),Args{concat(lit266,e->slot(0,0)),([&](){V t378=get(get(e->slot(1,6),lit122),e->slot(0,0));return !truth(t378)?V(1.0):t378;})()});
return Args{};});
e->slot(0,49)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,13),Args{lit267,([&](){V t379=get(e->slot(1,6),lit61);return !truth(t379)?lit75:t379;})()});
call(e->slot(1,13),Args{lit268,([&](){V t380=get(e->slot(1,6),lit63);return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,13),Args{lit269,([&](){V t381=([&](){V t382=get(e->slot(1,6),lit64);return truth(t382)?V(1.0):t382;})();return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,13),Args{lit270,([&](){V t383=get(e->slot(1,6),lit93);return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,13),Args{lit271,([&](){V t384=get(e->slot(1,6),lit95);return !truth(t384)?V(0.0):t384;})()});
call(e->slot(1,13),Args{lit272,([&](){V t385=get(e->slot(1,6),lit97);return !truth(t385)?V(0.0):t385;})()});
call(e->slot(1,13),Args{lit273,([&](){V t386=get(e->slot(1,6),lit71);return !truth(t386)?lit72:t386;})()});
call(e->slot(1,13),Args{lit274,([&](){V t387=get(e->slot(1,6),lit73);return !truth(t387)?lit72:t387;})()});
call(e->slot(1,13),Args{lit275,([&](){V t388=get(e->slot(1,6),lit67);return !truth(t388)?lit75:t388;})()});
call(e->slot(1,13),Args{lit276,([&](){V t389=get(e->slot(1,6),lit69);return !truth(t389)?lit70:t389;})()});
call(e->slot(1,13),Args{lit277,([&](){V t390=get(e->slot(1,6),lit74);return !truth(t390)?lit75:t390;})()});
call(e->slot(1,13),Args{lit278,([&](){V t391=get(e->slot(1,6),lit76);return !truth(t391)?lit75:t391;})()});
call(e->slot(1,13),Args{lit279,([&](){V t392=get(e->slot(1,6),lit77);return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,13),Args{lit280,([&](){V t393=get(e->slot(1,6),lit78);return !truth(t393)?V(0.0):t393;})()});
call(e->slot(1,13),Args{lit281,([&](){V t394=get(e->slot(1,6),lit83);return !truth(t394)?V(0.0):t394;})()});
call(e->slot(1,13),Args{lit282,([&](){V t395=get(e->slot(1,6),lit84);return !truth(t395)?V(0.0):t395;})()});
call(e->slot(1,13),Args{lit283,([&](){V t396=get(e->slot(1,6),lit81);return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,13),Args{lit284,([&](){V t397=get(e->slot(1,6),lit85);return !truth(t397)?V(0.0):t397;})()});
call(e->slot(1,13),Args{lit285,([&](){V t398=get(e->slot(1,6),lit86);return !truth(t398)?V(0.0):t398;})()});
call(e->slot(1,13),Args{lit286,([&](){V t399=get(e->slot(1,6),lit87);return !truth(t399)?V(0.0):t399;})()});
call(e->slot(1,13),Args{lit287,([&](){V t400=get(e->slot(1,6),lit99);return !truth(t400)?V(0.0):t400;})()});
call(e->slot(1,13),Args{lit288,([&](){V t401=get(e->slot(1,6),lit100);return !truth(t401)?V(0.0):t401;})()});
call(e->slot(1,13),Args{lit289,([&](){V t402=get(e->slot(1,6),lit101);return !truth(t402)?V(0.0):t402;})()});
call(e->slot(1,13),Args{lit290,([&](){V t403=([&](){V t404=get(e->slot(1,6),lit123);return truth(t404)?V(1.0):t404;})();return !truth(t403)?V(0.0):t403;})()});
call(e->slot(1,13),Args{lit291,([&](){V t405=([&](){V t406=get(e->slot(1,6),lit124);return truth(t406)?V(1.0):t406;})();return !truth(t405)?V(0.0):t405;})()});
call(e->slot(1,13),Args{lit292,([&](){V t407=([&](){V t408=get(e->slot(1,6),lit125);return truth(t408)?V(1.0):t408;})();return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,13),Args{lit293,([&](){V t409=([&](){V t410=get(e->slot(1,6),lit126);return truth(t410)?V(1.0):t410;})();return !truth(t409)?V(0.0):t409;})()});
call(e->slot(1,13),Args{lit294,([&](){V t411=([&](){V t412=get(e->slot(1,6),lit127);return truth(t412)?V(1.0):t412;})();return !truth(t411)?V(0.0):t411;})()});
if(truth(get(e->slot(1,6),lit129))){call(e->slot(1,13),Args{lit295,([&](){V t413=get(e->slot(1,6),lit88);return !truth(t413)?V(0.0):t413;})()});
call(e->slot(1,13),Args{lit296,([&](){V t414=get(e->slot(1,6),lit90);return !truth(t414)?V(0.0):t414;})()});
}
{double t415=num(V(0.0)),t416=num(V(3.0)),t417=num(V(1.0));for(double t418=t415;(t417>0?t418<=t416:t418>=t416);t418+=t417){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t418);call(e->slot(2,48),Args{e->slot(0,0)});
}}
return Args{};});
Ref(e->slot(0,1),lit297).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,6),lit61)};V t419=lit62;refs[0].put(std::move(t419));}
call(e->slot(1,49),Args{});
return Args{};}));
Ref(e->slot(0,1),lit298).put(native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t420=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit47),get(get(e->slot(1,1),lit1),lit48)}));refs[0].put(std::move(t420));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit130)};V t421=e->slot(0,0);refs[0].put(std::move(t421));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit63)};V t422=add(([&](){V t423=get(e->slot(1,6),lit63);return !truth(t423)?V(0.0):t423;})(),V(1.0));refs[0].put(std::move(t422));}
call(e->slot(1,16),Args{e->slot(0,0)});
if(truth(([&](){V t424=([&](){V t425=V(!truth(e->slot(0,1)));return truth(t425)?e->get("ac"):t425;})();return truth(t424)?get(e->get("ac"),lit299):t424;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t426=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit299),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t426,0);e->slot(0,1)=arg(t426,1);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,1,1)};V t427=e->slot(0,1);refs[0].put(std::move(t427));}
}
}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit61)};V t428=lit300;refs[0].put(std::move(t428));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit64)};V t429=V(false);refs[0].put(std::move(t429));}
call(e->slot(1,49),Args{});
return Args{};
}
if(truth(V(!truth(get(e->slot(0,1),lit243))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit61)};V t430=lit301;refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit64)};V t431=V(false);refs[0].put(std::move(t431));}
call(e->slot(1,49),Args{});
return Args{};
}
if(truth(([&](){V t432=get(get(e->slot(1,1),lit1),lit10);return !truth(t432)?([&](){V t433=V(!truth(get(e->slot(1,6),lit65)));return truth(t433)?V(!truth(get(e->slot(1,6),lit66))):t433;})():t432;})())){call(e->slot(1,30),Args{e->slot(0,1)});
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit61)};V t434=lit302;refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit64)};V t435=V(true);refs[0].put(std::move(t435));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit123)};V t436=V(false);refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit124)};V t437=V(false);refs[0].put(std::move(t437));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit125)};V t438=V(false);refs[0].put(std::move(t438));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit126)};V t439=V(false);refs[0].put(std::move(t439));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit127)};V t440=V(false);refs[0].put(std::move(t440));}
call(e->slot(1,32),Args{e->slot(0,1)});
call(e->slot(1,33),Args{});
call(e->slot(1,34),Args{});
call(e->slot(1,40),Args{e->slot(0,1)});
call(e->slot(1,41),Args{e->slot(0,1)});
call(e->slot(1,47),Args{});
call(e->slot(1,49),Args{});
return Args{};}));
Ref(e->slot(0,1),lit303).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t441=get(get(e->slot(1,6),lit121),e->slot(0,0));return !truth(t441)?V(1.0):t441;})()};
return Args{};}));
Ref(e->slot(0,1),lit304).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t442=get(get(e->slot(1,6),lit114),e->slot(0,0));return !truth(t442)?V(0.0):t442;})()};
return Args{};}));
Ref(e->slot(0,1),lit305).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t443=get(get(e->slot(1,6),lit116),e->slot(0,0));return !truth(t443)?V(0.0):t443;})()};
return Args{};}));
Ref(e->slot(0,1),lit306).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t444=get(get(e->slot(1,6),lit120),e->slot(0,0));return !truth(t444)?V(0.0):t444;})()};
return Args{};}));
Ref(e->slot(0,1),lit307).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t445=get(get(e->slot(1,6),lit117),e->slot(0,0));return !truth(t445)?V(0.0):t445;})()};
return Args{};}));
Ref(e->slot(0,1),lit308).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t446=([&](){V t447=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t447)?V(0.0):t447;})();e->slot(0,0)=std::move(t446);}
return call(get(e->get("string"),lit309),Args{lit310,e->slot(0,0),([&](){V t448=get(get(e->slot(2,6),lit121),e->slot(0,0));return !truth(t448)?V(1.0):t448;})(),([&](){V t449=get(get(e->slot(2,6),lit114),e->slot(0,0));return !truth(t449)?V(0.0):t449;})(),([&](){V t450=get(get(e->slot(2,6),lit116),e->slot(0,0));return !truth(t450)?V(0.0):t450;})(),([&](){V t451=get(get(e->slot(2,6),lit117),e->slot(0,0));return !truth(t451)?V(0.0):t451;})(),([&](){V t452=get(get(e->slot(2,6),lit19),e->slot(0,0));return !truth(t452)?V(0.0):t452;})(),([&](){V t453=get(get(e->slot(2,6),lit119),e->slot(0,0));return !truth(t453)?V(0.0):t453;})(),([&](){V t454=get(get(e->slot(2,6),lit120),e->slot(0,0));return !truth(t454)?V(0.0):t454;})(),([&](){V t455=get(get(e->slot(2,6),lit118),e->slot(0,0));return !truth(t455)?V(0.0):t455;})(),([&](){V t456=get(get(e->slot(2,6),lit108),e->slot(0,0));return !truth(t456)?V(0.0):t456;})()});
}
return call(get(e->get("string"),lit309),Args{lit311,first(call(e->get("tostring"),Args{get(e->slot(1,6),lit61)})),([&](){V t457=get(e->slot(1,6),lit63);return !truth(t457)?V(0.0):t457;})(),([&](){V t458=([&](){V t459=get(e->slot(1,6),lit64);return truth(t459)?lit185:t459;})();return !truth(t458)?lit312:t458;})(),([&](){V t460=get(e->slot(1,6),lit93);return !truth(t460)?V(0.0):t460;})(),([&](){V t461=get(e->slot(1,6),lit95);return !truth(t461)?V(0.0):t461;})(),([&](){V t462=get(e->slot(1,6),lit97);return !truth(t462)?V(0.0):t462;})(),first(call(e->get("tostring"),Args{([&](){V t463=get(e->slot(1,6),lit74);return !truth(t463)?lit75:t463;})()})),first(call(e->get("tostring"),Args{([&](){V t464=get(e->slot(1,6),lit67);return !truth(t464)?lit75:t464;})()})),first(call(e->get("tostring"),Args{([&](){V t465=get(e->slot(1,6),lit71);return !truth(t465)?lit72:t465;})()})),first(call(e->get("tostring"),Args{([&](){V t466=get(e->slot(1,6),lit73);return !truth(t466)?lit72:t466;})()})),([&](){V t467=get(e->slot(1,6),lit99);return !truth(t467)?V(0.0):t467;})(),([&](){V t468=get(e->slot(1,6),lit100);return !truth(t468)?V(0.0):t468;})(),([&](){V t469=([&](){V t470=get(e->slot(1,6),lit123);return truth(t470)?lit185:t470;})();return !truth(t469)?lit312:t469;})(),([&](){V t471=([&](){V t472=get(e->slot(1,6),lit124);return truth(t472)?lit185:t472;})();return !truth(t471)?lit312:t471;})(),([&](){V t473=([&](){V t474=get(e->slot(1,6),lit125);return truth(t474)?lit185:t474;})();return !truth(t473)?lit312:t473;})(),([&](){V t475=([&](){V t476=get(e->slot(1,6),lit126);return truth(t476)?lit185:t476;})();return !truth(t475)?lit312:t475;})(),([&](){V t477=([&](){V t478=get(e->slot(1,6),lit127);return truth(t478)?lit185:t478;})();return !truth(t477)?lit312:t477;})(),([&](){V t479=get(get(e->slot(1,6),lit121),V(0.0));return !truth(t479)?V(1.0):t479;})(),([&](){V t480=get(get(e->slot(1,6),lit121),V(1.0));return !truth(t480)?V(1.0):t480;})(),([&](){V t481=get(get(e->slot(1,6),lit121),V(2.0));return !truth(t481)?V(1.0):t481;})(),([&](){V t482=get(get(e->slot(1,6),lit121),V(3.0));return !truth(t482)?V(1.0):t482;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

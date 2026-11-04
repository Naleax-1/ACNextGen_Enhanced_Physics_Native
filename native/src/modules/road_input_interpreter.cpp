// Generated native C++ from pinned road_input_interpreter.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("QUIET");
static const V lit2("SMOOTH_INPUT");
static const V lit3("IMPACT");
static const V lit4("KERB");
static const V lit5("ROAD_NOISE");
static const V lit6("LANDING");
static const V lit7("BOTTOMING");
static const V lit8("HOP_RISK");
static const V lit9("UNLOADED");
static const V lit10("PATH_LOSS");
static const V lit11("SURFACE_LIMIT");
static const V lit12("FL");
static const V lit13("FR");
static const V lit14("RL");
static const V lit15("RR");
static const V lit16("params");
static const V lit17("loadRef");
static const V lit18("loadMin");
static const V lit19("speedMinKmh");
static const V lit20("minDt");
static const V lit21("maxDt");
static const V lit22("inputTau");
static const V lit23("eventTau");
static const V lit24("decayTau");
static const V lit25("loadRateTau");
static const V lit26("textureTauRise");
static const V lit27("textureTauFall");
static const V lit28("shockTauRise");
static const V lit29("shockTauFall");
static const V lit30("pathTauRise");
static const V lit31("pathTauFall");
static const V lit32("missingWheelTau");
static const V lit33("noCarTau");
static const V lit34("smallInputVelocity");
static const V lit35("roadNoiseFull");
static const V lit36("impactLoadRateWarn");
static const V lit37("impactLoadRateFull");
static const V lit38("impactDamperWarn");
static const V lit39("impactDamperFull");
static const V lit40("impactAccelWarn");
static const V lit41("impactAccelFull");
static const V lit42("unloadQualityThreshold");
static const V lit43("unloadLoadFactor");
static const V lit44("landingLoadRateWarn");
static const V lit45("landingLoadRateFull");
static const V lit46("kerbNoiseThreshold");
static const V lit47("kerbImpactThreshold");
static const V lit48("kerbSpeedMinKmh");
static const V lit49("bottomLoadFactor");
static const V lit50("bottomDamperThreshold");
static const V lit51("hopLoadOscThreshold");
static const V lit52("pathLossThreshold");
static const V lit53("surfaceLimitThreshold");
static const V lit54("damperImpactWeight");
static const V lit55("verticalPulseImpactWeight");
static const V lit56("loadRateImpactWeight");
static const V lit57("bodyInputImpactWeight");
static const V lit58("contactLossImpactWeight");
static const V lit59("noiseDamperWeight");
static const V lit60("noiseBodyWeight");
static const V lit61("noiseLoadOscWeight");
static const V lit62("noiseRoadMemoryWeight");
static const V lit63("pathLossWeight");
static const V lit64("forceLeakWeight");
static const V lit65("verticalFlowWeight");
static const V lit66("integrityLossWeight");
static const V lit67("carcassSupportWeight");
static const V lit68("contactTrustWeight");
static const V lit69("tireDeliveryWeight");
static const V lit70("impactSensorWeight");
static const V lit71("roadBodyWeight");
static const V lit72("loadPathHintWeight");
static const V lit73("complianceHintWeight");
static const V lit74("maxValue");
static const V lit75("debugStoreInterval");
static const V lit76("load");
static const V lit77("prevLoad");
static const V lit78("loadRate");
static const V lit79("loadOsc");
static const V lit80("contactQuality");
static const V lit81("contactTrust");
static const V lit82("contactLoss");
static const V lit83("contactLimit");
static const V lit84("damperVelocity");
static const V lit85("damperImpact");
static const V lit86("damperReversal");
static const V lit87("damperVertical");
static const V lit88("damperHysteretic");
static const V lit89("verticalPulse");
static const V lit90("damperHeat");
static const V lit91("roadMemory");
static const V lit92("suspensionForce");
static const V lit93("hopEnergy");
static const V lit94("hopPulse");
static const V lit95("loadPathLoss");
static const V lit96("loadPathDelay");
static const V lit97("loadPathContact");
static const V lit98("loadPathIntegrity");
static const V lit99("tireDelivery");
static const V lit100("verticalFlow");
static const V lit101("forceLeak");
static const V lit102("bodyAbsorb");
static const V lit103("pathCompression");
static const V lit104("loadPathHint");
static const V lit105("complianceForceLeak");
static const V lit106("complianceLoadLoss");
static const V lit107("bodyFlex");
static const V lit108("subframeTwist");
static const V lit109("rearAxleWindup");
static const V lit110("carcassSupport");
static const V lit111("carcassGripGate");
static const V lit112("carcassVerticalNorm");
static const V lit113("carcassHysteresis");
static const V lit114("verticalInput");
static const V lit115("lateralInput");
static const V lit116("longitudinalInput");
static const V lit117("roadNoise");
static const V lit118("roadImpact");
static const V lit119("kerbLike");
static const V lit120("unloadEvent");
static const V lit121("landingEvent");
static const V lit122("bottomingRisk");
static const V lit123("hopRisk");
static const V lit124("severity");
static const V lit125("roadTexture");
static const V lit126("roadShock");
static const V lit127("pathLossEvent");
static const V lit128("surfaceLimit");
static const V lit129("moduleHint");
static const V lit130("unloadMemory");
static const V lit131("phaseId");
static const V lit132("phaseText");
static const V lit133("active");
static const V lit134("state");
static const V lit135("status");
static const V lit136("INIT");
static const V lit137("updateCount");
static const V lit138("wheelsValid");
static const V lit139("avgNoise");
static const V lit140("avgImpact");
static const V lit141("avgKerb");
static const V lit142("avgUnload");
static const V lit143("avgLanding");
static const V lit144("avgBottoming");
static const V lit145("avgHop");
static const V lit146("avgSeverity");
static const V lit147("avgTexture");
static const V lit148("avgShock");
static const V lit149("avgPathLoss");
static const V lit150("avgSurfaceLimit");
static const V lit151("avgVerticalFlow");
static const V lit152("avgTireDelivery");
static const V lit153("avgModuleHint");
static const V lit154("avgLoadRate");
static const V lit155("maxSeverity");
static const V lit156("maxImpact");
static const V lit157("dominantPhaseId");
static const V lit158("dominantPhase");
static const V lit159("bodyHeave");
static const V lit160("bodyPitch");
static const V lit161("bodyRoll");
static const V lit162("bodyYawHint");
static const V lit163("speedKmh");
static const V lit164("impactSensorValue");
static const V lit165("impactSensorRoot");
static const V lit166("roadBodyLinked");
static const V lit167("contactLinked");
static const V lit168("damperLinked");
static const V lit169("hopLinked");
static const V lit170("loadLinked");
static const V lit171("suspensionLinked");
static const V lit172("loadPathLinked");
static const V lit173("complianceLinked");
static const V lit174("carcassLinked");
static const V lit175("impactLinked");
static const V lit176("debugStoreTimer");
static const V lit177("debugStoreNow");
static const V lit178("wheels");
static const V lit179("debug");
static const V lit180("huge");
static const V lit181("abs");
static const V lit182("max");
static const V lit183("safeField");
static const V lit184("safeLoadRaw");
static const V lit185("safeStore");
static const V lit186("getCar");
static const V lit187("length");
static const V lit188("function");
static const V lit189("number");
static const V lit190("x");
static const V lit191("y");
static const V lit192("z");
static const V lit193("sqrt");
static const V lit194("velocity");
static const V lit195("localVelocity");
static const V lit196("loadK");
static const V lit197("ngp_contact_load_");
static const V lit198("ngp_load_path_load_");
static const V lit199("ngp_wheel_load_");
static const V lit200("ngp_dlt_load_");
static const V lit201("ngp_body_heave_input");
static const V lit202("ngp_rbi_heave");
static const V lit203("ngp_road_body_heave");
static const V lit204("ngp_body_pitch_input");
static const V lit205("ngp_rbi_pitch");
static const V lit206("ngp_road_body_pitch");
static const V lit207("ngp_body_roll_input");
static const V lit208("ngp_rbi_roll");
static const V lit209("ngp_road_body_roll");
static const V lit210("ngp_body_yaw_hint");
static const V lit211("ngp_rbi_yaw");
static const V lit212("ngp_road_body_yaw");
static const V lit213("acceleration");
static const V lit214("ngp_impact_value");
static const V lit215("ngp_impact_root_value");
static const V lit216("ngp_contact_quality_");
static const V lit217("ngp_tire_contact_quality_");
static const V lit218("ngp_tcr_quality_");
static const V lit219("ngp_tc_contact_");
static const V lit220("ngp_contact_trust_");
static const V lit221("ngp_recovery_trust_");
static const V lit222("ngp_contact_stability_score_");
static const V lit223("ngp_contact_loss_");
static const V lit224("ngp_tire_contact_loss_");
static const V lit225("ngp_tcr_contact_loss_");
static const V lit226("ngp_contact_combined_slip_");
static const V lit227("ngp_slip_recovery_slip_");
static const V lit228("ngp_combined_slip_");
static const V lit229("min");
static const V lit230("ngp_damper_hyst_velocity_");
static const V lit231("ngp_damper_velocity_");
static const V lit232("ngp_damper_hyst_impact_");
static const V lit233("ngp_damper_impact_");
static const V lit234("ngp_impact_damper_");
static const V lit235("ngp_damper_hyst_reversal_");
static const V lit236("ngp_damper_reversal_");
static const V lit237("ngp_damper_vertical_");
static const V lit238("ngp_vertical_damping_");
static const V lit239("ngp_damper_hysteretic_");
static const V lit240("ngp_hysteretic_damping_");
static const V lit241("ngp_damper_hyst_");
static const V lit242("ngp_damper_vertical_pulse_");
static const V lit243("ngp_road_vertical_pulse_");
static const V lit244("ngp_damper_heat_");
static const V lit245("ngp_damping_heat_");
static const V lit246("ngp_damper_road_memory_");
static const V lit247("ngp_road_damper_memory_");
static const V lit248("ngp_damper_hyst_memory_");
static const V lit249("ngp_load_path_loss_");
static const V lit250("ngp_lp_loss_");
static const V lit251("ngp_load_path_delay_");
static const V lit252("ngp_lp_delay_");
static const V lit253("ngp_load_path_contact_");
static const V lit254("ngp_lp_contact_");
static const V lit255("ngp_load_path_integrity_");
static const V lit256("ngp_lp_integrity_");
static const V lit257("ngp_load_path_tire_delivery_");
static const V lit258("ngp_lp_tire_delivery_");
static const V lit259("ngp_load_path_vertical_flow_");
static const V lit260("ngp_lp_vertical_flow_");
static const V lit261("ngp_load_path_force_leak_");
static const V lit262("ngp_lp_force_leak_");
static const V lit263("ngp_force_path_loss_");
static const V lit264("ngp_load_path_body_absorb_");
static const V lit265("ngp_road_body_absorb_");
static const V lit266("ngp_load_path_compression_");
static const V lit267("ngp_lp_compression_");
static const V lit268("ngp_load_path_work_");
static const V lit269("ngp_lp_work_");
static const V lit270("ngp_compliance_force_leak_");
static const V lit271("ngp_cs_force_leak_");
static const V lit272("ngp_force_leak");
static const V lit273("ngp_compliance_load_path_loss_");
static const V lit274("ngp_cs_load_path_loss_");
static const V lit275("ngp_load_path_compliance_loss");
static const V lit276("ngp_compliance_body_deflection_");
static const V lit277("ngp_body_compliance_");
static const V lit278("ngp_body_flex");
static const V lit279("ngp_compliance_subframe_deflection_");
static const V lit280("ngp_subframe_twist");
static const V lit281("ngp_rear_axle_windup");
static const V lit282("ngp_windup_rear_axle");
static const V lit283("ngp_driveline_windup");
static const V lit284("ngp_carcass_support_");
static const V lit285("ngp_tire_carcass_support_");
static const V lit286("ngp_carcass_grip_gate_");
static const V lit287("ngp_tire_carcass_grip_gate_");
static const V lit288("ngp_carcass_vertical_norm_");
static const V lit289("ngp_tire_carcass_vertical_norm_");
static const V lit290("ngp_carcass_hysteresis_");
static const V lit291("ngp_tire_carcass_hysteresis_");
static const V lit292("ngp_susp_");
static const V lit293("ngp_susp_int_damper_");
static const V lit294("ngp_susp_integrated_force_");
static const V lit295("ngp_tire_hop_energy_");
static const V lit296("ngp_tirehop_energy_");
static const V lit297("ngp_tire_hop_");
static const V lit298("ngp_tire_hop_loadpulse_");
static const V lit299("ngp_tirehop_");
static const V lit300("ngp_road_noise_");
static const V lit301("ngp_road_impact_");
static const V lit302("ngp_kerb_like_");
static const V lit303("ngp_unload_event_");
static const V lit304("ngp_landing_event_");
static const V lit305("ngp_bottoming_risk_");
static const V lit306("ngp_hop_risk_");
static const V lit307("ngp_road_input_severity_");
static const V lit308("ngp_road_input_phase_id_");
static const V lit309("ngp_road_input_phase_");
static const V lit310("UNKNOWN");
static const V lit311("ngp_rii_noise_");
static const V lit312("ngp_rii_impact_");
static const V lit313("ngp_rii_kerb_");
static const V lit314("ngp_rii_unload_");
static const V lit315("ngp_rii_landing_");
static const V lit316("ngp_rii_bottoming_");
static const V lit317("ngp_rii_hop_");
static const V lit318("ngp_rii_severity_");
static const V lit319("ngp_road_texture_");
static const V lit320("ngp_road_shock_");
static const V lit321("ngp_road_path_loss_");
static const V lit322("ngp_road_surface_limit_");
static const V lit323("ngp_road_module_hint_");
static const V lit324("ngp_road_vertical_flow_");
static const V lit325("ngp_road_force_leak_");
static const V lit326("ngp_road_tire_delivery_");
static const V lit327("ngp_road_integrity_");
static const V lit328("ngp_rii_texture_");
static const V lit329("ngp_rii_shock_");
static const V lit330("ngp_rii_path_loss_");
static const V lit331("ngp_rii_surface_limit_");
static const V lit332("ngp_rii_hint_");
static const V lit333("ngp_rii_vertical_");
static const V lit334("ngp_rii_lateral_");
static const V lit335("ngp_rii_longitudinal_");
static const V lit336("ngp_road_input_load_");
static const V lit337("ngp_road_input_load_rate_");
static const V lit338("ngp_road_input_contact_");
static const V lit339("ngp_road_input_trust_");
static const V lit340("ngp_road_input_damper_velocity_");
static const V lit341("ngp_road_input_damper_impact_");
static const V lit342("ngp_road_input_vertical_");
static const V lit343("ngp_road_input_lateral_");
static const V lit344("ngp_road_input_longitudinal_");
static const V lit345("ngp_road_input_vertical_pulse_");
static const V lit346("ngp_road_input_damper_heat_");
static const V lit347("ngp_road_input_road_memory_");
static const V lit348("ngp_road_input_load_path_loss_");
static const V lit349("ngp_road_input_force_leak_");
static const V lit350("ngp_road_input_carcass_support_");
static const V lit351("ngp_road_input_name_");
static const V lit352("ngp_road_input_status");
static const V lit353("ngp_road_input_update_count");
static const V lit354("ngp_road_input_wheels_valid");
static const V lit355("ngp_road_input_avg_noise");
static const V lit356("ngp_road_input_avg_impact");
static const V lit357("ngp_road_input_avg_kerb");
static const V lit358("ngp_road_input_avg_unload");
static const V lit359("ngp_road_input_avg_landing");
static const V lit360("ngp_road_input_avg_bottoming");
static const V lit361("ngp_road_input_avg_hop");
static const V lit362("ngp_road_input_avg_severity");
static const V lit363("ngp_road_noise");
static const V lit364("ngp_road_impact");
static const V lit365("ngp_kerb_like");
static const V lit366("ngp_unload_event");
static const V lit367("ngp_landing_event");
static const V lit368("ngp_bottoming_risk");
static const V lit369("ngp_hop_risk");
static const V lit370("ngp_road_input_severity");
static const V lit371("ngp_rii_avg_noise");
static const V lit372("ngp_rii_avg_impact");
static const V lit373("ngp_rii_avg_kerb");
static const V lit374("ngp_rii_avg_unload");
static const V lit375("ngp_rii_avg_landing");
static const V lit376("ngp_rii_avg_bottoming");
static const V lit377("ngp_rii_avg_hop");
static const V lit378("ngp_rii_avg_severity");
static const V lit379("ngp_road_texture");
static const V lit380("ngp_road_shock");
static const V lit381("ngp_road_path_loss");
static const V lit382("ngp_road_surface_limit");
static const V lit383("ngp_road_vertical_flow");
static const V lit384("ngp_road_tire_delivery");
static const V lit385("ngp_rii_avg_texture");
static const V lit386("ngp_rii_avg_shock");
static const V lit387("ngp_rii_avg_path_loss");
static const V lit388("ngp_rii_avg_surface_limit");
static const V lit389("ngp_rii_avg_vertical_flow");
static const V lit390("ngp_rii_avg_tire_delivery");
static const V lit391("ngp_road_input_avg_hint");
static const V lit392("ngp_road_input_avg_load_rate");
static const V lit393("ngp_road_input_max_severity");
static const V lit394("ngp_road_input_max_impact");
static const V lit395("ngp_road_input_dominant_id");
static const V lit396("ngp_road_input_dominant");
static const V lit397("ngp_rii_avg_hint");
static const V lit398("ngp_rii_max_severity");
static const V lit399("ngp_rii_dominant_id");
static const V lit400("ngp_rii_dominant");
static const V lit401("ngp_road_input_speed_kmh");
static const V lit402("ngp_road_input_body_heave");
static const V lit403("ngp_road_input_body_pitch");
static const V lit404("ngp_road_input_body_roll");
static const V lit405("ngp_road_input_body_yaw");
static const V lit406("ngp_road_input_body_linked");
static const V lit407("ngp_road_input_contact_linked");
static const V lit408("ngp_road_input_damper_linked");
static const V lit409("ngp_road_input_hop_linked");
static const V lit410("ngp_road_input_load_linked");
static const V lit411("ngp_road_input_suspension_linked");
static const V lit412("ngp_road_input_load_path_linked");
static const V lit413("ngp_road_input_compliance_linked");
static const V lit414("ngp_road_input_carcass_linked");
static const V lit415("ngp_road_input_impact_linked");
static const V lit416("NO WHEEL");
static const V lit417("init");
static const V lit418("update");
static const V lit419("NO CAR");
static const V lit420("NO WHEELS");
static const V lit421("RUNNING");
static const V lit422("getWheel");
static const V lit423("getRoadNoise");
static const V lit424("getImpact");
static const V lit425("getTexture");
static const V lit426("getPathLoss");
static const V lit427("getSeverity");
static const V lit428("getModuleHint");
static const V lit429("getPhase");
static const V lit430("getDominantPhase");
static const V lit431("getState");
static const V lit432("debugStr");
static const V lit433("format");
static const V lit434("Status %s / Count %.0f / Wheels %s / Dom %s\n");
static const V lit435("%s Phase %s / Sev %.2f / Hint %.2f / Noise %.2f / Impact %.2f\n");
static const V lit436("Kerb %.2f / Unload %.2f / Land %.2f / Bottom %.2f / Hop %.2f\n");
static const V lit437("Texture %.2f / Shock %.2f / Path %.2f / Surf %.2f\n");
static const V lit438("Load %.0f / dL %.0f / CQ %.2f / Trust %.2f / VFlow %.2f\n");
static const V lit439("Links RBI:%s CQ:%s DH:%s LP:%s CS:%s TC:%s Hop:%s Impact:%s");
static const V lit440("OK");
static const V lit441("NIL");
V load_road_input_interpreter(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(46);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,lit1,V(0.0));set(z,lit2,V(1.0));set(z,lit3,V(2.0));set(z,lit4,V(3.0));set(z,lit5,V(4.0));set(z,lit6,V(5.0));set(z,lit7,V(6.0));set(z,lit8,V(7.0));set(z,lit9,V(8.0));set(z,lit10,V(9.0));set(z,lit11,V(10.0));return z;})();e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,get(e->slot(0,2),lit1),lit1);set(z,get(e->slot(0,2),lit2),lit2);set(z,get(e->slot(0,2),lit3),lit3);set(z,get(e->slot(0,2),lit4),lit4);set(z,get(e->slot(0,2),lit5),lit5);set(z,get(e->slot(0,2),lit6),lit6);set(z,get(e->slot(0,2),lit7),lit7);set(z,get(e->slot(0,2),lit8),lit8);set(z,get(e->slot(0,2),lit9),lit9);set(z,get(e->slot(0,2),lit10),lit10);set(z,get(e->slot(0,2),lit11),lit11);return z;})();e->slot(0,3)=std::move(t4);}
{V t5=([&](){V z=table();set(z,V(0.0),lit12);set(z,V(1.0),lit13);set(z,V(2.0),lit14);set(z,V(3.0),lit15);return z;})();e->slot(0,4)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit16)};V t6=([&](){V z=table();set(z,lit17,V(3000.0));set(z,lit18,V(150.0));set(z,lit19,V(2.0));set(z,lit20,V(5e-05));set(z,lit21,V(0.05));set(z,lit22,V(0.05));set(z,lit23,V(0.08));set(z,lit24,V(0.18));set(z,lit25,V(0.06));set(z,lit26,V(0.06));set(z,lit27,V(0.24));set(z,lit28,V(0.035));set(z,lit29,V(0.21));set(z,lit30,V(0.07));set(z,lit31,V(0.26));set(z,lit32,V(0.22));set(z,lit33,V(0.26));set(z,lit34,V(0.035));set(z,lit35,V(0.28));set(z,lit36,V(28000.0));set(z,lit37,V(125000.0));set(z,lit38,V(0.16));set(z,lit39,V(0.85));set(z,lit40,V(0.7));set(z,lit41,V(3.2));set(z,lit42,V(0.32));set(z,lit43,V(0.18));set(z,lit44,V(45000.0));set(z,lit45,V(150000.0));set(z,lit46,V(0.25));set(z,lit47,V(0.2));set(z,lit48,V(8.0));set(z,lit49,V(1.85));set(z,lit50,V(0.65));set(z,lit51,V(0.38));set(z,lit52,V(0.42));set(z,lit53,V(0.5));set(z,lit54,V(0.4));set(z,lit55,V(0.28));set(z,lit56,V(0.3));set(z,lit57,V(0.22));set(z,lit58,V(0.18));set(z,lit59,V(0.36));set(z,lit60,V(0.22));set(z,lit61,V(0.2));set(z,lit62,V(0.22));set(z,lit63,V(0.34));set(z,lit64,V(0.24));set(z,lit65,V(0.18));set(z,lit66,V(0.24));set(z,lit67,V(0.14));set(z,lit68,V(0.16));set(z,lit69,V(0.22));set(z,lit70,V(0.18));set(z,lit71,V(0.12));set(z,lit72,V(0.16));set(z,lit73,V(0.1));set(z,lit74,V(1.0));set(z,lit75,V(0.1));return z;})();refs[0].put(std::move(t6));}
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V z=table();set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(1.0));set(z,lit81,V(1.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(1.0));set(z,lit99,V(1.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(1.0));set(z,lit111,V(1.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(0.0));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit130,V(0.0));set(z,lit131,get(e->slot(1,2),lit1));set(z,lit132,lit1);set(z,lit133,V(false));return z;})()};
return Args{};});
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t7=([&](){V z=table();set(z,lit135,lit136);set(z,lit137,V(0.0));set(z,lit138,V(false));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(0.0));set(z,lit143,V(0.0));set(z,lit144,V(0.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(0.0));set(z,lit151,V(0.0));set(z,lit152,V(1.0));set(z,lit153,V(0.0));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,get(e->slot(0,2),lit1));set(z,lit158,lit1);set(z,lit159,V(0.0));set(z,lit160,V(0.0));set(z,lit161,V(0.0));set(z,lit162,V(0.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(0.0));set(z,lit166,V(false));set(z,lit167,V(false));set(z,lit168,V(false));set(z,lit169,V(false));set(z,lit170,V(false));set(z,lit171,V(false));set(z,lit172,V(false));set(z,lit173,V(false));set(z,lit174,V(false));set(z,lit175,V(false));set(z,lit176,V(999.0));set(z,lit177,V(true));set(z,lit178,([&](){V z=table();return z;})());return z;})();refs[0].put(std::move(t7));}
{double t8=num(V(0.0)),t9=num(V(3.0)),t10=num(V(1.0));for(double t11=t8;(t10>0?t11<=t9:t11>=t9);t11+=t10){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t11);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0))};V t12=first(call(e->slot(1,5),Args{}));refs[0].put(std::move(t12));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),e->slot(0,0))};V t13=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));refs[0].put(std::move(t13));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit179)};V t14=get(e->slot(0,1),lit134);refs[0].put(std::move(t14));}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t15=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t15);}
if(truth(([&](){V t16=([&](){V t17=([&](){V t18=eq(e->slot(0,2),V());return !truth(t18)?ne(e->slot(0,2),e->slot(0,2)):t18;})();return !truth(t17)?eq(e->slot(0,2),get(e->get("math"),lit180)):t17;})();return !truth(t16)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit180)))):t16;})())){return Args{([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,6),Args{e->slot(0,0),([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()}));refs[0].put(std::move(t20));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit181),call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return call(get(e->get("math"),lit182),joined(Args{first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}))},call(get(e->get("math"),lit182),joined(Args{first(call(e->slot(1,6),Args{e->slot(0,1),V(0.0)}))},call(e->slot(1,6),Args{e->slot(0,2),V(0.0)})))));
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);return call(get(e->get("math"),lit182),joined(Args{first(call(e->slot(1,9),Args{e->slot(0,0),e->slot(0,1),e->slot(0,2)}))},call(e->slot(1,6),Args{e->slot(0,3),V(0.0)})));
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t23=first(call(e->slot(1,6),Args{e->slot(0,1),V(1.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t24=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t24));}
if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t25=([&](){V t26=ge(e->slot(0,2),e->slot(0,1));return truth(t26)?V(1.0):t26;})();return !truth(t25)?V(0.0):t25;})()};
}
{V t27=first(call(e->slot(1,7),Args{divv(sub(e->slot(0,2),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t27);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t28=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t29=first(call(e->slot(1,6),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t30=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t31=first(call(e->slot(1,6),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t31));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t32=first(call(e->slot(1,7),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit182),Args{add(e->slot(0,2),e->slot(0,3)),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t32);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t33=([&](){V t34=([&](){V t35=gt(e->slot(0,1),e->slot(0,0));return truth(t35)?get(get(e->slot(1,1),lit16),lit23):t35;})();return !truth(t34)?get(get(e->slot(1,1),lit16),lit24):t34;})();e->slot(0,3)=std::move(t33);}
return call(e->slot(1,12),Args{e->slot(0,0),e->slot(0,1),e->slot(0,3),e->slot(0,2)});
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t36=([&](){V t37=([&](){V t38=gt(e->slot(0,1),e->slot(0,0));return truth(t38)?e->slot(0,2):t38;})();return !truth(t37)?e->slot(0,3):t37;})();e->slot(0,5)=std::move(t36);}
return call(e->slot(1,12),Args{e->slot(0,0),e->slot(0,1),e->slot(0,5),e->slot(0,4)});
return Args{};});
{V t39=get(e->slot(0,0),lit183);e->slot(0,15)=std::move(t39);}
{V t40=get(e->slot(0,0),lit184);e->slot(0,16)=std::move(t40);}
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t41=first(call(e->slot(1,16),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t41);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t42=e->slot(0,1);return !truth(t42)?V(0.0):t42;})()};
}
return call(e->slot(1,6),Args{e->slot(0,2),([&](){V t43=e->slot(0,1);return !truth(t43)?V(0.0):t43;})()});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t44=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t44);}
{double t45=num(V(1.0)),t46=num(length(e->slot(0,1))),t47=num(V(1.0));for(double t48=t45;(t47>0?t48<=t46:t48>=t46);t48+=t47){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t48);{V t49=first(call(e->slot(2,16),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t49);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,6),Args{e->slot(0,1),([&](){V t50=e->slot(1,0);return !truth(t50)?V(0.0):t50;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t51=e->slot(0,0);return !truth(t51)?V(0.0):t51;})(),V()};
return Args{};});
{V t52=get(e->slot(0,0),lit185);e->slot(0,19)=std::move(t52);}
e->slot(0,20)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t53=V(!truth(e->get("ac")));return !truth(t53)?V(!truth(get(e->get("ac"),lit186))):t53;})())){return Args{V()};
}
{Args t54=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit186),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t54,0);e->slot(0,1)=arg(t54,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit176)};V t55=add(([&](){V t56=get(get(e->slot(1,1),lit134),lit176);return !truth(t56)?V(0.0):t56;})(),([&](){V t57=e->slot(0,0);return !truth(t57)?V(0.0):t57;})());refs[0].put(std::move(t55));}
if(truth(ge(get(get(e->slot(1,1),lit134),lit176),get(get(e->slot(1,1),lit16),lit75)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit176)};V t58=V(0.0);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit177)};V t59=V(true);refs[0].put(std::move(t59));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit177)};V t60=V(false);refs[0].put(std::move(t60));}
}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t61=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit187)})),lit188))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit187)})),lit189))){return Args{get(e->slot(1,0),lit187)};
}
{V t62=first(call(e->slot(2,6),Args{get(e->slot(1,0),lit190),V(0.0)}));e->slot(0,0)=std::move(t62);}
{V t63=first(call(e->slot(2,6),Args{get(e->slot(1,0),lit191),V(0.0)}));e->slot(0,1)=std::move(t63);}
{V t64=first(call(e->slot(2,6),Args{get(e->slot(1,0),lit192),V(0.0)}));e->slot(0,2)=std::move(t64);}
return call(get(e->get("math"),lit193),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t61,0);e->slot(0,2)=arg(t61,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,6),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t65=first(call(e->slot(1,15),Args{e->slot(0,0),lit163,V()}));e->slot(0,1)=std::move(t65);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,6),Args{e->slot(0,1),V(0.0)});
}
{V t66=V();e->slot(0,2)=std::move(t66);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t67=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t67));}
if(truth(([&](){V t68=ge(e->slot(0,2),V(0.0));return truth(t68)?lt(e->slot(0,2),V(120.0)):t68;})())){return Args{mul(e->slot(0,2),V(3.6))};
}
return Args{e->slot(0,2)};
}
{V t69=first(call(e->slot(1,15),Args{e->slot(0,0),lit194,V()}));e->slot(0,3)=std::move(t69);}
if(truth(e->slot(0,3))){return Args{mul(first(call(e->slot(1,22),Args{e->slot(0,3)})),V(3.6))};
}
{V t70=first(call(e->slot(1,15),Args{e->slot(0,0),lit195,V()}));e->slot(0,4)=std::move(t70);}
if(truth(e->slot(0,4))){return Args{mul(first(call(e->slot(1,22),Args{e->slot(0,4)})),V(3.6))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,15),Args{e->slot(0,0),lit178,V()});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t71=first(call(e->slot(1,24),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t71);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t72=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t72,0);e->slot(0,4)=arg(t72,1);}
if(truth(([&](){V t73=e->slot(0,3);return truth(t73)?e->slot(0,4):t73;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t74=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t74,0));refs[1].put(arg(t74,1));}
if(truth(([&](){V t75=e->slot(0,3);return truth(t75)?e->slot(0,4):t75;})())){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t76=([&](){V z=table();set(z,V(1.0),lit76);set(z,V(2.0),lit196);return z;})();e->slot(0,1)=std::move(t76);}
{double t77=num(V(1.0)),t78=num(length(e->slot(0,1))),t79=num(V(1.0));for(double t80=t77;(t79>0?t80<=t78:t80>=t78);t80+=t79){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t80);{V t81=first(call(e->slot(2,15),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t81);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,6),Args{e->slot(0,1),V(0.0)});
}
}}
return Args{V()};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t82=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t82);}
if(truth(gt(first(call(get(e->get("math"),lit181),Args{e->slot(0,1)})),V(900.0)))){return call(get(e->get("math"),lit181),Args{e->slot(0,1)});
}
return Args{add(get(get(e->slot(1,1),lit16),lit17),e->slot(0,1))};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t83=first(call(e->slot(1,26),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t83);}
if(truth(([&](){V t84=ne(e->slot(0,2),V());return truth(t84)?gt(e->slot(0,2),V(1.0)):t84;})())){return Args{e->slot(0,2)};
}
{V t85=first(call(e->slot(1,16),Args{concat(lit197,e->slot(0,1))}));e->slot(0,3)=std::move(t85);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit167)};V t86=V(true);refs[0].put(std::move(t86));}
return call(e->slot(1,6),Args{e->slot(0,3),get(get(e->slot(1,1),lit16),lit17)});
}
{V t87=first(call(e->slot(1,16),Args{concat(lit198,e->slot(0,1))}));e->slot(0,4)=std::move(t87);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit172)};V t88=V(true);refs[0].put(std::move(t88));}
return call(e->slot(1,6),Args{e->slot(0,4),get(get(e->slot(1,1),lit16),lit17)});
}
{V t89=first(call(e->slot(1,16),Args{concat(lit199,e->slot(0,1))}));e->slot(0,5)=std::move(t89);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit170)};V t90=V(true);refs[0].put(std::move(t90));}
return call(e->slot(1,6),Args{e->slot(0,5),get(get(e->slot(1,1),lit16),lit17)});
}
{V t91=first(call(e->slot(1,16),Args{concat(lit200,e->slot(0,1))}));e->slot(0,6)=std::move(t91);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit170)};V t92=V(true);refs[0].put(std::move(t92));}
return call(e->slot(1,27),Args{e->slot(0,6)});
}
return Args{get(get(e->slot(1,1),lit16),lit17)};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t93=get(e->slot(1,1),lit134);e->slot(0,0)=std::move(t93);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit166)};V t94=V(false);refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit167)};V t95=V(false);refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit168)};V t96=V(false);refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit169)};V t97=V(false);refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit170)};V t98=V(false);refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit171)};V t99=V(false);refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit172)};V t100=V(false);refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit173)};V t101=V(false);refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit174)};V t102=V(false);refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit175)};V t103=V(false);refs[0].put(std::move(t103));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);{V t104=get(e->slot(1,1),lit134);e->slot(0,1)=std::move(t104);}
{Args t105=call(e->slot(1,18),Args{V(0.0),lit201,lit202,lit203});e->slot(0,2)=arg(t105,0);e->slot(0,3)=arg(t105,1);}
{Args t106=call(e->slot(1,18),Args{V(0.0),lit204,lit205,lit206});e->slot(0,4)=arg(t106,0);e->slot(0,5)=arg(t106,1);}
{Args t107=call(e->slot(1,18),Args{V(0.0),lit207,lit208,lit209});e->slot(0,6)=arg(t107,0);e->slot(0,7)=arg(t107,1);}
{Args t108=call(e->slot(1,18),Args{V(0.0),lit210,lit211,lit212});e->slot(0,8)=arg(t108,0);e->slot(0,9)=arg(t108,1);}
if(truth(([&](){V t109=([&](){V t110=([&](){V t111=e->slot(0,3);return !truth(t111)?e->slot(0,5):t111;})();return !truth(t110)?e->slot(0,7):t110;})();return !truth(t109)?e->slot(0,9):t109;})())){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit166)};V t112=V(true);refs[0].put(std::move(t112));}
}
{V t113=first(call(e->slot(1,15),Args{e->slot(0,0),lit213,V()}));e->slot(0,10)=std::move(t113);}
if(truth(e->slot(0,10))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t114=first(call(e->slot(2,6),Args{first(call(e->slot(2,15),Args{e->slot(1,10),lit190,V(0.0)})),V(0.0)}));e->slot(0,0)=std::move(t114);}
{V t115=first(call(e->slot(2,6),Args{first(call(e->slot(2,15),Args{e->slot(1,10),lit191,V(0.0)})),V(0.0)}));e->slot(0,1)=std::move(t115);}
{V t116=first(call(e->slot(2,6),Args{first(call(e->slot(2,15),Args{e->slot(1,10),lit192,V(0.0)})),V(0.0)}));e->slot(0,2)=std::move(t116);}
{std::array<Ref,1> refs{Ref(e,1,2)};V t117=first(call(get(e->get("math"),lit182),Args{e->slot(1,2),mul(first(call(e->slot(2,8),Args{e->slot(0,1)})),V(0.08)),mul(first(call(e->slot(2,8),Args{e->slot(0,2)})),V(0.04))}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t118=add(e->slot(1,4),mul(e->slot(0,0),V(0.018)));refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t119=add(e->slot(1,6),mul(e->slot(0,2),V(0.012)));refs[0].put(std::move(t119));}
}
{V t120=first(call(e->slot(1,16),Args{lit214}));e->slot(0,11)=std::move(t120);}
{V t121=first(call(e->slot(1,16),Args{lit215}));e->slot(0,12)=std::move(t121);}
if(truth(([&](){V t122=ne(e->slot(0,11),V());return !truth(t122)?ne(e->slot(0,12),V()):t122;})())){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit175)};V t123=V(true);refs[0].put(std::move(t123));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit164)};V t124=first(call(e->slot(1,7),Args{first(call(e->slot(1,6),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit165)};V t125=first(call(e->slot(1,7),Args{first(call(e->slot(1,6),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit159)};V t126=first(call(e->slot(1,7),Args{e->slot(0,2),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit160)};V t127=first(call(e->slot(1,7),Args{e->slot(0,4),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t128=first(call(e->slot(1,7),Args{e->slot(0,6),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit162)};V t129=first(call(e->slot(1,7),Args{e->slot(0,8),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t129));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t130=call(e->slot(1,18),Args{V(1.0),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0)),concat(lit219,e->slot(0,0))});e->slot(0,2)=arg(t130,0);e->slot(0,3)=arg(t130,1);}
{Args t131=call(e->slot(1,18),Args{e->slot(0,2),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0))});e->slot(0,4)=arg(t131,0);e->slot(0,5)=arg(t131,1);}
{Args t132=call(e->slot(1,18),Args{V(),concat(lit223,e->slot(0,0)),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0))});e->slot(0,6)=arg(t132,0);e->slot(0,7)=arg(t132,1);}
{Args t133=call(e->slot(1,18),Args{V(0.0),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0)),concat(lit228,e->slot(0,0))});e->slot(0,8)=arg(t133,0);e->slot(0,9)=arg(t133,1);}
if(truth(([&](){V t134=([&](){V t135=([&](){V t136=e->slot(0,3);return !truth(t136)?e->slot(0,5):t136;})();return !truth(t135)?e->slot(0,7):t135;})();return !truth(t134)?e->slot(0,9):t134;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit167)};V t137=V(true);refs[0].put(std::move(t137));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit80)};V t138=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit81)};V t139=first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t139));}
if(truth(e->slot(0,7))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit82)};V t140=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0),V(1.0)}));refs[0].put(std::move(t140));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit82)};V t141=first(call(e->slot(1,7),Args{sub(V(1.0),first(call(get(e->get("math"),lit229),Args{get(e->slot(0,1),lit80),get(e->slot(0,1),lit81)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t141));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit83)};V t142=first(call(e->slot(1,7),Args{divv(e->slot(0,8),V(1.35)),V(0.0),V(1.0)}));refs[0].put(std::move(t142));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,18);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t143=call(e->slot(1,18),Args{V(0.0),concat(lit230,e->slot(0,0)),concat(lit231,e->slot(0,0))});e->slot(0,2)=arg(t143,0);e->slot(0,3)=arg(t143,1);}
{Args t144=call(e->slot(1,18),Args{V(0.0),concat(lit232,e->slot(0,0)),concat(lit233,e->slot(0,0)),concat(lit234,e->slot(0,0))});e->slot(0,4)=arg(t144,0);e->slot(0,5)=arg(t144,1);}
{Args t145=call(e->slot(1,18),Args{V(0.0),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0))});e->slot(0,6)=arg(t145,0);e->slot(0,7)=arg(t145,1);}
{Args t146=call(e->slot(1,18),Args{V(0.0),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0))});e->slot(0,8)=arg(t146,0);e->slot(0,9)=arg(t146,1);}
{Args t147=call(e->slot(1,18),Args{V(0.0),concat(lit239,e->slot(0,0)),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0))});e->slot(0,10)=arg(t147,0);e->slot(0,11)=arg(t147,1);}
{Args t148=call(e->slot(1,18),Args{V(0.0),concat(lit242,e->slot(0,0)),concat(lit243,e->slot(0,0))});e->slot(0,12)=arg(t148,0);e->slot(0,13)=arg(t148,1);}
{Args t149=call(e->slot(1,18),Args{V(0.0),concat(lit244,e->slot(0,0)),concat(lit245,e->slot(0,0))});e->slot(0,14)=arg(t149,0);e->slot(0,15)=arg(t149,1);}
{Args t150=call(e->slot(1,18),Args{V(0.0),concat(lit246,e->slot(0,0)),concat(lit247,e->slot(0,0)),concat(lit248,e->slot(0,0))});e->slot(0,16)=arg(t150,0);e->slot(0,17)=arg(t150,1);}
if(truth(([&](){V t151=([&](){V t152=([&](){V t153=([&](){V t154=([&](){V t155=([&](){V t156=([&](){V t157=e->slot(0,3);return !truth(t157)?e->slot(0,5):t157;})();return !truth(t156)?e->slot(0,7):t156;})();return !truth(t155)?e->slot(0,9):t155;})();return !truth(t154)?e->slot(0,11):t154;})();return !truth(t153)?e->slot(0,13):t153;})();return !truth(t152)?e->slot(0,15):t152;})();return !truth(t151)?e->slot(0,17):t151;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit168)};V t158=V(true);refs[0].put(std::move(t158));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit84)};V t159=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit85)};V t160=first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit86)};V t161=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit87)};V t162=first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit88)};V t163=first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit89)};V t164=first(call(e->slot(1,7),Args{e->slot(0,12),V(0.0),V(1.2)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit90)};V t165=first(call(e->slot(1,7),Args{e->slot(0,14),V(0.0),V(1.2)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit91)};V t166=first(call(e->slot(1,7),Args{e->slot(0,16),V(0.0),V(1.2)}));refs[0].put(std::move(t166));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,22);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t167=call(e->slot(1,18),Args{V(0.0),concat(lit249,e->slot(0,0)),concat(lit250,e->slot(0,0))});e->slot(0,2)=arg(t167,0);e->slot(0,3)=arg(t167,1);}
{Args t168=call(e->slot(1,18),Args{V(0.0),concat(lit251,e->slot(0,0)),concat(lit252,e->slot(0,0))});e->slot(0,4)=arg(t168,0);e->slot(0,5)=arg(t168,1);}
{Args t169=call(e->slot(1,18),Args{V(0.0),concat(lit253,e->slot(0,0)),concat(lit254,e->slot(0,0))});e->slot(0,6)=arg(t169,0);e->slot(0,7)=arg(t169,1);}
{Args t170=call(e->slot(1,18),Args{V(1.0),concat(lit255,e->slot(0,0)),concat(lit256,e->slot(0,0))});e->slot(0,8)=arg(t170,0);e->slot(0,9)=arg(t170,1);}
{Args t171=call(e->slot(1,18),Args{V(1.0),concat(lit257,e->slot(0,0)),concat(lit258,e->slot(0,0))});e->slot(0,10)=arg(t171,0);e->slot(0,11)=arg(t171,1);}
{Args t172=call(e->slot(1,18),Args{V(0.0),concat(lit259,e->slot(0,0)),concat(lit260,e->slot(0,0))});e->slot(0,12)=arg(t172,0);e->slot(0,13)=arg(t172,1);}
{Args t173=call(e->slot(1,18),Args{V(0.0),concat(lit261,e->slot(0,0)),concat(lit262,e->slot(0,0)),concat(lit263,e->slot(0,0))});e->slot(0,14)=arg(t173,0);e->slot(0,15)=arg(t173,1);}
{Args t174=call(e->slot(1,18),Args{V(0.0),concat(lit264,e->slot(0,0)),concat(lit265,e->slot(0,0))});e->slot(0,16)=arg(t174,0);e->slot(0,17)=arg(t174,1);}
{Args t175=call(e->slot(1,18),Args{V(0.0),concat(lit266,e->slot(0,0)),concat(lit267,e->slot(0,0))});e->slot(0,18)=arg(t175,0);e->slot(0,19)=arg(t175,1);}
{Args t176=call(e->slot(1,18),Args{V(0.0),concat(lit268,e->slot(0,0)),concat(lit269,e->slot(0,0))});e->slot(0,20)=arg(t176,0);e->slot(0,21)=arg(t176,1);}
if(truth(([&](){V t177=([&](){V t178=([&](){V t179=([&](){V t180=([&](){V t181=([&](){V t182=([&](){V t183=([&](){V t184=([&](){V t185=e->slot(0,3);return !truth(t185)?e->slot(0,5):t185;})();return !truth(t184)?e->slot(0,7):t184;})();return !truth(t183)?e->slot(0,9):t183;})();return !truth(t182)?e->slot(0,11):t182;})();return !truth(t181)?e->slot(0,13):t181;})();return !truth(t180)?e->slot(0,15):t180;})();return !truth(t179)?e->slot(0,17):t179;})();return !truth(t178)?e->slot(0,19):t178;})();return !truth(t177)?e->slot(0,21):t177;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit172)};V t186=V(true);refs[0].put(std::move(t186));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit95)};V t187=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit96)};V t188=first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit97)};V t189=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t190=first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit99)};V t191=first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t192=first(call(e->slot(1,7),Args{e->slot(0,12),V(0.0),V(1.2)}));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t193=first(call(e->slot(1,7),Args{e->slot(0,14),V(0.0),V(1.2)}));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t194=first(call(e->slot(1,7),Args{e->slot(0,16),V(0.0),V(1.2)}));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t195=first(call(e->slot(1,7),Args{e->slot(0,18),V(0.0),V(1.2)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t196=first(call(e->slot(1,7),Args{e->slot(0,20),V(0.0),V(1.2)}));refs[0].put(std::move(t196));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t197=call(e->slot(1,18),Args{V(0.0),concat(lit270,e->slot(0,0)),concat(lit271,e->slot(0,0)),lit272});e->slot(0,2)=arg(t197,0);e->slot(0,3)=arg(t197,1);}
{Args t198=call(e->slot(1,18),Args{V(0.0),concat(lit273,e->slot(0,0)),concat(lit274,e->slot(0,0)),lit275});e->slot(0,4)=arg(t198,0);e->slot(0,5)=arg(t198,1);}
{Args t199=call(e->slot(1,18),Args{V(0.0),concat(lit276,e->slot(0,0)),concat(lit277,e->slot(0,0)),lit278});e->slot(0,6)=arg(t199,0);e->slot(0,7)=arg(t199,1);}
{Args t200=call(e->slot(1,18),Args{V(0.0),concat(lit279,e->slot(0,0)),lit280});e->slot(0,8)=arg(t200,0);e->slot(0,9)=arg(t200,1);}
{Args t201=call(e->slot(1,18),Args{V(0.0),lit281,lit282,lit283});e->slot(0,10)=arg(t201,0);e->slot(0,11)=arg(t201,1);}
if(truth(([&](){V t202=([&](){V t203=([&](){V t204=([&](){V t205=e->slot(0,3);return !truth(t205)?e->slot(0,5):t205;})();return !truth(t204)?e->slot(0,7):t204;})();return !truth(t203)?e->slot(0,9):t203;})();return !truth(t202)?e->slot(0,11):t202;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit173)};V t206=V(true);refs[0].put(std::move(t206));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t207=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t208=first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t209=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t210=first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t211=first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t211));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t212=call(e->slot(1,18),Args{V(1.0),concat(lit284,e->slot(0,0)),concat(lit285,e->slot(0,0))});e->slot(0,2)=arg(t212,0);e->slot(0,3)=arg(t212,1);}
{Args t213=call(e->slot(1,18),Args{V(1.0),concat(lit286,e->slot(0,0)),concat(lit287,e->slot(0,0))});e->slot(0,4)=arg(t213,0);e->slot(0,5)=arg(t213,1);}
{Args t214=call(e->slot(1,18),Args{V(0.0),concat(lit288,e->slot(0,0)),concat(lit289,e->slot(0,0))});e->slot(0,6)=arg(t214,0);e->slot(0,7)=arg(t214,1);}
{Args t215=call(e->slot(1,18),Args{V(0.0),concat(lit290,e->slot(0,0)),concat(lit291,e->slot(0,0))});e->slot(0,8)=arg(t215,0);e->slot(0,9)=arg(t215,1);}
if(truth(([&](){V t216=([&](){V t217=([&](){V t218=e->slot(0,3);return !truth(t218)?e->slot(0,5):t218;})();return !truth(t217)?e->slot(0,7):t217;})();return !truth(t216)?e->slot(0,9):t216;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit174)};V t219=V(true);refs[0].put(std::move(t219));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t220=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t221=first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t222=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t223=first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t223));}
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t224=first(call(e->slot(1,16),Args{concat(lit292,e->slot(0,0))}));e->slot(0,2)=std::move(t224);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t225=first(call(e->slot(1,16),Args{concat(lit293,e->slot(0,0))}));refs[0].put(std::move(t225));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t226=first(call(e->slot(1,16),Args{concat(lit294,e->slot(0,0))}));refs[0].put(std::move(t226));}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit171)};V t227=V(true);refs[0].put(std::move(t227));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit92)};V t228=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t228));}
{V t229=first(call(e->slot(1,16),Args{concat(lit295,e->slot(0,0))}));e->slot(0,3)=std::move(t229);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t230=first(call(e->slot(1,16),Args{concat(lit296,e->slot(0,0))}));refs[0].put(std::move(t230));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t231=first(call(e->slot(1,16),Args{concat(lit297,e->slot(0,0))}));refs[0].put(std::move(t231));}
}
{V t232=first(call(e->slot(1,16),Args{concat(lit298,e->slot(0,0))}));e->slot(0,4)=std::move(t232);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t233=first(call(e->slot(1,16),Args{concat(lit299,e->slot(0,0))}));refs[0].put(std::move(t233));}
}
if(truth(([&](){V t234=ne(e->slot(0,3),V());return !truth(t234)?ne(e->slot(0,4),V()):t234;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit169)};V t235=V(true);refs[0].put(std::move(t235));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit93)};V t236=first(call(e->slot(1,7),Args{first(call(e->slot(1,6),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t237=first(call(e->slot(1,7),Args{divv(first(call(e->slot(1,8),Args{e->slot(0,4)})),V(5000.0)),V(0.0),V(1.2)}));refs[0].put(std::move(t237));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t238=get(e->slot(1,1),lit16);e->slot(0,4)=std::move(t238);}
{V t239=first(call(get(e->get("math"),lit182),joined(Args{V(0.0)},call(e->slot(1,28),Args{e->slot(0,2),e->slot(0,0)}))));e->slot(0,5)=std::move(t239);}
{V t240=([&](){V t241=get(e->slot(0,1),lit76);return !truth(t241)?e->slot(0,5):t241;})();e->slot(0,6)=std::move(t240);}
{V t242=divv(sub(e->slot(0,5),e->slot(0,6)),first(call(get(e->get("math"),lit182),Args{e->slot(0,3),V(0.001)})));e->slot(0,7)=std::move(t242);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit77)};V t243=e->slot(0,6);refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit76)};V t244=first(call(e->slot(1,12),Args{get(e->slot(0,1),lit76),e->slot(0,5),get(e->slot(0,4),lit22),e->slot(0,3)}));refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit78)};V t245=first(call(e->slot(1,12),Args{get(e->slot(0,1),lit78),e->slot(0,7),get(e->slot(0,4),lit25),e->slot(0,3)}));refs[0].put(std::move(t245));}
call(e->slot(1,31),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,32),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,33),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,34),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,35),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,36),Args{e->slot(0,0),e->slot(0,1)});
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t246=first(call(e->slot(1,7),Args{add(add(add(add(mul(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit159)})),V(0.45)),mul(first(call(e->slot(1,8),Args{get(e->slot(0,1),lit84)})),V(0.25))),mul(get(e->slot(0,1),lit89),V(0.22))),mul(get(e->slot(0,1),lit100),V(0.18))),mul(get(e->slot(0,1),lit112),V(0.14))),V(0.0),V(2.0)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t247=first(call(e->slot(1,7),Args{add(add(add(mul(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit161)})),V(0.55)),mul(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit162)})),V(0.22))),mul(get(e->slot(0,1),lit108),V(0.14))),mul(get(e->slot(0,1),lit101),V(0.1))),V(0.0),V(2.0)}));refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t248=first(call(e->slot(1,7),Args{add(add(mul(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit160)})),V(0.6)),mul(get(e->slot(0,1),lit109),V(0.18))),mul(get(e->slot(0,1),lit96),V(0.12))),V(0.0),V(2.0)}));refs[0].put(std::move(t248));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(gt(get(e->slot(0,0),lit120),V(0.55)))){return Args{get(e->slot(1,2),lit9),get(e->slot(1,3),get(e->slot(1,2),lit9))};
}
if(truth(gt(get(e->slot(0,0),lit121),V(0.5)))){return Args{get(e->slot(1,2),lit6),get(e->slot(1,3),get(e->slot(1,2),lit6))};
}
if(truth(gt(get(e->slot(0,0),lit122),V(0.58)))){return Args{get(e->slot(1,2),lit7),get(e->slot(1,3),get(e->slot(1,2),lit7))};
}
if(truth(gt(get(e->slot(0,0),lit127),V(0.58)))){return Args{get(e->slot(1,2),lit10),get(e->slot(1,3),get(e->slot(1,2),lit10))};
}
if(truth(gt(get(e->slot(0,0),lit128),V(0.55)))){return Args{get(e->slot(1,2),lit11),get(e->slot(1,3),get(e->slot(1,2),lit11))};
}
if(truth(gt(get(e->slot(0,0),lit119),V(0.45)))){return Args{get(e->slot(1,2),lit4),get(e->slot(1,3),get(e->slot(1,2),lit4))};
}
if(truth(([&](){V t249=gt(get(e->slot(0,0),lit118),V(0.48));return !truth(t249)?gt(get(e->slot(0,0),lit126),V(0.55)):t249;})())){return Args{get(e->slot(1,2),lit3),get(e->slot(1,3),get(e->slot(1,2),lit3))};
}
if(truth(gt(get(e->slot(0,0),lit123),V(0.45)))){return Args{get(e->slot(1,2),lit8),get(e->slot(1,3),get(e->slot(1,2),lit8))};
}
if(truth(([&](){V t250=gt(get(e->slot(0,0),lit117),V(0.24));return !truth(t250)?gt(get(e->slot(0,0),lit125),V(0.3)):t250;})())){return Args{get(e->slot(1,2),lit5),get(e->slot(1,3),get(e->slot(1,2),lit5))};
}
if(truth(gt(get(e->slot(0,0),lit124),V(0.08)))){return Args{get(e->slot(1,2),lit2),get(e->slot(1,3),get(e->slot(1,2),lit2))};
}
return Args{get(e->slot(1,2),lit1),get(e->slot(1,3),get(e->slot(1,2),lit1))};
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,39);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t251=get(e->slot(1,1),lit16);e->slot(0,3)=std::move(t251);}
{V t252=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit19),add(get(e->slot(0,3),lit19),V(10.0)),get(get(e->slot(1,1),lit134),lit163)}));e->slot(0,4)=std::move(t252);}
{V t253=divv(get(e->slot(0,1),lit76),first(call(get(e->get("math"),lit182),Args{get(e->slot(0,3),lit17),V(1.0)})));e->slot(0,5)=std::move(t253);}
{V t254=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit78)}));e->slot(0,6)=std::move(t254);}
{V t255=first(call(get(e->get("math"),lit182),Args{V(0.0),get(e->slot(0,1),lit78)}));e->slot(0,7)=std::move(t255);}
{V t256=first(call(get(e->get("math"),lit182),Args{V(0.0),V(-num(get(e->slot(0,1),lit78)))}));e->slot(0,8)=std::move(t256);}
{V t257=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit36),get(e->slot(0,3),lit37),e->slot(0,6)}));e->slot(0,9)=std::move(t257);}
{V t258=first(call(get(e->get("math"),lit182),joined(Args{get(e->slot(0,1),lit85)},call(e->slot(1,11),joined(Args{get(e->slot(0,3),lit38),get(e->slot(0,3),lit39)},call(e->slot(1,8),Args{get(e->slot(0,1),lit84)}))))));e->slot(0,10)=std::move(t258);}
{V t259=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit40),get(e->slot(0,3),lit41),add(add(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit159)})),mul(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit160)})),V(0.35))),mul(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit161)})),V(0.35)))}));e->slot(0,11)=std::move(t259);}
{V t260=first(call(e->slot(1,7),Args{first(call(get(e->get("math"),lit182),Args{get(get(e->slot(1,1),lit134),lit164),get(get(e->slot(1,1),lit134),lit165)})),V(0.0),V(1.0)}));e->slot(0,12)=std::move(t260);}
{V t261=get(e->slot(0,1),lit82);e->slot(0,13)=std::move(t261);}
{V t262=first(call(e->slot(1,7),Args{first(call(get(e->get("math"),lit182),Args{get(e->slot(0,1),lit89),mul(get(e->slot(0,1),lit100),V(0.65)),mul(get(e->slot(0,1),lit94),V(0.5))})),V(0.0),V(1.0)}));e->slot(0,14)=std::move(t262);}
{V t263=first(call(e->slot(1,7),Args{add(add(add(add(add(mul(e->slot(0,10),get(e->slot(0,3),lit54)),mul(e->slot(0,14),get(e->slot(0,3),lit55))),mul(e->slot(0,9),get(e->slot(0,3),lit56))),mul(e->slot(0,11),get(e->slot(0,3),lit57))),mul(e->slot(0,13),get(e->slot(0,3),lit58))),mul(e->slot(0,12),get(e->slot(0,3),lit70))),V(0.0),get(e->slot(0,3),lit74)}));e->slot(0,15)=std::move(t263);}
{V t264=first(call(e->slot(1,7),Args{divv(e->slot(0,6),first(call(get(e->get("math"),lit182),Args{get(e->slot(0,3),lit37),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,16)=std::move(t264);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit79)};V t265=first(call(e->slot(1,12),Args{get(e->slot(0,1),lit79),e->slot(0,16),get(e->slot(0,3),lit22),e->slot(0,2)}));refs[0].put(std::move(t265));}
{V t266=first(call(e->slot(1,11),joined(Args{get(e->slot(0,3),lit34),get(e->slot(0,3),lit35)},call(e->slot(1,8),Args{get(e->slot(0,1),lit84)}))));e->slot(0,17)=std::move(t266);}
{V t267=first(call(e->slot(1,7),Args{mul(add(add(first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit159)})),first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit161)}))),first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit160)}))),V(0.33)),V(0.0),V(1.0)}));e->slot(0,18)=std::move(t267);}
{V t268=first(call(e->slot(1,11),Args{V(0.06),get(e->slot(0,3),lit51),get(e->slot(0,1),lit79)}));e->slot(0,19)=std::move(t268);}
{V t269=first(call(e->slot(1,7),Args{add(mul(get(e->slot(0,1),lit91),V(0.75)),mul(get(e->slot(0,1),lit90),V(0.25))),V(0.0),V(1.0)}));e->slot(0,20)=std::move(t269);}
{V t270=mul(first(call(e->slot(1,7),Args{add(add(add(mul(e->slot(0,17),get(e->slot(0,3),lit59)),mul(e->slot(0,18),get(e->slot(0,3),lit60))),mul(e->slot(0,19),get(e->slot(0,3),lit61))),mul(e->slot(0,20),get(e->slot(0,3),lit62))),V(0.0),get(e->slot(0,3),lit74)})),e->slot(0,4));e->slot(0,21)=std::move(t270);}
{V t271=mul(first(call(e->slot(1,7),Args{add(add(add(add(mul(e->slot(0,21),V(0.34)),mul(get(e->slot(0,1),lit91),V(0.28))),mul(get(e->slot(0,1),lit88),V(0.18))),mul(get(e->slot(0,1),lit113),V(0.12))),mul(get(e->slot(0,1),lit83),V(0.08))),V(0.0),V(1.0)})),e->slot(0,4));e->slot(0,22)=std::move(t271);}
{V t272=first(call(e->slot(1,7),Args{add(add(add(mul(e->slot(0,15),V(0.5)),mul(get(e->slot(0,1),lit89),V(0.22))),mul(get(e->slot(0,1),lit85),V(0.16))),mul(e->slot(0,9),V(0.12))),V(0.0),V(1.0)}));e->slot(0,23)=std::move(t272);}
{V t273=V(0.0);e->slot(0,24)=std::move(t273);}
if(truth(ge(get(get(e->slot(1,1),lit134),lit163),get(e->slot(0,3),lit48)))){{std::array<Ref,1> refs{Ref(e,0,24)};V t274=first(call(e->slot(1,7),Args{mul(mul(first(call(e->slot(1,11),Args{get(e->slot(0,3),lit46),V(0.75),e->slot(0,21)})),first(call(e->slot(1,11),Args{get(e->slot(0,3),lit47),V(0.85),e->slot(0,15)}))),add(add(V(0.62),mul(V(0.22),first(call(get(e->get("math"),lit182),joined(Args{first(call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit161)}))},call(e->slot(1,8),Args{get(get(e->slot(1,1),lit134),lit162)})))))),mul(V(0.16),get(e->slot(0,1),lit86)))),V(0.0),V(1.0)}));refs[0].put(std::move(t274));}
}
{V t275=sub(V(1.0),first(call(e->slot(1,11),Args{get(e->slot(0,3),lit18),mul(get(e->slot(0,3),lit17),get(e->slot(0,3),lit43)),get(e->slot(0,1),lit76)})));e->slot(0,25)=std::move(t275);}
{V t276=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit42),V(0.0),get(e->slot(0,1),lit80)}));e->slot(0,26)=std::move(t276);}
{V t277=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit36),get(e->slot(0,3),lit37),e->slot(0,8)}));e->slot(0,27)=std::move(t277);}
{V t278=first(call(e->slot(1,7),Args{first(call(get(e->get("math"),lit182),Args{e->slot(0,25),e->slot(0,26),mul(e->slot(0,27),V(0.8))})),V(0.0),V(1.0)}));e->slot(0,28)=std::move(t278);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t279=first(call(e->slot(1,12),Args{get(e->slot(0,1),lit130),e->slot(0,28),([&](){V t280=([&](){V t281=gt(e->slot(0,28),get(e->slot(0,1),lit130));return truth(t281)?V(0.04):t281;})();return !truth(t280)?V(0.22):t280;})(),e->slot(0,2)}));refs[0].put(std::move(t279));}
{V t282=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit44),get(e->slot(0,3),lit45),e->slot(0,7)}));e->slot(0,29)=std::move(t282);}
{V t283=first(call(e->slot(1,7),Args{add(mul(get(e->slot(0,1),lit130),e->slot(0,29)),mul(e->slot(0,15),V(0.25))),V(0.0),V(1.0)}));e->slot(0,30)=std::move(t283);}
{V t284=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit49),add(get(e->slot(0,3),lit49),V(1.1)),e->slot(0,5)}));e->slot(0,31)=std::move(t284);}
{V t285=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit50),V(1.0),e->slot(0,10)}));e->slot(0,32)=std::move(t285);}
{V t286=first(call(e->slot(1,7),Args{add(add(add(mul(e->slot(0,31),V(0.48)),mul(e->slot(0,32),V(0.28))),mul(get(e->slot(0,1),lit103),V(0.16))),mul(get(e->slot(0,1),lit102),V(0.08))),V(0.0),V(1.0)}));e->slot(0,33)=std::move(t286);}
{V t287=first(call(e->slot(1,7),Args{first(call(get(e->get("math"),lit182),Args{get(e->slot(0,1),lit93),get(e->slot(0,1),lit94),add(add(mul(e->slot(0,19),V(0.54)),mul(get(e->slot(0,1),lit86),V(0.28))),mul(get(e->slot(0,1),lit89),V(0.18)))})),V(0.0),V(1.0)}));e->slot(0,34)=std::move(t287);}
{V t288=first(call(e->slot(1,7),Args{sub(V(1.0),get(e->slot(0,1),lit98)),V(0.0),V(1.0)}));e->slot(0,35)=std::move(t288);}
{V t289=first(call(e->slot(1,7),Args{sub(V(1.0),get(e->slot(0,1),lit99)),V(0.0),V(1.0)}));e->slot(0,36)=std::move(t289);}
{V t290=first(call(e->slot(1,7),Args{add(add(add(add(add(add(add(mul(get(e->slot(0,1),lit95),get(e->slot(0,3),lit63)),mul(first(call(get(e->get("math"),lit182),Args{get(e->slot(0,1),lit101),get(e->slot(0,1),lit105)})),get(e->slot(0,3),lit64))),mul(get(e->slot(0,1),lit100),get(e->slot(0,3),lit65))),mul(e->slot(0,35),get(e->slot(0,3),lit66))),mul(get(e->slot(0,1),lit106),V(0.2))),mul(e->slot(0,36),V(0.18))),mul(get(e->slot(0,1),lit104),get(e->slot(0,3),lit72))),mul(mul(add(get(e->slot(0,1),lit106),get(e->slot(0,1),lit105)),V(0.5)),get(e->slot(0,3),lit73))),V(0.0),V(1.0)}));e->slot(0,37)=std::move(t290);}
{V t291=first(call(e->slot(1,7),Args{add(add(add(add(add(mul(get(e->slot(0,1),lit83),V(0.25)),mul(get(e->slot(0,1),lit82),V(0.22))),mul(sub(V(1.0),first(call(e->slot(1,7),Args{get(e->slot(0,1),lit110),V(0.0),V(1.0)}))),get(e->slot(0,3),lit67))),mul(sub(V(1.0),first(call(e->slot(1,7),Args{get(e->slot(0,1),lit81),V(0.0),V(1.0)}))),get(e->slot(0,3),lit68))),mul(e->slot(0,36),get(e->slot(0,3),lit69))),mul(get(e->slot(0,1),lit112),V(0.1))),V(0.0),V(1.0)}));e->slot(0,38)=std::move(t291);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit117)};V t292=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit117),e->slot(0,21),e->slot(0,2)}));refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t293=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit118),e->slot(0,15),e->slot(0,2)}));refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t294=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit119),e->slot(0,24),e->slot(0,2)}));refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit120)};V t295=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit120),e->slot(0,28),e->slot(0,2)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit121)};V t296=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit121),e->slot(0,30),e->slot(0,2)}));refs[0].put(std::move(t296));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit122)};V t297=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit122),e->slot(0,33),e->slot(0,2)}));refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit123)};V t298=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit123),e->slot(0,34),e->slot(0,2)}));refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t299=first(call(e->slot(1,14),Args{get(e->slot(0,1),lit125),e->slot(0,22),get(e->slot(0,3),lit26),get(e->slot(0,3),lit27),e->slot(0,2)}));refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t300=first(call(e->slot(1,14),Args{get(e->slot(0,1),lit126),e->slot(0,23),get(e->slot(0,3),lit28),get(e->slot(0,3),lit29),e->slot(0,2)}));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t301=first(call(e->slot(1,14),Args{get(e->slot(0,1),lit127),e->slot(0,37),get(e->slot(0,3),lit30),get(e->slot(0,3),lit31),e->slot(0,2)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t302=first(call(e->slot(1,14),Args{get(e->slot(0,1),lit128),e->slot(0,38),get(e->slot(0,3),lit23),get(e->slot(0,3),lit24),e->slot(0,2)}));refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t303=first(call(e->slot(1,7),Args{add(add(mul(first(call(e->slot(1,10),Args{get(e->slot(0,1),lit118),get(e->slot(0,1),lit119),get(e->slot(0,1),lit121),get(e->slot(0,1),lit126)})),V(0.45)),mul(first(call(e->slot(1,10),Args{get(e->slot(0,1),lit120),get(e->slot(0,1),lit122),get(e->slot(0,1),lit123),get(e->slot(0,1),lit127)})),V(0.35))),mul(first(call(e->slot(1,9),Args{get(e->slot(0,1),lit125),get(e->slot(0,1),lit128),get(e->slot(0,1),lit117)})),V(0.2))),V(0.0),V(1.0)}));refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t304=first(call(e->slot(1,7),Args{add(add(add(add(mul(get(e->slot(0,1),lit124),V(0.35)),mul(get(e->slot(0,1),lit127),V(0.25))),mul(get(e->slot(0,1),lit128),V(0.2))),mul(get(e->slot(0,1),lit125),V(0.12))),mul(get(e->slot(0,1),lit123),V(0.08))),V(0.0),V(1.0)}));refs[0].put(std::move(t304));}
{std::array<Ref,2> refs{Ref(e->slot(0,1),lit131),Ref(e->slot(0,1),lit132)};Args t305=call(e->slot(1,38),Args{e->slot(0,1)});refs[0].put(arg(t305,0));refs[1].put(arg(t305,1));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t306=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,3)=std::move(t306);}
{V t307=([&](){V t308=([&](){V t309=e->slot(0,2);return truth(t309)?get(get(e->slot(1,1),lit16),lit32):t309;})();return !truth(t308)?get(get(e->slot(1,1),lit16),lit33):t308;})();e->slot(0,4)=std::move(t307);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit76)};V t310=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit76),([&](){V t311=([&](){V t312=e->slot(0,2);return truth(t312)?V(0.0):t312;})();return !truth(t311)?get(get(e->slot(1,1),lit16),lit17):t311;})(),e->slot(0,4),([&](){V t313=e->slot(0,1);return !truth(t313)?V(0.016):t313;})()}));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit77)};V t314=get(e->slot(0,3),lit76);refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit78)};V t315=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit78),V(0.0),e->slot(0,4),([&](){V t316=e->slot(0,1);return !truth(t316)?V(0.016):t316;})()}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit79)};V t317=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit79),V(0.0),e->slot(0,4),([&](){V t318=e->slot(0,1);return !truth(t318)?V(0.016):t318;})()}));refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit80)};V t319=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit80),([&](){V t320=([&](){V t321=e->slot(0,2);return truth(t321)?V(0.0):t321;})();return !truth(t320)?V(1.0):t320;})(),e->slot(0,4),([&](){V t322=e->slot(0,1);return !truth(t322)?V(0.016):t322;})()}));refs[0].put(std::move(t319));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit81)};V t323=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit81),([&](){V t324=([&](){V t325=e->slot(0,2);return truth(t325)?V(0.0):t325;})();return !truth(t324)?V(1.0):t324;})(),e->slot(0,4),([&](){V t326=e->slot(0,1);return !truth(t326)?V(0.016):t326;})()}));refs[0].put(std::move(t323));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit82)};V t327=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit82),([&](){V t328=([&](){V t329=e->slot(0,2);return truth(t329)?V(1.0):t329;})();return !truth(t328)?V(0.0):t328;})(),e->slot(0,4),([&](){V t330=e->slot(0,1);return !truth(t330)?V(0.016):t330;})()}));refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit83)};V t331=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit83),V(0.0),e->slot(0,4),([&](){V t332=e->slot(0,1);return !truth(t332)?V(0.016):t332;})()}));refs[0].put(std::move(t331));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit84)};V t333=V(0.0);refs[0].put(std::move(t333));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit85)};V t334=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit85),V(0.0),e->slot(0,4),([&](){V t335=e->slot(0,1);return !truth(t335)?V(0.016):t335;})()}));refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit86)};V t336=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit86),V(0.0),e->slot(0,4),([&](){V t337=e->slot(0,1);return !truth(t337)?V(0.016):t337;})()}));refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit87)};V t338=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit87),V(0.0),e->slot(0,4),([&](){V t339=e->slot(0,1);return !truth(t339)?V(0.016):t339;})()}));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit88)};V t340=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit88),V(0.0),e->slot(0,4),([&](){V t341=e->slot(0,1);return !truth(t341)?V(0.016):t341;})()}));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit89)};V t342=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit89),V(0.0),e->slot(0,4),([&](){V t343=e->slot(0,1);return !truth(t343)?V(0.016):t343;})()}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit90)};V t344=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit90),V(0.0),e->slot(0,4),([&](){V t345=e->slot(0,1);return !truth(t345)?V(0.016):t345;})()}));refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit91)};V t346=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit91),V(0.0),e->slot(0,4),([&](){V t347=e->slot(0,1);return !truth(t347)?V(0.016):t347;})()}));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit92)};V t348=V(0.0);refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit93)};V t349=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit93),V(0.0),e->slot(0,4),([&](){V t350=e->slot(0,1);return !truth(t350)?V(0.016):t350;})()}));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit94)};V t351=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit94),V(0.0),e->slot(0,4),([&](){V t352=e->slot(0,1);return !truth(t352)?V(0.016):t352;})()}));refs[0].put(std::move(t351));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit95)};V t353=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit95),V(0.0),e->slot(0,4),([&](){V t354=e->slot(0,1);return !truth(t354)?V(0.016):t354;})()}));refs[0].put(std::move(t353));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit96)};V t355=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit96),V(0.0),e->slot(0,4),([&](){V t356=e->slot(0,1);return !truth(t356)?V(0.016):t356;})()}));refs[0].put(std::move(t355));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit97)};V t357=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit97),V(0.0),e->slot(0,4),([&](){V t358=e->slot(0,1);return !truth(t358)?V(0.016):t358;})()}));refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit98)};V t359=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit98),([&](){V t360=([&](){V t361=e->slot(0,2);return truth(t361)?V(0.0):t361;})();return !truth(t360)?V(1.0):t360;})(),e->slot(0,4),([&](){V t362=e->slot(0,1);return !truth(t362)?V(0.016):t362;})()}));refs[0].put(std::move(t359));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit99)};V t363=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit99),([&](){V t364=([&](){V t365=e->slot(0,2);return truth(t365)?V(0.0):t365;})();return !truth(t364)?V(1.0):t364;})(),e->slot(0,4),([&](){V t366=e->slot(0,1);return !truth(t366)?V(0.016):t366;})()}));refs[0].put(std::move(t363));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit100)};V t367=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit100),V(0.0),e->slot(0,4),([&](){V t368=e->slot(0,1);return !truth(t368)?V(0.016):t368;})()}));refs[0].put(std::move(t367));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit101)};V t369=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit101),V(0.0),e->slot(0,4),([&](){V t370=e->slot(0,1);return !truth(t370)?V(0.016):t370;})()}));refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit102)};V t371=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit102),V(0.0),e->slot(0,4),([&](){V t372=e->slot(0,1);return !truth(t372)?V(0.016):t372;})()}));refs[0].put(std::move(t371));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit103)};V t373=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit103),V(0.0),e->slot(0,4),([&](){V t374=e->slot(0,1);return !truth(t374)?V(0.016):t374;})()}));refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit104)};V t375=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit104),V(0.0),e->slot(0,4),([&](){V t376=e->slot(0,1);return !truth(t376)?V(0.016):t376;})()}));refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t377=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit105),V(0.0),e->slot(0,4),([&](){V t378=e->slot(0,1);return !truth(t378)?V(0.016):t378;})()}));refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit106)};V t379=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit106),V(0.0),e->slot(0,4),([&](){V t380=e->slot(0,1);return !truth(t380)?V(0.016):t380;})()}));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit107)};V t381=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit107),V(0.0),e->slot(0,4),([&](){V t382=e->slot(0,1);return !truth(t382)?V(0.016):t382;})()}));refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit108)};V t383=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit108),V(0.0),e->slot(0,4),([&](){V t384=e->slot(0,1);return !truth(t384)?V(0.016):t384;})()}));refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit109)};V t385=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit109),V(0.0),e->slot(0,4),([&](){V t386=e->slot(0,1);return !truth(t386)?V(0.016):t386;})()}));refs[0].put(std::move(t385));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit110)};V t387=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit110),([&](){V t388=([&](){V t389=e->slot(0,2);return truth(t389)?V(0.0):t389;})();return !truth(t388)?V(1.0):t388;})(),e->slot(0,4),([&](){V t390=e->slot(0,1);return !truth(t390)?V(0.016):t390;})()}));refs[0].put(std::move(t387));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit111)};V t391=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit111),([&](){V t392=([&](){V t393=e->slot(0,2);return truth(t393)?V(0.0):t393;})();return !truth(t392)?V(1.0):t392;})(),e->slot(0,4),([&](){V t394=e->slot(0,1);return !truth(t394)?V(0.016):t394;})()}));refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit112)};V t395=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit112),V(0.0),e->slot(0,4),([&](){V t396=e->slot(0,1);return !truth(t396)?V(0.016):t396;})()}));refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit113)};V t397=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit113),V(0.0),e->slot(0,4),([&](){V t398=e->slot(0,1);return !truth(t398)?V(0.016):t398;})()}));refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit114)};V t399=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit114),V(0.0),e->slot(0,4),([&](){V t400=e->slot(0,1);return !truth(t400)?V(0.016):t400;})()}));refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit115)};V t401=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit115),V(0.0),e->slot(0,4),([&](){V t402=e->slot(0,1);return !truth(t402)?V(0.016):t402;})()}));refs[0].put(std::move(t401));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit116)};V t403=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit116),V(0.0),e->slot(0,4),([&](){V t404=e->slot(0,1);return !truth(t404)?V(0.016):t404;})()}));refs[0].put(std::move(t403));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit117)};V t405=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit117),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t406=e->slot(0,1);return !truth(t406)?V(0.016):t406;})()}));refs[0].put(std::move(t405));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit118)};V t407=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit118),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t408=e->slot(0,1);return !truth(t408)?V(0.016):t408;})()}));refs[0].put(std::move(t407));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit119)};V t409=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit119),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t410=e->slot(0,1);return !truth(t410)?V(0.016):t410;})()}));refs[0].put(std::move(t409));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit120)};V t411=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit120),([&](){V t412=([&](){V t413=e->slot(0,2);return truth(t413)?V(1.0):t413;})();return !truth(t412)?V(0.0):t412;})(),get(get(e->slot(1,1),lit16),lit24),([&](){V t414=e->slot(0,1);return !truth(t414)?V(0.016):t414;})()}));refs[0].put(std::move(t411));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit121)};V t415=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit121),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t416=e->slot(0,1);return !truth(t416)?V(0.016):t416;})()}));refs[0].put(std::move(t415));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit122)};V t417=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit122),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t418=e->slot(0,1);return !truth(t418)?V(0.016):t418;})()}));refs[0].put(std::move(t417));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit123)};V t419=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit123),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t420=e->slot(0,1);return !truth(t420)?V(0.016):t420;})()}));refs[0].put(std::move(t419));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit125)};V t421=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit125),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t422=e->slot(0,1);return !truth(t422)?V(0.016):t422;})()}));refs[0].put(std::move(t421));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit126)};V t423=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit126),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t424=e->slot(0,1);return !truth(t424)?V(0.016):t424;})()}));refs[0].put(std::move(t423));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit127)};V t425=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit127),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t426=e->slot(0,1);return !truth(t426)?V(0.016):t426;})()}));refs[0].put(std::move(t425));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit128)};V t427=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit128),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t428=e->slot(0,1);return !truth(t428)?V(0.016):t428;})()}));refs[0].put(std::move(t427));}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e->slot(0,3),lit124)};V t429=get(e->slot(0,3),lit120);refs[0].put(std::move(t429));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit131)};V t430=get(e->slot(1,2),lit9);refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit132)};V t431=get(e->slot(1,3),get(e->slot(1,2),lit9));refs[0].put(std::move(t431));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,3),lit124)};V t432=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit124),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t433=e->slot(0,1);return !truth(t433)?V(0.016):t433;})()}));refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit131)};V t434=get(e->slot(1,2),lit1);refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit132)};V t435=get(e->slot(1,3),get(e->slot(1,2),lit1));refs[0].put(std::move(t435));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit129)};V t436=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit129),V(0.0),get(get(e->slot(1,1),lit16),lit24),([&](){V t437=e->slot(0,1);return !truth(t437)?V(0.016):t437;})()}));refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit133)};V t438=V(false);refs[0].put(std::move(t438));}
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,21);auto e=&storage;{V t439=get(e->slot(1,1),lit134);e->slot(0,0)=std::move(t439);}
{V t440=V(0.0);e->slot(0,1)=std::move(t440);}
{V t441=V(0.0);e->slot(0,2)=std::move(t441);}
{V t442=V(0.0);e->slot(0,3)=std::move(t442);}
{V t443=V(0.0);e->slot(0,4)=std::move(t443);}
{V t444=V(0.0);e->slot(0,5)=std::move(t444);}
{V t445=V(0.0);e->slot(0,6)=std::move(t445);}
{V t446=V(0.0);e->slot(0,7)=std::move(t446);}
{V t447=V(0.0);e->slot(0,8)=std::move(t447);}
{V t448=V(0.0);e->slot(0,9)=std::move(t448);}
{V t449=V(0.0);e->slot(0,10)=std::move(t449);}
{V t450=V(0.0);e->slot(0,11)=std::move(t450);}
{V t451=V(0.0);e->slot(0,12)=std::move(t451);}
{V t452=V(0.0);e->slot(0,13)=std::move(t452);}
{V t453=V(0.0);e->slot(0,14)=std::move(t453);}
{V t454=V(0.0);e->slot(0,15)=std::move(t454);}
{V t455=V(0.0);e->slot(0,16)=std::move(t455);}
{V t456=V(0.0);e->slot(0,17)=std::move(t456);}
{V t457=V(0.0);e->slot(0,18)=std::move(t457);}
{V t458=get(e->slot(1,2),lit1);e->slot(0,19)=std::move(t458);}
{V t459=lit1;e->slot(0,20)=std::move(t459);}
{double t460=num(V(0.0)),t461=num(V(3.0)),t462=num(V(1.0));for(double t463=t460;(t462>0?t463<=t461:t463>=t461);t463+=t462){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t463);{V t464=get(get(e->slot(1,0),lit178),e->slot(0,0));e->slot(0,1)=std::move(t464);}
{std::array<Ref,1> refs{Ref(e,1,1)};V t465=add(e->slot(1,1),([&](){V t466=get(e->slot(0,1),lit117);return !truth(t466)?V(0.0):t466;})());refs[0].put(std::move(t465));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t467=add(e->slot(1,2),([&](){V t468=get(e->slot(0,1),lit118);return !truth(t468)?V(0.0):t468;})());refs[0].put(std::move(t467));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t469=add(e->slot(1,3),([&](){V t470=get(e->slot(0,1),lit119);return !truth(t470)?V(0.0):t470;})());refs[0].put(std::move(t469));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t471=add(e->slot(1,4),([&](){V t472=get(e->slot(0,1),lit120);return !truth(t472)?V(0.0):t472;})());refs[0].put(std::move(t471));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t473=add(e->slot(1,5),([&](){V t474=get(e->slot(0,1),lit121);return !truth(t474)?V(0.0):t474;})());refs[0].put(std::move(t473));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t475=add(e->slot(1,6),([&](){V t476=get(e->slot(0,1),lit122);return !truth(t476)?V(0.0):t476;})());refs[0].put(std::move(t475));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t477=add(e->slot(1,7),([&](){V t478=get(e->slot(0,1),lit123);return !truth(t478)?V(0.0):t478;})());refs[0].put(std::move(t477));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t479=add(e->slot(1,8),([&](){V t480=get(e->slot(0,1),lit124);return !truth(t480)?V(0.0):t480;})());refs[0].put(std::move(t479));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t481=add(e->slot(1,9),([&](){V t482=get(e->slot(0,1),lit125);return !truth(t482)?V(0.0):t482;})());refs[0].put(std::move(t481));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t483=add(e->slot(1,10),([&](){V t484=get(e->slot(0,1),lit126);return !truth(t484)?V(0.0):t484;})());refs[0].put(std::move(t483));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t485=add(e->slot(1,11),([&](){V t486=get(e->slot(0,1),lit127);return !truth(t486)?V(0.0):t486;})());refs[0].put(std::move(t485));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t487=add(e->slot(1,12),([&](){V t488=get(e->slot(0,1),lit128);return !truth(t488)?V(0.0):t488;})());refs[0].put(std::move(t487));}
{std::array<Ref,1> refs{Ref(e,1,13)};V t489=add(e->slot(1,13),([&](){V t490=get(e->slot(0,1),lit100);return !truth(t490)?V(0.0):t490;})());refs[0].put(std::move(t489));}
{std::array<Ref,1> refs{Ref(e,1,14)};V t491=add(e->slot(1,14),([&](){V t492=get(e->slot(0,1),lit99);return !truth(t492)?V(1.0):t492;})());refs[0].put(std::move(t491));}
{std::array<Ref,1> refs{Ref(e,1,15)};V t493=add(e->slot(1,15),([&](){V t494=get(e->slot(0,1),lit129);return !truth(t494)?V(0.0):t494;})());refs[0].put(std::move(t493));}
{std::array<Ref,1> refs{Ref(e,1,16)};V t495=add(e->slot(1,16),first(call(e->slot(2,8),Args{([&](){V t496=get(e->slot(0,1),lit78);return !truth(t496)?V(0.0):t496;})()})));refs[0].put(std::move(t495));}
if(truth(gt(([&](){V t497=get(e->slot(0,1),lit124);return !truth(t497)?V(0.0):t497;})(),e->slot(1,17)))){{std::array<Ref,1> refs{Ref(e,1,17)};V t498=([&](){V t499=get(e->slot(0,1),lit124);return !truth(t499)?V(0.0):t499;})();refs[0].put(std::move(t498));}
{std::array<Ref,1> refs{Ref(e,1,19)};V t500=([&](){V t501=get(e->slot(0,1),lit131);return !truth(t501)?get(e->slot(2,2),lit1):t501;})();refs[0].put(std::move(t500));}
{std::array<Ref,1> refs{Ref(e,1,20)};V t502=([&](){V t503=get(e->slot(0,1),lit132);return !truth(t503)?lit1:t503;})();refs[0].put(std::move(t502));}
}
{std::array<Ref,1> refs{Ref(e,1,18)};V t504=first(call(get(e->get("math"),lit182),Args{e->slot(1,18),([&](){V t505=get(e->slot(0,1),lit118);return !truth(t505)?V(0.0):t505;})()}));refs[0].put(std::move(t504));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit139)};V t506=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t506));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit140)};V t507=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t507));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit141)};V t508=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t508));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit142)};V t509=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t509));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit143)};V t510=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t510));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit144)};V t511=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t511));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit145)};V t512=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t512));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit146)};V t513=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t513));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit147)};V t514=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t514));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit148)};V t515=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t515));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit149)};V t516=mul(e->slot(0,11),V(0.25));refs[0].put(std::move(t516));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit150)};V t517=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t517));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit151)};V t518=mul(e->slot(0,13),V(0.25));refs[0].put(std::move(t518));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit152)};V t519=mul(e->slot(0,14),V(0.25));refs[0].put(std::move(t519));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit153)};V t520=mul(e->slot(0,15),V(0.25));refs[0].put(std::move(t520));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit154)};V t521=mul(e->slot(0,16),V(0.25));refs[0].put(std::move(t521));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit155)};V t522=e->slot(0,17);refs[0].put(std::move(t522));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit156)};V t523=e->slot(0,18);refs[0].put(std::move(t523));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit157)};V t524=e->slot(0,19);refs[0].put(std::move(t524));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit158)};V t525=e->slot(0,20);refs[0].put(std::move(t525));}
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,19),Args{concat(lit300,e->slot(0,0)),([&](){V t526=get(e->slot(0,1),lit117);return !truth(t526)?V(0.0):t526;})()});
call(e->slot(1,19),Args{concat(lit301,e->slot(0,0)),([&](){V t527=get(e->slot(0,1),lit118);return !truth(t527)?V(0.0):t527;})()});
call(e->slot(1,19),Args{concat(lit302,e->slot(0,0)),([&](){V t528=get(e->slot(0,1),lit119);return !truth(t528)?V(0.0):t528;})()});
call(e->slot(1,19),Args{concat(lit303,e->slot(0,0)),([&](){V t529=get(e->slot(0,1),lit120);return !truth(t529)?V(0.0):t529;})()});
call(e->slot(1,19),Args{concat(lit304,e->slot(0,0)),([&](){V t530=get(e->slot(0,1),lit121);return !truth(t530)?V(0.0):t530;})()});
call(e->slot(1,19),Args{concat(lit305,e->slot(0,0)),([&](){V t531=get(e->slot(0,1),lit122);return !truth(t531)?V(0.0):t531;})()});
call(e->slot(1,19),Args{concat(lit306,e->slot(0,0)),([&](){V t532=get(e->slot(0,1),lit123);return !truth(t532)?V(0.0):t532;})()});
call(e->slot(1,19),Args{concat(lit307,e->slot(0,0)),([&](){V t533=get(e->slot(0,1),lit124);return !truth(t533)?V(0.0):t533;})()});
call(e->slot(1,19),Args{concat(lit308,e->slot(0,0)),([&](){V t534=get(e->slot(0,1),lit131);return !truth(t534)?V(0.0):t534;})()});
call(e->slot(1,19),Args{concat(lit309,e->slot(0,0)),([&](){V t535=get(e->slot(0,1),lit132);return !truth(t535)?lit310:t535;})()});
call(e->slot(1,19),Args{concat(lit311,e->slot(0,0)),([&](){V t536=get(e->slot(0,1),lit117);return !truth(t536)?V(0.0):t536;})()});
call(e->slot(1,19),Args{concat(lit312,e->slot(0,0)),([&](){V t537=get(e->slot(0,1),lit118);return !truth(t537)?V(0.0):t537;})()});
call(e->slot(1,19),Args{concat(lit313,e->slot(0,0)),([&](){V t538=get(e->slot(0,1),lit119);return !truth(t538)?V(0.0):t538;})()});
call(e->slot(1,19),Args{concat(lit314,e->slot(0,0)),([&](){V t539=get(e->slot(0,1),lit120);return !truth(t539)?V(0.0):t539;})()});
call(e->slot(1,19),Args{concat(lit315,e->slot(0,0)),([&](){V t540=get(e->slot(0,1),lit121);return !truth(t540)?V(0.0):t540;})()});
call(e->slot(1,19),Args{concat(lit316,e->slot(0,0)),([&](){V t541=get(e->slot(0,1),lit122);return !truth(t541)?V(0.0):t541;})()});
call(e->slot(1,19),Args{concat(lit317,e->slot(0,0)),([&](){V t542=get(e->slot(0,1),lit123);return !truth(t542)?V(0.0):t542;})()});
call(e->slot(1,19),Args{concat(lit318,e->slot(0,0)),([&](){V t543=get(e->slot(0,1),lit124);return !truth(t543)?V(0.0):t543;})()});
call(e->slot(1,19),Args{concat(lit319,e->slot(0,0)),([&](){V t544=get(e->slot(0,1),lit125);return !truth(t544)?V(0.0):t544;})()});
call(e->slot(1,19),Args{concat(lit320,e->slot(0,0)),([&](){V t545=get(e->slot(0,1),lit126);return !truth(t545)?V(0.0):t545;})()});
call(e->slot(1,19),Args{concat(lit321,e->slot(0,0)),([&](){V t546=get(e->slot(0,1),lit127);return !truth(t546)?V(0.0):t546;})()});
call(e->slot(1,19),Args{concat(lit322,e->slot(0,0)),([&](){V t547=get(e->slot(0,1),lit128);return !truth(t547)?V(0.0):t547;})()});
call(e->slot(1,19),Args{concat(lit323,e->slot(0,0)),([&](){V t548=get(e->slot(0,1),lit129);return !truth(t548)?V(0.0):t548;})()});
call(e->slot(1,19),Args{concat(lit324,e->slot(0,0)),([&](){V t549=get(e->slot(0,1),lit100);return !truth(t549)?V(0.0):t549;})()});
call(e->slot(1,19),Args{concat(lit325,e->slot(0,0)),([&](){V t550=get(e->slot(0,1),lit101);return !truth(t550)?V(0.0):t550;})()});
call(e->slot(1,19),Args{concat(lit326,e->slot(0,0)),([&](){V t551=get(e->slot(0,1),lit99);return !truth(t551)?V(1.0):t551;})()});
call(e->slot(1,19),Args{concat(lit327,e->slot(0,0)),([&](){V t552=get(e->slot(0,1),lit98);return !truth(t552)?V(1.0):t552;})()});
call(e->slot(1,19),Args{concat(lit265,e->slot(0,0)),([&](){V t553=get(e->slot(0,1),lit102);return !truth(t553)?V(0.0):t553;})()});
call(e->slot(1,19),Args{concat(lit328,e->slot(0,0)),([&](){V t554=get(e->slot(0,1),lit125);return !truth(t554)?V(0.0):t554;})()});
call(e->slot(1,19),Args{concat(lit329,e->slot(0,0)),([&](){V t555=get(e->slot(0,1),lit126);return !truth(t555)?V(0.0):t555;})()});
call(e->slot(1,19),Args{concat(lit330,e->slot(0,0)),([&](){V t556=get(e->slot(0,1),lit127);return !truth(t556)?V(0.0):t556;})()});
call(e->slot(1,19),Args{concat(lit331,e->slot(0,0)),([&](){V t557=get(e->slot(0,1),lit128);return !truth(t557)?V(0.0):t557;})()});
call(e->slot(1,19),Args{concat(lit332,e->slot(0,0)),([&](){V t558=get(e->slot(0,1),lit129);return !truth(t558)?V(0.0):t558;})()});
call(e->slot(1,19),Args{concat(lit333,e->slot(0,0)),([&](){V t559=get(e->slot(0,1),lit114);return !truth(t559)?V(0.0):t559;})()});
call(e->slot(1,19),Args{concat(lit334,e->slot(0,0)),([&](){V t560=get(e->slot(0,1),lit115);return !truth(t560)?V(0.0):t560;})()});
call(e->slot(1,19),Args{concat(lit335,e->slot(0,0)),([&](){V t561=get(e->slot(0,1),lit116);return !truth(t561)?V(0.0):t561;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit134),lit177))))){return Args{};
}
call(e->slot(1,19),Args{concat(lit336,e->slot(0,0)),([&](){V t562=get(e->slot(0,1),lit76);return !truth(t562)?V(0.0):t562;})()});
call(e->slot(1,19),Args{concat(lit337,e->slot(0,0)),([&](){V t563=get(e->slot(0,1),lit78);return !truth(t563)?V(0.0):t563;})()});
call(e->slot(1,19),Args{concat(lit338,e->slot(0,0)),([&](){V t564=get(e->slot(0,1),lit80);return !truth(t564)?V(0.0):t564;})()});
call(e->slot(1,19),Args{concat(lit339,e->slot(0,0)),([&](){V t565=get(e->slot(0,1),lit81);return !truth(t565)?V(0.0):t565;})()});
call(e->slot(1,19),Args{concat(lit340,e->slot(0,0)),([&](){V t566=get(e->slot(0,1),lit84);return !truth(t566)?V(0.0):t566;})()});
call(e->slot(1,19),Args{concat(lit341,e->slot(0,0)),([&](){V t567=get(e->slot(0,1),lit85);return !truth(t567)?V(0.0):t567;})()});
call(e->slot(1,19),Args{concat(lit342,e->slot(0,0)),([&](){V t568=get(e->slot(0,1),lit114);return !truth(t568)?V(0.0):t568;})()});
call(e->slot(1,19),Args{concat(lit343,e->slot(0,0)),([&](){V t569=get(e->slot(0,1),lit115);return !truth(t569)?V(0.0):t569;})()});
call(e->slot(1,19),Args{concat(lit344,e->slot(0,0)),([&](){V t570=get(e->slot(0,1),lit116);return !truth(t570)?V(0.0):t570;})()});
call(e->slot(1,19),Args{concat(lit345,e->slot(0,0)),([&](){V t571=get(e->slot(0,1),lit89);return !truth(t571)?V(0.0):t571;})()});
call(e->slot(1,19),Args{concat(lit346,e->slot(0,0)),([&](){V t572=get(e->slot(0,1),lit90);return !truth(t572)?V(0.0):t572;})()});
call(e->slot(1,19),Args{concat(lit347,e->slot(0,0)),([&](){V t573=get(e->slot(0,1),lit91);return !truth(t573)?V(0.0):t573;})()});
call(e->slot(1,19),Args{concat(lit348,e->slot(0,0)),([&](){V t574=get(e->slot(0,1),lit95);return !truth(t574)?V(0.0):t574;})()});
call(e->slot(1,19),Args{concat(lit349,e->slot(0,0)),([&](){V t575=get(e->slot(0,1),lit101);return !truth(t575)?V(0.0):t575;})()});
call(e->slot(1,19),Args{concat(lit350,e->slot(0,0)),([&](){V t576=get(e->slot(0,1),lit110);return !truth(t576)?V(0.0):t576;})()});
call(e->slot(1,19),Args{concat(lit351,e->slot(0,0)),([&](){V t577=get(e->slot(1,4),e->slot(0,0));return !truth(t577)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t577;})()});
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t578=get(e->slot(1,1),lit134);e->slot(0,0)=std::move(t578);}
call(e->slot(1,19),Args{lit352,([&](){V t579=get(e->slot(0,0),lit135);return !truth(t579)?lit310:t579;})()});
call(e->slot(1,19),Args{lit353,([&](){V t580=get(e->slot(0,0),lit137);return !truth(t580)?V(0.0):t580;})()});
call(e->slot(1,19),Args{lit354,([&](){V t581=([&](){V t582=get(e->slot(0,0),lit138);return truth(t582)?V(1.0):t582;})();return !truth(t581)?V(0.0):t581;})()});
call(e->slot(1,19),Args{lit355,([&](){V t583=get(e->slot(0,0),lit139);return !truth(t583)?V(0.0):t583;})()});
call(e->slot(1,19),Args{lit356,([&](){V t584=get(e->slot(0,0),lit140);return !truth(t584)?V(0.0):t584;})()});
call(e->slot(1,19),Args{lit357,([&](){V t585=get(e->slot(0,0),lit141);return !truth(t585)?V(0.0):t585;})()});
call(e->slot(1,19),Args{lit358,([&](){V t586=get(e->slot(0,0),lit142);return !truth(t586)?V(0.0):t586;})()});
call(e->slot(1,19),Args{lit359,([&](){V t587=get(e->slot(0,0),lit143);return !truth(t587)?V(0.0):t587;})()});
call(e->slot(1,19),Args{lit360,([&](){V t588=get(e->slot(0,0),lit144);return !truth(t588)?V(0.0):t588;})()});
call(e->slot(1,19),Args{lit361,([&](){V t589=get(e->slot(0,0),lit145);return !truth(t589)?V(0.0):t589;})()});
call(e->slot(1,19),Args{lit362,([&](){V t590=get(e->slot(0,0),lit146);return !truth(t590)?V(0.0):t590;})()});
call(e->slot(1,19),Args{lit363,([&](){V t591=get(e->slot(0,0),lit139);return !truth(t591)?V(0.0):t591;})()});
call(e->slot(1,19),Args{lit364,([&](){V t592=get(e->slot(0,0),lit140);return !truth(t592)?V(0.0):t592;})()});
call(e->slot(1,19),Args{lit365,([&](){V t593=get(e->slot(0,0),lit141);return !truth(t593)?V(0.0):t593;})()});
call(e->slot(1,19),Args{lit366,([&](){V t594=get(e->slot(0,0),lit142);return !truth(t594)?V(0.0):t594;})()});
call(e->slot(1,19),Args{lit367,([&](){V t595=get(e->slot(0,0),lit143);return !truth(t595)?V(0.0):t595;})()});
call(e->slot(1,19),Args{lit368,([&](){V t596=get(e->slot(0,0),lit144);return !truth(t596)?V(0.0):t596;})()});
call(e->slot(1,19),Args{lit369,([&](){V t597=get(e->slot(0,0),lit145);return !truth(t597)?V(0.0):t597;})()});
call(e->slot(1,19),Args{lit370,([&](){V t598=get(e->slot(0,0),lit146);return !truth(t598)?V(0.0):t598;})()});
call(e->slot(1,19),Args{lit371,([&](){V t599=get(e->slot(0,0),lit139);return !truth(t599)?V(0.0):t599;})()});
call(e->slot(1,19),Args{lit372,([&](){V t600=get(e->slot(0,0),lit140);return !truth(t600)?V(0.0):t600;})()});
call(e->slot(1,19),Args{lit373,([&](){V t601=get(e->slot(0,0),lit141);return !truth(t601)?V(0.0):t601;})()});
call(e->slot(1,19),Args{lit374,([&](){V t602=get(e->slot(0,0),lit142);return !truth(t602)?V(0.0):t602;})()});
call(e->slot(1,19),Args{lit375,([&](){V t603=get(e->slot(0,0),lit143);return !truth(t603)?V(0.0):t603;})()});
call(e->slot(1,19),Args{lit376,([&](){V t604=get(e->slot(0,0),lit144);return !truth(t604)?V(0.0):t604;})()});
call(e->slot(1,19),Args{lit377,([&](){V t605=get(e->slot(0,0),lit145);return !truth(t605)?V(0.0):t605;})()});
call(e->slot(1,19),Args{lit378,([&](){V t606=get(e->slot(0,0),lit146);return !truth(t606)?V(0.0):t606;})()});
call(e->slot(1,19),Args{lit379,([&](){V t607=get(e->slot(0,0),lit147);return !truth(t607)?V(0.0):t607;})()});
call(e->slot(1,19),Args{lit380,([&](){V t608=get(e->slot(0,0),lit148);return !truth(t608)?V(0.0):t608;})()});
call(e->slot(1,19),Args{lit381,([&](){V t609=get(e->slot(0,0),lit149);return !truth(t609)?V(0.0):t609;})()});
call(e->slot(1,19),Args{lit382,([&](){V t610=get(e->slot(0,0),lit150);return !truth(t610)?V(0.0):t610;})()});
call(e->slot(1,19),Args{lit383,([&](){V t611=get(e->slot(0,0),lit151);return !truth(t611)?V(0.0):t611;})()});
call(e->slot(1,19),Args{lit384,([&](){V t612=get(e->slot(0,0),lit152);return !truth(t612)?V(1.0):t612;})()});
call(e->slot(1,19),Args{lit385,([&](){V t613=get(e->slot(0,0),lit147);return !truth(t613)?V(0.0):t613;})()});
call(e->slot(1,19),Args{lit386,([&](){V t614=get(e->slot(0,0),lit148);return !truth(t614)?V(0.0):t614;})()});
call(e->slot(1,19),Args{lit387,([&](){V t615=get(e->slot(0,0),lit149);return !truth(t615)?V(0.0):t615;})()});
call(e->slot(1,19),Args{lit388,([&](){V t616=get(e->slot(0,0),lit150);return !truth(t616)?V(0.0):t616;})()});
call(e->slot(1,19),Args{lit389,([&](){V t617=get(e->slot(0,0),lit151);return !truth(t617)?V(0.0):t617;})()});
call(e->slot(1,19),Args{lit390,([&](){V t618=get(e->slot(0,0),lit152);return !truth(t618)?V(1.0):t618;})()});
call(e->slot(1,19),Args{lit391,([&](){V t619=get(e->slot(0,0),lit153);return !truth(t619)?V(0.0):t619;})()});
call(e->slot(1,19),Args{lit392,([&](){V t620=get(e->slot(0,0),lit154);return !truth(t620)?V(0.0):t620;})()});
call(e->slot(1,19),Args{lit393,([&](){V t621=get(e->slot(0,0),lit155);return !truth(t621)?V(0.0):t621;})()});
call(e->slot(1,19),Args{lit394,([&](){V t622=get(e->slot(0,0),lit156);return !truth(t622)?V(0.0):t622;})()});
call(e->slot(1,19),Args{lit395,([&](){V t623=get(e->slot(0,0),lit157);return !truth(t623)?V(0.0):t623;})()});
call(e->slot(1,19),Args{lit396,([&](){V t624=get(e->slot(0,0),lit158);return !truth(t624)?lit1:t624;})()});
call(e->slot(1,19),Args{lit397,([&](){V t625=get(e->slot(0,0),lit153);return !truth(t625)?V(0.0):t625;})()});
call(e->slot(1,19),Args{lit398,([&](){V t626=get(e->slot(0,0),lit155);return !truth(t626)?V(0.0):t626;})()});
call(e->slot(1,19),Args{lit399,([&](){V t627=get(e->slot(0,0),lit157);return !truth(t627)?V(0.0):t627;})()});
call(e->slot(1,19),Args{lit400,([&](){V t628=get(e->slot(0,0),lit158);return !truth(t628)?lit1:t628;})()});
if(truth(V(!truth(get(e->slot(0,0),lit177))))){return Args{};
}
call(e->slot(1,19),Args{lit401,([&](){V t629=get(e->slot(0,0),lit163);return !truth(t629)?V(0.0):t629;})()});
call(e->slot(1,19),Args{lit402,([&](){V t630=get(e->slot(0,0),lit159);return !truth(t630)?V(0.0):t630;})()});
call(e->slot(1,19),Args{lit403,([&](){V t631=get(e->slot(0,0),lit160);return !truth(t631)?V(0.0):t631;})()});
call(e->slot(1,19),Args{lit404,([&](){V t632=get(e->slot(0,0),lit161);return !truth(t632)?V(0.0):t632;})()});
call(e->slot(1,19),Args{lit405,([&](){V t633=get(e->slot(0,0),lit162);return !truth(t633)?V(0.0):t633;})()});
call(e->slot(1,19),Args{lit406,([&](){V t634=([&](){V t635=get(e->slot(0,0),lit166);return truth(t635)?V(1.0):t635;})();return !truth(t634)?V(0.0):t634;})()});
call(e->slot(1,19),Args{lit407,([&](){V t636=([&](){V t637=get(e->slot(0,0),lit167);return truth(t637)?V(1.0):t637;})();return !truth(t636)?V(0.0):t636;})()});
call(e->slot(1,19),Args{lit408,([&](){V t638=([&](){V t639=get(e->slot(0,0),lit168);return truth(t639)?V(1.0):t639;})();return !truth(t638)?V(0.0):t638;})()});
call(e->slot(1,19),Args{lit409,([&](){V t640=([&](){V t641=get(e->slot(0,0),lit169);return truth(t641)?V(1.0):t641;})();return !truth(t640)?V(0.0):t640;})()});
call(e->slot(1,19),Args{lit410,([&](){V t642=([&](){V t643=get(e->slot(0,0),lit170);return truth(t643)?V(1.0):t643;})();return !truth(t642)?V(0.0):t642;})()});
call(e->slot(1,19),Args{lit411,([&](){V t644=([&](){V t645=get(e->slot(0,0),lit171);return truth(t645)?V(1.0):t645;})();return !truth(t644)?V(0.0):t644;})()});
call(e->slot(1,19),Args{lit412,([&](){V t646=([&](){V t647=get(e->slot(0,0),lit172);return truth(t647)?V(1.0):t647;})();return !truth(t646)?V(0.0):t646;})()});
call(e->slot(1,19),Args{lit413,([&](){V t648=([&](){V t649=get(e->slot(0,0),lit173);return truth(t649)?V(1.0):t649;})();return !truth(t648)?V(0.0):t648;})()});
call(e->slot(1,19),Args{lit414,([&](){V t650=([&](){V t651=get(e->slot(0,0),lit174);return truth(t651)?V(1.0):t651;})();return !truth(t650)?V(0.0):t650;})()});
call(e->slot(1,19),Args{lit415,([&](){V t652=([&](){V t653=get(e->slot(0,0),lit175);return truth(t653)?V(1.0):t653;})();return !truth(t652)?V(0.0):t652;})()});
return Args{};});
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t654=num(V(0.0)),t655=num(V(3.0)),t656=num(V(1.0));for(double t657=t654;(t656>0?t657<=t655:t657>=t655);t657+=t656){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t657);call(e->slot(2,42),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit134),lit178),e->slot(0,0))});
}}
call(e->slot(1,43),Args{});
return Args{};});
e->slot(0,45)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit135)};V t658=e->slot(0,1);refs[0].put(std::move(t658));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit138)};V t659=V(false);refs[0].put(std::move(t659));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit159)};V t660=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit159),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t660));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit160)};V t661=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit160),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t661));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit161)};V t662=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit161),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t662));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit162)};V t663=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit162),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t663));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit163)};V t664=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit163),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t664));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit164)};V t665=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit164),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t665));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit165)};V t666=first(call(e->slot(1,12),Args{get(get(e->slot(1,1),lit134),lit165),V(0.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,0)}));refs[0].put(std::move(t666));}
{double t667=num(V(0.0)),t668=num(V(3.0)),t669=num(V(1.0));for(double t670=t667;(t669>0?t670<=t668:t670>=t668);t670+=t669){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t670);call(e->slot(2,40),Args{e->slot(0,0),e->slot(1,0),eq(e->slot(1,1),lit416)});
}}
call(e->slot(1,41),Args{});
call(e->slot(1,44),Args{});
return Args{};});
Ref(e->slot(0,1),lit417).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit135)};V t671=lit136;refs[0].put(std::move(t671));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit177)};V t672=V(true);refs[0].put(std::move(t672));}
call(e->slot(1,44),Args{});
return Args{};}));
Ref(e->slot(0,1),lit418).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit137)};V t673=add(([&](){V t674=get(get(e->slot(1,1),lit134),lit137);return !truth(t674)?V(0.0):t674;})(),V(1.0));refs[0].put(std::move(t673));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t675=first(call(e->slot(1,7),Args{first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit16),lit20),get(get(e->slot(1,1),lit16),lit21)}));refs[0].put(std::move(t675));}
call(e->slot(1,21),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t676=([&](){V t677=e->slot(0,1);return !truth(t677)?first(call(e->slot(1,20),Args{})):t677;})();refs[0].put(std::move(t676));}
if(truth(V(!truth(e->slot(0,1))))){call(e->slot(1,29),Args{});
call(e->slot(1,45),Args{e->slot(0,0),lit419});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,24),Args{e->slot(0,1)})))))){call(e->slot(1,29),Args{});
call(e->slot(1,30),Args{e->slot(0,1)});
call(e->slot(1,45),Args{e->slot(0,0),lit420});
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit135)};V t678=lit421;refs[0].put(std::move(t678));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit138)};V t679=V(true);refs[0].put(std::move(t679));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit134),lit163)};V t680=first(call(e->slot(1,23),Args{e->slot(0,1)}));refs[0].put(std::move(t680));}
call(e->slot(1,29),Args{});
call(e->slot(1,30),Args{e->slot(0,1)});
{double t681=num(V(0.0)),t682=num(V(3.0)),t683=num(V(1.0));for(double t684=t681;(t683>0?t684<=t682:t684>=t682);t684+=t683){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t684);{V t685=first(call(e->slot(2,25),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t685);}
{V t686=get(get(get(e->slot(2,1),lit134),lit178),e->slot(0,0));e->slot(0,2)=std::move(t686);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(0,2),lit133)};V t687=V(true);refs[0].put(std::move(t687));}
call(e->slot(2,37),Args{e->slot(0,0),e->slot(0,2),e->slot(0,1),e->slot(1,0)});
call(e->slot(2,39),Args{e->slot(0,0),e->slot(0,2),e->slot(1,0)});
}else{call(e->slot(2,40),Args{e->slot(0,0),e->slot(1,0),V(true)});
}
call(e->slot(2,42),Args{e->slot(0,0),e->slot(0,2)});
}}
call(e->slot(1,41),Args{});
call(e->slot(1,43),Args{});
return Args{};}));
Ref(e->slot(0,1),lit422).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit423).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t688=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t688);}
return Args{([&](){V t689=([&](){V t690=e->slot(0,1);return truth(t690)?get(e->slot(0,1),lit117):t690;})();return !truth(t689)?V(0.0):t689;})()};
return Args{};}));
Ref(e->slot(0,1),lit424).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t691=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t691);}
return Args{([&](){V t692=([&](){V t693=e->slot(0,1);return truth(t693)?get(e->slot(0,1),lit118):t693;})();return !truth(t692)?V(0.0):t692;})()};
return Args{};}));
Ref(e->slot(0,1),lit425).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t694=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t694);}
return Args{([&](){V t695=([&](){V t696=e->slot(0,1);return truth(t696)?get(e->slot(0,1),lit125):t696;})();return !truth(t695)?V(0.0):t695;})()};
return Args{};}));
Ref(e->slot(0,1),lit426).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t697=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t697);}
return Args{([&](){V t698=([&](){V t699=e->slot(0,1);return truth(t699)?get(e->slot(0,1),lit127):t699;})();return !truth(t698)?V(0.0):t698;})()};
return Args{};}));
Ref(e->slot(0,1),lit427).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t700=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t700);}
return Args{([&](){V t701=([&](){V t702=e->slot(0,1);return truth(t702)?get(e->slot(0,1),lit124):t702;})();return !truth(t701)?V(0.0):t701;})()};
return Args{};}));
Ref(e->slot(0,1),lit428).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t703=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t703);}
return Args{([&](){V t704=([&](){V t705=e->slot(0,1);return truth(t705)?get(e->slot(0,1),lit129):t705;})();return !truth(t704)?V(0.0):t704;})()};
return Args{};}));
Ref(e->slot(0,1),lit429).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t706=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0));e->slot(0,1)=std::move(t706);}
return Args{([&](){V t707=([&](){V t708=e->slot(0,1);return truth(t708)?get(e->slot(0,1),lit132):t708;})();return !truth(t707)?lit310:t707;})()};
return Args{};}));
Ref(e->slot(0,1),lit430).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t709=get(get(e->slot(1,1),lit134),lit158);return !truth(t709)?lit1:t709;})(),([&](){V t710=get(get(e->slot(1,1),lit134),lit157);return !truth(t710)?V(0.0):t710;})()};
return Args{};}));
Ref(e->slot(0,1),lit431).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){return Args{get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,0))};
}
return Args{get(e->slot(1,1),lit134)};
return Args{};}));
Ref(e->slot(0,1),lit432).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t711=([&](){V t712=first(call(e->get("tonumber"),Args{([&](){V t713=e->slot(0,0);return !truth(t713)?V(0.0):t713;})()}));return !truth(t712)?V(0.0):t712;})();e->slot(0,1)=std::move(t711);}
{V t714=([&](){V t715=get(get(get(e->slot(1,1),lit134),lit178),e->slot(0,1));return !truth(t715)?get(get(get(e->slot(1,1),lit134),lit178),V(0.0)):t715;})();e->slot(0,2)=std::move(t714);}
return call(get(e->get("string"),lit433),Args{concat(lit434,concat(lit435,concat(lit436,concat(lit437,concat(lit438,lit439))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit134),lit135)})),([&](){V t716=get(get(e->slot(1,1),lit134),lit137);return !truth(t716)?V(0.0):t716;})(),([&](){V t717=([&](){V t718=get(get(e->slot(1,1),lit134),lit138);return truth(t718)?lit440:t718;})();return !truth(t717)?lit441:t717;})(),first(call(e->get("tostring"),Args{([&](){V t719=get(get(e->slot(1,1),lit134),lit158);return !truth(t719)?lit1:t719;})()})),first(call(e->get("tostring"),Args{([&](){V t720=get(e->slot(1,4),e->slot(0,1));return !truth(t720)?e->slot(0,1):t720;})()})),first(call(e->get("tostring"),Args{([&](){V t721=get(e->slot(0,2),lit132);return !truth(t721)?lit310:t721;})()})),([&](){V t722=get(e->slot(0,2),lit124);return !truth(t722)?V(0.0):t722;})(),([&](){V t723=get(e->slot(0,2),lit129);return !truth(t723)?V(0.0):t723;})(),([&](){V t724=get(e->slot(0,2),lit117);return !truth(t724)?V(0.0):t724;})(),([&](){V t725=get(e->slot(0,2),lit118);return !truth(t725)?V(0.0):t725;})(),([&](){V t726=get(e->slot(0,2),lit119);return !truth(t726)?V(0.0):t726;})(),([&](){V t727=get(e->slot(0,2),lit120);return !truth(t727)?V(0.0):t727;})(),([&](){V t728=get(e->slot(0,2),lit121);return !truth(t728)?V(0.0):t728;})(),([&](){V t729=get(e->slot(0,2),lit122);return !truth(t729)?V(0.0):t729;})(),([&](){V t730=get(e->slot(0,2),lit123);return !truth(t730)?V(0.0):t730;})(),([&](){V t731=get(e->slot(0,2),lit125);return !truth(t731)?V(0.0):t731;})(),([&](){V t732=get(e->slot(0,2),lit126);return !truth(t732)?V(0.0):t732;})(),([&](){V t733=get(e->slot(0,2),lit127);return !truth(t733)?V(0.0):t733;})(),([&](){V t734=get(e->slot(0,2),lit128);return !truth(t734)?V(0.0):t734;})(),([&](){V t735=get(e->slot(0,2),lit76);return !truth(t735)?V(0.0):t735;})(),([&](){V t736=get(e->slot(0,2),lit78);return !truth(t736)?V(0.0):t736;})(),([&](){V t737=get(e->slot(0,2),lit80);return !truth(t737)?V(0.0):t737;})(),([&](){V t738=get(e->slot(0,2),lit81);return !truth(t738)?V(0.0):t738;})(),([&](){V t739=get(e->slot(0,2),lit100);return !truth(t739)?V(0.0):t739;})(),([&](){V t740=([&](){V t741=get(get(e->slot(1,1),lit134),lit166);return truth(t741)?lit440:t741;})();return !truth(t740)?lit441:t740;})(),([&](){V t742=([&](){V t743=get(get(e->slot(1,1),lit134),lit167);return truth(t743)?lit440:t743;})();return !truth(t742)?lit441:t742;})(),([&](){V t744=([&](){V t745=get(get(e->slot(1,1),lit134),lit168);return truth(t745)?lit440:t745;})();return !truth(t744)?lit441:t744;})(),([&](){V t746=([&](){V t747=get(get(e->slot(1,1),lit134),lit172);return truth(t747)?lit440:t747;})();return !truth(t746)?lit441:t746;})(),([&](){V t748=([&](){V t749=get(get(e->slot(1,1),lit134),lit173);return truth(t749)?lit440:t749;})();return !truth(t748)?lit441:t748;})(),([&](){V t750=([&](){V t751=get(get(e->slot(1,1),lit134),lit174);return truth(t751)?lit440:t751;})();return !truth(t750)?lit441:t750;})(),([&](){V t752=([&](){V t753=get(get(e->slot(1,1),lit134),lit169);return truth(t753)?lit440:t753;})();return !truth(t752)?lit441:t752;})(),([&](){V t754=([&](){V t755=get(get(e->slot(1,1),lit134),lit175);return truth(t755)?lit440:t755;})();return !truth(t754)?lit441:t754;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

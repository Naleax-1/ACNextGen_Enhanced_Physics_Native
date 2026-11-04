// Generated native C++ from pinned load_path.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("BALANCED");
static const V lit6("TIRE_PATH");
static const V lit7("SUSPENSION_PATH");
static const V lit8("COMPLIANCE_PATH");
static const V lit9("BODY_PATH");
static const V lit10("CONTACT_LIMIT");
static const V lit11("LOAD_PEAK");
static const V lit12("IMPACT_PATH");
static const V lit13("UNLOADED");
static const V lit14("FORCE_LEAK");
static const V lit15("ROAD_INPUT");
static const V lit16("PHASE");
static const V lit17("params");
static const V lit18("loadReference");
static const V lit19("loadGood");
static const V lit20("loadUnload");
static const V lit21("loadPeakNorm");
static const V lit22("loadRateReference");
static const V lit23("dltAsAbsoluteAbove");
static const V lit24("suspForceReference");
static const V lit25("damperVelocityRef");
static const V lit26("verticalDampingRef");
static const V lit27("latFlexRef");
static const V lit28("longFlexRef");
static const V lit29("carcassNormRef");
static const V lit30("complianceLossRef");
static const V lit31("forceLeakRef");
static const V lit32("tireWeight");
static const V lit33("suspensionWeight");
static const V lit34("complianceWeight");
static const V lit35("bodyWeight");
static const V lit36("contactWeight");
static const V lit37("roadWeight");
static const V lit38("roadInputGain");
static const V lit39("chassisInputGain");
static const V lit40("contactLossGain");
static const V lit41("complianceLossGain");
static const V lit42("forceLeakGain");
static const V lit43("bodyAbsorbGain");
static const V lit44("delayLossGain");
static const V lit45("dirtyReturnGain");
static const V lit46("tireDeliveryGain");
static const V lit47("suspensionDeliveryGain");
static const V lit48("complianceDeliveryLoss");
static const V lit49("workTauRise");
static const V lit50("workTauFall");
static const V lit51("delayTau");
static const V lit52("efficiencyTau");
static const V lit53("integrityTau");
static const V lit54("deliveryTau");
static const V lit55("leakTau");
static const V lit56("maxWork");
static const V lit57("minEfficiency");
static const V lit58("maxEfficiency");
static const V lit59("minDt");
static const V lit60("maxDt");
static const V lit61("noCarDecayTau");
static const V lit62("debugStoreInterval");
static const V lit63("state");
static const V lit64("status");
static const V lit65("INIT");
static const V lit66("updateCount");
static const V lit67("wheelsValid");
static const V lit68("avgWork");
static const V lit69("avgEfficiency");
static const V lit70("avgIntegrity");
static const V lit71("avgLoss");
static const V lit72("avgDelay");
static const V lit73("avgTireDelivery");
static const V lit74("avgForceLeak");
static const V lit75("avgRoadWork");
static const V lit76("avgVerticalFlow");
static const V lit77("maxLoss");
static const V lit78("frontWork");
static const V lit79("rearWork");
static const V lit80("leftWork");
static const V lit81("rightWork");
static const V lit82("frontIntegrity");
static const V lit83("rearIntegrity");
static const V lit84("frontDelivery");
static const V lit85("rearDelivery");
static const V lit86("tireShare");
static const V lit87("suspensionShare");
static const V lit88("complianceShare");
static const V lit89("bodyShare");
static const V lit90("contactShare");
static const V lit91("roadShare");
static const V lit92("dominantPathId");
static const V lit93("dominantPath");
static const V lit94("loadLinked");
static const V lit95("contactLinked");
static const V lit96("carcassLinked");
static const V lit97("damperLinked");
static const V lit98("complianceLinked");
static const V lit99("bodyLinked");
static const V lit100("suspensionLinked");
static const V lit101("recoveryLinked");
static const V lit102("memoryLinked");
static const V lit103("debugStoreTimer");
static const V lit104("debugStoreNow");
static const V lit105("wheels");
static const V lit106("load");
static const V lit107("prevLoad");
static const V lit108("loadRate");
static const V lit109("loadNorm");
static const V lit110("work");
static const V lit111("rawWork");
static const V lit112("energy");
static const V lit113("efficiency");
static const V lit114("integrity");
static const V lit115("loss");
static const V lit116("delay");
static const V lit117("tireDelivery");
static const V lit118("forceLeak");
static const V lit119("bodyAbsorb");
static const V lit120("pathCompression");
static const V lit121("verticalFlow");
static const V lit122("tireWork");
static const V lit123("suspensionWork");
static const V lit124("complianceWork");
static const V lit125("bodyWork");
static const V lit126("contactWork");
static const V lit127("roadWork");
static const V lit128("contactQuality");
static const V lit129("contactTrust");
static const V lit130("contactStability");
static const V lit131("combinedSlip");
static const V lit132("contactLimit");
static const V lit133("carcassDeformation");
static const V lit134("sidewallEnergy");
static const V lit135("contactDelay");
static const V lit136("returnForce");
static const V lit137("carcassSupport");
static const V lit138("carcassGripGate");
static const V lit139("verticalNorm");
static const V lit140("carcassHysteresis");
static const V lit141("damperHyst");
static const V lit142("damperMemory");
static const V lit143("damperImpact");
static const V lit144("damperVelocity");
static const V lit145("verticalDamping");
static const V lit146("hystereticDamping");
static const V lit147("verticalPulse");
static const V lit148("dampingHeat");
static const V lit149("roadMemory");
static const V lit150("complianceEnergy");
static const V lit151("latFlex");
static const V lit152("longFlex");
static const V lit153("complianceForceLeak");
static const V lit154("complianceLoadPathLoss");
static const V lit155("bushingEnergy");
static const V lit156("knuckleDeflection");
static const V lit157("subframeDeflection");
static const V lit158("bodyDeflection");
static const V lit159("tireMemory");
static const V lit160("memoryGrip");
static const V lit161("dirtyReturn");
static const V lit162("bite");
static const V lit163("snapRisk");
static const V lit164("recoveryRate");
static const V lit165("suspensionForce");
static const V lit166("phaseId");
static const V lit167("phaseText");
static const V lit168("active");
static const V lit169("debug");
static const V lit170("huge");
static const V lit171("abs");
static const V lit172("max");
static const V lit173("safeField");
static const V lit174("safeLoadRaw");
static const V lit175("safeStore");
static const V lit176("getCar");
static const V lit177("loadK");
static const V lit178("ngp_contact_load_");
static const V lit179("ngp_tire_state_load_");
static const V lit180("ngp_sprung_load_");
static const V lit181("ngp_dlt_load_");
static const V lit182("ngp_contact_quality_");
static const V lit183("ngp_tire_contact_quality_");
static const V lit184("ngp_tcr_quality_");
static const V lit185("ngp_tc_contact_");
static const V lit186("ngp_tire_contact_");
static const V lit187("ngp_contact_trust_");
static const V lit188("ngp_tire_contact_trust_");
static const V lit189("ngp_contact_stability_score_");
static const V lit190("ngp_contact_stability_");
static const V lit191("ngp_contact_combined_slip_");
static const V lit192("ngp_tire_force_combined_slip_");
static const V lit193("ngp_tdyn_combined_slip_");
static const V lit194("ngp_contact_loss_");
static const V lit195("ngp_tire_contact_loss_");
static const V lit196("ngp_tcr_contact_loss_");
static const V lit197("ngp_tire_deformation_");
static const V lit198("ngp_carcass_deformation_");
static const V lit199("ngp_tire_sidewall_energy_");
static const V lit200("ngp_carcass_sidewall_energy_");
static const V lit201("ngp_tire_contact_delay_");
static const V lit202("ngp_carcass_contact_delay_");
static const V lit203("ngp_tire_return_force_");
static const V lit204("ngp_carcass_return_force_");
static const V lit205("ngp_carcass_support_");
static const V lit206("ngp_contact_carcass_support_");
static const V lit207("ngp_carcass_grip_gate_");
static const V lit208("ngp_contact_grip_gate_");
static const V lit209("ngp_carcass_vertical_norm_");
static const V lit210("ngp_carcass_vertical_deflect_");
static const V lit211("ngp_contact_vertical_score_");
static const V lit212("ngp_carcass_hysteresis_");
static const V lit213("ngp_tire_carcass_hyst_");
static const V lit214("ngp_contact_hysteresis_");
static const V lit215("ngp_damper_hyst_");
static const V lit216("ngp_hyst_damper_");
static const V lit217("ngp_damper_hyst_memory_");
static const V lit218("ngp_road_damper_memory_");
static const V lit219("ngp_damper_hyst_impact_");
static const V lit220("ngp_damper_impact_");
static const V lit221("ngp_damper_hyst_velocity_");
static const V lit222("ngp_damper_velocity_");
static const V lit223("ngp_susp_damper_velocity_");
static const V lit224("ngp_damper_vertical_");
static const V lit225("ngp_vertical_damping_");
static const V lit226("ngp_damper_hysteretic_");
static const V lit227("ngp_hysteretic_damping_");
static const V lit228("ngp_damper_vertical_pulse_");
static const V lit229("ngp_road_vertical_pulse_");
static const V lit230("ngp_damper_heat_");
static const V lit231("ngp_damper_hyst_heat_");
static const V lit232("ngp_damper_road_memory_");
static const V lit233("ngp_compliance_energy_");
static const V lit234("ngp_compliance_stack_energy_");
static const V lit235("ngp_cs_energy_");
static const V lit236("ngp_compliance_lat_flex_");
static const V lit237("ngp_arm_lat_flex_");
static const V lit238("ngp_compliance_long_flex_");
static const V lit239("ngp_arm_long_flex_");
static const V lit240("ngp_compliance_force_leak_");
static const V lit241("ngp_force_path_loss_");
static const V lit242("ngp_lp_force_leak_");
static const V lit243("ngp_compliance_load_path_loss_");
static const V lit244("ngp_load_path_compliance_loss_");
static const V lit245("ngp_compliance_bushing_energy_");
static const V lit246("ngp_bushing_energy_");
static const V lit247("ngp_compliance_knuckle_deflection_");
static const V lit248("ngp_knuckle_deflection_");
static const V lit249("ngp_compliance_subframe_deflection_");
static const V lit250("ngp_subframe_deflection_");
static const V lit251("ngp_compliance_body_deflection_");
static const V lit252("ngp_body_compliance_");
static const V lit253("ngp_tire_memory_");
static const V lit254("ngp_memory_");
static const V lit255("ngp_rubber_memory_");
static const V lit256("ngp_memory_grip_");
static const V lit257("ngp_tire_memory_grip_");
static const V lit258("ngp_slip_dirty_return_");
static const V lit259("ngp_dirty_return_");
static const V lit260("ngp_slip_bite_");
static const V lit261("ngp_recovery_bite_");
static const V lit262("ngp_slip_snap_risk_");
static const V lit263("ngp_snap_risk_");
static const V lit264("ngp_slip_recovery_rate_");
static const V lit265("ngp_recovery_rate_");
static const V lit266("ngp_susp_");
static const V lit267("ngp_susp_int_damper_");
static const V lit268("ngp_susp_int_force_");
static const V lit269("ngp_susp_integrated_force_");
static const V lit270("ngp_damper_force_");
static const V lit271("ngp_body_heave_input");
static const V lit272("ngp_rbi_heave");
static const V lit273("ngp_body_heave");
static const V lit274("ngp_body_pitch_input");
static const V lit275("ngp_pitch_cg");
static const V lit276("ngp_body_pitch");
static const V lit277("ngp_body_roll_input");
static const V lit278("ngp_roll_cg");
static const V lit279("ngp_body_roll");
static const V lit280("ngp_body_yaw_hint");
static const V lit281("ngp_chassis_flex_yaw");
static const V lit282("ngp_body_yaw_hint_live");
static const V lit283("ngp_chassis_energy");
static const V lit284("ngp_chassis_flex_energy");
static const V lit285("ngp_body_rigidity_energy");
static const V lit286("ngp_chassis_compliance");
static const V lit287("ngp_body_flex");
static const V lit288("ngp_compliance_body_flex");
static const V lit289("ngp_subframe_twist");
static const V lit290("ngp_compliance_subframe_twist");
static const V lit291("ngp_rear_axle_windup");
static const V lit292("ngp_compliance_rear_axle_windup");
static const V lit293("ngp_driveline_windup");
static const V lit294("ngp_impact_root_value");
static const V lit295("ngp_impact_value");
static const V lit296("UNKNOWN");
static const V lit297("ngp_load_path_work_");
static const V lit298("ngp_load_path_energy_");
static const V lit299("ngp_load_path_efficiency_");
static const V lit300("ngp_load_path_integrity_");
static const V lit301("ngp_load_path_loss_");
static const V lit302("ngp_load_path_delay_");
static const V lit303("ngp_load_path_tire_delivery_");
static const V lit304("ngp_load_path_tire_");
static const V lit305("ngp_load_path_suspension_");
static const V lit306("ngp_load_path_compliance_");
static const V lit307("ngp_load_path_body_");
static const V lit308("ngp_load_path_contact_");
static const V lit309("ngp_load_path_road_");
static const V lit310("ngp_load_path_force_leak_");
static const V lit311("ngp_load_path_body_absorb_");
static const V lit312("ngp_load_path_compression_");
static const V lit313("ngp_load_path_vertical_flow_");
static const V lit314("ngp_load_path_contact_limit_");
static const V lit315("ngp_load_path_phase_id_");
static const V lit316("ngp_load_path_phase_");
static const V lit317("ngp_load_path_load_");
static const V lit318("ngp_load_path_load_rate_");
static const V lit319("ngp_lp_work_");
static const V lit320("ngp_lp_eff_");
static const V lit321("ngp_lp_integrity_");
static const V lit322("ngp_lp_loss_");
static const V lit323("ngp_lp_delay_");
static const V lit324("ngp_lp_tire_");
static const V lit325("ngp_lp_susp_");
static const V lit326("ngp_lp_comp_");
static const V lit327("ngp_lp_body_");
static const V lit328("ngp_lp_contact_");
static const V lit329("ngp_lp_road_");
static const V lit330("ngp_lp_tire_delivery_");
static const V lit331("ngp_lp_vertical_flow_");
static const V lit332("ngp_load_path_status");
static const V lit333("ngp_load_path_update_count");
static const V lit334("ngp_load_path_wheels_valid");
static const V lit335("ngp_load_path_avg_work");
static const V lit336("ngp_load_path_avg_efficiency");
static const V lit337("ngp_load_path_avg_integrity");
static const V lit338("ngp_load_path_avg_loss");
static const V lit339("ngp_load_path_avg_delay");
static const V lit340("ngp_load_path_avg_tire_delivery");
static const V lit341("ngp_load_path_avg_force_leak");
static const V lit342("ngp_load_path_avg_road_work");
static const V lit343("ngp_load_path_avg_vertical_flow");
static const V lit344("ngp_load_path_max_work");
static const V lit345("ngp_load_path_max_loss");
static const V lit346("ngp_load_path_front_work");
static const V lit347("ngp_load_path_rear_work");
static const V lit348("ngp_load_path_left_work");
static const V lit349("ngp_load_path_right_work");
static const V lit350("ngp_load_path_front_integrity");
static const V lit351("ngp_load_path_rear_integrity");
static const V lit352("ngp_load_path_front_delivery");
static const V lit353("ngp_load_path_rear_delivery");
static const V lit354("ngp_load_path_tire_share");
static const V lit355("ngp_load_path_suspension_share");
static const V lit356("ngp_load_path_compliance_share");
static const V lit357("ngp_load_path_body_share");
static const V lit358("ngp_load_path_contact_share");
static const V lit359("ngp_load_path_road_share");
static const V lit360("ngp_load_path_dominant_id");
static const V lit361("ngp_load_path_dominant");
static const V lit362("ngp_lp_avg_work");
static const V lit363("ngp_lp_avg_eff");
static const V lit364("ngp_lp_avg_integrity");
static const V lit365("ngp_lp_avg_loss");
static const V lit366("ngp_lp_avg_force_leak");
static const V lit367("ngp_lp_rear_delivery");
static const V lit368("ngp_lp_front_delivery");
static const V lit369("ngp_lp_road_share");
static const V lit370("ngp_lp_dominant");
static const V lit371("ngp_load_path_load_linked");
static const V lit372("ngp_load_path_contact_linked");
static const V lit373("ngp_load_path_carcass_linked");
static const V lit374("ngp_load_path_damper_linked");
static const V lit375("ngp_load_path_compliance_linked");
static const V lit376("ngp_load_path_body_linked");
static const V lit377("ngp_load_path_suspension_linked");
static const V lit378("ngp_load_path_recovery_linked");
static const V lit379("ngp_load_path_memory_linked");
static const V lit380("init");
static const V lit381("update");
static const V lit382("BAD DT");
static const V lit383("NO CAR");
static const V lit384("NO WHEELS");
static const V lit385("RUNNING");
static const V lit386("getWork");
static const V lit387("getEfficiency");
static const V lit388("getIntegrity");
static const V lit389("getTireDelivery");
static const V lit390("getLoss");
static const V lit391("getForceLeak");
static const V lit392("getDominantPath");
static const V lit393("getState");
static const V lit394("debugStr");
static const V lit395("format");
static const V lit396("Status %s / Count %.0f / Wheels %s / Dominant %s\n");
static const V lit397("%s Work %.3f Eff %.3f Int %.3f Loss %.3f Delay %.3f\n");
static const V lit398("Tire %.2f Susp %.2f Comp %.2f Body %.2f Contact %.2f Road %.2f\n");
static const V lit399("Delivery %.2f Leak %.2f VFlow %.2f Load %.0f Rate %+.0f\n");
static const V lit400("Links L:%s CQ:%s TC:%s DH:%s CS:%s B:%s S:%s R:%s");
static const V lit401("OK");
static const V lit402("NIL");
V load_load_path(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(36);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,lit5,V(1.0));set(z,lit6,V(2.0));set(z,lit7,V(3.0));set(z,lit8,V(4.0));set(z,lit9,V(5.0));set(z,lit10,V(6.0));set(z,lit11,V(7.0));set(z,lit12,V(8.0));set(z,lit13,V(9.0));set(z,lit14,V(10.0));set(z,lit15,V(11.0));return z;})();e->slot(0,3)=std::move(t4);}
{V t5=([&](){V z=table();set(z,get(e->slot(0,3),lit5),lit5);set(z,get(e->slot(0,3),lit6),lit6);set(z,get(e->slot(0,3),lit7),lit7);set(z,get(e->slot(0,3),lit8),lit8);set(z,get(e->slot(0,3),lit9),lit9);set(z,get(e->slot(0,3),lit10),lit10);set(z,get(e->slot(0,3),lit11),lit11);set(z,get(e->slot(0,3),lit12),lit12);set(z,get(e->slot(0,3),lit13),lit13);set(z,get(e->slot(0,3),lit14),lit14);set(z,get(e->slot(0,3),lit15),lit15);return z;})();e->slot(0,4)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit16)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit17)};V t7=([&](){V z=table();set(z,lit18,V(3200.0));set(z,lit19,V(900.0));set(z,lit20,V(250.0));set(z,lit21,V(1.45));set(z,lit22,V(85000.0));set(z,lit23,V(900.0));set(z,lit24,V(2500.0));set(z,lit25,V(0.35));set(z,lit26,V(1.0));set(z,lit27,V(0.035));set(z,lit28,V(0.03));set(z,lit29,V(1.0));set(z,lit30,V(1.0));set(z,lit31,V(1.0));set(z,lit32,V(0.25));set(z,lit33,V(0.22));set(z,lit34,V(0.22));set(z,lit35,V(0.14));set(z,lit36,V(0.17));set(z,lit37,V(0.12));set(z,lit38,V(0.4));set(z,lit39,V(0.35));set(z,lit40,V(0.28));set(z,lit41,V(0.24));set(z,lit42,V(0.3));set(z,lit43,V(0.16));set(z,lit44,V(0.2));set(z,lit45,V(0.14));set(z,lit46,V(0.62));set(z,lit47,V(0.16));set(z,lit48,V(0.22));set(z,lit49,V(0.065));set(z,lit50,V(0.17));set(z,lit51,V(0.125));set(z,lit52,V(0.105));set(z,lit53,V(0.09));set(z,lit54,V(0.09));set(z,lit55,V(0.08));set(z,lit56,V(1.0));set(z,lit57,V(0.0));set(z,lit58,V(1.0));set(z,lit59,V(0.0005));set(z,lit60,V(0.05));set(z,lit61,V(0.22));set(z,lit62,V(0.25));return z;})();refs[0].put(std::move(t7));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit63)};V t8=([&](){V z=table();set(z,lit64,lit65);set(z,lit66,V(0.0));set(z,lit67,V(false));set(z,lit68,V(0.0));set(z,lit69,V(1.0));set(z,lit70,V(1.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(1.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit56,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(1.0));set(z,lit83,V(1.0));set(z,lit84,V(1.0));set(z,lit85,V(1.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,get(e->slot(0,3),lit5));set(z,lit93,lit5);set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(false));set(z,lit103,V(999.0));set(z,lit104,V(true));set(z,lit105,([&](){V z=table();return z;})());return z;})();refs[0].put(std::move(t8));}
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V z=table();set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(1.0));set(z,lit114,V(1.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(1.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(0.0));set(z,lit128,V(1.0));set(z,lit129,V(1.0));set(z,lit130,V(1.0));set(z,lit131,V(0.0));set(z,lit132,V(0.0));set(z,lit133,V(0.0));set(z,lit134,V(0.0));set(z,lit135,V(0.0));set(z,lit136,V(0.0));set(z,lit137,V(1.0));set(z,lit138,V(1.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(0.0));set(z,lit143,V(0.0));set(z,lit144,V(0.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(0.0));set(z,lit151,V(0.0));set(z,lit152,V(0.0));set(z,lit153,V(0.0));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,V(0.0));set(z,lit158,V(0.0));set(z,lit159,V(0.0));set(z,lit160,V(1.0));set(z,lit161,V(0.0));set(z,lit162,V(0.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(0.0));set(z,lit166,get(e->slot(1,3),lit5));set(z,lit167,lit5);set(z,lit168,V(false));return z;})()};
return Args{};});
{double t9=num(V(0.0)),t10=num(V(3.0)),t11=num(V(1.0));for(double t12=t9;(t11>0?t12<=t10:t12>=t10);t12+=t11){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t12);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0))};V t13=first(call(e->slot(1,5),Args{}));refs[0].put(std::move(t13));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),e->slot(0,0))};V t14=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));refs[0].put(std::move(t14));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit169)};V t15=get(e->slot(0,1),lit63);refs[0].put(std::move(t15));}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t16=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t16);}
if(truth(([&](){V t17=([&](){V t18=([&](){V t19=eq(e->slot(0,2),V());return !truth(t19)?ne(e->slot(0,2),e->slot(0,2)):t19;})();return !truth(t18)?eq(e->slot(0,2),get(e->get("math"),lit170)):t18;})();return !truth(t17)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit170)))):t17;})())){return Args{([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t21=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t21);}
if(truth(([&](){V t22=([&](){V t23=([&](){V t24=eq(e->slot(0,1),V());return !truth(t24)?ne(e->slot(0,1),e->slot(0,1)):t24;})();return !truth(t23)?eq(e->slot(0,1),get(e->get("math"),lit170)):t23;})();return !truth(t22)?eq(e->slot(0,1),V(-num(get(e->get("math"),lit170)))):t22;})())){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t25=first(call(e->slot(1,6),Args{e->slot(0,0),([&](){V t26=e->slot(0,1);return !truth(t26)?V(0.0):t26;})()}));refs[0].put(std::move(t25));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit171),call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t27=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t28=first(call(e->slot(1,6),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t29=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t30=first(call(e->slot(1,6),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t30));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,8),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit172),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t31=([&](){V t32=ge(e->slot(0,2),e->slot(0,1));return truth(t32)?V(1.0):t32;})();return !truth(t31)?V(0.0):t31;})()};
}
{V t33=first(call(e->slot(1,8),Args{divv(sub(first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)})),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t33);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
{V t34=get(e->slot(0,0),lit173);e->slot(0,12)=std::move(t34);}
{V t35=get(e->slot(0,0),lit174);e->slot(0,13)=std::move(t35);}
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t36=first(call(e->slot(1,13),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t36);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t37=e->slot(0,1);return !truth(t37)?V(0.0):t37;})()};
}
return call(e->slot(1,6),Args{e->slot(0,2),([&](){V t38=e->slot(0,1);return !truth(t38)?V(0.0):t38;})()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t39=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t39);}
{double t40=num(V(1.0)),t41=num(length(e->slot(0,1))),t42=num(V(1.0));for(double t43=t40;(t42>0?t43<=t41:t43>=t41);t43+=t42){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t43);{V t44=first(call(e->slot(2,13),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t44);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,6),Args{e->slot(0,1),([&](){V t45=e->slot(1,0);return !truth(t45)?V(0.0):t45;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
if(truth(eq(e->slot(0,0),V()))){return Args{V(),V()};
}
return Args{e->slot(0,0),V()};
return Args{};});
{V t46=get(e->slot(0,0),lit175);e->slot(0,16)=std::move(t46);}
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t47=V(!truth(e->get("ac")));return !truth(t47)?V(!truth(get(e->get("ac"),lit176))):t47;})())){return Args{V()};
}
{Args t48=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit176),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t48,0);e->slot(0,1)=arg(t48,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit103)};V t49=add(([&](){V t50=get(get(e->slot(1,1),lit63),lit103);return !truth(t50)?V(0.0):t50;})(),([&](){V t51=e->slot(0,0);return !truth(t51)?V(0.0):t51;})());refs[0].put(std::move(t49));}
if(truth(ge(get(get(e->slot(1,1),lit63),lit103),get(get(e->slot(1,1),lit17),lit62)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit103)};V t52=V(0.0);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit104)};V t53=V(true);refs[0].put(std::move(t53));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit104)};V t54=V(false);refs[0].put(std::move(t54));}
}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t55=first(call(e->slot(1,12),Args{e->slot(0,0),lit105,V()}));e->slot(0,2)=std::move(t55);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t56=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t57=get(e->slot(1,2),e->slot(1,1));return !truth(t57)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t57;})()};
return Args{};})});e->slot(0,3)=arg(t56,0);e->slot(0,4)=arg(t56,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t58=get(e->slot(1,1),lit63);e->slot(0,0)=std::move(t58);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit94)};V t59=V(false);refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit95)};V t60=V(false);refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit96)};V t61=V(false);refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit97)};V t62=V(false);refs[0].put(std::move(t62));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit98)};V t63=V(false);refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit99)};V t64=V(false);refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit100)};V t65=V(false);refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit101)};V t66=V(false);refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit102)};V t67=V(false);refs[0].put(std::move(t67));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t68=V();e->slot(0,2)=std::move(t68);}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t69=([&](){V z=table();set(z,V(1.0),lit106);set(z,V(2.0),lit177);return z;})();e->slot(0,0)=std::move(t69);}
{double t70=num(V(1.0)),t71=num(length(e->slot(0,0))),t72=num(V(1.0));for(double t73=t70;(t72>0?t73<=t71:t73>=t71);t73+=t72){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t73);{V t74=first(call(e->slot(3,7),call(e->slot(3,12),Args{e->slot(2,1),get(e->slot(1,0),e->slot(0,0)),V()})));e->slot(0,1)=std::move(t74);}
if(truth(([&](){V t75=ne(e->slot(0,1),V());return truth(t75)?gt(first(call(get(e->get("math"),lit171),Args{e->slot(0,1)})),V(1.0)):t75;})())){{std::array<Ref,1> refs{Ref(e,2,2)};V t76=e->slot(0,1);refs[0].put(std::move(t76));}
break;
}
}}
}
if(truth(ne(e->slot(0,2),V()))){return call(get(e->get("math"),lit171),Args{e->slot(0,2)});
}
{V t77=first(call(e->slot(1,13),Args{concat(lit178,e->slot(0,0))}));e->slot(0,3)=std::move(t77);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit94)};V t78=V(true);refs[0].put(std::move(t78));}
return call(get(e->get("math"),lit171),call(e->slot(1,6),Args{e->slot(0,3),get(get(e->slot(1,1),lit17),lit18)}));
}
{V t79=first(call(e->slot(1,13),Args{concat(lit179,e->slot(0,0))}));e->slot(0,4)=std::move(t79);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit94)};V t80=V(true);refs[0].put(std::move(t80));}
return call(get(e->get("math"),lit171),call(e->slot(1,6),Args{e->slot(0,4),get(get(e->slot(1,1),lit17),lit18)}));
}
{V t81=first(call(e->slot(1,13),Args{concat(lit180,e->slot(0,0))}));e->slot(0,5)=std::move(t81);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit94)};V t82=V(true);refs[0].put(std::move(t82));}
return call(get(e->get("math"),lit171),call(e->slot(1,6),Args{e->slot(0,5),get(get(e->slot(1,1),lit17),lit18)}));
}
{V t83=first(call(e->slot(1,13),Args{concat(lit181,e->slot(0,0))}));e->slot(0,6)=std::move(t83);}
if(truth(ne(e->slot(0,6),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit63),lit94)};V t84=V(true);refs[0].put(std::move(t84));}
{V t85=first(call(e->slot(2,6),Args{e->slot(1,6),V(0.0)}));e->slot(0,0)=std::move(t85);}
if(truth(gt(first(call(get(e->get("math"),lit171),Args{e->slot(0,0)})),get(get(e->slot(2,1),lit17),lit23)))){return call(get(e->get("math"),lit171),Args{e->slot(0,0)});
}
return call(get(e->get("math"),lit172),Args{V(0.0),add(get(get(e->slot(2,1),lit17),lit18),e->slot(0,0))});
}
return Args{get(get(e->slot(1,1),lit17),lit18)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t86=call(e->slot(1,15),Args{V(),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0)),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0))});e->slot(0,2)=arg(t86,0);e->slot(0,3)=arg(t86,1);}
{Args t87=call(e->slot(1,15),Args{V(),concat(lit187,e->slot(0,0)),concat(lit188,e->slot(0,0))});e->slot(0,4)=arg(t87,0);e->slot(0,5)=arg(t87,1);}
{Args t88=call(e->slot(1,15),Args{V(),concat(lit189,e->slot(0,0)),concat(lit190,e->slot(0,0))});e->slot(0,6)=arg(t88,0);e->slot(0,7)=arg(t88,1);}
{Args t89=call(e->slot(1,15),Args{V(),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0)),concat(lit193,e->slot(0,0))});e->slot(0,8)=arg(t89,0);e->slot(0,9)=arg(t89,1);}
{Args t90=call(e->slot(1,15),Args{V(),concat(lit194,e->slot(0,0)),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0))});e->slot(0,10)=arg(t90,0);e->slot(0,11)=arg(t90,1);}
if(truth(([&](){V t91=([&](){V t92=([&](){V t93=([&](){V t94=e->slot(0,3);return !truth(t94)?e->slot(0,5):t94;})();return !truth(t93)?e->slot(0,7):t93;})();return !truth(t92)?e->slot(0,9):t92;})();return !truth(t91)?e->slot(0,11):t91;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit95)};V t95=V(true);refs[0].put(std::move(t95));}
}
if(truth(([&](){V t96=eq(e->slot(0,2),V());return truth(t96)?ne(e->slot(0,10),V()):t96;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t97=sub(V(1.0),first(call(e->slot(1,8),Args{e->slot(0,10),V(0.0),V(1.0)})));refs[0].put(std::move(t97));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t98=first(call(e->slot(1,8),Args{first(call(e->slot(1,6),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t99=first(call(e->slot(1,8),Args{first(call(e->slot(1,6),Args{e->slot(0,4),get(e->slot(0,1),lit128)})),V(0.0),V(1.2)}));refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t100=first(call(e->slot(1,8),Args{first(call(e->slot(1,6),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t101=first(call(e->slot(1,8),Args{first(call(e->slot(1,6),Args{e->slot(0,8),V(0.0)})),V(0.0),V(2.5)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit132)};V t102=first(call(e->slot(1,8),Args{add(add(mul(sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,1),lit128),V(0.0),V(1.0)}))),V(0.5)),mul(sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,1),lit129),V(0.0),V(1.0)}))),V(0.3))),mul(get(e->slot(0,1),lit131),V(0.2))),V(0.0),V(1.0)}));refs[0].put(std::move(t102));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,18);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t103=call(e->slot(1,15),Args{V(0.0),concat(lit197,e->slot(0,0)),concat(lit198,e->slot(0,0))});e->slot(0,2)=arg(t103,0);e->slot(0,3)=arg(t103,1);}
{Args t104=call(e->slot(1,15),Args{V(0.0),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0))});e->slot(0,4)=arg(t104,0);e->slot(0,5)=arg(t104,1);}
{Args t105=call(e->slot(1,15),Args{V(0.0),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0))});e->slot(0,6)=arg(t105,0);e->slot(0,7)=arg(t105,1);}
{Args t106=call(e->slot(1,15),Args{V(0.0),concat(lit203,e->slot(0,0)),concat(lit204,e->slot(0,0))});e->slot(0,8)=arg(t106,0);e->slot(0,9)=arg(t106,1);}
{Args t107=call(e->slot(1,15),Args{V(1.0),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0))});e->slot(0,10)=arg(t107,0);e->slot(0,11)=arg(t107,1);}
{Args t108=call(e->slot(1,15),Args{V(1.0),concat(lit207,e->slot(0,0)),concat(lit208,e->slot(0,0))});e->slot(0,12)=arg(t108,0);e->slot(0,13)=arg(t108,1);}
{Args t109=call(e->slot(1,15),Args{V(0.0),concat(lit209,e->slot(0,0)),concat(lit210,e->slot(0,0)),concat(lit211,e->slot(0,0))});e->slot(0,14)=arg(t109,0);e->slot(0,15)=arg(t109,1);}
{Args t110=call(e->slot(1,15),Args{V(0.0),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit214,e->slot(0,0))});e->slot(0,16)=arg(t110,0);e->slot(0,17)=arg(t110,1);}
if(truth(([&](){V t111=([&](){V t112=([&](){V t113=([&](){V t114=([&](){V t115=([&](){V t116=([&](){V t117=e->slot(0,3);return !truth(t117)?e->slot(0,5):t117;})();return !truth(t116)?e->slot(0,7):t116;})();return !truth(t115)?e->slot(0,9):t115;})();return !truth(t114)?e->slot(0,11):t114;})();return !truth(t113)?e->slot(0,13):t113;})();return !truth(t112)?e->slot(0,15):t112;})();return !truth(t111)?e->slot(0,17):t111;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit96)};V t118=V(true);refs[0].put(std::move(t118));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit133)};V t119=first(call(e->slot(1,8),Args{e->slot(0,2),V(0.0),V(1.5)}));refs[0].put(std::move(t119));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t120=first(call(e->slot(1,8),Args{e->slot(0,4),V(0.0),V(1.5)}));refs[0].put(std::move(t120));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t121=first(call(e->slot(1,8),Args{e->slot(0,6),V(0.0),V(1.5)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit136)};V t122=first(call(e->slot(1,8),Args{e->slot(0,8),V(0.0),V(1.5)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit137)};V t123=first(call(e->slot(1,8),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit138)};V t124=first(call(e->slot(1,8),Args{e->slot(0,12),V(0.0),V(1.2)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit139)};V t125=first(call(e->slot(1,8),Args{e->slot(0,14),V(0.0),V(1.5)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit140)};V t126=first(call(e->slot(1,8),Args{e->slot(0,16),V(0.0),V(1.2)}));refs[0].put(std::move(t126));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,20);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t127=call(e->slot(1,15),Args{V(0.0),concat(lit215,e->slot(0,0)),concat(lit216,e->slot(0,0))});e->slot(0,2)=arg(t127,0);e->slot(0,3)=arg(t127,1);}
{Args t128=call(e->slot(1,15),Args{V(0.0),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0))});e->slot(0,4)=arg(t128,0);e->slot(0,5)=arg(t128,1);}
{Args t129=call(e->slot(1,15),Args{V(0.0),concat(lit219,e->slot(0,0)),concat(lit220,e->slot(0,0))});e->slot(0,6)=arg(t129,0);e->slot(0,7)=arg(t129,1);}
{Args t130=call(e->slot(1,15),Args{V(0.0),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0)),concat(lit223,e->slot(0,0))});e->slot(0,8)=arg(t130,0);e->slot(0,9)=arg(t130,1);}
{Args t131=call(e->slot(1,15),Args{V(0.0),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0))});e->slot(0,10)=arg(t131,0);e->slot(0,11)=arg(t131,1);}
{Args t132=call(e->slot(1,15),Args{V(0.0),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0))});e->slot(0,12)=arg(t132,0);e->slot(0,13)=arg(t132,1);}
{Args t133=call(e->slot(1,15),Args{V(0.0),concat(lit228,e->slot(0,0)),concat(lit229,e->slot(0,0))});e->slot(0,14)=arg(t133,0);e->slot(0,15)=arg(t133,1);}
{Args t134=call(e->slot(1,15),Args{V(0.0),concat(lit230,e->slot(0,0)),concat(lit231,e->slot(0,0))});e->slot(0,16)=arg(t134,0);e->slot(0,17)=arg(t134,1);}
{Args t135=call(e->slot(1,15),Args{V(0.0),concat(lit232,e->slot(0,0)),concat(lit218,e->slot(0,0))});e->slot(0,18)=arg(t135,0);e->slot(0,19)=arg(t135,1);}
if(truth(([&](){V t136=([&](){V t137=([&](){V t138=([&](){V t139=([&](){V t140=([&](){V t141=([&](){V t142=([&](){V t143=e->slot(0,3);return !truth(t143)?e->slot(0,5):t143;})();return !truth(t142)?e->slot(0,7):t142;})();return !truth(t141)?e->slot(0,9):t141;})();return !truth(t140)?e->slot(0,11):t140;})();return !truth(t139)?e->slot(0,13):t139;})();return !truth(t138)?e->slot(0,15):t138;})();return !truth(t137)?e->slot(0,17):t137;})();return !truth(t136)?e->slot(0,19):t136;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit97)};V t144=V(true);refs[0].put(std::move(t144));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit141)};V t145=first(call(e->slot(1,8),Args{e->slot(0,2),V(0.0),V(1.5)}));refs[0].put(std::move(t145));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit142)};V t146=first(call(e->slot(1,8),Args{e->slot(0,4),V(0.0),V(1.5)}));refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit143)};V t147=first(call(e->slot(1,8),Args{e->slot(0,6),V(0.0),V(1.5)}));refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t148=first(call(e->slot(1,6),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit145)};V t149=first(call(e->slot(1,8),Args{e->slot(0,10),V(0.0),V(1.5)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit146)};V t150=first(call(e->slot(1,8),Args{e->slot(0,12),V(0.0),V(1.5)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit147)};V t151=first(call(e->slot(1,8),Args{e->slot(0,14),V(0.0),V(1.5)}));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit148)};V t152=first(call(e->slot(1,8),Args{e->slot(0,16),V(0.0),V(1.5)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit149)};V t153=first(call(e->slot(1,8),Args{e->slot(0,18),V(0.0),V(1.5)}));refs[0].put(std::move(t153));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,20);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t154=call(e->slot(1,15),Args{V(0.0),concat(lit233,e->slot(0,0)),concat(lit234,e->slot(0,0)),concat(lit235,e->slot(0,0))});e->slot(0,2)=arg(t154,0);e->slot(0,3)=arg(t154,1);}
{Args t155=call(e->slot(1,15),Args{V(0.0),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0))});e->slot(0,4)=arg(t155,0);e->slot(0,5)=arg(t155,1);}
{Args t156=call(e->slot(1,15),Args{V(0.0),concat(lit238,e->slot(0,0)),concat(lit239,e->slot(0,0))});e->slot(0,6)=arg(t156,0);e->slot(0,7)=arg(t156,1);}
{Args t157=call(e->slot(1,15),Args{V(0.0),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0))});e->slot(0,8)=arg(t157,0);e->slot(0,9)=arg(t157,1);}
{Args t158=call(e->slot(1,15),Args{V(0.0),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0))});e->slot(0,10)=arg(t158,0);e->slot(0,11)=arg(t158,1);}
{Args t159=call(e->slot(1,15),Args{V(0.0),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0))});e->slot(0,12)=arg(t159,0);e->slot(0,13)=arg(t159,1);}
{Args t160=call(e->slot(1,15),Args{V(0.0),concat(lit247,e->slot(0,0)),concat(lit248,e->slot(0,0))});e->slot(0,14)=arg(t160,0);e->slot(0,15)=arg(t160,1);}
{Args t161=call(e->slot(1,15),Args{V(0.0),concat(lit249,e->slot(0,0)),concat(lit250,e->slot(0,0))});e->slot(0,16)=arg(t161,0);e->slot(0,17)=arg(t161,1);}
{Args t162=call(e->slot(1,15),Args{V(0.0),concat(lit251,e->slot(0,0)),concat(lit252,e->slot(0,0))});e->slot(0,18)=arg(t162,0);e->slot(0,19)=arg(t162,1);}
if(truth(([&](){V t163=([&](){V t164=([&](){V t165=([&](){V t166=([&](){V t167=([&](){V t168=([&](){V t169=([&](){V t170=e->slot(0,3);return !truth(t170)?e->slot(0,5):t170;})();return !truth(t169)?e->slot(0,7):t169;})();return !truth(t168)?e->slot(0,9):t168;})();return !truth(t167)?e->slot(0,11):t167;})();return !truth(t166)?e->slot(0,13):t166;})();return !truth(t165)?e->slot(0,15):t165;})();return !truth(t164)?e->slot(0,17):t164;})();return !truth(t163)?e->slot(0,19):t163;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit98)};V t171=V(true);refs[0].put(std::move(t171));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit150)};V t172=first(call(e->slot(1,8),Args{e->slot(0,2),V(0.0),V(1.5)}));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit151)};V t173=first(call(e->slot(1,6),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit152)};V t174=first(call(e->slot(1,6),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit153)};V t175=first(call(e->slot(1,8),Args{e->slot(0,8),V(0.0),V(1.5)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit154)};V t176=first(call(e->slot(1,8),Args{e->slot(0,10),V(0.0),V(1.5)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit155)};V t177=first(call(e->slot(1,8),Args{e->slot(0,12),V(0.0),V(1.5)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit156)};V t178=first(call(e->slot(1,8),Args{e->slot(0,14),V(0.0),V(1.5)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit157)};V t179=first(call(e->slot(1,8),Args{e->slot(0,16),V(0.0),V(1.5)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit158)};V t180=first(call(e->slot(1,8),Args{e->slot(0,18),V(0.0),V(1.5)}));refs[0].put(std::move(t180));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t181=call(e->slot(1,15),Args{V(0.0),concat(lit253,e->slot(0,0)),concat(lit254,e->slot(0,0)),concat(lit255,e->slot(0,0))});e->slot(0,2)=arg(t181,0);e->slot(0,3)=arg(t181,1);}
{Args t182=call(e->slot(1,15),Args{V(1.0),concat(lit256,e->slot(0,0)),concat(lit257,e->slot(0,0))});e->slot(0,4)=arg(t182,0);e->slot(0,5)=arg(t182,1);}
{Args t183=call(e->slot(1,15),Args{V(0.0),concat(lit258,e->slot(0,0)),concat(lit259,e->slot(0,0))});e->slot(0,6)=arg(t183,0);e->slot(0,7)=arg(t183,1);}
{Args t184=call(e->slot(1,15),Args{V(0.0),concat(lit260,e->slot(0,0)),concat(lit261,e->slot(0,0))});e->slot(0,8)=arg(t184,0);e->slot(0,9)=arg(t184,1);}
{Args t185=call(e->slot(1,15),Args{V(0.0),concat(lit262,e->slot(0,0)),concat(lit263,e->slot(0,0))});e->slot(0,10)=arg(t185,0);e->slot(0,11)=arg(t185,1);}
{Args t186=call(e->slot(1,15),Args{V(0.0),concat(lit264,e->slot(0,0)),concat(lit265,e->slot(0,0))});e->slot(0,12)=arg(t186,0);e->slot(0,13)=arg(t186,1);}
if(truth(([&](){V t187=e->slot(0,3);return !truth(t187)?e->slot(0,5):t187;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit102)};V t188=V(true);refs[0].put(std::move(t188));}
}
if(truth(([&](){V t189=([&](){V t190=([&](){V t191=e->slot(0,7);return !truth(t191)?e->slot(0,9):t191;})();return !truth(t190)?e->slot(0,11):t190;})();return !truth(t189)?e->slot(0,13):t189;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit101)};V t192=V(true);refs[0].put(std::move(t192));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit159)};V t193=first(call(e->slot(1,8),Args{e->slot(0,2),V(0.0),V(1.0)}));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit160)};V t194=first(call(e->slot(1,8),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t195=first(call(e->slot(1,8),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit162)};V t196=first(call(e->slot(1,8),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit163)};V t197=first(call(e->slot(1,8),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit164)};V t198=first(call(e->slot(1,8),Args{e->slot(0,12),V(0.0),V(1.2)}));refs[0].put(std::move(t198));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t199=call(e->slot(1,15),Args{V(0.0),concat(lit266,e->slot(0,0)),concat(lit267,e->slot(0,0)),concat(lit268,e->slot(0,0)),concat(lit269,e->slot(0,0)),concat(lit270,e->slot(0,0))});e->slot(0,2)=arg(t199,0);e->slot(0,3)=arg(t199,1);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit100)};V t200=V(true);refs[0].put(std::move(t200));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit165)};V t201=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t201));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,19);auto e=&storage;{Args t202=call(e->slot(1,15),Args{V(0.0),lit271,lit272,lit273});e->slot(0,0)=arg(t202,0);e->slot(0,1)=arg(t202,1);}
{Args t203=call(e->slot(1,15),Args{V(0.0),lit274,lit275,lit276});e->slot(0,2)=arg(t203,0);e->slot(0,3)=arg(t203,1);}
{Args t204=call(e->slot(1,15),Args{V(0.0),lit277,lit278,lit279});e->slot(0,4)=arg(t204,0);e->slot(0,5)=arg(t204,1);}
{Args t205=call(e->slot(1,15),Args{V(0.0),lit280,lit281,lit282});e->slot(0,6)=arg(t205,0);e->slot(0,7)=arg(t205,1);}
{Args t206=call(e->slot(1,15),Args{V(0.0),lit283,lit284,lit285,lit286});e->slot(0,8)=arg(t206,0);e->slot(0,9)=arg(t206,1);}
{Args t207=call(e->slot(1,15),Args{V(0.0),lit287,lit288,lit281});e->slot(0,10)=arg(t207,0);e->slot(0,11)=arg(t207,1);}
{Args t208=call(e->slot(1,15),Args{V(0.0),lit289,lit290});e->slot(0,12)=arg(t208,0);e->slot(0,13)=arg(t208,1);}
{Args t209=call(e->slot(1,15),Args{V(0.0),lit291,lit292,lit293});e->slot(0,14)=arg(t209,0);e->slot(0,15)=arg(t209,1);}
{Args t210=call(e->slot(1,15),Args{V(0.0),lit294,lit295});e->slot(0,16)=arg(t210,0);e->slot(0,17)=arg(t210,1);}
if(truth(([&](){V t211=([&](){V t212=([&](){V t213=([&](){V t214=([&](){V t215=([&](){V t216=([&](){V t217=([&](){V t218=e->slot(0,1);return !truth(t218)?e->slot(0,3):t218;})();return !truth(t217)?e->slot(0,5):t217;})();return !truth(t216)?e->slot(0,7):t216;})();return !truth(t215)?e->slot(0,9):t215;})();return !truth(t214)?e->slot(0,11):t214;})();return !truth(t213)?e->slot(0,13):t213;})();return !truth(t212)?e->slot(0,15):t212;})();return !truth(t211)?e->slot(0,17):t211;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit99)};V t219=V(true);refs[0].put(std::move(t219));}
}
{V t220=first(call(e->slot(1,8),Args{add(add(add(add(add(add(add(add(mul(first(call(e->slot(1,9),Args{e->slot(0,0)})),get(get(e->slot(1,1),lit17),lit38)),mul(first(call(e->slot(1,9),Args{e->slot(0,2)})),V(0.25))),mul(first(call(e->slot(1,9),Args{e->slot(0,4)})),V(0.25))),mul(first(call(e->slot(1,9),Args{e->slot(0,6)})),V(0.2))),mul(first(call(e->slot(1,9),Args{e->slot(0,8)})),get(get(e->slot(1,1),lit17),lit39))),mul(first(call(e->slot(1,9),Args{e->slot(0,10)})),V(0.22))),mul(first(call(e->slot(1,9),Args{e->slot(0,12)})),V(0.18))),mul(first(call(e->slot(1,9),Args{e->slot(0,14)})),V(0.14))),mul(first(call(e->slot(1,9),Args{e->slot(0,16)})),V(0.18))),V(0.0),V(1.5)}));e->slot(0,18)=std::move(t220);}
return Args{e->slot(0,18),e->slot(0,10),e->slot(0,12),e->slot(0,14)};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(([&](){V t221=lt(get(e->slot(0,0),lit106),get(get(e->slot(1,1),lit17),lit20));return !truth(t221)?lt(get(e->slot(0,0),lit128),V(0.12)):t221;})())){return Args{get(e->slot(1,3),lit13),get(e->slot(1,4),get(e->slot(1,3),lit13))};
}
if(truth(([&](){V t222=gt(get(e->slot(0,0),lit118),V(0.58));return !truth(t222)?gt(get(e->slot(0,0),lit154),V(0.58)):t222;})())){return Args{get(e->slot(1,3),lit14),get(e->slot(1,4),get(e->slot(1,3),lit14))};
}
if(truth(([&](){V t223=([&](){V t224=gt(get(e->slot(0,0),lit127),V(0.62));return !truth(t224)?gt(get(e->slot(0,0),lit147),V(0.55)):t224;})();return !truth(t223)?gt(get(e->slot(0,0),lit149),V(0.62)):t223;})())){return Args{get(e->slot(1,3),lit15),get(e->slot(1,4),get(e->slot(1,3),lit15))};
}
if(truth(([&](){V t225=gt(get(e->slot(0,0),lit143),V(0.45));return !truth(t225)?lt(get(e->slot(0,0),lit130),V(0.35)):t225;})())){return Args{get(e->slot(1,3),lit12),get(e->slot(1,4),get(e->slot(1,3),lit12))};
}
if(truth(gt(get(e->slot(0,0),lit109),get(get(e->slot(1,1),lit17),lit21)))){return Args{get(e->slot(1,3),lit11),get(e->slot(1,4),get(e->slot(1,3),lit11))};
}
if(truth(gt(get(e->slot(0,0),lit126),V(0.62)))){return Args{get(e->slot(1,3),lit10),get(e->slot(1,4),get(e->slot(1,3),lit10))};
}
{V t226=get(e->slot(1,3),lit5);e->slot(0,1)=std::move(t226);}
{V t227=V(0.22);e->slot(0,2)=std::move(t227);}
if(truth(gt(get(e->slot(0,0),lit122),e->slot(0,2)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t228=get(e->slot(0,0),lit122);refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t229=get(e->slot(1,3),lit6);refs[0].put(std::move(t229));}
}
if(truth(gt(get(e->slot(0,0),lit123),e->slot(0,2)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t230=get(e->slot(0,0),lit123);refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t231=get(e->slot(1,3),lit7);refs[0].put(std::move(t231));}
}
if(truth(gt(get(e->slot(0,0),lit124),e->slot(0,2)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t232=get(e->slot(0,0),lit124);refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t233=get(e->slot(1,3),lit8);refs[0].put(std::move(t233));}
}
if(truth(gt(get(e->slot(0,0),lit125),e->slot(0,2)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t234=get(e->slot(0,0),lit125);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t235=get(e->slot(1,3),lit9);refs[0].put(std::move(t235));}
}
return Args{e->slot(0,1),([&](){V t236=get(e->slot(1,4),e->slot(0,1));return !truth(t236)?lit296:t236;})()};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,31);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);e->slot(0,5)=arg(a,5);{V t237=get(e->slot(1,1),lit17);e->slot(0,6)=std::move(t237);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit109)};V t238=first(call(e->slot(1,8),Args{divv(get(e->slot(0,0),lit106),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit18),V(1.0)}))),V(0.0),V(2.5)}));refs[0].put(std::move(t238));}
{V t239=first(call(e->slot(1,8),Args{divv(first(call(e->slot(1,9),Args{get(e->slot(0,0),lit108)})),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit22),V(1.0)}))),V(0.0),V(1.5)}));e->slot(0,7)=std::move(t239);}
{V t240=first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit128)),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t240);}
{V t241=first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit129)),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t241);}
{V t242=first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit137)),V(0.0),V(1.0)}));e->slot(0,10)=std::move(t242);}
{V t243=first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit138)),V(0.0),V(1.0)}));e->slot(0,11)=std::move(t243);}
{V t244=first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit130)),V(0.0),V(1.0)}));e->slot(0,12)=std::move(t244);}
{V t245=first(call(e->slot(1,8),Args{sub(get(e->slot(0,0),lit109),V(1.0)),V(0.0),V(1.5)}));e->slot(0,13)=std::move(t245);}
{V t246=add(add(add(add(add(add(add(add(add(mul(get(e->slot(0,0),lit133),V(0.26)),mul(get(e->slot(0,0),lit134),V(0.2))),mul(get(e->slot(0,0),lit139),V(0.18))),mul(get(e->slot(0,0),lit135),V(0.13))),mul(get(e->slot(0,0),lit136),V(0.08))),mul(get(e->slot(0,0),lit140),V(0.1))),mul(get(e->slot(0,0),lit131),V(0.12))),mul(e->slot(0,13),V(0.12))),mul(e->slot(0,10),V(0.12))),mul(e->slot(0,11),V(0.1)));e->slot(0,14)=std::move(t246);}
{V t247=first(call(e->slot(1,8),Args{divv(first(call(e->slot(1,9),Args{get(e->slot(0,0),lit144)})),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit25),V(0.001)}))),V(0.0),V(1.5)}));e->slot(0,15)=std::move(t247);}
{V t248=first(call(e->slot(1,8),Args{divv(first(call(e->slot(1,9),Args{get(e->slot(0,0),lit165)})),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit24),V(1.0)}))),V(0.0),V(1.5)}));e->slot(0,16)=std::move(t248);}
{V t249=first(call(e->slot(1,8),Args{divv(get(e->slot(0,0),lit145),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit26),V(0.001)}))),V(0.0),V(1.5)}));e->slot(0,17)=std::move(t249);}
{V t250=add(add(add(add(add(add(add(add(mul(get(e->slot(0,0),lit141),V(0.22)),mul(get(e->slot(0,0),lit142),V(0.16))),mul(get(e->slot(0,0),lit143),V(0.23))),mul(get(e->slot(0,0),lit146),V(0.16))),mul(e->slot(0,17),V(0.12))),mul(e->slot(0,15),V(0.11))),mul(e->slot(0,16),V(0.08))),mul(e->slot(0,7),V(0.13))),mul(get(e->slot(0,0),lit148),V(0.08)));e->slot(0,18)=std::move(t250);}
{V t251=first(call(e->slot(1,8),Args{divv(first(call(e->slot(1,9),Args{get(e->slot(0,0),lit151)})),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit27),V(0.001)}))),V(0.0),V(1.5)}));e->slot(0,19)=std::move(t251);}
{V t252=first(call(e->slot(1,8),Args{divv(first(call(e->slot(1,9),Args{get(e->slot(0,0),lit152)})),first(call(get(e->get("math"),lit172),Args{get(e->slot(0,6),lit28),V(0.001)}))),V(0.0),V(1.5)}));e->slot(0,20)=std::move(t252);}
{V t253=add(add(add(add(add(add(add(add(add(mul(get(e->slot(0,0),lit150),V(0.26)),mul(e->slot(0,19),V(0.14))),mul(e->slot(0,20),V(0.14))),mul(get(e->slot(0,0),lit155),V(0.14))),mul(get(e->slot(0,0),lit156),V(0.1))),mul(get(e->slot(0,0),lit157),V(0.1))),mul(get(e->slot(0,0),lit153),V(0.16))),mul(get(e->slot(0,0),lit154),V(0.16))),mul(e->slot(0,7),V(0.07))),mul(e->slot(0,8),V(0.06)));e->slot(0,21)=std::move(t253);}
{V t254=add(add(add(add(add(add(add(mul(e->slot(0,1),V(0.34)),mul(get(e->slot(0,0),lit158),V(0.22))),mul(first(call(e->slot(1,9),Args{e->slot(0,2)})),V(0.12))),mul(first(call(e->slot(1,9),Args{e->slot(0,3)})),V(0.1))),mul(first(call(e->slot(1,9),Args{e->slot(0,4)})),V(0.08))),mul(e->slot(0,7),V(0.12))),mul(e->slot(0,13),V(0.07))),mul(get(e->slot(0,0),lit142),V(0.07)));e->slot(0,22)=std::move(t254);}
{V t255=add(add(add(add(add(add(mul(e->slot(0,8),V(0.28)),mul(e->slot(0,9),V(0.2))),mul(e->slot(0,12),V(0.22))),mul(get(e->slot(0,0),lit131),V(0.12))),mul(get(e->slot(0,0),lit143),V(0.08))),mul(get(e->slot(0,0),lit163),V(0.06))),mul(get(e->slot(0,0),lit162),V(0.05)));e->slot(0,23)=std::move(t255);}
{V t256=add(add(add(add(add(mul(get(e->slot(0,0),lit147),V(0.32)),mul(get(e->slot(0,0),lit149),V(0.28))),mul(get(e->slot(0,0),lit143),V(0.16))),mul(e->slot(0,17),V(0.1))),mul(e->slot(0,7),V(0.1))),mul(e->slot(0,1),V(0.04)));e->slot(0,24)=std::move(t256);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit122)};V t257=first(call(e->slot(1,8),Args{e->slot(0,14),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit123)};V t258=first(call(e->slot(1,8),Args{e->slot(0,18),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit124)};V t259=first(call(e->slot(1,8),Args{e->slot(0,21),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit125)};V t260=first(call(e->slot(1,8),Args{e->slot(0,22),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit126)};V t261=first(call(e->slot(1,8),Args{e->slot(0,23),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit127)};V t262=first(call(e->slot(1,8),Args{e->slot(0,24),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t262));}
{V t263=add(add(add(add(add(mul(get(e->slot(0,0),lit122),get(e->slot(0,6),lit32)),mul(get(e->slot(0,0),lit123),get(e->slot(0,6),lit33))),mul(get(e->slot(0,0),lit124),get(e->slot(0,6),lit34))),mul(get(e->slot(0,0),lit125),get(e->slot(0,6),lit35))),mul(get(e->slot(0,0),lit126),get(e->slot(0,6),lit36))),mul(get(e->slot(0,0),lit127),get(e->slot(0,6),lit37)));e->slot(0,25)=std::move(t263);}
{std::array<Ref,1> refs{Ref(e,0,25)};V t264=first(call(e->slot(1,8),Args{e->slot(0,25),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t264));}
{V t265=([&](){V t266=([&](){V t267=gt(e->slot(0,25),get(e->slot(0,0),lit110));return truth(t267)?get(e->slot(0,6),lit49):t267;})();return !truth(t266)?get(e->slot(0,6),lit50):t266;})();e->slot(0,26)=std::move(t265);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit110)};V t268=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit110),e->slot(0,25),e->slot(0,26),e->slot(0,5)})),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t268));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit111)};V t269=e->slot(0,25);refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit112)};V t270=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit112),get(e->slot(0,0),lit110),get(e->slot(0,6),lit50),e->slot(0,5)})),V(0.0),get(e->slot(0,6),lit56)}));refs[0].put(std::move(t270));}
{V t271=add(add(add(add(add(add(mul(get(e->slot(0,0),lit135),V(0.25)),mul(get(e->slot(0,0),lit142),V(0.16))),mul(get(e->slot(0,0),lit149),V(0.14))),mul(get(e->slot(0,0),lit150),V(0.15))),mul(get(e->slot(0,0),lit154),V(0.12))),mul(e->slot(0,12),V(0.1))),mul(e->slot(0,7),V(0.08)));e->slot(0,27)=std::move(t271);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit116)};V t272=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit116),e->slot(0,27),get(e->slot(0,6),lit51),e->slot(0,5)})),V(0.0),V(1.0)}));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit118)};V t273=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit118),add(add(add(add(mul(get(e->slot(0,0),lit153),V(0.46)),mul(get(e->slot(0,0),lit154),V(0.3))),mul(get(e->slot(0,0),lit158),V(0.1))),mul(get(e->slot(0,0),lit155),V(0.07))),mul(get(e->slot(0,0),lit161),V(0.07))),get(e->slot(0,6),lit55),e->slot(0,5)})),V(0.0),V(1.0)}));refs[0].put(std::move(t273));}
{V t274=add(add(add(add(add(add(add(add(mul(get(e->slot(0,0),lit126),get(e->slot(0,6),lit40)),mul(get(e->slot(0,0),lit154),get(e->slot(0,6),lit41))),mul(get(e->slot(0,0),lit118),get(e->slot(0,6),lit42))),mul(get(e->slot(0,0),lit125),get(e->slot(0,6),lit43))),mul(get(e->slot(0,0),lit116),get(e->slot(0,6),lit44))),mul(get(e->slot(0,0),lit161),get(e->slot(0,6),lit45))),mul(e->slot(0,10),V(0.1))),mul(e->slot(0,11),V(0.08))),mul(e->slot(0,12),V(0.1)));e->slot(0,28)=std::move(t274);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit115)};V t275=first(call(e->slot(1,8),Args{e->slot(0,28),V(0.0),V(1.0)}));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit113)};V t276=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit113),sub(V(1.0),get(e->slot(0,0),lit115)),get(e->slot(0,6),lit52),e->slot(0,5)})),get(e->slot(0,6),lit57),get(e->slot(0,6),lit58)}));refs[0].put(std::move(t276));}
{V t277=add(add(add(add(mul(first(call(e->slot(1,8),Args{get(e->slot(0,0),lit129),V(0.0),V(1.0)})),V(0.3)),mul(first(call(e->slot(1,8),Args{get(e->slot(0,0),lit137),V(0.0),V(1.0)})),V(0.22))),mul(first(call(e->slot(1,8),Args{get(e->slot(0,0),lit138),V(0.0),V(1.0)})),V(0.14))),mul(first(call(e->slot(1,8),Args{get(e->slot(0,0),lit113),V(0.0),V(1.0)})),V(0.22))),mul(first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit118)),V(0.0),V(1.0)})),V(0.12)));e->slot(0,29)=std::move(t277);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit114)};V t278=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit114),e->slot(0,29),get(e->slot(0,6),lit53),e->slot(0,5)})),V(0.0),V(1.0)}));refs[0].put(std::move(t278));}
{V t279=sub(add(add(add(mul(get(e->slot(0,0),lit113),get(e->slot(0,6),lit46)),mul(first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,0),lit154)),V(0.0),V(1.0)})),V(0.18))),mul(first(call(e->slot(1,8),Args{get(e->slot(0,0),lit129),V(0.0),V(1.0)})),V(0.12))),mul(first(call(e->slot(1,8),Args{get(e->slot(0,0),lit137),V(0.0),V(1.0)})),V(0.08))),mul(get(e->slot(0,0),lit118),get(e->slot(0,6),lit48)));e->slot(0,30)=std::move(t279);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit117)};V t280=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit117),e->slot(0,30),get(e->slot(0,6),lit54),e->slot(0,5)})),V(0.0),V(1.0)}));refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit119)};V t281=first(call(e->slot(1,8),Args{add(add(add(mul(get(e->slot(0,0),lit125),V(0.42)),mul(get(e->slot(0,0),lit158),V(0.3))),mul(first(call(e->slot(1,9),Args{e->slot(0,2)})),V(0.16))),mul(first(call(e->slot(1,9),Args{e->slot(0,3)})),V(0.12))),V(0.0),V(1.0)}));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit120)};V t282=first(call(e->slot(1,8),Args{add(add(add(add(add(mul(get(e->slot(0,0),lit109),V(0.2)),mul(get(e->slot(0,0),lit139),V(0.22))),mul(get(e->slot(0,0),lit133),V(0.22))),mul(get(e->slot(0,0),lit141),V(0.14))),mul(get(e->slot(0,0),lit150),V(0.12))),mul(get(e->slot(0,0),lit119),V(0.1))),V(0.0),V(1.0)}));refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit121)};V t283=first(call(e->slot(1,8),Args{add(add(add(add(add(mul(get(e->slot(0,0),lit147),V(0.28)),mul(get(e->slot(0,0),lit145),V(0.2))),mul(get(e->slot(0,0),lit139),V(0.18))),mul(get(e->slot(0,0),lit143),V(0.14))),mul(e->slot(0,7),V(0.12))),mul(get(e->slot(0,0),lit149),V(0.08))),V(0.0),V(1.0)}));refs[0].put(std::move(t283));}
{std::array<Ref,2> refs{Ref(e->slot(0,0),lit166),Ref(e->slot(0,0),lit167)};Args t284=call(e->slot(1,29),Args{e->slot(0,0)});refs[0].put(arg(t284,0));refs[1].put(arg(t284,1));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(0,0),lit168)};V t285=V(false);refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit106)};V t286=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit106),V(0.0),get(get(e->slot(1,1),lit17),lit61),e->slot(0,1)}));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit108)};V t287=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit108),V(0.0),get(get(e->slot(1,1),lit17),lit61),e->slot(0,1)}));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit110)};V t288=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit110),V(0.0),get(get(e->slot(1,1),lit17),lit50),e->slot(0,1)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit111)};V t289=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit111),V(0.0),get(get(e->slot(1,1),lit17),lit50),e->slot(0,1)}));refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit112)};V t290=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit112),V(0.0),get(get(e->slot(1,1),lit17),lit50),e->slot(0,1)}));refs[0].put(std::move(t290));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit113)};V t291=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit113),V(1.0),get(get(e->slot(1,1),lit17),lit52),e->slot(0,1)}));refs[0].put(std::move(t291));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit114)};V t292=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit114),V(1.0),get(get(e->slot(1,1),lit17),lit53),e->slot(0,1)}));refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit117)};V t293=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit117),V(1.0),get(get(e->slot(1,1),lit17),lit54),e->slot(0,1)}));refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit115)};V t294=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit115),V(0.0),get(get(e->slot(1,1),lit17),lit50),e->slot(0,1)}));refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit116)};V t295=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit116),V(0.0),get(get(e->slot(1,1),lit17),lit51),e->slot(0,1)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit118)};V t296=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit118),V(0.0),get(get(e->slot(1,1),lit17),lit55),e->slot(0,1)}));refs[0].put(std::move(t296));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit127)};V t297=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit127),V(0.0),get(get(e->slot(1,1),lit17),lit50),e->slot(0,1)}));refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit121)};V t298=first(call(e->slot(1,10),Args{get(e->slot(0,0),lit121),V(0.0),get(get(e->slot(1,1),lit17),lit50),e->slot(0,1)}));refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit166)};V t299=get(e->slot(1,3),lit13);refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit167)};V t300=get(e->slot(1,4),get(e->slot(1,3),lit13));refs[0].put(std::move(t300));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,16),Args{concat(lit297,e->slot(0,0)),([&](){V t301=get(e->slot(0,1),lit110);return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,16),Args{concat(lit298,e->slot(0,0)),([&](){V t302=get(e->slot(0,1),lit112);return !truth(t302)?V(0.0):t302;})()});
call(e->slot(1,16),Args{concat(lit299,e->slot(0,0)),([&](){V t303=get(e->slot(0,1),lit113);return !truth(t303)?V(1.0):t303;})()});
call(e->slot(1,16),Args{concat(lit300,e->slot(0,0)),([&](){V t304=get(e->slot(0,1),lit114);return !truth(t304)?V(1.0):t304;})()});
call(e->slot(1,16),Args{concat(lit301,e->slot(0,0)),([&](){V t305=get(e->slot(0,1),lit115);return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,16),Args{concat(lit302,e->slot(0,0)),([&](){V t306=get(e->slot(0,1),lit116);return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,16),Args{concat(lit303,e->slot(0,0)),([&](){V t307=get(e->slot(0,1),lit117);return !truth(t307)?V(1.0):t307;})()});
call(e->slot(1,16),Args{concat(lit304,e->slot(0,0)),([&](){V t308=get(e->slot(0,1),lit122);return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,16),Args{concat(lit305,e->slot(0,0)),([&](){V t309=get(e->slot(0,1),lit123);return !truth(t309)?V(0.0):t309;})()});
call(e->slot(1,16),Args{concat(lit306,e->slot(0,0)),([&](){V t310=get(e->slot(0,1),lit124);return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,16),Args{concat(lit307,e->slot(0,0)),([&](){V t311=get(e->slot(0,1),lit125);return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,16),Args{concat(lit308,e->slot(0,0)),([&](){V t312=get(e->slot(0,1),lit126);return !truth(t312)?V(0.0):t312;})()});
call(e->slot(1,16),Args{concat(lit309,e->slot(0,0)),([&](){V t313=get(e->slot(0,1),lit127);return !truth(t313)?V(0.0):t313;})()});
call(e->slot(1,16),Args{concat(lit310,e->slot(0,0)),([&](){V t314=get(e->slot(0,1),lit118);return !truth(t314)?V(0.0):t314;})()});
call(e->slot(1,16),Args{concat(lit311,e->slot(0,0)),([&](){V t315=get(e->slot(0,1),lit119);return !truth(t315)?V(0.0):t315;})()});
call(e->slot(1,16),Args{concat(lit312,e->slot(0,0)),([&](){V t316=get(e->slot(0,1),lit120);return !truth(t316)?V(0.0):t316;})()});
call(e->slot(1,16),Args{concat(lit313,e->slot(0,0)),([&](){V t317=get(e->slot(0,1),lit121);return !truth(t317)?V(0.0):t317;})()});
call(e->slot(1,16),Args{concat(lit314,e->slot(0,0)),([&](){V t318=get(e->slot(0,1),lit132);return !truth(t318)?V(0.0):t318;})()});
call(e->slot(1,16),Args{concat(lit315,e->slot(0,0)),([&](){V t319=get(e->slot(0,1),lit166);return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,16),Args{concat(lit316,e->slot(0,0)),([&](){V t320=get(e->slot(0,1),lit167);return !truth(t320)?lit296:t320;})()});
call(e->slot(1,16),Args{concat(lit317,e->slot(0,0)),([&](){V t321=get(e->slot(0,1),lit106);return !truth(t321)?V(0.0):t321;})()});
call(e->slot(1,16),Args{concat(lit318,e->slot(0,0)),([&](){V t322=get(e->slot(0,1),lit108);return !truth(t322)?V(0.0):t322;})()});
call(e->slot(1,16),Args{concat(lit319,e->slot(0,0)),([&](){V t323=get(e->slot(0,1),lit110);return !truth(t323)?V(0.0):t323;})()});
call(e->slot(1,16),Args{concat(lit320,e->slot(0,0)),([&](){V t324=get(e->slot(0,1),lit113);return !truth(t324)?V(1.0):t324;})()});
call(e->slot(1,16),Args{concat(lit321,e->slot(0,0)),([&](){V t325=get(e->slot(0,1),lit114);return !truth(t325)?V(1.0):t325;})()});
call(e->slot(1,16),Args{concat(lit322,e->slot(0,0)),([&](){V t326=get(e->slot(0,1),lit115);return !truth(t326)?V(0.0):t326;})()});
call(e->slot(1,16),Args{concat(lit323,e->slot(0,0)),([&](){V t327=get(e->slot(0,1),lit116);return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,16),Args{concat(lit324,e->slot(0,0)),([&](){V t328=get(e->slot(0,1),lit122);return !truth(t328)?V(0.0):t328;})()});
call(e->slot(1,16),Args{concat(lit325,e->slot(0,0)),([&](){V t329=get(e->slot(0,1),lit123);return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,16),Args{concat(lit326,e->slot(0,0)),([&](){V t330=get(e->slot(0,1),lit124);return !truth(t330)?V(0.0):t330;})()});
call(e->slot(1,16),Args{concat(lit327,e->slot(0,0)),([&](){V t331=get(e->slot(0,1),lit125);return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,16),Args{concat(lit328,e->slot(0,0)),([&](){V t332=get(e->slot(0,1),lit126);return !truth(t332)?V(0.0):t332;})()});
call(e->slot(1,16),Args{concat(lit329,e->slot(0,0)),([&](){V t333=get(e->slot(0,1),lit127);return !truth(t333)?V(0.0):t333;})()});
call(e->slot(1,16),Args{concat(lit330,e->slot(0,0)),([&](){V t334=get(e->slot(0,1),lit117);return !truth(t334)?V(1.0):t334;})()});
call(e->slot(1,16),Args{concat(lit242,e->slot(0,0)),([&](){V t335=get(e->slot(0,1),lit118);return !truth(t335)?V(0.0):t335;})()});
call(e->slot(1,16),Args{concat(lit331,e->slot(0,0)),([&](){V t336=get(e->slot(0,1),lit121);return !truth(t336)?V(0.0):t336;})()});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t337=get(e->slot(1,1),lit63);e->slot(0,0)=std::move(t337);}
call(e->slot(1,16),Args{lit332,([&](){V t338=get(e->slot(0,0),lit64);return !truth(t338)?lit296:t338;})()});
call(e->slot(1,16),Args{lit333,([&](){V t339=get(e->slot(0,0),lit66);return !truth(t339)?V(0.0):t339;})()});
call(e->slot(1,16),Args{lit334,([&](){V t340=([&](){V t341=get(e->slot(0,0),lit67);return truth(t341)?V(1.0):t341;})();return !truth(t340)?V(0.0):t340;})()});
call(e->slot(1,16),Args{lit335,([&](){V t342=get(e->slot(0,0),lit68);return !truth(t342)?V(0.0):t342;})()});
call(e->slot(1,16),Args{lit336,([&](){V t343=get(e->slot(0,0),lit69);return !truth(t343)?V(1.0):t343;})()});
call(e->slot(1,16),Args{lit337,([&](){V t344=get(e->slot(0,0),lit70);return !truth(t344)?V(1.0):t344;})()});
call(e->slot(1,16),Args{lit338,([&](){V t345=get(e->slot(0,0),lit71);return !truth(t345)?V(0.0):t345;})()});
call(e->slot(1,16),Args{lit339,([&](){V t346=get(e->slot(0,0),lit72);return !truth(t346)?V(0.0):t346;})()});
call(e->slot(1,16),Args{lit340,([&](){V t347=get(e->slot(0,0),lit73);return !truth(t347)?V(1.0):t347;})()});
call(e->slot(1,16),Args{lit341,([&](){V t348=get(e->slot(0,0),lit74);return !truth(t348)?V(0.0):t348;})()});
call(e->slot(1,16),Args{lit342,([&](){V t349=get(e->slot(0,0),lit75);return !truth(t349)?V(0.0):t349;})()});
call(e->slot(1,16),Args{lit343,([&](){V t350=get(e->slot(0,0),lit76);return !truth(t350)?V(0.0):t350;})()});
call(e->slot(1,16),Args{lit344,([&](){V t351=get(e->slot(0,0),lit56);return !truth(t351)?V(0.0):t351;})()});
call(e->slot(1,16),Args{lit345,([&](){V t352=get(e->slot(0,0),lit77);return !truth(t352)?V(0.0):t352;})()});
call(e->slot(1,16),Args{lit346,([&](){V t353=get(e->slot(0,0),lit78);return !truth(t353)?V(0.0):t353;})()});
call(e->slot(1,16),Args{lit347,([&](){V t354=get(e->slot(0,0),lit79);return !truth(t354)?V(0.0):t354;})()});
call(e->slot(1,16),Args{lit348,([&](){V t355=get(e->slot(0,0),lit80);return !truth(t355)?V(0.0):t355;})()});
call(e->slot(1,16),Args{lit349,([&](){V t356=get(e->slot(0,0),lit81);return !truth(t356)?V(0.0):t356;})()});
call(e->slot(1,16),Args{lit350,([&](){V t357=get(e->slot(0,0),lit82);return !truth(t357)?V(1.0):t357;})()});
call(e->slot(1,16),Args{lit351,([&](){V t358=get(e->slot(0,0),lit83);return !truth(t358)?V(1.0):t358;})()});
call(e->slot(1,16),Args{lit352,([&](){V t359=get(e->slot(0,0),lit84);return !truth(t359)?V(1.0):t359;})()});
call(e->slot(1,16),Args{lit353,([&](){V t360=get(e->slot(0,0),lit85);return !truth(t360)?V(1.0):t360;})()});
call(e->slot(1,16),Args{lit354,([&](){V t361=get(e->slot(0,0),lit86);return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,16),Args{lit355,([&](){V t362=get(e->slot(0,0),lit87);return !truth(t362)?V(0.0):t362;})()});
call(e->slot(1,16),Args{lit356,([&](){V t363=get(e->slot(0,0),lit88);return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,16),Args{lit357,([&](){V t364=get(e->slot(0,0),lit89);return !truth(t364)?V(0.0):t364;})()});
call(e->slot(1,16),Args{lit358,([&](){V t365=get(e->slot(0,0),lit90);return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,16),Args{lit359,([&](){V t366=get(e->slot(0,0),lit91);return !truth(t366)?V(0.0):t366;})()});
call(e->slot(1,16),Args{lit360,([&](){V t367=get(e->slot(0,0),lit92);return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,16),Args{lit361,([&](){V t368=get(e->slot(0,0),lit93);return !truth(t368)?lit296:t368;})()});
call(e->slot(1,16),Args{lit362,([&](){V t369=get(e->slot(0,0),lit68);return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,16),Args{lit363,([&](){V t370=get(e->slot(0,0),lit69);return !truth(t370)?V(1.0):t370;})()});
call(e->slot(1,16),Args{lit364,([&](){V t371=get(e->slot(0,0),lit70);return !truth(t371)?V(1.0):t371;})()});
call(e->slot(1,16),Args{lit365,([&](){V t372=get(e->slot(0,0),lit71);return !truth(t372)?V(0.0):t372;})()});
call(e->slot(1,16),Args{lit366,([&](){V t373=get(e->slot(0,0),lit74);return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,16),Args{lit367,([&](){V t374=get(e->slot(0,0),lit85);return !truth(t374)?V(1.0):t374;})()});
call(e->slot(1,16),Args{lit368,([&](){V t375=get(e->slot(0,0),lit84);return !truth(t375)?V(1.0):t375;})()});
call(e->slot(1,16),Args{lit369,([&](){V t376=get(e->slot(0,0),lit91);return !truth(t376)?V(0.0):t376;})()});
call(e->slot(1,16),Args{lit370,([&](){V t377=get(e->slot(0,0),lit93);return !truth(t377)?lit296:t377;})()});
call(e->slot(1,16),Args{lit371,([&](){V t378=([&](){V t379=get(e->slot(0,0),lit94);return truth(t379)?V(1.0):t379;})();return !truth(t378)?V(0.0):t378;})()});
call(e->slot(1,16),Args{lit372,([&](){V t380=([&](){V t381=get(e->slot(0,0),lit95);return truth(t381)?V(1.0):t381;})();return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,16),Args{lit373,([&](){V t382=([&](){V t383=get(e->slot(0,0),lit96);return truth(t383)?V(1.0):t383;})();return !truth(t382)?V(0.0):t382;})()});
call(e->slot(1,16),Args{lit374,([&](){V t384=([&](){V t385=get(e->slot(0,0),lit97);return truth(t385)?V(1.0):t385;})();return !truth(t384)?V(0.0):t384;})()});
call(e->slot(1,16),Args{lit375,([&](){V t386=([&](){V t387=get(e->slot(0,0),lit98);return truth(t387)?V(1.0):t387;})();return !truth(t386)?V(0.0):t386;})()});
call(e->slot(1,16),Args{lit376,([&](){V t388=([&](){V t389=get(e->slot(0,0),lit99);return truth(t389)?V(1.0):t389;})();return !truth(t388)?V(0.0):t388;})()});
call(e->slot(1,16),Args{lit377,([&](){V t390=([&](){V t391=get(e->slot(0,0),lit100);return truth(t391)?V(1.0):t391;})();return !truth(t390)?V(0.0):t390;})()});
call(e->slot(1,16),Args{lit378,([&](){V t392=([&](){V t393=get(e->slot(0,0),lit101);return truth(t393)?V(1.0):t393;})();return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,16),Args{lit379,([&](){V t394=([&](){V t395=get(e->slot(0,0),lit102);return truth(t395)?V(1.0):t395;})();return !truth(t394)?V(0.0):t394;})()});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t396=num(V(0.0)),t397=num(V(3.0)),t398=num(V(1.0));for(double t399=t396;(t398>0?t399<=t397:t399>=t397);t399+=t398){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t399);call(e->slot(2,32),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit63),lit105),e->slot(0,0))});
}}
call(e->slot(1,33),Args{});
return Args{};});
Ref(e->slot(0,1),lit380).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit64)};V t400=lit65;refs[0].put(std::move(t400));}
call(e->slot(1,34),Args{});
return Args{};}));
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,23);auto e=&storage;{V t401=get(e->slot(1,1),lit63);e->slot(0,0)=std::move(t401);}
{V t402=V(0.0);e->slot(0,1)=std::move(t402);}
{V t403=V(0.0);e->slot(0,2)=std::move(t403);}
{V t404=V(0.0);e->slot(0,3)=std::move(t404);}
{V t405=V(0.0);e->slot(0,4)=std::move(t405);}
{V t406=V(0.0);e->slot(0,5)=std::move(t406);}
{V t407=V(0.0);e->slot(0,6)=std::move(t407);}
{V t408=V(0.0);e->slot(0,7)=std::move(t408);}
{V t409=V(0.0);e->slot(0,8)=std::move(t409);}
{V t410=V(0.0);e->slot(0,9)=std::move(t410);}
{V t411=V(0.0);e->slot(0,10)=std::move(t411);}
{V t412=V(0.0);e->slot(0,11)=std::move(t412);}
{V t413=V(0.0);e->slot(0,12)=std::move(t413);}
{V t414=V(0.0);e->slot(0,13)=std::move(t414);}
{V t415=V(0.0);e->slot(0,14)=std::move(t415);}
{V t416=V(0.0);e->slot(0,15)=std::move(t416);}
{V t417=V(0.0);e->slot(0,16)=std::move(t417);}
{V t418=V(0.0);e->slot(0,17)=std::move(t418);}
{double t419=num(V(0.0)),t420=num(V(3.0)),t421=num(V(1.0));for(double t422=t419;(t421>0?t422<=t420:t422>=t420);t422+=t421){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t422);{V t423=get(get(e->slot(1,0),lit105),e->slot(0,0));e->slot(0,1)=std::move(t423);}
{std::array<Ref,1> refs{Ref(e,1,1)};V t424=add(e->slot(1,1),([&](){V t425=get(e->slot(0,1),lit110);return !truth(t425)?V(0.0):t425;})());refs[0].put(std::move(t424));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t426=add(e->slot(1,2),([&](){V t427=get(e->slot(0,1),lit113);return !truth(t427)?V(1.0):t427;})());refs[0].put(std::move(t426));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t428=add(e->slot(1,3),([&](){V t429=get(e->slot(0,1),lit114);return !truth(t429)?V(1.0):t429;})());refs[0].put(std::move(t428));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t430=add(e->slot(1,4),([&](){V t431=get(e->slot(0,1),lit115);return !truth(t431)?V(0.0):t431;})());refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t432=add(e->slot(1,5),([&](){V t433=get(e->slot(0,1),lit116);return !truth(t433)?V(0.0):t433;})());refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t434=add(e->slot(1,6),([&](){V t435=get(e->slot(0,1),lit117);return !truth(t435)?V(1.0):t435;})());refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t436=add(e->slot(1,7),([&](){V t437=get(e->slot(0,1),lit118);return !truth(t437)?V(0.0):t437;})());refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t438=add(e->slot(1,8),([&](){V t439=get(e->slot(0,1),lit127);return !truth(t439)?V(0.0):t439;})());refs[0].put(std::move(t438));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t440=add(e->slot(1,9),([&](){V t441=get(e->slot(0,1),lit121);return !truth(t441)?V(0.0):t441;})());refs[0].put(std::move(t440));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t442=first(call(get(e->get("math"),lit172),Args{e->slot(1,10),([&](){V t443=get(e->slot(0,1),lit110);return !truth(t443)?V(0.0):t443;})()}));refs[0].put(std::move(t442));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t444=first(call(get(e->get("math"),lit172),Args{e->slot(1,11),([&](){V t445=get(e->slot(0,1),lit115);return !truth(t445)?V(0.0):t445;})()}));refs[0].put(std::move(t444));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t446=add(e->slot(1,12),([&](){V t447=get(e->slot(0,1),lit122);return !truth(t447)?V(0.0):t447;})());refs[0].put(std::move(t446));}
{std::array<Ref,1> refs{Ref(e,1,13)};V t448=add(e->slot(1,13),([&](){V t449=get(e->slot(0,1),lit123);return !truth(t449)?V(0.0):t449;})());refs[0].put(std::move(t448));}
{std::array<Ref,1> refs{Ref(e,1,14)};V t450=add(e->slot(1,14),([&](){V t451=get(e->slot(0,1),lit124);return !truth(t451)?V(0.0):t451;})());refs[0].put(std::move(t450));}
{std::array<Ref,1> refs{Ref(e,1,15)};V t452=add(e->slot(1,15),([&](){V t453=get(e->slot(0,1),lit125);return !truth(t453)?V(0.0):t453;})());refs[0].put(std::move(t452));}
{std::array<Ref,1> refs{Ref(e,1,16)};V t454=add(e->slot(1,16),([&](){V t455=get(e->slot(0,1),lit126);return !truth(t455)?V(0.0):t455;})());refs[0].put(std::move(t454));}
{std::array<Ref,1> refs{Ref(e,1,17)};V t456=add(e->slot(1,17),([&](){V t457=get(e->slot(0,1),lit127);return !truth(t457)?V(0.0):t457;})());refs[0].put(std::move(t456));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit68)};V t458=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t458));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit69)};V t459=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t459));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit70)};V t460=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t460));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit71)};V t461=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t461));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit72)};V t462=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t462));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit73)};V t463=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t463));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit74)};V t464=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t464));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit75)};V t465=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t465));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit76)};V t466=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t466));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit56)};V t467=e->slot(0,10);refs[0].put(std::move(t467));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit77)};V t468=e->slot(0,11);refs[0].put(std::move(t468));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit78)};V t469=mul(add(([&](){V t470=get(get(get(e->slot(0,0),lit105),V(0.0)),lit110);return !truth(t470)?V(0.0):t470;})(),([&](){V t471=get(get(get(e->slot(0,0),lit105),V(1.0)),lit110);return !truth(t471)?V(0.0):t471;})()),V(0.5));refs[0].put(std::move(t469));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit79)};V t472=mul(add(([&](){V t473=get(get(get(e->slot(0,0),lit105),V(2.0)),lit110);return !truth(t473)?V(0.0):t473;})(),([&](){V t474=get(get(get(e->slot(0,0),lit105),V(3.0)),lit110);return !truth(t474)?V(0.0):t474;})()),V(0.5));refs[0].put(std::move(t472));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit80)};V t475=mul(add(([&](){V t476=get(get(get(e->slot(0,0),lit105),V(0.0)),lit110);return !truth(t476)?V(0.0):t476;})(),([&](){V t477=get(get(get(e->slot(0,0),lit105),V(2.0)),lit110);return !truth(t477)?V(0.0):t477;})()),V(0.5));refs[0].put(std::move(t475));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit81)};V t478=mul(add(([&](){V t479=get(get(get(e->slot(0,0),lit105),V(1.0)),lit110);return !truth(t479)?V(0.0):t479;})(),([&](){V t480=get(get(get(e->slot(0,0),lit105),V(3.0)),lit110);return !truth(t480)?V(0.0):t480;})()),V(0.5));refs[0].put(std::move(t478));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit82)};V t481=mul(add(([&](){V t482=get(get(get(e->slot(0,0),lit105),V(0.0)),lit114);return !truth(t482)?V(1.0):t482;})(),([&](){V t483=get(get(get(e->slot(0,0),lit105),V(1.0)),lit114);return !truth(t483)?V(1.0):t483;})()),V(0.5));refs[0].put(std::move(t481));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit83)};V t484=mul(add(([&](){V t485=get(get(get(e->slot(0,0),lit105),V(2.0)),lit114);return !truth(t485)?V(1.0):t485;})(),([&](){V t486=get(get(get(e->slot(0,0),lit105),V(3.0)),lit114);return !truth(t486)?V(1.0):t486;})()),V(0.5));refs[0].put(std::move(t484));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit84)};V t487=mul(add(([&](){V t488=get(get(get(e->slot(0,0),lit105),V(0.0)),lit117);return !truth(t488)?V(1.0):t488;})(),([&](){V t489=get(get(get(e->slot(0,0),lit105),V(1.0)),lit117);return !truth(t489)?V(1.0):t489;})()),V(0.5));refs[0].put(std::move(t487));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit85)};V t490=mul(add(([&](){V t491=get(get(get(e->slot(0,0),lit105),V(2.0)),lit117);return !truth(t491)?V(1.0):t491;})(),([&](){V t492=get(get(get(e->slot(0,0),lit105),V(3.0)),lit117);return !truth(t492)?V(1.0):t492;})()),V(0.5));refs[0].put(std::move(t490));}
{V t493=first(call(get(e->get("math"),lit172),Args{add(add(add(add(add(e->slot(0,12),e->slot(0,13)),e->slot(0,14)),e->slot(0,15)),e->slot(0,16)),e->slot(0,17)),V(0.001)}));e->slot(0,18)=std::move(t493);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit86)};V t494=divv(e->slot(0,12),e->slot(0,18));refs[0].put(std::move(t494));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit87)};V t495=divv(e->slot(0,13),e->slot(0,18));refs[0].put(std::move(t495));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit88)};V t496=divv(e->slot(0,14),e->slot(0,18));refs[0].put(std::move(t496));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit89)};V t497=divv(e->slot(0,15),e->slot(0,18));refs[0].put(std::move(t497));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit90)};V t498=divv(e->slot(0,16),e->slot(0,18));refs[0].put(std::move(t498));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit91)};V t499=divv(e->slot(0,17),e->slot(0,18));refs[0].put(std::move(t499));}
{V t500=get(e->slot(1,3),lit5);e->slot(0,19)=std::move(t500);}
{V t501=lit5;e->slot(0,20)=std::move(t501);}
{V t502=V(0.0);e->slot(0,21)=std::move(t502);}
{V t503=([&](){V z=table();set(z,V(1.0),([&](){V z=table();set(z,V(1.0),get(e->slot(1,3),lit6));set(z,V(2.0),lit6);set(z,V(3.0),get(e->slot(0,0),lit86));return z;})());set(z,V(2.0),([&](){V z=table();set(z,V(1.0),get(e->slot(1,3),lit7));set(z,V(2.0),lit7);set(z,V(3.0),get(e->slot(0,0),lit87));return z;})());set(z,V(3.0),([&](){V z=table();set(z,V(1.0),get(e->slot(1,3),lit8));set(z,V(2.0),lit8);set(z,V(3.0),get(e->slot(0,0),lit88));return z;})());set(z,V(4.0),([&](){V z=table();set(z,V(1.0),get(e->slot(1,3),lit9));set(z,V(2.0),lit9);set(z,V(3.0),get(e->slot(0,0),lit89));return z;})());set(z,V(5.0),([&](){V z=table();set(z,V(1.0),get(e->slot(1,3),lit10));set(z,V(2.0),lit10);set(z,V(3.0),get(e->slot(0,0),lit90));return z;})());set(z,V(6.0),([&](){V z=table();set(z,V(1.0),get(e->slot(1,3),lit15));set(z,V(2.0),lit15);set(z,V(3.0),get(e->slot(0,0),lit91));return z;})());return z;})();e->slot(0,22)=std::move(t503);}
{double t504=num(V(1.0)),t505=num(length(e->slot(0,22))),t506=num(V(1.0));for(double t507=t504;(t506>0?t507<=t505:t507>=t505);t507+=t506){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t507);if(truth(gt(get(get(e->slot(1,22),e->slot(0,0)),V(3.0)),e->slot(1,21)))){{std::array<Ref,1> refs{Ref(e,1,19)};V t508=get(get(e->slot(1,22),e->slot(0,0)),V(1.0));refs[0].put(std::move(t508));}
{std::array<Ref,1> refs{Ref(e,1,20)};V t509=get(get(e->slot(1,22),e->slot(0,0)),V(2.0));refs[0].put(std::move(t509));}
{std::array<Ref,1> refs{Ref(e,1,21)};V t510=get(get(e->slot(1,22),e->slot(0,0)),V(3.0));refs[0].put(std::move(t510));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit92)};V t511=e->slot(0,19);refs[0].put(std::move(t511));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit93)};V t512=e->slot(0,20);refs[0].put(std::move(t512));}
return Args{};});
Ref(e->slot(0,1),lit381).put(native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit66)};V t513=add(([&](){V t514=get(get(e->slot(1,1),lit63),lit66);return !truth(t514)?V(0.0):t514;})(),V(1.0));refs[0].put(std::move(t513));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t515=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t515));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit64)};V t516=lit382;refs[0].put(std::move(t516));}
call(e->slot(1,34),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t517=first(call(e->slot(1,8),Args{e->slot(0,0),get(get(e->slot(1,1),lit17),lit59),get(get(e->slot(1,1),lit17),lit60)}));refs[0].put(std::move(t517));}
call(e->slot(1,18),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t518=([&](){V t519=e->slot(0,1);return !truth(t519)?first(call(e->slot(1,17),Args{})):t519;})();refs[0].put(std::move(t518));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit64)};V t520=lit383;refs[0].put(std::move(t520));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit67)};V t521=V(false);refs[0].put(std::move(t521));}
call(e->slot(1,20),Args{});
{double t522=num(V(0.0)),t523=num(V(3.0)),t524=num(V(1.0));for(double t525=t522;(t524>0?t525<=t523:t525>=t523);t525+=t524){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t525);call(e->slot(2,31),Args{get(get(get(e->slot(2,1),lit63),lit105),e->slot(0,0)),e->slot(1,0)});
}}
call(e->slot(1,35),Args{});
call(e->slot(1,34),Args{});
return Args{};
}
{V t526=first(call(e->slot(1,12),Args{e->slot(0,1),lit105,V()}));e->slot(0,3)=std::move(t526);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit64)};V t527=lit384;refs[0].put(std::move(t527));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit63),lit67)};V t528=V(false);refs[0].put(std::move(t528));}
call(e->slot(1,20),Args{});
{double t529=num(V(0.0)),t530=num(V(3.0)),t531=num(V(1.0));for(double t532=t529;(t531>0?t532<=t530:t532>=t530);t532+=t531){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t532);call(e->slot(2,31),Args{get(get(get(e->slot(2,1),lit63),lit105),e->slot(0,0)),e->slot(1,0)});
}}
call(e->slot(1,35),Args{});
call(e->slot(1,34),Args{});
return Args{};
}
{V t533=get(e->slot(1,1),lit63);e->slot(0,4)=std::move(t533);}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit64)};V t534=lit385;refs[0].put(std::move(t534));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit67)};V t535=V(true);refs[0].put(std::move(t535));}
call(e->slot(1,20),Args{});
{Args t536=call(e->slot(1,28),Args{});e->slot(0,5)=arg(t536,0);e->slot(0,6)=arg(t536,1);e->slot(0,7)=arg(t536,2);e->slot(0,8)=arg(t536,3);}
{double t537=num(V(0.0)),t538=num(V(3.0)),t539=num(V(1.0));for(double t540=t537;(t539>0?t540<=t538:t540>=t538);t540+=t539){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t540);{V t541=first(call(e->slot(2,19),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t541);}
{V t542=get(get(e->slot(1,4),lit105),e->slot(0,0));e->slot(0,2)=std::move(t542);}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit168)};V t543=V(true);refs[0].put(std::move(t543));}
{V t544=first(call(get(e->get("math"),lit171),call(e->slot(3,21),Args{e->slot(1,0),e->slot(1,1)})));e->slot(0,0)=std::move(t544);}
{V t545=([&](){V t546=get(e->slot(1,2),lit106);return !truth(t546)?e->slot(0,0):t546;})();e->slot(0,1)=std::move(t545);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t547=e->slot(0,1);refs[0].put(std::move(t547));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t548=e->slot(0,0);refs[0].put(std::move(t548));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t549=divv(sub(e->slot(0,0),e->slot(0,1)),first(call(get(e->get("math"),lit172),Args{e->slot(2,0),V(0.001)})));refs[0].put(std::move(t549));}
call(e->slot(3,22),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,23),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,24),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,25),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,26),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,27),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,30),Args{e->slot(1,2),e->slot(2,5),e->slot(2,6),e->slot(2,7),e->slot(2,8),e->slot(2,0)});
}else{call(e->slot(2,31),Args{e->slot(0,2),e->slot(1,0)});
}
call(e->slot(2,32),Args{e->slot(0,0),e->slot(0,2)});
}}
call(e->slot(1,35),Args{});
call(e->slot(1,33),Args{});
return Args{};}));
Ref(e->slot(0,1),lit386).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t550=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));e->slot(0,1)=std::move(t550);}
return Args{([&](){V t551=([&](){V t552=e->slot(0,1);return truth(t552)?get(e->slot(0,1),lit110):t552;})();return !truth(t551)?V(0.0):t551;})()};
return Args{};}));
Ref(e->slot(0,1),lit387).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t553=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));e->slot(0,1)=std::move(t553);}
return Args{([&](){V t554=([&](){V t555=e->slot(0,1);return truth(t555)?get(e->slot(0,1),lit113):t555;})();return !truth(t554)?V(1.0):t554;})()};
return Args{};}));
Ref(e->slot(0,1),lit388).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t556=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));e->slot(0,1)=std::move(t556);}
return Args{([&](){V t557=([&](){V t558=e->slot(0,1);return truth(t558)?get(e->slot(0,1),lit114):t558;})();return !truth(t557)?V(1.0):t557;})()};
return Args{};}));
Ref(e->slot(0,1),lit389).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t559=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));e->slot(0,1)=std::move(t559);}
return Args{([&](){V t560=([&](){V t561=e->slot(0,1);return truth(t561)?get(e->slot(0,1),lit117):t561;})();return !truth(t560)?V(1.0):t560;})()};
return Args{};}));
Ref(e->slot(0,1),lit390).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t562=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));e->slot(0,1)=std::move(t562);}
return Args{([&](){V t563=([&](){V t564=e->slot(0,1);return truth(t564)?get(e->slot(0,1),lit115):t564;})();return !truth(t563)?V(0.0):t563;})()};
return Args{};}));
Ref(e->slot(0,1),lit391).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t565=get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0));e->slot(0,1)=std::move(t565);}
return Args{([&](){V t566=([&](){V t567=e->slot(0,1);return truth(t567)?get(e->slot(0,1),lit118):t567;})();return !truth(t566)?V(0.0):t566;})()};
return Args{};}));
Ref(e->slot(0,1),lit392).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t568=get(get(e->slot(1,1),lit63),lit93);return !truth(t568)?lit296:t568;})(),([&](){V t569=get(get(e->slot(1,1),lit63),lit92);return !truth(t569)?V(0.0):t569;})()};
return Args{};}));
Ref(e->slot(0,1),lit393).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit63)};
}
return Args{get(get(get(e->slot(1,1),lit63),lit105),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit394).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t570=([&](){V t571=get(get(get(e->slot(1,1),lit63),lit105),([&](){V t572=e->slot(0,0);return !truth(t572)?V(0.0):t572;})());return !truth(t571)?get(get(get(e->slot(1,1),lit63),lit105),V(0.0)):t571;})();e->slot(0,1)=std::move(t570);}
return call(get(e->get("string"),lit395),Args{concat(lit396,concat(lit397,concat(lit398,concat(lit399,lit400)))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit63),lit64)})),([&](){V t573=get(get(e->slot(1,1),lit63),lit66);return !truth(t573)?V(0.0):t573;})(),([&](){V t574=([&](){V t575=get(get(e->slot(1,1),lit63),lit67);return truth(t575)?lit401:t575;})();return !truth(t574)?lit402:t574;})(),first(call(e->get("tostring"),Args{([&](){V t576=get(get(e->slot(1,1),lit63),lit93);return !truth(t576)?lit296:t576;})()})),first(call(e->get("tostring"),Args{([&](){V t577=get(e->slot(0,1),lit167);return !truth(t577)?lit402:t577;})()})),([&](){V t578=get(e->slot(0,1),lit110);return !truth(t578)?V(0.0):t578;})(),([&](){V t579=get(e->slot(0,1),lit113);return !truth(t579)?V(1.0):t579;})(),([&](){V t580=get(e->slot(0,1),lit114);return !truth(t580)?V(1.0):t580;})(),([&](){V t581=get(e->slot(0,1),lit115);return !truth(t581)?V(0.0):t581;})(),([&](){V t582=get(e->slot(0,1),lit116);return !truth(t582)?V(0.0):t582;})(),([&](){V t583=get(e->slot(0,1),lit122);return !truth(t583)?V(0.0):t583;})(),([&](){V t584=get(e->slot(0,1),lit123);return !truth(t584)?V(0.0):t584;})(),([&](){V t585=get(e->slot(0,1),lit124);return !truth(t585)?V(0.0):t585;})(),([&](){V t586=get(e->slot(0,1),lit125);return !truth(t586)?V(0.0):t586;})(),([&](){V t587=get(e->slot(0,1),lit126);return !truth(t587)?V(0.0):t587;})(),([&](){V t588=get(e->slot(0,1),lit127);return !truth(t588)?V(0.0):t588;})(),([&](){V t589=get(e->slot(0,1),lit117);return !truth(t589)?V(1.0):t589;})(),([&](){V t590=get(e->slot(0,1),lit118);return !truth(t590)?V(0.0):t590;})(),([&](){V t591=get(e->slot(0,1),lit121);return !truth(t591)?V(0.0):t591;})(),([&](){V t592=get(e->slot(0,1),lit106);return !truth(t592)?V(0.0):t592;})(),([&](){V t593=get(e->slot(0,1),lit108);return !truth(t593)?V(0.0):t593;})(),([&](){V t594=([&](){V t595=get(get(e->slot(1,1),lit63),lit94);return truth(t595)?lit401:t595;})();return !truth(t594)?lit402:t594;})(),([&](){V t596=([&](){V t597=get(get(e->slot(1,1),lit63),lit95);return truth(t597)?lit401:t597;})();return !truth(t596)?lit402:t596;})(),([&](){V t598=([&](){V t599=get(get(e->slot(1,1),lit63),lit96);return truth(t599)?lit401:t599;})();return !truth(t598)?lit402:t598;})(),([&](){V t600=([&](){V t601=get(get(e->slot(1,1),lit63),lit97);return truth(t601)?lit401:t601;})();return !truth(t600)?lit402:t600;})(),([&](){V t602=([&](){V t603=get(get(e->slot(1,1),lit63),lit98);return truth(t603)?lit401:t603;})();return !truth(t602)?lit402:t602;})(),([&](){V t604=([&](){V t605=get(get(e->slot(1,1),lit63),lit99);return truth(t605)?lit401:t605;})();return !truth(t604)?lit402:t604;})(),([&](){V t606=([&](){V t607=get(get(e->slot(1,1),lit63),lit100);return truth(t607)?lit401:t607;})();return !truth(t606)?lit402:t606;})(),([&](){V t608=([&](){V t609=get(get(e->slot(1,1),lit63),lit101);return truth(t609)?lit401:t609;})();return !truth(t608)?lit402:t608;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

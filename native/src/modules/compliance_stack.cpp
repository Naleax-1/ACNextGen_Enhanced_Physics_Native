// Generated native C++ from pinned compliance_stack.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("INIT");
static const V lit2("STABLE");
static const V lit3("STEER_FLEX");
static const V lit4("DRIVE_FLEX");
static const V lit5("BRAKE_FLEX");
static const V lit6("LOAD_FLEX");
static const V lit7("RECOVERING");
static const V lit8("IMPACT");
static const V lit9("UNLOADED");
static const V lit10("AXLE_WINDUP");
static const V lit11("BODY_FLEX");
static const V lit12("params");
static const V lit13("flexTau");
static const V lit14("bushingTau");
static const V lit15("knuckleTau");
static const V lit16("subframeTau");
static const V lit17("bodyTau");
static const V lit18("energyRiseTau");
static const V lit19("energyFallTau");
static const V lit20("returnTau");
static const V lit21("loadRef");
static const V lit22("loadFlexStart");
static const V lit23("loadFlexFull");
static const V lit24("loadHarshStart");
static const V lit25("loadHarshFull");
static const V lit26("contactLossGain");
static const V lit27("contactTrustGain");
static const V lit28("memoryGain");
static const V lit29("historyGain");
static const V lit30("damperGain");
static const V lit31("impactGain");
static const V lit32("lateralFlexScaleFront");
static const V lit33("lateralFlexScaleRear");
static const V lit34("longitudinalFlexScaleFront");
static const V lit35("longitudinalFlexScaleRear");
static const V lit36("steerFlexGain");
static const V lit37("yawFlexGain");
static const V lit38("slipAngleFlexGain");
static const V lit39("slipRatioFlexGain");
static const V lit40("brakeFlexGain");
static const V lit41("driveFlexGain");
static const V lit42("handbrakeRearGain");
static const V lit43("armCamberGain");
static const V lit44("armToeGain");
static const V lit45("bushingLatGain");
static const V lit46("bushingLongGain");
static const V lit47("bushingContactLossGain");
static const V lit48("knuckleSlipGain");
static const V lit49("knuckleLoadGain");
static const V lit50("knuckleImpactGain");
static const V lit51("subframeYawGain");
static const V lit52("subframeDriveGain");
static const V lit53("subframeBrakeGain");
static const V lit54("subframeDamperGain");
static const V lit55("bodyLoadGain");
static const V lit56("bodyYawGain");
static const V lit57("bodyHystGain");
static const V lit58("rearAxleCoupling");
static const V lit59("rearAxleToeCoupling");
static const V lit60("rearAxleCamberCoupling");
static const V lit61("slipRecoveryGain");
static const V lit62("dirtyReturnGain");
static const V lit63("biteGain");
static const V lit64("snapRiskGain");
static const V lit65("yawBudgetGain");
static const V lit66("yawBalanceGain");
static const V lit67("yawBiteGain");
static const V lit68("drivelineRearPushGain");
static const V lit69("drivelineTwistGain");
static const V lit70("toeFromLatFlexFront");
static const V lit71("toeFromLatFlexRear");
static const V lit72("toeFromLongFlex");
static const V lit73("camberFromLatFlexFront");
static const V lit74("camberFromLatFlexRear");
static const V lit75("camberFromLoadFlex");
static const V lit76("maxLatFlex");
static const V lit77("maxLongFlex");
static const V lit78("maxBushing");
static const V lit79("maxKnuckle");
static const V lit80("maxSubframe");
static const V lit81("maxBody");
static const V lit82("maxVirtualToe");
static const V lit83("maxVirtualCamber");
static const V lit84("steerDelayGain");
static const V lit85("forceLeakGain");
static const V lit86("loadPathLossGain");
static const V lit87("unloadedQuality");
static const V lit88("impactThreshold");
static const V lit89("energyActive");
static const V lit90("axleWindupThreshold");
static const V lit91("bodyFlexThreshold");
static const V lit92("inputReadInterval");
static const V lit93("debugStoreInterval");
static const V lit94("load");
static const V lit95("loadFactor");
static const V lit96("contactQuality");
static const V lit97("contactTrust");
static const V lit98("contactLoss");
static const V lit99("contactStatus");
static const V lit100("tireMemory");
static const V lit101("tirePhaseId");
static const V lit102("tireHistory");
static const V lit103("tireThermal");
static const V lit104("tireAbrasion");
static const V lit105("tireRecoveryScalar");
static const V lit106("tireRecontact");
static const V lit107("slipRecovery");
static const V lit108("gripReturn");
static const V lit109("snapRisk");
static const V lit110("bite");
static const V lit111("dirtyReturn");
static const V lit112("slipAngle");
static const V lit113("slipRatio");
static const V lit114("combinedSlip");
static const V lit115("damperHyst");
static const V lit116("damperImpact");
static const V lit117("damperVelocity");
static const V lit118("damperVertical");
static const V lit119("damperHysteretic");
static const V lit120("damperPulse");
static const V lit121("roadMemory");
static const V lit122("carcassSupport");
static const V lit123("carcassGripGate");
static const V lit124("carcassHysteresis");
static const V lit125("carcassRecoveryBias");
static const V lit126("armCamber");
static const V lit127("armToe");
static const V lit128("bushingLat");
static const V lit129("bushingLong");
static const V lit130("bushingEnergy");
static const V lit131("knuckleDeflection");
static const V lit132("subframeDeflection");
static const V lit133("bodyDeflection");
static const V lit134("latFlex");
static const V lit135("longFlex");
static const V lit136("energy");
static const V lit137("memory");
static const V lit138("returnBias");
static const V lit139("forceLeak");
static const V lit140("loadPathLoss");
static const V lit141("steerDelay");
static const V lit142("virtualToe");
static const V lit143("virtualCamber");
static const V lit144("targetLatFlex");
static const V lit145("targetLongFlex");
static const V lit146("targetEnergy");
static const V lit147("phaseId");
static const V lit148("phaseText");
static const V lit149("active");
static const V lit150("status");
static const V lit151("updateCount");
static const V lit152("wheelsValid");
static const V lit153("contactLinked");
static const V lit154("memoryLinked");
static const V lit155("damperLinked");
static const V lit156("armLinked");
static const V lit157("loadLinked");
static const V lit158("carcassLinked");
static const V lit159("slipRecoveryLinked");
static const V lit160("yawLinked");
static const V lit161("drivelineLinked");
static const V lit162("speedKmh");
static const V lit163("steer");
static const V lit164("gas");
static const V lit165("brake");
static const V lit166("handbrake");
static const V lit167("yawRate");
static const V lit168("yawBudget");
static const V lit169("yawBalance");
static const V lit170("yawBite");
static const V lit171("yawDirty");
static const V lit172("drivelineTwist");
static const V lit173("drivelineRearPush");
static const V lit174("avgEnergy");
static const V lit175("avgLatFlex");
static const V lit176("avgLongFlex");
static const V lit177("avgToe");
static const V lit178("avgCamber");
static const V lit179("avgBushing");
static const V lit180("avgKnuckle");
static const V lit181("avgSubframe");
static const V lit182("avgBody");
static const V lit183("avgForceLeak");
static const V lit184("frontSteerDelay");
static const V lit185("rearToeCompliance");
static const V lit186("chassisCompliance");
static const V lit187("bodyFlex");
static const V lit188("subframeTwist");
static const V lit189("rearAxleWindup");
static const V lit190("inputTimer");
static const V lit191("debugStoreTimer");
static const V lit192("debugStoreNow");
static const V lit193("wheels");
static const V lit194("state");
static const V lit195("debug");
static const V lit196("huge");
static const V lit197("abs");
static const V lit198("safeField");
static const V lit199("safeLoadRaw");
static const V lit200("safeStore");
static const V lit201("length");
static const V lit202("function");
static const V lit203("number");
static const V lit204("x");
static const V lit205("y");
static const V lit206("z");
static const V lit207("sqrt");
static const V lit208("velocity");
static const V lit209("localVelocity");
static const V lit210("getCar");
static const V lit211("ngp_contact_load_");
static const V lit212("ngp_wheel_load_");
static const V lit213("ngp_load_path_wheel_load_");
static const V lit214("ngp_dlt_load_");
static const V lit215("loadK");
static const V lit216("ngp_contact_slip_angle_");
static const V lit217("ngp_slip_angle_");
static const V lit218("ngp_tire_slip_angle_");
static const V lit219("ngp_filtered_slip_angle_");
static const V lit220("ngp_contact_slip_ratio_");
static const V lit221("ngp_slip_ratio_");
static const V lit222("ngp_tire_slip_ratio_");
static const V lit223("ngp_filtered_slip_ratio_");
static const V lit224("ngp_contact_combined_slip_");
static const V lit225("localAngularVelocity");
static const V lit226("ngp_yaw_rate");
static const V lit227("ngp_body_yaw_rate");
static const V lit228("ngp_chassis_yaw_rate");
static const V lit229("ngp_yaw_budget");
static const V lit230("ngp_yaw_balance");
static const V lit231("ngp_yaw_bite");
static const V lit232("ngp_yaw_bite_energy");
static const V lit233("ngp_yaw_dirty_return");
static const V lit234("ngp_yaw_dirty_energy");
static const V lit235("ngp_shaft_twist");
static const V lit236("ngp_driveline_twist");
static const V lit237("ngp_windup_value");
static const V lit238("ngp_driveline_windup");
static const V lit239("ngp_drive_soft_rear_push");
static const V lit240("ngp_driveline_rear_push");
static const V lit241("ngp_windup_rear_push");
static const V lit242("ngp_contact_quality_");
static const V lit243("ngp_contact_status_");
static const V lit244("ngp_contact_trust_");
static const V lit245("ngp_tire_contact_quality_");
static const V lit246("ngp_tcr_quality_");
static const V lit247("ngp_cq_trust_");
static const V lit248("min");
static const V lit249("ngp_tire_memory_");
static const V lit250("ngp_rubber_memory_");
static const V lit251("ngp_memory_");
static const V lit252("ngp_tire_memory_phase_id_");
static const V lit253("ngp_tire_memory_recontact_");
static const V lit254("ngp_memory_thermal_");
static const V lit255("ngp_memory_abrasion_");
static const V lit256("ngp_memory_history_");
static const V lit257("ngp_memory_recovery_scalar_");
static const V lit258("ngp_slip_recovery_rate_");
static const V lit259("ngp_slip_grip_return_");
static const V lit260("ngp_slip_snap_risk_");
static const V lit261("ngp_slip_bite_");
static const V lit262("ngp_slip_dirty_return_");
static const V lit263("ngp_damper_hyst_");
static const V lit264("ngp_damper_hyst_impact_");
static const V lit265("ngp_damper_hyst_velocity_");
static const V lit266("ngp_damper_vertical_");
static const V lit267("ngp_damper_hysteretic_");
static const V lit268("ngp_damper_vertical_pulse_");
static const V lit269("ngp_damper_road_memory_");
static const V lit270("ngp_carcass_support_");
static const V lit271("ngp_carcass_grip_gate_");
static const V lit272("ngp_carcass_hysteresis_");
static const V lit273("ngp_carcass_recovery_bias_");
static const V lit274("ngp_control_arm_camber_");
static const V lit275("ngp_arm_camber_");
static const V lit276("ngp_ultra_camber_");
static const V lit277("ngp_caster_total_camber_");
static const V lit278("ngp_control_arm_toe_");
static const V lit279("ngp_arm_toe_");
static const V lit280("ngp_ultra_toe_");
static const V lit281("ngp_caster_total_toe_");
static const V lit282("max");
static const V lit283("NO WHEEL");
static const V lit284("ngp_compliance_energy_");
static const V lit285("ngp_compliance_memory_");
static const V lit286("ngp_compliance_lat_flex_");
static const V lit287("ngp_compliance_long_flex_");
static const V lit288("ngp_compliance_virtual_toe_");
static const V lit289("ngp_compliance_virtual_camber_");
static const V lit290("ngp_virtual_toe_");
static const V lit291("ngp_virtual_camber_");
static const V lit292("ngp_compliance_stack_energy_");
static const V lit293("ngp_compliance_bushing_lat_");
static const V lit294("ngp_compliance_bushing_long_");
static const V lit295("ngp_compliance_bushing_energy_");
static const V lit296("ngp_compliance_knuckle_deflection_");
static const V lit297("ngp_compliance_subframe_deflection_");
static const V lit298("ngp_compliance_body_deflection_");
static const V lit299("ngp_compliance_force_leak_");
static const V lit300("ngp_compliance_load_path_loss_");
static const V lit301("ngp_compliance_return_bias_");
static const V lit302("ngp_compliance_steer_delay_");
static const V lit303("ngp_force_path_loss_");
static const V lit304("ngp_body_compliance_");
static const V lit305("ngp_bushing_energy_");
static const V lit306("ngp_knuckle_deflection_");
static const V lit307("ngp_compliance_phase_id_");
static const V lit308("ngp_compliance_phase_");
static const V lit309("UNKNOWN");
static const V lit310("ngp_cs_energy_");
static const V lit311("ngp_cs_toe_");
static const V lit312("ngp_cs_camber_");
static const V lit313("ngp_compliance_load_");
static const V lit314("ngp_compliance_contact_quality_");
static const V lit315("ngp_compliance_contact_trust_");
static const V lit316("ngp_compliance_tire_memory_");
static const V lit317("ngp_compliance_tire_history_");
static const V lit318("ngp_compliance_damper_hyst_");
static const V lit319("ngp_compliance_damper_impact_");
static const V lit320("ngp_compliance_damper_vertical_");
static const V lit321("ngp_compliance_slip_angle_");
static const V lit322("ngp_compliance_slip_ratio_");
static const V lit323("ngp_compliance_combined_slip_");
static const V lit324("ngp_compliance_arm_camber_");
static const V lit325("ngp_compliance_arm_toe_");
static const V lit326("ngp_compliance_bite_");
static const V lit327("ngp_compliance_dirty_return_");
static const V lit328("ngp_compliance_snap_risk_");
static const V lit329("ngp_compliance_status");
static const V lit330("ngp_compliance_update_count");
static const V lit331("ngp_compliance_wheels_valid");
static const V lit332("ngp_compliance_avg_energy");
static const V lit333("ngp_compliance_avg_lat_flex");
static const V lit334("ngp_compliance_avg_long_flex");
static const V lit335("ngp_compliance_avg_toe");
static const V lit336("ngp_compliance_avg_camber");
static const V lit337("ngp_compliance_avg_bushing");
static const V lit338("ngp_compliance_avg_knuckle");
static const V lit339("ngp_compliance_avg_subframe");
static const V lit340("ngp_compliance_avg_body");
static const V lit341("ngp_compliance_avg_force_leak");
static const V lit342("ngp_compliance_front_steer_delay");
static const V lit343("ngp_compliance_rear_toe");
static const V lit344("ngp_compliance_chassis");
static const V lit345("ngp_compliance_body_flex");
static const V lit346("ngp_compliance_subframe_twist");
static const V lit347("ngp_compliance_rear_axle_windup");
static const V lit348("ngp_compliance_load_path_loss");
static const V lit349("ngp_compliance_force_leak");
static const V lit350("ngp_chassis_compliance");
static const V lit351("ngp_body_flex");
static const V lit352("ngp_subframe_twist");
static const V lit353("ngp_rear_axle_windup");
static const V lit354("ngp_load_path_compliance_loss");
static const V lit355("ngp_force_leak");
static const V lit356("ngp_compliance_stack_status");
static const V lit357("ngp_compliance_stack_update_count");
static const V lit358("ngp_compliance_stack_avg_energy");
static const V lit359("ngp_cs_status");
static const V lit360("ngp_cs_count");
static const V lit361("ngp_cs_energy");
static const V lit362("ngp_cs_force_leak");
static const V lit363("ngp_cs_load_path_loss");
static const V lit364("ngp_compliance_contact_linked");
static const V lit365("ngp_compliance_memory_linked");
static const V lit366("ngp_compliance_damper_linked");
static const V lit367("ngp_compliance_arm_linked");
static const V lit368("ngp_compliance_load_linked");
static const V lit369("ngp_compliance_carcass_linked");
static const V lit370("ngp_compliance_slip_recovery_linked");
static const V lit371("ngp_compliance_yaw_linked");
static const V lit372("ngp_compliance_driveline_linked");
static const V lit373("init");
static const V lit374("update");
static const V lit375("BAD DT");
static const V lit376("NO CAR");
static const V lit377("NO WHEELS");
static const V lit378("RUNNING");
static const V lit379("getEnergy");
static const V lit380("getVirtualToe");
static const V lit381("getVirtualCamber");
static const V lit382("getForceLeak");
static const V lit383("getLoadPathLoss");
static const V lit384("getChassisCompliance");
static const V lit385("getState");
static const V lit386("debugStr");
static const V lit387("format");
static const V lit388("Status %s / Count %.0f / Wheels %s\n");
static const V lit389("Phase %s / E %.3f / Mem %.3f / Leak %.3f\n");
static const V lit390("Flex Lat %+.4f / Long %+.4f / Bush %.2f Kn %.2f\n");
static const V lit391("Toe %+.4f / Camber %+.4f / Sub %.2f Body %.2f\n");
static const V lit392("CQ %.2f Trust %.2f / TM %.2f / DH %.2f / I %.2f\n");
static const V lit393("Links CQ:%s TM:%s DH:%s TC:%s SR:%s Yaw:%s Drive:%s");
static const V lit394("OK");
static const V lit395("NIL");
V load_compliance_stack(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(43);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{Args t3=Args{V(0.0),V(1.0),V(2.0),V(3.0)};e->slot(0,2)=arg(t3,0);e->slot(0,3)=arg(t3,1);e->slot(0,4)=arg(t3,2);e->slot(0,5)=arg(t3,3);}
{V t4=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);set(z,V(4.0),lit5);set(z,V(5.0),lit6);set(z,V(6.0),lit7);set(z,V(7.0),lit8);set(z,V(8.0),lit9);set(z,V(9.0),lit10);set(z,V(10.0),lit11);return z;})();e->slot(0,6)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit12)};V t5=([&](){V z=table();set(z,lit13,V(0.09));set(z,lit14,V(0.115));set(z,lit15,V(0.075));set(z,lit16,V(0.14));set(z,lit17,V(0.18));set(z,lit18,V(0.06));set(z,lit19,V(0.22));set(z,lit20,V(0.15));set(z,lit21,V(3200.0));set(z,lit22,V(0.7));set(z,lit23,V(1.7));set(z,lit24,V(1.55));set(z,lit25,V(2.8));set(z,lit26,V(0.42));set(z,lit27,V(0.22));set(z,lit28,V(0.3));set(z,lit29,V(0.18));set(z,lit30,V(0.22));set(z,lit31,V(0.55));set(z,lit32,V(0.03));set(z,lit33,V(0.038));set(z,lit34,V(0.02));set(z,lit35,V(0.032));set(z,lit36,V(0.36));set(z,lit37,V(0.18));set(z,lit38,V(1.15));set(z,lit39,V(0.85));set(z,lit40,V(0.36));set(z,lit41,V(0.28));set(z,lit42,V(0.45));set(z,lit43,V(0.35));set(z,lit44,V(0.45));set(z,lit45,V(0.62));set(z,lit46,V(0.54));set(z,lit47,V(0.3));set(z,lit48,V(0.46));set(z,lit49,V(0.28));set(z,lit50,V(0.38));set(z,lit51,V(0.34));set(z,lit52,V(0.32));set(z,lit53,V(0.24));set(z,lit54,V(0.2));set(z,lit55,V(0.3));set(z,lit56,V(0.24));set(z,lit57,V(0.22));set(z,lit58,V(0.34));set(z,lit59,V(0.18));set(z,lit60,V(0.08));set(z,lit61,V(0.2));set(z,lit62,V(0.24));set(z,lit63,V(0.22));set(z,lit64,V(0.18));set(z,lit65,V(0.16));set(z,lit66,V(0.12));set(z,lit67,V(0.18));set(z,lit68,V(0.22));set(z,lit69,V(0.18));set(z,lit70,V(0.95));set(z,lit71,V(1.25));set(z,lit72,V(0.38));set(z,lit73,V(0.78));set(z,lit74,V(0.62));set(z,lit75,V(0.035));set(z,lit76,V(0.08));set(z,lit77,V(0.075));set(z,lit78,V(1.0));set(z,lit79,V(1.0));set(z,lit80,V(1.0));set(z,lit81,V(1.0));set(z,lit82,V(0.09));set(z,lit83,V(0.12));set(z,lit84,V(1.0));set(z,lit85,V(0.68));set(z,lit86,V(0.55));set(z,lit87,V(0.18));set(z,lit88,V(0.55));set(z,lit89,V(0.22));set(z,lit90,V(0.26));set(z,lit91,V(0.34));set(z,lit92,V(0.05));set(z,lit93,V(0.25));return z;})();refs[0].put(std::move(t5));}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V z=table();set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(1.0));set(z,lit97,V(1.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(1.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(1.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(1.0));set(z,lit123,V(1.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(0.0));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit130,V(0.0));set(z,lit131,V(0.0));set(z,lit132,V(0.0));set(z,lit133,V(0.0));set(z,lit134,V(0.0));set(z,lit135,V(0.0));set(z,lit136,V(0.0));set(z,lit137,V(0.0));set(z,lit138,V(0.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(0.0));set(z,lit143,V(0.0));set(z,lit144,V(0.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,lit1);set(z,lit149,V(false));return z;})()};
return Args{};});
{V t6=([&](){V z=table();set(z,lit150,lit1);set(z,lit151,V(0.0));set(z,lit152,V(false));set(z,lit153,V(false));set(z,lit154,V(false));set(z,lit155,V(false));set(z,lit156,V(false));set(z,lit157,V(false));set(z,lit158,V(false));set(z,lit159,V(false));set(z,lit160,V(false));set(z,lit161,V(false));set(z,lit162,V(0.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(0.0));set(z,lit166,V(0.0));set(z,lit167,V(0.0));set(z,lit168,V(0.0));set(z,lit169,V(0.0));set(z,lit170,V(0.0));set(z,lit171,V(0.0));set(z,lit172,V(0.0));set(z,lit173,V(0.0));set(z,lit174,V(0.0));set(z,lit175,V(0.0));set(z,lit176,V(0.0));set(z,lit177,V(0.0));set(z,lit178,V(0.0));set(z,lit179,V(0.0));set(z,lit180,V(0.0));set(z,lit181,V(0.0));set(z,lit182,V(0.0));set(z,lit183,V(0.0));set(z,lit184,V(0.0));set(z,lit185,V(0.0));set(z,lit186,V(0.0));set(z,lit187,V(0.0));set(z,lit188,V(0.0));set(z,lit189,V(0.0));set(z,lit140,V(0.0));set(z,lit139,V(0.0));set(z,lit190,V(999.0));set(z,lit191,V(999.0));set(z,lit192,V(true));set(z,lit193,([&](){V z=table();return z;})());return z;})();e->slot(0,8)=std::move(t6);}
{double t7=num(V(0.0)),t8=num(V(3.0)),t9=num(V(1.0));for(double t10=t7;(t9>0?t10<=t8:t10>=t8);t10+=t9){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t10);{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit193),e->slot(0,0))};V t11=first(call(e->slot(1,7),Args{}));refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),e->slot(0,0))};V t12=get(get(e->slot(1,8),lit193),e->slot(0,0));refs[0].put(std::move(t12));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit194)};V t13=e->slot(0,8);refs[0].put(std::move(t13));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit195)};V t14=e->slot(0,8);refs[0].put(std::move(t14));}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t15=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t15);}
if(truth(([&](){V t16=([&](){V t17=([&](){V t18=eq(e->slot(0,2),V());return !truth(t18)?ne(e->slot(0,2),e->slot(0,2)):t18;})();return !truth(t17)?eq(e->slot(0,2),get(e->get("math"),lit196)):t17;})();return !truth(t16)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit196)))):t16;})())){return Args{([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,9),Args{e->slot(0,0),([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()}));refs[0].put(std::move(t20));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit197),call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t22));}
if(truth(gt(e->slot(0,0),V(0.0001)))){return Args{V(1.0)};
}
if(truth(lt(e->slot(0,0),V(-num(V(0.0001)))))){return Args{V(-num(V(1.0)))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t23=first(call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t24=first(call(e->slot(1,9),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t25=first(call(e->slot(1,9),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t26=first(call(e->slot(1,9),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t26));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t27=first(call(e->slot(1,10),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t27);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t28=([&](){V t29=([&](){V t30=gt(e->slot(0,1),e->slot(0,0));return truth(t30)?e->slot(0,2):t30;})();return !truth(t29)?e->slot(0,3):t29;})();e->slot(0,5)=std::move(t28);}
return call(e->slot(1,13),Args{e->slot(0,0),e->slot(0,1),e->slot(0,5),e->slot(0,4)});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t31=([&](){V t32=ge(e->slot(0,2),e->slot(0,1));return truth(t32)?V(1.0):t32;})();return !truth(t31)?V(0.0):t31;})()};
}
{V t33=first(call(e->slot(1,10),Args{divv(sub(first(call(e->slot(1,9),Args{e->slot(0,2),V(0.0)})),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t33);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
{V t34=get(e->slot(0,0),lit198);e->slot(0,16)=std::move(t34);}
{V t35=get(e->slot(0,0),lit199);e->slot(0,17)=std::move(t35);}
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t36=first(call(e->slot(1,17),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t36);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t37=e->slot(0,1);return !truth(t37)?V(0.0):t37;})()};
}
return call(e->slot(1,9),Args{e->slot(0,2),([&](){V t38=e->slot(0,1);return !truth(t38)?V(0.0):t38;})()});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t39=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t39);}
{double t40=num(V(1.0)),t41=num(length(e->slot(0,1))),t42=num(V(1.0));for(double t43=t40;(t42>0?t43<=t41:t43>=t41);t43+=t42){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t43);{V t44=first(call(e->slot(2,17),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t44);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,9),Args{e->slot(0,1),([&](){V t45=e->slot(1,0);return !truth(t45)?V(0.0):t45;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t46=e->slot(0,0);return !truth(t46)?V(0.0):t46;})(),V()};
return Args{};});
{V t47=get(e->slot(0,0),lit200);e->slot(0,20)=std::move(t47);}
e->slot(0,21)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t48=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit201)})),lit202))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit201)})),lit203))){return Args{get(e->slot(1,0),lit201)};
}
{V t49=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit204),V(0.0)}));e->slot(0,0)=std::move(t49);}
{V t50=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit205),V(0.0)}));e->slot(0,1)=std::move(t50);}
{V t51=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit206),V(0.0)}));e->slot(0,2)=std::move(t51);}
return call(get(e->get("math"),lit207),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t48,0);e->slot(0,2)=arg(t48,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,9),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t52=first(call(e->slot(1,16),Args{e->slot(0,0),lit162,V()}));e->slot(0,1)=std::move(t52);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,9),Args{e->slot(0,1),V(0.0)});
}
{V t53=V();e->slot(0,2)=std::move(t53);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,9),Args{e->slot(0,2),V(0.0)});
}
{V t54=first(call(e->slot(1,16),Args{e->slot(0,0),lit208,V()}));e->slot(0,3)=std::move(t54);}
if(truth(e->slot(0,3))){return Args{mul(first(call(e->slot(1,21),Args{e->slot(0,3)})),V(3.6))};
}
{V t55=first(call(e->slot(1,16),Args{e->slot(0,0),lit209,V()}));e->slot(0,4)=std::move(t55);}
if(truth(e->slot(0,4))){return Args{mul(first(call(e->slot(1,21),Args{e->slot(0,4)})),V(3.6))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t56=V(!truth(e->get("ac")));return !truth(t56)?V(!truth(get(e->get("ac"),lit210))):t56;})())){return Args{V()};
}
{Args t57=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit210),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t57,0);e->slot(0,1)=arg(t57,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t58=V(!truth(e->slot(0,0)));return !truth(t58)?V(!truth(get(e->slot(0,0),lit193))):t58;})())){return Args{V()};
}
{Args t59=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit193),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t59,0);e->slot(0,3)=arg(t59,1);}
if(truth(([&](){V t60=e->slot(0,2);return truth(t60)?e->slot(0,3):t60;})())){return Args{e->slot(0,3)};
}
{std::array<Ref,2> refs{Ref(e,0,2),Ref(e,0,3)};Args t61=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit193),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t61,0));refs[1].put(arg(t61,1));}
if(truth(e->slot(0,2))){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(([&](){V t62=eq(e->slot(0,0),e->slot(1,2));return !truth(t62)?eq(e->slot(0,0),e->slot(1,4)):t62;})())){return Args{V(-num(V(1.0)))};
}
return Args{V(1.0)};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{lt(e->slot(0,0),V(2.0))};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit191)};V t63=add(([&](){V t64=get(e->slot(1,8),lit191);return !truth(t64)?V(0.0):t64;})(),e->slot(0,0));refs[0].put(std::move(t63));}
if(truth(ge(get(e->slot(1,8),lit191),get(get(e->slot(1,1),lit12),lit93)))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit191)};V t65=V(0.0);refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit192)};V t66=V(true);refs[0].put(std::move(t66));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,8),lit192)};V t67=V(false);refs[0].put(std::move(t67));}
}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit190)};V t68=add(([&](){V t69=get(e->slot(1,8),lit190);return !truth(t69)?V(0.0):t69;})(),e->slot(0,0));refs[0].put(std::move(t68));}
if(truth(ge(get(e->slot(1,8),lit190),get(get(e->slot(1,1),lit12),lit92)))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit190)};V t70=V(0.0);refs[0].put(std::move(t70));}
return Args{V(true)};
}
return Args{V(false)};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t71=first(call(e->slot(1,17),Args{concat(lit211,e->slot(0,1))}));e->slot(0,2)=std::move(t71);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit153)};V t72=V(true);refs[0].put(std::move(t72));}
return call(e->slot(1,9),Args{e->slot(0,2),V(0.0)});
}
{V t73=first(call(e->slot(1,17),Args{concat(lit212,e->slot(0,1))}));e->slot(0,3)=std::move(t73);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit157)};V t74=V(true);refs[0].put(std::move(t74));}
return call(e->slot(1,9),Args{e->slot(0,3),get(get(e->slot(1,1),lit12),lit21)});
}
{V t75=first(call(e->slot(1,17),Args{concat(lit213,e->slot(0,1))}));e->slot(0,4)=std::move(t75);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit157)};V t76=V(true);refs[0].put(std::move(t76));}
return call(e->slot(1,9),Args{e->slot(0,4),get(get(e->slot(1,1),lit12),lit21)});
}
{V t77=first(call(e->slot(1,17),Args{concat(lit214,e->slot(0,1))}));e->slot(0,5)=std::move(t77);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit157)};V t78=V(true);refs[0].put(std::move(t78));}
return Args{add(get(get(e->slot(1,1),lit12),lit21),first(call(e->slot(1,9),Args{e->slot(0,5),V(0.0)})))};
}
if(truth(e->slot(0,0))){return call(e->slot(1,9),Args{first(call(e->slot(1,16),joined(Args{e->slot(0,0),lit94},call(e->slot(1,16),Args{e->slot(0,0),lit215,V(0.0)})))),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t79=first(call(e->slot(1,17),Args{concat(lit216,e->slot(0,1))}));e->slot(0,2)=std::move(t79);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t80=first(call(e->slot(1,17),Args{concat(lit217,e->slot(0,1))}));refs[0].put(std::move(t80));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t81=first(call(e->slot(1,17),Args{concat(lit218,e->slot(0,1))}));refs[0].put(std::move(t81));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t82=first(call(e->slot(1,17),Args{concat(lit219,e->slot(0,1))}));refs[0].put(std::move(t82));}
}
if(truth(([&](){V t83=eq(e->slot(0,2),V());return truth(t83)?e->slot(0,0):t83;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t84=first(call(e->slot(1,16),Args{e->slot(0,0),lit112,V(0.0)}));refs[0].put(std::move(t84));}
}
{V t85=first(call(e->slot(1,17),Args{concat(lit220,e->slot(0,1))}));e->slot(0,3)=std::move(t85);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t86=first(call(e->slot(1,17),Args{concat(lit221,e->slot(0,1))}));refs[0].put(std::move(t86));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t87=first(call(e->slot(1,17),Args{concat(lit222,e->slot(0,1))}));refs[0].put(std::move(t87));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t88=first(call(e->slot(1,17),Args{concat(lit223,e->slot(0,1))}));refs[0].put(std::move(t88));}
}
if(truth(([&](){V t89=eq(e->slot(0,3),V());return truth(t89)?e->slot(0,0):t89;})())){{std::array<Ref,1> refs{Ref(e,0,3)};V t90=first(call(e->slot(1,16),Args{e->slot(0,0),lit113,V(0.0)}));refs[0].put(std::move(t90));}
}
{V t91=first(call(e->slot(1,17),Args{concat(lit224,e->slot(0,1))}));e->slot(0,4)=std::move(t91);}
if(truth(eq(e->slot(0,4),V()))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t92=first(call(e->slot(2,11),Args{e->slot(1,2)}));e->slot(0,0)=std::move(t92);}
{V t93=first(call(e->slot(2,11),Args{e->slot(1,3)}));e->slot(0,1)=std::move(t93);}
{std::array<Ref,1> refs{Ref(e,1,4)};V t94=first(call(get(e->get("math"),lit207),Args{add(mul(divv(e->slot(0,0),V(0.22)),divv(e->slot(0,0),V(0.22))),mul(divv(e->slot(0,1),V(0.35)),divv(e->slot(0,1),V(0.35))))}));refs[0].put(std::move(t94));}
}
return joined(Args{first(call(e->slot(1,9),Args{e->slot(0,2),V(0.0)})),first(call(e->slot(1,9),Args{e->slot(0,3),V(0.0)}))},call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,4),V(0.0)})),V(0.0),V(4.0)}));
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t95=first(call(e->slot(1,16),Args{e->slot(0,0),lit225,V()}));e->slot(0,1)=std::move(t95);}
if(truth(e->slot(0,1))){return call(e->slot(1,9),Args{get(e->slot(0,1),lit205),V(0.0)});
}
{V t96=first(call(e->slot(1,19),Args{V(0.0),lit226,lit227,lit228}));e->slot(0,2)=std::move(t96);}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,8),lit153)};V t97=V(false);refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit154)};V t98=V(false);refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit155)};V t99=V(false);refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit156)};V t100=V(false);refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit157)};V t101=V(false);refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit158)};V t102=V(false);refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit159)};V t103=V(false);refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit160)};V t104=V(false);refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit161)};V t105=V(false);refs[0].put(std::move(t105));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit162)};V t106=first(call(e->slot(1,22),Args{e->slot(0,0)}));refs[0].put(std::move(t106));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit163)};V t107=first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,0),lit163,V(0.0)})),V(0.0)}));refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit164)};V t108=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,0),lit164,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit165)};V t109=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,0),lit165,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit166)};V t110=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,0),lit166,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit167)};V t111=first(call(e->slot(1,31),Args{e->slot(0,0)}));refs[0].put(std::move(t111));}
{Args t112=call(e->slot(1,19),Args{V(0.0),lit229});e->slot(0,1)=arg(t112,0);e->slot(0,2)=arg(t112,1);}
{Args t113=call(e->slot(1,19),Args{V(0.0),lit230});e->slot(0,3)=arg(t113,0);e->slot(0,4)=arg(t113,1);}
{Args t114=call(e->slot(1,19),Args{V(0.0),lit231,lit232});e->slot(0,5)=arg(t114,0);e->slot(0,6)=arg(t114,1);}
{Args t115=call(e->slot(1,19),Args{V(0.0),lit233,lit234});e->slot(0,7)=arg(t115,0);e->slot(0,8)=arg(t115,1);}
if(truth(([&](){V t116=([&](){V t117=([&](){V t118=e->slot(0,2);return !truth(t118)?e->slot(0,4):t118;})();return !truth(t117)?e->slot(0,6):t117;})();return !truth(t116)?e->slot(0,8):t116;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit160)};V t119=V(true);refs[0].put(std::move(t119));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit168)};V t120=first(call(e->slot(1,10),Args{e->slot(0,1),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t120));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit169)};V t121=first(call(e->slot(1,10),Args{e->slot(0,3),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit170)};V t122=first(call(e->slot(1,10),Args{e->slot(0,5),V(0.0),V(1.0)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit171)};V t123=first(call(e->slot(1,10),Args{e->slot(0,7),V(0.0),V(1.0)}));refs[0].put(std::move(t123));}
{Args t124=call(e->slot(1,19),Args{V(0.0),lit235,lit236,lit237,lit238});e->slot(0,9)=arg(t124,0);e->slot(0,10)=arg(t124,1);}
{Args t125=call(e->slot(1,19),Args{V(0.0),lit239,lit240,lit241});e->slot(0,11)=arg(t125,0);e->slot(0,12)=arg(t125,1);}
if(truth(([&](){V t126=e->slot(0,10);return !truth(t126)?e->slot(0,12):t126;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit161)};V t127=V(true);refs[0].put(std::move(t127));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit172)};V t128=first(call(e->slot(1,10),Args{e->slot(0,9),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit173)};V t129=first(call(e->slot(1,10),Args{e->slot(0,11),V(0.0),V(1.5)}));refs[0].put(std::move(t129));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,34);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t130=first(call(e->slot(1,17),Args{concat(lit242,e->slot(0,0))}));e->slot(0,3)=std::move(t130);}
{V t131=first(call(e->slot(1,17),Args{concat(lit243,e->slot(0,0))}));e->slot(0,4)=std::move(t131);}
{V t132=first(call(e->slot(1,17),Args{concat(lit244,e->slot(0,0))}));e->slot(0,5)=std::move(t132);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t133=first(call(e->slot(1,17),Args{concat(lit245,e->slot(0,0))}));refs[0].put(std::move(t133));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t134=first(call(e->slot(1,17),Args{concat(lit246,e->slot(0,0))}));refs[0].put(std::move(t134));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t135=first(call(e->slot(1,17),Args{concat(lit247,e->slot(0,0))}));refs[0].put(std::move(t135));}
}
if(truth(([&](){V t136=([&](){V t137=ne(e->slot(0,3),V());return !truth(t137)?ne(e->slot(0,4),V()):t137;})();return !truth(t136)?ne(e->slot(0,5),V()):t136;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit153)};V t138=V(true);refs[0].put(std::move(t138));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit96)};V t139=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit97)};V t140=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,5),get(e->slot(0,1),lit96)})),V(0.0),V(1.2)}));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t141=first(call(e->slot(1,10),Args{sub(V(1.0),first(call(get(e->get("math"),lit248),Args{get(e->slot(0,1),lit96),get(e->slot(0,1),lit97)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit99)};V t142=first(call(e->slot(1,9),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t142));}
{V t143=first(call(e->slot(1,17),Args{concat(lit249,e->slot(0,0))}));e->slot(0,6)=std::move(t143);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t144=first(call(e->slot(1,17),Args{concat(lit250,e->slot(0,0))}));refs[0].put(std::move(t144));}
}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t145=first(call(e->slot(1,17),Args{concat(lit251,e->slot(0,0))}));refs[0].put(std::move(t145));}
}
{V t146=first(call(e->slot(1,17),Args{concat(lit252,e->slot(0,0))}));e->slot(0,7)=std::move(t146);}
{V t147=first(call(e->slot(1,17),Args{concat(lit253,e->slot(0,0))}));e->slot(0,8)=std::move(t147);}
{V t148=first(call(e->slot(1,17),Args{concat(lit254,e->slot(0,0))}));e->slot(0,9)=std::move(t148);}
{V t149=first(call(e->slot(1,17),Args{concat(lit255,e->slot(0,0))}));e->slot(0,10)=std::move(t149);}
{V t150=first(call(e->slot(1,17),Args{concat(lit256,e->slot(0,0))}));e->slot(0,11)=std::move(t150);}
{V t151=first(call(e->slot(1,17),Args{concat(lit257,e->slot(0,0))}));e->slot(0,12)=std::move(t151);}
if(truth(([&](){V t152=([&](){V t153=([&](){V t154=([&](){V t155=([&](){V t156=([&](){V t157=ne(e->slot(0,6),V());return !truth(t157)?ne(e->slot(0,7),V()):t157;})();return !truth(t156)?ne(e->slot(0,8),V()):t156;})();return !truth(t155)?ne(e->slot(0,9),V()):t155;})();return !truth(t154)?ne(e->slot(0,10),V()):t154;})();return !truth(t153)?ne(e->slot(0,11),V()):t153;})();return !truth(t152)?ne(e->slot(0,12),V()):t152;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit154)};V t158=V(true);refs[0].put(std::move(t158));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t159=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t160=first(call(e->slot(1,9),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t161=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t162=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t163=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t164=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,11),get(e->slot(0,1),lit100)})),V(0.0),V(1.0)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t165=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,12),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t165));}
{V t166=first(call(e->slot(1,17),Args{concat(lit258,e->slot(0,0))}));e->slot(0,13)=std::move(t166);}
{V t167=first(call(e->slot(1,17),Args{concat(lit259,e->slot(0,0))}));e->slot(0,14)=std::move(t167);}
{V t168=first(call(e->slot(1,17),Args{concat(lit260,e->slot(0,0))}));e->slot(0,15)=std::move(t168);}
{V t169=first(call(e->slot(1,17),Args{concat(lit261,e->slot(0,0))}));e->slot(0,16)=std::move(t169);}
{V t170=first(call(e->slot(1,17),Args{concat(lit262,e->slot(0,0))}));e->slot(0,17)=std::move(t170);}
if(truth(([&](){V t171=([&](){V t172=([&](){V t173=([&](){V t174=ne(e->slot(0,13),V());return !truth(t174)?ne(e->slot(0,14),V()):t174;})();return !truth(t173)?ne(e->slot(0,15),V()):t173;})();return !truth(t172)?ne(e->slot(0,16),V()):t172;})();return !truth(t171)?ne(e->slot(0,17),V()):t171;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit159)};V t175=V(true);refs[0].put(std::move(t175));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t176=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,13),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t177=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,14),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t178=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,15),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t179=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,16),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t180=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,17),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t180));}
{V t181=first(call(e->slot(1,17),Args{concat(lit263,e->slot(0,0))}));e->slot(0,18)=std::move(t181);}
{V t182=first(call(e->slot(1,17),Args{concat(lit264,e->slot(0,0))}));e->slot(0,19)=std::move(t182);}
{V t183=first(call(e->slot(1,17),Args{concat(lit265,e->slot(0,0))}));e->slot(0,20)=std::move(t183);}
{V t184=first(call(e->slot(1,17),Args{concat(lit266,e->slot(0,0))}));e->slot(0,21)=std::move(t184);}
{V t185=first(call(e->slot(1,17),Args{concat(lit267,e->slot(0,0))}));e->slot(0,22)=std::move(t185);}
{V t186=first(call(e->slot(1,17),Args{concat(lit268,e->slot(0,0))}));e->slot(0,23)=std::move(t186);}
{V t187=first(call(e->slot(1,17),Args{concat(lit269,e->slot(0,0))}));e->slot(0,24)=std::move(t187);}
if(truth(([&](){V t188=([&](){V t189=([&](){V t190=([&](){V t191=([&](){V t192=([&](){V t193=ne(e->slot(0,18),V());return !truth(t193)?ne(e->slot(0,19),V()):t193;})();return !truth(t192)?ne(e->slot(0,20),V()):t192;})();return !truth(t191)?ne(e->slot(0,21),V()):t191;})();return !truth(t190)?ne(e->slot(0,22),V()):t190;})();return !truth(t189)?ne(e->slot(0,23),V()):t189;})();return !truth(t188)?ne(e->slot(0,24),V()):t188;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit155)};V t194=V(true);refs[0].put(std::move(t194));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t195=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,18),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t196=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,19),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit117)};V t197=first(call(e->slot(1,9),Args{e->slot(0,20),V(0.0)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t198=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,21),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t199=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,22),get(e->slot(0,1),lit115)})),V(0.0),V(1.0)}));refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit120)};V t200=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,23),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit121)};V t201=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,24),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t201));}
{V t202=first(call(e->slot(1,17),Args{concat(lit270,e->slot(0,0))}));e->slot(0,25)=std::move(t202);}
{V t203=first(call(e->slot(1,17),Args{concat(lit271,e->slot(0,0))}));e->slot(0,26)=std::move(t203);}
{V t204=first(call(e->slot(1,17),Args{concat(lit272,e->slot(0,0))}));e->slot(0,27)=std::move(t204);}
{V t205=first(call(e->slot(1,17),Args{concat(lit273,e->slot(0,0))}));e->slot(0,28)=std::move(t205);}
if(truth(([&](){V t206=([&](){V t207=([&](){V t208=ne(e->slot(0,25),V());return !truth(t208)?ne(e->slot(0,26),V()):t208;})();return !truth(t207)?ne(e->slot(0,27),V()):t207;})();return !truth(t206)?ne(e->slot(0,28),V()):t206;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit158)};V t209=V(true);refs[0].put(std::move(t209));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit122)};V t210=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,25),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit123)};V t211=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,26),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t212=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,27),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t213=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,28),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t213));}
{V t214=first(call(e->slot(1,17),Args{concat(lit274,e->slot(0,0))}));e->slot(0,29)=std::move(t214);}
if(truth(eq(e->slot(0,29),V()))){{std::array<Ref,1> refs{Ref(e,0,29)};V t215=first(call(e->slot(1,17),Args{concat(lit275,e->slot(0,0))}));refs[0].put(std::move(t215));}
}
if(truth(eq(e->slot(0,29),V()))){{std::array<Ref,1> refs{Ref(e,0,29)};V t216=first(call(e->slot(1,17),Args{concat(lit276,e->slot(0,0))}));refs[0].put(std::move(t216));}
}
if(truth(eq(e->slot(0,29),V()))){{std::array<Ref,1> refs{Ref(e,0,29)};V t217=first(call(e->slot(1,17),Args{concat(lit277,e->slot(0,0))}));refs[0].put(std::move(t217));}
}
{V t218=first(call(e->slot(1,17),Args{concat(lit278,e->slot(0,0))}));e->slot(0,30)=std::move(t218);}
if(truth(eq(e->slot(0,30),V()))){{std::array<Ref,1> refs{Ref(e,0,30)};V t219=first(call(e->slot(1,17),Args{concat(lit279,e->slot(0,0))}));refs[0].put(std::move(t219));}
}
if(truth(eq(e->slot(0,30),V()))){{std::array<Ref,1> refs{Ref(e,0,30)};V t220=first(call(e->slot(1,17),Args{concat(lit280,e->slot(0,0))}));refs[0].put(std::move(t220));}
}
if(truth(eq(e->slot(0,30),V()))){{std::array<Ref,1> refs{Ref(e,0,30)};V t221=first(call(e->slot(1,17),Args{concat(lit281,e->slot(0,0))}));refs[0].put(std::move(t221));}
}
if(truth(([&](){V t222=ne(e->slot(0,29),V());return !truth(t222)?ne(e->slot(0,30),V()):t222;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit156)};V t223=V(true);refs[0].put(std::move(t223));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t224=first(call(e->slot(1,9),Args{e->slot(0,29),V(0.0)}));refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t225=first(call(e->slot(1,9),Args{e->slot(0,30),V(0.0)}));refs[0].put(std::move(t225));}
{Args t226=call(e->slot(1,30),Args{e->slot(0,2),e->slot(0,0)});e->slot(0,31)=arg(t226,0);e->slot(0,32)=arg(t226,1);e->slot(0,33)=arg(t226,2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t227=e->slot(0,31);refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t228=e->slot(0,32);refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t229=e->slot(0,33);refs[0].put(std::move(t229));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t230=eq(get(e->slot(0,1),lit99),V(4.0));return !truth(t230)?lt(get(e->slot(0,1),lit96),get(get(e->slot(1,1),lit12),lit87)):t230;})())){return Args{V(8.0),get(e->slot(1,6),V(8.0))};
}
if(truth(([&](){V t231=ge(get(e->slot(0,1),lit116),get(get(e->slot(1,1),lit12),lit88));return !truth(t231)?gt(get(e->slot(0,1),lit120),V(0.55)):t231;})())){return Args{V(7.0),get(e->slot(1,6),V(7.0))};
}
if(truth(([&](){V t232=ge(e->slot(0,0),V(2.0));return truth(t232)?([&](){V t233=gt(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit132)})),get(get(e->slot(1,1),lit12),lit90));return !truth(t233)?gt(get(e->slot(0,1),lit110),V(0.45)):t233;})():t232;})())){return Args{V(9.0),get(e->slot(1,6),V(9.0))};
}
if(truth(gt(get(e->slot(0,1),lit133),get(get(e->slot(1,1),lit12),lit91)))){return Args{V(10.0),get(e->slot(1,6),V(10.0))};
}
if(truth(([&](){V t234=([&](){V t235=eq(get(e->slot(0,1),lit101),V(4.0));return !truth(t235)?gt(get(e->slot(0,1),lit106),V(0.1)):t235;})();return !truth(t234)?gt(get(e->slot(0,1),lit107),V(0.38)):t234;})())){return Args{V(6.0),get(e->slot(1,6),V(6.0))};
}
if(truth(([&](){V t236=gt(get(e->slot(1,8),lit165),V(0.18));return !truth(t236)?([&](){V t237=gt(get(e->slot(1,8),lit166),V(0.15));return truth(t237)?ge(e->slot(0,0),V(2.0)):t237;})():t236;})())){return Args{V(4.0),get(e->slot(1,6),V(4.0))};
}
if(truth(([&](){V t238=([&](){V t239=ge(e->slot(0,0),V(2.0));return truth(t239)?gt(get(e->slot(1,8),lit164),V(0.2)):t239;})();return truth(t238)?gt(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit113)})),V(0.025)):t238;})())){return Args{V(3.0),get(e->slot(1,6),V(3.0))};
}
if(truth(([&](){V t240=([&](){V t241=first(call(e->slot(1,26),Args{e->slot(0,0)}));return truth(t241)?gt(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit163)})),V(0.07)):t241;})();return truth(t240)?gt(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit134)})),V(0.006)):t240;})())){return Args{V(2.0),get(e->slot(1,6),V(2.0))};
}
if(truth(gt(get(e->slot(0,1),lit136),get(get(e->slot(1,1),lit12),lit89)))){return Args{V(5.0),get(e->slot(1,6),V(5.0))};
}
return Args{V(1.0),get(e->slot(1,6),V(1.0))};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,35);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t242=get(e->slot(1,1),lit12);e->slot(0,4)=std::move(t242);}
{V t243=first(call(e->slot(1,25),Args{e->slot(0,0)}));e->slot(0,5)=std::move(t243);}
{V t244=first(call(e->slot(1,26),Args{e->slot(0,0)}));e->slot(0,6)=std::move(t244);}
{V t245=first(call(get(e->get("math"),lit197),call(e->slot(1,29),Args{e->slot(0,3),e->slot(0,0)})));e->slot(0,7)=std::move(t245);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t246=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit94),e->slot(0,7),V(0.05),e->slot(0,2)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit95)};V t247=divv(get(e->slot(0,1),lit94),first(call(get(e->get("math"),lit282),Args{get(e->slot(0,4),lit21),V(1.0)})));refs[0].put(std::move(t247));}
call(e->slot(1,34),Args{e->slot(0,0),e->slot(0,1),e->slot(0,3)});
{V t248=first(call(e->slot(1,15),Args{get(e->slot(0,4),lit22),get(e->slot(0,4),lit23),get(e->slot(0,1),lit95)}));e->slot(0,8)=std::move(t248);}
{V t249=first(call(e->slot(1,15),Args{get(e->slot(0,4),lit24),get(e->slot(0,4),lit25),get(e->slot(0,1),lit95)}));e->slot(0,9)=std::move(t249);}
{V t250=([&](){V t251=([&](){V t252=e->slot(0,6);return truth(t252)?get(e->slot(0,4),lit32):t252;})();return !truth(t251)?get(e->slot(0,4),lit33):t251;})();e->slot(0,10)=std::move(t250);}
{V t253=([&](){V t254=([&](){V t255=e->slot(0,6);return truth(t255)?get(e->slot(0,4),lit34):t255;})();return !truth(t254)?get(e->slot(0,4),lit35):t254;})();e->slot(0,11)=std::move(t253);}
{V t256=first(call(e->slot(1,10),Args{sub(V(1.0),first(call(get(e->get("math"),lit248),Args{get(e->slot(0,1),lit122),get(e->slot(0,1),lit123)}))),V(0.0),V(1.0)}));e->slot(0,12)=std::move(t256);}
{V t257=get(e->slot(0,1),lit98);e->slot(0,13)=std::move(t257);}
{V t258=add(mul(get(e->slot(0,1),lit100),get(e->slot(0,4),lit28)),mul(get(e->slot(0,1),lit102),get(e->slot(0,4),lit29)));e->slot(0,14)=std::move(t258);}
{V t259=mul(first(call(get(e->get("math"),lit282),Args{get(e->slot(0,1),lit115),get(e->slot(0,1),lit119)})),get(e->slot(0,4),lit30));e->slot(0,15)=std::move(t259);}
{V t260=mul(first(call(get(e->get("math"),lit282),Args{get(e->slot(0,1),lit116),get(e->slot(0,1),lit120)})),get(e->slot(0,4),lit31));e->slot(0,16)=std::move(t260);}
{V t261=mul(first(call(e->slot(1,10),Args{sub(V(1.0),get(e->slot(0,1),lit97)),V(0.0),V(1.0)})),get(e->slot(0,4),lit27));e->slot(0,17)=std::move(t261);}
{V t262=add(add(add(add(add(mul(get(e->slot(0,1),lit112),get(e->slot(0,4),lit38)),mul(get(e->slot(1,8),lit163),([&](){V t263=([&](){V t264=e->slot(0,6);return truth(t264)?get(e->slot(0,4),lit36):t264;})();return !truth(t263)?mul(get(e->slot(0,4),lit36),V(0.25)):t263;})())),mul(get(e->slot(1,8),lit167),get(e->slot(0,4),lit37))),mul(get(e->slot(0,1),lit127),get(e->slot(0,4),lit44))),mul(get(e->slot(1,8),lit169),get(e->slot(0,4),lit66))),mul(get(e->slot(1,8),lit170),get(e->slot(0,4),lit67)));e->slot(0,18)=std::move(t262);}
{V t265=add(sub(add(mul(get(e->slot(0,1),lit113),get(e->slot(0,4),lit39)),mul(mul(get(e->slot(1,8),lit165),get(e->slot(0,4),lit40)),([&](){V t266=([&](){V t267=e->slot(0,6);return truth(t267)?V(1.0):t267;})();return !truth(t266)?V(0.75):t266;})())),mul(mul(get(e->slot(1,8),lit164),get(e->slot(0,4),lit41)),([&](){V t268=([&](){V t269=e->slot(0,6);return truth(t269)?V(0.1):t269;})();return !truth(t268)?V(1.0):t268;})())),mul(mul(get(e->slot(1,8),lit166),get(e->slot(0,4),lit42)),([&](){V t270=([&](){V t271=e->slot(0,6);return truth(t271)?V(0.0):t271;})();return !truth(t270)?V(1.0):t270;})()));e->slot(0,19)=std::move(t265);}
if(truth(V(!truth(e->slot(0,6))))){{std::array<Ref,1> refs{Ref(e,0,19)};V t272=add(sub(e->slot(0,19),mul(get(e->slot(1,8),lit173),get(e->slot(0,4),lit68))),mul(get(e->slot(1,8),lit172),get(e->slot(0,4),lit69)));refs[0].put(std::move(t272));}
}
{V t273=first(call(e->slot(1,10),Args{add(add(add(mul(first(call(e->slot(1,11),Args{e->slot(0,18)})),get(e->slot(0,4),lit45)),mul(e->slot(0,13),get(e->slot(0,4),lit47))),e->slot(0,17)),mul(e->slot(0,12),V(0.22))),V(0.0),get(e->slot(0,4),lit78)}));e->slot(0,20)=std::move(t273);}
{V t274=first(call(e->slot(1,10),Args{add(add(add(mul(first(call(e->slot(1,11),Args{e->slot(0,19)})),get(e->slot(0,4),lit46)),mul(e->slot(0,13),get(e->slot(0,4),lit47))),mul(e->slot(0,9),V(0.12))),mul(e->slot(0,12),V(0.18))),V(0.0),get(e->slot(0,4),lit78)}));e->slot(0,21)=std::move(t274);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t275=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit128),e->slot(0,20),get(e->slot(0,4),lit14),e->slot(0,2)}));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t276=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit129),e->slot(0,21),get(e->slot(0,4),lit14),e->slot(0,2)}));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t277=first(call(e->slot(1,10),Args{mul(add(get(e->slot(0,1),lit128),get(e->slot(0,1),lit129)),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t277));}
{V t278=first(call(e->slot(1,10),Args{add(add(add(add(mul(get(e->slot(0,1),lit114),get(e->slot(0,4),lit48)),mul(e->slot(0,8),get(e->slot(0,4),lit49))),mul(e->slot(0,16),get(e->slot(0,4),lit50))),mul(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit126)})),V(0.35))),mul(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit127)})),V(0.35))),V(0.0),get(e->slot(0,4),lit79)}));e->slot(0,22)=std::move(t278);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t279=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit131),e->slot(0,22),get(e->slot(0,4),lit15),e->slot(0,2)}));refs[0].put(std::move(t279));}
{V t280=first(call(e->slot(1,10),Args{add(add(add(add(add(add(mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit167)})),get(e->slot(0,4),lit51)),mul(mul(get(e->slot(1,8),lit164),get(e->slot(0,4),lit52)),([&](){V t281=([&](){V t282=e->slot(0,6);return truth(t282)?V(0.25):t282;})();return !truth(t281)?V(1.0):t281;})())),mul(get(e->slot(1,8),lit165),get(e->slot(0,4),lit53))),mul(get(e->slot(0,1),lit118),get(e->slot(0,4),lit54))),mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit172)})),([&](){V t283=([&](){V t284=e->slot(0,6);return truth(t284)?V(0.05):t284;})();return !truth(t283)?V(0.22):t283;})())),mul(get(e->slot(0,1),lit110),get(e->slot(0,4),lit63))),mul(get(e->slot(0,1),lit111),get(e->slot(0,4),lit62))),V(0.0),get(e->slot(0,4),lit80)}));e->slot(0,23)=std::move(t280);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit132)};V t285=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit132),e->slot(0,23),get(e->slot(0,4),lit16),e->slot(0,2)}));refs[0].put(std::move(t285));}
{V t286=first(call(e->slot(1,10),Args{add(add(add(add(add(mul(e->slot(0,8),get(e->slot(0,4),lit55)),mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit168)})),get(e->slot(0,4),lit56))),mul(get(e->slot(0,1),lit124),get(e->slot(0,4),lit57))),mul(get(e->slot(0,1),lit119),V(0.18))),mul(get(e->slot(0,1),lit121),V(0.16))),mul(get(e->slot(0,1),lit109),get(e->slot(0,4),lit64))),V(0.0),get(e->slot(0,4),lit81)}));e->slot(0,24)=std::move(t286);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit133)};V t287=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit133),e->slot(0,24),get(e->slot(0,4),lit17),e->slot(0,2)}));refs[0].put(std::move(t287));}
{V t288=add(add(add(add(mul(get(e->slot(0,1),lit128),V(0.3)),mul(get(e->slot(0,1),lit131),V(0.24))),mul(get(e->slot(0,1),lit132),V(0.2))),mul(get(e->slot(0,1),lit133),V(0.14))),mul(e->slot(0,8),V(0.12)));e->slot(0,25)=std::move(t288);}
{V t289=add(add(add(add(mul(get(e->slot(0,1),lit129),V(0.34)),mul(get(e->slot(0,1),lit132),V(0.26))),mul(get(e->slot(0,1),lit133),V(0.15))),mul(e->slot(0,8),V(0.12))),mul(get(e->slot(0,1),lit111),V(0.13)));e->slot(0,26)=std::move(t289);}
{V t290=add(add(add(add(add(add(e->slot(0,8),mul(e->slot(0,13),get(e->slot(0,4),lit26))),e->slot(0,14)),e->slot(0,15)),e->slot(0,16)),e->slot(0,17)),mul(e->slot(0,12),V(0.22)));e->slot(0,27)=std::move(t290);}
{V t291=first(call(e->slot(1,10),Args{add(add(mul(e->slot(0,18),e->slot(0,10)),mul(mul(mul(e->slot(0,5),e->slot(0,27)),e->slot(0,10)),V(0.45))),mul(mul(first(call(e->slot(1,12),Args{e->slot(0,18)})),e->slot(0,25)),e->slot(0,10))),V(-num(get(e->slot(0,4),lit76))),get(e->slot(0,4),lit76)}));e->slot(0,28)=std::move(t291);}
{V t292=first(call(e->slot(1,10),Args{add(add(mul(e->slot(0,19),e->slot(0,11)),mul(mul(mul(first(call(e->slot(1,12),Args{e->slot(0,19)})),e->slot(0,27)),e->slot(0,11)),V(0.35))),mul(mul(first(call(e->slot(1,12),Args{e->slot(0,19)})),e->slot(0,26)),e->slot(0,11))),V(-num(get(e->slot(0,4),lit77))),get(e->slot(0,4),lit77)}));e->slot(0,29)=std::move(t292);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t293=e->slot(0,28);refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit145)};V t294=e->slot(0,29);refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t295=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit134),e->slot(0,28),get(e->slot(0,4),lit13),e->slot(0,2)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t296=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit135),e->slot(0,29),get(e->slot(0,4),lit13),e->slot(0,2)}));refs[0].put(std::move(t296));}
{V t297=first(call(e->slot(1,10),Args{add(add(add(add(add(add(mul(divv(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit134)})),first(call(get(e->get("math"),lit282),Args{get(e->slot(0,4),lit76),V(0.001)}))),V(0.3)),mul(divv(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit135)})),first(call(get(e->get("math"),lit282),Args{get(e->slot(0,4),lit77),V(0.001)}))),V(0.22))),mul(get(e->slot(0,1),lit130),V(0.16))),mul(get(e->slot(0,1),lit131),V(0.12))),mul(get(e->slot(0,1),lit132),V(0.1))),mul(get(e->slot(0,1),lit133),V(0.06))),mul(get(e->slot(0,1),lit106),V(0.04))),V(0.0),V(1.0)}));e->slot(0,30)=std::move(t297);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit146)};V t298=e->slot(0,30);refs[0].put(std::move(t298));}
{V t299=([&](){V t300=([&](){V t301=gt(e->slot(0,30),get(e->slot(0,1),lit136));return truth(t301)?get(e->slot(0,4),lit18):t301;})();return !truth(t300)?get(e->slot(0,4),lit19):t300;})();e->slot(0,31)=std::move(t299);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit136)};V t302=first(call(e->slot(1,13),Args{get(e->slot(0,1),lit136),e->slot(0,30),e->slot(0,31),e->slot(0,2)}));refs[0].put(std::move(t302));}
{V t303=first(call(get(e->get("math"),lit282),Args{get(e->slot(0,1),lit136),mul(get(e->slot(0,1),lit100),V(0.75)),mul(get(e->slot(0,1),lit102),V(0.55)),mul(get(e->slot(0,1),lit115),V(0.45)),mul(get(e->slot(0,1),lit133),V(0.42))}));e->slot(0,32)=std::move(t303);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit137)};V t304=first(call(e->slot(1,14),Args{get(e->slot(0,1),lit137),e->slot(0,32),get(e->slot(0,4),lit18),get(e->slot(0,4),lit20),e->slot(0,2)}));refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit138)};V t305=first(call(e->slot(1,10),Args{add(add(add(mul(sub(V(1.0),get(e->slot(0,1),lit105)),V(0.38)),mul(get(e->slot(0,1),lit111),V(0.26))),mul(get(e->slot(0,1),lit125),V(0.22))),mul(get(e->slot(0,1),lit137),V(0.14))),V(0.0),V(1.0)}));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit139)};V t306=first(call(e->slot(1,10),Args{add(add(add(add(mul(get(e->slot(0,1),lit136),V(0.34)),mul(get(e->slot(0,1),lit130),V(0.24))),mul(get(e->slot(0,1),lit133),V(0.16))),mul(get(e->slot(0,1),lit98),V(0.14))),mul(e->slot(0,12),V(0.12))),V(0.0),V(1.0)}));refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit140)};V t307=first(call(e->slot(1,10),Args{add(add(add(mul(get(e->slot(0,1),lit139),get(e->slot(0,4),lit86)),mul(get(e->slot(0,1),lit138),V(0.2))),mul(get(e->slot(0,1),lit120),V(0.18))),mul(get(e->slot(0,1),lit109),V(0.12))),V(0.0),V(1.0)}));refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit141)};V t308=first(call(e->slot(1,10),Args{add(add(mul(([&](){V t309=([&](){V t310=e->slot(0,6);return truth(t310)?divv(first(call(e->slot(1,11),Args{get(e->slot(0,1),lit134)})),first(call(get(e->get("math"),lit282),Args{get(e->slot(0,4),lit76),V(0.001)}))):t310;})();return !truth(t309)?V(0.0):t309;})(),get(e->slot(0,4),lit84)),mul(get(e->slot(0,1),lit130),V(0.14))),mul(get(e->slot(0,1),lit133),V(0.1))),V(0.0),V(1.0)}));refs[0].put(std::move(t308));}
{V t311=([&](){V t312=([&](){V t313=e->slot(0,6);return truth(t313)?get(e->slot(0,4),lit70):t313;})();return !truth(t312)?get(e->slot(0,4),lit71):t312;})();e->slot(0,33)=std::move(t311);}
{V t314=([&](){V t315=([&](){V t316=e->slot(0,6);return truth(t316)?get(e->slot(0,4),lit73):t316;})();return !truth(t315)?get(e->slot(0,4),lit74):t315;})();e->slot(0,34)=std::move(t314);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit142)};V t317=first(call(e->slot(1,10),Args{add(add(add(add(get(e->slot(0,1),lit127),mul(get(e->slot(0,1),lit134),e->slot(0,33))),mul(get(e->slot(0,1),lit135),get(e->slot(0,4),lit72))),mul(mul(e->slot(0,5),get(e->slot(0,1),lit132)),V(0.006))),mul(mul(e->slot(0,5),get(e->slot(0,1),lit130)),V(0.004))),V(-num(get(e->slot(0,4),lit82))),get(e->slot(0,4),lit82)}));refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit143)};V t318=first(call(e->slot(1,10),Args{sub(sub(sub(get(e->slot(0,1),lit126),mul(mul(e->slot(0,5),get(e->slot(0,1),lit134)),e->slot(0,34))),mul(e->slot(0,8),get(e->slot(0,4),lit75))),mul(mul(e->slot(0,5),get(e->slot(0,1),lit131)),V(0.006))),V(-num(get(e->slot(0,4),lit83))),get(e->slot(0,4),lit83)}));refs[0].put(std::move(t318));}
{std::array<Ref,2> refs{Ref(e->slot(0,1),lit147),Ref(e->slot(0,1),lit148)};Args t319=call(e->slot(1,35),Args{e->slot(0,0),e->slot(0,1)});refs[0].put(arg(t319,0));refs[1].put(arg(t319,1));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit149)};V t320=V(true);refs[0].put(std::move(t320));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t321=get(e->slot(1,1),lit12);e->slot(0,1)=std::move(t321);}
{V t322=get(get(e->slot(1,8),lit193),e->slot(1,4));e->slot(0,2)=std::move(t322);}
{V t323=get(get(e->slot(1,8),lit193),e->slot(1,5));e->slot(0,3)=std::move(t323);}
if(truth(([&](){V t324=V(!truth(e->slot(0,2)));return !truth(t324)?V(!truth(e->slot(0,3))):t324;})())){return Args{};
}
{V t325=sub(([&](){V t326=get(e->slot(0,3),lit134);return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(e->slot(0,2),lit134);return !truth(t327)?V(0.0):t327;})());e->slot(0,4)=std::move(t325);}
{V t328=mul(add(([&](){V t329=get(e->slot(0,2),lit135);return !truth(t329)?V(0.0):t329;})(),([&](){V t330=get(e->slot(0,3),lit135);return !truth(t330)?V(0.0):t330;})()),V(0.5));e->slot(0,5)=std::move(t328);}
{V t331=first(call(e->slot(1,10),Args{divv(sub(([&](){V t332=get(e->slot(0,3),lit94);return !truth(t332)?V(0.0):t332;})(),([&](){V t333=get(e->slot(0,2),lit94);return !truth(t333)?V(0.0):t333;})()),first(call(get(e->get("math"),lit282),Args{get(e->slot(0,1),lit21),V(1.0)}))),V(-num(V(1.5))),V(1.5)}));e->slot(0,6)=std::move(t331);}
{V t334=first(call(e->slot(1,10),Args{add(add(add(add(mul(first(call(e->slot(1,11),Args{e->slot(0,4)})),V(3.0)),mul(first(call(e->slot(1,11),Args{e->slot(0,5)})),V(2.0))),mul(first(call(e->slot(1,11),Args{e->slot(0,6)})),V(0.18))),mul(get(e->slot(1,8),lit173),V(0.2))),mul(get(e->slot(1,8),lit170),V(0.18))),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t334);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit189)};V t335=first(call(e->slot(1,13),Args{get(e->slot(1,8),lit189),e->slot(0,7),V(0.12),e->slot(0,0)}));refs[0].put(std::move(t335));}
{V t336=first(call(e->slot(1,10),Args{add(mul(e->slot(0,4),get(e->slot(0,1),lit59)),mul(e->slot(0,6),V(0.006))),V(-num(V(0.018))),V(0.018)}));e->slot(0,8)=std::move(t336);}
{V t337=first(call(e->slot(1,10),Args{mul(mul(first(call(e->slot(1,11),Args{e->slot(0,6)})),get(e->slot(0,1),lit60)),V(0.012)),V(0.0),V(0.014)}));e->slot(0,9)=std::move(t337);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit142)};V t338=first(call(e->slot(1,10),Args{add(([&](){V t339=get(e->slot(0,2),lit142);return !truth(t339)?V(0.0):t339;})(),e->slot(0,8)),V(-num(get(e->slot(0,1),lit82))),get(e->slot(0,1),lit82)}));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit142)};V t340=first(call(e->slot(1,10),Args{add(([&](){V t341=get(e->slot(0,3),lit142);return !truth(t341)?V(0.0):t341;})(),e->slot(0,8)),V(-num(get(e->slot(0,1),lit82))),get(e->slot(0,1),lit82)}));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit143)};V t342=first(call(e->slot(1,10),Args{sub(([&](){V t343=get(e->slot(0,2),lit143);return !truth(t343)?V(0.0):t343;})(),e->slot(0,9)),V(-num(get(e->slot(0,1),lit83))),get(e->slot(0,1),lit83)}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit143)};V t344=first(call(e->slot(1,10),Args{sub(([&](){V t345=get(e->slot(0,3),lit143);return !truth(t345)?V(0.0):t345;})(),e->slot(0,9)),V(-num(get(e->slot(0,1),lit83))),get(e->slot(0,1),lit83)}));refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit132)};V t346=first(call(e->slot(1,10),Args{add(([&](){V t347=get(e->slot(0,2),lit132);return !truth(t347)?V(0.0):t347;})(),mul(mul(get(e->slot(1,8),lit189),get(e->slot(0,1),lit58)),V(0.1))),V(0.0),V(1.0)}));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit132)};V t348=first(call(e->slot(1,10),Args{add(([&](){V t349=get(e->slot(0,3),lit132);return !truth(t349)?V(0.0):t349;})(),mul(mul(get(e->slot(1,8),lit189),get(e->slot(0,1),lit58)),V(0.1))),V(0.0),V(1.0)}));refs[0].put(std::move(t348));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t350=get(e->slot(1,1),lit12);e->slot(0,2)=std::move(t350);}
{V t351=get(get(e->slot(1,8),lit193),e->slot(0,0));e->slot(0,3)=std::move(t351);}
if(truth(V(!truth(e->slot(0,3))))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit94)};V t352=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit94),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit95)};V t353=V(0.0);refs[0].put(std::move(t353));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit96)};V t354=V(0.0);refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit97)};V t355=V(0.0);refs[0].put(std::move(t355));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit98)};V t356=V(1.0);refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit99)};V t357=V(0.0);refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit100)};V t358=V(0.0);refs[0].put(std::move(t358));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit102)};V t359=V(0.0);refs[0].put(std::move(t359));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit103)};V t360=V(0.0);refs[0].put(std::move(t360));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit104)};V t361=V(0.0);refs[0].put(std::move(t361));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t362=V(1.0);refs[0].put(std::move(t362));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit106)};V t363=V(0.0);refs[0].put(std::move(t363));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit107)};V t364=V(0.0);refs[0].put(std::move(t364));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit108)};V t365=V(1.0);refs[0].put(std::move(t365));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit109)};V t366=V(0.0);refs[0].put(std::move(t366));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit110)};V t367=V(0.0);refs[0].put(std::move(t367));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit111)};V t368=V(0.0);refs[0].put(std::move(t368));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit112)};V t369=V(0.0);refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit113)};V t370=V(0.0);refs[0].put(std::move(t370));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit114)};V t371=V(0.0);refs[0].put(std::move(t371));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit115)};V t372=V(0.0);refs[0].put(std::move(t372));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit116)};V t373=V(0.0);refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit117)};V t374=V(0.0);refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit118)};V t375=V(0.0);refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit119)};V t376=V(0.0);refs[0].put(std::move(t376));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit120)};V t377=V(0.0);refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit121)};V t378=V(0.0);refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit122)};V t379=V(1.0);refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit123)};V t380=V(1.0);refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit124)};V t381=V(0.0);refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit125)};V t382=V(0.0);refs[0].put(std::move(t382));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit126)};V t383=V(0.0);refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit127)};V t384=V(0.0);refs[0].put(std::move(t384));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit128)};V t385=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit128),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t385));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit129)};V t386=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit129),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t386));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit130)};V t387=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit130),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t387));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit131)};V t388=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit131),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t388));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit132)};V t389=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit132),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t389));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit133)};V t390=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit133),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t390));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit134)};V t391=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit134),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit135)};V t392=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit135),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit136)};V t393=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit136),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t393));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit137)};V t394=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit137),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t394));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit138)};V t395=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit138),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit139)};V t396=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit139),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit140)};V t397=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit140),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit141)};V t398=first(call(e->slot(1,13),Args{get(e->slot(0,3),lit141),V(0.0),get(e->slot(0,2),lit20),e->slot(0,1)}));refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit142)};V t399=V(0.0);refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit143)};V t400=V(0.0);refs[0].put(std::move(t400));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit144)};V t401=V(0.0);refs[0].put(std::move(t401));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit145)};V t402=V(0.0);refs[0].put(std::move(t402));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit146)};V t403=V(0.0);refs[0].put(std::move(t403));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit147)};V t404=V(0.0);refs[0].put(std::move(t404));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit148)};V t405=lit283;refs[0].put(std::move(t405));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit149)};V t406=V(false);refs[0].put(std::move(t406));}
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);{V t407=get(e->slot(1,1),lit12);e->slot(0,1)=std::move(t407);}
{V t408=get(get(e->slot(1,8),lit193),e->slot(1,2));e->slot(0,2)=std::move(t408);}
{V t409=get(get(e->slot(1,8),lit193),e->slot(1,3));e->slot(0,3)=std::move(t409);}
{V t410=get(get(e->slot(1,8),lit193),e->slot(1,4));e->slot(0,4)=std::move(t410);}
{V t411=get(get(e->slot(1,8),lit193),e->slot(1,5));e->slot(0,5)=std::move(t411);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit184)};V t412=first(call(e->slot(1,10),Args{mul(add(([&](){V t413=get(e->slot(0,2),lit141);return !truth(t413)?V(0.0):t413;})(),([&](){V t414=get(e->slot(0,3),lit141);return !truth(t414)?V(0.0):t414;})()),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t412));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit185)};V t415=first(call(e->slot(1,10),Args{divv(mul(add(first(call(e->slot(1,11),Args{([&](){V t416=get(e->slot(0,4),lit142);return !truth(t416)?V(0.0):t416;})()})),first(call(e->slot(1,11),Args{([&](){V t417=get(e->slot(0,5),lit142);return !truth(t417)?V(0.0):t417;})()}))),V(0.5)),first(call(get(e->get("math"),lit282),Args{get(e->slot(0,1),lit82),V(0.001)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t415));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit187)};V t418=first(call(e->slot(1,13),Args{get(e->slot(1,8),lit187),mul(add(add(add(([&](){V t419=get(e->slot(0,2),lit133);return !truth(t419)?V(0.0):t419;})(),([&](){V t420=get(e->slot(0,3),lit133);return !truth(t420)?V(0.0):t420;})()),([&](){V t421=get(e->slot(0,4),lit133);return !truth(t421)?V(0.0):t421;})()),([&](){V t422=get(e->slot(0,5),lit133);return !truth(t422)?V(0.0):t422;})()),V(0.25)),get(e->slot(0,1),lit17),e->slot(0,0)}));refs[0].put(std::move(t418));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit188)};V t423=first(call(e->slot(1,13),Args{get(e->slot(1,8),lit188),sub(mul(add(([&](){V t424=get(e->slot(0,4),lit132);return !truth(t424)?V(0.0):t424;})(),([&](){V t425=get(e->slot(0,5),lit132);return !truth(t425)?V(0.0):t425;})()),V(0.5)),mul(add(([&](){V t426=get(e->slot(0,2),lit132);return !truth(t426)?V(0.0):t426;})(),([&](){V t427=get(e->slot(0,3),lit132);return !truth(t427)?V(0.0):t427;})()),V(0.5))),get(e->slot(0,1),lit16),e->slot(0,0)}));refs[0].put(std::move(t423));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit139)};V t428=first(call(e->slot(1,10),Args{mul(mul(add(add(add(([&](){V t429=get(e->slot(0,2),lit139);return !truth(t429)?V(0.0):t429;})(),([&](){V t430=get(e->slot(0,3),lit139);return !truth(t430)?V(0.0):t430;})()),([&](){V t431=get(e->slot(0,4),lit139);return !truth(t431)?V(0.0):t431;})()),([&](){V t432=get(e->slot(0,5),lit139);return !truth(t432)?V(0.0):t432;})()),V(0.25)),get(e->slot(0,1),lit85)),V(0.0),V(1.0)}));refs[0].put(std::move(t428));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit140)};V t433=first(call(e->slot(1,10),Args{mul(add(add(add(([&](){V t434=get(e->slot(0,2),lit140);return !truth(t434)?V(0.0):t434;})(),([&](){V t435=get(e->slot(0,3),lit140);return !truth(t435)?V(0.0):t435;})()),([&](){V t436=get(e->slot(0,4),lit140);return !truth(t436)?V(0.0):t436;})()),([&](){V t437=get(e->slot(0,5),lit140);return !truth(t437)?V(0.0):t437;})()),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t433));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit186)};V t438=first(call(e->slot(1,10),Args{add(add(add(add(add(mul(get(e->slot(1,8),lit174),V(0.54)),mul(get(e->slot(1,8),lit177),V(1.15))),mul(get(e->slot(1,8),lit178),V(0.58))),mul(get(e->slot(1,8),lit187),V(0.24))),mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit188)})),V(0.18))),mul(get(e->slot(1,8),lit139),V(0.2))),V(0.0),V(1.0)}));refs[0].put(std::move(t438));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,20),Args{concat(lit284,e->slot(0,0)),([&](){V t439=get(e->slot(0,1),lit136);return !truth(t439)?V(0.0):t439;})()});
call(e->slot(1,20),Args{concat(lit285,e->slot(0,0)),([&](){V t440=get(e->slot(0,1),lit137);return !truth(t440)?V(0.0):t440;})()});
call(e->slot(1,20),Args{concat(lit286,e->slot(0,0)),([&](){V t441=get(e->slot(0,1),lit134);return !truth(t441)?V(0.0):t441;})()});
call(e->slot(1,20),Args{concat(lit287,e->slot(0,0)),([&](){V t442=get(e->slot(0,1),lit135);return !truth(t442)?V(0.0):t442;})()});
call(e->slot(1,20),Args{concat(lit288,e->slot(0,0)),([&](){V t443=get(e->slot(0,1),lit142);return !truth(t443)?V(0.0):t443;})()});
call(e->slot(1,20),Args{concat(lit289,e->slot(0,0)),([&](){V t444=get(e->slot(0,1),lit143);return !truth(t444)?V(0.0):t444;})()});
call(e->slot(1,20),Args{concat(lit290,e->slot(0,0)),([&](){V t445=get(e->slot(0,1),lit142);return !truth(t445)?V(0.0):t445;})()});
call(e->slot(1,20),Args{concat(lit291,e->slot(0,0)),([&](){V t446=get(e->slot(0,1),lit143);return !truth(t446)?V(0.0):t446;})()});
call(e->slot(1,20),Args{concat(lit292,e->slot(0,0)),([&](){V t447=get(e->slot(0,1),lit136);return !truth(t447)?V(0.0):t447;})()});
call(e->slot(1,20),Args{concat(lit293,e->slot(0,0)),([&](){V t448=get(e->slot(0,1),lit128);return !truth(t448)?V(0.0):t448;})()});
call(e->slot(1,20),Args{concat(lit294,e->slot(0,0)),([&](){V t449=get(e->slot(0,1),lit129);return !truth(t449)?V(0.0):t449;})()});
call(e->slot(1,20),Args{concat(lit295,e->slot(0,0)),([&](){V t450=get(e->slot(0,1),lit130);return !truth(t450)?V(0.0):t450;})()});
call(e->slot(1,20),Args{concat(lit296,e->slot(0,0)),([&](){V t451=get(e->slot(0,1),lit131);return !truth(t451)?V(0.0):t451;})()});
call(e->slot(1,20),Args{concat(lit297,e->slot(0,0)),([&](){V t452=get(e->slot(0,1),lit132);return !truth(t452)?V(0.0):t452;})()});
call(e->slot(1,20),Args{concat(lit298,e->slot(0,0)),([&](){V t453=get(e->slot(0,1),lit133);return !truth(t453)?V(0.0):t453;})()});
call(e->slot(1,20),Args{concat(lit299,e->slot(0,0)),([&](){V t454=get(e->slot(0,1),lit139);return !truth(t454)?V(0.0):t454;})()});
call(e->slot(1,20),Args{concat(lit300,e->slot(0,0)),([&](){V t455=get(e->slot(0,1),lit140);return !truth(t455)?V(0.0):t455;})()});
call(e->slot(1,20),Args{concat(lit301,e->slot(0,0)),([&](){V t456=get(e->slot(0,1),lit138);return !truth(t456)?V(0.0):t456;})()});
call(e->slot(1,20),Args{concat(lit302,e->slot(0,0)),([&](){V t457=get(e->slot(0,1),lit141);return !truth(t457)?V(0.0):t457;})()});
call(e->slot(1,20),Args{concat(lit303,e->slot(0,0)),([&](){V t458=get(e->slot(0,1),lit139);return !truth(t458)?V(0.0):t458;})()});
call(e->slot(1,20),Args{concat(lit304,e->slot(0,0)),([&](){V t459=get(e->slot(0,1),lit133);return !truth(t459)?V(0.0):t459;})()});
call(e->slot(1,20),Args{concat(lit305,e->slot(0,0)),([&](){V t460=get(e->slot(0,1),lit130);return !truth(t460)?V(0.0):t460;})()});
call(e->slot(1,20),Args{concat(lit306,e->slot(0,0)),([&](){V t461=get(e->slot(0,1),lit131);return !truth(t461)?V(0.0):t461;})()});
call(e->slot(1,20),Args{concat(lit307,e->slot(0,0)),([&](){V t462=get(e->slot(0,1),lit147);return !truth(t462)?V(0.0):t462;})()});
call(e->slot(1,20),Args{concat(lit308,e->slot(0,0)),([&](){V t463=get(e->slot(0,1),lit148);return !truth(t463)?lit309:t463;})()});
call(e->slot(1,20),Args{concat(lit310,e->slot(0,0)),([&](){V t464=get(e->slot(0,1),lit136);return !truth(t464)?V(0.0):t464;})()});
call(e->slot(1,20),Args{concat(lit311,e->slot(0,0)),([&](){V t465=get(e->slot(0,1),lit142);return !truth(t465)?V(0.0):t465;})()});
call(e->slot(1,20),Args{concat(lit312,e->slot(0,0)),([&](){V t466=get(e->slot(0,1),lit143);return !truth(t466)?V(0.0):t466;})()});
if(truth(V(!truth(get(e->slot(1,8),lit192))))){return Args{};
}
call(e->slot(1,20),Args{concat(lit313,e->slot(0,0)),([&](){V t467=get(e->slot(0,1),lit94);return !truth(t467)?V(0.0):t467;})()});
call(e->slot(1,20),Args{concat(lit314,e->slot(0,0)),([&](){V t468=get(e->slot(0,1),lit96);return !truth(t468)?V(0.0):t468;})()});
call(e->slot(1,20),Args{concat(lit315,e->slot(0,0)),([&](){V t469=get(e->slot(0,1),lit97);return !truth(t469)?V(0.0):t469;})()});
call(e->slot(1,20),Args{concat(lit316,e->slot(0,0)),([&](){V t470=get(e->slot(0,1),lit100);return !truth(t470)?V(0.0):t470;})()});
call(e->slot(1,20),Args{concat(lit317,e->slot(0,0)),([&](){V t471=get(e->slot(0,1),lit102);return !truth(t471)?V(0.0):t471;})()});
call(e->slot(1,20),Args{concat(lit318,e->slot(0,0)),([&](){V t472=get(e->slot(0,1),lit115);return !truth(t472)?V(0.0):t472;})()});
call(e->slot(1,20),Args{concat(lit319,e->slot(0,0)),([&](){V t473=get(e->slot(0,1),lit116);return !truth(t473)?V(0.0):t473;})()});
call(e->slot(1,20),Args{concat(lit320,e->slot(0,0)),([&](){V t474=get(e->slot(0,1),lit118);return !truth(t474)?V(0.0):t474;})()});
call(e->slot(1,20),Args{concat(lit321,e->slot(0,0)),([&](){V t475=get(e->slot(0,1),lit112);return !truth(t475)?V(0.0):t475;})()});
call(e->slot(1,20),Args{concat(lit322,e->slot(0,0)),([&](){V t476=get(e->slot(0,1),lit113);return !truth(t476)?V(0.0):t476;})()});
call(e->slot(1,20),Args{concat(lit323,e->slot(0,0)),([&](){V t477=get(e->slot(0,1),lit114);return !truth(t477)?V(0.0):t477;})()});
call(e->slot(1,20),Args{concat(lit324,e->slot(0,0)),([&](){V t478=get(e->slot(0,1),lit126);return !truth(t478)?V(0.0):t478;})()});
call(e->slot(1,20),Args{concat(lit325,e->slot(0,0)),([&](){V t479=get(e->slot(0,1),lit127);return !truth(t479)?V(0.0):t479;})()});
call(e->slot(1,20),Args{concat(lit326,e->slot(0,0)),([&](){V t480=get(e->slot(0,1),lit110);return !truth(t480)?V(0.0):t480;})()});
call(e->slot(1,20),Args{concat(lit327,e->slot(0,0)),([&](){V t481=get(e->slot(0,1),lit111);return !truth(t481)?V(0.0):t481;})()});
call(e->slot(1,20),Args{concat(lit328,e->slot(0,0)),([&](){V t482=get(e->slot(0,1),lit109);return !truth(t482)?V(0.0):t482;})()});
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,20),Args{lit329,([&](){V t483=get(e->slot(1,8),lit150);return !truth(t483)?lit309:t483;})()});
call(e->slot(1,20),Args{lit330,([&](){V t484=get(e->slot(1,8),lit151);return !truth(t484)?V(0.0):t484;})()});
call(e->slot(1,20),Args{lit331,([&](){V t485=([&](){V t486=get(e->slot(1,8),lit152);return truth(t486)?V(1.0):t486;})();return !truth(t485)?V(0.0):t485;})()});
call(e->slot(1,20),Args{lit332,([&](){V t487=get(e->slot(1,8),lit174);return !truth(t487)?V(0.0):t487;})()});
call(e->slot(1,20),Args{lit333,([&](){V t488=get(e->slot(1,8),lit175);return !truth(t488)?V(0.0):t488;})()});
call(e->slot(1,20),Args{lit334,([&](){V t489=get(e->slot(1,8),lit176);return !truth(t489)?V(0.0):t489;})()});
call(e->slot(1,20),Args{lit335,([&](){V t490=get(e->slot(1,8),lit177);return !truth(t490)?V(0.0):t490;})()});
call(e->slot(1,20),Args{lit336,([&](){V t491=get(e->slot(1,8),lit178);return !truth(t491)?V(0.0):t491;})()});
call(e->slot(1,20),Args{lit337,([&](){V t492=get(e->slot(1,8),lit179);return !truth(t492)?V(0.0):t492;})()});
call(e->slot(1,20),Args{lit338,([&](){V t493=get(e->slot(1,8),lit180);return !truth(t493)?V(0.0):t493;})()});
call(e->slot(1,20),Args{lit339,([&](){V t494=get(e->slot(1,8),lit181);return !truth(t494)?V(0.0):t494;})()});
call(e->slot(1,20),Args{lit340,([&](){V t495=get(e->slot(1,8),lit182);return !truth(t495)?V(0.0):t495;})()});
call(e->slot(1,20),Args{lit341,([&](){V t496=get(e->slot(1,8),lit183);return !truth(t496)?V(0.0):t496;})()});
call(e->slot(1,20),Args{lit342,([&](){V t497=get(e->slot(1,8),lit184);return !truth(t497)?V(0.0):t497;})()});
call(e->slot(1,20),Args{lit343,([&](){V t498=get(e->slot(1,8),lit185);return !truth(t498)?V(0.0):t498;})()});
call(e->slot(1,20),Args{lit344,([&](){V t499=get(e->slot(1,8),lit186);return !truth(t499)?V(0.0):t499;})()});
call(e->slot(1,20),Args{lit345,([&](){V t500=get(e->slot(1,8),lit187);return !truth(t500)?V(0.0):t500;})()});
call(e->slot(1,20),Args{lit346,([&](){V t501=get(e->slot(1,8),lit188);return !truth(t501)?V(0.0):t501;})()});
call(e->slot(1,20),Args{lit347,([&](){V t502=get(e->slot(1,8),lit189);return !truth(t502)?V(0.0):t502;})()});
call(e->slot(1,20),Args{lit348,([&](){V t503=get(e->slot(1,8),lit140);return !truth(t503)?V(0.0):t503;})()});
call(e->slot(1,20),Args{lit349,([&](){V t504=get(e->slot(1,8),lit139);return !truth(t504)?V(0.0):t504;})()});
call(e->slot(1,20),Args{lit350,([&](){V t505=get(e->slot(1,8),lit186);return !truth(t505)?V(0.0):t505;})()});
call(e->slot(1,20),Args{lit351,([&](){V t506=get(e->slot(1,8),lit187);return !truth(t506)?V(0.0):t506;})()});
call(e->slot(1,20),Args{lit352,([&](){V t507=get(e->slot(1,8),lit188);return !truth(t507)?V(0.0):t507;})()});
call(e->slot(1,20),Args{lit353,([&](){V t508=get(e->slot(1,8),lit189);return !truth(t508)?V(0.0):t508;})()});
call(e->slot(1,20),Args{lit354,([&](){V t509=get(e->slot(1,8),lit140);return !truth(t509)?V(0.0):t509;})()});
call(e->slot(1,20),Args{lit355,([&](){V t510=get(e->slot(1,8),lit139);return !truth(t510)?V(0.0):t510;})()});
call(e->slot(1,20),Args{lit356,([&](){V t511=get(e->slot(1,8),lit150);return !truth(t511)?lit309:t511;})()});
call(e->slot(1,20),Args{lit357,([&](){V t512=get(e->slot(1,8),lit151);return !truth(t512)?V(0.0):t512;})()});
call(e->slot(1,20),Args{lit358,([&](){V t513=get(e->slot(1,8),lit174);return !truth(t513)?V(0.0):t513;})()});
call(e->slot(1,20),Args{lit359,([&](){V t514=get(e->slot(1,8),lit150);return !truth(t514)?lit309:t514;})()});
call(e->slot(1,20),Args{lit360,([&](){V t515=get(e->slot(1,8),lit151);return !truth(t515)?V(0.0):t515;})()});
call(e->slot(1,20),Args{lit361,([&](){V t516=get(e->slot(1,8),lit174);return !truth(t516)?V(0.0):t516;})()});
call(e->slot(1,20),Args{lit362,([&](){V t517=get(e->slot(1,8),lit139);return !truth(t517)?V(0.0):t517;})()});
call(e->slot(1,20),Args{lit363,([&](){V t518=get(e->slot(1,8),lit140);return !truth(t518)?V(0.0):t518;})()});
if(truth(V(!truth(get(e->slot(1,8),lit192))))){return Args{};
}
call(e->slot(1,20),Args{lit364,([&](){V t519=([&](){V t520=get(e->slot(1,8),lit153);return truth(t520)?V(1.0):t520;})();return !truth(t519)?V(0.0):t519;})()});
call(e->slot(1,20),Args{lit365,([&](){V t521=([&](){V t522=get(e->slot(1,8),lit154);return truth(t522)?V(1.0):t522;})();return !truth(t521)?V(0.0):t521;})()});
call(e->slot(1,20),Args{lit366,([&](){V t523=([&](){V t524=get(e->slot(1,8),lit155);return truth(t524)?V(1.0):t524;})();return !truth(t523)?V(0.0):t523;})()});
call(e->slot(1,20),Args{lit367,([&](){V t525=([&](){V t526=get(e->slot(1,8),lit156);return truth(t526)?V(1.0):t526;})();return !truth(t525)?V(0.0):t525;})()});
call(e->slot(1,20),Args{lit368,([&](){V t527=([&](){V t528=get(e->slot(1,8),lit157);return truth(t528)?V(1.0):t528;})();return !truth(t527)?V(0.0):t527;})()});
call(e->slot(1,20),Args{lit369,([&](){V t529=([&](){V t530=get(e->slot(1,8),lit158);return truth(t530)?V(1.0):t530;})();return !truth(t529)?V(0.0):t529;})()});
call(e->slot(1,20),Args{lit370,([&](){V t531=([&](){V t532=get(e->slot(1,8),lit159);return truth(t532)?V(1.0):t532;})();return !truth(t531)?V(0.0):t531;})()});
call(e->slot(1,20),Args{lit371,([&](){V t533=([&](){V t534=get(e->slot(1,8),lit160);return truth(t534)?V(1.0):t534;})();return !truth(t533)?V(0.0):t533;})()});
call(e->slot(1,20),Args{lit372,([&](){V t535=([&](){V t536=get(e->slot(1,8),lit161);return truth(t536)?V(1.0):t536;})();return !truth(t535)?V(0.0):t535;})()});
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t537=num(V(0.0)),t538=num(V(3.0)),t539=num(V(1.0));for(double t540=t537;(t539>0?t540<=t538:t540>=t538);t540+=t539){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t540);call(e->slot(2,40),Args{e->slot(0,0),get(get(e->slot(2,8),lit193),e->slot(0,0))});
}}
call(e->slot(1,41),Args{});
return Args{};});
Ref(e->slot(0,1),lit373).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,8),lit150)};V t541=lit1;refs[0].put(std::move(t541));}
call(e->slot(1,42),Args{});
return Args{};}));
Ref(e->slot(0,1),lit374).put(native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit151)};V t542=add(([&](){V t543=get(e->slot(1,8),lit151);return !truth(t543)?V(0.0):t543;})(),V(1.0));refs[0].put(std::move(t542));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t544=first(call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t544));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit150)};V t545=lit375;refs[0].put(std::move(t545));}
call(e->slot(1,42),Args{});
return Args{};
}
call(e->slot(1,27),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t546=([&](){V t547=e->slot(0,1);return !truth(t547)?first(call(e->slot(1,23),Args{})):t547;})();refs[0].put(std::move(t546));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit150)};V t548=lit376;refs[0].put(std::move(t548));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit152)};V t549=V(false);refs[0].put(std::move(t549));}
call(e->slot(1,42),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,16),Args{e->slot(0,1),lit193,V()})))))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit150)};V t550=lit377;refs[0].put(std::move(t550));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit152)};V t551=V(false);refs[0].put(std::move(t551));}
call(e->slot(1,42),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit150)};V t552=lit378;refs[0].put(std::move(t552));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit152)};V t553=V(true);refs[0].put(std::move(t553));}
call(e->slot(1,32),Args{});
if(truth(first(call(e->slot(1,28),Args{e->slot(0,0)})))){call(e->slot(1,33),Args{e->slot(0,1)});
}else{{std::array<Ref,1> refs{Ref(e->slot(1,8),lit167)};V t554=first(call(e->slot(1,31),Args{e->slot(0,1)}));refs[0].put(std::move(t554));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit163)};V t555=first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,1),lit163,get(e->slot(1,8),lit163)})),get(e->slot(1,8),lit163)}));refs[0].put(std::move(t555));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit164)};V t556=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,1),lit164,get(e->slot(1,8),lit164)})),get(e->slot(1,8),lit164)})),V(0.0),V(1.0)}));refs[0].put(std::move(t556));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit165)};V t557=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,1),lit165,get(e->slot(1,8),lit165)})),get(e->slot(1,8),lit165)})),V(0.0),V(1.0)}));refs[0].put(std::move(t557));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit166)};V t558=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,1),lit166,get(e->slot(1,8),lit166)})),get(e->slot(1,8),lit166)})),V(0.0),V(1.0)}));refs[0].put(std::move(t558));}
}
{V t559=V(0.0);e->slot(0,3)=std::move(t559);}
{V t560=V(0.0);e->slot(0,4)=std::move(t560);}
{V t561=V(0.0);e->slot(0,5)=std::move(t561);}
{V t562=V(0.0);e->slot(0,6)=std::move(t562);}
{V t563=V(0.0);e->slot(0,7)=std::move(t563);}
{V t564=V(0.0);e->slot(0,8)=std::move(t564);}
{V t565=V(0.0);e->slot(0,9)=std::move(t565);}
{V t566=V(0.0);e->slot(0,10)=std::move(t566);}
{V t567=V(0.0);e->slot(0,11)=std::move(t567);}
{V t568=V(0.0);e->slot(0,12)=std::move(t568);}
{double t569=num(V(0.0)),t570=num(V(3.0)),t571=num(V(1.0));for(double t572=t569;(t571>0?t572<=t570:t572>=t570);t572+=t571){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t572);{V t573=first(call(e->slot(2,24),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t573);}
{V t574=get(get(e->slot(2,8),lit193),e->slot(0,0));e->slot(0,2)=std::move(t574);}
if(truth(e->slot(0,1))){call(e->slot(2,36),Args{e->slot(0,0),e->slot(0,2),e->slot(1,0),e->slot(0,1)});
}else{call(e->slot(2,38),Args{e->slot(0,0),e->slot(1,0)});
}
}}
call(e->slot(1,37),Args{e->slot(0,0)});
{double t575=num(V(0.0)),t576=num(V(3.0)),t577=num(V(1.0));for(double t578=t575;(t577>0?t578<=t576:t578>=t576);t578+=t577){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t578);{V t579=get(get(e->slot(2,8),lit193),e->slot(0,0));e->slot(0,1)=std::move(t579);}
{std::array<Ref,1> refs{Ref(e,1,3)};V t580=add(e->slot(1,3),([&](){V t581=get(e->slot(0,1),lit136);return !truth(t581)?V(0.0):t581;})());refs[0].put(std::move(t580));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t582=add(e->slot(1,4),first(call(e->slot(2,11),Args{get(e->slot(0,1),lit134)})));refs[0].put(std::move(t582));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t583=add(e->slot(1,5),first(call(e->slot(2,11),Args{get(e->slot(0,1),lit135)})));refs[0].put(std::move(t583));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t584=add(e->slot(1,6),first(call(e->slot(2,11),Args{get(e->slot(0,1),lit142)})));refs[0].put(std::move(t584));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t585=add(e->slot(1,7),first(call(e->slot(2,11),Args{get(e->slot(0,1),lit143)})));refs[0].put(std::move(t585));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t586=add(e->slot(1,8),([&](){V t587=get(e->slot(0,1),lit130);return !truth(t587)?V(0.0):t587;})());refs[0].put(std::move(t586));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t588=add(e->slot(1,9),([&](){V t589=get(e->slot(0,1),lit131);return !truth(t589)?V(0.0):t589;})());refs[0].put(std::move(t588));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t590=add(e->slot(1,10),([&](){V t591=get(e->slot(0,1),lit132);return !truth(t591)?V(0.0):t591;})());refs[0].put(std::move(t590));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t592=add(e->slot(1,11),([&](){V t593=get(e->slot(0,1),lit133);return !truth(t593)?V(0.0):t593;})());refs[0].put(std::move(t592));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t594=add(e->slot(1,12),([&](){V t595=get(e->slot(0,1),lit139);return !truth(t595)?V(0.0):t595;})());refs[0].put(std::move(t594));}
call(e->slot(2,40),Args{e->slot(0,0),e->slot(0,1)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit174)};V t596=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t596));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit175)};V t597=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t597));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit176)};V t598=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t598));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit177)};V t599=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t599));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit178)};V t600=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t600));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit179)};V t601=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t601));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit180)};V t602=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t602));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit181)};V t603=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t603));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit182)};V t604=mul(e->slot(0,11),V(0.25));refs[0].put(std::move(t604));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit183)};V t605=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t605));}
call(e->slot(1,39),Args{e->slot(0,0)});
call(e->slot(1,41),Args{});
return Args{};}));
Ref(e->slot(0,1),lit379).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t606=get(get(e->slot(1,8),lit193),e->slot(0,0));e->slot(0,1)=std::move(t606);}
return Args{([&](){V t607=([&](){V t608=e->slot(0,1);return truth(t608)?get(e->slot(0,1),lit136):t608;})();return !truth(t607)?V(0.0):t607;})()};
return Args{};}));
Ref(e->slot(0,1),lit380).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t609=get(get(e->slot(1,8),lit193),e->slot(0,0));e->slot(0,1)=std::move(t609);}
return Args{([&](){V t610=([&](){V t611=e->slot(0,1);return truth(t611)?get(e->slot(0,1),lit142):t611;})();return !truth(t610)?V(0.0):t610;})()};
return Args{};}));
Ref(e->slot(0,1),lit381).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t612=get(get(e->slot(1,8),lit193),e->slot(0,0));e->slot(0,1)=std::move(t612);}
return Args{([&](){V t613=([&](){V t614=e->slot(0,1);return truth(t614)?get(e->slot(0,1),lit143):t614;})();return !truth(t613)?V(0.0):t613;})()};
return Args{};}));
Ref(e->slot(0,1),lit382).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t615=get(get(e->slot(1,8),lit193),e->slot(0,0));e->slot(0,1)=std::move(t615);}
return Args{([&](){V t616=([&](){V t617=e->slot(0,1);return truth(t617)?get(e->slot(0,1),lit139):t617;})();return !truth(t616)?V(0.0):t616;})()};
return Args{};}));
Ref(e->slot(0,1),lit383).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t618=get(get(e->slot(1,8),lit193),e->slot(0,0));e->slot(0,1)=std::move(t618);}
return Args{([&](){V t619=([&](){V t620=e->slot(0,1);return truth(t620)?get(e->slot(0,1),lit140):t620;})();return !truth(t619)?V(0.0):t619;})()};
return Args{};}));
Ref(e->slot(0,1),lit384).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t621=get(e->slot(1,8),lit186);return !truth(t621)?V(0.0):t621;})()};
return Args{};}));
Ref(e->slot(0,1),lit385).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,8)};
}
return Args{get(get(e->slot(1,8),lit193),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit386).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t622=([&](){V t623=get(get(e->slot(1,8),lit193),([&](){V t624=e->slot(0,0);return !truth(t624)?V(0.0):t624;})());return !truth(t623)?get(get(e->slot(1,8),lit193),V(0.0)):t623;})();e->slot(0,1)=std::move(t622);}
return call(get(e->get("string"),lit387),Args{concat(lit388,concat(lit389,concat(lit390,concat(lit391,concat(lit392,lit393))))),first(call(e->get("tostring"),Args{get(e->slot(1,8),lit150)})),([&](){V t625=get(e->slot(1,8),lit151);return !truth(t625)?V(0.0):t625;})(),([&](){V t626=([&](){V t627=get(e->slot(1,8),lit152);return truth(t627)?lit394:t627;})();return !truth(t626)?lit395:t626;})(),first(call(e->get("tostring"),Args{([&](){V t628=get(e->slot(0,1),lit148);return !truth(t628)?lit309:t628;})()})),([&](){V t629=get(e->slot(0,1),lit136);return !truth(t629)?V(0.0):t629;})(),([&](){V t630=get(e->slot(0,1),lit137);return !truth(t630)?V(0.0):t630;})(),([&](){V t631=get(e->slot(0,1),lit139);return !truth(t631)?V(0.0):t631;})(),([&](){V t632=get(e->slot(0,1),lit134);return !truth(t632)?V(0.0):t632;})(),([&](){V t633=get(e->slot(0,1),lit135);return !truth(t633)?V(0.0):t633;})(),([&](){V t634=get(e->slot(0,1),lit130);return !truth(t634)?V(0.0):t634;})(),([&](){V t635=get(e->slot(0,1),lit131);return !truth(t635)?V(0.0):t635;})(),([&](){V t636=get(e->slot(0,1),lit142);return !truth(t636)?V(0.0):t636;})(),([&](){V t637=get(e->slot(0,1),lit143);return !truth(t637)?V(0.0):t637;})(),([&](){V t638=get(e->slot(0,1),lit132);return !truth(t638)?V(0.0):t638;})(),([&](){V t639=get(e->slot(0,1),lit133);return !truth(t639)?V(0.0):t639;})(),([&](){V t640=get(e->slot(0,1),lit96);return !truth(t640)?V(0.0):t640;})(),([&](){V t641=get(e->slot(0,1),lit97);return !truth(t641)?V(0.0):t641;})(),([&](){V t642=get(e->slot(0,1),lit100);return !truth(t642)?V(0.0):t642;})(),([&](){V t643=get(e->slot(0,1),lit115);return !truth(t643)?V(0.0):t643;})(),([&](){V t644=get(e->slot(0,1),lit116);return !truth(t644)?V(0.0):t644;})(),([&](){V t645=([&](){V t646=get(e->slot(1,8),lit153);return truth(t646)?lit394:t646;})();return !truth(t645)?lit395:t645;})(),([&](){V t647=([&](){V t648=get(e->slot(1,8),lit154);return truth(t648)?lit394:t648;})();return !truth(t647)?lit395:t647;})(),([&](){V t649=([&](){V t650=get(e->slot(1,8),lit155);return truth(t650)?lit394:t650;})();return !truth(t649)?lit395:t649;})(),([&](){V t651=([&](){V t652=get(e->slot(1,8),lit158);return truth(t652)?lit394:t652;})();return !truth(t651)?lit395:t651;})(),([&](){V t653=([&](){V t654=get(e->slot(1,8),lit159);return truth(t654)?lit394:t654;})();return !truth(t653)?lit395:t653;})(),([&](){V t655=([&](){V t656=get(e->slot(1,8),lit160);return truth(t656)?lit394:t656;})();return !truth(t655)?lit395:t655;})(),([&](){V t657=([&](){V t658=get(e->slot(1,8),lit161);return truth(t658)?lit394:t658;})();return !truth(t657)?lit395:t657;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

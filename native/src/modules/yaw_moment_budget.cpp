// Generated native C++ from pinned yaw_moment_budget.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("lowSpeedKmh");
static const V lit7("speedFullKmh");
static const V lit8("loadRef");
static const V lit9("yawRateRef");
static const V lit10("driveTorqueRef");
static const V lit11("shaftTwistRef");
static const V lit12("contactWeight");
static const V lit13("gripWeight");
static const V lit14("loadWeight");
static const V lit15("memoryWeight");
static const V lit16("slipWeight");
static const V lit17("frontSlipUnderGain");
static const V lit18("responseUnderGain");
static const V lit19("rearSlipOverGain");
static const V lit20("yawOverGain");
static const V lit21("rearLossOverGain");
static const V lit22("driveOverGain");
static const V lit23("lsdOverGain");
static const V lit24("complianceYawGain");
static const V lit25("recoveryAuthorityGain");
static const V lit26("carcassSupportAuthorityGain");
static const V lit27("trustAuthorityGain");
static const V lit28("dirtyAuthorityLoss");
static const V lit29("snapAuthorityLoss");
static const V lit30("biteOverGain");
static const V lit31("dirtyOverGain");
static const V lit32("recoveryOverTrimGain");
static const V lit33("slipRecoveryPhaseGain");
static const V lit34("slipGripReturnGain");
static const V lit35("recontactYawGain");
static const V lit36("dirtyRecoveryLoss");
static const V lit37("slipSnapGain");
static const V lit38("biteSnapGain");
static const V lit39("dirtySnapGain");
static const V lit40("historySpinGain");
static const V lit41("thermalYawLossGain");
static const V lit42("abrasionYawLossGain");
static const V lit43("recoveryMemoryGain");
static const V lit44("recoveryContactGain");
static const V lit45("recoveryPhaseGain");
static const V lit46("spinYawGain");
static const V lit47("spinRearSlipGain");
static const V lit48("spinRearLossGain");
static const V lit49("spinOppositeGain");
static const V lit50("roadYawGain");
static const V lit51("forceYawGain");
static const V lit52("thermalGripLossGain");
static const V lit53("ultraChassisToeGain");
static const V lit54("ultraChassisCamberGain");
static const V lit55("tauFast");
static const V lit56("tauSlow");
static const V lit57("tauRisk");
static const V lit58("minDt");
static const V lit59("maxDt");
static const V lit60("debugStoreInterval");
static const V lit61("state");
static const V lit62("status");
static const V lit63("INIT");
static const V lit64("updateCount");
static const V lit65("wheelsValid");
static const V lit66("storeOnly");
static const V lit67("speedKmh");
static const V lit68("steer");
static const V lit69("gas");
static const V lit70("brake");
static const V lit71("handbrake");
static const V lit72("yawRate");
static const V lit73("frontContact");
static const V lit74("rearContact");
static const V lit75("frontLoad");
static const V lit76("rearLoad");
static const V lit77("frontSlip");
static const V lit78("rearSlip");
static const V lit79("frontMemory");
static const V lit80("rearMemory");
static const V lit81("frontAuthority");
static const V lit82("rearAuthority");
static const V lit83("steerDemand");
static const V lit84("yawResponse");
static const V lit85("yawBudget");
static const V lit86("rotationIntent");
static const V lit87("understeerEnergy");
static const V lit88("oversteerEnergy");
static const V lit89("recoveryPhase");
static const V lit90("spinRisk");
static const V lit91("balance");
static const V lit92("driveYaw");
static const V lit93("lsdYaw");
static const V lit94("complianceYaw");
static const V lit95("loadYaw");
static const V lit96("roadYaw");
static const V lit97("forceYaw");
static const V lit98("recoveryYaw");
static const V lit99("biteYaw");
static const V lit100("dirtyYaw");
static const V lit101("recontactYaw");
static const V lit102("slipRecoveryRear");
static const V lit103("slipSnapRear");
static const V lit104("phaseId");
static const V lit105("phaseText");
static const V lit106("avgAuthority");
static const V lit107("authorityBalance");
static const V lit108("maxWheelSlip");
static const V lit109("activeCount");
static const V lit110("contactLinked");
static const V lit111("tireMemoryLinked");
static const V lit112("complianceLinked");
static const V lit113("drivetrainLinked");
static const V lit114("lsdLinked");
static const V lit115("loadLinked");
static const V lit116("slipRecoveryLinked");
static const V lit117("carcassLinked");
static const V lit118("tireForceLinked");
static const V lit119("roadLinked");
static const V lit120("thermalLinked");
static const V lit121("ultraChassisLinked");
static const V lit122("debugStoreTimer");
static const V lit123("debugStoreNow");
static const V lit124("wheels");
static const V lit125("load");
static const V lit126("contact");
static const V lit127("rawContact");
static const V lit128("contactTrust");
static const V lit129("stability");
static const V lit130("slipAngle");
static const V lit131("slipRatio");
static const V lit132("combinedSlip");
static const V lit133("memory");
static const V lit134("grip");
static const V lit135("memoryPhaseId");
static const V lit136("memoryPhase");
static const V lit137("NIL");
static const V lit138("thermalMemory");
static const V lit139("abrasionMemory");
static const V lit140("historyMemory");
static const V lit141("recoveryScalar");
static const V lit142("recontactShock");
static const V lit143("recoveryRate");
static const V lit144("gripReturn");
static const V lit145("snapRisk");
static const V lit146("slideMemory");
static const V lit147("recontactSharpness");
static const V lit148("bite");
static const V lit149("dirtyReturn");
static const V lit150("recoveryTrust");
static const V lit151("carcassSupport");
static const V lit152("gripGate");
static const V lit153("carcassHysteresis");
static const V lit154("carcassRecoveryBias");
static const V lit155("bristleLat");
static const V lit156("bristleLong");
static const V lit157("complianceEnergy");
static const V lit158("virtualToe");
static const V lit159("virtualCamber");
static const V lit160("ultraToe");
static const V lit161("ultraCamber");
static const V lit162("authority");
static const V lit163("tireForceLat");
static const V lit164("tireForceLong");
static const V lit165("tireForceCombined");
static const V lit166("tireForceRoadInput");
static const V lit167("roadSeverity");
static const V lit168("thermalMuScale");
static const V lit169("active");
static const V lit170("debug");
static const V lit171("huge");
static const V lit172("abs");
static const V lit173("max");
static const V lit174("safeField");
static const V lit175("safeLoadRaw");
static const V lit176("");
static const V lit177("safeStore");
static const V lit178("length");
static const V lit179("function");
static const V lit180("number");
static const V lit181("x");
static const V lit182("y");
static const V lit183("z");
static const V lit184("sqrt");
static const V lit185("getCar");
static const V lit186("velocity");
static const V lit187("localVelocity");
static const V lit188("ngp_yaw_speed_kmh");
static const V lit189("ngp_speed_kmh");
static const V lit190("ngp_observer_speed_kmh");
static const V lit191("ngp_car_speed_kmh");
static const V lit192("localAngularVelocity");
static const V lit193("ngp_yaw_rate");
static const V lit194("ngp_observer_yaw_rate");
static const V lit195("ngp_virtual_yaw_raw");
static const V lit196("ngp_virtual_yaw");
static const V lit197("ngp_contact_load_");
static const V lit198("ngp_tire_state_load_");
static const V lit199("ngp_tire_load_");
static const V lit200("ngp_wheel_load_");
static const V lit201("ngp_load_wheel_");
static const V lit202("ngp_load_path_abs_load_");
static const V lit203("ngp_lp_abs_load_");
static const V lit204("ngp_dlt_load_");
static const V lit205("loadK");
static const V lit206("ngp_slip_recovery_rate_");
static const V lit207("ngp_recovery_rate_");
static const V lit208("ngp_sr_recovery_");
static const V lit209("ngp_slip_grip_return_");
static const V lit210("ngp_grip_return_");
static const V lit211("ngp_sr_grip_return_");
static const V lit212("ngp_slip_snap_risk_");
static const V lit213("ngp_snap_risk_");
static const V lit214("ngp_sr_snap_risk_");
static const V lit215("ngp_slip_slide_memory_");
static const V lit216("ngp_slide_memory_");
static const V lit217("ngp_slip_recontact_");
static const V lit218("ngp_recontact_sharpness_");
static const V lit219("ngp_sr_recontact_");
static const V lit220("ngp_slip_bite_");
static const V lit221("ngp_recovery_bite_");
static const V lit222("ngp_sr_bite_");
static const V lit223("ngp_slip_dirty_return_");
static const V lit224("ngp_dirty_return_");
static const V lit225("ngp_sr_dirty_return_");
static const V lit226("ngp_slip_contact_trust_");
static const V lit227("ngp_recovery_trust_");
static const V lit228("ngp_contact_trust_");
static const V lit229("ngp_memory_thermal_");
static const V lit230("ngp_tire_memory_thermal_");
static const V lit231("ngp_slip_thermal_memory_");
static const V lit232("ngp_memory_abrasion_");
static const V lit233("ngp_tire_memory_abrasion_");
static const V lit234("ngp_slip_abrasion_memory_");
static const V lit235("ngp_memory_history_");
static const V lit236("ngp_tire_memory_history_");
static const V lit237("ngp_slip_history_memory_");
static const V lit238("ngp_memory_recovery_scalar_");
static const V lit239("ngp_tire_memory_recovery_scalar_");
static const V lit240("ngp_slip_recovery_scalar_");
static const V lit241("ngp_memory_recontact_shock_");
static const V lit242("ngp_slip_recontact_shock_");
static const V lit243("ngp_carcass_support_");
static const V lit244("ngp_contact_carcass_support_");
static const V lit245("ngp_tc_support_");
static const V lit246("ngp_carcass_grip_gate_");
static const V lit247("ngp_contact_grip_gate_");
static const V lit248("ngp_carcass_hysteresis_");
static const V lit249("ngp_contact_hysteresis_");
static const V lit250("ngp_carcass_recovery_bias_");
static const V lit251("ngp_contact_recovery_bias_");
static const V lit252("ngp_carcass_bristle_lat_");
static const V lit253("ngp_carcass_bristle_long_");
static const V lit254("ngp_tire_force_lat_");
static const V lit255("ngp_tf_lat_");
static const V lit256("ngp_tforce_lat_");
static const V lit257("ngp_tire_force_long_");
static const V lit258("ngp_tf_long_");
static const V lit259("ngp_tforce_long_");
static const V lit260("ngp_tire_force_combined_");
static const V lit261("ngp_tf_combined_");
static const V lit262("ngp_tforce_combined_");
static const V lit263("ngp_tire_force_road_input_");
static const V lit264("ngp_tf_road_input_");
static const V lit265("ngp_road_wheel_severity_");
static const V lit266("ngp_rii_wheel_severity_");
static const V lit267("ngp_load_path_road_input_");
static const V lit268("ngp_rf2_mu_scale_");
static const V lit269("ngp_ttb_mu_scale_");
static const V lit270("ngp_thermal_mu_scale_");
static const V lit271("ngp_uc_toe_");
static const V lit272("ngp_ultra_chassis_toe_");
static const V lit273("ngp_virtual_toe_");
static const V lit274("ngp_compliance_virtual_toe_");
static const V lit275("ngp_uc_camber_");
static const V lit276("ngp_ultra_chassis_camber_");
static const V lit277("ngp_virtual_camber_");
static const V lit278("ngp_compliance_virtual_camber_");
static const V lit279("ngp_contact_quality_");
static const V lit280("ngp_tire_contact_quality_");
static const V lit281("ngp_tcr_quality_");
static const V lit282("ngp_tc_contact_");
static const V lit283("ngp_contact_raw_");
static const V lit284("ngp_contact_quality_raw_");
static const V lit285("ngp_contact_stability_score_");
static const V lit286("ngp_contact_stability_");
static const V lit287("ngp_tcr_trust_");
static const V lit288("ngp_contact_slip_angle_");
static const V lit289("ngp_tire_slip_angle_");
static const V lit290("ngp_slip_angle_");
static const V lit291("ngp_filtered_slip_angle_");
static const V lit292("ngp_contact_slip_ratio_");
static const V lit293("ngp_tire_slip_ratio_");
static const V lit294("ngp_slip_ratio_");
static const V lit295("ngp_filtered_slip_ratio_");
static const V lit296("ngp_contact_combined_slip_");
static const V lit297("ngp_tire_combined_slip_");
static const V lit298("ngp_tdyn_combined_slip_");
static const V lit299("ngp_tire_force_combined_slip_");
static const V lit300("ngp_tire_memory_");
static const V lit301("ngp_rubber_memory_");
static const V lit302("ngp_memory_");
static const V lit303("ngp_memory_grip_");
static const V lit304("ngp_tire_memory_grip_");
static const V lit305("ngp_tire_grip_");
static const V lit306("ngp_tdyn_grip_");
static const V lit307("ngp_tire_memory_phase_id_");
static const V lit308("ngp_tyre_memory_phase_id_");
static const V lit309("ngp_tire_memory_phase_");
static const V lit310("ngp_tyre_memory_phase_");
static const V lit311("ngp_compliance_energy_");
static const V lit312("ngp_cs_energy_");
static const V lit313("ngp_tire_compliance_");
static const V lit314("LOW_SPEED");
static const V lit315("SPIN_RISK");
static const V lit316("RECONTACT_YAW");
static const V lit317("ENTRY_ROTATION");
static const V lit318("POWER_OVERSTEER");
static const V lit319("OVERSTEER");
static const V lit320("UNDERSTEER");
static const V lit321("RECOVERING");
static const V lit322("ROTATING");
static const V lit323("NEUTRAL");
static const V lit324("ngp_drive_torque");
static const V lit325("ngp_drive_transmitted_torque");
static const V lit326("ngp_drivetrain_torque");
static const V lit327("ngp_dt_torque");
static const V lit328("ngp_shaft_twist");
static const V lit329("ngp_driveline_twist");
static const V lit330("ngp_windup_twist");
static const V lit331("ngp_lsd_lock");
static const V lit332("ngp_diff_lock");
static const V lit333("ngp_yaw_wheel_authority_");
static const V lit334("ngp_yaw_wheel_contact_");
static const V lit335("ngp_yaw_wheel_slip_");
static const V lit336("ngp_yaw_wheel_memory_");
static const V lit337("ngp_yaw_wheel_recovery_");
static const V lit338("ngp_yaw_wheel_grip_return_");
static const V lit339("ngp_yaw_wheel_snap_");
static const V lit340("ngp_yaw_wheel_bite_");
static const V lit341("ngp_yaw_wheel_dirty_return_");
static const V lit342("ngp_ymb_wheel_authority_");
static const V lit343("ngp_ymb_wheel_slip_");
static const V lit344("ngp_ymb_wheel_load_");
static const V lit345("ngp_yaw_wheel_load_");
static const V lit346("ngp_yaw_wheel_grip_");
static const V lit347("ngp_yaw_wheel_compliance_");
static const V lit348("ngp_yaw_wheel_vtoe_");
static const V lit349("ngp_yaw_wheel_vcamber_");
static const V lit350("ngp_yaw_wheel_road_");
static const V lit351("ngp_yaw_wheel_force_");
static const V lit352("ngp_yaw_wheel_mu_scale_");
static const V lit353("ngp_yaw_budget_status");
static const V lit354("UNKNOWN");
static const V lit355("ngp_yaw_budget_update_count");
static const V lit356("ngp_yaw_budget_phase_id");
static const V lit357("ngp_yaw_budget_phase");
static const V lit358("ngp_yaw_budget");
static const V lit359("ngp_yaw_balance");
static const V lit360("ngp_yaw_rotation_intent");
static const V lit361("ngp_yaw_understeer_energy");
static const V lit362("ngp_yaw_oversteer_energy");
static const V lit363("ngp_yaw_recovery_phase");
static const V lit364("ngp_yaw_spin_risk");
static const V lit365("ngp_understeer_energy");
static const V lit366("ngp_oversteer_energy");
static const V lit367("ngp_rotation_intent");
static const V lit368("ngp_recovery_phase");
static const V lit369("ngp_spin_risk");
static const V lit370("ngp_yaw_front_authority");
static const V lit371("ngp_yaw_rear_authority");
static const V lit372("ngp_yaw_front_contact");
static const V lit373("ngp_yaw_rear_contact");
static const V lit374("ngp_yaw_front_slip");
static const V lit375("ngp_yaw_rear_slip");
static const V lit376("ngp_yaw_front_memory");
static const V lit377("ngp_yaw_rear_memory");
static const V lit378("ngp_yaw_steer_demand");
static const V lit379("ngp_yaw_response");
static const V lit380("ngp_yaw_drive");
static const V lit381("ngp_yaw_lsd");
static const V lit382("ngp_yaw_compliance");
static const V lit383("ngp_yaw_load");
static const V lit384("ngp_yaw_road");
static const V lit385("ngp_yaw_force");
static const V lit386("ngp_yaw_recovery");
static const V lit387("ngp_yaw_bite");
static const V lit388("ngp_yaw_dirty_return");
static const V lit389("ngp_yaw_recontact");
static const V lit390("ngp_yaw_slip_grip_return");
static const V lit391("ngp_yaw_slip_snap_rear");
static const V lit392("ngp_yaw_bite_energy");
static const V lit393("ngp_yaw_dirty_energy");
static const V lit394("ngp_yaw_recontact_energy");
static const V lit395("ngp_ymb_status");
static const V lit396("ngp_ymb_budget");
static const V lit397("ngp_ymb_balance");
static const V lit398("ngp_ymb_understeer");
static const V lit399("ngp_ymb_oversteer");
static const V lit400("ngp_ymb_recovery");
static const V lit401("ngp_ymb_spin_risk");
static const V lit402("ngp_ymb_phase_id");
static const V lit403("ngp_ymb_phase");
static const V lit404("ngp_ymb_avg_authority");
static const V lit405("ngp_ymb_authority_balance");
static const V lit406("ngp_ymb_max_wheel_slip");
static const V lit407("ngp_ymb_active_count");
static const V lit408("ngp_ymb_store_only");
static const V lit409("ngp_yaw_contact_linked");
static const V lit410("ngp_yaw_memory_linked");
static const V lit411("ngp_yaw_compliance_linked");
static const V lit412("ngp_yaw_drivetrain_linked");
static const V lit413("ngp_yaw_lsd_linked");
static const V lit414("ngp_yaw_load_linked");
static const V lit415("ngp_yaw_slip_recovery_linked");
static const V lit416("ngp_yaw_carcass_linked");
static const V lit417("ngp_yaw_tire_force_linked");
static const V lit418("ngp_yaw_road_linked");
static const V lit419("ngp_yaw_thermal_linked");
static const V lit420("ngp_yaw_ultra_chassis_linked");
static const V lit421("ngp_steer");
static const V lit422("ngp_steer_input");
static const V lit423("ngp_gas");
static const V lit424("ngp_throttle");
static const V lit425("ngp_throttle_input");
static const V lit426("ngp_brake");
static const V lit427("ngp_brake_input");
static const V lit428("ngp_handbrake");
static const V lit429("ngp_handbrake_input");
static const V lit430("init");
static const V lit431("update");
static const V lit432("BAD DT");
static const V lit433("NO CAR / STORE ONLY");
static const V lit434("NO WHEELS / STORE ONLY");
static const V lit435("RUNNING");
static const V lit436("getBudget");
static const V lit437("getUndersteer");
static const V lit438("getOversteer");
static const V lit439("getSpinRisk");
static const V lit440("getBalance");
static const V lit441("getPhase");
static const V lit442("getWheelAuthority");
static const V lit443("getState");
static const V lit444("debugStr");
static const V lit445("format");
static const V lit446("Status %s / Count %.0f / Phase %s\n");
static const V lit447("Budget %+.3f / Bal %+.3f / Rot %.3f / Spin %.3f\n");
static const V lit448("US %.3f / OS %.3f / Rec %.3f\n");
static const V lit449("Auth F %.3f R %.3f / Slip F %.2f R %.2f\n");
static const V lit450("Yaw %.3f / Demand %+.3f / Resp %+.3f\n");
static const V lit451("Drive %.3f LSD %.3f Comp %+.3f Load %+.3f\n");
static const V lit452("Road %+.3f Force %+.3f / StoreOnly %s\n");
static const V lit453("RecYaw %.3f Bite %.3f Dirty %.3f ReC %.3f\n");
static const V lit454("Links CQ:%s MEM:%s CS:%s DT:%s LSD:%s SR:%s TF:%s RD:%s TH:%s UC:%s");
static const V lit455("YES");
static const V lit456("NO");
static const V lit457("OK");
static const V lit458("drawDebug");
static const V lit459("text");
static const V lit460("=== YAW MOMENT BUDGET ===");
V load_yaw_moment_budget(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(42);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(5.0));set(z,lit7,V(90.0));set(z,lit8,V(3200.0));set(z,lit9,V(1.35));set(z,lit10,V(650.0));set(z,lit11,V(1.0));set(z,lit12,V(0.42));set(z,lit13,V(0.22));set(z,lit14,V(0.18));set(z,lit15,V(0.1));set(z,lit16,V(0.08));set(z,lit17,V(0.52));set(z,lit18,V(0.48));set(z,lit19,V(0.5));set(z,lit20,V(0.3));set(z,lit21,V(0.2));set(z,lit22,V(0.16));set(z,lit23,V(0.12));set(z,lit24,V(0.2));set(z,lit25,V(0.08));set(z,lit26,V(0.06));set(z,lit27,V(0.1));set(z,lit28,V(0.14));set(z,lit29,V(0.18));set(z,lit30,V(0.18));set(z,lit31,V(0.12));set(z,lit32,V(0.1));set(z,lit33,V(0.24));set(z,lit34,V(0.18));set(z,lit35,V(0.16));set(z,lit36,V(0.22));set(z,lit37,V(0.46));set(z,lit38,V(0.34));set(z,lit39,V(0.24));set(z,lit40,V(0.16));set(z,lit41,V(0.08));set(z,lit42,V(0.1));set(z,lit43,V(0.4));set(z,lit44,V(0.38));set(z,lit45,V(0.22));set(z,lit46,V(0.36));set(z,lit47,V(0.34));set(z,lit48,V(0.2));set(z,lit49,V(0.1));set(z,lit50,V(0.08));set(z,lit51,V(0.1));set(z,lit52,V(0.06));set(z,lit53,V(0.08));set(z,lit54,V(0.04));set(z,lit55,V(0.05));set(z,lit56,V(0.16));set(z,lit57,V(0.09));set(z,lit58,V(5e-05));set(z,lit59,V(0.05));set(z,lit60,V(0.25));return z;})();refs[0].put(std::move(t4));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit61)};V t5=([&](){V z=table();set(z,lit62,lit63);set(z,lit64,V(0.0));set(z,lit65,V(false));set(z,lit66,V(false));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(1.0));set(z,lit74,V(1.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(1.0));set(z,lit82,V(1.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,lit63);set(z,lit106,V(1.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(false));set(z,lit113,V(false));set(z,lit114,V(false));set(z,lit115,V(false));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,V(false));set(z,lit121,V(false));set(z,lit122,V(999.0));set(z,lit123,V(true));set(z,lit124,([&](){V z=table();return z;})());return z;})();refs[0].put(std::move(t5));}
{double t6=num(V(0.0)),t7=num(V(3.0)),t8=num(V(1.0));for(double t9=t6;(t8>0?t9<=t7:t9>=t7);t9+=t8){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t9);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit124),e->slot(0,0))};V t10=([&](){V z=table();set(z,lit125,get(get(e->slot(1,1),lit5),lit8));set(z,lit126,V(1.0));set(z,lit127,V(1.0));set(z,lit128,V(1.0));set(z,lit129,V(1.0));set(z,lit130,V(0.0));set(z,lit131,V(0.0));set(z,lit132,V(0.0));set(z,lit133,V(0.0));set(z,lit134,V(1.0));set(z,lit135,V(0.0));set(z,lit136,lit137);set(z,lit138,V(0.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(1.0));set(z,lit142,V(0.0));set(z,lit143,V(0.0));set(z,lit144,V(1.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(1.0));set(z,lit151,V(1.0));set(z,lit152,V(1.0));set(z,lit153,V(0.0));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,V(0.0));set(z,lit158,V(0.0));set(z,lit159,V(0.0));set(z,lit160,V(0.0));set(z,lit161,V(0.0));set(z,lit162,V(1.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(0.0));set(z,lit166,V(0.0));set(z,lit167,V(0.0));set(z,lit168,V(1.0));set(z,lit169,V(false));return z;})();refs[0].put(std::move(t10));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),e->slot(0,0))};V t11=get(get(get(e->slot(1,1),lit61),lit124),e->slot(0,0));refs[0].put(std::move(t11));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit170)};V t12=get(e->slot(0,1),lit61);refs[0].put(std::move(t12));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(([&](){V t14=([&](){V t15=([&](){V t16=eq(e->slot(0,2),V());return !truth(t16)?ne(e->slot(0,2),e->slot(0,2)):t16;})();return !truth(t15)?eq(e->slot(0,2),get(e->get("math"),lit171)):t15;})();return !truth(t14)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit171)))):t14;})())){if(truth(eq(e->slot(0,1),V()))){return Args{V()};
}
return Args{e->slot(0,1)};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t17=first(call(e->slot(1,3),Args{e->slot(0,0),V()}));e->slot(0,2)=std::move(t17);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t19=first(call(e->slot(1,4),Args{e->slot(0,0),([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()}));refs[0].put(std::move(t19));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit172),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t21=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t21));}
if(truth(gt(e->slot(0,0),V(0.0001)))){return Args{V(1.0)};
}
if(truth(lt(e->slot(0,0),V(-num(V(0.0001)))))){return Args{V(-num(V(1.0)))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t23=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t24=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t25=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t25));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit173),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t26=([&](){V t27=ge(e->slot(0,2),e->slot(0,1));return truth(t27)?V(1.0):t27;})();return !truth(t26)?V(0.0):t26;})()};
}
{V t28=first(call(e->slot(1,5),Args{divv(sub(e->slot(0,2),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t28);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
{V t29=get(e->slot(0,0),lit174);e->slot(0,10)=std::move(t29);}
{V t30=get(e->slot(0,0),lit175);e->slot(0,11)=std::move(t30);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t31=first(call(e->slot(1,11),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t31);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t32=e->slot(0,1);return !truth(t32)?V(0.0):t32;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t33=e->slot(0,1);return !truth(t33)?V(0.0):t33;})()});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t34=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t34);}
{double t35=num(V(1.0)),t36=num(length(e->slot(0,1))),t37=num(V(1.0));for(double t38=t35;(t37>0?t38<=t36:t38>=t36);t38+=t37){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t38);{V t39=first(call(e->slot(2,11),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t39);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t40=e->slot(1,0);return !truth(t40)?V(0.0):t40;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t41=e->slot(0,0);return !truth(t41)?V(0.0):t41;})(),V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t42=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t42);}
{double t43=num(V(1.0)),t44=num(length(e->slot(0,1))),t45=num(V(1.0));for(double t46=t43;(t45>0?t46<=t44:t46>=t44);t46+=t45){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t46);{V t47=first(call(e->slot(2,11),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t47);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->get("tostring"),Args{e->slot(0,1)})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t48=e->slot(0,0);return !truth(t48)?lit176:t48;})(),V()};
return Args{};});
{V t49=get(e->slot(0,0),lit177);e->slot(0,15)=std::move(t49);}
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t50=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit178)})),lit179))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit178)})),lit180))){return Args{get(e->slot(1,0),lit178)};
}
{V t51=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit181),V(0.0)}));e->slot(0,0)=std::move(t51);}
{V t52=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit182),V(0.0)}));e->slot(0,1)=std::move(t52);}
{V t53=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit183),V(0.0)}));e->slot(0,2)=std::move(t53);}
return call(get(e->get("math"),lit184),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t50,0);e->slot(0,2)=arg(t50,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,4),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit122)};V t54=add(([&](){V t55=get(get(e->slot(1,1),lit61),lit122);return !truth(t55)?V(0.0):t55;})(),([&](){V t56=e->slot(0,0);return !truth(t56)?V(0.0):t56;})());refs[0].put(std::move(t54));}
if(truth(ge(get(get(e->slot(1,1),lit61),lit122),get(get(e->slot(1,1),lit5),lit60)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit122)};V t57=V(0.0);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit123)};V t58=V(true);refs[0].put(std::move(t58));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit123)};V t59=V(false);refs[0].put(std::move(t59));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t60=V(!truth(e->get("ac")));return !truth(t60)?V(!truth(get(e->get("ac"),lit185))):t60;})())){return Args{V()};
}
{Args t61=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit185),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t61,0);e->slot(0,1)=arg(t61,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(false)};
}
{Args t62=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,0),lit124)};
return Args{};})});e->slot(0,1)=arg(t62,0);e->slot(0,2)=arg(t62,1);}
return Args{([&](){V t63=e->slot(0,1);return truth(t63)?ne(e->slot(0,2),V()):t63;})()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(first(call(e->slot(1,19),Args{e->slot(0,0)})))))){return Args{V()};
}
{Args t64=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit124),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t64,0);e->slot(0,3)=arg(t64,1);}
if(truth(([&](){V t65=e->slot(0,2);return truth(t65)?ne(e->slot(0,3),V()):t65;})())){return Args{e->slot(0,3)};
}
{std::array<Ref,2> refs{Ref(e,0,2),Ref(e,0,3)};Args t66=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit124),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t66,0));refs[1].put(arg(t66,1));}
if(truth(e->slot(0,2))){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,4);auto e=&storage;{V t67=first(call(e->slot(2,10),Args{e->slot(1,0),lit67,V()}));e->slot(0,0)=std::move(t67);}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,4),Args{e->slot(0,0),V(0.0)});
}
{V t68=V();e->slot(0,1)=std::move(t68);}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t69=first(call(e->slot(3,4),Args{e->slot(1,1),V(0.0)}));e->slot(0,0)=std::move(t69);}
if(truth(lt(first(call(get(e->get("math"),lit172),Args{e->slot(0,0)})),V(120.0)))){return Args{mul(e->slot(0,0),V(3.6))};
}
return Args{e->slot(0,0)};
}
{V t70=first(call(e->slot(2,10),Args{e->slot(1,0),lit186,V()}));e->slot(0,2)=std::move(t70);}
if(truth(e->slot(0,2))){return Args{mul(first(call(e->slot(2,16),Args{e->slot(0,2)})),V(3.6))};
}
{V t71=first(call(e->slot(2,10),Args{e->slot(1,0),lit187,V()}));e->slot(0,3)=std::move(t71);}
if(truth(e->slot(0,3))){return Args{mul(first(call(e->slot(2,16),Args{e->slot(0,3)})),V(3.6))};
}
}
return call(e->slot(1,13),Args{([&](){V t72=get(get(e->slot(1,1),lit61),lit67);return !truth(t72)?V(0.0):t72;})(),lit188,lit189,lit190,lit191});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t73=first(call(e->slot(2,10),Args{e->slot(1,0),lit192,V()}));e->slot(0,0)=std::move(t73);}
if(truth(e->slot(0,0))){return call(e->slot(2,4),Args{first(call(e->slot(2,10),Args{e->slot(0,0),lit182,V(0.0)})),V(0.0)});
}
{V t74=V();e->slot(0,1)=std::move(t74);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,4),Args{e->slot(0,1),V(0.0)});
}
}
return call(e->slot(1,13),Args{([&](){V t75=get(get(e->slot(1,1),lit61),lit72);return !truth(t75)?V(0.0):t75;})(),lit193,lit194,lit195,lit196});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->extra=tail(a,3);{V t76=first(call(e->slot(1,11),call(e->get("select"),joined(Args{V(1.0)},e->dots()))));e->slot(0,3)=std::move(t76);}
if(truth(ne(e->slot(0,3),V()))){return call(e->slot(1,4),Args{e->slot(0,3),([&](){V t77=e->slot(0,2);return !truth(t77)?V(0.0):t77;})()});
}
{V t78=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,4)=std::move(t78);}
{double t79=num(V(2.0)),t80=num(length(e->slot(0,4))),t81=num(V(1.0));for(double t82=t79;(t81>0?t82<=t80:t82>=t80);t82+=t81){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t82);{V t83=first(call(e->slot(2,11),Args{get(e->slot(1,4),e->slot(0,0))}));e->slot(0,1)=std::move(t83);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,4),Args{e->slot(0,1),([&](){V t84=e->slot(1,2);return !truth(t84)?V(0.0):t84;})()});
}
}}
if(truth(e->slot(0,0))){return call(e->slot(1,4),Args{first(call(e->slot(1,10),Args{e->slot(0,0),e->slot(0,1),([&](){V t85=e->slot(0,2);return !truth(t85)?V(0.0):t85;})()})),([&](){V t86=e->slot(0,2);return !truth(t86)?V(0.0):t86;})()});
}
return Args{([&](){V t87=e->slot(0,2);return !truth(t87)?V(0.0):t87;})()};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{V()};
}
{V t88=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t88);}
if(truth(lt(first(call(get(e->get("math"),lit172),Args{e->slot(0,1)})),mul(get(get(e->slot(1,1),lit5),lit8),V(0.85))))){return Args{add(get(get(e->slot(1,1),lit5),lit8),e->slot(0,1))};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t89=call(e->slot(1,13),Args{V(),concat(lit197,e->slot(0,1)),concat(lit198,e->slot(0,1)),concat(lit199,e->slot(0,1)),concat(lit200,e->slot(0,1)),concat(lit201,e->slot(0,1)),concat(lit202,e->slot(0,1)),concat(lit203,e->slot(0,1))});e->slot(0,2)=arg(t89,0);e->slot(0,3)=arg(t89,1);}
if(truth(ne(e->slot(0,3),V()))){if(truth(first(method(e->slot(0,3),"find",Args{lit126})))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit110)};V t90=V(true);refs[0].put(std::move(t90));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit115)};V t91=V(true);refs[0].put(std::move(t91));}
}
return call(e->slot(1,5),Args{first(call(get(e->get("math"),lit172),call(e->slot(1,4),Args{e->slot(0,2),get(get(e->slot(1,1),lit5),lit8)}))),V(0.0),mul(get(get(e->slot(1,1),lit5),lit8),V(3.5))});
}
{V t92=first(call(e->slot(1,11),Args{concat(lit204,e->slot(0,1))}));e->slot(0,4)=std::move(t92);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit115)};V t93=V(true);refs[0].put(std::move(t93));}
return call(e->slot(1,5),Args{first(call(get(e->get("math"),lit172),call(e->slot(1,24),Args{e->slot(0,4)}))),V(0.0),mul(get(get(e->slot(1,1),lit5),lit8),V(3.5))});
}
if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t94=first(call(e->slot(2,10),Args{e->slot(1,0),lit125,V()}));e->slot(0,0)=std::move(t94);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t95=first(call(e->slot(2,10),Args{e->slot(1,0),lit205,V()}));refs[0].put(std::move(t95));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t96=V();refs[0].put(std::move(t96));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t97=V();refs[0].put(std::move(t97));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t98=V();refs[0].put(std::move(t98));}
}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,5),Args{first(call(get(e->get("math"),lit172),call(e->slot(2,4),Args{e->slot(0,0),get(get(e->slot(2,1),lit5),lit8)}))),V(0.0),mul(get(get(e->slot(2,1),lit5),lit8),V(3.5))});
}
}
return Args{get(get(e->slot(1,1),lit5),lit8)};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t99=first(call(e->slot(1,11),Args{concat(lit206,e->slot(0,0))}));e->slot(0,2)=std::move(t99);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t100=first(call(e->slot(1,11),Args{concat(lit207,e->slot(0,0))}));refs[0].put(std::move(t100));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t101=first(call(e->slot(1,11),Args{concat(lit208,e->slot(0,0))}));refs[0].put(std::move(t101));}
}
{V t102=first(call(e->slot(1,11),Args{concat(lit209,e->slot(0,0))}));e->slot(0,3)=std::move(t102);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t103=first(call(e->slot(1,11),Args{concat(lit210,e->slot(0,0))}));refs[0].put(std::move(t103));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t104=first(call(e->slot(1,11),Args{concat(lit211,e->slot(0,0))}));refs[0].put(std::move(t104));}
}
{V t105=first(call(e->slot(1,11),Args{concat(lit212,e->slot(0,0))}));e->slot(0,4)=std::move(t105);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t106=first(call(e->slot(1,11),Args{concat(lit213,e->slot(0,0))}));refs[0].put(std::move(t106));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t107=first(call(e->slot(1,11),Args{concat(lit214,e->slot(0,0))}));refs[0].put(std::move(t107));}
}
{V t108=first(call(e->slot(1,11),Args{concat(lit215,e->slot(0,0))}));e->slot(0,5)=std::move(t108);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t109=first(call(e->slot(1,11),Args{concat(lit216,e->slot(0,0))}));refs[0].put(std::move(t109));}
}
{V t110=first(call(e->slot(1,11),Args{concat(lit217,e->slot(0,0))}));e->slot(0,6)=std::move(t110);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t111=first(call(e->slot(1,11),Args{concat(lit218,e->slot(0,0))}));refs[0].put(std::move(t111));}
}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t112=first(call(e->slot(1,11),Args{concat(lit219,e->slot(0,0))}));refs[0].put(std::move(t112));}
}
{V t113=first(call(e->slot(1,11),Args{concat(lit220,e->slot(0,0))}));e->slot(0,7)=std::move(t113);}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t114=first(call(e->slot(1,11),Args{concat(lit221,e->slot(0,0))}));refs[0].put(std::move(t114));}
}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t115=first(call(e->slot(1,11),Args{concat(lit222,e->slot(0,0))}));refs[0].put(std::move(t115));}
}
{V t116=first(call(e->slot(1,11),Args{concat(lit223,e->slot(0,0))}));e->slot(0,8)=std::move(t116);}
if(truth(eq(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e,0,8)};V t117=first(call(e->slot(1,11),Args{concat(lit224,e->slot(0,0))}));refs[0].put(std::move(t117));}
}
if(truth(eq(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e,0,8)};V t118=first(call(e->slot(1,11),Args{concat(lit225,e->slot(0,0))}));refs[0].put(std::move(t118));}
}
{V t119=first(call(e->slot(1,11),Args{concat(lit226,e->slot(0,0))}));e->slot(0,9)=std::move(t119);}
if(truth(eq(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(e,0,9)};V t120=first(call(e->slot(1,11),Args{concat(lit227,e->slot(0,0))}));refs[0].put(std::move(t120));}
}
if(truth(eq(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(e,0,9)};V t121=first(call(e->slot(1,11),Args{concat(lit228,e->slot(0,0))}));refs[0].put(std::move(t121));}
}
if(truth(([&](){V t122=([&](){V t123=([&](){V t124=([&](){V t125=([&](){V t126=([&](){V t127=([&](){V t128=ne(e->slot(0,2),V());return !truth(t128)?ne(e->slot(0,3),V()):t128;})();return !truth(t127)?ne(e->slot(0,4),V()):t127;})();return !truth(t126)?ne(e->slot(0,5),V()):t126;})();return !truth(t125)?ne(e->slot(0,6),V()):t125;})();return !truth(t124)?ne(e->slot(0,7),V()):t124;})();return !truth(t123)?ne(e->slot(0,8),V()):t123;})();return !truth(t122)?ne(e->slot(0,9),V()):t122;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit116)};V t129=V(true);refs[0].put(std::move(t129));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit143)};V t130=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t131=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit145)};V t132=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit146)};V t133=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit147)};V t134=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit148)};V t135=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit149)};V t136=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit150)};V t137=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),([&](){V t138=get(e->slot(0,1),lit126);return !truth(t138)?V(1.0):t138;})()})),V(0.0),V(1.2)}));refs[0].put(std::move(t137));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t139=call(e->slot(1,13),Args{V(0.0),concat(lit229,e->slot(0,0)),concat(lit230,e->slot(0,0)),concat(lit231,e->slot(0,0))});e->slot(0,2)=arg(t139,0);e->slot(0,3)=arg(t139,1);}
{V t140=first(call(e->slot(1,13),Args{V(0.0),concat(lit232,e->slot(0,0)),concat(lit233,e->slot(0,0)),concat(lit234,e->slot(0,0))}));e->slot(0,4)=std::move(t140);}
{V t141=first(call(e->slot(1,13),Args{V(0.0),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0))}));e->slot(0,5)=std::move(t141);}
{V t142=first(call(e->slot(1,13),Args{V(1.0),concat(lit238,e->slot(0,0)),concat(lit239,e->slot(0,0)),concat(lit240,e->slot(0,0))}));e->slot(0,6)=std::move(t142);}
{V t143=first(call(e->slot(1,13),Args{V(0.0),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0))}));e->slot(0,7)=std::move(t143);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit111)};V t144=V(true);refs[0].put(std::move(t144));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit138)};V t145=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t145));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit139)};V t146=first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit140)};V t147=first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0),V(1.2)}));refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit141)};V t148=first(call(e->slot(1,5),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit142)};V t149=first(call(e->slot(1,5),Args{e->slot(0,7),V(0.0),V(1.2)}));refs[0].put(std::move(t149));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t150=first(call(e->slot(1,11),Args{concat(lit243,e->slot(0,0))}));e->slot(0,2)=std::move(t150);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t151=first(call(e->slot(1,11),Args{concat(lit244,e->slot(0,0))}));refs[0].put(std::move(t151));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t152=first(call(e->slot(1,11),Args{concat(lit245,e->slot(0,0))}));refs[0].put(std::move(t152));}
}
{V t153=first(call(e->slot(1,11),Args{concat(lit246,e->slot(0,0))}));e->slot(0,3)=std::move(t153);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t154=first(call(e->slot(1,11),Args{concat(lit247,e->slot(0,0))}));refs[0].put(std::move(t154));}
}
{V t155=first(call(e->slot(1,11),Args{concat(lit248,e->slot(0,0))}));e->slot(0,4)=std::move(t155);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t156=first(call(e->slot(1,11),Args{concat(lit249,e->slot(0,0))}));refs[0].put(std::move(t156));}
}
{V t157=first(call(e->slot(1,11),Args{concat(lit250,e->slot(0,0))}));e->slot(0,5)=std::move(t157);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t158=first(call(e->slot(1,11),Args{concat(lit251,e->slot(0,0))}));refs[0].put(std::move(t158));}
}
{V t159=first(call(e->slot(1,11),Args{concat(lit252,e->slot(0,0))}));e->slot(0,6)=std::move(t159);}
{V t160=first(call(e->slot(1,11),Args{concat(lit253,e->slot(0,0))}));e->slot(0,7)=std::move(t160);}
if(truth(([&](){V t161=([&](){V t162=([&](){V t163=([&](){V t164=([&](){V t165=ne(e->slot(0,2),V());return !truth(t165)?ne(e->slot(0,3),V()):t165;})();return !truth(t164)?ne(e->slot(0,4),V()):t164;})();return !truth(t163)?ne(e->slot(0,5),V()):t163;})();return !truth(t162)?ne(e->slot(0,6),V()):t162;})();return !truth(t161)?ne(e->slot(0,7),V()):t161;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit117)};V t166=V(true);refs[0].put(std::move(t166));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit151)};V t167=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit152)};V t168=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit153)};V t169=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit154)};V t170=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit155)};V t171=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit156)};V t172=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t172));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t173=call(e->slot(1,13),Args{V(0.0),concat(lit254,e->slot(0,0)),concat(lit255,e->slot(0,0)),concat(lit256,e->slot(0,0))});e->slot(0,2)=arg(t173,0);e->slot(0,3)=arg(t173,1);}
{V t174=first(call(e->slot(1,13),Args{V(0.0),concat(lit257,e->slot(0,0)),concat(lit258,e->slot(0,0)),concat(lit259,e->slot(0,0))}));e->slot(0,4)=std::move(t174);}
{V t175=first(call(e->slot(1,13),Args{V(0.0),concat(lit260,e->slot(0,0)),concat(lit261,e->slot(0,0)),concat(lit262,e->slot(0,0))}));e->slot(0,5)=std::move(t175);}
{Args t176=call(e->slot(1,13),Args{V(0.0),concat(lit263,e->slot(0,0)),concat(lit264,e->slot(0,0)),concat(lit265,e->slot(0,0)),concat(lit266,e->slot(0,0)),concat(lit267,e->slot(0,0))});e->slot(0,6)=arg(t176,0);e->slot(0,7)=arg(t176,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit118)};V t177=V(true);refs[0].put(std::move(t177));}
}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit119)};V t178=V(true);refs[0].put(std::move(t178));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit163)};V t179=e->slot(0,2);refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit164)};V t180=e->slot(0,4);refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit165)};V t181=first(call(get(e->get("math"),lit173),joined(Args{first(call(e->slot(1,6),Args{e->slot(0,5)}))},call(get(e->get("math"),lit184),Args{add(mul(e->slot(0,2),e->slot(0,2)),mul(e->slot(0,4),e->slot(0,4)))}))));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit166)};V t182=first(call(e->slot(1,5),Args{first(call(e->slot(1,6),Args{e->slot(0,6)})),V(0.0),V(2.0)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit167)};V t183=get(e->slot(0,1),lit166);refs[0].put(std::move(t183));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t184=call(e->slot(1,13),Args{V(1.0),concat(lit268,e->slot(0,0)),concat(lit269,e->slot(0,0)),concat(lit270,e->slot(0,0))});e->slot(0,2)=arg(t184,0);e->slot(0,3)=arg(t184,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit120)};V t185=V(true);refs[0].put(std::move(t185));}
}
{Args t186=call(e->slot(1,13),Args{V(0.0),concat(lit271,e->slot(0,0)),concat(lit272,e->slot(0,0)),concat(lit273,e->slot(0,0)),concat(lit274,e->slot(0,0))});e->slot(0,4)=arg(t186,0);e->slot(0,5)=arg(t186,1);}
{V t187=first(call(e->slot(1,13),Args{V(0.0),concat(lit275,e->slot(0,0)),concat(lit276,e->slot(0,0)),concat(lit277,e->slot(0,0)),concat(lit278,e->slot(0,0))}));e->slot(0,6)=std::move(t187);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit121)};V t188=V(true);refs[0].put(std::move(t188));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit168)};V t189=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.35),V(1.15)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit160)};V t190=e->slot(0,4);refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t191=e->slot(0,6);refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit158)};V t192=e->slot(0,4);refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit159)};V t193=e->slot(0,6);refs[0].put(std::move(t193));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t194=get(get(get(e->slot(1,1),lit61),lit124),e->slot(0,0));e->slot(0,2)=std::move(t194);}
{V t195=first(call(e->slot(1,11),Args{concat(lit279,e->slot(0,0))}));e->slot(0,3)=std::move(t195);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t196=first(call(e->slot(1,11),Args{concat(lit280,e->slot(0,0))}));refs[0].put(std::move(t196));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t197=first(call(e->slot(1,11),Args{concat(lit281,e->slot(0,0))}));refs[0].put(std::move(t197));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t198=first(call(e->slot(1,11),Args{concat(lit282,e->slot(0,0))}));refs[0].put(std::move(t198));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit110)};V t199=V(true);refs[0].put(std::move(t199));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit126)};V t200=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit127)};V t201=first(call(e->slot(1,5),Args{first(call(e->slot(1,13),Args{get(e->slot(0,2),lit126),concat(lit283,e->slot(0,0)),concat(lit284,e->slot(0,0))})),V(0.0),V(1.2)}));refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit129)};V t202=first(call(e->slot(1,5),Args{first(call(e->slot(1,13),Args{V(1.0),concat(lit285,e->slot(0,0)),concat(lit286,e->slot(0,0))})),V(0.0),V(1.0)}));refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit128)};V t203=first(call(e->slot(1,5),Args{first(call(e->slot(1,13),Args{get(e->slot(0,2),lit126),concat(lit228,e->slot(0,0)),concat(lit287,e->slot(0,0))})),V(0.0),V(1.2)}));refs[0].put(std::move(t203));}
{V t204=first(call(e->slot(1,11),Args{concat(lit288,e->slot(0,0))}));e->slot(0,4)=std::move(t204);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t205=first(call(e->slot(1,11),Args{concat(lit289,e->slot(0,0))}));refs[0].put(std::move(t205));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t206=first(call(e->slot(1,11),Args{concat(lit290,e->slot(0,0))}));refs[0].put(std::move(t206));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t207=first(call(e->slot(1,11),Args{concat(lit291,e->slot(0,0))}));refs[0].put(std::move(t207));}
}
if(truth(([&](){V t208=eq(e->slot(0,4),V());return truth(t208)?e->slot(0,1):t208;})())){{std::array<Ref,1> refs{Ref(e,0,4)};V t209=first(call(e->slot(1,10),Args{e->slot(0,1),lit130,V(0.0)}));refs[0].put(std::move(t209));}
}
{V t210=first(call(e->slot(1,11),Args{concat(lit292,e->slot(0,0))}));e->slot(0,5)=std::move(t210);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t211=first(call(e->slot(1,11),Args{concat(lit293,e->slot(0,0))}));refs[0].put(std::move(t211));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t212=first(call(e->slot(1,11),Args{concat(lit294,e->slot(0,0))}));refs[0].put(std::move(t212));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t213=first(call(e->slot(1,11),Args{concat(lit295,e->slot(0,0))}));refs[0].put(std::move(t213));}
}
if(truth(([&](){V t214=eq(e->slot(0,5),V());return truth(t214)?e->slot(0,1):t214;})())){{std::array<Ref,1> refs{Ref(e,0,5)};V t215=first(call(e->slot(1,10),Args{e->slot(0,1),lit131,V(0.0)}));refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit130)};V t216=first(call(e->slot(1,6),Args{e->slot(0,4)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit131)};V t217=first(call(e->slot(1,6),Args{e->slot(0,5)}));refs[0].put(std::move(t217));}
{V t218=first(call(e->slot(1,11),Args{concat(lit296,e->slot(0,0))}));e->slot(0,6)=std::move(t218);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t219=first(call(e->slot(1,11),Args{concat(lit297,e->slot(0,0))}));refs[0].put(std::move(t219));}
}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t220=first(call(e->slot(1,11),Args{concat(lit298,e->slot(0,0))}));refs[0].put(std::move(t220));}
}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t221=first(call(e->slot(1,11),Args{concat(lit299,e->slot(0,0))}));refs[0].put(std::move(t221));}
}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,2),lit132)};V t222=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(4.0)}));refs[0].put(std::move(t222));}
}else{auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t223=divv(get(e->slot(1,2),lit130),V(0.22));e->slot(0,0)=std::move(t223);}
{V t224=divv(get(e->slot(1,2),lit131),V(0.35));e->slot(0,1)=std::move(t224);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t225=first(call(e->slot(2,5),Args{first(call(get(e->get("math"),lit184),Args{add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1)))})),V(0.0),V(4.0)}));refs[0].put(std::move(t225));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit125)};V t226=first(call(e->slot(1,25),Args{e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t226));}
{V t227=first(call(e->slot(1,11),Args{concat(lit300,e->slot(0,0))}));e->slot(0,7)=std::move(t227);}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t228=first(call(e->slot(1,11),Args{concat(lit301,e->slot(0,0))}));refs[0].put(std::move(t228));}
}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t229=first(call(e->slot(1,11),Args{concat(lit302,e->slot(0,0))}));refs[0].put(std::move(t229));}
}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit111)};V t230=V(true);refs[0].put(std::move(t230));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit133)};V t231=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit134)};V t232=first(call(e->slot(1,5),Args{first(call(e->slot(1,13),Args{V(1.0),concat(lit303,e->slot(0,0)),concat(lit304,e->slot(0,0)),concat(lit305,e->slot(0,0)),concat(lit306,e->slot(0,0))})),V(0.0),V(1.2)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit135)};V t233=first(call(e->slot(1,13),Args{V(0.0),concat(lit307,e->slot(0,0)),concat(lit308,e->slot(0,0))}));refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit136)};V t234=first(call(e->slot(1,14),Args{lit137,concat(lit309,e->slot(0,0)),concat(lit310,e->slot(0,0))}));refs[0].put(std::move(t234));}
{V t235=first(call(e->slot(1,11),Args{concat(lit311,e->slot(0,0))}));e->slot(0,8)=std::move(t235);}
if(truth(eq(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e,0,8)};V t236=first(call(e->slot(1,11),Args{concat(lit312,e->slot(0,0))}));refs[0].put(std::move(t236));}
}
if(truth(eq(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e,0,8)};V t237=first(call(e->slot(1,11),Args{concat(lit313,e->slot(0,0))}));refs[0].put(std::move(t237));}
}
if(truth(ne(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit112)};V t238=V(true);refs[0].put(std::move(t238));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit157)};V t239=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t239));}
call(e->slot(1,26),Args{e->slot(0,0),e->slot(0,2)});
call(e->slot(1,27),Args{e->slot(0,0),e->slot(0,2)});
call(e->slot(1,28),Args{e->slot(0,0),e->slot(0,2)});
call(e->slot(1,29),Args{e->slot(0,0),e->slot(0,2)});
call(e->slot(1,30),Args{e->slot(0,0),e->slot(0,2)});
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit169)};V t240=([&](){V t241=([&](){V t242=([&](){V t243=ne(e->slot(0,1),V());return !truth(t243)?ne(e->slot(0,3),V()):t243;})();return !truth(t242)?ne(e->slot(0,7),V()):t242;})();return !truth(t241)?ne(e->slot(0,6),V()):t241;})();refs[0].put(std::move(t240));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t244=divv(first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit5),lit8)})),first(call(get(e->get("math"),lit173),Args{get(get(e->slot(1,1),lit5),lit8),V(1.0)})));e->slot(0,1)=std::move(t244);}
{V t245=first(call(e->slot(1,9),Args{V(0.1),V(0.8),e->slot(0,1)}));e->slot(0,2)=std::move(t245);}
{V t246=first(call(e->slot(1,9),Args{V(1.85),V(3.0),e->slot(0,1)}));e->slot(0,3)=std::move(t246);}
return call(e->slot(1,5),Args{mul(e->slot(0,2),sub(V(1.0),mul(e->slot(0,3),V(0.12)))),V(0.0),V(1.0)});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,5),Args{sub(V(1.0),first(call(e->slot(1,9),Args{V(0.6),V(1.9),e->slot(0,0)}))),V(0.0),V(1.0)});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);{V t247=first(call(e->slot(1,5),Args{get(e->slot(0,0),lit126),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t247);}
{V t248=first(call(e->slot(1,5),Args{([&](){V t249=([&](){V t250=get(e->slot(0,0),lit128);return !truth(t250)?get(e->slot(0,0),lit126):t250;})();return !truth(t249)?V(1.0):t249;})(),V(0.0),V(1.15)}));e->slot(0,2)=std::move(t248);}
{V t251=first(call(e->slot(1,5),Args{mul(([&](){V t252=get(e->slot(0,0),lit134);return !truth(t252)?V(1.0):t252;})(),([&](){V t253=get(e->slot(0,0),lit168);return !truth(t253)?V(1.0):t253;})()),V(0.0),V(1.05)}));e->slot(0,3)=std::move(t251);}
{V t254=first(call(e->slot(1,32),Args{get(e->slot(0,0),lit125)}));e->slot(0,4)=std::move(t254);}
{V t255=first(call(e->slot(1,5),Args{add(add(add(mul(([&](){V t256=get(e->slot(0,0),lit133);return !truth(t256)?V(0.0):t256;})(),V(0.5)),mul(([&](){V t257=get(e->slot(0,0),lit138);return !truth(t257)?V(0.0):t257;})(),V(0.18))),mul(([&](){V t258=get(e->slot(0,0),lit139);return !truth(t258)?V(0.0):t258;})(),V(0.16))),mul(([&](){V t259=get(e->slot(0,0),lit140);return !truth(t259)?V(0.0):t259;})(),V(0.16))),V(0.0),V(1.25)}));e->slot(0,5)=std::move(t255);}
{V t260=sub(V(1.0),mul(first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0),V(1.0)})),V(0.55)));e->slot(0,6)=std::move(t260);}
{V t261=first(call(e->slot(1,33),Args{get(e->slot(0,0),lit132)}));e->slot(0,7)=std::move(t261);}
{V t262=mul(first(call(e->slot(1,5),Args{([&](){V t263=get(e->slot(0,0),lit144);return !truth(t263)?V(1.0):t263;})(),V(0.0),V(1.15)})),get(get(e->slot(1,1),lit5),lit25));e->slot(0,8)=std::move(t262);}
{V t264=mul(first(call(e->slot(1,5),Args{([&](){V t265=get(e->slot(0,0),lit151);return !truth(t265)?V(1.0):t265;})(),V(0.0),V(1.15)})),get(get(e->slot(1,1),lit5),lit26));e->slot(0,9)=std::move(t264);}
{V t266=mul(e->slot(0,2),get(get(e->slot(1,1),lit5),lit27));e->slot(0,10)=std::move(t266);}
{V t267=mul(first(call(e->slot(1,5),Args{([&](){V t268=get(e->slot(0,0),lit149);return !truth(t268)?V(0.0):t268;})(),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit5),lit28));e->slot(0,11)=std::move(t267);}
{V t269=mul(first(call(e->slot(1,5),Args{([&](){V t270=get(e->slot(0,0),lit145);return !truth(t270)?V(0.0):t270;})(),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit5),lit29));e->slot(0,12)=std::move(t269);}
{V t271=mul(first(call(get(e->get("math"),lit173),Args{sub(V(1.0),([&](){V t272=get(e->slot(0,0),lit168);return !truth(t272)?V(1.0):t272;})()),V(0.0)})),get(get(e->slot(1,1),lit5),lit52));e->slot(0,13)=std::move(t271);}
{V t273=first(call(e->slot(1,5),Args{([&](){V t274=get(e->slot(0,0),lit152);return !truth(t274)?V(1.0):t274;})(),V(0.0),V(1.05)}));e->slot(0,14)=std::move(t273);}
{V t275=sub(sub(sub(add(add(add(add(add(add(add(mul(e->slot(0,1),get(get(e->slot(1,1),lit5),lit12)),mul(e->slot(0,3),get(get(e->slot(1,1),lit5),lit13))),mul(e->slot(0,4),get(get(e->slot(1,1),lit5),lit14))),mul(e->slot(0,6),get(get(e->slot(1,1),lit5),lit15))),mul(e->slot(0,7),get(get(e->slot(1,1),lit5),lit16))),e->slot(0,8)),e->slot(0,9)),e->slot(0,10)),e->slot(0,11)),e->slot(0,12)),e->slot(0,13));e->slot(0,15)=std::move(t275);}
{std::array<Ref,1> refs{Ref(e,0,15)};V t276=mul(e->slot(0,15),add(V(0.82),mul(V(0.18),e->slot(0,14))));refs[0].put(std::move(t276));}
return call(e->slot(1,5),Args{e->slot(0,15),V(0.0),V(1.15)});
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t277=([&](){V t278=get(e->slot(0,0),lit67);return !truth(t278)?V(0.0):t278;})();e->slot(0,1)=std::move(t277);}
if(truth(lt(e->slot(0,1),get(get(e->slot(1,1),lit5),lit6)))){return Args{V(0.0),lit314};
}
if(truth(([&](){V t279=gt(get(e->slot(0,0),lit90),V(0.7));return !truth(t279)?gt(get(e->slot(0,0),lit103),V(0.62)):t279;})())){return Args{V(7.0),lit315};
}
if(truth(([&](){V t280=gt(get(e->slot(0,0),lit101),V(0.48));return truth(t280)?gt(get(e->slot(0,0),lit99),V(0.36)):t280;})())){return Args{V(9.0),lit316};
}
if(truth(([&](){V t281=gt(get(e->slot(0,0),lit88),V(0.48));return truth(t281)?([&](){V t282=gt(get(e->slot(0,0),lit70),V(0.18));return !truth(t282)?gt(get(e->slot(0,0),lit71),V(0.1)):t282;})():t281;})())){return Args{V(6.0),lit317};
}
if(truth(([&](){V t283=gt(get(e->slot(0,0),lit88),V(0.48));return truth(t283)?gt(get(e->slot(0,0),lit69),V(0.18)):t283;})())){return Args{V(5.0),lit318};
}
if(truth(gt(get(e->slot(0,0),lit88),V(0.45)))){return Args{V(4.0),lit319};
}
if(truth(gt(get(e->slot(0,0),lit87),V(0.45)))){return Args{V(3.0),lit320};
}
if(truth(gt(get(e->slot(0,0),lit89),V(0.45)))){return Args{V(2.0),lit321};
}
if(truth(gt(get(e->slot(0,0),lit86),V(0.36)))){return Args{V(1.0),lit322};
}
return Args{V(8.0),lit323};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,78);auto e=&storage;e->slot(0,0)=arg(a,0);{V t284=get(e->slot(1,1),lit61);e->slot(0,1)=std::move(t284);}
{V t285=get(e->slot(1,1),lit5);e->slot(0,2)=std::move(t285);}
{V t286=get(get(e->slot(0,1),lit124),V(0.0));e->slot(0,3)=std::move(t286);}
{V t287=get(get(e->slot(0,1),lit124),V(1.0));e->slot(0,4)=std::move(t287);}
{V t288=get(get(e->slot(0,1),lit124),V(2.0));e->slot(0,5)=std::move(t288);}
{V t289=get(get(e->slot(0,1),lit124),V(3.0));e->slot(0,6)=std::move(t289);}
{V t290=V(0.0);e->slot(0,7)=std::move(t290);}
{V t291=V(0.0);e->slot(0,8)=std::move(t291);}
{V t292=V(0.0);e->slot(0,9)=std::move(t292);}
{double t293=num(V(0.0)),t294=num(V(3.0)),t295=num(V(1.0));for(double t296=t293;(t295>0?t296<=t294:t296>=t294);t296+=t295){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t296);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit124),e->slot(0,0)),lit162)};V t297=first(call(e->slot(2,34),Args{get(get(e->slot(1,1),lit124),e->slot(0,0))}));refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t298=add(e->slot(1,7),get(get(get(e->slot(1,1),lit124),e->slot(0,0)),lit162));refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t299=first(call(get(e->get("math"),lit173),Args{e->slot(1,9),([&](){V t300=get(get(get(e->slot(1,1),lit124),e->slot(0,0)),lit132);return !truth(t300)?V(0.0):t300;})()}));refs[0].put(std::move(t299));}
if(truth(get(get(get(e->slot(1,1),lit124),e->slot(0,0)),lit169))){{std::array<Ref,1> refs{Ref(e,1,8)};V t301=add(e->slot(1,8),V(1.0));refs[0].put(std::move(t301));}
}
}}
{V t302=mul(add(get(e->slot(0,3),lit126),get(e->slot(0,4),lit126)),V(0.5));e->slot(0,10)=std::move(t302);}
{V t303=mul(add(get(e->slot(0,5),lit126),get(e->slot(0,6),lit126)),V(0.5));e->slot(0,11)=std::move(t303);}
{V t304=mul(add(get(e->slot(0,3),lit125),get(e->slot(0,4),lit125)),V(0.5));e->slot(0,12)=std::move(t304);}
{V t305=mul(add(get(e->slot(0,5),lit125),get(e->slot(0,6),lit125)),V(0.5));e->slot(0,13)=std::move(t305);}
{V t306=mul(add(get(e->slot(0,3),lit132),get(e->slot(0,4),lit132)),V(0.5));e->slot(0,14)=std::move(t306);}
{V t307=mul(add(get(e->slot(0,5),lit132),get(e->slot(0,6),lit132)),V(0.5));e->slot(0,15)=std::move(t307);}
{V t308=mul(add(get(e->slot(0,3),lit133),get(e->slot(0,4),lit133)),V(0.5));e->slot(0,16)=std::move(t308);}
{V t309=mul(add(get(e->slot(0,5),lit133),get(e->slot(0,6),lit133)),V(0.5));e->slot(0,17)=std::move(t309);}
{V t310=mul(add(get(e->slot(0,3),lit162),get(e->slot(0,4),lit162)),V(0.5));e->slot(0,18)=std::move(t310);}
{V t311=mul(add(get(e->slot(0,5),lit162),get(e->slot(0,6),lit162)),V(0.5));e->slot(0,19)=std::move(t311);}
{V t312=mul(add(get(e->slot(0,3),lit143),get(e->slot(0,4),lit143)),V(0.5));e->slot(0,20)=std::move(t312);}
{V t313=mul(add(get(e->slot(0,5),lit143),get(e->slot(0,6),lit143)),V(0.5));e->slot(0,21)=std::move(t313);}
{V t314=mul(add(get(e->slot(0,3),lit144),get(e->slot(0,4),lit144)),V(0.5));e->slot(0,22)=std::move(t314);}
{V t315=mul(add(get(e->slot(0,5),lit144),get(e->slot(0,6),lit144)),V(0.5));e->slot(0,23)=std::move(t315);}
{V t316=mul(add(get(e->slot(0,3),lit145),get(e->slot(0,4),lit145)),V(0.5));e->slot(0,24)=std::move(t316);}
{V t317=mul(add(get(e->slot(0,5),lit145),get(e->slot(0,6),lit145)),V(0.5));e->slot(0,25)=std::move(t317);}
{V t318=mul(add(get(e->slot(0,3),lit148),get(e->slot(0,4),lit148)),V(0.5));e->slot(0,26)=std::move(t318);}
{V t319=mul(add(get(e->slot(0,5),lit148),get(e->slot(0,6),lit148)),V(0.5));e->slot(0,27)=std::move(t319);}
{V t320=mul(add(get(e->slot(0,3),lit149),get(e->slot(0,4),lit149)),V(0.5));e->slot(0,28)=std::move(t320);}
{V t321=mul(add(get(e->slot(0,5),lit149),get(e->slot(0,6),lit149)),V(0.5));e->slot(0,29)=std::move(t321);}
{V t322=mul(add(get(e->slot(0,5),lit147),get(e->slot(0,6),lit147)),V(0.5));e->slot(0,30)=std::move(t322);}
{V t323=mul(add(get(e->slot(0,5),lit140),get(e->slot(0,6),lit140)),V(0.5));e->slot(0,31)=std::move(t323);}
{V t324=mul(add(get(e->slot(0,5),lit138),get(e->slot(0,6),lit138)),V(0.5));e->slot(0,32)=std::move(t324);}
{V t325=mul(add(get(e->slot(0,5),lit139),get(e->slot(0,6),lit139)),V(0.5));e->slot(0,33)=std::move(t325);}
{V t326=first(call(e->slot(1,5),Args{divv(sub(get(e->slot(0,1),lit67),get(e->slot(0,2),lit6)),first(call(get(e->get("math"),lit173),Args{sub(get(e->slot(0,2),lit7),get(e->slot(0,2),lit6)),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,34)=std::move(t326);}
{V t327=first(call(e->slot(1,6),Args{get(e->slot(0,1),lit68)}));e->slot(0,35)=std::move(t327);}
{V t328=first(call(e->slot(1,6),Args{get(e->slot(0,1),lit72)}));e->slot(0,36)=std::move(t328);}
{V t329=mul(get(e->slot(0,1),lit68),e->slot(0,34));e->slot(0,37)=std::move(t329);}
{V t330=first(call(e->slot(1,5),Args{divv(get(e->slot(0,1),lit72),first(call(get(e->get("math"),lit173),Args{get(e->slot(0,2),lit9),V(0.001)}))),V(-num(V(2.0))),V(2.0)}));e->slot(0,38)=std::move(t330);}
{V t331=first(call(e->slot(1,7),Args{get(e->slot(0,1),lit68)}));e->slot(0,39)=std::move(t331);}
if(truth(eq(e->slot(0,39),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,39)};V t332=first(call(e->slot(1,7),Args{get(e->slot(0,1),lit72)}));refs[0].put(std::move(t332));}
}
{V t333=mul(e->slot(0,38),e->slot(0,39));e->slot(0,40)=std::move(t333);}
{V t334=first(call(get(e->get("math"),lit173),Args{V(0.0),sub(first(call(e->slot(1,6),Args{e->slot(0,37)})),first(call(get(e->get("math"),lit173),Args{V(0.0),e->slot(0,40)})))}));e->slot(0,41)=std::move(t334);}
{V t335=first(call(get(e->get("math"),lit173),Args{V(0.0),sub(first(call(get(e->get("math"),lit173),Args{V(0.0),e->slot(0,40)})),first(call(e->slot(1,6),Args{e->slot(0,37)})))}));e->slot(0,42)=std::move(t335);}
{V t336=([&](){V t337=([&](){V t338=lt(mul(e->slot(0,38),e->slot(0,39)),V(-num(V(0.12))));return truth(t338)?V(1.0):t338;})();return !truth(t337)?V(0.0):t337;})();e->slot(0,43)=std::move(t336);}
{V t339=first(call(e->slot(1,5),Args{divv(e->slot(0,14),V(1.65)),V(0.0),V(1.4)}));e->slot(0,44)=std::move(t339);}
{V t340=first(call(e->slot(1,5),Args{divv(e->slot(0,15),V(1.65)),V(0.0),V(1.4)}));e->slot(0,45)=std::move(t340);}
{V t341=first(call(e->slot(1,5),Args{sub(V(1.0),e->slot(0,18)),V(0.0),V(1.0)}));e->slot(0,46)=std::move(t341);}
{V t342=first(call(e->slot(1,5),Args{sub(V(1.0),e->slot(0,19)),V(0.0),V(1.0)}));e->slot(0,47)=std::move(t342);}
{Args t343=call(e->slot(1,13),Args{V(0.0),lit324,lit325,lit326,lit327});e->slot(0,48)=arg(t343,0);e->slot(0,49)=arg(t343,1);}
if(truth(ne(e->slot(0,49),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t344=V(true);refs[0].put(std::move(t344));}
}
{V t345=first(call(e->slot(1,13),Args{V(0.0),lit328,lit329,lit330}));e->slot(0,50)=std::move(t345);}
{V t346=first(call(e->slot(1,5),Args{divv(first(call(e->slot(1,6),Args{e->slot(0,48)})),first(call(get(e->get("math"),lit173),Args{get(e->slot(0,2),lit10),V(1.0)}))),V(0.0),V(1.5)}));e->slot(0,51)=std::move(t346);}
{V t347=first(call(e->slot(1,5),Args{divv(first(call(e->slot(1,6),Args{e->slot(0,50)})),first(call(get(e->get("math"),lit173),Args{get(e->slot(0,2),lit11),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,52)=std::move(t347);}
{Args t348=call(e->slot(1,13),Args{V(0.0),lit331,lit332});e->slot(0,53)=arg(t348,0);e->slot(0,54)=arg(t348,1);}
if(truth(ne(e->slot(0,54),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t349=V(true);refs[0].put(std::move(t349));}
}
if(truth(gt(e->slot(0,53),V(1.5)))){{std::array<Ref,1> refs{Ref(e,0,53)};V t350=divv(e->slot(0,53),V(100.0));refs[0].put(std::move(t350));}
}
{std::array<Ref,1> refs{Ref(e,0,53)};V t351=first(call(e->slot(1,5),Args{e->slot(0,53),V(0.0),V(1.0)}));refs[0].put(std::move(t351));}
{V t352=mul(add(get(e->slot(0,3),lit157),get(e->slot(0,4),lit157)),V(0.5));e->slot(0,55)=std::move(t352);}
{V t353=mul(add(get(e->slot(0,5),lit157),get(e->slot(0,6),lit157)),V(0.5));e->slot(0,56)=std::move(t353);}
{V t354=mul(sub(get(e->slot(0,6),lit160),get(e->slot(0,5),lit160)),get(e->slot(0,2),lit53));e->slot(0,57)=std::move(t354);}
{V t355=mul(sub(first(call(e->slot(1,6),Args{get(e->slot(0,5),lit161)})),first(call(e->slot(1,6),Args{get(e->slot(0,6),lit161)}))),get(e->slot(0,2),lit54));e->slot(0,58)=std::move(t355);}
{V t356=first(call(e->slot(1,5),Args{add(add(add(mul(sub(e->slot(0,56),e->slot(0,55)),V(0.6)),mul(sub(get(e->slot(0,6),lit158),get(e->slot(0,5),lit158)),V(4.0))),e->slot(0,57)),e->slot(0,58)),V(-num(V(1.0))),V(1.0)}));e->slot(0,59)=std::move(t356);}
{V t357=first(call(e->slot(1,5),Args{divv(add(sub(get(e->slot(0,4),lit125),get(e->slot(0,3),lit125)),sub(get(e->slot(0,6),lit125),get(e->slot(0,5),lit125))),first(call(get(e->get("math"),lit173),Args{mul(get(e->slot(0,2),lit8),V(2.0)),V(1.0)}))),V(-num(V(1.0))),V(1.0)}));e->slot(0,60)=std::move(t357);}
{V t358=mul(add(get(e->slot(0,5),lit166),get(e->slot(0,6),lit166)),V(0.5));e->slot(0,61)=std::move(t358);}
{V t359=mul(add(get(e->slot(0,3),lit166),get(e->slot(0,4),lit166)),V(0.5));e->slot(0,62)=std::move(t359);}
{V t360=first(call(e->slot(1,5),Args{mul(sub(e->slot(0,61),e->slot(0,62)),get(e->slot(0,2),lit50)),V(-num(V(0.5))),V(0.5)}));e->slot(0,63)=std::move(t360);}
{V t361=first(call(e->slot(1,5),Args{mul(divv(sub(add(get(e->slot(0,5),lit165),get(e->slot(0,6),lit165)),add(get(e->slot(0,3),lit165),get(e->slot(0,4),lit165))),V(12000.0)),get(e->slot(0,2),lit51)),V(-num(V(0.5))),V(0.5)}));e->slot(0,64)=std::move(t361);}
{V t362=first(call(e->slot(1,5),Args{mul(mul(add(mul(e->slot(0,51),V(0.75)),mul(e->slot(0,52),V(0.25))),e->slot(0,45)),add(V(0.35),mul(e->slot(0,53),V(0.65)))),V(0.0),V(1.0)}));e->slot(0,65)=std::move(t362);}
{V t363=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,53),e->slot(0,45)),e->slot(0,11)),V(0.0),V(1.0)}));e->slot(0,66)=std::move(t363);}
{V t364=first(call(e->slot(1,5),Args{add(add(add(mul(e->slot(0,41),get(e->slot(0,2),lit18)),mul(first(call(get(e->get("math"),lit173),Args{V(0.0),sub(e->slot(0,44),mul(e->slot(0,45),V(0.55)))})),get(e->slot(0,2),lit17))),mul(e->slot(0,46),V(0.22))),mul(first(call(get(e->get("math"),lit173),Args{V(0.0),sub(e->slot(0,28),e->slot(0,29))})),V(0.06))),V(0.0),V(1.0)}));e->slot(0,67)=std::move(t364);}
{V t365=first(call(e->slot(1,5),Args{sub(add(add(add(add(add(add(add(add(add(mul(first(call(get(e->get("math"),lit173),Args{V(0.0),sub(e->slot(0,45),mul(e->slot(0,44),V(0.45)))})),get(e->slot(0,2),lit19)),mul(e->slot(0,42),get(e->slot(0,2),lit20))),mul(e->slot(0,47),get(e->slot(0,2),lit21))),mul(e->slot(0,65),get(e->slot(0,2),lit22))),mul(e->slot(0,66),get(e->slot(0,2),lit23))),mul(first(call(e->slot(1,6),Args{e->slot(0,59)})),get(e->slot(0,2),lit24))),mul(e->slot(0,27),get(e->slot(0,2),lit30))),mul(e->slot(0,29),get(e->slot(0,2),lit31))),mul(first(call(get(e->get("math"),lit173),Args{V(0.0),sub(e->slot(0,61),e->slot(0,62))})),get(e->slot(0,2),lit50))),e->slot(0,64)),mul(e->slot(0,21),get(e->slot(0,2),lit32))),V(0.0),V(1.0)}));e->slot(0,68)=std::move(t365);}
{V t366=first(call(e->slot(1,5),Args{mul(e->slot(0,17),sub(e->slot(0,11),mul(e->slot(0,45),V(0.25)))),V(0.0),V(1.0)}));e->slot(0,69)=std::move(t366);}
{V t367=first(call(e->slot(1,5),Args{sub(e->slot(0,11),([&](){V t368=get(e->slot(0,1),lit74);return !truth(t368)?e->slot(0,11):t368;})()),V(0.0),V(1.0)}));e->slot(0,70)=std::move(t367);}
{V t369=V(0.0);e->slot(0,71)=std::move(t369);}
if(truth(([&](){V t370=eq(get(e->slot(0,5),lit135),V(4.0));return !truth(t370)?eq(get(e->slot(0,5),lit135),V(7.0)):t370;})())){{std::array<Ref,1> refs{Ref(e,0,71)};V t371=add(e->slot(0,71),V(0.5));refs[0].put(std::move(t371));}
}
if(truth(([&](){V t372=eq(get(e->slot(0,6),lit135),V(4.0));return !truth(t372)?eq(get(e->slot(0,6),lit135),V(7.0)):t372;})())){{std::array<Ref,1> refs{Ref(e,0,71)};V t373=add(e->slot(0,71),V(0.5));refs[0].put(std::move(t373));}
}
{V t374=first(call(e->slot(1,5),Args{sub(add(add(add(add(add(mul(e->slot(0,69),get(e->slot(0,2),lit43)),mul(e->slot(0,70),get(e->slot(0,2),lit44))),mul(e->slot(0,71),get(e->slot(0,2),lit45))),mul(e->slot(0,21),get(e->slot(0,2),lit33))),mul(e->slot(0,23),get(e->slot(0,2),lit34))),mul(e->slot(0,30),get(e->slot(0,2),lit35))),mul(e->slot(0,29),get(e->slot(0,2),lit36))),V(0.0),V(1.0)}));e->slot(0,72)=std::move(t374);}
{V t375=first(call(e->slot(1,5),Args{add(add(add(add(add(add(add(mul(first(call(e->slot(1,5),Args{divv(e->slot(0,36),first(call(get(e->get("math"),lit173),Args{mul(get(e->slot(0,2),lit9),V(1.25)),V(0.001)}))),V(0.0),V(1.4)})),get(e->slot(0,2),lit46)),mul(e->slot(0,45),get(e->slot(0,2),lit47))),mul(e->slot(0,47),get(e->slot(0,2),lit48))),mul(e->slot(0,43),get(e->slot(0,2),lit49))),mul(e->slot(0,25),get(e->slot(0,2),lit37))),mul(e->slot(0,27),get(e->slot(0,2),lit38))),mul(e->slot(0,29),get(e->slot(0,2),lit39))),mul(e->slot(0,31),get(e->slot(0,2),lit40))),V(0.0),V(1.0)}));e->slot(0,73)=std::move(t375);}
{V t376=first(call(e->slot(1,5),Args{add(add(add(add(add(add(mul(first(call(get(e->get("math"),lit173),Args{V(0.0),e->slot(0,40)})),V(0.34)),mul(e->slot(0,68),V(0.28))),mul(e->slot(0,65),V(0.16))),mul(e->slot(0,66),V(0.1))),mul(e->slot(0,27),V(0.1))),mul(e->slot(0,21),V(0.08))),mul(mul(e->slot(0,34),e->slot(0,35)),V(0.12))),V(0.0),V(1.0)}));e->slot(0,74)=std::move(t376);}
{V t377=first(call(e->slot(1,5),Args{sub(sub(sub(add(add(e->slot(0,74),mul(e->slot(0,68),V(0.55))),mul(e->slot(0,72),V(0.16))),mul(e->slot(0,67),V(0.65))),mul(e->slot(0,73),V(0.28))),mul(e->slot(0,29),V(0.1))),V(-num(V(1.0))),V(1.0)}));e->slot(0,75)=std::move(t377);}
{V t378=first(call(e->slot(1,5),Args{sub(e->slot(0,68),e->slot(0,67)),V(-num(V(1.0))),V(1.0)}));e->slot(0,76)=std::move(t378);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit73)};V t379=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit73),e->slot(0,10),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit74)};V t380=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit74),e->slot(0,11),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit75)};V t381=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit75),e->slot(0,12),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit76)};V t382=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit76),e->slot(0,13),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t382));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit77)};V t383=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit77),e->slot(0,14),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit78)};V t384=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit78),e->slot(0,15),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t384));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit79)};V t385=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit79),e->slot(0,16),get(e->slot(0,2),lit56),e->slot(0,0)}));refs[0].put(std::move(t385));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit80)};V t386=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit80),e->slot(0,17),get(e->slot(0,2),lit56),e->slot(0,0)}));refs[0].put(std::move(t386));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit81)};V t387=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit81),e->slot(0,18),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t387));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit82)};V t388=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit82),e->slot(0,19),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t388));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit83)};V t389=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit83),e->slot(0,37),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t389));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit84)};V t390=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit84),e->slot(0,38),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t390));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit87)};V t391=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit87),e->slot(0,67),get(e->slot(0,2),lit56),e->slot(0,0)}));refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit88)};V t392=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit88),e->slot(0,68),get(e->slot(0,2),lit56),e->slot(0,0)}));refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit89)};V t393=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit89),e->slot(0,72),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t393));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit90)};V t394=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit90),e->slot(0,73),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t394));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit86)};V t395=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit86),e->slot(0,74),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit85)};V t396=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit85),e->slot(0,75),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit91)};V t397=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit91),e->slot(0,76),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit92)};V t398=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit92),e->slot(0,65),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit93)};V t399=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit93),e->slot(0,66),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t400=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit94),e->slot(0,59),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t400));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit95)};V t401=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit95),e->slot(0,60),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t401));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit96)};V t402=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit96),e->slot(0,63),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t402));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit97)};V t403=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit97),e->slot(0,64),get(e->slot(0,2),lit55),e->slot(0,0)}));refs[0].put(std::move(t403));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t404=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit98),e->slot(0,21),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t404));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit99)};V t405=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit99),e->slot(0,27),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t405));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t406=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit100),e->slot(0,29),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t406));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t407=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit101),e->slot(0,30),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t407));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t408=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit102),e->slot(0,23),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t408));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t409=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit103),e->slot(0,25),get(e->slot(0,2),lit57),e->slot(0,0)}));refs[0].put(std::move(t409));}
{V t410=first(call(e->slot(1,5),Args{add(mul(e->slot(0,32),get(e->slot(0,2),lit41)),mul(e->slot(0,33),get(e->slot(0,2),lit42))),V(0.0),V(0.2)}));e->slot(0,77)=std::move(t410);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit85)};V t411=first(call(e->slot(1,5),Args{sub(get(e->slot(0,1),lit85),mul(e->slot(0,77),first(call(e->slot(1,7),Args{get(e->slot(0,1),lit85)})))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t411));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t412=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t412));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t413=first(call(e->slot(1,5),Args{sub(e->slot(0,19),e->slot(0,18)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t413));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t414=e->slot(0,9);refs[0].put(std::move(t414));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t415=e->slot(0,8);refs[0].put(std::move(t415));}
{std::array<Ref,2> refs{Ref(e->slot(0,1),lit104),Ref(e->slot(0,1),lit105)};Args t416=call(e->slot(1,35),Args{e->slot(0,1)});refs[0].put(arg(t416,0));refs[1].put(arg(t416,1));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,15),Args{concat(lit333,e->slot(0,0)),([&](){V t417=get(e->slot(0,1),lit162);return !truth(t417)?V(0.0):t417;})()});
call(e->slot(1,15),Args{concat(lit334,e->slot(0,0)),([&](){V t418=get(e->slot(0,1),lit126);return !truth(t418)?V(0.0):t418;})()});
call(e->slot(1,15),Args{concat(lit335,e->slot(0,0)),([&](){V t419=get(e->slot(0,1),lit132);return !truth(t419)?V(0.0):t419;})()});
call(e->slot(1,15),Args{concat(lit336,e->slot(0,0)),([&](){V t420=get(e->slot(0,1),lit133);return !truth(t420)?V(0.0):t420;})()});
call(e->slot(1,15),Args{concat(lit337,e->slot(0,0)),([&](){V t421=get(e->slot(0,1),lit143);return !truth(t421)?V(0.0):t421;})()});
call(e->slot(1,15),Args{concat(lit338,e->slot(0,0)),([&](){V t422=get(e->slot(0,1),lit144);return !truth(t422)?V(1.0):t422;})()});
call(e->slot(1,15),Args{concat(lit339,e->slot(0,0)),([&](){V t423=get(e->slot(0,1),lit145);return !truth(t423)?V(0.0):t423;})()});
call(e->slot(1,15),Args{concat(lit340,e->slot(0,0)),([&](){V t424=get(e->slot(0,1),lit148);return !truth(t424)?V(0.0):t424;})()});
call(e->slot(1,15),Args{concat(lit341,e->slot(0,0)),([&](){V t425=get(e->slot(0,1),lit149);return !truth(t425)?V(0.0):t425;})()});
call(e->slot(1,15),Args{concat(lit342,e->slot(0,0)),([&](){V t426=get(e->slot(0,1),lit162);return !truth(t426)?V(0.0):t426;})()});
call(e->slot(1,15),Args{concat(lit343,e->slot(0,0)),([&](){V t427=get(e->slot(0,1),lit132);return !truth(t427)?V(0.0):t427;})()});
call(e->slot(1,15),Args{concat(lit344,e->slot(0,0)),([&](){V t428=get(e->slot(0,1),lit125);return !truth(t428)?V(0.0):t428;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit61),lit123))))){return Args{};
}
call(e->slot(1,15),Args{concat(lit345,e->slot(0,0)),([&](){V t429=get(e->slot(0,1),lit125);return !truth(t429)?V(0.0):t429;})()});
call(e->slot(1,15),Args{concat(lit346,e->slot(0,0)),([&](){V t430=get(e->slot(0,1),lit134);return !truth(t430)?V(1.0):t430;})()});
call(e->slot(1,15),Args{concat(lit347,e->slot(0,0)),([&](){V t431=get(e->slot(0,1),lit157);return !truth(t431)?V(0.0):t431;})()});
call(e->slot(1,15),Args{concat(lit348,e->slot(0,0)),([&](){V t432=get(e->slot(0,1),lit158);return !truth(t432)?V(0.0):t432;})()});
call(e->slot(1,15),Args{concat(lit349,e->slot(0,0)),([&](){V t433=get(e->slot(0,1),lit159);return !truth(t433)?V(0.0):t433;})()});
call(e->slot(1,15),Args{concat(lit350,e->slot(0,0)),([&](){V t434=get(e->slot(0,1),lit166);return !truth(t434)?V(0.0):t434;})()});
call(e->slot(1,15),Args{concat(lit351,e->slot(0,0)),([&](){V t435=get(e->slot(0,1),lit165);return !truth(t435)?V(0.0):t435;})()});
call(e->slot(1,15),Args{concat(lit352,e->slot(0,0)),([&](){V t436=get(e->slot(0,1),lit168);return !truth(t436)?V(1.0):t436;})()});
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t437=get(e->slot(1,1),lit61);e->slot(0,0)=std::move(t437);}
call(e->slot(1,15),Args{lit353,([&](){V t438=get(e->slot(0,0),lit62);return !truth(t438)?lit354:t438;})()});
call(e->slot(1,15),Args{lit355,([&](){V t439=get(e->slot(0,0),lit64);return !truth(t439)?V(0.0):t439;})()});
call(e->slot(1,15),Args{lit356,([&](){V t440=get(e->slot(0,0),lit104);return !truth(t440)?V(0.0):t440;})()});
call(e->slot(1,15),Args{lit357,([&](){V t441=get(e->slot(0,0),lit105);return !truth(t441)?lit354:t441;})()});
call(e->slot(1,15),Args{lit358,([&](){V t442=get(e->slot(0,0),lit85);return !truth(t442)?V(0.0):t442;})()});
call(e->slot(1,15),Args{lit359,([&](){V t443=get(e->slot(0,0),lit91);return !truth(t443)?V(0.0):t443;})()});
call(e->slot(1,15),Args{lit360,([&](){V t444=get(e->slot(0,0),lit86);return !truth(t444)?V(0.0):t444;})()});
call(e->slot(1,15),Args{lit361,([&](){V t445=get(e->slot(0,0),lit87);return !truth(t445)?V(0.0):t445;})()});
call(e->slot(1,15),Args{lit362,([&](){V t446=get(e->slot(0,0),lit88);return !truth(t446)?V(0.0):t446;})()});
call(e->slot(1,15),Args{lit363,([&](){V t447=get(e->slot(0,0),lit89);return !truth(t447)?V(0.0):t447;})()});
call(e->slot(1,15),Args{lit364,([&](){V t448=get(e->slot(0,0),lit90);return !truth(t448)?V(0.0):t448;})()});
call(e->slot(1,15),Args{lit365,([&](){V t449=get(e->slot(0,0),lit87);return !truth(t449)?V(0.0):t449;})()});
call(e->slot(1,15),Args{lit366,([&](){V t450=get(e->slot(0,0),lit88);return !truth(t450)?V(0.0):t450;})()});
call(e->slot(1,15),Args{lit367,([&](){V t451=get(e->slot(0,0),lit86);return !truth(t451)?V(0.0):t451;})()});
call(e->slot(1,15),Args{lit368,([&](){V t452=get(e->slot(0,0),lit89);return !truth(t452)?V(0.0):t452;})()});
call(e->slot(1,15),Args{lit369,([&](){V t453=get(e->slot(0,0),lit90);return !truth(t453)?V(0.0):t453;})()});
call(e->slot(1,15),Args{lit370,([&](){V t454=get(e->slot(0,0),lit81);return !truth(t454)?V(0.0):t454;})()});
call(e->slot(1,15),Args{lit371,([&](){V t455=get(e->slot(0,0),lit82);return !truth(t455)?V(0.0):t455;})()});
call(e->slot(1,15),Args{lit372,([&](){V t456=get(e->slot(0,0),lit73);return !truth(t456)?V(0.0):t456;})()});
call(e->slot(1,15),Args{lit373,([&](){V t457=get(e->slot(0,0),lit74);return !truth(t457)?V(0.0):t457;})()});
call(e->slot(1,15),Args{lit374,([&](){V t458=get(e->slot(0,0),lit77);return !truth(t458)?V(0.0):t458;})()});
call(e->slot(1,15),Args{lit375,([&](){V t459=get(e->slot(0,0),lit78);return !truth(t459)?V(0.0):t459;})()});
call(e->slot(1,15),Args{lit376,([&](){V t460=get(e->slot(0,0),lit79);return !truth(t460)?V(0.0):t460;})()});
call(e->slot(1,15),Args{lit377,([&](){V t461=get(e->slot(0,0),lit80);return !truth(t461)?V(0.0):t461;})()});
call(e->slot(1,15),Args{lit378,([&](){V t462=get(e->slot(0,0),lit83);return !truth(t462)?V(0.0):t462;})()});
call(e->slot(1,15),Args{lit379,([&](){V t463=get(e->slot(0,0),lit84);return !truth(t463)?V(0.0):t463;})()});
call(e->slot(1,15),Args{lit193,([&](){V t464=get(e->slot(0,0),lit72);return !truth(t464)?V(0.0):t464;})()});
call(e->slot(1,15),Args{lit188,([&](){V t465=get(e->slot(0,0),lit67);return !truth(t465)?V(0.0):t465;})()});
call(e->slot(1,15),Args{lit380,([&](){V t466=get(e->slot(0,0),lit92);return !truth(t466)?V(0.0):t466;})()});
call(e->slot(1,15),Args{lit381,([&](){V t467=get(e->slot(0,0),lit93);return !truth(t467)?V(0.0):t467;})()});
call(e->slot(1,15),Args{lit382,([&](){V t468=get(e->slot(0,0),lit94);return !truth(t468)?V(0.0):t468;})()});
call(e->slot(1,15),Args{lit383,([&](){V t469=get(e->slot(0,0),lit95);return !truth(t469)?V(0.0):t469;})()});
call(e->slot(1,15),Args{lit384,([&](){V t470=get(e->slot(0,0),lit96);return !truth(t470)?V(0.0):t470;})()});
call(e->slot(1,15),Args{lit385,([&](){V t471=get(e->slot(0,0),lit97);return !truth(t471)?V(0.0):t471;})()});
call(e->slot(1,15),Args{lit386,([&](){V t472=get(e->slot(0,0),lit98);return !truth(t472)?V(0.0):t472;})()});
call(e->slot(1,15),Args{lit387,([&](){V t473=get(e->slot(0,0),lit99);return !truth(t473)?V(0.0):t473;})()});
call(e->slot(1,15),Args{lit388,([&](){V t474=get(e->slot(0,0),lit100);return !truth(t474)?V(0.0):t474;})()});
call(e->slot(1,15),Args{lit389,([&](){V t475=get(e->slot(0,0),lit101);return !truth(t475)?V(0.0):t475;})()});
call(e->slot(1,15),Args{lit390,([&](){V t476=get(e->slot(0,0),lit102);return !truth(t476)?V(1.0):t476;})()});
call(e->slot(1,15),Args{lit391,([&](){V t477=get(e->slot(0,0),lit103);return !truth(t477)?V(0.0):t477;})()});
call(e->slot(1,15),Args{lit392,([&](){V t478=get(e->slot(0,0),lit99);return !truth(t478)?V(0.0):t478;})()});
call(e->slot(1,15),Args{lit393,([&](){V t479=get(e->slot(0,0),lit100);return !truth(t479)?V(0.0):t479;})()});
call(e->slot(1,15),Args{lit394,([&](){V t480=get(e->slot(0,0),lit101);return !truth(t480)?V(0.0):t480;})()});
call(e->slot(1,15),Args{lit395,([&](){V t481=get(e->slot(0,0),lit62);return !truth(t481)?lit354:t481;})()});
call(e->slot(1,15),Args{lit396,([&](){V t482=get(e->slot(0,0),lit85);return !truth(t482)?V(0.0):t482;})()});
call(e->slot(1,15),Args{lit397,([&](){V t483=get(e->slot(0,0),lit91);return !truth(t483)?V(0.0):t483;})()});
call(e->slot(1,15),Args{lit398,([&](){V t484=get(e->slot(0,0),lit87);return !truth(t484)?V(0.0):t484;})()});
call(e->slot(1,15),Args{lit399,([&](){V t485=get(e->slot(0,0),lit88);return !truth(t485)?V(0.0):t485;})()});
call(e->slot(1,15),Args{lit400,([&](){V t486=get(e->slot(0,0),lit89);return !truth(t486)?V(0.0):t486;})()});
call(e->slot(1,15),Args{lit401,([&](){V t487=get(e->slot(0,0),lit90);return !truth(t487)?V(0.0):t487;})()});
call(e->slot(1,15),Args{lit402,([&](){V t488=get(e->slot(0,0),lit104);return !truth(t488)?V(0.0):t488;})()});
call(e->slot(1,15),Args{lit403,([&](){V t489=get(e->slot(0,0),lit105);return !truth(t489)?lit354:t489;})()});
call(e->slot(1,15),Args{lit404,([&](){V t490=get(e->slot(0,0),lit106);return !truth(t490)?V(0.0):t490;})()});
call(e->slot(1,15),Args{lit405,([&](){V t491=get(e->slot(0,0),lit107);return !truth(t491)?V(0.0):t491;})()});
call(e->slot(1,15),Args{lit406,([&](){V t492=get(e->slot(0,0),lit108);return !truth(t492)?V(0.0):t492;})()});
call(e->slot(1,15),Args{lit407,([&](){V t493=get(e->slot(0,0),lit109);return !truth(t493)?V(0.0):t493;})()});
call(e->slot(1,15),Args{lit408,([&](){V t494=([&](){V t495=get(e->slot(0,0),lit66);return truth(t495)?V(1.0):t495;})();return !truth(t494)?V(0.0):t494;})()});
if(truth(V(!truth(get(e->slot(0,0),lit123))))){return Args{};
}
call(e->slot(1,15),Args{lit409,([&](){V t496=([&](){V t497=get(e->slot(0,0),lit110);return truth(t497)?V(1.0):t497;})();return !truth(t496)?V(0.0):t496;})()});
call(e->slot(1,15),Args{lit410,([&](){V t498=([&](){V t499=get(e->slot(0,0),lit111);return truth(t499)?V(1.0):t499;})();return !truth(t498)?V(0.0):t498;})()});
call(e->slot(1,15),Args{lit411,([&](){V t500=([&](){V t501=get(e->slot(0,0),lit112);return truth(t501)?V(1.0):t501;})();return !truth(t500)?V(0.0):t500;})()});
call(e->slot(1,15),Args{lit412,([&](){V t502=([&](){V t503=get(e->slot(0,0),lit113);return truth(t503)?V(1.0):t503;})();return !truth(t502)?V(0.0):t502;})()});
call(e->slot(1,15),Args{lit413,([&](){V t504=([&](){V t505=get(e->slot(0,0),lit114);return truth(t505)?V(1.0):t505;})();return !truth(t504)?V(0.0):t504;})()});
call(e->slot(1,15),Args{lit414,([&](){V t506=([&](){V t507=get(e->slot(0,0),lit115);return truth(t507)?V(1.0):t507;})();return !truth(t506)?V(0.0):t506;})()});
call(e->slot(1,15),Args{lit415,([&](){V t508=([&](){V t509=get(e->slot(0,0),lit116);return truth(t509)?V(1.0):t509;})();return !truth(t508)?V(0.0):t508;})()});
call(e->slot(1,15),Args{lit416,([&](){V t510=([&](){V t511=get(e->slot(0,0),lit117);return truth(t511)?V(1.0):t511;})();return !truth(t510)?V(0.0):t510;})()});
call(e->slot(1,15),Args{lit417,([&](){V t512=([&](){V t513=get(e->slot(0,0),lit118);return truth(t513)?V(1.0):t513;})();return !truth(t512)?V(0.0):t512;})()});
call(e->slot(1,15),Args{lit418,([&](){V t514=([&](){V t515=get(e->slot(0,0),lit119);return truth(t515)?V(1.0):t515;})();return !truth(t514)?V(0.0):t514;})()});
call(e->slot(1,15),Args{lit419,([&](){V t516=([&](){V t517=get(e->slot(0,0),lit120);return truth(t517)?V(1.0):t517;})();return !truth(t516)?V(0.0):t516;})()});
call(e->slot(1,15),Args{lit420,([&](){V t518=([&](){V t519=get(e->slot(0,0),lit121);return truth(t519)?V(1.0):t519;})();return !truth(t518)?V(0.0):t518;})()});
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t520=num(V(0.0)),t521=num(V(3.0)),t522=num(V(1.0));for(double t523=t520;(t522>0?t523<=t521:t523>=t521);t523+=t522){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t523);call(e->slot(2,37),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit61),lit124),e->slot(0,0))});
}}
call(e->slot(1,38),Args{});
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t524=get(e->slot(1,1),lit61);e->slot(0,0)=std::move(t524);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit110)};V t525=V(false);refs[0].put(std::move(t525));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit111)};V t526=V(false);refs[0].put(std::move(t526));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit112)};V t527=V(false);refs[0].put(std::move(t527));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit113)};V t528=V(false);refs[0].put(std::move(t528));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit114)};V t529=V(false);refs[0].put(std::move(t529));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit115)};V t530=V(false);refs[0].put(std::move(t530));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit116)};V t531=V(false);refs[0].put(std::move(t531));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit117)};V t532=V(false);refs[0].put(std::move(t532));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit118)};V t533=V(false);refs[0].put(std::move(t533));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit119)};V t534=V(false);refs[0].put(std::move(t534));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit120)};V t535=V(false);refs[0].put(std::move(t535));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit121)};V t536=V(false);refs[0].put(std::move(t536));}
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t537=get(e->slot(1,1),lit61);e->slot(0,1)=std::move(t537);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit67)};V t538=first(call(e->slot(1,21),Args{e->slot(0,0)}));refs[0].put(std::move(t538));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit68)};V t539=first(call(e->slot(1,5),Args{first(call(e->slot(1,23),Args{e->slot(0,0),lit68,([&](){V t540=get(e->slot(0,1),lit68);return !truth(t540)?V(0.0):t540;})(),lit421,lit422})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t539));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit69)};V t541=first(call(e->slot(1,5),Args{first(call(e->slot(1,23),Args{e->slot(0,0),lit69,([&](){V t542=get(e->slot(0,1),lit69);return !truth(t542)?V(0.0):t542;})(),lit423,lit424,lit425})),V(0.0),V(1.0)}));refs[0].put(std::move(t541));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit70)};V t543=first(call(e->slot(1,5),Args{first(call(e->slot(1,23),Args{e->slot(0,0),lit70,([&](){V t544=get(e->slot(0,1),lit70);return !truth(t544)?V(0.0):t544;})(),lit426,lit427})),V(0.0),V(1.0)}));refs[0].put(std::move(t543));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit71)};V t545=first(call(e->slot(1,5),Args{first(call(e->slot(1,23),Args{e->slot(0,0),lit71,([&](){V t546=get(e->slot(0,1),lit71);return !truth(t546)?V(0.0):t546;})(),lit428,lit429})),V(0.0),V(1.0)}));refs[0].put(std::move(t545));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit72)};V t547=first(call(e->slot(1,22),Args{e->slot(0,0)}));refs[0].put(std::move(t547));}
return Args{};});
Ref(e->slot(0,1),lit430).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit62)};V t548=lit63;refs[0].put(std::move(t548));}
call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit431).put(native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t549=get(e->slot(1,1),lit61);e->slot(0,3)=std::move(t549);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit64)};V t550=add(([&](){V t551=get(e->slot(0,3),lit64);return !truth(t551)?V(0.0):t551;})(),V(1.0));refs[0].put(std::move(t550));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t552=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t552));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(0,3),lit62)};V t553=lit432;refs[0].put(std::move(t553));}
call(e->slot(1,39),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t554=first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit5),lit58),get(get(e->slot(1,1),lit5),lit59)}));refs[0].put(std::move(t554));}
call(e->slot(1,17),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t555=first(call(e->slot(1,18),Args{}));refs[0].put(std::move(t555));}
}
{V t556=first(call(e->slot(1,19),Args{e->slot(0,1)}));e->slot(0,4)=std::move(t556);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit65)};V t557=e->slot(0,4);refs[0].put(std::move(t557));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit66)};V t558=V(!truth(e->slot(0,4)));refs[0].put(std::move(t558));}
call(e->slot(1,40),Args{});
call(e->slot(1,41),Args{e->slot(0,1)});
{double t559=num(V(0.0)),t560=num(V(3.0)),t561=num(V(1.0));for(double t562=t559;(t561>0?t562<=t560:t562>=t560);t562+=t561){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t562);{V t563=V();e->slot(0,1)=std::move(t563);}
if(truth(e->slot(1,4))){{std::array<Ref,1> refs{Ref(e,0,1)};V t564=first(call(e->slot(2,20),Args{e->slot(1,1),e->slot(0,0)}));refs[0].put(std::move(t564));}
}
call(e->slot(2,31),Args{e->slot(0,0),e->slot(0,1)});
}}
call(e->slot(1,36),Args{e->slot(0,0)});
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,3),lit62)};V t565=lit433;refs[0].put(std::move(t565));}
}else if(truth(V(!truth(e->slot(0,4))))){{std::array<Ref,1> refs{Ref(e->slot(0,3),lit62)};V t566=lit434;refs[0].put(std::move(t566));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,3),lit62)};V t567=lit435;refs[0].put(std::move(t567));}
}

call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit436).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t568=get(get(e->slot(1,1),lit61),lit85);return !truth(t568)?V(0.0):t568;})()};
return Args{};}));
Ref(e->slot(0,1),lit437).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t569=get(get(e->slot(1,1),lit61),lit87);return !truth(t569)?V(0.0):t569;})()};
return Args{};}));
Ref(e->slot(0,1),lit438).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t570=get(get(e->slot(1,1),lit61),lit88);return !truth(t570)?V(0.0):t570;})()};
return Args{};}));
Ref(e->slot(0,1),lit439).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t571=get(get(e->slot(1,1),lit61),lit90);return !truth(t571)?V(0.0):t571;})()};
return Args{};}));
Ref(e->slot(0,1),lit440).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t572=get(get(e->slot(1,1),lit61),lit91);return !truth(t572)?V(0.0):t572;})()};
return Args{};}));
Ref(e->slot(0,1),lit441).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t573=get(get(e->slot(1,1),lit61),lit104);return !truth(t573)?V(0.0):t573;})(),([&](){V t574=get(get(e->slot(1,1),lit61),lit105);return !truth(t574)?lit354:t574;})()};
return Args{};}));
Ref(e->slot(0,1),lit442).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t575=get(get(get(e->slot(1,1),lit61),lit124),e->slot(0,0));e->slot(0,1)=std::move(t575);}
return Args{([&](){V t576=([&](){V t577=e->slot(0,1);return truth(t577)?([&](){V t578=get(e->slot(0,1),lit162);return !truth(t578)?V(0.0):t578;})():t577;})();return !truth(t576)?V(0.0):t576;})()};
return Args{};}));
Ref(e->slot(0,1),lit443).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit61)};
}
return Args{get(get(get(e->slot(1,1),lit61),lit124),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit444).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t579=get(e->slot(1,1),lit61);e->slot(0,0)=std::move(t579);}
return call(get(e->get("string"),lit445),Args{concat(lit446,concat(lit447,concat(lit448,concat(lit449,concat(lit450,concat(lit451,concat(lit452,concat(lit453,lit454)))))))),first(call(e->get("tostring"),Args{get(e->slot(0,0),lit62)})),([&](){V t580=get(e->slot(0,0),lit64);return !truth(t580)?V(0.0):t580;})(),first(call(e->get("tostring"),Args{get(e->slot(0,0),lit105)})),([&](){V t581=get(e->slot(0,0),lit85);return !truth(t581)?V(0.0):t581;})(),([&](){V t582=get(e->slot(0,0),lit91);return !truth(t582)?V(0.0):t582;})(),([&](){V t583=get(e->slot(0,0),lit86);return !truth(t583)?V(0.0):t583;})(),([&](){V t584=get(e->slot(0,0),lit90);return !truth(t584)?V(0.0):t584;})(),([&](){V t585=get(e->slot(0,0),lit87);return !truth(t585)?V(0.0):t585;})(),([&](){V t586=get(e->slot(0,0),lit88);return !truth(t586)?V(0.0):t586;})(),([&](){V t587=get(e->slot(0,0),lit89);return !truth(t587)?V(0.0):t587;})(),([&](){V t588=get(e->slot(0,0),lit81);return !truth(t588)?V(0.0):t588;})(),([&](){V t589=get(e->slot(0,0),lit82);return !truth(t589)?V(0.0):t589;})(),([&](){V t590=get(e->slot(0,0),lit77);return !truth(t590)?V(0.0):t590;})(),([&](){V t591=get(e->slot(0,0),lit78);return !truth(t591)?V(0.0):t591;})(),([&](){V t592=get(e->slot(0,0),lit72);return !truth(t592)?V(0.0):t592;})(),([&](){V t593=get(e->slot(0,0),lit83);return !truth(t593)?V(0.0):t593;})(),([&](){V t594=get(e->slot(0,0),lit84);return !truth(t594)?V(0.0):t594;})(),([&](){V t595=get(e->slot(0,0),lit92);return !truth(t595)?V(0.0):t595;})(),([&](){V t596=get(e->slot(0,0),lit93);return !truth(t596)?V(0.0):t596;})(),([&](){V t597=get(e->slot(0,0),lit94);return !truth(t597)?V(0.0):t597;})(),([&](){V t598=get(e->slot(0,0),lit95);return !truth(t598)?V(0.0):t598;})(),([&](){V t599=get(e->slot(0,0),lit96);return !truth(t599)?V(0.0):t599;})(),([&](){V t600=get(e->slot(0,0),lit97);return !truth(t600)?V(0.0):t600;})(),([&](){V t601=([&](){V t602=get(e->slot(0,0),lit66);return truth(t602)?lit455:t602;})();return !truth(t601)?lit456:t601;})(),([&](){V t603=get(e->slot(0,0),lit98);return !truth(t603)?V(0.0):t603;})(),([&](){V t604=get(e->slot(0,0),lit99);return !truth(t604)?V(0.0):t604;})(),([&](){V t605=get(e->slot(0,0),lit100);return !truth(t605)?V(0.0):t605;})(),([&](){V t606=get(e->slot(0,0),lit101);return !truth(t606)?V(0.0):t606;})(),([&](){V t607=([&](){V t608=get(e->slot(0,0),lit110);return truth(t608)?lit457:t608;})();return !truth(t607)?lit137:t607;})(),([&](){V t609=([&](){V t610=get(e->slot(0,0),lit111);return truth(t610)?lit457:t610;})();return !truth(t609)?lit137:t609;})(),([&](){V t611=([&](){V t612=get(e->slot(0,0),lit112);return truth(t612)?lit457:t612;})();return !truth(t611)?lit137:t611;})(),([&](){V t613=([&](){V t614=get(e->slot(0,0),lit113);return truth(t614)?lit457:t614;})();return !truth(t613)?lit137:t613;})(),([&](){V t615=([&](){V t616=get(e->slot(0,0),lit114);return truth(t616)?lit457:t616;})();return !truth(t615)?lit137:t615;})(),([&](){V t617=([&](){V t618=get(e->slot(0,0),lit116);return truth(t618)?lit457:t618;})();return !truth(t617)?lit137:t617;})(),([&](){V t619=([&](){V t620=get(e->slot(0,0),lit118);return truth(t620)?lit457:t620;})();return !truth(t619)?lit137:t619;})(),([&](){V t621=([&](){V t622=get(e->slot(0,0),lit119);return truth(t622)?lit457:t622;})();return !truth(t621)?lit137:t621;})(),([&](){V t623=([&](){V t624=get(e->slot(0,0),lit120);return truth(t624)?lit457:t624;})();return !truth(t623)?lit137:t623;})(),([&](){V t625=([&](){V t626=get(e->slot(0,0),lit121);return truth(t626)?lit457:t626;})();return !truth(t625)?lit137:t625;})()});
return Args{};}));
Ref(e->slot(0,1),lit458).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(([&](){V t627=V(!truth(e->get("ui")));return !truth(t627)?V(!truth(get(e->get("ui"),lit459))):t627;})())){return Args{};
}
call(get(e->get("ui"),lit459),Args{lit460});
call(get(e->get("ui"),lit459),call(get(e->slot(1,1),lit444),Args{}));
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

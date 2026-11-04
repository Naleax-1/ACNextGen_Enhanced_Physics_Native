// Generated native C++ from pinned tire_hop.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("buildTau");
static const V lit7("decayTau");
static const V lit8("oscTau");
static const V lit9("oscDamp");
static const V lit10("oscRate");
static const V lit11("stickSlipLow");
static const V lit12("stickSlipHigh");
static const V lit13("slipFull");
static const V lit14("slipSlopeGain");
static const V lit15("slipTransitionGain");
static const V lit16("baseVerticalDamping");
static const V lit17("baseLongitudinalStiffness");
static const V lit18("baseGeometryPhi");
static const V lit19("driveTorqueGain");
static const V lit20("drivetrainInputContract");
static const V lit21("original");
static const V lit22("brakeTorqueGain");
static const V lit23("muSlopeBase");
static const V lit24("muSlopeSharpness");
static const V lit25("stabilityCritical");
static const V lit26("instabilityGain");
static const V lit27("driveGain");
static const V lit28("brakeGain");
static const V lit29("lsdGain");
static const V lit30("contactGain");
static const V lit31("loadNormGain");
static const V lit32("bodyFlexGain");
static const V lit33("bodyTorsionGain");
static const V lit34("bodyDampingSuppress");
static const V lit35("damperSuppressGain");
static const V lit36("springSuppressGain");
static const V lit37("drivetrainTorqueGain");
static const V lit38("shaftTwistGain");
static const V lit39("driveLashGain");
static const V lit40("lsdDiffGain");
static const V lit41("contactLossGain");
static const V lit42("responseEnergyGain");
static const V lit43("memoryGain");
static const V lit44("tireLimitGain");
static const V lit45("tireGripSuppressGain");
static const V lit46("armToePhiGain");
static const V lit47("armCamberPhiGain");
static const V lit48("complianceDelayGain");
static const V lit49("carcassEnergyGain");
static const V lit50("carcassDelayGain");
static const V lit51("roadShockGain");
static const V lit52("loadPathLossGain");
static const V lit53("brakeLockGain");
static const V lit54("hopForceGain");
static const V lit55("loadPulseGain");
static const V lit56("contactDropGain");
static const V lit57("maxHop");
static const V lit58("maxLoadPulse");
static const V lit59("maxVerticalKick");
static const V lit60("minSpeedKmh");
static const V lit61("lowSpeedBoostKmh");
static const V lit62("minLoad");
static const V lit63("loadRef");
static const V lit64("maxLoad");
static const V lit65("debugStoreInterval");
static const V lit66("energy");
static const V lit67("osc");
static const V lit68("oscVel");
static const V lit69("hop");
static const V lit70("loadPulse");
static const V lit71("verticalKick");
static const V lit72("prevSlip");
static const V lit73("slipSlope");
static const V lit74("stickSlip");
static const V lit75("stabilityIndex");
static const V lit76("instability");
static const V lit77("torqueInput");
static const V lit78("geometryPhi");
static const V lit79("load");
static const V lit80("loadNorm");
static const V lit81("loadVelocity");
static const V lit82("contact");
static const V lit83("contactLoss");
static const V lit84("contactEnergy");
static const V lit85("memory");
static const V lit86("tireLimit");
static const V lit87("tireGrip");
static const V lit88("carcassEnergy");
static const V lit89("carcassDelay");
static const V lit90("roadShock");
static const V lit91("loadPathLoss");
static const V lit92("brakeLock");
static const V lit93("armCamber");
static const V lit94("armToe");
static const V lit95("driveTorque");
static const V lit96("driveTorqueNm");
static const V lit97("diffInputTorqueNm");
static const V lit98("shaftTwist");
static const V lit99("driveLash");
static const V lit100("lsdLock");
static const V lit101("lsdDiff");
static const V lit102("speedKmh");
static const V lit103("activeCount");
static const V lit104("mode");
static const V lit105("STABLE");
static const V lit106("avgHop");
static const V lit107("avgEnergy");
static const V lit108("avgInstability");
static const V lit109("avgLoadPulse");
static const V lit110("status");
static const V lit111("INIT");
static const V lit112("updateCount");
static const V lit113("wheelsValid");
static const V lit114("contactLinked");
static const V lit115("memoryLinked");
static const V lit116("dynamicsLinked");
static const V lit117("armLinked");
static const V lit118("drivetrainLinked");
static const V lit119("lsdLinked");
static const V lit120("carcassLinked");
static const V lit121("roadLinked");
static const V lit122("loadPathLinked");
static const V lit123("brakeLinked");
static const V lit124("storeOnly");
static const V lit125("debugStoreTimer");
static const V lit126("debugStoreNow");
static const V lit127("state");
static const V lit128("debug");
static const V lit129("huge");
static const V lit130("safeLoadRaw");
static const V lit131("safeStore");
static const V lit132("safeField");
static const V lit133("getCar");
static const V lit134("wheels");
static const V lit135("abs");
static const V lit136("ngp_speed_kmh");
static const V lit137("ngp_thermal_speed");
static const V lit138("gas");
static const V lit139("ngp_input_throttle");
static const V lit140("brake");
static const V lit141("ngp_input_brake");
static const V lit142("loadK");
static const V lit143("ngp_wheel_load_");
static const V lit144("ngp_load_wheel_");
static const V lit145("ngp_contact_load_");
static const V lit146("ngp_tire_carcass_load_");
static const V lit147("ngp_tire_force_load_");
static const V lit148("ngp_tdyn_load_");
static const V lit149("ngp_tire_load_");
static const V lit150("ngp_tire_load_input_");
static const V lit151("ngp_load_path_wheel_load_");
static const V lit152("ngp_lp_load_");
static const V lit153("ngp_dlt_load_");
static const V lit154("max");
static const V lit155("ngp_wheel_load_norm_");
static const V lit156("ngp_brake_load_norm_");
static const V lit157("ngp_tire_force_effective_slip_ratio_");
static const V lit158("ngp_tdyn_effective_slip_ratio_");
static const V lit159("ngp_tire_effective_slip_ratio_");
static const V lit160("ngp_tire_slip_ratio_");
static const V lit161("ngp_slip_ratio_");
static const V lit162("ngp_filtered_slip_ratio_");
static const V lit163("ngp_cp_slip_ratio_");
static const V lit164("ngp_tc_slip_ratio_");
static const V lit165("ngp_tire_force_effective_slip_angle_");
static const V lit166("ngp_tdyn_effective_slip_angle_");
static const V lit167("ngp_tire_effective_slip_angle_");
static const V lit168("ngp_tire_slip_angle_");
static const V lit169("ngp_slip_angle_");
static const V lit170("ngp_filtered_slip_angle_");
static const V lit171("ngp_cp_slip_angle_");
static const V lit172("ngp_tc_slip_angle_");
static const V lit173("slipRatio");
static const V lit174("slipAngle");
static const V lit175("ngp_tire_force_combined_slip_");
static const V lit176("ngp_tdyn_combined_slip_");
static const V lit177("ngp_tire_dynamics_combined_slip_");
static const V lit178("ngp_tire_combined_slip_");
static const V lit179("ngp_contact_combined_slip_");
static const V lit180("ngp_tire_carcass_combined_slip_");
static const V lit181("ngp_recovery_slip_");
static const V lit182("ngp_tire_force_slip_energy_");
static const V lit183("ngp_tdyn_slip_energy_");
static const V lit184("ngp_tire_dynamics_slip_energy_");
static const V lit185("ngp_tire_slip_energy_");
static const V lit186("ngp_tc_energy_");
static const V lit187("ngp_tcr_energy_push_");
static const V lit188("pi");
static const V lit189("sqrt");
static const V lit190("ngp_contact_quality_");
static const V lit191("ngp_tire_contact_quality_");
static const V lit192("ngp_tcr_quality_");
static const V lit193("ngp_tc_contact_");
static const V lit194("ngp_tire_contact_");
static const V lit195("ngp_carcass_support_");
static const V lit196("ngp_carcass_grip_gate_");
static const V lit197("ngp_contact_loss_");
static const V lit198("ngp_tire_contact_loss_");
static const V lit199("ngp_tcr_contact_loss_");
static const V lit200("ngp_contact_hop_drop_");
static const V lit201("min");
static const V lit202("ngp_tire_memory_");
static const V lit203("ngp_rubber_memory_");
static const V lit204("ngp_memory_");
static const V lit205("ngp_carcass_history_stress_");
static const V lit206("ngp_slip_slide_memory_");
static const V lit207("ngp_slide_memory_");
static const V lit208("ngp_tire_limit_");
static const V lit209("ngp_tyre_limit_");
static const V lit210("ngp_tdyn_limit_");
static const V lit211("ngp_tire_grip_");
static const V lit212("ngp_tyre_grip_");
static const V lit213("ngp_tdyn_effective_grip_");
static const V lit214("ngp_tire_effective_grip_");
static const V lit215("ngp_tcr_effective_grip_");
static const V lit216("ngp_tire_sidewall_energy_");
static const V lit217("ngp_sidewall_energy_");
static const V lit218("ngp_tire_carcass_avg_energy");
static const V lit219("ngp_carcass_hysteresis_");
static const V lit220("ngp_carcass_vertical_norm_");
static const V lit221("ngp_tire_contact_delay_");
static const V lit222("ngp_contact_delay_");
static const V lit223("ngp_carcass_recovery_bias_");
static const V lit224("ngp_road_impact_");
static const V lit225("ngp_road_input_severity_");
static const V lit226("ngp_rii_severity_");
static const V lit227("ngp_rbi_wheel_input_");
static const V lit228("ngp_body_road_wheel_input_");
static const V lit229("ngp_load_path_loss_");
static const V lit230("ngp_lp_loss_");
static const V lit231("ngp_load_path_force_leak_");
static const V lit232("ngp_rii_path_loss_");
static const V lit233("ngp_brake_lock_");
static const V lit234("ngp_brake_lock_state_");
static const V lit235("ngp_control_arm_camber_");
static const V lit236("ngp_arm_camber_");
static const V lit237("ngp_compliance_virtual_camber_");
static const V lit238("ngp_virtual_camber_");
static const V lit239("ngp_uc_camber_");
static const V lit240("ngp_control_arm_toe_");
static const V lit241("ngp_arm_toe_");
static const V lit242("ngp_compliance_virtual_toe_");
static const V lit243("ngp_virtual_toe_");
static const V lit244("ngp_uc_toe_");
static const V lit245("single_drivetrain_nm_v1");
static const V lit246("Invalid hop drivetrain input contract");
static const V lit247("ngp_drive_torque_normalized_from_nm");
static const V lit248("ngp_drive_torque");
static const V lit249("ngp_drivetrain_torque");
static const V lit250("ngp_dt_torque");
static const V lit251("ngp_drive_torque_nm");
static const V lit252("ngp_wheel_drive_torque_nm");
static const V lit253("ngp_drivetrain_torque_nm");
static const V lit254("ngp_diff_input_torque_nm");
static const V lit255("ngp_lsd_input_torque_nm");
static const V lit256("number");
static const V lit257("Hop drivetrain Nm input unavailable");
static const V lit258("drivetrainNmSource");
static const V lit259("legacy_aliases");
static const V lit260("ngp_shaft_twist");
static const V lit261("ngp_windup_shaft_twist");
static const V lit262("ngp_driveline_shaft_twist");
static const V lit263("ngp_drive_lash");
static const V lit264("ngp_windup_lash");
static const V lit265("ngp_driveline_lash");
static const V lit266("ngp_lsd_lock");
static const V lit267("ngp_diff_lock");
static const V lit268("ngp_lsd_diff");
static const V lit269("ngp_diff_diff");
static const V lit270("ngp_thermal_lsd_diff");
static const V lit271("ngp_body_flex_factor");
static const V lit272("ngp_body_torsion_factor");
static const V lit273("ngp_body_damping_factor");
static const V lit274("ngp_damper_coeff_scale_");
static const V lit275("ngp_susp_int_damper_");
static const V lit276("ngp_spring_rate_scale_");
static const V lit277("ngp_susp_int_spring_");
static const V lit278("ngp_damper_");
static const V lit279("ngp_susp_damper_");
static const V lit280("ngp_body_rigidity");
static const V lit281("ngp_susp_contact_input_");
static const V lit282("ngp_tirehop_");
static const V lit283("ngp_tire_hop_");
static const V lit284("ngp_tire_hop_energy_");
static const V lit285("ngp_tire_hop_loadpulse_");
static const V lit286("ngp_tire_hop_kick_");
static const V lit287("ngp_susp_tire_hop_input_");
static const V lit288("ngp_susp_tire_hop_load_");
static const V lit289("ngp_thop_hop_");
static const V lit290("ngp_thop_energy_");
static const V lit291("ngp_thop_loadpulse_");
static const V lit292("ngp_thop_kick_");
static const V lit293("ngp_hop_risk_");
static const V lit294("ngp_susp_road_impulse_");
static const V lit295("ngp_tire_hop_instability_");
static const V lit296("ngp_tire_hop_stability_index_");
static const V lit297("ngp_tire_hop_stickslip_");
static const V lit298("ngp_tire_hop_slipslope_");
static const V lit299("ngp_tire_hop_torque_");
static const V lit300("ngp_tire_hop_phi_");
static const V lit301("ngp_tire_hop_mode_");
static const V lit302("ngp_tire_hop_contact_loss_");
static const V lit303("ngp_tire_hop_memory_");
static const V lit304("ngp_tire_hop_lsd_");
static const V lit305("ngp_tire_hop_load_");
static const V lit306("ngp_tire_hop_load_norm_");
static const V lit307("ngp_tire_hop_load_velocity_");
static const V lit308("ngp_tire_hop_road_shock_");
static const V lit309("ngp_tire_hop_carcass_energy_");
static const V lit310("ngp_tire_response_delay");
static const V lit311("ngp_tyre_response_delay");
static const V lit312("HOP");
static const V lit313("STICK-SLIP");
static const V lit314("BUILD");
static const V lit315("ngp_tire_hop_avg");
static const V lit316("ngp_tire_hop_avg_energy");
static const V lit317("ngp_tire_hop_avg_instability");
static const V lit318("ngp_tire_hop_status");
static const V lit319("ngp_tire_hop_update_count");
static const V lit320("ngp_tire_hop_wheels_valid");
static const V lit321("ngp_thop_avg");
static const V lit322("ngp_thop_avg_energy");
static const V lit323("ngp_thop_avg_instability");
static const V lit324("ngp_thop_avg_loadpulse");
static const V lit325("ngp_thop_max_hop");
static const V lit326("ngp_thop_max_loadpulse");
static const V lit327("ngp_thop_max_kick");
static const V lit328("ngp_thop_active_count");
static const V lit329("ngp_tire_hop_contact_linked");
static const V lit330("ngp_tire_hop_memory_linked");
static const V lit331("ngp_tire_hop_dynamics_linked");
static const V lit332("ngp_tire_hop_arm_linked");
static const V lit333("ngp_tire_hop_drivetrain_linked");
static const V lit334("ngp_tire_hop_lsd_linked");
static const V lit335("ngp_tire_hop_carcass_linked");
static const V lit336("ngp_tire_hop_road_linked");
static const V lit337("ngp_tire_hop_load_path_linked");
static const V lit338("ngp_tire_hop_brake_linked");
static const V lit339("ngp_tire_hop_store_only");
static const V lit340("ngp_tire_hop_speed_kmh");
static const V lit341("init");
static const V lit342("update");
static const V lit343("BAD DT");
static const V lit344("RUNNING");
static const V lit345("NO WHEELS");
static const V lit346("STORE ONLY");
static const V lit347("getHop");
static const V lit348("getEnergy");
static const V lit349("getLoadPulse");
static const V lit350("getVerticalKick");
static const V lit351("getInstability");
static const V lit352("getState");
static const V lit353("UNKNOWN");
static const V lit354("debugStr");
static const V lit355("format");
static const V lit356("%s Hop %.3f E %.3f LP %.0f SI %.2f Inst %.2f SS %.2f Tq %.0f %s");
static const V lit357("Status %s / Count %.0f / AvgHop %.3f AvgE %.3f AvgInst %.3f\n");
static const V lit358("Pulse Avg %.0f Max %.0f Kick %.2f Active %.0f\n");
static const V lit359("Links CT:%s MEM:%s TD:%s ARM:%s DT:%s LSD:%s CAR:%s ROAD:%s");
static const V lit360("OK");
static const V lit361("NIL");
static const V lit362("drawDebug");
static const V lit363("text");
static const V lit364("=== TIRE HOP / WHEEL HOP ===");
V load_tire_hop(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(35);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(0.03));set(z,lit7,V(0.12));set(z,lit8,V(0.02));set(z,lit9,V(0.88));set(z,lit10,V(42.0));set(z,lit11,V(0.055));set(z,lit12,V(0.18));set(z,lit13,V(0.42));set(z,lit14,V(2.2));set(z,lit15,V(1.8));set(z,lit16,V(8500.0));set(z,lit17,V(42000.0));set(z,lit18,V(0.115));set(z,lit19,V(5200.0));set(z,lit20,lit21);set(z,lit22,V(4600.0));set(z,lit23,V(0.18));set(z,lit24,V(1.35));set(z,lit25,V(1.0));set(z,lit26,V(1.25));set(z,lit27,V(0.95));set(z,lit28,V(0.75));set(z,lit29,V(0.3));set(z,lit30,V(0.7));set(z,lit31,V(0.35));set(z,lit32,V(0.28));set(z,lit33,V(0.25));set(z,lit34,V(0.22));set(z,lit35,V(0.2));set(z,lit36,V(0.08));set(z,lit37,V(0.32));set(z,lit38,V(0.14));set(z,lit39,V(0.1));set(z,lit40,V(0.08));set(z,lit41,V(0.28));set(z,lit42,V(0.2));set(z,lit43,V(0.16));set(z,lit44,V(0.18));set(z,lit45,V(0.12));set(z,lit46,V(0.15));set(z,lit47,V(0.1));set(z,lit48,V(0.16));set(z,lit49,V(0.18));set(z,lit50,V(0.1));set(z,lit51,V(0.18));set(z,lit52,V(0.12));set(z,lit53,V(0.12));set(z,lit54,V(1650.0));set(z,lit55,V(1350.0));set(z,lit56,V(0.22));set(z,lit57,V(1.0));set(z,lit58,V(2600.0));set(z,lit59,V(1.0));set(z,lit60,V(1.0));set(z,lit61,V(35.0));set(z,lit62,V(300.0));set(z,lit63,V(3500.0));set(z,lit64,V(12000.0));set(z,lit65,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(99.0));set(z,V(1.0),V(99.0));set(z,V(2.0),V(99.0));set(z,V(3.0),V(99.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit78,([&](){V z=table();set(z,V(0.0),V(0.115));set(z,V(1.0),V(0.115));set(z,V(2.0),V(0.115));set(z,V(3.0),V(0.115));return z;})());set(z,lit79,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit80,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit81,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit82,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit83,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit84,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit85,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit86,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit87,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit88,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit89,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit90,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit91,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit92,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit93,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit94,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,([&](){V z=table();set(z,V(0.0),lit105);set(z,V(1.0),lit105);set(z,V(2.0),lit105);set(z,V(3.0),lit105);return z;})());set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit110,lit111);set(z,lit112,V(0.0));set(z,lit113,V(false));set(z,lit114,V(false));set(z,lit115,V(false));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,V(false));set(z,lit121,V(false));set(z,lit122,V(false));set(z,lit123,V(false));set(z,lit124,V(false));set(z,lit125,V(999.0));set(z,lit126,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t8=([&](){V t9=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t9)?V(0.0):t9;})();refs[0].put(std::move(t8));}
if(truth(ne(e->slot(0,0),e->slot(0,0)))){return Args{e->slot(0,1)};
}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t10=([&](){V t11=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t11)?V(0.0):t11;})();refs[0].put(std::move(t10));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(e->slot(0,0)))};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t12=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t12);}
if(truth(([&](){V t13=([&](){V t14=([&](){V t15=eq(e->slot(0,2),V());return !truth(t15)?ne(e->slot(0,2),e->slot(0,2)):t15;})();return !truth(t14)?eq(e->slot(0,2),get(e->get("math"),lit129)):t14;})();return !truth(t13)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit129)))):t13;})())){return Args{([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()};
}
return Args{e->slot(0,2)};
return Args{};});
{V t17=get(e->slot(0,0),lit130);e->slot(0,7)=std::move(t17);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t18=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t18);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()};
}
return call(e->slot(1,6),Args{e->slot(0,2),([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t21=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t21);}
{double t22=num(V(1.0)),t23=num(length(e->slot(0,1))),t24=num(V(1.0));for(double t25=t22;(t24>0?t25<=t23:t25>=t23);t25+=t24){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t25);{V t26=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t26);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,6),Args{e->slot(0,1),([&](){V t27=e->slot(1,0);return !truth(t27)?V(0.0):t27;})()})),V(true)};
}
}}
return Args{([&](){V t28=e->slot(0,0);return !truth(t28)?V(0.0):t28;})(),V(false)};
return Args{};});
{V t29=get(e->slot(0,0),lit131);e->slot(0,10)=std::move(t29);}
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t30=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t31=first(call(e->slot(1,6),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t32=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t33=first(call(e->slot(1,6),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t33));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
{V t34=get(e->slot(0,0),lit132);e->slot(0,12)=std::move(t34);}
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t35=V(!truth(e->get("ac")));return !truth(t35)?V(!truth(get(e->get("ac"),lit133))):t35;})())){return Args{V()};
}
{Args t36=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit133),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t36,0);e->slot(0,1)=arg(t36,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,12),Args{e->slot(0,0),lit134,V()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t37=first(call(e->slot(1,14),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t37);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
return call(e->slot(1,12),joined(Args{e->slot(0,2),e->slot(0,1)},call(e->slot(1,12),Args{e->slot(0,2),add(e->slot(0,1),V(1.0)),V()})));
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return call(e->slot(1,6),Args{first(call(e->slot(1,12),Args{e->slot(0,0),e->slot(0,1),e->slot(0,2)})),([&](){V t38=e->slot(0,2);return !truth(t38)?V(0.0):t38;})()});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit125)};V t39=add(([&](){V t40=get(e->slot(1,3),lit125);return !truth(t40)?V(0.0):t40;})(),([&](){V t41=e->slot(0,0);return !truth(t41)?V(0.0):t41;})());refs[0].put(std::move(t39));}
if(truth(ge(get(e->slot(1,3),lit125),get(get(e->slot(1,1),lit5),lit65)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit125)};V t42=V(0.0);refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit126)};V t43=V(true);refs[0].put(std::move(t43));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit126)};V t44=V(false);refs[0].put(std::move(t44));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit115)};V t46=V(false);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit117)};V t48=V(false);refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit118)};V t49=V(false);refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit119)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit120)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit121)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit122)};V t53=V(false);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit123)};V t54=V(false);refs[0].put(std::move(t54));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t55=first(call(e->slot(1,6),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit102,V()})),V()}));e->slot(0,1)=std::move(t55);}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1)};
}
{V t56=first(call(e->slot(1,6),Args{V(),V()}));e->slot(0,2)=std::move(t56);}
if(truth(ne(e->slot(0,2),V()))){if(truth(lt(first(call(get(e->get("math"),lit135),Args{e->slot(0,2)})),V(120.0)))){return Args{mul(e->slot(0,2),V(3.6))};
}
return Args{e->slot(0,2)};
}
return call(e->slot(1,8),joined(Args{lit136},call(e->slot(1,8),Args{lit137,V(0.0)})));
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t57=first(call(e->slot(1,6),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit138,V()})),V()}));e->slot(0,1)=std::move(t57);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t58=first(call(e->slot(1,6),Args{V(),V()}));refs[0].put(std::move(t58));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t59=first(call(e->slot(1,8),Args{lit139,V(0.0)}));refs[0].put(std::move(t59));}
}
{V t60=first(call(e->slot(1,6),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit140,V()})),V()}));e->slot(0,2)=std::move(t60);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t61=first(call(e->slot(1,8),Args{lit141,V(0.0)}));refs[0].put(std::move(t61));}
}
return joined(Args{first(call(e->slot(1,4),Args{([&](){V t62=e->slot(0,1);return !truth(t62)?V(0.0):t62;})(),V(0.0),V(1.0)}))},call(e->slot(1,4),Args{([&](){V t63=e->slot(0,2);return !truth(t63)?V(0.0):t63;})(),V(0.0),V(1.0)}));
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t64=V();e->slot(0,3)=std::move(t64);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,0,3)};V t65=first(call(e->slot(1,6),Args{first(call(e->slot(1,12),Args{e->slot(0,1),lit79,V()})),V()}));refs[0].put(std::move(t65));}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t66=first(call(e->slot(1,6),Args{first(call(e->slot(1,12),Args{e->slot(0,1),lit142,V()})),V()}));refs[0].put(std::move(t66));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t67=first(call(e->slot(1,6),Args{V(),V()}));refs[0].put(std::move(t67));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t68=first(call(e->slot(1,6),Args{V(),V()}));refs[0].put(std::move(t68));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t69=first(call(e->slot(1,6),Args{V(),V()}));refs[0].put(std::move(t69));}
}
}
{Args t70=call(e->slot(1,9),Args{V(),concat(lit143,e->slot(0,0)),concat(lit144,e->slot(0,0)),concat(lit145,e->slot(0,0)),concat(lit146,e->slot(0,0)),concat(lit147,e->slot(0,0)),concat(lit148,e->slot(0,0)),concat(lit149,e->slot(0,0)),concat(lit150,e->slot(0,0)),concat(lit151,e->slot(0,0)),concat(lit152,e->slot(0,0))});e->slot(0,4)=arg(t70,0);e->slot(0,5)=arg(t70,1);}
{Args t71=Args{};e->slot(0,6)=arg(t71,0);}
if(truth(([&](){V t72=e->slot(0,5);return truth(t72)?ne(e->slot(0,4),V()):t72;})())){{std::array<Ref,1> refs{Ref(e,0,6)};V t73=e->slot(0,4);refs[0].put(std::move(t73));}
}else if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t74=e->slot(0,3);refs[0].put(std::move(t74));}
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t75=first(call(e->slot(2,7),Args{concat(lit153,e->slot(1,0))}));e->slot(0,0)=std::move(t75);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,5)};V t76=V(true);refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t77=add(get(get(e->slot(2,1),lit5),lit63),first(call(e->slot(2,6),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t77));}
}else{{std::array<Ref,1> refs{Ref(e,1,6)};V t78=([&](){V t79=get(get(e->slot(2,3),lit79),e->slot(1,0));return !truth(t79)?get(get(e->slot(2,1),lit5),lit63):t79;})();refs[0].put(std::move(t78));}
}
}

{std::array<Ref,1> refs{Ref(e,0,6)};V t80=first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0),get(get(e->slot(1,1),lit5),lit64)}));refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t81=divv(sub(e->slot(0,6),([&](){V t82=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t82)?e->slot(0,6):t82;})()),first(call(get(e->get("math"),lit154),Args{e->slot(0,2),V(0.0001)})));refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit79),e->slot(0,0))};V t83=first(call(e->slot(1,11),Args{([&](){V t84=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t84)?e->slot(0,6):t84;})(),e->slot(0,6),V(0.045),e->slot(0,2)}));refs[0].put(std::move(t83));}
{V t85=first(call(e->slot(1,7),Args{concat(lit155,e->slot(0,0))}));e->slot(0,7)=std::move(t85);}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t86=first(call(e->slot(1,7),Args{concat(lit156,e->slot(0,0))}));refs[0].put(std::move(t86));}
}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t87=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,7),V(1.0)})),V(0.0),V(2.5)}));refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e,0,5)};V t88=V(true);refs[0].put(std::move(t88));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t89=first(call(e->slot(1,4),Args{divv(([&](){V t90=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t90)?get(get(e->slot(1,1),lit5),lit63):t90;})(),first(call(get(e->get("math"),lit154),Args{get(get(e->slot(1,1),lit5),lit63),V(1.0)}))),V(0.0),V(2.5)}));refs[0].put(std::move(t89));}
}
if(truth(e->slot(0,5))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit122)};V t91=V(true);refs[0].put(std::move(t91));}
}
return Args{get(get(e->slot(1,3),lit79),e->slot(0,0)),get(get(e->slot(1,3),lit80),e->slot(0,0)),e->slot(0,5)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t92=call(e->slot(1,9),Args{V(),concat(lit157,e->slot(0,0)),concat(lit158,e->slot(0,0)),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0)),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0)),concat(lit163,e->slot(0,0)),concat(lit164,e->slot(0,0))});e->slot(0,2)=arg(t92,0);e->slot(0,3)=arg(t92,1);}
{Args t93=call(e->slot(1,9),Args{V(),concat(lit165,e->slot(0,0)),concat(lit166,e->slot(0,0)),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0)),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0)),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0))});e->slot(0,4)=arg(t93,0);e->slot(0,5)=arg(t93,1);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t94=first(call(e->slot(1,16),Args{e->slot(0,1),lit173,V(0.0)}));refs[0].put(std::move(t94));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t95=first(call(e->slot(1,16),Args{e->slot(0,1),lit174,V(0.0)}));refs[0].put(std::move(t95));}
}
{Args t96=call(e->slot(1,9),Args{V(),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0)),concat(lit178,e->slot(0,0)),concat(lit179,e->slot(0,0)),concat(lit180,e->slot(0,0)),concat(lit181,e->slot(0,0))});e->slot(0,6)=arg(t96,0);e->slot(0,7)=arg(t96,1);}
{Args t97=call(e->slot(1,9),Args{V(),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0)),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0))});e->slot(0,8)=arg(t97,0);e->slot(0,9)=arg(t97,1);}
{V t98=first(call(e->slot(1,5),Args{e->slot(0,4)}));e->slot(0,10)=std::move(t98);}
{Args t99=Args{};e->slot(0,11)=arg(t99,0);}
if(truth(le(e->slot(0,10),get(e->get("math"),lit188)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t100=divv(e->slot(0,10),V(0.174533));refs[0].put(std::move(t100));}
}else{{std::array<Ref,1> refs{Ref(e,0,11)};V t101=divv(e->slot(0,10),V(10.0));refs[0].put(std::move(t101));}
}
{V t102=divv(first(call(e->slot(1,5),Args{e->slot(0,2)})),first(call(get(e->get("math"),lit154),Args{get(get(e->slot(1,1),lit5),lit13),V(0.001)})));e->slot(0,12)=std::move(t102);}
{V t103=first(call(get(e->get("math"),lit189),Args{add(mul(e->slot(0,12),e->slot(0,12)),mul(mul(e->slot(0,11),e->slot(0,11)),V(0.16)))}));e->slot(0,13)=std::move(t103);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t104=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,6),e->slot(0,13)})),V(0.0),V(3.0)}));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e,0,8)};V t105=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),joined(Args{e->slot(0,8)},call(get(e->get("math"),lit154),Args{sub(e->slot(0,6),V(1.0)),V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t105));}
if(truth(([&](){V t106=([&](){V t107=([&](){V t108=e->slot(0,3);return !truth(t108)?e->slot(0,5):t108;})();return !truth(t107)?e->slot(0,7):t107;})();return !truth(t106)?e->slot(0,9):t106;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t109=V(true);refs[0].put(std::move(t109));}
}
return Args{first(call(e->slot(1,5),Args{e->slot(0,2)})),first(call(e->slot(1,5),Args{e->slot(0,4)})),e->slot(0,6),e->slot(0,8)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,27);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t110=call(e->slot(1,9),Args{V(),concat(lit190,e->slot(0,0)),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0)),concat(lit193,e->slot(0,0)),concat(lit194,e->slot(0,0)),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0))});e->slot(0,1)=arg(t110,0);e->slot(0,2)=arg(t110,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t111=V(true);refs[0].put(std::move(t111));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t112=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t112));}
{Args t113=call(e->slot(1,9),Args{V(),concat(lit197,e->slot(0,0)),concat(lit198,e->slot(0,0)),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0))});e->slot(0,3)=arg(t113,0);e->slot(0,4)=arg(t113,1);}
if(truth(e->slot(0,4))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t114=V(true);refs[0].put(std::move(t114));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit83),e->slot(0,0))};V t115=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,3),sub(V(1.0),first(call(get(e->get("math"),lit201),Args{get(get(e->slot(1,3),lit82),e->slot(0,0)),V(1.0)})))})),V(0.0),V(1.0)}));refs[0].put(std::move(t115));}
{Args t116=call(e->slot(1,9),Args{V(),concat(lit187,e->slot(0,0)),concat(lit186,e->slot(0,0)),concat(lit185,e->slot(0,0)),concat(lit183,e->slot(0,0)),concat(lit182,e->slot(0,0))});e->slot(0,5)=arg(t116,0);e->slot(0,6)=arg(t116,1);}
if(truth(e->slot(0,6))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t117=V(true);refs[0].put(std::move(t117));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit84),e->slot(0,0))};V t118=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t118));}
{Args t119=call(e->slot(1,9),Args{V(),concat(lit202,e->slot(0,0)),concat(lit203,e->slot(0,0)),concat(lit204,e->slot(0,0)),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0)),concat(lit207,e->slot(0,0))});e->slot(0,7)=arg(t119,0);e->slot(0,8)=arg(t119,1);}
if(truth(e->slot(0,8))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit115)};V t120=V(true);refs[0].put(std::move(t120));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit85),e->slot(0,0))};V t121=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t121));}
{Args t122=call(e->slot(1,9),Args{V(),concat(lit208,e->slot(0,0)),concat(lit209,e->slot(0,0)),concat(lit210,e->slot(0,0))});e->slot(0,9)=arg(t122,0);e->slot(0,10)=arg(t122,1);}
{Args t123=call(e->slot(1,9),Args{V(),concat(lit211,e->slot(0,0)),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit214,e->slot(0,0)),concat(lit215,e->slot(0,0))});e->slot(0,11)=arg(t123,0);e->slot(0,12)=arg(t123,1);}
if(truth(([&](){V t124=e->slot(0,10);return !truth(t124)?e->slot(0,12):t124;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t125=V(true);refs[0].put(std::move(t125));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit86),e->slot(0,0))};V t126=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,9),V(0.0)})),V(0.0),V(2.0)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit87),e->slot(0,0))};V t127=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,11),V(1.0)})),V(0.0),V(1.25)}));refs[0].put(std::move(t127));}
{Args t128=call(e->slot(1,9),Args{V(),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0)),lit218,concat(lit219,e->slot(0,0)),concat(lit220,e->slot(0,0))});e->slot(0,13)=arg(t128,0);e->slot(0,14)=arg(t128,1);}
{Args t129=call(e->slot(1,9),Args{V(),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0)),concat(lit223,e->slot(0,0))});e->slot(0,15)=arg(t129,0);e->slot(0,16)=arg(t129,1);}
if(truth(([&](){V t130=e->slot(0,14);return !truth(t130)?e->slot(0,16):t130;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit120)};V t131=V(true);refs[0].put(std::move(t131));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit88),e->slot(0,0))};V t132=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,13),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit89),e->slot(0,0))};V t133=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,15),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t133));}
{Args t134=call(e->slot(1,9),Args{V(),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0)),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0)),concat(lit228,e->slot(0,0))});e->slot(0,17)=arg(t134,0);e->slot(0,18)=arg(t134,1);}
if(truth(e->slot(0,18))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit121)};V t135=V(true);refs[0].put(std::move(t135));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit90),e->slot(0,0))};V t136=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,17),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t136));}
{Args t137=call(e->slot(1,9),Args{V(),concat(lit229,e->slot(0,0)),concat(lit230,e->slot(0,0)),concat(lit231,e->slot(0,0)),concat(lit232,e->slot(0,0))});e->slot(0,19)=arg(t137,0);e->slot(0,20)=arg(t137,1);}
if(truth(e->slot(0,20))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit122)};V t138=V(true);refs[0].put(std::move(t138));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit91),e->slot(0,0))};V t139=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,19),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t139));}
{Args t140=call(e->slot(1,9),Args{V(),concat(lit233,e->slot(0,0)),concat(lit234,e->slot(0,0))});e->slot(0,21)=arg(t140,0);e->slot(0,22)=arg(t140,1);}
if(truth(e->slot(0,22))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit123)};V t141=V(true);refs[0].put(std::move(t141));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit92),e->slot(0,0))};V t142=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,21),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t142));}
{Args t143=call(e->slot(1,9),Args{V(),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0)),concat(lit239,e->slot(0,0))});e->slot(0,23)=arg(t143,0);e->slot(0,24)=arg(t143,1);}
{Args t144=call(e->slot(1,9),Args{V(),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0)),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0))});e->slot(0,25)=arg(t144,0);e->slot(0,26)=arg(t144,1);}
if(truth(([&](){V t145=e->slot(0,24);return !truth(t145)?e->slot(0,26):t145;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit117)};V t146=V(true);refs[0].put(std::move(t146));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit93),e->slot(0,0))};V t147=first(call(e->slot(1,6),Args{e->slot(0,23),V(0.0)}));refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit94),e->slot(0,0))};V t148=first(call(e->slot(1,6),Args{e->slot(0,25),V(0.0)}));refs[0].put(std::move(t148));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,15);auto e=&storage;{V t149=get(get(e->slot(1,1),lit5),lit20);e->slot(0,0)=std::move(t149);}
if(truth(([&](){V t150=ne(e->slot(0,0),lit21);return truth(t150)?ne(e->slot(0,0),lit245):t150;})())){call(e->get("error"),Args{lit246});
}
{Args t151=call(e->slot(1,9),Args{V(),lit247,lit248,lit249,lit250});e->slot(0,1)=arg(t151,0);e->slot(0,2)=arg(t151,1);}
{Args t152=call(e->slot(1,9),Args{V(),lit251,lit252,lit253});e->slot(0,3)=arg(t152,0);e->slot(0,4)=arg(t152,1);}
{Args t153=call(e->slot(1,9),Args{V(),lit254,lit255});e->slot(0,5)=arg(t153,0);e->slot(0,6)=arg(t153,1);}
if(truth(eq(e->slot(0,0),lit245))){{std::array<Ref,1> refs{Ref(e,0,5)};V t154=first(call(e->slot(1,7),Args{lit254}));refs[0].put(std::move(t154));}
if(truth(([&](){V t155=([&](){V t156=([&](){V t157=ne(first(call(e->get("type"),Args{e->slot(0,5)})),lit256);return !truth(t157)?ne(e->slot(0,5),e->slot(0,5)):t157;})();return !truth(t156)?eq(e->slot(0,5),get(e->get("math"),lit129)):t156;})();return !truth(t155)?eq(e->slot(0,5),V(-num(get(e->get("math"),lit129)))):t155;})())){call(e->get("error"),Args{lit257});
}
{std::array<Ref,1> refs{Ref(e,0,3)};V t158=V(0.0);refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t159=V();refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t160=lit254;refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit258)};V t161=lit254;refs[0].put(std::move(t161));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit258)};V t162=lit259;refs[0].put(std::move(t162));}
}
{Args t163=call(e->slot(1,9),Args{V(),lit260,lit261,lit262});e->slot(0,7)=arg(t163,0);e->slot(0,8)=arg(t163,1);}
{Args t164=call(e->slot(1,9),Args{V(),lit263,lit264,lit265});e->slot(0,9)=arg(t164,0);e->slot(0,10)=arg(t164,1);}
if(truth(([&](){V t165=([&](){V t166=([&](){V t167=([&](){V t168=e->slot(0,2);return !truth(t168)?e->slot(0,4):t168;})();return !truth(t167)?e->slot(0,6):t167;})();return !truth(t166)?e->slot(0,8):t166;})();return !truth(t165)?e->slot(0,10):t165;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit118)};V t169=V(true);refs[0].put(std::move(t169));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t170=first(call(e->slot(1,6),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t171=first(call(e->slot(1,6),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t172=first(call(e->slot(1,6),Args{e->slot(0,5),V(0.0)}));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t173=first(call(e->slot(1,6),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t174=first(call(e->slot(1,6),Args{e->slot(0,9),V(0.0)}));refs[0].put(std::move(t174));}
{Args t175=call(e->slot(1,9),Args{V(),lit266,lit267});e->slot(0,11)=arg(t175,0);e->slot(0,12)=arg(t175,1);}
{Args t176=call(e->slot(1,9),Args{V(),lit268,lit269,lit270});e->slot(0,13)=arg(t176,0);e->slot(0,14)=arg(t176,1);}
if(truth(([&](){V t177=e->slot(0,12);return !truth(t177)?e->slot(0,14):t177;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit119)};V t178=V(true);refs[0].put(std::move(t178));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t179=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t180=first(call(e->slot(1,6),Args{e->slot(0,13),V(0.0)}));refs[0].put(std::move(t180));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{Args t181=call(e->slot(1,22),Args{e->slot(0,2),e->slot(0,1)});e->slot(0,4)=arg(t181,0);e->slot(0,5)=arg(t181,1);e->slot(0,6)=arg(t181,2);e->slot(0,7)=arg(t181,3);}
call(e->slot(1,21),Args{e->slot(0,2),e->slot(0,1),e->slot(0,3)});
call(e->slot(1,23),Args{e->slot(0,2)});
{V t182=first(call(get(e->get("math"),lit154),Args{first(call(e->slot(1,5),Args{e->slot(0,4)})),mul(e->slot(0,6),V(0.18)),mul(first(call(e->slot(1,5),Args{e->slot(0,5)})),([&](){V t183=([&](){V t184=le(first(call(e->slot(1,5),Args{e->slot(0,5)})),get(e->get("math"),lit188));return truth(t184)?V(1.8):t184;})();return !truth(t183)?V(0.03):t183;})())}));e->slot(0,8)=std::move(t182);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t185=first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0),V(3.0)}));refs[0].put(std::move(t185));}
{V t186=([&](){V t187=get(get(e->slot(1,3),lit72),e->slot(0,2));return !truth(t187)?V(0.0):t187;})();e->slot(0,9)=std::move(t186);}
{V t188=divv(first(call(e->slot(1,5),Args{sub(e->slot(0,8),e->slot(0,9))})),first(call(get(e->get("math"),lit154),Args{e->slot(0,3),V(0.0001)})));e->slot(0,10)=std::move(t188);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,2))};V t189=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit73),e->slot(0,2)),e->slot(0,10),V(0.025),e->slot(0,3)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,2))};V t190=e->slot(0,8);refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit84),e->slot(0,2))};V t191=first(call(get(e->get("math"),lit154),Args{([&](){V t192=get(get(e->slot(1,3),lit84),e->slot(0,2));return !truth(t192)?V(0.0):t192;})(),mul(e->slot(0,7),V(0.65))}));refs[0].put(std::move(t191));}
return Args{e->slot(0,8),e->slot(0,4),e->slot(0,5),e->slot(0,6),e->slot(0,7)};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t193=get(e->slot(1,1),lit5);e->slot(0,3)=std::move(t193);}
{Args t194=call(e->slot(1,20),Args{e->slot(0,0)});e->slot(0,4)=arg(t194,0);e->slot(0,5)=arg(t194,1);}
{V t195=V(0.35);e->slot(0,6)=std::move(t195);}
if(truth(ge(e->slot(0,1),V(2.0)))){{std::array<Ref,1> refs{Ref(e,0,6)};V t196=V(1.0);refs[0].put(std::move(t196));}
}
{V t197=V(0.7);e->slot(0,7)=std::move(t197);}
if(truth(le(e->slot(0,1),V(1.0)))){{std::array<Ref,1> refs{Ref(e,0,7)};V t198=V(1.0);refs[0].put(std::move(t198));}
}
{V t199=mul(mul(mul(e->slot(0,4),get(e->slot(0,3),lit19)),e->slot(0,6)),add(V(1.0),mul(get(e->slot(1,3),lit100),get(e->slot(0,3),lit29))));e->slot(0,8)=std::move(t199);}
if(truth(ge(e->slot(0,1),V(2.0)))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t200=first(call(e->slot(2,4),Args{divv(first(call(e->slot(2,5),Args{get(e->slot(2,3),lit96)})),V(3000.0)),V(0.0),V(1.5)}));e->slot(0,0)=std::move(t200);}
{V t201=first(call(e->slot(2,4),Args{divv(first(call(e->slot(2,5),Args{get(e->slot(2,3),lit97)})),V(3000.0)),V(0.0),V(1.5)}));e->slot(0,1)=std::move(t201);}
{std::array<Ref,1> refs{Ref(e,1,8)};V t202=add(add(add(add(add(add(e->slot(1,8),mul(first(call(e->slot(2,5),Args{get(e->slot(2,3),lit95)})),get(e->slot(1,3),lit37))),mul(mul(e->slot(0,0),V(3800.0)),V(0.12))),mul(mul(e->slot(0,1),V(3800.0)),V(0.12))),mul(first(call(e->slot(2,5),Args{get(e->slot(2,3),lit98)})),get(e->slot(1,3),lit38))),mul(first(call(e->slot(2,5),Args{get(e->slot(2,3),lit99)})),get(e->slot(1,3),lit39))),mul(first(call(e->slot(2,5),Args{get(e->slot(2,3),lit101)})),get(e->slot(1,3),lit40)));refs[0].put(std::move(t202));}
}
{V t203=mul(mul(e->slot(0,5),get(e->slot(0,3),lit22)),e->slot(0,7));e->slot(0,9)=std::move(t203);}
{V t204=mul(add(mul(e->slot(0,8),get(e->slot(0,3),lit27)),mul(e->slot(0,9),get(e->slot(0,3),lit28))),add(V(0.65),mul(first(call(e->slot(1,4),Args{divv(e->slot(0,2),first(call(get(e->get("math"),lit154),Args{get(e->slot(0,3),lit13),V(0.001)}))),V(0.0),V(1.0)})),V(0.35))));e->slot(0,10)=std::move(t204);}
{std::array<Ref,1> refs{Ref(e,0,10)};V t205=mul(e->slot(0,10),add(add(add(V(1.0),mul(get(get(e->slot(1,3),lit83),e->slot(0,1)),V(0.18))),mul(get(get(e->slot(1,3),lit85),e->slot(0,1)),V(0.1))),mul(get(get(e->slot(1,3),lit92),e->slot(0,1)),get(e->slot(0,3),lit53))));refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit77),e->slot(0,1))};V t206=e->slot(0,10);refs[0].put(std::move(t206));}
return Args{e->slot(0,10)};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t207=get(e->slot(1,1),lit5);e->slot(0,1)=std::move(t207);}
{V t208=first(call(e->slot(1,4),Args{first(call(e->slot(1,8),Args{lit271,V(1.0)})),V(0.25),V(1.8)}));e->slot(0,2)=std::move(t208);}
{V t209=first(call(e->slot(1,4),Args{first(call(e->slot(1,8),Args{lit272,V(1.0)})),V(0.35),V(2.0)}));e->slot(0,3)=std::move(t209);}
{V t210=first(call(e->slot(1,4),Args{first(call(e->slot(1,8),Args{lit273,V(1.0)})),V(0.5),V(1.8)}));e->slot(0,4)=std::move(t210);}
{V t211=first(call(e->slot(1,4),Args{first(call(e->slot(1,5),Args{sub(first(call(e->slot(1,8),joined(Args{concat(lit274,e->slot(0,0))},call(e->slot(1,8),Args{concat(lit275,e->slot(0,0)),V(1.0)})))),V(1.0))})),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t211);}
{V t212=first(call(e->slot(1,4),Args{first(call(e->slot(1,5),Args{sub(first(call(e->slot(1,8),joined(Args{concat(lit276,e->slot(0,0))},call(e->slot(1,8),Args{concat(lit277,e->slot(0,0)),V(1.0)})))),V(1.0))})),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t212);}
{V t213=add(add(V(1.0),mul(first(call(get(e->get("math"),lit154),Args{sub(e->slot(0,2),V(1.0)),V(0.0)})),get(e->slot(0,1),lit32))),mul(first(call(get(e->get("math"),lit154),Args{sub(e->slot(0,3),V(1.0)),V(0.0)})),get(e->slot(0,1),lit33)));e->slot(0,7)=std::move(t213);}
{V t214=divv(V(1.0),add(add(add(V(1.0),mul(first(call(get(e->get("math"),lit154),Args{sub(e->slot(0,4),V(1.0)),V(0.0)})),get(e->slot(0,1),lit34))),mul(e->slot(0,5),get(e->slot(0,1),lit35))),mul(e->slot(0,6),get(e->slot(0,1),lit36))));e->slot(0,8)=std::move(t214);}
return Args{e->slot(0,7),e->slot(0,8)};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t215=get(e->slot(1,1),lit5);e->slot(0,3)=std::move(t215);}
{V t216=first(call(e->slot(1,4),Args{divv(sub(e->slot(0,1),get(e->slot(0,3),lit11)),first(call(get(e->get("math"),lit154),Args{sub(get(e->slot(0,3),lit12),get(e->slot(0,3),lit11)),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t216);}
{V t217=first(call(e->slot(1,4),Args{mul(mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),V(0.018)),get(e->slot(0,3),lit14)),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t217);}
{V t218=mul(e->slot(0,4),add(V(0.45),mul(e->slot(0,5),V(0.55))));e->slot(0,6)=std::move(t218);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t219=add(add(add(add(add(e->slot(0,6),mul(get(get(e->slot(1,3),lit83),e->slot(0,0)),V(0.1))),mul(get(get(e->slot(1,3),lit84),e->slot(0,0)),V(0.08))),mul(get(get(e->slot(1,3),lit86),e->slot(0,0)),V(0.08))),mul(get(get(e->slot(1,3),lit90),e->slot(0,0)),V(0.08))),mul(get(get(e->slot(1,3),lit92),e->slot(0,0)),V(0.08)));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t220=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit74),e->slot(0,0)),first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0),V(1.0)})),V(0.035),e->slot(0,2)}));refs[0].put(std::move(t220));}
return Args{get(get(e->slot(1,3),lit74),e->slot(0,0))};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t221=get(e->slot(1,1),lit5);e->slot(0,3)=std::move(t221);}
{V t222=first(call(e->slot(1,4),Args{([&](){V t223=get(get(e->slot(1,3),lit80),e->slot(0,0));return !truth(t223)?V(1.0):t223;})(),V(0.1),V(2.5)}));e->slot(0,4)=std::move(t222);}
{V t224=first(call(e->slot(1,4),Args{([&](){V t225=get(get(e->slot(1,3),lit82),e->slot(0,0));return !truth(t225)?V(1.0):t225;})(),V(0.0),V(1.2)}));e->slot(0,5)=std::move(t224);}
{V t226=first(call(e->slot(1,5),call(e->slot(1,8),joined(Args{concat(lit278,e->slot(0,0))},call(e->slot(1,8),Args{concat(lit279,e->slot(0,0)),V(0.0)})))));e->slot(0,6)=std::move(t226);}
{V t227=add(mul(mul(get(e->slot(0,3),lit16),add(V(0.8),mul(e->slot(0,4),V(0.2)))),add(V(0.7),mul(e->slot(0,5),V(0.3)))),mul(e->slot(0,6),V(0.15)));e->slot(0,7)=std::move(t227);}
{V t228=first(call(e->slot(1,4),Args{first(call(e->slot(1,8),Args{lit280,V(1.0)})),V(0.2),V(1.35)}));e->slot(0,8)=std::move(t228);}
{V t229=first(call(e->slot(1,4),Args{first(call(e->slot(1,8),Args{lit271,V(1.0)})),V(0.25),V(1.8)}));e->slot(0,9)=std::move(t229);}
{V t230=divv(mul(get(e->slot(0,3),lit17),e->slot(0,8)),first(call(get(e->get("math"),lit154),Args{e->slot(0,9),V(0.25)})));e->slot(0,10)=std::move(t230);}
{std::array<Ref,1> refs{Ref(e,0,10)};V t231=divv(e->slot(0,10),add(add(add(V(1.0),mul(get(get(e->slot(1,3),lit85),e->slot(0,0)),V(0.15))),mul(get(get(e->slot(1,3),lit83),e->slot(0,0)),V(0.2))),mul(get(get(e->slot(1,3),lit89),e->slot(0,0)),V(0.1))));refs[0].put(std::move(t231));}
{V t232=get(e->slot(0,3),lit18);e->slot(0,11)=std::move(t232);}
if(truth(ge(e->slot(0,0),V(2.0)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t233=mul(e->slot(0,11),V(1.18));refs[0].put(std::move(t233));}
}
{std::array<Ref,1> refs{Ref(e,0,11)};V t234=mul(e->slot(0,11),add(add(add(add(V(1.0),mul(first(call(e->slot(1,5),call(e->slot(1,8),Args{concat(lit281,e->slot(0,0)),V(0.0)}))),get(e->slot(0,3),lit30))),mul(first(call(e->slot(1,5),Args{get(get(e->slot(1,3),lit94),e->slot(0,0))})),get(e->slot(0,3),lit46))),mul(first(call(e->slot(1,5),Args{get(get(e->slot(1,3),lit93),e->slot(0,0))})),get(e->slot(0,3),lit47))),mul(get(get(e->slot(1,3),lit91),e->slot(0,0)),get(e->slot(0,3),lit52))));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit78),e->slot(0,0))};V t235=e->slot(0,11);refs[0].put(std::move(t235));}
{V t236=add(add(add(add(add(get(e->slot(0,3),lit23),mul(e->slot(0,2),get(e->slot(0,3),lit24))),first(call(e->slot(1,4),Args{mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),V(0.004)),V(0.0),V(0.8)}))),mul(get(get(e->slot(1,3),lit83),e->slot(0,0)),V(0.12))),mul(get(get(e->slot(1,3),lit85),e->slot(0,0)),V(0.1))),mul(get(get(e->slot(1,3),lit92),e->slot(0,0)),V(0.1)));e->slot(0,12)=std::move(t236);}
{V t237=first(call(get(e->get("math"),lit154),Args{mul(mul(e->slot(0,11),first(call(get(e->get("math"),lit154),Args{e->slot(0,1),V(1.0)}))),e->slot(0,12)),V(1.0)}));e->slot(0,13)=std::move(t237);}
{V t238=divv(mul(e->slot(0,7),e->slot(0,10)),e->slot(0,13));e->slot(0,14)=std::move(t238);}
{std::array<Ref,1> refs{Ref(e,0,14)};V t239=divv(e->slot(0,14),V(160000.0));refs[0].put(std::move(t239));}
{std::array<Ref,1> refs{Ref(e,0,14)};V t240=first(call(e->slot(1,4),Args{e->slot(0,14),V(0.0),V(5.0)}));refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t241=e->slot(0,14);refs[0].put(std::move(t241));}
{V t242=first(call(e->slot(1,4),Args{mul(sub(get(e->slot(0,3),lit25),e->slot(0,14)),get(e->slot(0,3),lit26)),V(0.0),V(1.0)}));e->slot(0,15)=std::move(t242);}
{std::array<Ref,1> refs{Ref(e,0,15)};V t243=mul(e->slot(0,15),add(V(0.3),mul(first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(1.0)})),V(0.7))));refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t244=e->slot(0,15);refs[0].put(std::move(t244));}
return Args{e->slot(0,15)};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t245=get(e->slot(1,1),lit5);e->slot(0,3)=std::move(t245);}
{V t246=([&](){V t247=get(get(e->slot(1,3),lit67),e->slot(0,0));return !truth(t247)?V(0.0):t247;})();e->slot(0,4)=std::move(t246);}
{V t248=([&](){V t249=get(get(e->slot(1,3),lit68),e->slot(0,0));return !truth(t249)?V(0.0):t249;})();e->slot(0,5)=std::move(t248);}
{V t250=mul(sub(e->slot(0,1),e->slot(0,4)),get(e->slot(0,3),lit10));e->slot(0,6)=std::move(t250);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t251=mul(add(e->slot(0,5),mul(e->slot(0,6),e->slot(0,2))),get(e->slot(0,3),lit9));refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t252=add(e->slot(0,4),mul(e->slot(0,5),e->slot(0,2)));refs[0].put(std::move(t252));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t253=first(call(e->slot(1,4),Args{e->slot(0,4),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e,0,5)};V t254=first(call(e->slot(1,4),Args{e->slot(0,5),V(-num(V(8.0))),V(8.0)}));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t255=e->slot(0,4);refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t256=e->slot(0,5);refs[0].put(std::move(t256));}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t257=first(call(e->slot(1,4),Args{mul(get(get(e->slot(1,3),lit71),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit56)),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t257);}
call(e->slot(1,10),Args{concat(lit282,e->slot(0,0)),get(get(e->slot(1,3),lit70),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit283,e->slot(0,0)),get(get(e->slot(1,3),lit69),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit284,e->slot(0,0)),get(get(e->slot(1,3),lit66),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit285,e->slot(0,0)),get(get(e->slot(1,3),lit70),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit286,e->slot(0,0)),get(get(e->slot(1,3),lit71),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit287,e->slot(0,0)),get(get(e->slot(1,3),lit71),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit288,e->slot(0,0)),get(get(e->slot(1,3),lit70),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit200,e->slot(0,0)),e->slot(0,1)});
call(e->slot(1,10),Args{concat(lit289,e->slot(0,0)),get(get(e->slot(1,3),lit69),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit290,e->slot(0,0)),get(get(e->slot(1,3),lit66),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit291,e->slot(0,0)),get(get(e->slot(1,3),lit70),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit292,e->slot(0,0)),get(get(e->slot(1,3),lit71),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit293,e->slot(0,0)),get(get(e->slot(1,3),lit66),e->slot(0,0))});
call(e->slot(1,10),joined(Args{concat(lit294,e->slot(0,0))},call(get(e->get("math"),lit154),Args{first(call(e->slot(1,8),Args{concat(lit294,e->slot(0,0)),V(0.0)})),mul(get(get(e->slot(1,3),lit71),e->slot(0,0)),V(0.25))})));
if(truth(V(!truth(get(e->slot(1,3),lit126))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit295,e->slot(0,0)),get(get(e->slot(1,3),lit76),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit296,e->slot(0,0)),get(get(e->slot(1,3),lit75),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit297,e->slot(0,0)),get(get(e->slot(1,3),lit74),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit298,e->slot(0,0)),get(get(e->slot(1,3),lit73),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit299,e->slot(0,0)),get(get(e->slot(1,3),lit77),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit300,e->slot(0,0)),get(get(e->slot(1,3),lit78),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit301,e->slot(0,0)),get(get(e->slot(1,3),lit104),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit302,e->slot(0,0)),get(get(e->slot(1,3),lit83),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit303,e->slot(0,0)),get(get(e->slot(1,3),lit85),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit304,e->slot(0,0)),get(e->slot(1,3),lit100)});
call(e->slot(1,10),Args{concat(lit305,e->slot(0,0)),get(get(e->slot(1,3),lit79),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit306,e->slot(0,0)),get(get(e->slot(1,3),lit80),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit307,e->slot(0,0)),get(get(e->slot(1,3),lit81),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit308,e->slot(0,0)),get(get(e->slot(1,3),lit90),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit309,e->slot(0,0)),get(get(e->slot(1,3),lit88),e->slot(0,0))});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,21);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t258=get(e->slot(1,1),lit5);e->slot(0,5)=std::move(t258);}
{V t259=first(call(e->slot(1,25),Args{e->slot(0,1),e->slot(0,2),e->slot(0,0),e->slot(0,3)}));e->slot(0,6)=std::move(t259);}
{V t260=first(call(e->slot(1,26),Args{e->slot(0,1),e->slot(0,0),e->slot(0,6)}));e->slot(0,7)=std::move(t260);}
{V t261=first(call(e->slot(1,28),Args{e->slot(0,0),e->slot(0,6),e->slot(0,3)}));e->slot(0,8)=std::move(t261);}
{V t262=first(call(e->slot(1,29),Args{e->slot(0,0),e->slot(0,7),e->slot(0,8)}));e->slot(0,9)=std::move(t262);}
{Args t263=call(e->slot(1,27),Args{e->slot(0,0)});e->slot(0,10)=arg(t263,0);e->slot(0,11)=arg(t263,1);}
{V t264=V(1.0);e->slot(0,12)=std::move(t264);}
if(truth(lt(e->slot(0,4),get(e->slot(0,5),lit61)))){{std::array<Ref,1> refs{Ref(e,0,12)};V t265=add(V(1.0),mul(sub(V(1.0),divv(e->slot(0,4),first(call(get(e->get("math"),lit154),Args{get(e->slot(0,5),lit61),V(1.0)})))),V(0.35)));refs[0].put(std::move(t265));}
}
{V t266=first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit80),e->slot(0,0)),V(0.0),V(2.5)}));e->slot(0,13)=std::move(t266);}
{V t267=first(call(e->slot(1,4),Args{mul(e->slot(0,13),get(e->slot(0,5),lit31)),V(0.0),V(1.0)}));e->slot(0,14)=std::move(t267);}
{V t268=first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit82),e->slot(0,0)),V(0.0),V(1.0)}));e->slot(0,15)=std::move(t268);}
{V t269=add(add(add(add(add(add(add(add(add(add(add(V(1.0),mul(get(get(e->slot(1,3),lit83),e->slot(0,0)),get(e->slot(0,5),lit41))),mul(get(get(e->slot(1,3),lit84),e->slot(0,0)),get(e->slot(0,5),lit42))),mul(get(get(e->slot(1,3),lit85),e->slot(0,0)),get(e->slot(0,5),lit43))),mul(get(get(e->slot(1,3),lit86),e->slot(0,0)),get(e->slot(0,5),lit44))),mul(sub(V(1.0),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit87),e->slot(0,0)),V(0.0),V(1.0)}))),get(e->slot(0,5),lit45))),mul(first(call(e->slot(1,5),call(e->slot(1,8),joined(Args{lit310},call(e->slot(1,8),Args{lit311,V(0.0)}))))),get(e->slot(0,5),lit48))),mul(get(get(e->slot(1,3),lit88),e->slot(0,0)),get(e->slot(0,5),lit49))),mul(get(get(e->slot(1,3),lit89),e->slot(0,0)),get(e->slot(0,5),lit50))),mul(get(get(e->slot(1,3),lit90),e->slot(0,0)),get(e->slot(0,5),lit51))),mul(get(get(e->slot(1,3),lit91),e->slot(0,0)),get(e->slot(0,5),lit52))),mul(get(get(e->slot(1,3),lit92),e->slot(0,0)),get(e->slot(0,5),lit53)));e->slot(0,16)=std::move(t269);}
{V t270=mul(mul(mul(mul(mul(mul(mul(e->slot(0,8),e->slot(0,9)),e->slot(0,10)),e->slot(0,11)),e->slot(0,12)),e->slot(0,16)),add(V(0.5),mul(e->slot(0,14),V(0.5)))),add(V(0.45),mul(e->slot(0,15),V(0.55))));e->slot(0,17)=std::move(t270);}
if(truth(lt(([&](){V t271=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t271)?V(0.0):t271;})(),get(e->slot(0,5),lit62)))){{std::array<Ref,1> refs{Ref(e,0,17)};V t272=mul(e->slot(0,17),V(0.25));refs[0].put(std::move(t272));}
}
{std::array<Ref,1> refs{Ref(e,0,17)};V t273=first(call(e->slot(1,4),Args{e->slot(0,17),V(0.0),get(e->slot(0,5),lit57)}));refs[0].put(std::move(t273));}
{V t274=([&](){V t275=([&](){V t276=gt(e->slot(0,17),get(get(e->slot(1,3),lit66),e->slot(0,0)));return truth(t276)?get(e->slot(0,5),lit6):t276;})();return !truth(t275)?get(e->slot(0,5),lit7):t275;})();e->slot(0,18)=std::move(t274);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t277=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit66),e->slot(0,0)),e->slot(0,17),e->slot(0,18),e->slot(0,3)}));refs[0].put(std::move(t277));}
{V t278=first(call(e->slot(1,30),Args{e->slot(0,0),get(get(e->slot(1,3),lit66),e->slot(0,0)),e->slot(0,3)}));e->slot(0,19)=std::move(t278);}
{V t279=first(call(e->slot(1,4),Args{mul(first(call(e->slot(1,5),Args{e->slot(0,19)})),get(get(e->slot(1,3),lit66),e->slot(0,0))),V(0.0),get(e->slot(0,5),lit57)}));e->slot(0,20)=std::move(t279);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t280=e->slot(0,20);refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t281=first(call(e->slot(1,4),Args{mul(e->slot(0,20),add(V(0.65),mul(e->slot(0,9),V(0.35)))),V(0.0),get(e->slot(0,5),lit59)}));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t282=first(call(e->slot(1,4),Args{mul(mul(e->slot(0,20),get(e->slot(0,5),lit55)),add(V(0.65),mul(e->slot(0,13),V(0.35)))),V(0.0),get(e->slot(0,5),lit58)}));refs[0].put(std::move(t282));}
if(truth(lt(e->slot(0,20),V(0.04)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit104),e->slot(0,0))};V t283=lit105;refs[0].put(std::move(t283));}
}else if(truth(([&](){V t284=gt(e->slot(0,9),V(0.65));return truth(t284)?gt(e->slot(0,8),V(0.45)):t284;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit104),e->slot(0,0))};V t285=lit312;refs[0].put(std::move(t285));}
}else if(truth(gt(e->slot(0,8),V(0.3)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit104),e->slot(0,0))};V t286=lit313;refs[0].put(std::move(t286));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit104),e->slot(0,0))};V t287=lit314;refs[0].put(std::move(t287));}
}


call(e->slot(1,31),Args{e->slot(0,0)});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit315,get(e->slot(1,3),lit106)});
call(e->slot(1,10),Args{lit316,get(e->slot(1,3),lit107)});
call(e->slot(1,10),Args{lit317,get(e->slot(1,3),lit108)});
call(e->slot(1,10),Args{lit318,get(e->slot(1,3),lit110)});
call(e->slot(1,10),Args{lit319,get(e->slot(1,3),lit112)});
call(e->slot(1,10),Args{lit320,([&](){V t288=([&](){V t289=get(e->slot(1,3),lit113);return truth(t289)?V(1.0):t289;})();return !truth(t288)?V(0.0):t288;})()});
call(e->slot(1,10),Args{lit321,get(e->slot(1,3),lit106)});
call(e->slot(1,10),Args{lit322,get(e->slot(1,3),lit107)});
call(e->slot(1,10),Args{lit323,get(e->slot(1,3),lit108)});
call(e->slot(1,10),Args{lit324,get(e->slot(1,3),lit109)});
call(e->slot(1,10),Args{lit325,get(e->slot(1,3),lit57)});
call(e->slot(1,10),Args{lit326,get(e->slot(1,3),lit58)});
call(e->slot(1,10),Args{lit327,get(e->slot(1,3),lit59)});
call(e->slot(1,10),Args{lit328,get(e->slot(1,3),lit103)});
if(truth(V(!truth(get(e->slot(1,3),lit126))))){return Args{};
}
call(e->slot(1,10),Args{lit329,([&](){V t290=([&](){V t291=get(e->slot(1,3),lit114);return truth(t291)?V(1.0):t291;})();return !truth(t290)?V(0.0):t290;})()});
call(e->slot(1,10),Args{lit330,([&](){V t292=([&](){V t293=get(e->slot(1,3),lit115);return truth(t293)?V(1.0):t293;})();return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,10),Args{lit331,([&](){V t294=([&](){V t295=get(e->slot(1,3),lit116);return truth(t295)?V(1.0):t295;})();return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,10),Args{lit332,([&](){V t296=([&](){V t297=get(e->slot(1,3),lit117);return truth(t297)?V(1.0):t297;})();return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,10),Args{lit333,([&](){V t298=([&](){V t299=get(e->slot(1,3),lit118);return truth(t299)?V(1.0):t299;})();return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,10),Args{lit334,([&](){V t300=([&](){V t301=get(e->slot(1,3),lit119);return truth(t301)?V(1.0):t301;})();return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,10),Args{lit335,([&](){V t302=([&](){V t303=get(e->slot(1,3),lit120);return truth(t303)?V(1.0):t303;})();return !truth(t302)?V(0.0):t302;})()});
call(e->slot(1,10),Args{lit336,([&](){V t304=([&](){V t305=get(e->slot(1,3),lit121);return truth(t305)?V(1.0):t305;})();return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,10),Args{lit337,([&](){V t306=([&](){V t307=get(e->slot(1,3),lit122);return truth(t307)?V(1.0):t307;})();return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,10),Args{lit338,([&](){V t308=([&](){V t309=get(e->slot(1,3),lit123);return truth(t309)?V(1.0):t309;})();return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,10),Args{lit339,([&](){V t310=([&](){V t311=get(e->slot(1,3),lit124);return truth(t311)?V(1.0):t311;})();return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,10),Args{lit340,([&](){V t312=get(e->slot(1,3),lit102);return !truth(t312)?V(0.0):t312;})()});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t313=num(V(0.0)),t314=num(V(3.0)),t315=num(V(1.0));for(double t316=t313;(t315>0?t316<=t314:t316>=t314);t316+=t315){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t316);call(e->slot(2,31),Args{e->slot(0,0)});
}}
call(e->slot(1,33),Args{});
return Args{};});
Ref(e->slot(0,1),lit341).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t317=lit111;refs[0].put(std::move(t317));}
call(e->slot(1,34),Args{});
return Args{};}));
Ref(e->slot(0,1),lit342).put(native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t318=add(([&](){V t319=get(e->slot(1,3),lit112);return !truth(t319)?V(0.0):t319;})(),V(1.0));refs[0].put(std::move(t318));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t320=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t320));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t321=lit343;refs[0].put(std::move(t321));}
call(e->slot(1,33),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t322=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0001),V(0.1)}));refs[0].put(std::move(t322));}
call(e->slot(1,17),Args{e->slot(0,0)});
call(e->slot(1,18),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t323=([&](){V t324=e->slot(0,1);return !truth(t324)?first(call(e->slot(1,13),Args{})):t324;})();refs[0].put(std::move(t323));}
{V t325=first(call(e->slot(1,14),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t325);}
{V t326=ne(e->slot(0,3),V());e->slot(0,4)=std::move(t326);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t327=e->slot(0,4);refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit124)};V t328=V(!truth(e->slot(0,4)));refs[0].put(std::move(t328));}
if(truth(e->slot(0,4))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t329=lit344;refs[0].put(std::move(t329));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t330=([&](){V t331=([&](){V t332=e->slot(0,1);return truth(t332)?lit345:t332;})();return !truth(t331)?lit346:t331;})();refs[0].put(std::move(t330));}
}
call(e->slot(1,24),Args{});
{V t333=first(call(e->slot(1,19),Args{e->slot(0,1)}));e->slot(0,5)=std::move(t333);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t334=e->slot(0,5);refs[0].put(std::move(t334));}
{V t335=V(0.0);e->slot(0,6)=std::move(t335);}
{V t336=V(0.0);e->slot(0,7)=std::move(t336);}
{V t337=V(0.0);e->slot(0,8)=std::move(t337);}
{V t338=V(0.0);e->slot(0,9)=std::move(t338);}
{V t339=V(0.0);e->slot(0,10)=std::move(t339);}
{V t340=V(0.0);e->slot(0,11)=std::move(t340);}
{V t341=V(0.0);e->slot(0,12)=std::move(t341);}
{V t342=V(0.0);e->slot(0,13)=std::move(t342);}
{double t343=num(V(0.0)),t344=num(V(3.0)),t345=num(V(1.0));for(double t346=t343;(t345>0?t346<=t344:t346>=t344);t346+=t345){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t346);{V t347=first(call(e->slot(2,15),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t347);}
call(e->slot(2,32),Args{e->slot(0,0),e->slot(1,1),e->slot(0,1),e->slot(1,0),e->slot(1,5)});
if(truth(([&](){V t348=e->slot(0,1);return !truth(t348)?get(e->slot(2,3),lit124):t348;})())){{std::array<Ref,1> refs{Ref(e,1,13)};V t349=add(e->slot(1,13),V(1.0));refs[0].put(std::move(t349));}
}
{std::array<Ref,1> refs{Ref(e,1,6)};V t350=add(e->slot(1,6),([&](){V t351=get(get(e->slot(2,3),lit69),e->slot(0,0));return !truth(t351)?V(0.0):t351;})());refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t352=add(e->slot(1,7),([&](){V t353=get(get(e->slot(2,3),lit66),e->slot(0,0));return !truth(t353)?V(0.0):t353;})());refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t354=add(e->slot(1,8),([&](){V t355=get(get(e->slot(2,3),lit76),e->slot(0,0));return !truth(t355)?V(0.0):t355;})());refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t356=add(e->slot(1,9),([&](){V t357=get(get(e->slot(2,3),lit70),e->slot(0,0));return !truth(t357)?V(0.0):t357;})());refs[0].put(std::move(t356));}
if(truth(gt(([&](){V t358=get(get(e->slot(2,3),lit69),e->slot(0,0));return !truth(t358)?V(0.0):t358;})(),e->slot(1,10)))){{std::array<Ref,1> refs{Ref(e,1,10)};V t359=([&](){V t360=get(get(e->slot(2,3),lit69),e->slot(0,0));return !truth(t360)?V(0.0):t360;})();refs[0].put(std::move(t359));}
}
if(truth(gt(([&](){V t361=get(get(e->slot(2,3),lit70),e->slot(0,0));return !truth(t361)?V(0.0):t361;})(),e->slot(1,11)))){{std::array<Ref,1> refs{Ref(e,1,11)};V t362=([&](){V t363=get(get(e->slot(2,3),lit70),e->slot(0,0));return !truth(t363)?V(0.0):t363;})();refs[0].put(std::move(t362));}
}
if(truth(gt(([&](){V t364=get(get(e->slot(2,3),lit71),e->slot(0,0));return !truth(t364)?V(0.0):t364;})(),e->slot(1,12)))){{std::array<Ref,1> refs{Ref(e,1,12)};V t365=([&](){V t366=get(get(e->slot(2,3),lit71),e->slot(0,0));return !truth(t366)?V(0.0):t366;})();refs[0].put(std::move(t365));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t367=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t367));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t368=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t368));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t369=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t370=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t370));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit57)};V t371=e->slot(0,10);refs[0].put(std::move(t371));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit58)};V t372=e->slot(0,11);refs[0].put(std::move(t372));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit59)};V t373=e->slot(0,12);refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t374=e->slot(0,13);refs[0].put(std::move(t374));}
call(e->slot(1,33),Args{});
return Args{};}));
Ref(e->slot(0,1),lit347).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t375=get(get(e->slot(1,3),lit69),e->slot(0,0));return !truth(t375)?V(0.0):t375;})()};
return Args{};}));
Ref(e->slot(0,1),lit348).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t376=get(get(e->slot(1,3),lit66),e->slot(0,0));return !truth(t376)?V(0.0):t376;})()};
return Args{};}));
Ref(e->slot(0,1),lit349).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t377=get(get(e->slot(1,3),lit70),e->slot(0,0));return !truth(t377)?V(0.0):t377;})()};
return Args{};}));
Ref(e->slot(0,1),lit350).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t378=get(get(e->slot(1,3),lit71),e->slot(0,0));return !truth(t378)?V(0.0):t378;})()};
return Args{};}));
Ref(e->slot(0,1),lit351).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t379=get(get(e->slot(1,3),lit76),e->slot(0,0));return !truth(t379)?V(0.0):t379;})()};
return Args{};}));
Ref(e->slot(0,1),lit352).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,3)};
}
return Args{([&](){V z=table();set(z,lit69,([&](){V t380=get(get(e->slot(1,3),lit69),e->slot(0,0));return !truth(t380)?V(0.0):t380;})());set(z,lit66,([&](){V t381=get(get(e->slot(1,3),lit66),e->slot(0,0));return !truth(t381)?V(0.0):t381;})());set(z,lit70,([&](){V t382=get(get(e->slot(1,3),lit70),e->slot(0,0));return !truth(t382)?V(0.0):t382;})());set(z,lit71,([&](){V t383=get(get(e->slot(1,3),lit71),e->slot(0,0));return !truth(t383)?V(0.0):t383;})());set(z,lit76,([&](){V t384=get(get(e->slot(1,3),lit76),e->slot(0,0));return !truth(t384)?V(0.0):t384;})());set(z,lit75,([&](){V t385=get(get(e->slot(1,3),lit75),e->slot(0,0));return !truth(t385)?V(0.0):t385;})());set(z,lit74,([&](){V t386=get(get(e->slot(1,3),lit74),e->slot(0,0));return !truth(t386)?V(0.0):t386;})());set(z,lit104,([&](){V t387=get(get(e->slot(1,3),lit104),e->slot(0,0));return !truth(t387)?lit353:t387;})());set(z,lit79,([&](){V t388=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t388)?V(0.0):t388;})());set(z,lit82,([&](){V t389=get(get(e->slot(1,3),lit82),e->slot(0,0));return !truth(t389)?V(1.0):t389;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit354).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t390=([&](){V t391=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t391)?V(0.0):t391;})();e->slot(0,0)=std::move(t390);}
return call(get(e->get("string"),lit355),joined(Args{lit356,first(call(e->get("tostring"),Args{([&](){V t392=get(e->slot(2,2),e->slot(0,0));return !truth(t392)?e->slot(0,0):t392;})()})),([&](){V t393=get(get(e->slot(2,3),lit69),e->slot(0,0));return !truth(t393)?V(0.0):t393;})(),([&](){V t394=get(get(e->slot(2,3),lit66),e->slot(0,0));return !truth(t394)?V(0.0):t394;})(),([&](){V t395=get(get(e->slot(2,3),lit70),e->slot(0,0));return !truth(t395)?V(0.0):t395;})(),([&](){V t396=get(get(e->slot(2,3),lit75),e->slot(0,0));return !truth(t396)?V(0.0):t396;})(),([&](){V t397=get(get(e->slot(2,3),lit76),e->slot(0,0));return !truth(t397)?V(0.0):t397;})(),([&](){V t398=get(get(e->slot(2,3),lit74),e->slot(0,0));return !truth(t398)?V(0.0):t398;})(),([&](){V t399=get(get(e->slot(2,3),lit77),e->slot(0,0));return !truth(t399)?V(0.0):t399;})()},call(e->get("tostring"),Args{([&](){V t400=get(get(e->slot(2,3),lit104),e->slot(0,0));return !truth(t400)?lit353:t400;})()})));
}
return call(get(e->get("string"),lit355),Args{concat(lit357,concat(lit358,lit359)),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit110)})),([&](){V t401=get(e->slot(1,3),lit112);return !truth(t401)?V(0.0):t401;})(),([&](){V t402=get(e->slot(1,3),lit106);return !truth(t402)?V(0.0):t402;})(),([&](){V t403=get(e->slot(1,3),lit107);return !truth(t403)?V(0.0):t403;})(),([&](){V t404=get(e->slot(1,3),lit108);return !truth(t404)?V(0.0):t404;})(),([&](){V t405=get(e->slot(1,3),lit109);return !truth(t405)?V(0.0):t405;})(),([&](){V t406=get(e->slot(1,3),lit58);return !truth(t406)?V(0.0):t406;})(),([&](){V t407=get(e->slot(1,3),lit59);return !truth(t407)?V(0.0):t407;})(),([&](){V t408=get(e->slot(1,3),lit103);return !truth(t408)?V(0.0):t408;})(),([&](){V t409=([&](){V t410=get(e->slot(1,3),lit114);return truth(t410)?lit360:t410;})();return !truth(t409)?lit361:t409;})(),([&](){V t411=([&](){V t412=get(e->slot(1,3),lit115);return truth(t412)?lit360:t412;})();return !truth(t411)?lit361:t411;})(),([&](){V t413=([&](){V t414=get(e->slot(1,3),lit116);return truth(t414)?lit360:t414;})();return !truth(t413)?lit361:t413;})(),([&](){V t415=([&](){V t416=get(e->slot(1,3),lit117);return truth(t416)?lit360:t416;})();return !truth(t415)?lit361:t415;})(),([&](){V t417=([&](){V t418=get(e->slot(1,3),lit118);return truth(t418)?lit360:t418;})();return !truth(t417)?lit361:t417;})(),([&](){V t419=([&](){V t420=get(e->slot(1,3),lit119);return truth(t420)?lit360:t420;})();return !truth(t419)?lit361:t419;})(),([&](){V t421=([&](){V t422=get(e->slot(1,3),lit120);return truth(t422)?lit360:t422;})();return !truth(t421)?lit361:t421;})(),([&](){V t423=([&](){V t424=get(e->slot(1,3),lit121);return truth(t424)?lit360:t424;})();return !truth(t423)?lit361:t423;})()});
return Args{};}));
Ref(e->slot(0,1),lit362).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit363),Args{lit364});
call(get(e->get("ui"),lit363),call(get(e->slot(1,1),lit354),Args{}));
{double t425=num(V(0.0)),t426=num(V(3.0)),t427=num(V(1.0));for(double t428=t425;(t427>0?t428<=t426:t428>=t426);t428+=t427){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t428);call(get(e->get("ui"),lit363),call(get(e->slot(2,1),lit354),Args{e->slot(0,0)}));
}}
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

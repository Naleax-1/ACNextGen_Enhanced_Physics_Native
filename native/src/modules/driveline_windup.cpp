// Generated native C++ from pinned driveline_windup.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("clutchInertiaRef");
static const V lit7("clutchTorqueRef");
static const V lit8("clutchFrictionRef");
static const V lit9("clutchEngageRate");
static const V lit10("upshiftDelayRef");
static const V lit11("downshiftDelayRef");
static const V lit12("downshiftBlipThrottle");
static const V lit13("inputTauDrive");
static const V lit14("inputTauCoast");
static const V lit15("inputTauReverse");
static const V lit16("torqueScale");
static const V lit17("torqueInputContract");
static const V lit18("original");
static const V lit19("fallbackTorqueScale");
static const V lit20("engineBrakeGain");
static const V lit21("windupStiffness");
static const V lit22("windupDamping");
static const V lit23("windupBuildGain");
static const V lit24("windupReleaseGain");
static const V lit25("shaftTwistGain");
static const V lit26("shaftTorsionGain");
static const V lit27("maxWindup");
static const V lit28("maxWindupVelocity");
static const V lit29("maxShaftTwist");
static const V lit30("backlashThreshold");
static const V lit31("backlashBuildGain");
static const V lit32("backlashDecayGain");
static const V lit33("backlashShockGain");
static const V lit34("throttleReapplyThreshold");
static const V lit35("torqueReverseThreshold");
static const V lit36("clutchKickThrottle");
static const V lit37("clutchReleaseRate");
static const V lit38("clutchShockGain");
static const V lit39("shiftShockGain");
static const V lit40("shiftShockDecay");
static const V lit41("reconnectDecayTau");
static const V lit42("rearSlipReleaseGain");
static const V lit43("rearContactHoldGain");
static const V lit44("rearTrustHoldGain");
static const V lit45("lsdHoldGain");
static const V lit46("rearDeltaYawGain");
static const V lit47("wheelOmegaScale");
static const V lit48("rearDiffScale");
static const V lit49("biteShockGain");
static const V lit50("dirtyReturnReleaseGain");
static const V lit51("dirtyReturnTorqueLoss");
static const V lit52("snapReleaseGain");
static const V lit53("gripReturnHoldGain");
static const V lit54("recoveryDragGain");
static const V lit55("yawBudgetYawGain");
static const V lit56("yawBiteYawGain");
static const V lit57("yawDirtyDampGain");
static const V lit58("memoryRecoveryGain");
static const V lit59("recontactShockGain");
static const V lit60("carcassHysteresisReleaseGain");
static const V lit61("carcassRecoveryBiasGain");
static const V lit62("lowSpeedKmh");
static const V lit63("driveThreshold");
static const V lit64("coastThreshold");
static const V lit65("windupThreshold");
static const V lit66("releaseThreshold");
static const V lit67("spinReleaseThreshold");
static const V lit68("biteThreshold");
static const V lit69("dirtyThreshold");
static const V lit70("softTorqueGain");
static const V lit71("rearPushGain");
static const V lit72("yawHintGain");
static const V lit73("minDt");
static const V lit74("maxDt");
static const V lit75("offlineDecayTau");
static const V lit76("debugStoreInterval");
static const V lit77("state");
static const V lit78("status");
static const V lit79("INIT");
static const V lit80("updateCount");
static const V lit81("wheelsValid");
static const V lit82("phaseId");
static const V lit83("phaseText");
static const V lit84("speedKmh");
static const V lit85("rpm");
static const V lit86("gear");
static const V lit87("throttle");
static const V lit88("brake");
static const V lit89("clutch");
static const V lit90("handbrake");
static const V lit91("rawDemand");
static const V lit92("demand");
static const V lit93("prevDemand");
static const V lit94("demandRate");
static const V lit95("driveTorqueIn");
static const V lit96("torqueSource");
static const V lit97("FALLBACK");
static const V lit98("clutchEngagement");
static const V lit99("clutchRate");
static const V lit100("clutchShock");
static const V lit101("windup");
static const V lit102("windupVelocity");
static const V lit103("windupEnergy");
static const V lit104("windupTorque");
static const V lit105("shaftTwist");
static const V lit106("shaftTwistVelocity");
static const V lit107("torsionLoad");
static const V lit108("transmittedTorque");
static const V lit109("softTorque");
static const V lit110("rearPush");
static const V lit111("yawHint");
static const V lit112("release");
static const V lit113("recoveryDrag");
static const V lit114("backlash");
static const V lit115("backlashShock");
static const V lit116("shiftShock");
static const V lit117("reconnectShock");
static const V lit118("biteShock");
static const V lit119("dirtyReturn");
static const V lit120("rearOmegaL");
static const V lit121("rearOmegaR");
static const V lit122("rearOmegaAvg");
static const V lit123("rearOmegaDiff");
static const V lit124("rearSlip");
static const V lit125("rearContact");
static const V lit126("rearTrust");
static const V lit127("rearGripReturn");
static const V lit128("rearSnapRisk");
static const V lit129("rearBite");
static const V lit130("rearDirtyReturn");
static const V lit131("rearRecoveryRate");
static const V lit132("rearRecontact");
static const V lit133("lsdLock");
static const V lit134("yawBudget");
static const V lit135("yawBite");
static const V lit136("yawDirty");
static const V lit137("yawSpinRisk");
static const V lit138("prevGear");
static const V lit139("prevClutch");
static const V lit140("prevThrottle");
static const V lit141("prevTorqueSign");
static const V lit142("linkedDrivetrain");
static const V lit143("linkedLSD");
static const V lit144("linkedContact");
static const V lit145("linkedYawBudget");
static const V lit146("linkedSlipRecovery");
static const V lit147("linkedMemory");
static const V lit148("linkedCarcass");
static const V lit149("wheels");
static const V lit150("debugStoreTimer");
static const V lit151("debugStoreNow");
static const V lit152("omega");
static const V lit153("slipRatio");
static const V lit154("contactQuality");
static const V lit155("contactTrust");
static const V lit156("carcassSupport");
static const V lit157("carcassHysteresis");
static const V lit158("carcassRecoveryBias");
static const V lit159("gripReturn");
static const V lit160("snapRisk");
static const V lit161("bite");
static const V lit162("recoveryRate");
static const V lit163("recontact");
static const V lit164("memory");
static const V lit165("recoveryScalar");
static const V lit166("recontactShock");
static const V lit167("windupShare");
static const V lit168("torqueShare");
static const V lit169("releaseShare");
static const V lit170("biteShare");
static const V lit171("dirtyShare");
static const V lit172("debug");
static const V lit173("huge");
static const V lit174("abs");
static const V lit175("exp");
static const V lit176("max");
static const V lit177("safeField");
static const V lit178("safeLoadRaw");
static const V lit179("safeStore");
static const V lit180("length");
static const V lit181("function");
static const V lit182("number");
static const V lit183("x");
static const V lit184("y");
static const V lit185("z");
static const V lit186("sqrt");
static const V lit187("velocity");
static const V lit188("localVelocity");
static const V lit189("angularSpeed");
static const V lit190("ngp_contact_slip_ratio_");
static const V lit191("ngp_slip_ratio_");
static const V lit192("ngp_slip_recovery_slip_");
static const V lit193("slip");
static const V lit194("floor");
static const V lit195("gas");
static const V lit196("drivetrain_normalized_v1");
static const V lit197("Invalid windup torque input contract");
static const V lit198("ngp_drivetrain_update_count");
static const V lit199("ngp_drivetrain_status");
static const V lit200("ngp_dt_update_count");
static const V lit201("ngp_drivetrain_transmitted_torque");
static const V lit202("ngp_drivetrain_drive_torque");
static const V lit203("ngp_dt_transmitted_torque");
static const V lit204("ngp_dt_torque");
static const V lit205("ngp_flywheel_drive_torque");
static const V lit206("ngp_engine_drive_torque");
static const V lit207("ngp_drive_transmitted_torque");
static const V lit208("ngp_drive_torque");
static const V lit209("ngp_drivetrain_torque");
static const V lit210("Missing or invalid normalized drivetrain owner input");
static const V lit211("ngp_lsd_lock");
static const V lit212("ngp_diff_lock");
static const V lit213("ngp_windup_lsd_lock");
static const V lit214("ngp_yaw_budget");
static const V lit215("ngp_yaw_bite");
static const V lit216("ngp_yaw_dirty_return");
static const V lit217("ngp_yaw_dirty_energy");
static const V lit218("ngp_yaw_spin_risk");
static const V lit219("ngp_contact_quality_");
static const V lit220("ngp_tire_contact_quality_");
static const V lit221("ngp_tcr_quality_");
static const V lit222("ngp_contact_trust_");
static const V lit223("ngp_tire_contact_trust_");
static const V lit224("ngp_contact_loss_");
static const V lit225("ngp_tire_contact_loss_");
static const V lit226("ngp_tcr_contact_loss_");
static const V lit227("ngp_carcass_support_");
static const V lit228("ngp_carcass_hysteresis_");
static const V lit229("ngp_carcass_recovery_bias_");
static const V lit230("ngp_slip_grip_return_");
static const V lit231("ngp_slip_snap_risk_");
static const V lit232("ngp_slip_bite_");
static const V lit233("ngp_slip_dirty_return_");
static const V lit234("ngp_slip_recovery_rate_");
static const V lit235("ngp_slip_recontact_");
static const V lit236("ngp_slip_recovery_recontact_");
static const V lit237("ngp_tire_memory_");
static const V lit238("ngp_memory_");
static const V lit239("ngp_memory_recovery_scalar_");
static const V lit240("ngp_tire_memory_recovery_scalar_");
static const V lit241("ngp_memory_recontact_shock_");
static const V lit242("min");
static const V lit243("_rearOmegaNorm");
static const V lit244("LOW_SPEED");
static const V lit245("NEUTRAL");
static const V lit246("SHIFT_SHOCK");
static const V lit247("RECONNECT");
static const V lit248("BITE_RECONTACT");
static const V lit249("DIRTY_RETURN");
static const V lit250("BACKLASH");
static const V lit251("RELEASE");
static const V lit252("WINDUP_DRIVE");
static const V lit253("WINDUP_COAST");
static const V lit254("TAKEUP");
static const V lit255("COAST_DRAG");
static const V lit256("IDLE");
static const V lit257("ngp_windup_wheel_omega_");
static const V lit258("ngp_windup_wheel_slip_");
static const V lit259("ngp_windup_wheel_contact_");
static const V lit260("ngp_windup_wheel_trust_");
static const V lit261("ngp_windup_wheel_energy_");
static const V lit262("ngp_windup_wheel_torque_");
static const V lit263("ngp_windup_wheel_release_");
static const V lit264("ngp_windup_wheel_bite_");
static const V lit265("ngp_windup_wheel_dirty_");
static const V lit266("ngp_windup_status");
static const V lit267("UNKNOWN");
static const V lit268("ngp_windup_update_count");
static const V lit269("ngp_windup_wheels_valid");
static const V lit270("ngp_windup_phase");
static const V lit271("ngp_windup_phase_id");
static const V lit272("ngp_windup_demand");
static const V lit273("ngp_windup_raw_demand");
static const V lit274("ngp_windup_demand_rate");
static const V lit275("ngp_windup_value");
static const V lit276("ngp_windup_velocity");
static const V lit277("ngp_windup_energy");
static const V lit278("ngp_windup_torque");
static const V lit279("ngp_windup_shaft_twist");
static const V lit280("ngp_windup_torsion_load");
static const V lit281("ngp_windup_transmitted_torque");
static const V lit282("ngp_drive_soft_torque");
static const V lit283("ngp_drive_soft_rear_push");
static const V lit284("ngp_drive_soft_yaw");
static const V lit285("ngp_windup_release");
static const V lit286("ngp_windup_recovery_drag");
static const V lit287("ngp_windup_backlash");
static const V lit288("ngp_windup_backlash_shock");
static const V lit289("ngp_windup_shift_shock");
static const V lit290("ngp_windup_reconnect_shock");
static const V lit291("ngp_windup_bite");
static const V lit292("ngp_windup_dirty_return");
static const V lit293("ngp_windup_clutch_engagement");
static const V lit294("ngp_windup_clutch_shock");
static const V lit295("ngp_windup_rear_omega_avg");
static const V lit296("ngp_windup_rear_omega_diff");
static const V lit297("ngp_windup_rear_slip");
static const V lit298("ngp_windup_rear_contact");
static const V lit299("ngp_windup_rear_trust");
static const V lit300("ngp_windup_rear_bite");
static const V lit301("ngp_windup_rear_dirty");
static const V lit302("ngp_windup_rear_snap");
static const V lit303("ngp_driveline_windup");
static const V lit304("ngp_driveline_energy");
static const V lit305("ngp_driveline_release");
static const V lit306("ngp_driveline_backlash");
static const V lit307("ngp_driveline_rear_push");
static const V lit308("ngp_driveline_yaw_hint");
static const V lit309("ngp_driveline_twist");
static const V lit310("ngp_driveline_shaft_velocity");
static const V lit311("ngp_driveline_lash");
static const V lit312("ngp_driveline_lash_shock");
static const V lit313("ngp_driveline_shift_shock");
static const V lit314("ngp_driveline_reconnect_shock");
static const V lit315("ngp_driveline_bite");
static const V lit316("ngp_driveline_dirty_return");
static const V lit317("ngp_driveline_torque_source");
static const V lit318("ngp_shaft_twist");
static const V lit319("ngp_shaft_velocity");
static const V lit320("ngp_drive_lash");
static const V lit321("ngp_drive_lash_shock");
static const V lit322("ngp_shift_shock");
static const V lit323("ngp_drive_contact_loss");
static const V lit324("ngp_drive_hop_shock");
static const V lit325("ngp_drive_soft_yaw_hint");
static const V lit326("ngp_windup_torque_source");
static const V lit327("ngp_windup_link_drivetrain");
static const V lit328("ngp_windup_link_lsd");
static const V lit329("ngp_windup_link_contact");
static const V lit330("ngp_windup_link_yaw_budget");
static const V lit331("ngp_windup_link_slip_recovery");
static const V lit332("ngp_windup_link_memory");
static const V lit333("ngp_windup_link_carcass");
static const V lit334("ngp_windup_throttle");
static const V lit335("ngp_windup_brake");
static const V lit336("ngp_windup_clutch");
static const V lit337("ngp_windup_gear");
static const V lit338("ngp_windup_speed_kmh");
static const V lit339("ngp_windup_yaw_budget");
static const V lit340("init");
static const V lit341("update");
static const V lit342("BAD DT");
static const V lit343("getCar");
static const V lit344("NO CAR");
static const V lit345("NO WHEELS");
static const V lit346("RUNNING");
static const V lit347("getWindup");
static const V lit348("getEnergy");
static const V lit349("getSoftTorque");
static const V lit350("getRearPush");
static const V lit351("getRelease");
static const V lit352("getBacklash");
static const V lit353("getShaftTwist");
static const V lit354("getYawHint");
static const V lit355("getState");
static const V lit356("debugStr");
static const V lit357("format");
static const V lit358("%s %s / W %.3f / T %+.3f / R %.3f\n");
static const V lit359("Omega %.2f / Slip %.3f / CQ %.2f Trust %.2f\n");
static const V lit360("Bite %.2f Dirty %.2f");
static const V lit361("Status %s / Count %.0f / Phase %s\n");
static const V lit362("Demand %+.3f / Windup %+.3f / Energy %.3f / SoftT %+.3f\n");
static const V lit363("Release %.3f / Backlash %.3f / Shift %.3f / Reconnect %.3f\n");
static const V lit364("Bite %.3f / Dirty %.3f / Drag %.3f / Clutch %.3f\n");
static const V lit365("RearPush %.3f / YawHint %+.3f / ROmega %.2f d%.2f\n");
static const V lit366("Links DT:%s LSD:%s CQ:%s YMB:%s SR:%s MEM:%s CS:%s Source:%s");
static const V lit367("OK");
static const V lit368("NIL");
V load_driveline_windup(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(33);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(0.05));set(z,lit7,V(250.0));set(z,lit8,V(3.1));set(z,lit9,V(1.5));set(z,lit10,V(0.1));set(z,lit11,V(0.1));set(z,lit12,V(0.4));set(z,lit13,V(0.055));set(z,lit14,V(0.075));set(z,lit15,V(0.045));set(z,lit16,V(1.0));set(z,lit17,lit18);set(z,lit19,V(1.0));set(z,lit20,V(0.16));set(z,lit21,V(7.8));set(z,lit22,V(1.55));set(z,lit23,V(1.2));set(z,lit24,V(1.45));set(z,lit25,V(1.0));set(z,lit26,V(0.42));set(z,lit27,V(1.0));set(z,lit28,V(8.0));set(z,lit29,V(1.0));set(z,lit30,V(0.06));set(z,lit31,V(0.95));set(z,lit32,V(2.1));set(z,lit33,V(0.45));set(z,lit34,V(0.12));set(z,lit35,V(0.16));set(z,lit36,V(0.35));set(z,lit37,V(2.5));set(z,lit38,V(0.38));set(z,lit39,V(0.55));set(z,lit40,V(5.0));set(z,lit41,V(0.06));set(z,lit42,V(0.55));set(z,lit43,V(0.3));set(z,lit44,V(0.24));set(z,lit45,V(0.22));set(z,lit46,V(0.35));set(z,lit47,V(80.0));set(z,lit48,V(28.0));set(z,lit49,V(0.55));set(z,lit50,V(0.42));set(z,lit51,V(0.22));set(z,lit52,V(0.35));set(z,lit53,V(0.22));set(z,lit54,V(0.36));set(z,lit55,V(0.2));set(z,lit56,V(0.28));set(z,lit57,V(0.18));set(z,lit58,V(0.25));set(z,lit59,V(0.38));set(z,lit60,V(0.24));set(z,lit61,V(0.18));set(z,lit62,V(3.0));set(z,lit63,V(0.08));set(z,lit64,V(-num(V(0.05))));set(z,lit65,V(0.16));set(z,lit66,V(0.18));set(z,lit67,V(0.45));set(z,lit68,V(0.32));set(z,lit69,V(0.38));set(z,lit70,V(1.0));set(z,lit71,V(0.75));set(z,lit72,V(0.45));set(z,lit73,V(0.0005));set(z,lit74,V(0.1));set(z,lit75,V(0.25));set(z,lit76,V(0.25));return z;})();refs[0].put(std::move(t4));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit77)};V t5=([&](){V z=table();set(z,lit78,lit79);set(z,lit80,V(0.0));set(z,lit81,V(false));set(z,lit82,V(0.0));set(z,lit83,lit79);set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(1.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,lit97);set(z,lit98,V(1.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(1.0));set(z,lit126,V(1.0));set(z,lit127,V(1.0));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit130,V(0.0));set(z,lit131,V(0.0));set(z,lit132,V(0.0));set(z,lit133,V(0.0));set(z,lit134,V(0.0));set(z,lit135,V(0.0));set(z,lit136,V(0.0));set(z,lit137,V(0.0));set(z,lit138,V(0.0));set(z,lit139,V(1.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(false));set(z,lit143,V(false));set(z,lit144,V(false));set(z,lit145,V(false));set(z,lit146,V(false));set(z,lit147,V(false));set(z,lit148,V(false));set(z,lit149,([&](){V z=table();return z;})());set(z,lit150,V(999.0));set(z,lit151,V(true));return z;})();refs[0].put(std::move(t5));}
{double t6=num(V(0.0)),t7=num(V(3.0)),t8=num(V(1.0));for(double t9=t6;(t8>0?t9<=t7:t9>=t7);t9+=t8){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t9);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit77),lit149),e->slot(0,0))};V t10=([&](){V z=table();set(z,lit152,V(0.0));set(z,lit153,V(0.0));set(z,lit154,V(1.0));set(z,lit155,V(1.0));set(z,lit156,V(1.0));set(z,lit157,V(0.0));set(z,lit158,V(0.0));set(z,lit159,V(1.0));set(z,lit160,V(0.0));set(z,lit161,V(0.0));set(z,lit119,V(0.0));set(z,lit162,V(0.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(1.0));set(z,lit166,V(0.0));set(z,lit167,V(0.0));set(z,lit168,V(0.0));set(z,lit169,V(0.0));set(z,lit170,V(0.0));set(z,lit171,V(0.0));return z;})();refs[0].put(std::move(t10));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),e->slot(0,0))};V t11=get(get(get(e->slot(1,1),lit77),lit149),e->slot(0,0));refs[0].put(std::move(t11));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit172)};V t12=get(e->slot(0,1),lit77);refs[0].put(std::move(t12));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(([&](){V t14=eq(e->slot(0,2),V());return !truth(t14)?ne(e->slot(0,2),e->slot(0,2)):t14;})())){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
if(truth(([&](){V t16=eq(e->slot(0,2),get(e->get("math"),lit173));return !truth(t16)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit173)))):t16;})())){return Args{([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,3),Args{e->slot(0,0),([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()}));refs[0].put(std::move(t18));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit174),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t20));}
if(truth(gt(e->slot(0,0),V(0.0001)))){return Args{V(1.0)};
}
if(truth(lt(e->slot(0,0),V(-num(V(0.0001)))))){return Args{V(-num(V(1.0)))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t21=first(call(e->slot(1,4),Args{e->slot(0,0),V(-num(V(20.0))),V(20.0)}));refs[0].put(std::move(t21));}
{V t22=first(call(get(e->get("math"),lit175),Args{mul(V(2.0),e->slot(0,0))}));e->slot(0,1)=std::move(t22);}
return Args{divv(sub(e->slot(0,1),V(1.0)),add(e->slot(0,1),V(1.0)))};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t23=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t24=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t25=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t26=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t26));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),divv(e->slot(0,3),first(call(get(e->get("math"),lit176),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)})))))};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t27=([&](){V t28=ge(e->slot(0,2),e->slot(0,1));return truth(t28)?V(1.0):t28;})();return !truth(t27)?V(0.0):t27;})()};
}
{V t29=first(call(e->slot(1,4),Args{divv(sub(first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t29);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
{V t30=get(e->slot(0,0),lit177);e->slot(0,10)=std::move(t30);}
{V t31=get(e->slot(0,0),lit178);e->slot(0,11)=std::move(t31);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t32=first(call(e->slot(1,11),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t32);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t33=e->slot(0,1);return !truth(t33)?V(0.0):t33;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t34=e->slot(0,1);return !truth(t34)?V(0.0):t34;})()});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t35=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t35);}
{double t36=num(V(1.0)),t37=num(length(e->slot(0,1))),t38=num(V(1.0));for(double t39=t36;(t38>0?t39<=t37:t39>=t37);t39+=t38){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t39);{V t40=first(call(e->slot(2,11),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t40);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t41=e->slot(1,0);return !truth(t41)?V(0.0):t41;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t42=e->slot(0,0);return !truth(t42)?V(0.0):t42;})(),V()};
return Args{};});
{V t43=get(e->slot(0,0),lit179);e->slot(0,14)=std::move(t43);}
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t44=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit180)})),lit181))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit180)})),lit182))){return Args{get(e->slot(1,0),lit180)};
}
{V t45=first(call(e->slot(2,3),Args{get(e->slot(1,0),lit183),V(0.0)}));e->slot(0,0)=std::move(t45);}
{V t46=first(call(e->slot(2,3),Args{get(e->slot(1,0),lit184),V(0.0)}));e->slot(0,1)=std::move(t46);}
{V t47=first(call(e->slot(2,3),Args{get(e->slot(1,0),lit185),V(0.0)}));e->slot(0,2)=std::move(t47);}
return call(get(e->get("math"),lit186),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t44,0);e->slot(0,2)=arg(t44,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,3),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t48=first(call(e->slot(1,10),Args{e->slot(0,0),lit84,V()}));e->slot(0,1)=std::move(t48);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,3),Args{e->slot(0,1),V(0.0)});
}
{V t49=V();e->slot(0,2)=std::move(t49);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,3),Args{e->slot(0,2),V(0.0)});
}
{V t50=first(call(e->slot(1,10),Args{e->slot(0,0),lit187,V()}));e->slot(0,3)=std::move(t50);}
if(truth(e->slot(0,3))){return Args{mul(first(call(e->slot(1,15),Args{e->slot(0,3)})),V(3.6))};
}
{V t51=first(call(e->slot(1,10),Args{e->slot(0,0),lit188,V()}));e->slot(0,4)=std::move(t51);}
if(truth(e->slot(0,4))){return Args{mul(first(call(e->slot(1,15),Args{e->slot(0,4)})),V(3.6))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t52=first(call(e->slot(1,10),Args{e->slot(0,0),lit149,V()}));e->slot(0,2)=std::move(t52);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t53=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t54=get(e->slot(1,2),e->slot(1,1));return !truth(t54)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t54;})()};
return Args{};})});e->slot(0,3)=arg(t53,0);e->slot(0,4)=arg(t53,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
return call(e->slot(1,3),Args{([&](){V t55=([&](){V t56=([&](){V t57=first(call(e->slot(1,10),Args{e->slot(0,0),lit189,V()}));return !truth(t57)?V():t57;})();return !truth(t56)?V():t56;})();return !truth(t55)?V(0.0):t55;})(),V(0.0)});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t58=first(call(e->slot(1,11),Args{concat(lit190,e->slot(0,1))}));e->slot(0,2)=std::move(t58);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,5),Args{e->slot(0,2)});
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t59=first(call(e->slot(1,11),Args{concat(lit191,e->slot(0,1))}));refs[0].put(std::move(t59));}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,5),Args{e->slot(0,2)});
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t60=first(call(e->slot(1,11),Args{concat(lit192,e->slot(0,1))}));refs[0].put(std::move(t60));}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,5),Args{e->slot(0,2)});
}
if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
return call(e->slot(1,5),Args{([&](){V t61=([&](){V t62=([&](){V t63=first(call(e->slot(1,10),Args{e->slot(0,0),lit153,V()}));return !truth(t63)?V():t63;})();return !truth(t62)?first(call(e->slot(1,10),Args{e->slot(0,0),lit193,V()})):t62;})();return !truth(t61)?V(0.0):t61;})()});
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit150)};V t64=add(([&](){V t65=get(get(e->slot(1,1),lit77),lit150);return !truth(t65)?V(0.0):t65;})(),([&](){V t66=e->slot(0,0);return !truth(t66)?V(0.0):t66;})());refs[0].put(std::move(t64));}
if(truth(ge(get(get(e->slot(1,1),lit77),lit150),get(get(e->slot(1,1),lit5),lit76)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit150)};V t67=V(0.0);refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit151)};V t68=V(true);refs[0].put(std::move(t68));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit151)};V t69=V(false);refs[0].put(std::move(t69));}
}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t70=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t70);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit84)};V t71=first(call(e->slot(1,16),Args{e->slot(0,0)}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit85)};V t72=first(call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),lit85,V(0.0)})),V(0.0)}));refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit86)};V t73=first(call(get(e->get("math"),lit194),call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),lit86,V(0.0)})),V(0.0)})));refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit87)};V t74=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),lit195,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit88)};V t75=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),lit88,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit90)};V t76=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),lit90,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit89)};V t77=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),lit89,V(1.0)})),V(1.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t77));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;{V t78=get(e->slot(1,1),lit77);e->slot(0,0)=std::move(t78);}
{V t79=get(get(e->slot(1,1),lit5),lit17);e->slot(0,1)=std::move(t79);}
if(truth(([&](){V t80=ne(e->slot(0,1),lit18);return truth(t80)?ne(e->slot(0,1),lit196):t80;})())){call(e->get("error"),Args{lit197});
}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit142)};V t81=V(false);refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit143)};V t82=V(false);refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit145)};V t83=V(false);refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit146)};V t84=V(false);refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit147)};V t85=V(false);refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit148)};V t86=V(false);refs[0].put(std::move(t86));}
{V t87=([&](){V t88=([&](){V t89=ne(first(call(e->slot(1,11),Args{lit198})),V());return !truth(t89)?ne(first(call(e->slot(1,11),Args{lit199})),V()):t89;})();return !truth(t88)?ne(first(call(e->slot(1,11),Args{lit200})),V()):t88;})();e->slot(0,2)=std::move(t87);}
{V t90=V(0.0);e->slot(0,3)=std::move(t90);}
{V t91=V();e->slot(0,4)=std::move(t91);}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t92=call(e->slot(1,13),Args{V(0.0),lit201,lit202,lit203,lit204,lit205,lit206});refs[0].put(arg(t92,0));refs[1].put(arg(t92,1));}
if(truth(([&](){V t93=eq(e->slot(0,4),V());return truth(t93)?e->slot(0,2):t93;})())){{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t94=call(e->slot(1,13),Args{V(0.0),lit207,lit208});refs[0].put(arg(t94,0));refs[1].put(arg(t94,1));}
}
if(truth(eq(e->slot(0,1),lit196))){{std::array<Ref,1> refs{Ref(e,0,3)};V t95=first(call(e->slot(1,11),Args{lit209}));refs[0].put(std::move(t95));}
if(truth(([&](){V t96=([&](){V t97=ne(first(call(e->get("type"),Args{e->slot(0,3)})),lit182);return !truth(t97)?ne(e->slot(0,3),e->slot(0,3)):t97;})();return !truth(t96)?gt(first(call(get(e->get("math"),lit174),Args{e->slot(0,3)})),V(1.0)):t96;})())){call(e->get("error"),Args{lit210});
}
{std::array<Ref,1> refs{Ref(e,0,4)};V t98=lit209;refs[0].put(std::move(t98));}
}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,0),lit142)};V t99=V(true);refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit96)};V t100=e->slot(0,4);refs[0].put(std::move(t100));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,0),lit96)};V t101=lit97;refs[0].put(std::move(t101));}
}
{Args t102=call(e->slot(1,13),Args{V(0.0),lit211,lit212,lit213});e->slot(0,5)=arg(t102,0);e->slot(0,6)=arg(t102,1);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,0),lit143)};V t103=V(true);refs[0].put(std::move(t103));}
}
if(truth(gt(e->slot(0,5),V(1.5)))){{std::array<Ref,1> refs{Ref(e,0,5)};V t104=divv(e->slot(0,5),V(100.0));refs[0].put(std::move(t104));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit133)};V t105=first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(1.0)}));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit95)};V t106=e->slot(0,3);refs[0].put(std::move(t106));}
{V t107=first(call(e->slot(1,11),Args{lit214}));e->slot(0,7)=std::move(t107);}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e->slot(0,0),lit145)};V t108=V(true);refs[0].put(std::move(t108));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit134)};V t109=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,7),V(0.0)})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit135)};V t110=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{lit215,V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit136)};V t111=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),joined(Args{lit216},call(e->slot(1,12),Args{lit217,V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit137)};V t112=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{lit218,V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t112));}
if(truth(([&](){V t113=([&](){V t114=([&](){V t115=ne(first(call(e->slot(1,11),Args{lit215})),V());return !truth(t115)?ne(first(call(e->slot(1,11),Args{lit216})),V()):t115;})();return !truth(t114)?ne(first(call(e->slot(1,11),Args{lit217})),V()):t114;})();return !truth(t113)?ne(first(call(e->slot(1,11),Args{lit218})),V()):t113;})())){{std::array<Ref,1> refs{Ref(e->slot(0,0),lit145)};V t116=V(true);refs[0].put(std::move(t116));}
}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);{V t117=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t117);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t118=V(false);refs[0].put(std::move(t118));}
{V t119=V(0.0);e->slot(0,2)=std::move(t119);}
{V t120=V(0.0);e->slot(0,3)=std::move(t120);}
{V t121=V(0.0);e->slot(0,4)=std::move(t121);}
{V t122=V(0.0);e->slot(0,5)=std::move(t122);}
{V t123=V(0.0);e->slot(0,6)=std::move(t123);}
{V t124=V(0.0);e->slot(0,7)=std::move(t124);}
{V t125=V(0.0);e->slot(0,8)=std::move(t125);}
{V t126=V(0.0);e->slot(0,9)=std::move(t126);}
{V t127=V(0.0);e->slot(0,10)=std::move(t127);}
{double t128=num(V(0.0)),t129=num(V(3.0)),t130=num(V(1.0));for(double t131=t128;(t130>0?t131<=t129:t131>=t129);t131+=t130){auto parent=e;Env storage(parent,false,18);auto e=&storage;e->slot(0,0)=V(t131);{V t132=first(call(e->slot(2,17),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,1)=std::move(t132);}
{V t133=get(get(e->slot(1,1),lit149),e->slot(0,0));e->slot(0,2)=std::move(t133);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit152)};V t134=first(call(e->slot(2,18),Args{e->slot(0,1)}));refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit153)};V t135=first(call(e->slot(2,19),Args{e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t135));}
{V t136=first(call(e->slot(2,11),Args{concat(lit219,e->slot(0,0))}));e->slot(0,3)=std::move(t136);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t137=first(call(e->slot(2,11),Args{concat(lit220,e->slot(0,0))}));refs[0].put(std::move(t137));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t138=first(call(e->slot(2,11),Args{concat(lit221,e->slot(0,0))}));refs[0].put(std::move(t138));}
}
{V t139=first(call(e->slot(2,11),Args{concat(lit222,e->slot(0,0))}));e->slot(0,4)=std::move(t139);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t140=first(call(e->slot(2,11),Args{concat(lit223,e->slot(0,0))}));refs[0].put(std::move(t140));}
}
{V t141=first(call(e->slot(2,11),Args{concat(lit224,e->slot(0,0))}));e->slot(0,5)=std::move(t141);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t142=first(call(e->slot(2,11),Args{concat(lit225,e->slot(0,0))}));refs[0].put(std::move(t142));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t143=first(call(e->slot(2,11),Args{concat(lit226,e->slot(0,0))}));refs[0].put(std::move(t143));}
}
if(truth(([&](){V t144=([&](){V t145=ne(e->slot(0,3),V());return !truth(t145)?ne(e->slot(0,4),V()):t145;})();return !truth(t144)?ne(e->slot(0,5),V()):t144;})())){{std::array<Ref,1> refs{Ref(e->slot(1,1),lit144)};V t146=V(true);refs[0].put(std::move(t146));}
}
if(truth(([&](){V t147=eq(e->slot(0,3),V());return truth(t147)?ne(e->slot(0,5),V()):t147;})())){{std::array<Ref,1> refs{Ref(e,0,3)};V t148=sub(V(1.0),first(call(e->slot(2,3),Args{e->slot(0,5),V(0.0)})));refs[0].put(std::move(t148));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit154)};V t149=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit155)};V t150=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,4),get(e->slot(0,2),lit154)})),V(0.0),V(1.2)}));refs[0].put(std::move(t150));}
{V t151=first(call(e->slot(2,11),Args{concat(lit227,e->slot(0,0))}));e->slot(0,6)=std::move(t151);}
{V t152=first(call(e->slot(2,11),Args{concat(lit228,e->slot(0,0))}));e->slot(0,7)=std::move(t152);}
{V t153=first(call(e->slot(2,11),Args{concat(lit229,e->slot(0,0))}));e->slot(0,8)=std::move(t153);}
if(truth(([&](){V t154=([&](){V t155=ne(e->slot(0,6),V());return !truth(t155)?ne(e->slot(0,7),V()):t155;})();return !truth(t154)?ne(e->slot(0,8),V()):t154;})())){{std::array<Ref,1> refs{Ref(e->slot(1,1),lit148)};V t156=V(true);refs[0].put(std::move(t156));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit156)};V t157=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit157)};V t158=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit158)};V t159=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t159));}
{V t160=first(call(e->slot(2,11),Args{concat(lit230,e->slot(0,0))}));e->slot(0,9)=std::move(t160);}
{V t161=first(call(e->slot(2,11),Args{concat(lit231,e->slot(0,0))}));e->slot(0,10)=std::move(t161);}
{V t162=first(call(e->slot(2,11),Args{concat(lit232,e->slot(0,0))}));e->slot(0,11)=std::move(t162);}
{V t163=first(call(e->slot(2,11),Args{concat(lit233,e->slot(0,0))}));e->slot(0,12)=std::move(t163);}
{V t164=first(call(e->slot(2,11),Args{concat(lit234,e->slot(0,0))}));e->slot(0,13)=std::move(t164);}
{V t165=first(call(e->slot(2,11),Args{concat(lit235,e->slot(0,0))}));e->slot(0,14)=std::move(t165);}
if(truth(eq(e->slot(0,14),V()))){{std::array<Ref,1> refs{Ref(e,0,14)};V t166=first(call(e->slot(2,11),Args{concat(lit236,e->slot(0,0))}));refs[0].put(std::move(t166));}
}
if(truth(([&](){V t167=([&](){V t168=([&](){V t169=([&](){V t170=([&](){V t171=ne(e->slot(0,9),V());return !truth(t171)?ne(e->slot(0,10),V()):t171;})();return !truth(t170)?ne(e->slot(0,11),V()):t170;})();return !truth(t169)?ne(e->slot(0,12),V()):t169;})();return !truth(t168)?ne(e->slot(0,13),V()):t168;})();return !truth(t167)?ne(e->slot(0,14),V()):t167;})())){{std::array<Ref,1> refs{Ref(e->slot(1,1),lit146)};V t172=V(true);refs[0].put(std::move(t172));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit159)};V t173=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,9),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit160)};V t174=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit161)};V t175=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit119)};V t176=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit162)};V t177=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,13),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit163)};V t178=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t178));}
{V t179=first(call(e->slot(2,11),Args{concat(lit237,e->slot(0,0))}));e->slot(0,15)=std::move(t179);}
if(truth(eq(e->slot(0,15),V()))){{std::array<Ref,1> refs{Ref(e,0,15)};V t180=first(call(e->slot(2,11),Args{concat(lit238,e->slot(0,0))}));refs[0].put(std::move(t180));}
}
{V t181=first(call(e->slot(2,11),Args{concat(lit239,e->slot(0,0))}));e->slot(0,16)=std::move(t181);}
if(truth(eq(e->slot(0,16),V()))){{std::array<Ref,1> refs{Ref(e,0,16)};V t182=first(call(e->slot(2,11),Args{concat(lit240,e->slot(0,0))}));refs[0].put(std::move(t182));}
}
{V t183=first(call(e->slot(2,11),Args{concat(lit241,e->slot(0,0))}));e->slot(0,17)=std::move(t183);}
if(truth(([&](){V t184=([&](){V t185=ne(e->slot(0,15),V());return !truth(t185)?ne(e->slot(0,16),V()):t185;})();return !truth(t184)?ne(e->slot(0,17),V()):t184;})())){{std::array<Ref,1> refs{Ref(e->slot(1,1),lit147)};V t186=V(true);refs[0].put(std::move(t186));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit164)};V t187=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,15),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit165)};V t188=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,16),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit166)};V t189=first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,17),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t189));}
if(truth(ge(e->slot(0,0),V(2.0)))){{std::array<Ref,1> refs{Ref(e,1,2)};V t190=add(e->slot(1,2),get(e->slot(0,2),lit154));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t191=add(e->slot(1,3),get(e->slot(0,2),lit155));refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t192=add(e->slot(1,4),get(e->slot(0,2),lit153));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t193=add(e->slot(1,5),get(e->slot(0,2),lit159));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t194=add(e->slot(1,6),get(e->slot(0,2),lit160));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t195=add(e->slot(1,7),get(e->slot(0,2),lit161));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t196=add(e->slot(1,8),get(e->slot(0,2),lit119));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t197=add(e->slot(1,9),get(e->slot(0,2),lit162));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t198=add(e->slot(1,10),get(e->slot(0,2),lit163));refs[0].put(std::move(t198));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit120)};V t199=([&](){V t200=get(get(get(e->slot(0,1),lit149),V(2.0)),lit152);return !truth(t200)?V(0.0):t200;})();refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit121)};V t201=([&](){V t202=get(get(get(e->slot(0,1),lit149),V(3.0)),lit152);return !truth(t202)?V(0.0):t202;})();refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit122)};V t203=mul(add(get(e->slot(0,1),lit120),get(e->slot(0,1),lit121)),V(0.5));refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit123)};V t204=sub(get(e->slot(0,1),lit121),get(e->slot(0,1),lit120));refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t205=first(call(e->slot(1,4),Args{mul(e->slot(0,2),V(0.5)),V(0.0),V(1.2)}));refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t206=first(call(e->slot(1,4),Args{mul(e->slot(0,3),V(0.5)),V(0.0),V(1.2)}));refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t207=first(call(e->slot(1,4),Args{mul(e->slot(0,4),V(0.5)),V(0.0),V(2.0)}));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t208=first(call(e->slot(1,4),Args{mul(e->slot(0,5),V(0.5)),V(0.0),V(1.2)}));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t209=first(call(e->slot(1,4),Args{mul(e->slot(0,6),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t210=first(call(e->slot(1,4),Args{mul(e->slot(0,7),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t211=first(call(e->slot(1,4),Args{mul(e->slot(0,8),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t212=first(call(e->slot(1,4),Args{mul(e->slot(0,9),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit132)};V t213=first(call(e->slot(1,4),Args{mul(e->slot(0,10),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t213));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);{V t214=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t214);}
{V t215=get(e->slot(1,1),lit5);e->slot(0,2)=std::move(t215);}
{V t216=get(e->slot(0,1),lit89);e->slot(0,3)=std::move(t216);}
if(truth(eq(get(e->slot(0,1),lit86),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,3)};V t217=mul(e->slot(0,3),V(0.35));refs[0].put(std::move(t217));}
}
if(truth(gt(get(e->slot(0,1),lit116),V(0.05)))){{std::array<Ref,1> refs{Ref(e,0,3)};V t218=mul(e->slot(0,3),sub(V(1.0),first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit116),V(0.28)),V(0.0),V(0.45)}))));refs[0].put(std::move(t218));}
}
{std::array<Ref,1> refs{Ref(e,0,3)};V t219=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.0)}));refs[0].put(std::move(t219));}
{V t220=([&](){V t221=get(e->slot(0,1),lit98);return !truth(t221)?e->slot(0,3):t221;})();e->slot(0,4)=std::move(t220);}
{V t222=divv(V(1.0),first(call(get(e->get("math"),lit176),Args{mul(get(e->slot(0,2),lit9),V(10.0)),V(0.001)})));e->slot(0,5)=std::move(t222);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t223=first(call(e->slot(1,8),Args{e->slot(0,4),e->slot(0,3),e->slot(0,5),e->slot(0,0)}));refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit99)};V t224=divv(sub(get(e->slot(0,1),lit98),e->slot(0,4)),first(call(get(e->get("math"),lit176),Args{e->slot(0,0),V(0.001)})));refs[0].put(std::move(t224));}
{V t225=first(call(get(e->get("math"),lit176),Args{V(0.0),sub(get(e->slot(0,1),lit99),mul(get(e->slot(0,2),lit37),V(0.35)))}));e->slot(0,6)=std::move(t225);}
{V t226=first(call(e->slot(1,4),Args{add(mul(e->slot(0,6),get(e->slot(0,2),lit38)),mul(get(e->slot(0,1),lit116),V(0.22))),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t226);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t227=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit100),e->slot(0,7),V(0.07),e->slot(0,0)}));refs[0].put(std::move(t227));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t228=get(e->slot(1,1),lit77);e->slot(0,0)=std::move(t228);}
{V t229=get(e->slot(1,1),lit5);e->slot(0,1)=std::move(t229);}
{V t230=V(0.0);e->slot(0,2)=std::move(t230);}
if(truth(eq(get(e->slot(0,1),lit17),lit196))){{std::array<Ref,1> refs{Ref(e,0,2)};V t231=mul(get(e->slot(0,0),lit95),get(e->slot(0,1),lit16));refs[0].put(std::move(t231));}
}else if(truth(([&](){V t232=get(e->slot(0,0),lit142);return truth(t232)?gt(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,0),lit95)})),V(0.0001)):t232;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t233=mul(first(call(e->slot(1,7),Args{mul(([&](){V t234=get(e->slot(0,0),lit95);return !truth(t234)?V(0.0):t234;})(),V(0.01))})),get(e->slot(0,1),lit16));refs[0].put(std::move(t233));}
}else{{std::array<Ref,1> refs{Ref(e,0,2)};V t235=sub(sub(mul(get(e->slot(0,0),lit87),V(1.0)),mul(get(e->slot(0,0),lit88),V(0.22))),mul(get(e->slot(0,0),lit90),V(0.08)));refs[0].put(std::move(t235));}
if(truth(([&](){V t236=([&](){V t237=lt(get(e->slot(0,0),lit87),V(0.02));return truth(t237)?ne(get(e->slot(0,0),lit86),V(0.0)):t237;})();return truth(t236)?gt(get(e->slot(0,0),lit84),get(e->slot(0,1),lit62)):t236;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t238=sub(e->slot(0,2),mul(get(e->slot(0,1),lit20),first(call(e->slot(1,4),Args{divv(get(e->slot(0,0),lit84),V(120.0)),V(0.0),V(1.0)}))));refs[0].put(std::move(t238));}
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t239=mul(e->slot(0,2),get(e->slot(0,1),lit19));refs[0].put(std::move(t239));}
}

if(truth(eq(get(e->slot(0,0),lit86),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t240=mul(e->slot(0,2),V(0.15));refs[0].put(std::move(t240));}
}
{V t241=add(V(0.2),mul(V(0.8),first(call(e->slot(1,4),Args{get(e->slot(0,0),lit98),V(0.0),V(1.0)}))));e->slot(0,3)=std::move(t241);}
{std::array<Ref,1> refs{Ref(e,0,2)};V t242=mul(e->slot(0,2),e->slot(0,3));refs[0].put(std::move(t242));}
return call(e->slot(1,4),Args{e->slot(0,2),V(-num(V(1.0))),V(1.0)});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{V t243=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t243);}
{V t244=get(e->slot(1,1),lit5);e->slot(0,2)=std::move(t244);}
{V t245=([&](){V t246=ne(get(e->slot(0,1),lit86),get(e->slot(0,1),lit138));return truth(t246)?ne(get(e->slot(0,1),lit138),V(0.0)):t246;})();e->slot(0,3)=std::move(t245);}
{V t247=divv(sub(get(e->slot(0,1),lit89),get(e->slot(0,1),lit139)),first(call(get(e->get("math"),lit176),Args{e->slot(0,0),V(0.001)})));e->slot(0,4)=std::move(t247);}
{V t248=divv(sub(get(e->slot(0,1),lit87),get(e->slot(0,1),lit140)),first(call(get(e->get("math"),lit176),Args{e->slot(0,0),V(0.001)})));e->slot(0,5)=std::move(t248);}
{V t249=V(0.0);e->slot(0,6)=std::move(t249);}
if(truth(([&](){V t250=gt(e->slot(0,5),get(e->slot(0,2),lit34));return truth(t250)?gt(get(e->slot(0,1),lit87),get(e->slot(0,2),lit36)):t250;})())){{std::array<Ref,1> refs{Ref(e,0,6)};V t251=add(e->slot(0,6),first(call(e->slot(1,4),Args{mul(e->slot(0,5),V(0.1)),V(0.0),V(1.0)})));refs[0].put(std::move(t251));}
}
if(truth(([&](){V t252=gt(e->slot(0,4),get(e->slot(0,2),lit37));return truth(t252)?gt(get(e->slot(0,1),lit87),get(e->slot(0,2),lit36)):t252;})())){{std::array<Ref,1> refs{Ref(e,0,6)};V t253=add(e->slot(0,6),first(call(e->slot(1,4),Args{mul(e->slot(0,4),V(0.12)),V(0.0),V(1.0)})));refs[0].put(std::move(t253));}
}
{std::array<Ref,1> refs{Ref(e,0,6)};V t254=add(e->slot(0,6),mul(get(e->slot(0,1),lit132),get(e->slot(0,2),lit59)));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t255=add(e->slot(0,6),mul(mul(add(([&](){V t256=get(get(get(e->slot(0,1),lit149),V(2.0)),lit166);return !truth(t256)?V(0.0):t256;})(),([&](){V t257=get(get(get(e->slot(0,1),lit149),V(3.0)),lit166);return !truth(t257)?V(0.0):t257;})()),V(0.5)),get(e->slot(0,2),lit59)));refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit117)};V t258=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit117),first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0),V(1.0)})),get(e->slot(0,2),lit41),e->slot(0,0)}));refs[0].put(std::move(t258));}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t259=first(call(get(e->get("math"),lit242),Args{V(1.0),add(([&](){V t260=get(e->slot(0,1),lit116);return !truth(t260)?V(0.0):t260;})(),get(e->slot(0,2),lit39))}));refs[0].put(std::move(t259));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t261=first(call(get(e->get("math"),lit176),Args{V(0.0),sub(([&](){V t262=get(e->slot(0,1),lit116);return !truth(t262)?V(0.0):t262;})(),mul(e->slot(0,0),get(e->slot(0,2),lit40)))}));refs[0].put(std::move(t261));}
}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,36);auto e=&storage;e->slot(0,0)=arg(a,0);{V t263=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t263);}
{V t264=get(e->slot(1,1),lit5);e->slot(0,2)=std::move(t264);}
call(e->slot(1,24),Args{e->slot(0,0)});
{V t265=first(call(e->slot(1,25),Args{}));e->slot(0,3)=std::move(t265);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit91)};V t266=e->slot(0,3);refs[0].put(std::move(t266));}
{V t267=get(e->slot(0,2),lit13);e->slot(0,4)=std::move(t267);}
if(truth(lt(e->slot(0,3),get(e->slot(0,1),lit92)))){{std::array<Ref,1> refs{Ref(e,0,4)};V t268=get(e->slot(0,2),lit14);refs[0].put(std::move(t268));}
}
if(truth(([&](){V t269=ne(first(call(e->slot(1,6),Args{e->slot(0,3)})),V(0.0));return truth(t269)?ne(first(call(e->slot(1,6),Args{e->slot(0,3)})),first(call(e->slot(1,6),Args{get(e->slot(0,1),lit92)}))):t269;})())){{std::array<Ref,1> refs{Ref(e,0,4)};V t270=get(e->slot(0,2),lit15);refs[0].put(std::move(t270));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit93)};V t271=([&](){V t272=get(e->slot(0,1),lit92);return !truth(t272)?V(0.0):t272;})();refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit92)};V t273=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit92),e->slot(0,3),e->slot(0,4),e->slot(0,0)}));refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t274=divv(sub(get(e->slot(0,1),lit92),get(e->slot(0,1),lit93)),first(call(get(e->get("math"),lit176),Args{e->slot(0,0),V(0.001)})));refs[0].put(std::move(t274));}
{V t275=first(call(e->slot(1,4),Args{divv(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,1),lit122)})),first(call(get(e->get("math"),lit176),Args{get(e->slot(0,2),lit47),V(1.0)}))),V(0.0),V(1.5)}));e->slot(0,5)=std::move(t275);}
{V t276=first(call(e->slot(1,4),Args{divv(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,1),lit123)})),first(call(get(e->get("math"),lit176),Args{get(e->slot(0,2),lit48),V(1.0)}))),V(0.0),V(1.5)}));e->slot(0,6)=std::move(t276);}
{V t277=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit124),get(e->slot(0,2),lit42)),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t277);}
{V t278=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit128),get(e->slot(0,2),lit52)),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t278);}
{V t279=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit130),get(e->slot(0,2),lit50)),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t279);}
{V t280=first(call(e->slot(1,4),Args{mul(mul(add(([&](){V t281=get(get(get(e->slot(0,1),lit149),V(2.0)),lit157);return !truth(t281)?V(0.0):t281;})(),([&](){V t282=get(get(get(e->slot(0,1),lit149),V(3.0)),lit157);return !truth(t282)?V(0.0):t282;})()),V(0.5)),get(e->slot(0,2),lit60)),V(0.0),V(1.0)}));e->slot(0,10)=std::move(t280);}
{V t283=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit125),get(e->slot(0,2),lit43)),V(0.0),V(0.6)}));e->slot(0,11)=std::move(t283);}
{V t284=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit126),get(e->slot(0,2),lit44)),V(0.0),V(0.45)}));e->slot(0,12)=std::move(t284);}
{V t285=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit127),get(e->slot(0,2),lit53)),V(0.0),V(0.3)}));e->slot(0,13)=std::move(t285);}
{V t286=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit133),get(e->slot(0,2),lit45)),V(0.0),V(0.45)}));e->slot(0,14)=std::move(t286);}
{V t287=mul(mul(mul(get(e->slot(0,1),lit92),add(add(add(add(V(1.0),e->slot(0,11)),e->slot(0,12)),e->slot(0,13)),e->slot(0,14))),sub(V(1.0),mul(e->slot(0,7),V(0.55)))),sub(V(1.0),mul(e->slot(0,9),V(0.28))));e->slot(0,15)=std::move(t287);}
if(truth(lt(get(e->slot(0,1),lit84),get(e->slot(0,2),lit62)))){{std::array<Ref,1> refs{Ref(e,0,15)};V t288=mul(e->slot(0,15),first(call(e->slot(1,4),Args{divv(get(e->slot(0,1),lit84),first(call(get(e->get("math"),lit176),Args{get(e->slot(0,2),lit62),V(0.001)}))),V(0.2),V(1.0)})));refs[0].put(std::move(t288));}
}
{V t289=mul(sub(e->slot(0,15),get(e->slot(0,1),lit101)),get(e->slot(0,2),lit21));e->slot(0,16)=std::move(t289);}
{V t290=mul(V(-num(get(e->slot(0,1),lit102))),get(e->slot(0,2),lit22));e->slot(0,17)=std::move(t290);}
{V t291=mul(mul(add(add(add(e->slot(0,7),e->slot(0,8)),e->slot(0,9)),e->slot(0,10)),get(e->slot(0,2),lit24)),first(call(e->slot(1,6),Args{get(e->slot(0,1),lit101)})));e->slot(0,18)=std::move(t291);}
{V t292=sub(add(e->slot(0,16),e->slot(0,17)),e->slot(0,18));e->slot(0,19)=std::move(t292);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t293=first(call(e->slot(1,4),Args{add(get(e->slot(0,1),lit102),mul(e->slot(0,19),e->slot(0,0))),V(-num(get(e->slot(0,2),lit28))),get(e->slot(0,2),lit28)}));refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t294=first(call(e->slot(1,4),Args{add(get(e->slot(0,1),lit101),mul(get(e->slot(0,1),lit102),e->slot(0,0))),V(-num(get(e->slot(0,2),lit27))),get(e->slot(0,2),lit27)}));refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t295=first(call(e->slot(1,4),Args{first(call(get(e->get("math"),lit174),Args{get(e->slot(0,1),lit101)})),V(0.0),V(1.0)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t296=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit101),get(e->slot(0,2),lit70)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t296));}
{V t297=first(call(e->slot(1,4),Args{add(mul(get(e->slot(0,1),lit101),get(e->slot(0,2),lit25)),mul(get(e->slot(0,1),lit94),V(0.015))),V(-num(get(e->slot(0,2),lit29))),get(e->slot(0,2),lit29)}));e->slot(0,20)=std::move(t297);}
{V t298=([&](){V t299=get(e->slot(0,1),lit105);return !truth(t299)?V(0.0):t299;})();e->slot(0,21)=std::move(t298);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t300=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit105),e->slot(0,20),V(0.07),e->slot(0,0)}));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t301=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit106),divv(sub(get(e->slot(0,1),lit105),e->slot(0,21)),first(call(get(e->get("math"),lit176),Args{e->slot(0,0),V(0.001)}))),V(0.12),e->slot(0,0)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t302=first(call(e->slot(1,4),Args{add(mul(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,1),lit105)})),get(e->slot(0,2),lit26)),mul(get(e->slot(0,1),lit103),V(0.4))),V(0.0),V(1.0)}));refs[0].put(std::move(t302));}
{V t303=first(call(get(e->get("math"),lit176),Args{V(0.0),mul(V(-num(get(e->slot(0,1),lit94))),V(0.08))}));e->slot(0,22)=std::move(t303);}
{V t304=mul(add(([&](){V t305=get(get(get(e->slot(0,1),lit149),V(2.0)),lit158);return !truth(t305)?V(0.0):t305;})(),([&](){V t306=get(get(get(e->slot(0,1),lit149),V(3.0)),lit158);return !truth(t306)?V(0.0):t306;})()),V(0.5));e->slot(0,23)=std::move(t304);}
{V t307=first(call(e->slot(1,4),Args{add(add(add(mul(get(e->slot(0,1),lit130),get(e->slot(0,2),lit54)),mul(sub(V(1.0),get(e->slot(0,1),lit127)),V(0.28))),mul(e->slot(0,23),get(e->slot(0,2),lit61))),mul(sub(V(1.0),mul(add(([&](){V t308=get(get(get(e->slot(0,1),lit149),V(2.0)),lit165);return !truth(t308)?V(1.0):t308;})(),([&](){V t309=get(get(get(e->slot(0,1),lit149),V(3.0)),lit165);return !truth(t309)?V(1.0):t309;})()),V(0.5))),get(e->slot(0,2),lit58))),V(0.0),V(1.0)}));e->slot(0,24)=std::move(t307);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t310=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit113),e->slot(0,24),V(0.1),e->slot(0,0)}));refs[0].put(std::move(t310));}
{V t311=first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit103),add(add(add(add(e->slot(0,7),e->slot(0,22)),mul(e->slot(0,6),V(0.15))),get(e->slot(0,1),lit113)),mul(e->slot(0,8),V(0.6)))),V(0.0),V(1.0)}));e->slot(0,25)=std::move(t311);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t312=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit112),e->slot(0,25),V(0.07),e->slot(0,0)}));refs[0].put(std::move(t312));}
{V t313=first(call(e->slot(1,4),Args{add(add(add(mul(get(e->slot(0,1),lit129),get(e->slot(0,2),lit49)),mul(get(e->slot(0,1),lit135),get(e->slot(0,2),lit56))),mul(get(e->slot(0,1),lit117),V(0.25))),mul(get(e->slot(0,1),lit116),V(0.12))),V(0.0),V(1.0)}));e->slot(0,26)=std::move(t313);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t314=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit118),e->slot(0,26),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t315=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit119),first(call(e->slot(1,4),Args{add(add(mul(get(e->slot(0,1),lit130),V(0.7)),mul(get(e->slot(0,1),lit136),V(0.3))),mul(get(e->slot(0,1),lit113),V(0.25))),V(0.0),V(1.0)})),V(0.12),e->slot(0,0)}));refs[0].put(std::move(t315));}
{V t316=first(call(e->slot(1,6),Args{get(e->slot(0,1),lit92)}));e->slot(0,27)=std::move(t316);}
{V t317=([&](){V t318=([&](){V t319=ne(e->slot(0,27),V(0.0));return truth(t319)?ne(get(e->slot(0,1),lit141),V(0.0)):t319;})();return truth(t318)?ne(e->slot(0,27),get(e->slot(0,1),lit141)):t318;})();e->slot(0,28)=std::move(t317);}
{V t320=V(0.0);e->slot(0,29)=std::move(t320);}
if(truth(([&](){V t321=e->slot(0,28);return truth(t321)?gt(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,1),lit92)})),get(e->slot(0,2),lit35)):t321;})())){{std::array<Ref,1> refs{Ref(e,0,29)};V t322=V(1.0);refs[0].put(std::move(t322));}
}else if(truth(lt(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,1),lit92)})),get(e->slot(0,2),lit30)))){{std::array<Ref,1> refs{Ref(e,0,29)};V t323=V(0.45);refs[0].put(std::move(t323));}
}

{std::array<Ref,1> refs{Ref(e,0,29)};V t324=first(call(get(e->get("math"),lit176),Args{e->slot(0,29),mul(get(e->slot(0,1),lit117),V(0.65)),mul(get(e->slot(0,1),lit116),V(0.55)),mul(get(e->slot(0,1),lit118),V(0.22))}));refs[0].put(std::move(t324));}
if(truth(gt(e->slot(0,29),get(e->slot(0,1),lit114)))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t325=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit114),e->slot(0,29),divv(V(1.0),first(call(get(e->get("math"),lit176),Args{get(e->slot(0,2),lit31),V(0.001)}))),e->slot(0,0)}));refs[0].put(std::move(t325));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t326=first(call(get(e->get("math"),lit176),Args{V(0.0),sub(get(e->slot(0,1),lit114),mul(e->slot(0,0),get(e->slot(0,2),lit32)))}));refs[0].put(std::move(t326));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t327=first(call(e->slot(1,4),Args{add(add(add(mul(get(e->slot(0,1),lit114),get(e->slot(0,2),lit33)),mul(get(e->slot(0,1),lit117),V(0.45))),mul(get(e->slot(0,1),lit116),V(0.35))),mul(get(e->slot(0,1),lit118),V(0.25))),V(0.0),V(1.0)}));refs[0].put(std::move(t327));}
{V t328=first(call(e->slot(1,6),Args{get(e->slot(0,1),lit92)}));e->slot(0,30)=std::move(t328);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t329=first(call(e->slot(1,4),Args{sub(sub(sub(get(e->slot(0,1),lit92),mul(get(e->slot(0,1),lit112),e->slot(0,30))),mul(mul(get(e->slot(0,1),lit114),V(0.1)),e->slot(0,30))),mul(mul(get(e->slot(0,1),lit113),V(0.08)),e->slot(0,30))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t329));}
{V t330=sub(V(1.0),first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit119),get(e->slot(0,2),lit51)),V(0.0),V(0.45)})));e->slot(0,31)=std::move(t330);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t331=first(call(e->slot(1,4),Args{mul(add(get(e->slot(0,1),lit108),mul(get(e->slot(0,1),lit104),V(0.35))),e->slot(0,31)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t331));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t332=first(call(e->slot(1,4),Args{mul(mul(mul(mul(first(call(get(e->get("math"),lit176),Args{V(0.0),get(e->slot(0,1),lit109)})),get(e->slot(0,2),lit71)),add(V(0.7),mul(get(e->slot(0,1),lit133),V(0.3)))),add(V(0.55),mul(get(e->slot(0,1),lit126),V(0.45)))),sub(V(1.0),mul(get(e->slot(0,1),lit119),V(0.2)))),V(0.0),V(1.0)}));refs[0].put(std::move(t332));}
{V t333=mul(divv(get(e->slot(0,1),lit123),first(call(get(e->get("math"),lit176),Args{get(e->slot(0,2),lit48),V(1.0)}))),get(e->slot(0,2),lit46));e->slot(0,32)=std::move(t333);}
{V t334=mul(mul(mul(get(e->slot(0,1),lit110),get(e->slot(0,1),lit133)),get(e->slot(0,2),lit72)),first(call(e->slot(1,6),Args{get(e->slot(0,1),lit123)})));e->slot(0,33)=std::move(t334);}
{V t335=mul(get(e->slot(0,1),lit134),get(e->slot(0,2),lit55));e->slot(0,34)=std::move(t335);}
{V t336=sub(V(1.0),first(call(e->slot(1,4),Args{mul(get(e->slot(0,1),lit119),get(e->slot(0,2),lit57)),V(0.0),V(0.35)})));e->slot(0,35)=std::move(t336);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t337=first(call(e->slot(1,4),Args{mul(add(add(e->slot(0,32),e->slot(0,33)),e->slot(0,34)),e->slot(0,35)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t337));}
if(truth(ne(e->slot(0,27),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit141)};V t338=e->slot(0,27);refs[0].put(std::move(t338));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit243)};V t339=e->slot(0,5);refs[0].put(std::move(t339));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t340=get(e->slot(1,1),lit77);e->slot(0,0)=std::move(t340);}
{V t341=get(e->slot(1,1),lit5);e->slot(0,1)=std::move(t341);}
if(truth(([&](){V t342=lt(get(e->slot(0,0),lit84),get(e->slot(0,1),lit62));return truth(t342)?lt(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,0),lit92)})),get(e->slot(0,1),lit63)):t342;})())){return Args{V(1.0),lit244};
}
if(truth(eq(get(e->slot(0,0),lit86),V(0.0)))){return Args{V(2.0),lit245};
}
if(truth(gt(get(e->slot(0,0),lit116),V(0.2)))){return Args{V(8.0),lit246};
}
if(truth(gt(get(e->slot(0,0),lit117),V(0.25)))){return Args{V(7.0),lit247};
}
if(truth(gt(get(e->slot(0,0),lit118),get(e->slot(0,1),lit68)))){return Args{V(11.0),lit248};
}
if(truth(gt(get(e->slot(0,0),lit119),get(e->slot(0,1),lit69)))){return Args{V(12.0),lit249};
}
if(truth(gt(get(e->slot(0,0),lit114),V(0.35)))){return Args{V(6.0),lit250};
}
if(truth(([&](){V t343=gt(get(e->slot(0,0),lit112),get(e->slot(0,1),lit66));return !truth(t343)?gt(get(e->slot(0,0),lit124),get(e->slot(0,1),lit67)):t343;})())){return Args{V(5.0),lit251};
}
if(truth(gt(first(call(get(e->get("math"),lit174),Args{get(e->slot(0,0),lit101)})),get(e->slot(0,1),lit65)))){if(truth(gt(get(e->slot(0,0),lit101),V(0.0)))){return Args{V(4.0),lit252};
}else{return Args{V(9.0),lit253};
}
}
if(truth(gt(get(e->slot(0,0),lit92),get(e->slot(0,1),lit63)))){return Args{V(3.0),lit254};
}
if(truth(([&](){V t344=lt(get(e->slot(0,0),lit92),get(e->slot(0,1),lit64));return !truth(t344)?gt(get(e->slot(0,0),lit88),V(0.08)):t344;})())){return Args{V(10.0),lit255};
}
return Args{V(0.0),lit256};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t345=get(e->slot(1,1),lit77);e->slot(0,0)=std::move(t345);}
{double t346=num(V(0.0)),t347=num(V(3.0)),t348=num(V(1.0));for(double t349=t346;(t348>0?t349<=t347:t349>=t347);t349+=t348){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t349);{V t350=get(get(e->slot(1,0),lit149),e->slot(0,0));e->slot(0,1)=std::move(t350);}
if(truth(ge(e->slot(0,0),V(2.0)))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t351=([&](){V t352=([&](){V t353=eq(e->slot(1,0),V(2.0));return truth(t353)?V(-num(V(1.0))):t353;})();return !truth(t352)?V(1.0):t352;})();e->slot(0,0)=std::move(t351);}
{V t354=mul(first(call(e->slot(3,4),Args{divv(get(e->slot(2,0),lit123),V(60.0)),V(-num(V(1.0))),V(1.0)})),e->slot(0,0));e->slot(0,1)=std::move(t354);}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit167)};V t355=first(call(e->slot(3,4),Args{mul(get(e->slot(2,0),lit103),add(add(V(0.45),mul(V(0.35),get(e->slot(1,1),lit155))),mul(V(0.2),get(e->slot(1,1),lit156)))),V(0.0),V(1.0)}));refs[0].put(std::move(t355));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit168)};V t356=first(call(e->slot(3,4),Args{add(mul(get(e->slot(2,0),lit109),V(0.5)),mul(mul(e->slot(0,1),get(e->slot(2,0),lit133)),V(0.2))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit169)};V t357=first(call(e->slot(3,4),Args{mul(get(e->slot(2,0),lit112),add(add(V(0.7),mul(get(e->slot(1,1),lit153),V(0.2))),mul(get(e->slot(1,1),lit160),V(0.25)))),V(0.0),V(1.0)}));refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit170)};V t358=first(call(e->slot(3,4),Args{mul(get(e->slot(2,0),lit118),add(V(0.45),mul(get(e->slot(1,1),lit161),V(0.55)))),V(0.0),V(1.0)}));refs[0].put(std::move(t358));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit171)};V t359=first(call(e->slot(3,4),Args{mul(get(e->slot(2,0),lit119),add(V(0.5),mul(get(e->slot(1,1),lit119),V(0.5)))),V(0.0),V(1.0)}));refs[0].put(std::move(t359));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit167)};V t360=V(0.0);refs[0].put(std::move(t360));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit168)};V t361=V(0.0);refs[0].put(std::move(t361));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit169)};V t362=V(0.0);refs[0].put(std::move(t362));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit170)};V t363=V(0.0);refs[0].put(std::move(t363));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit171)};V t364=V(0.0);refs[0].put(std::move(t364));}
}
}}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t365=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t365);}
{V t366=([&](){V t367=get(get(e->slot(1,1),lit5),lit75);return !truth(t367)?V(0.25):t367;})();e->slot(0,2)=std::move(t366);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit91)};V t368=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit91),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t368));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit92)};V t369=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit92),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t370=V(0.0);refs[0].put(std::move(t370));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t371=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit101),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t371));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t372=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit102),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t372));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t373=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit103),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t374=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit104),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t375=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit105),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t376=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit106),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t376));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t377=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit107),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t378=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit108),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t379=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit109),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t380=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit110),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t381=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit111),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t382=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit112),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t382));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t383=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit113),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t384=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit114),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t384));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t385=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit115),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t385));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t386=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit116),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t386));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit117)};V t387=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit117),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t387));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t388=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit118),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t388));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t389=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit119),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t389));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t390=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit100),V(0.0),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t390));}
{double t391=num(V(0.0)),t392=num(V(3.0)),t393=num(V(1.0));for(double t394=t391;(t393>0?t394<=t392:t394>=t392);t394+=t393){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t394);{V t395=get(get(e->slot(1,1),lit149),e->slot(0,0));e->slot(0,1)=std::move(t395);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit167)};V t396=first(call(e->slot(2,8),Args{get(e->slot(0,1),lit167),V(0.0),e->slot(1,2),e->slot(1,0)}));refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit168)};V t397=first(call(e->slot(2,8),Args{get(e->slot(0,1),lit168),V(0.0),e->slot(1,2),e->slot(1,0)}));refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit169)};V t398=first(call(e->slot(2,8),Args{get(e->slot(0,1),lit169),V(0.0),e->slot(1,2),e->slot(1,0)}));refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit170)};V t399=first(call(e->slot(2,8),Args{get(e->slot(0,1),lit170),V(0.0),e->slot(1,2),e->slot(1,0)}));refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit171)};V t400=first(call(e->slot(2,8),Args{get(e->slot(0,1),lit171),V(0.0),e->slot(1,2),e->slot(1,0)}));refs[0].put(std::move(t400));}
}}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,14),Args{concat(lit257,e->slot(0,0)),([&](){V t401=get(e->slot(0,1),lit152);return !truth(t401)?V(0.0):t401;})()});
call(e->slot(1,14),Args{concat(lit258,e->slot(0,0)),([&](){V t402=get(e->slot(0,1),lit153);return !truth(t402)?V(0.0):t402;})()});
call(e->slot(1,14),Args{concat(lit259,e->slot(0,0)),([&](){V t403=get(e->slot(0,1),lit154);return !truth(t403)?V(0.0):t403;})()});
call(e->slot(1,14),Args{concat(lit260,e->slot(0,0)),([&](){V t404=get(e->slot(0,1),lit155);return !truth(t404)?V(0.0):t404;})()});
call(e->slot(1,14),Args{concat(lit261,e->slot(0,0)),([&](){V t405=get(e->slot(0,1),lit167);return !truth(t405)?V(0.0):t405;})()});
call(e->slot(1,14),Args{concat(lit262,e->slot(0,0)),([&](){V t406=get(e->slot(0,1),lit168);return !truth(t406)?V(0.0):t406;})()});
call(e->slot(1,14),Args{concat(lit263,e->slot(0,0)),([&](){V t407=get(e->slot(0,1),lit169);return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,14),Args{concat(lit264,e->slot(0,0)),([&](){V t408=get(e->slot(0,1),lit170);return !truth(t408)?V(0.0):t408;})()});
call(e->slot(1,14),Args{concat(lit265,e->slot(0,0)),([&](){V t409=get(e->slot(0,1),lit171);return !truth(t409)?V(0.0):t409;})()});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t410=get(e->slot(1,1),lit77);e->slot(0,0)=std::move(t410);}
call(e->slot(1,14),Args{lit266,([&](){V t411=get(e->slot(0,0),lit78);return !truth(t411)?lit267:t411;})()});
call(e->slot(1,14),Args{lit268,([&](){V t412=get(e->slot(0,0),lit80);return !truth(t412)?V(0.0):t412;})()});
call(e->slot(1,14),Args{lit269,([&](){V t413=([&](){V t414=get(e->slot(0,0),lit81);return truth(t414)?V(1.0):t414;})();return !truth(t413)?V(0.0):t413;})()});
call(e->slot(1,14),Args{lit270,([&](){V t415=get(e->slot(0,0),lit83);return !truth(t415)?lit267:t415;})()});
call(e->slot(1,14),Args{lit271,([&](){V t416=get(e->slot(0,0),lit82);return !truth(t416)?V(0.0):t416;})()});
call(e->slot(1,14),Args{lit272,([&](){V t417=get(e->slot(0,0),lit92);return !truth(t417)?V(0.0):t417;})()});
call(e->slot(1,14),Args{lit273,([&](){V t418=get(e->slot(0,0),lit91);return !truth(t418)?V(0.0):t418;})()});
call(e->slot(1,14),Args{lit274,([&](){V t419=get(e->slot(0,0),lit94);return !truth(t419)?V(0.0):t419;})()});
call(e->slot(1,14),Args{lit275,([&](){V t420=get(e->slot(0,0),lit101);return !truth(t420)?V(0.0):t420;})()});
call(e->slot(1,14),Args{lit276,([&](){V t421=get(e->slot(0,0),lit102);return !truth(t421)?V(0.0):t421;})()});
call(e->slot(1,14),Args{lit277,([&](){V t422=get(e->slot(0,0),lit103);return !truth(t422)?V(0.0):t422;})()});
call(e->slot(1,14),Args{lit278,([&](){V t423=get(e->slot(0,0),lit104);return !truth(t423)?V(0.0):t423;})()});
call(e->slot(1,14),Args{lit279,([&](){V t424=get(e->slot(0,0),lit105);return !truth(t424)?V(0.0):t424;})()});
call(e->slot(1,14),Args{lit280,([&](){V t425=get(e->slot(0,0),lit107);return !truth(t425)?V(0.0):t425;})()});
call(e->slot(1,14),Args{lit281,([&](){V t426=get(e->slot(0,0),lit108);return !truth(t426)?V(0.0):t426;})()});
call(e->slot(1,14),Args{lit282,([&](){V t427=get(e->slot(0,0),lit109);return !truth(t427)?V(0.0):t427;})()});
call(e->slot(1,14),Args{lit283,([&](){V t428=get(e->slot(0,0),lit110);return !truth(t428)?V(0.0):t428;})()});
call(e->slot(1,14),Args{lit284,([&](){V t429=get(e->slot(0,0),lit111);return !truth(t429)?V(0.0):t429;})()});
call(e->slot(1,14),Args{lit285,([&](){V t430=get(e->slot(0,0),lit112);return !truth(t430)?V(0.0):t430;})()});
call(e->slot(1,14),Args{lit286,([&](){V t431=get(e->slot(0,0),lit113);return !truth(t431)?V(0.0):t431;})()});
call(e->slot(1,14),Args{lit287,([&](){V t432=get(e->slot(0,0),lit114);return !truth(t432)?V(0.0):t432;})()});
call(e->slot(1,14),Args{lit288,([&](){V t433=get(e->slot(0,0),lit115);return !truth(t433)?V(0.0):t433;})()});
call(e->slot(1,14),Args{lit289,([&](){V t434=get(e->slot(0,0),lit116);return !truth(t434)?V(0.0):t434;})()});
call(e->slot(1,14),Args{lit290,([&](){V t435=get(e->slot(0,0),lit117);return !truth(t435)?V(0.0):t435;})()});
call(e->slot(1,14),Args{lit291,([&](){V t436=get(e->slot(0,0),lit118);return !truth(t436)?V(0.0):t436;})()});
call(e->slot(1,14),Args{lit292,([&](){V t437=get(e->slot(0,0),lit119);return !truth(t437)?V(0.0):t437;})()});
call(e->slot(1,14),Args{lit293,([&](){V t438=get(e->slot(0,0),lit98);return !truth(t438)?V(0.0):t438;})()});
call(e->slot(1,14),Args{lit294,([&](){V t439=get(e->slot(0,0),lit100);return !truth(t439)?V(0.0):t439;})()});
call(e->slot(1,14),Args{lit295,([&](){V t440=get(e->slot(0,0),lit122);return !truth(t440)?V(0.0):t440;})()});
call(e->slot(1,14),Args{lit296,([&](){V t441=get(e->slot(0,0),lit123);return !truth(t441)?V(0.0):t441;})()});
call(e->slot(1,14),Args{lit297,([&](){V t442=get(e->slot(0,0),lit124);return !truth(t442)?V(0.0):t442;})()});
call(e->slot(1,14),Args{lit298,([&](){V t443=get(e->slot(0,0),lit125);return !truth(t443)?V(0.0):t443;})()});
call(e->slot(1,14),Args{lit299,([&](){V t444=get(e->slot(0,0),lit126);return !truth(t444)?V(0.0):t444;})()});
call(e->slot(1,14),Args{lit300,([&](){V t445=get(e->slot(0,0),lit129);return !truth(t445)?V(0.0):t445;})()});
call(e->slot(1,14),Args{lit301,([&](){V t446=get(e->slot(0,0),lit130);return !truth(t446)?V(0.0):t446;})()});
call(e->slot(1,14),Args{lit302,([&](){V t447=get(e->slot(0,0),lit128);return !truth(t447)?V(0.0):t447;})()});
call(e->slot(1,14),Args{lit213,([&](){V t448=get(e->slot(0,0),lit133);return !truth(t448)?V(0.0):t448;})()});
call(e->slot(1,14),Args{lit303,([&](){V t449=get(e->slot(0,0),lit101);return !truth(t449)?V(0.0):t449;})()});
call(e->slot(1,14),Args{lit304,([&](){V t450=get(e->slot(0,0),lit103);return !truth(t450)?V(0.0):t450;})()});
call(e->slot(1,14),Args{lit305,([&](){V t451=get(e->slot(0,0),lit112);return !truth(t451)?V(0.0):t451;})()});
call(e->slot(1,14),Args{lit306,([&](){V t452=get(e->slot(0,0),lit114);return !truth(t452)?V(0.0):t452;})()});
call(e->slot(1,14),Args{lit307,([&](){V t453=get(e->slot(0,0),lit110);return !truth(t453)?V(0.0):t453;})()});
call(e->slot(1,14),Args{lit308,([&](){V t454=get(e->slot(0,0),lit111);return !truth(t454)?V(0.0):t454;})()});
call(e->slot(1,14),Args{lit309,([&](){V t455=get(e->slot(0,0),lit105);return !truth(t455)?V(0.0):t455;})()});
call(e->slot(1,14),Args{lit310,([&](){V t456=get(e->slot(0,0),lit106);return !truth(t456)?V(0.0):t456;})()});
call(e->slot(1,14),Args{lit311,([&](){V t457=get(e->slot(0,0),lit114);return !truth(t457)?V(0.0):t457;})()});
call(e->slot(1,14),Args{lit312,([&](){V t458=get(e->slot(0,0),lit115);return !truth(t458)?V(0.0):t458;})()});
call(e->slot(1,14),Args{lit313,([&](){V t459=get(e->slot(0,0),lit116);return !truth(t459)?V(0.0):t459;})()});
call(e->slot(1,14),Args{lit314,([&](){V t460=get(e->slot(0,0),lit117);return !truth(t460)?V(0.0):t460;})()});
call(e->slot(1,14),Args{lit315,([&](){V t461=get(e->slot(0,0),lit118);return !truth(t461)?V(0.0):t461;})()});
call(e->slot(1,14),Args{lit316,([&](){V t462=get(e->slot(0,0),lit119);return !truth(t462)?V(0.0):t462;})()});
call(e->slot(1,14),Args{lit317,([&](){V t463=get(e->slot(0,0),lit96);return !truth(t463)?lit267:t463;})()});
call(e->slot(1,14),Args{lit208,([&](){V t464=get(e->slot(0,0),lit109);return !truth(t464)?V(0.0):t464;})()});
call(e->slot(1,14),Args{lit207,([&](){V t465=get(e->slot(0,0),lit108);return !truth(t465)?V(0.0):t465;})()});
call(e->slot(1,14),Args{lit318,([&](){V t466=get(e->slot(0,0),lit105);return !truth(t466)?V(0.0):t466;})()});
call(e->slot(1,14),Args{lit319,([&](){V t467=get(e->slot(0,0),lit106);return !truth(t467)?V(0.0):t467;})()});
call(e->slot(1,14),Args{lit320,([&](){V t468=get(e->slot(0,0),lit114);return !truth(t468)?V(0.0):t468;})()});
call(e->slot(1,14),Args{lit321,([&](){V t469=get(e->slot(0,0),lit115);return !truth(t469)?V(0.0):t469;})()});
call(e->slot(1,14),Args{lit322,([&](){V t470=get(e->slot(0,0),lit116);return !truth(t470)?V(0.0):t470;})()});
call(e->slot(1,14),joined(Args{lit323},call(e->slot(1,4),Args{sub(V(1.0),([&](){V t471=get(e->slot(0,0),lit126);return !truth(t471)?V(1.0):t471;})()),V(0.0),V(1.0)})));
call(e->slot(1,14),Args{lit324,([&](){V t472=get(e->slot(0,0),lit117);return !truth(t472)?V(0.0):t472;})()});
call(e->slot(1,14),Args{lit283,([&](){V t473=get(e->slot(0,0),lit110);return !truth(t473)?V(0.0):t473;})()});
call(e->slot(1,14),Args{lit325,([&](){V t474=get(e->slot(0,0),lit111);return !truth(t474)?V(0.0):t474;})()});
if(truth(get(e->slot(0,0),lit151))){call(e->slot(1,14),Args{lit326,([&](){V t475=get(e->slot(0,0),lit96);return !truth(t475)?lit267:t475;})()});
call(e->slot(1,14),Args{lit327,([&](){V t476=([&](){V t477=get(e->slot(0,0),lit142);return truth(t477)?V(1.0):t477;})();return !truth(t476)?V(0.0):t476;})()});
call(e->slot(1,14),Args{lit328,([&](){V t478=([&](){V t479=get(e->slot(0,0),lit143);return truth(t479)?V(1.0):t479;})();return !truth(t478)?V(0.0):t478;})()});
call(e->slot(1,14),Args{lit329,([&](){V t480=([&](){V t481=get(e->slot(0,0),lit144);return truth(t481)?V(1.0):t481;})();return !truth(t480)?V(0.0):t480;})()});
call(e->slot(1,14),Args{lit330,([&](){V t482=([&](){V t483=get(e->slot(0,0),lit145);return truth(t483)?V(1.0):t483;})();return !truth(t482)?V(0.0):t482;})()});
call(e->slot(1,14),Args{lit331,([&](){V t484=([&](){V t485=get(e->slot(0,0),lit146);return truth(t485)?V(1.0):t485;})();return !truth(t484)?V(0.0):t484;})()});
call(e->slot(1,14),Args{lit332,([&](){V t486=([&](){V t487=get(e->slot(0,0),lit147);return truth(t487)?V(1.0):t487;})();return !truth(t486)?V(0.0):t486;})()});
call(e->slot(1,14),Args{lit333,([&](){V t488=([&](){V t489=get(e->slot(0,0),lit148);return truth(t489)?V(1.0):t489;})();return !truth(t488)?V(0.0):t488;})()});
call(e->slot(1,14),Args{lit334,([&](){V t490=get(e->slot(0,0),lit87);return !truth(t490)?V(0.0):t490;})()});
call(e->slot(1,14),Args{lit335,([&](){V t491=get(e->slot(0,0),lit88);return !truth(t491)?V(0.0):t491;})()});
call(e->slot(1,14),Args{lit336,([&](){V t492=get(e->slot(0,0),lit89);return !truth(t492)?V(0.0):t492;})()});
call(e->slot(1,14),Args{lit337,([&](){V t493=get(e->slot(0,0),lit86);return !truth(t493)?V(0.0):t493;})()});
call(e->slot(1,14),Args{lit338,([&](){V t494=get(e->slot(0,0),lit84);return !truth(t494)?V(0.0):t494;})()});
call(e->slot(1,14),Args{lit339,([&](){V t495=get(e->slot(0,0),lit134);return !truth(t495)?V(0.0):t495;})()});
}
{double t496=num(V(0.0)),t497=num(V(3.0)),t498=num(V(1.0));for(double t499=t496;(t498>0?t499<=t497:t499>=t497);t499+=t498){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t499);call(e->slot(2,31),Args{e->slot(0,0),get(get(e->slot(1,0),lit149),e->slot(0,0))});
}}
return Args{};});
Ref(e->slot(0,1),lit340).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit78)};V t500=lit79;refs[0].put(std::move(t500));}
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit341).put(native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit80)};V t501=add(([&](){V t502=get(get(e->slot(1,1),lit77),lit80);return !truth(t502)?V(0.0):t502;})(),V(1.0));refs[0].put(std::move(t501));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t503=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t503));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit78)};V t504=lit342;refs[0].put(std::move(t504));}
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t505=first(call(e->slot(1,4),Args{e->slot(0,0),([&](){V t506=get(get(e->slot(1,1),lit5),lit73);return !truth(t506)?V(0.0005):t506;})(),([&](){V t507=get(get(e->slot(1,1),lit5),lit74);return !truth(t507)?V(0.1):t507;})()}));refs[0].put(std::move(t505));}
call(e->slot(1,20),Args{e->slot(0,0)});
if(truth(([&](){V t508=([&](){V t509=V(!truth(e->slot(0,1)));return truth(t509)?e->get("ac"):t509;})();return truth(t508)?get(e->get("ac"),lit343):t508;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t510=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit343),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t510,0);e->slot(0,1)=arg(t510,1);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,1,1)};V t511=e->slot(0,1);refs[0].put(std::move(t511));}
}
}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit78)};V t512=lit344;refs[0].put(std::move(t512));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit81)};V t513=V(false);refs[0].put(std::move(t513));}
call(e->slot(1,30),Args{e->slot(0,0)});
call(e->slot(1,32),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,10),Args{e->slot(0,1),lit149,V()})))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit78)};V t514=lit345;refs[0].put(std::move(t514));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit81)};V t515=V(false);refs[0].put(std::move(t515));}
call(e->slot(1,30),Args{e->slot(0,0)});
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit78)};V t516=lit346;refs[0].put(std::move(t516));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit81)};V t517=V(true);refs[0].put(std::move(t517));}
call(e->slot(1,21),Args{e->slot(0,1)});
call(e->slot(1,22),Args{});
call(e->slot(1,23),Args{e->slot(0,1)});
call(e->slot(1,26),Args{e->slot(0,0)});
call(e->slot(1,27),Args{e->slot(0,0)});
call(e->slot(1,29),Args{});
{Args t518=call(e->slot(1,28),Args{});e->slot(0,3)=arg(t518,0);e->slot(0,4)=arg(t518,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit82)};V t519=e->slot(0,3);refs[0].put(std::move(t519));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit83)};V t520=e->slot(0,4);refs[0].put(std::move(t520));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit138)};V t521=get(get(e->slot(1,1),lit77),lit86);refs[0].put(std::move(t521));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit139)};V t522=get(get(e->slot(1,1),lit77),lit89);refs[0].put(std::move(t522));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit77),lit140)};V t523=get(get(e->slot(1,1),lit77),lit87);refs[0].put(std::move(t523));}
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit347).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t524=get(get(e->slot(1,1),lit77),lit101);return !truth(t524)?V(0.0):t524;})()};
return Args{};}));
Ref(e->slot(0,1),lit348).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t525=get(get(e->slot(1,1),lit77),lit103);return !truth(t525)?V(0.0):t525;})()};
return Args{};}));
Ref(e->slot(0,1),lit349).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t526=get(get(e->slot(1,1),lit77),lit109);return !truth(t526)?V(0.0):t526;})()};
return Args{};}));
Ref(e->slot(0,1),lit350).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t527=get(get(e->slot(1,1),lit77),lit110);return !truth(t527)?V(0.0):t527;})()};
return Args{};}));
Ref(e->slot(0,1),lit351).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t528=get(get(e->slot(1,1),lit77),lit112);return !truth(t528)?V(0.0):t528;})()};
return Args{};}));
Ref(e->slot(0,1),lit352).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t529=get(get(e->slot(1,1),lit77),lit114);return !truth(t529)?V(0.0):t529;})()};
return Args{};}));
Ref(e->slot(0,1),lit353).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t530=get(get(e->slot(1,1),lit77),lit105);return !truth(t530)?V(0.0):t530;})()};
return Args{};}));
Ref(e->slot(0,1),lit354).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t531=get(get(e->slot(1,1),lit77),lit111);return !truth(t531)?V(0.0):t531;})()};
return Args{};}));
Ref(e->slot(0,1),lit355).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,1),lit77)};
return Args{};}));
Ref(e->slot(0,1),lit356).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t532=get(e->slot(1,1),lit77);e->slot(0,1)=std::move(t532);}
if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t533=([&](){V t534=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t534)?V(0.0):t534;})();e->slot(0,0)=std::move(t533);}
{V t535=([&](){V t536=get(get(e->slot(1,1),lit149),e->slot(0,0));return !truth(t536)?get(get(e->slot(1,1),lit149),V(0.0)):t536;})();e->slot(0,1)=std::move(t535);}
return call(get(e->get("string"),lit357),Args{concat(lit358,concat(lit359,lit360)),first(call(e->get("tostring"),Args{([&](){V t537=get(e->slot(2,2),e->slot(0,0));return !truth(t537)?e->slot(0,0):t537;})()})),first(call(e->get("tostring"),Args{get(e->slot(1,1),lit83)})),([&](){V t538=get(e->slot(0,1),lit167);return !truth(t538)?V(0.0):t538;})(),([&](){V t539=get(e->slot(0,1),lit168);return !truth(t539)?V(0.0):t539;})(),([&](){V t540=get(e->slot(0,1),lit169);return !truth(t540)?V(0.0):t540;})(),([&](){V t541=get(e->slot(0,1),lit152);return !truth(t541)?V(0.0):t541;})(),([&](){V t542=get(e->slot(0,1),lit153);return !truth(t542)?V(0.0):t542;})(),([&](){V t543=get(e->slot(0,1),lit154);return !truth(t543)?V(0.0):t543;})(),([&](){V t544=get(e->slot(0,1),lit155);return !truth(t544)?V(0.0):t544;})(),([&](){V t545=get(e->slot(0,1),lit170);return !truth(t545)?V(0.0):t545;})(),([&](){V t546=get(e->slot(0,1),lit171);return !truth(t546)?V(0.0):t546;})()});
}
return call(get(e->get("string"),lit357),joined(Args{concat(lit361,concat(lit362,concat(lit363,concat(lit364,concat(lit365,lit366))))),first(call(e->get("tostring"),Args{get(e->slot(0,1),lit78)})),([&](){V t547=get(e->slot(0,1),lit80);return !truth(t547)?V(0.0):t547;})(),first(call(e->get("tostring"),Args{get(e->slot(0,1),lit83)})),([&](){V t548=get(e->slot(0,1),lit92);return !truth(t548)?V(0.0):t548;})(),([&](){V t549=get(e->slot(0,1),lit101);return !truth(t549)?V(0.0):t549;})(),([&](){V t550=get(e->slot(0,1),lit103);return !truth(t550)?V(0.0):t550;})(),([&](){V t551=get(e->slot(0,1),lit109);return !truth(t551)?V(0.0):t551;})(),([&](){V t552=get(e->slot(0,1),lit112);return !truth(t552)?V(0.0):t552;})(),([&](){V t553=get(e->slot(0,1),lit114);return !truth(t553)?V(0.0):t553;})(),([&](){V t554=get(e->slot(0,1),lit116);return !truth(t554)?V(0.0):t554;})(),([&](){V t555=get(e->slot(0,1),lit117);return !truth(t555)?V(0.0):t555;})(),([&](){V t556=get(e->slot(0,1),lit118);return !truth(t556)?V(0.0):t556;})(),([&](){V t557=get(e->slot(0,1),lit119);return !truth(t557)?V(0.0):t557;})(),([&](){V t558=get(e->slot(0,1),lit113);return !truth(t558)?V(0.0):t558;})(),([&](){V t559=get(e->slot(0,1),lit98);return !truth(t559)?V(0.0):t559;})(),([&](){V t560=get(e->slot(0,1),lit110);return !truth(t560)?V(0.0):t560;})(),([&](){V t561=get(e->slot(0,1),lit111);return !truth(t561)?V(0.0):t561;})(),([&](){V t562=get(e->slot(0,1),lit122);return !truth(t562)?V(0.0):t562;})(),([&](){V t563=get(e->slot(0,1),lit123);return !truth(t563)?V(0.0):t563;})(),([&](){V t564=([&](){V t565=get(e->slot(0,1),lit142);return truth(t565)?lit367:t565;})();return !truth(t564)?lit368:t564;})(),([&](){V t566=([&](){V t567=get(e->slot(0,1),lit143);return truth(t567)?lit367:t567;})();return !truth(t566)?lit368:t566;})(),([&](){V t568=([&](){V t569=get(e->slot(0,1),lit144);return truth(t569)?lit367:t569;})();return !truth(t568)?lit368:t568;})(),([&](){V t570=([&](){V t571=get(e->slot(0,1),lit145);return truth(t571)?lit367:t571;})();return !truth(t570)?lit368:t570;})(),([&](){V t572=([&](){V t573=get(e->slot(0,1),lit146);return truth(t573)?lit367:t573;})();return !truth(t572)?lit368:t572;})(),([&](){V t574=([&](){V t575=get(e->slot(0,1),lit147);return truth(t575)?lit367:t575;})();return !truth(t574)?lit368:t574;})(),([&](){V t576=([&](){V t577=get(e->slot(0,1),lit148);return truth(t577)?lit367:t577;})();return !truth(t576)?lit368:t576;})()},call(e->get("tostring"),Args{get(e->slot(0,1),lit96)})));
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

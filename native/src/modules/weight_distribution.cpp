// Generated native C++ from pinned weight_distribution.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("pitchGain");
static const V lit3("rollGain");
static const V lit4("minBias");
static const V lit5("maxBias");
static const V lit6("neutralThreshold");
static const V lit7("biasTau");
static const V lit8("loadTransferPitchGain");
static const V lit9("loadTransferRollGain");
static const V lit10("chassisRollGain");
static const V lit11("chassisPitchGain");
static const V lit12("chassisHeaveGain");
static const V lit13("chassisYawGain");
static const V lit14("virtualPitchGain");
static const V lit15("virtualRollGain");
static const V lit16("virtualYawGain");
static const V lit17("brakePitchBiasGain");
static const V lit18("brakeLockPitchGain");
static const V lit19("driveRearBiasGain");
static const V lit20("shaftRearBiasGain");
static const V lit21("lsdRearStabilizeGain");
static const V lit22("suspensionStressBiasGain");
static const V lit23("tireContactBiasGain");
static const V lit24("roadInputBiasGain");
static const V lit25("loadPathLossBiasGain");
static const V lit26("bodyFlexBiasGain");
static const V lit27("bodyRuntimeBiasGain");
static const V lit28("bodyRigidityRecoverGain");
static const V lit29("massRearShiftGain");
static const V lit30("massYawBiasGain");
static const V lit31("maxRootBiasAdd");
static const V lit32("defaultWheelLoad");
static const V lit33("wheelLoadReference");
static const V lit34("driveTorqueReference");
static const V lit35("suspensionForceReference");
static const V lit36("minDt");
static const V lit37("maxDt");
static const V lit38("storeOnlyDecayTau");
static const V lit39("debugStoreInterval");
static const V lit40("state");
static const V lit41("frontBias");
static const V lit42("rearBias");
static const V lit43("leftBias");
static const V lit44("rightBias");
static const V lit45("targetFrontBias");
static const V lit46("targetRearBias");
static const V lit47("targetLeftBias");
static const V lit48("targetRightBias");
static const V lit49("pitchCG");
static const V lit50("rollCG");
static const V lit51("stateName");
static const V lit52("NEUTRAL");
static const V lit53("rollName");
static const V lit54("status");
static const V lit55("INIT");
static const V lit56("updateCount");
static const V lit57("linkedCG");
static const V lit58("wheelsValid");
static const V lit59("storeOnly");
static const V lit60("speedKmh");
static const V lit61("loadPitch");
static const V lit62("loadRoll");
static const V lit63("loadYaw");
static const V lit64("chassisRoll");
static const V lit65("chassisPitch");
static const V lit66("chassisHeave");
static const V lit67("chassisYaw");
static const V lit68("virtualPitch");
static const V lit69("virtualRoll");
static const V lit70("virtualYaw");
static const V lit71("brakeInput");
static const V lit72("brakeLockAvg");
static const V lit73("driveTorqueNorm");
static const V lit74("shaftTwist");
static const V lit75("lsdLock");
static const V lit76("suspensionStress");
static const V lit77("suspensionInputAvg");
static const V lit78("roadInputAvg");
static const V lit79("loadPathLossAvg");
static const V lit80("contactLossAvg");
static const V lit81("bodyFlexFactor");
static const V lit82("bodyRuntimePenalty");
static const V lit83("bodyRigidity");
static const V lit84("massScale");
static const V lit85("cgRearShift");
static const V lit86("yawInertiaScale");
static const V lit87("wheelLoad");
static const V lit88("maxWheelLoad");
static const V lit89("avgWheelLoad");
static const V lit90("rootFrontAdd");
static const V lit91("rootRearAdd");
static const V lit92("rootLeftAdd");
static const V lit93("rootRightAdd");
static const V lit94("activeRootInputs");
static const V lit95("loadLinked");
static const V lit96("chassisLinked");
static const V lit97("virtualLinked");
static const V lit98("brakeLinked");
static const V lit99("drivetrainLinked");
static const V lit100("suspensionLinked");
static const V lit101("tireLinked");
static const V lit102("bodyLinked");
static const V lit103("massLinked");
static const V lit104("debugStoreTimer");
static const V lit105("debugStoreNow");
static const V lit106("debug");
static const V lit107("huge");
static const V lit108("safeLoadRaw");
static const V lit109("safeStore");
static const V lit110("safeField");
static const V lit111("getCar");
static const V lit112("wheels");
static const V lit113("ngp_pitch_cg");
static const V lit114("ngp_sprung_pitch_state");
static const V lit115("ngp_sprung_pitch_cg");
static const V lit116("ngp_sm_pitch_cg");
static const V lit117("ngp_roll_cg");
static const V lit118("ngp_sprung_roll_state");
static const V lit119("ngp_sprung_roll_cg");
static const V lit120("ngp_sm_roll_cg");
static const V lit121("ngp_dlt_load_");
static const V lit122("ngp_weight_wheel_load_");
static const V lit123("ngp_wheel_load_");
static const V lit124("ngp_load_wheel_");
static const V lit125("ngp_tire_load_");
static const V lit126("ngp_tire_state_load_");
static const V lit127("ngp_tdyn_load_");
static const V lit128("ngp_contact_load_");
static const V lit129("load");
static const V lit130("loadK");
static const V lit131("ngp_load_front");
static const V lit132("ngp_load_abs_front");
static const V lit133("ngp_weight_input_front");
static const V lit134("ngp_load_rear");
static const V lit135("ngp_load_abs_rear");
static const V lit136("ngp_weight_input_rear");
static const V lit137("ngp_load_left");
static const V lit138("ngp_load_abs_left");
static const V lit139("ngp_weight_input_left");
static const V lit140("ngp_load_right");
static const V lit141("ngp_load_abs_right");
static const V lit142("ngp_weight_input_right");
static const V lit143("max");
static const V lit144("ngp_chassis_roll");
static const V lit145("ngp_body_roll");
static const V lit146("ngp_chassis_pitch");
static const V lit147("ngp_body_pitch");
static const V lit148("ngp_chassis_heave");
static const V lit149("ngp_body_heave");
static const V lit150("ngp_chassis_yaw_hint");
static const V lit151("ngp_yaw_deflection");
static const V lit152("ngp_virtual_pitch");
static const V lit153("ngp_vi_pitch");
static const V lit154("ngp_virtual_roll");
static const V lit155("ngp_vi_roll");
static const V lit156("ngp_virtual_yaw");
static const V lit157("ngp_vi_yaw");
static const V lit158("ngp_brake_input");
static const V lit159("ngp_brake_pedal");
static const V lit160("brake");
static const V lit161("ngp_brake_lock_");
static const V lit162("ngp_brake_lock_ratio_");
static const V lit163("ngp_drive_torque_normalized_from_nm");
static const V lit164("ngp_drive_torque");
static const V lit165("ngp_drivetrain_torque");
static const V lit166("ngp_drive_torque_nm");
static const V lit167("ngp_diff_input_torque_nm");
static const V lit168("ngp_drivetrain_transmitted_torque");
static const V lit169("ngp_shaft_twist");
static const V lit170("ngp_windup_twist");
static const V lit171("ngp_driveline_twist");
static const V lit172("ngp_lsd_lock");
static const V lit173("ngp_diff_lock");
static const V lit174("ngp_susp_integrated_force_");
static const V lit175("ngp_susp_int_force_");
static const V lit176("ngp_susp_");
static const V lit177("ngp_damper_model_force_");
static const V lit178("ngp_damper_");
static const V lit179("min");
static const V lit180("ngp_susp_contact_input_");
static const V lit181("ngp_susp_tire_hop_input_");
static const V lit182("ngp_sci_input_");
static const V lit183("ngp_tire_force_road_input_");
static const V lit184("ngp_tf_road_input_");
static const V lit185("ngp_road_severity_");
static const V lit186("ngp_rii_severity_");
static const V lit187("ngp_tire_contact_loss_");
static const V lit188("ngp_tcr_contact_loss_");
static const V lit189("ngp_contact_loss_");
static const V lit190("ngp_load_path_loss_");
static const V lit191("ngp_lp_loss_");
static const V lit192("ngp_body_flex_factor");
static const V lit193("ngp_chassis_flex_factor");
static const V lit194("ngp_body_runtime_flex_penalty");
static const V lit195("ngp_body_root_flex_penalty");
static const V lit196("ngp_body_rigidity");
static const V lit197("ngp_chassis_rigidity");
static const V lit198("ngp_vehicle_mass_scale");
static const V lit199("ngp_mass_scale");
static const V lit200("ngp_vehicle_cg_rear_shift");
static const V lit201("ngp_front_axis_rear_shift");
static const V lit202("ngp_mass_rear_shift");
static const V lit203("ngp_vehicle_yaw_inertia_scale");
static const V lit204("ngp_mass_yaw_inertia_scale");
static const V lit205("BALANCED");
static const V lit206("FRONT LOADED");
static const V lit207("REAR LOADED");
static const V lit208("CENTERED");
static const V lit209("LEFT LOADED");
static const V lit210("RIGHT LOADED");
static const V lit211("ngp_front_bias");
static const V lit212("ngp_rear_bias");
static const V lit213("ngp_left_bias");
static const V lit214("ngp_right_bias");
static const V lit215("ngp_weight_front_bias");
static const V lit216("ngp_weight_rear_bias");
static const V lit217("ngp_weight_left_bias");
static const V lit218("ngp_weight_right_bias");
static const V lit219("ngp_weight_target_front_bias");
static const V lit220("ngp_weight_target_rear_bias");
static const V lit221("ngp_weight_target_left_bias");
static const V lit222("ngp_weight_target_right_bias");
static const V lit223("ngp_weight_pitch_cg");
static const V lit224("ngp_weight_roll_cg");
static const V lit225("ngp_weight_distribution_status");
static const V lit226("UNKNOWN");
static const V lit227("ngp_weight_distribution_update_count");
static const V lit228("ngp_weight_distribution_wheels_valid");
static const V lit229("ngp_weight_distribution_store_only");
static const V lit230("ngp_weight_distribution_linked_cg");
static const V lit231("ngp_weight_distribution_state");
static const V lit232("ngp_weight_distribution_roll_state");
static const V lit233("ngp_weight_root_front_add");
static const V lit234("ngp_weight_root_rear_add");
static const V lit235("ngp_weight_root_left_add");
static const V lit236("ngp_weight_root_right_add");
static const V lit237("ngp_weight_load_pitch");
static const V lit238("ngp_weight_load_roll");
static const V lit239("ngp_weight_load_yaw");
static const V lit240("ngp_weight_suspension_stress");
static const V lit241("ngp_weight_suspension_input_avg");
static const V lit242("ngp_weight_contact_loss_avg");
static const V lit243("ngp_weight_road_input_avg");
static const V lit244("ngp_weight_load_path_loss_avg");
static const V lit245("ngp_wd_front");
static const V lit246("ngp_wd_rear");
static const V lit247("ngp_wd_left");
static const V lit248("ngp_wd_right");
static const V lit249("ngp_wd_pitch");
static const V lit250("ngp_wd_roll");
static const V lit251("ngp_wd_active_inputs");
static const V lit252("ngp_weight_max_wheel_load");
static const V lit253("ngp_weight_avg_wheel_load");
static const V lit254("ngp_weight_speed_kmh");
static const V lit255("ngp_weight_load_linked");
static const V lit256("ngp_weight_chassis_linked");
static const V lit257("ngp_weight_virtual_linked");
static const V lit258("ngp_weight_brake_linked");
static const V lit259("ngp_weight_drivetrain_linked");
static const V lit260("ngp_weight_suspension_linked");
static const V lit261("ngp_weight_tire_linked");
static const V lit262("ngp_weight_body_linked");
static const V lit263("ngp_weight_mass_linked");
static const V lit264("ngp_weight_brake_input");
static const V lit265("ngp_weight_brake_lock_avg");
static const V lit266("ngp_weight_drive_torque_norm");
static const V lit267("ngp_weight_shaft_twist");
static const V lit268("ngp_weight_lsd_lock");
static const V lit269("ngp_weight_body_flex_factor");
static const V lit270("ngp_weight_body_runtime_penalty");
static const V lit271("ngp_weight_cg_rear_shift");
static const V lit272("init");
static const V lit273("update");
static const V lit274("BAD DT");
static const V lit275("STORE ONLY");
static const V lit276("NO CAR / NEUTRAL");
static const V lit277("RUNNING");
static const V lit278("ROOT RUNNING");
static const V lit279("NO CG / NEUTRAL");
static const V lit280("getState");
static const V lit281("getFrontBias");
static const V lit282("getRearBias");
static const V lit283("getLeftBias");
static const V lit284("getRightBias");
static const V lit285("getTargetFrontBias");
static const V lit286("getTargetRearBias");
static const V lit287("getRootAdds");
static const V lit288("debugStr");
static const V lit289("format");
static const V lit290("Status %s / Count %.0f / CG:%s / Store:%s\n");
static const V lit291("Front %.1f%% Rear %.1f%% / Left %.1f%% Right %.1f%%\n");
static const V lit292("Target F/R/L/R %.3f %.3f %.3f %.3f\n");
static const V lit293("PitchCG %.3f RollCG %.3f / Load P/R/Y %.3f %.3f %.3f\n");
static const V lit294("RootAdd F/R/L/R %.3f %.3f %.3f %.3f\n");
static const V lit295("Susp %.3f Road %.3f ContactLoss %.3f BodyFlex %.2f\n");
static const V lit296("%s / %s\n");
static const V lit297("Links Load:%s Chassis:%s Virtual:%s Brake:%s Drive:%s Susp:%s Tire:%s Body:%s Mass:%s");
static const V lit298("OK");
static const V lit299("NIL");
static const V lit300("YES");
static const V lit301("NO");
static const V lit302("drawDebug");
static const V lit303("text");
static const V lit304("=== WEIGHT DISTRIBUTION ===");
V load_weight_distribution(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(33);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(1.5));set(z,lit3,V(1.5));set(z,lit4,V(0.35));set(z,lit5,V(0.65));set(z,lit6,V(0.01));set(z,lit7,V(0.06));set(z,lit8,V(0.18));set(z,lit9,V(0.18));set(z,lit10,V(0.1));set(z,lit11,V(0.1));set(z,lit12,V(0.04));set(z,lit13,V(0.03));set(z,lit14,V(0.06));set(z,lit15,V(0.06));set(z,lit16,V(0.03));set(z,lit17,V(0.035));set(z,lit18,V(0.02));set(z,lit19,V(0.03));set(z,lit20,V(0.012));set(z,lit21,V(0.01));set(z,lit22,V(0.035));set(z,lit23,V(0.025));set(z,lit24,V(0.02));set(z,lit25,V(0.018));set(z,lit26,V(0.025));set(z,lit27,V(0.025));set(z,lit28,V(0.01));set(z,lit29,V(0.05));set(z,lit30,V(0.01));set(z,lit31,V(0.08));set(z,lit32,V(3500.0));set(z,lit33,V(3500.0));set(z,lit34,V(2500.0));set(z,lit35,V(25000.0));set(z,lit36,V(5e-05));set(z,lit37,V(0.05));set(z,lit38,V(0.75));set(z,lit39,V(0.25));return z;})();refs[0].put(std::move(t3));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit40)};V t4=([&](){V z=table();set(z,lit41,V(0.5));set(z,lit42,V(0.5));set(z,lit43,V(0.5));set(z,lit44,V(0.5));set(z,lit45,V(0.5));set(z,lit46,V(0.5));set(z,lit47,V(0.5));set(z,lit48,V(0.5));set(z,lit49,V(0.0));set(z,lit50,V(0.0));set(z,lit51,lit52);set(z,lit53,lit52);set(z,lit54,lit55);set(z,lit56,V(0.0));set(z,lit57,V(false));set(z,lit58,V(false));set(z,lit59,V(false));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(1.0));set(z,lit82,V(0.0));set(z,lit83,V(1.0));set(z,lit84,V(1.0));set(z,lit85,V(0.0));set(z,lit86,V(1.0));set(z,lit87,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit88,V(3500.0));set(z,lit89,V(3500.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(false));set(z,lit103,V(false));set(z,lit104,V(999.0));set(z,lit105,V(true));return z;})();refs[0].put(std::move(t4));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t5=get(e->slot(0,1),lit40);refs[0].put(std::move(t5));}
e->slot(0,2)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t6=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t6);}
if(truth(([&](){V t7=([&](){V t8=([&](){V t9=eq(e->slot(0,2),V());return !truth(t9)?ne(e->slot(0,2),e->slot(0,2)):t9;})();return !truth(t8)?eq(e->slot(0,2),get(e->get("math"),lit107)):t8;})();return !truth(t7)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit107)))):t7;})())){return Args{([&](){V t10=e->slot(0,1);return !truth(t10)?V(0.0):t10;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t11=first(call(e->slot(1,2),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t11));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(e->slot(0,0)))};
}
return Args{e->slot(0,0)};
return Args{};});
{V t13=get(e->slot(0,0),lit108);e->slot(0,5)=std::move(t13);}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->slot(1,5),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return call(e->slot(1,2),Args{e->slot(0,2),([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()});
return Args{};});
{V t17=get(e->slot(0,0),lit109);e->slot(0,7)=std::move(t17);}
{V t18=get(e->slot(0,0),lit110);e->slot(0,8)=std::move(t18);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t19=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t19));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t20=first(call(e->slot(1,2),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t21=first(call(e->slot(1,2),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t22=first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t22));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t23=divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3)));e->slot(0,4)=std::move(t23);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t24=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t24));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t25=V(!truth(e->get("ac")));return !truth(t25)?V(!truth(get(e->get("ac"),lit111))):t25;})())){return Args{V()};
}
{Args t26=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit111),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t26,0);e->slot(0,1)=arg(t26,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t27=first(call(e->slot(1,8),Args{e->slot(0,0),lit112,V()}));e->slot(0,2)=std::move(t27);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t28=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t28,0);e->slot(0,4)=arg(t28,1);}
if(truth(([&](){V t29=e->slot(0,3);return truth(t29)?e->slot(0,4):t29;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t30=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t30,0));refs[1].put(arg(t30,1));}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t31=first(call(e->slot(1,8),Args{e->slot(0,0),e->slot(0,1),V()}));e->slot(0,3)=std::move(t31);}
if(truth(eq(e->slot(0,3),V()))){return Args{e->slot(0,2)};
}
return call(e->slot(1,2),Args{e->slot(0,3),e->slot(0,2)});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit104)};V t32=add(([&](){V t33=get(get(e->slot(1,1),lit40),lit104);return !truth(t33)?V(0.0):t33;})(),([&](){V t34=e->slot(0,0);return !truth(t34)?V(0.0):t34;})());refs[0].put(std::move(t32));}
if(truth(ge(get(get(e->slot(1,1),lit40),lit104),([&](){V t35=get(get(e->slot(1,1),lit1),lit39);return !truth(t35)?V(0.25):t35;})()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit104)};V t36=V(0.0);refs[0].put(std::move(t36));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit105)};V t37=V(true);refs[0].put(std::move(t37));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit105)};V t38=V(false);refs[0].put(std::move(t38));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit57)};V t39=V(false);refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit95)};V t40=V(false);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit96)};V t41=V(false);refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit97)};V t42=V(false);refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit98)};V t43=V(false);refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit99)};V t44=V(false);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit100)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit101)};V t46=V(false);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit102)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit103)};V t48=V(false);refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit94)};V t49=V(0.0);refs[0].put(std::move(t49));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),e->slot(0,0))};V t50=V(true);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit94)};V t51=add(([&](){V t52=get(get(e->slot(1,1),lit40),lit94);return !truth(t52)?V(0.0):t52;})(),V(1.0));refs[0].put(std::move(t51));}
}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t53=first(call(e->slot(1,8),Args{e->slot(0,0),lit60,V()}));e->slot(0,1)=std::move(t53);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit60)};V t54=first(call(e->slot(1,4),Args{e->slot(0,1)}));refs[0].put(std::move(t54));}
return Args{};
}
{V t55=V();e->slot(0,2)=std::move(t55);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit60)};V t56=mul(first(call(e->slot(1,4),Args{e->slot(0,2)})),V(3.6));refs[0].put(std::move(t56));}
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit60)};V t57=V(0.0);refs[0].put(std::move(t57));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t58=([&](){V t59=([&](){V t60=([&](){V t61=first(call(e->slot(1,5),Args{lit113}));return !truth(t61)?first(call(e->slot(1,5),Args{lit114})):t61;})();return !truth(t60)?first(call(e->slot(1,5),Args{lit115})):t60;})();return !truth(t59)?first(call(e->slot(1,5),Args{lit116})):t59;})();e->slot(0,0)=std::move(t58);}
{V t62=([&](){V t63=([&](){V t64=([&](){V t65=first(call(e->slot(1,5),Args{lit117}));return !truth(t65)?first(call(e->slot(1,5),Args{lit118})):t65;})();return !truth(t64)?first(call(e->slot(1,5),Args{lit119})):t64;})();return !truth(t63)?first(call(e->slot(1,5),Args{lit120})):t63;})();e->slot(0,1)=std::move(t62);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit57)};V t66=([&](){V t67=ne(e->slot(0,0),V());return !truth(t67)?ne(e->slot(0,1),V()):t67;})();refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit49)};V t68=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)})),V(-num(V(0.3))),V(0.3)}));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit50)};V t69=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,1),V(0.0)})),V(-num(V(0.3))),V(0.3)}));refs[0].put(std::move(t69));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t70=first(call(e->slot(1,5),Args{concat(lit121,e->slot(0,0))}));e->slot(0,1)=std::move(t70);}
if(truth(eq(e->slot(0,1),V()))){return Args{V()};
}
return Args{add(get(get(e->slot(1,1),lit1),lit32),first(call(e->slot(1,2),Args{e->slot(0,1),V(0.0)})))};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t71=([&](){V z=table();set(z,V(1.0),first(call(e->slot(1,5),Args{concat(lit122,e->slot(0,1))})));set(z,V(2.0),first(call(e->slot(1,5),Args{concat(lit123,e->slot(0,1))})));set(z,V(3.0),first(call(e->slot(1,5),Args{concat(lit124,e->slot(0,1))})));set(z,V(4.0),first(call(e->slot(1,5),Args{concat(lit125,e->slot(0,1))})));set(z,V(5.0),first(call(e->slot(1,5),Args{concat(lit126,e->slot(0,1))})));set(z,V(6.0),first(call(e->slot(1,5),Args{concat(lit127,e->slot(0,1))})));set(z,V(7.0),first(call(e->slot(1,5),Args{concat(lit128,e->slot(0,1))})));set(z,V(8.0),first(call(e->slot(1,18),Args{e->slot(0,1)})));return z;})();e->slot(0,2)=std::move(t71);}
{Args t72=call(e->get("ipairs"),Args{e->slot(0,2)});V t73=arg(t72,2);while(true){Args t74=call(arg(t72,0),Args{arg(t72,1),t73});t73=arg(t74,0);if(isnil(t73))break;auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=arg(t74,0);e->slot(0,1)=arg(t74,1);if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit40),lit95)};V t75=V(true);refs[0].put(std::move(t75));}
return call(e->slot(2,3),Args{first(call(e->slot(2,2),Args{e->slot(0,1),get(get(e->slot(2,1),lit1),lit32)})),V(0.0),V(12000.0)});
}
}}
{V t76=first(call(e->slot(1,11),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,3)=std::move(t76);}
if(truth(e->slot(0,3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t77=([&](){V t78=first(call(e->slot(2,12),Args{e->slot(1,3),lit129,V()}));return !truth(t78)?first(call(e->slot(2,12),Args{e->slot(1,3),lit130,V()})):t78;})();e->slot(0,0)=std::move(t77);}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,3),Args{first(call(e->slot(2,2),Args{e->slot(0,0),get(get(e->slot(2,1),lit1),lit32)})),V(0.0),V(12000.0)});
}
}
return Args{get(get(e->slot(1,1),lit1),lit32)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);if(truth(([&](){V t79=eq(e->slot(0,0),V());return truth(t79)?eq(e->slot(0,1),V()):t79;})())){return Args{([&](){V t80=e->slot(0,2);return !truth(t80)?V(0.5):t80;})(),([&](){V t81=e->slot(0,3);return !truth(t81)?V(0.5):t81;})(),V(false)};
}
{V t82=first(call(e->slot(1,2),Args{e->slot(0,0),([&](){V t83=e->slot(0,2);return !truth(t83)?V(0.5):t83;})()}));e->slot(0,4)=std::move(t82);}
{V t84=first(call(e->slot(1,2),Args{e->slot(0,1),([&](){V t85=e->slot(0,3);return !truth(t85)?V(0.5):t85;})()}));e->slot(0,5)=std::move(t84);}
if(truth(lt(e->slot(0,4),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,4)};V t86=V(0.0);refs[0].put(std::move(t86));}
}
if(truth(lt(e->slot(0,5),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,5)};V t87=V(0.0);refs[0].put(std::move(t87));}
}
{V t88=add(e->slot(0,4),e->slot(0,5));e->slot(0,6)=std::move(t88);}
if(truth(gt(e->slot(0,6),V(1.5)))){if(truth(gt(e->slot(0,6),V(0.0001)))){return Args{divv(e->slot(0,4),e->slot(0,6)),divv(e->slot(0,5),e->slot(0,6)),V(true)};
}
return Args{V(0.5),V(0.5),V(true)};
}
return Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0),V(1.0)})),first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0),V(1.0)})),V(true)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);{V t89=([&](){V t90=([&](){V t91=first(call(e->slot(1,5),Args{lit131}));return !truth(t91)?first(call(e->slot(1,5),Args{lit132})):t91;})();return !truth(t90)?first(call(e->slot(1,5),Args{lit133})):t90;})();e->slot(0,1)=std::move(t89);}
{V t92=([&](){V t93=([&](){V t94=first(call(e->slot(1,5),Args{lit134}));return !truth(t94)?first(call(e->slot(1,5),Args{lit135})):t94;})();return !truth(t93)?first(call(e->slot(1,5),Args{lit136})):t93;})();e->slot(0,2)=std::move(t92);}
{V t95=([&](){V t96=([&](){V t97=first(call(e->slot(1,5),Args{lit137}));return !truth(t97)?first(call(e->slot(1,5),Args{lit138})):t97;})();return !truth(t96)?first(call(e->slot(1,5),Args{lit139})):t96;})();e->slot(0,3)=std::move(t95);}
{V t98=([&](){V t99=([&](){V t100=first(call(e->slot(1,5),Args{lit140}));return !truth(t100)?first(call(e->slot(1,5),Args{lit141})):t100;})();return !truth(t99)?first(call(e->slot(1,5),Args{lit142})):t99;})();e->slot(0,4)=std::move(t98);}
{Args t101=call(e->slot(1,20),Args{e->slot(0,1),e->slot(0,2),V(0.5),V(0.5)});e->slot(0,5)=arg(t101,0);e->slot(0,6)=arg(t101,1);e->slot(0,7)=arg(t101,2);}
{Args t102=call(e->slot(1,20),Args{e->slot(0,3),e->slot(0,4),V(0.5),V(0.5)});e->slot(0,8)=arg(t102,0);e->slot(0,9)=arg(t102,1);e->slot(0,10)=arg(t102,2);}
if(truth(([&](){V t103=V(!truth(e->slot(0,7)));return !truth(t103)?V(!truth(e->slot(0,10))):t103;})())){auto parent=e;Env storage(parent,false,9);auto e=&storage;{V t104=first(call(e->slot(2,19),Args{e->slot(1,0),V(0.0)}));e->slot(0,0)=std::move(t104);}
{V t105=first(call(e->slot(2,19),Args{e->slot(1,0),V(1.0)}));e->slot(0,1)=std::move(t105);}
{V t106=first(call(e->slot(2,19),Args{e->slot(1,0),V(2.0)}));e->slot(0,2)=std::move(t106);}
{V t107=first(call(e->slot(2,19),Args{e->slot(1,0),V(3.0)}));e->slot(0,3)=std::move(t107);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit40),lit87),V(0.0))};V t108=e->slot(0,0);refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit40),lit87),V(1.0))};V t109=e->slot(0,1);refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit40),lit87),V(2.0))};V t110=e->slot(0,2);refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit40),lit87),V(3.0))};V t111=e->slot(0,3);refs[0].put(std::move(t111));}
{V t112=first(call(get(e->get("math"),lit143),Args{add(add(add(e->slot(0,0),e->slot(0,1)),e->slot(0,2)),e->slot(0,3)),V(0.0001)}));e->slot(0,4)=std::move(t112);}
{V t113=add(e->slot(0,0),e->slot(0,1));e->slot(0,5)=std::move(t113);}
{V t114=add(e->slot(0,2),e->slot(0,3));e->slot(0,6)=std::move(t114);}
{V t115=add(e->slot(0,0),e->slot(0,2));e->slot(0,7)=std::move(t115);}
{V t116=add(e->slot(0,1),e->slot(0,3));e->slot(0,8)=std::move(t116);}
if(truth(V(!truth(e->slot(1,7))))){{std::array<Ref,1> refs{Ref(e,1,5)};V t117=divv(e->slot(0,5),e->slot(0,4));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t118=divv(e->slot(0,6),e->slot(0,4));refs[0].put(std::move(t118));}
}
if(truth(V(!truth(e->slot(1,10))))){{std::array<Ref,1> refs{Ref(e,1,8)};V t119=divv(e->slot(0,7),e->slot(0,4));refs[0].put(std::move(t119));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t120=divv(e->slot(0,8),e->slot(0,4));refs[0].put(std::move(t120));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit40),lit88)};V t121=first(call(get(e->get("math"),lit143),Args{e->slot(0,0),e->slot(0,1),e->slot(0,2),e->slot(0,3)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit40),lit89)};V t122=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t122));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit61)};V t123=first(call(e->slot(1,3),Args{sub(e->slot(0,5),e->slot(0,6)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit62)};V t124=first(call(e->slot(1,3),Args{sub(e->slot(0,8),e->slot(0,9)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit63)};V t125=first(call(e->slot(1,3),Args{add(mul(get(get(e->slot(1,1),lit40),lit62),V(0.65)),mul(get(get(e->slot(1,1),lit40),lit61),V(0.35))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t125));}
call(e->slot(1,15),Args{lit95,([&](){V t126=([&](){V t127=e->slot(0,7);return !truth(t127)?e->slot(0,10):t127;})();return !truth(t126)?get(get(e->slot(1,1),lit40),lit95):t126;})()});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;{V t128=([&](){V t129=first(call(e->slot(1,5),Args{lit144}));return !truth(t129)?first(call(e->slot(1,5),Args{lit145})):t129;})();e->slot(0,0)=std::move(t128);}
{V t130=([&](){V t131=first(call(e->slot(1,5),Args{lit146}));return !truth(t131)?first(call(e->slot(1,5),Args{lit147})):t131;})();e->slot(0,1)=std::move(t130);}
{V t132=([&](){V t133=first(call(e->slot(1,5),Args{lit148}));return !truth(t133)?first(call(e->slot(1,5),Args{lit149})):t133;})();e->slot(0,2)=std::move(t132);}
{V t134=([&](){V t135=first(call(e->slot(1,5),Args{lit150}));return !truth(t135)?first(call(e->slot(1,5),Args{lit151})):t135;})();e->slot(0,3)=std::move(t134);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit64)};V t136=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)})),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit65)};V t137=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,1),V(0.0)})),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t137));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit66)};V t138=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,2),V(0.0)})),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit67)};V t139=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0)})),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t139));}
call(e->slot(1,15),Args{lit96,([&](){V t140=([&](){V t141=([&](){V t142=ne(e->slot(0,0),V());return !truth(t142)?ne(e->slot(0,1),V()):t142;})();return !truth(t141)?ne(e->slot(0,2),V()):t141;})();return !truth(t140)?ne(e->slot(0,3),V()):t140;})()});
{V t143=([&](){V t144=first(call(e->slot(1,5),Args{lit152}));return !truth(t144)?first(call(e->slot(1,5),Args{lit153})):t144;})();e->slot(0,4)=std::move(t143);}
{V t145=([&](){V t146=first(call(e->slot(1,5),Args{lit154}));return !truth(t146)?first(call(e->slot(1,5),Args{lit155})):t146;})();e->slot(0,5)=std::move(t145);}
{V t147=([&](){V t148=first(call(e->slot(1,5),Args{lit156}));return !truth(t148)?first(call(e->slot(1,5),Args{lit157})):t148;})();e->slot(0,6)=std::move(t147);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit68)};V t149=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,4),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit69)};V t150=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,5),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit70)};V t151=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,6),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t151));}
call(e->slot(1,15),Args{lit97,([&](){V t152=([&](){V t153=ne(e->slot(0,4),V());return !truth(t153)?ne(e->slot(0,5),V()):t153;})();return !truth(t152)?ne(e->slot(0,6),V()):t152;})()});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t154=([&](){V t155=first(call(e->slot(1,5),Args{lit158}));return !truth(t155)?first(call(e->slot(1,5),Args{lit159})):t155;})();e->slot(0,1)=std::move(t154);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit71)};V t156=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),joined(Args{e->slot(0,1)},call(e->slot(1,2),Args{first(call(e->slot(1,8),Args{e->slot(0,0),lit160,V(0.0)})),V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t156));}
{V t157=V(0.0);e->slot(0,2)=std::move(t157);}
{V t158=ne(e->slot(0,1),V());e->slot(0,3)=std::move(t158);}
{double t159=num(V(0.0)),t160=num(V(3.0)),t161=num(V(1.0));for(double t162=t159;(t161>0?t162<=t160:t162>=t160);t162+=t161){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t162);{V t163=first(call(e->slot(2,5),Args{concat(lit161,e->slot(0,0))}));e->slot(0,1)=std::move(t163);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t164=first(call(e->slot(2,5),Args{concat(lit162,e->slot(0,0))}));refs[0].put(std::move(t164));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,3)};V t165=V(true);refs[0].put(std::move(t165));}
}
{std::array<Ref,1> refs{Ref(e,1,2)};V t166=add(e->slot(1,2),first(call(e->slot(2,3),Args{first(call(e->slot(2,2),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t166));}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit72)};V t167=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t167));}
call(e->slot(1,15),Args{lit98,e->slot(0,3)});
{V t168=([&](){V t169=([&](){V t170=first(call(e->slot(1,5),Args{lit163}));return !truth(t170)?first(call(e->slot(1,5),Args{lit164})):t170;})();return !truth(t169)?first(call(e->slot(1,5),Args{lit165})):t169;})();e->slot(0,4)=std::move(t168);}
{V t171=([&](){V t172=([&](){V t173=first(call(e->slot(1,5),Args{lit166}));return !truth(t173)?first(call(e->slot(1,5),Args{lit167})):t173;})();return !truth(t172)?first(call(e->slot(1,5),Args{lit168})):t172;})();e->slot(0,5)=std::move(t171);}
{V t174=([&](){V t175=([&](){V t176=first(call(e->slot(1,5),Args{lit169}));return !truth(t176)?first(call(e->slot(1,5),Args{lit170})):t176;})();return !truth(t175)?first(call(e->slot(1,5),Args{lit171})):t175;})();e->slot(0,6)=std::move(t174);}
{V t177=([&](){V t178=first(call(e->slot(1,5),Args{lit172}));return !truth(t178)?first(call(e->slot(1,5),Args{lit173})):t178;})();e->slot(0,7)=std::move(t177);}
{V t179=first(call(e->slot(1,4),call(e->slot(1,2),Args{e->slot(0,4),V(0.0)})));e->slot(0,8)=std::move(t179);}
if(truth(gt(e->slot(0,8),V(1.2)))){{std::array<Ref,1> refs{Ref(e,0,8)};V t180=divv(e->slot(0,8),first(call(get(e->get("math"),lit143),Args{get(get(e->slot(1,1),lit1),lit34),V(1.0)})));refs[0].put(std::move(t180));}
}
{V t181=divv(first(call(e->slot(1,4),call(e->slot(1,2),Args{e->slot(0,5),V(0.0)}))),first(call(get(e->get("math"),lit143),Args{get(get(e->slot(1,1),lit1),lit34),V(1.0)})));e->slot(0,9)=std::move(t181);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit73)};V t182=first(call(e->slot(1,3),Args{first(call(get(e->get("math"),lit143),Args{e->slot(0,8),e->slot(0,9)})),V(0.0),V(1.0)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit74)};V t183=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,6),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit75)};V t184=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t184));}
call(e->slot(1,15),Args{lit99,([&](){V t185=([&](){V t186=([&](){V t187=ne(e->slot(0,4),V());return !truth(t187)?ne(e->slot(0,5),V()):t187;})();return !truth(t186)?ne(e->slot(0,6),V()):t186;})();return !truth(t185)?ne(e->slot(0,7),V()):t185;})()});
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;{V t188=V(0.0);e->slot(0,0)=std::move(t188);}
{V t189=V(0.0);e->slot(0,1)=std::move(t189);}
{V t190=V(0.0);e->slot(0,2)=std::move(t190);}
{V t191=V(0.0);e->slot(0,3)=std::move(t191);}
{V t192=V(0.0);e->slot(0,4)=std::move(t192);}
{V t193=V(false);e->slot(0,5)=std::move(t193);}
{V t194=V(false);e->slot(0,6)=std::move(t194);}
{double t195=num(V(0.0)),t196=num(V(3.0)),t197=num(V(1.0));for(double t198=t195;(t197>0?t198<=t196:t198>=t196);t198+=t197){auto parent=e;Env storage(parent,false,6);auto e=&storage;e->slot(0,0)=V(t198);{V t199=([&](){V t200=([&](){V t201=([&](){V t202=([&](){V t203=first(call(e->slot(2,5),Args{concat(lit174,e->slot(0,0))}));return !truth(t203)?first(call(e->slot(2,5),Args{concat(lit175,e->slot(0,0))})):t203;})();return !truth(t202)?first(call(e->slot(2,5),Args{concat(lit176,e->slot(0,0))})):t202;})();return !truth(t201)?first(call(e->slot(2,5),Args{concat(lit177,e->slot(0,0))})):t201;})();return !truth(t200)?first(call(e->slot(2,5),Args{concat(lit178,e->slot(0,0))})):t200;})();e->slot(0,1)=std::move(t199);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,5)};V t204=V(true);refs[0].put(std::move(t204));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t205=add(e->slot(1,0),first(call(get(e->get("math"),lit179),Args{divv(first(call(e->slot(2,4),call(e->slot(2,2),Args{e->slot(0,1),V(0.0)}))),first(call(get(e->get("math"),lit143),Args{get(get(e->slot(2,1),lit1),lit35),V(1.0)}))),V(1.0)})));refs[0].put(std::move(t205));}
{V t206=([&](){V t207=([&](){V t208=first(call(e->slot(2,5),Args{concat(lit180,e->slot(0,0))}));return !truth(t208)?first(call(e->slot(2,5),Args{concat(lit181,e->slot(0,0))})):t208;})();return !truth(t207)?first(call(e->slot(2,5),Args{concat(lit182,e->slot(0,0))})):t207;})();e->slot(0,2)=std::move(t206);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,1,5)};V t209=V(true);refs[0].put(std::move(t209));}
}
{std::array<Ref,1> refs{Ref(e,1,1)};V t210=add(e->slot(1,1),first(call(e->slot(2,4),call(e->slot(2,2),Args{e->slot(0,2),V(0.0)}))));refs[0].put(std::move(t210));}
{V t211=([&](){V t212=([&](){V t213=([&](){V t214=first(call(e->slot(2,5),Args{concat(lit183,e->slot(0,0))}));return !truth(t214)?first(call(e->slot(2,5),Args{concat(lit184,e->slot(0,0))})):t214;})();return !truth(t213)?first(call(e->slot(2,5),Args{concat(lit185,e->slot(0,0))})):t213;})();return !truth(t212)?first(call(e->slot(2,5),Args{concat(lit186,e->slot(0,0))})):t212;})();e->slot(0,3)=std::move(t211);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,1,6)};V t215=V(true);refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(e,1,2)};V t216=add(e->slot(1,2),first(call(e->slot(2,3),Args{first(call(e->slot(2,2),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)})));refs[0].put(std::move(t216));}
{V t217=([&](){V t218=([&](){V t219=first(call(e->slot(2,5),Args{concat(lit187,e->slot(0,0))}));return !truth(t219)?first(call(e->slot(2,5),Args{concat(lit188,e->slot(0,0))})):t219;})();return !truth(t218)?first(call(e->slot(2,5),Args{concat(lit189,e->slot(0,0))})):t218;})();e->slot(0,4)=std::move(t217);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,1,6)};V t220=V(true);refs[0].put(std::move(t220));}
}
{std::array<Ref,1> refs{Ref(e,1,3)};V t221=add(e->slot(1,3),first(call(e->slot(2,3),Args{first(call(e->slot(2,2),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t221));}
{V t222=([&](){V t223=first(call(e->slot(2,5),Args{concat(lit190,e->slot(0,0))}));return !truth(t223)?first(call(e->slot(2,5),Args{concat(lit191,e->slot(0,0))})):t223;})();e->slot(0,5)=std::move(t222);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,1,6)};V t224=V(true);refs[0].put(std::move(t224));}
}
{std::array<Ref,1> refs{Ref(e,1,4)};V t225=add(e->slot(1,4),first(call(e->slot(2,3),Args{first(call(e->slot(2,2),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t225));}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit76)};V t226=first(call(e->slot(1,3),Args{mul(e->slot(0,0),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit77)};V t227=first(call(e->slot(1,3),Args{mul(e->slot(0,1),V(0.25)),V(0.0),V(1.5)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit78)};V t228=first(call(e->slot(1,3),Args{mul(e->slot(0,2),V(0.25)),V(0.0),V(1.5)}));refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit80)};V t229=first(call(e->slot(1,3),Args{mul(e->slot(0,3),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit79)};V t230=first(call(e->slot(1,3),Args{mul(e->slot(0,4),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t230));}
call(e->slot(1,15),Args{lit100,e->slot(0,5)});
call(e->slot(1,15),Args{lit101,e->slot(0,6)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;{V t231=([&](){V t232=first(call(e->slot(1,5),Args{lit192}));return !truth(t232)?first(call(e->slot(1,5),Args{lit193})):t232;})();e->slot(0,0)=std::move(t231);}
{V t233=([&](){V t234=first(call(e->slot(1,5),Args{lit194}));return !truth(t234)?first(call(e->slot(1,5),Args{lit195})):t234;})();e->slot(0,1)=std::move(t233);}
{V t235=([&](){V t236=first(call(e->slot(1,5),Args{lit196}));return !truth(t236)?first(call(e->slot(1,5),Args{lit197})):t236;})();e->slot(0,2)=std::move(t235);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit81)};V t237=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,0),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit82)};V t238=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,1),V(0.0)})),V(0.0),V(0.6)}));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit83)};V t239=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,2),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t239));}
call(e->slot(1,15),Args{lit102,([&](){V t240=([&](){V t241=ne(e->slot(0,0),V());return !truth(t241)?ne(e->slot(0,1),V()):t241;})();return !truth(t240)?ne(e->slot(0,2),V()):t240;})()});
{V t242=([&](){V t243=first(call(e->slot(1,5),Args{lit198}));return !truth(t243)?first(call(e->slot(1,5),Args{lit199})):t243;})();e->slot(0,3)=std::move(t242);}
{V t244=([&](){V t245=([&](){V t246=first(call(e->slot(1,5),Args{lit200}));return !truth(t246)?first(call(e->slot(1,5),Args{lit201})):t246;})();return !truth(t245)?first(call(e->slot(1,5),Args{lit202})):t245;})();e->slot(0,4)=std::move(t244);}
{V t247=([&](){V t248=first(call(e->slot(1,5),Args{lit203}));return !truth(t248)?first(call(e->slot(1,5),Args{lit204})):t248;})();e->slot(0,5)=std::move(t247);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit84)};V t249=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,3),V(1.0)})),V(0.8),V(1.3)}));refs[0].put(std::move(t249));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit85)};V t250=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,4),V(0.0)})),V(-num(V(0.3))),V(0.3)}));refs[0].put(std::move(t250));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit86)};V t251=first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,5),V(1.0)})),V(0.75),V(1.45)}));refs[0].put(std::move(t251));}
call(e->slot(1,15),Args{lit103,([&](){V t252=([&](){V t253=ne(e->slot(0,3),V());return !truth(t253)?ne(e->slot(0,4),V()):t253;})();return !truth(t252)?ne(e->slot(0,5),V()):t252;})()});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,21),Args{e->slot(0,0)});
call(e->slot(1,22),Args{});
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,24),Args{});
call(e->slot(1,25),Args{});
{V t254=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t254);}
{V t255=add(add(add(add(add(mul(get(get(e->slot(1,1),lit40),lit61),get(e->slot(0,1),lit8)),mul(get(get(e->slot(1,1),lit40),lit65),get(e->slot(0,1),lit11))),mul(get(get(e->slot(1,1),lit40),lit68),get(e->slot(0,1),lit14))),mul(get(get(e->slot(1,1),lit40),lit71),get(e->slot(0,1),lit17))),mul(get(get(e->slot(1,1),lit40),lit72),get(e->slot(0,1),lit18))),mul(get(get(e->slot(1,1),lit40),lit77),get(e->slot(0,1),lit12)));e->slot(0,2)=std::move(t255);}
{V t256=sub(add(add(add(V(-num(e->slot(0,2))),mul(get(get(e->slot(1,1),lit40),lit73),get(e->slot(0,1),lit19))),mul(first(call(e->slot(1,4),Args{get(get(e->slot(1,1),lit40),lit74)})),get(e->slot(0,1),lit20))),mul(get(get(e->slot(1,1),lit40),lit85),get(e->slot(0,1),lit29))),mul(get(get(e->slot(1,1),lit40),lit75),get(e->slot(0,1),lit21)));e->slot(0,3)=std::move(t256);}
{V t257=add(add(add(add(add(mul(get(get(e->slot(1,1),lit40),lit62),get(e->slot(0,1),lit9)),mul(get(get(e->slot(1,1),lit40),lit64),get(e->slot(0,1),lit10))),mul(get(get(e->slot(1,1),lit40),lit69),get(e->slot(0,1),lit15))),mul(get(get(e->slot(1,1),lit40),lit67),get(e->slot(0,1),lit13))),mul(get(get(e->slot(1,1),lit40),lit70),get(e->slot(0,1),lit16))),mul(sub(get(get(e->slot(1,1),lit40),lit86),V(1.0)),get(e->slot(0,1),lit30)));e->slot(0,4)=std::move(t257);}
{V t258=V(-num(e->slot(0,4)));e->slot(0,5)=std::move(t258);}
{V t259=sub(add(add(add(add(add(mul(get(get(e->slot(1,1),lit40),lit76),get(e->slot(0,1),lit22)),mul(get(get(e->slot(1,1),lit40),lit80),get(e->slot(0,1),lit23))),mul(get(get(e->slot(1,1),lit40),lit78),get(e->slot(0,1),lit24))),mul(get(get(e->slot(1,1),lit40),lit79),get(e->slot(0,1),lit25))),mul(first(call(get(e->get("math"),lit143),Args{sub(get(get(e->slot(1,1),lit40),lit81),V(1.0)),V(0.0)})),get(e->slot(0,1),lit26))),mul(get(get(e->slot(1,1),lit40),lit82),get(e->slot(0,1),lit27))),mul(first(call(get(e->get("math"),lit143),Args{sub(get(get(e->slot(1,1),lit40),lit83),V(1.0)),V(0.0)})),get(e->slot(0,1),lit28)));e->slot(0,6)=std::move(t259);}
{std::array<Ref,1> refs{Ref(e,0,2)};V t260=add(e->slot(0,2),e->slot(0,6));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t261=add(e->slot(0,3),e->slot(0,6));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit90)};V t262=first(call(e->slot(1,3),Args{e->slot(0,2),V(-num(get(e->slot(0,1),lit31))),get(e->slot(0,1),lit31)}));refs[0].put(std::move(t262));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit91)};V t263=first(call(e->slot(1,3),Args{e->slot(0,3),V(-num(get(e->slot(0,1),lit31))),get(e->slot(0,1),lit31)}));refs[0].put(std::move(t263));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit92)};V t264=first(call(e->slot(1,3),Args{e->slot(0,4),V(-num(get(e->slot(0,1),lit31))),get(e->slot(0,1),lit31)}));refs[0].put(std::move(t264));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit93)};V t265=first(call(e->slot(1,3),Args{e->slot(0,5),V(-num(get(e->slot(0,1),lit31))),get(e->slot(0,1),lit31)}));refs[0].put(std::move(t265));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t266=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t266);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit45)};V t267=first(call(e->slot(1,3),Args{add(add(V(0.5),mul(e->slot(0,0),get(e->slot(0,1),lit2))),([&](){V t268=get(get(e->slot(1,1),lit40),lit90);return !truth(t268)?V(0.0):t268;})()),get(e->slot(0,1),lit4),get(e->slot(0,1),lit5)}));refs[0].put(std::move(t267));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit46)};V t269=first(call(e->slot(1,3),Args{add(sub(V(0.5),mul(e->slot(0,0),get(e->slot(0,1),lit2))),([&](){V t270=get(get(e->slot(1,1),lit40),lit91);return !truth(t270)?V(0.0):t270;})()),get(e->slot(0,1),lit4),get(e->slot(0,1),lit5)}));refs[0].put(std::move(t269));}
{V t271=add(get(get(e->slot(1,1),lit40),lit45),get(get(e->slot(1,1),lit40),lit46));e->slot(0,2)=std::move(t271);}
if(truth(gt(e->slot(0,2),V(0.0001)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit45)};V t272=divv(get(get(e->slot(1,1),lit40),lit45),e->slot(0,2));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit46)};V t273=divv(get(get(e->slot(1,1),lit40),lit46),e->slot(0,2));refs[0].put(std::move(t273));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit45)};V t274=V(0.5);refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit46)};V t275=V(0.5);refs[0].put(std::move(t275));}
}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t276=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t276);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit47)};V t277=first(call(e->slot(1,3),Args{add(add(V(0.5),mul(e->slot(0,0),get(e->slot(0,1),lit3))),([&](){V t278=get(get(e->slot(1,1),lit40),lit92);return !truth(t278)?V(0.0):t278;})()),get(e->slot(0,1),lit4),get(e->slot(0,1),lit5)}));refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit48)};V t279=first(call(e->slot(1,3),Args{add(sub(V(0.5),mul(e->slot(0,0),get(e->slot(0,1),lit3))),([&](){V t280=get(get(e->slot(1,1),lit40),lit93);return !truth(t280)?V(0.0):t280;})()),get(e->slot(0,1),lit4),get(e->slot(0,1),lit5)}));refs[0].put(std::move(t279));}
{V t281=add(get(get(e->slot(1,1),lit40),lit47),get(get(e->slot(1,1),lit40),lit48));e->slot(0,2)=std::move(t281);}
if(truth(gt(e->slot(0,2),V(0.0001)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit47)};V t282=divv(get(get(e->slot(1,1),lit40),lit47),e->slot(0,2));refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit48)};V t283=divv(get(get(e->slot(1,1),lit40),lit48),e->slot(0,2));refs[0].put(std::move(t283));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit47)};V t284=V(0.5);refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit48)};V t285=V(0.5);refs[0].put(std::move(t285));}
}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t286=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t286);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit41)};V t287=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit41),get(get(e->slot(1,1),lit40),lit45),get(e->slot(0,1),lit7),e->slot(0,0)}));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit42)};V t288=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit42),get(get(e->slot(1,1),lit40),lit46),get(e->slot(0,1),lit7),e->slot(0,0)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit43)};V t289=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit43),get(get(e->slot(1,1),lit40),lit47),get(e->slot(0,1),lit7),e->slot(0,0)}));refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit44)};V t290=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit44),get(get(e->slot(1,1),lit40),lit48),get(e->slot(0,1),lit7),e->slot(0,0)}));refs[0].put(std::move(t290));}
{V t291=first(call(e->slot(1,3),Args{get(get(e->slot(1,1),lit40),lit41),get(e->slot(0,1),lit4),get(e->slot(0,1),lit5)}));e->slot(0,2)=std::move(t291);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit41)};V t292=e->slot(0,2);refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit42)};V t293=sub(V(1.0),e->slot(0,2));refs[0].put(std::move(t293));}
{V t294=first(call(e->slot(1,3),Args{get(get(e->slot(1,1),lit40),lit43),get(e->slot(0,1),lit4),get(e->slot(0,1),lit5)}));e->slot(0,3)=std::move(t294);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit43)};V t295=e->slot(0,3);refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit44)};V t296=sub(V(1.0),e->slot(0,3));refs[0].put(std::move(t296));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t297=([&](){V t298=get(get(e->slot(1,1),lit1),lit38);return !truth(t298)?V(0.75):t298;})();e->slot(0,1)=std::move(t297);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit90)};V t299=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit90),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit91)};V t300=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit91),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit92)};V t301=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit92),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit93)};V t302=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit40),lit93),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t302));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(lt(first(call(e->slot(1,4),Args{add(e->slot(0,0),([&](){V t303=get(get(e->slot(1,1),lit40),lit90);return !truth(t303)?V(0.0):t303;})())})),get(get(e->slot(1,1),lit1),lit6)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit51)};V t304=lit205;refs[0].put(std::move(t304));}
}else if(truth(gt(add(e->slot(0,0),([&](){V t305=get(get(e->slot(1,1),lit40),lit90);return !truth(t305)?V(0.0):t305;})()),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit51)};V t306=lit206;refs[0].put(std::move(t306));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit51)};V t307=lit207;refs[0].put(std::move(t307));}
}

if(truth(lt(first(call(e->slot(1,4),Args{add(e->slot(0,1),([&](){V t308=get(get(e->slot(1,1),lit40),lit92);return !truth(t308)?V(0.0):t308;})())})),get(get(e->slot(1,1),lit1),lit6)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit53)};V t309=lit208;refs[0].put(std::move(t309));}
}else if(truth(gt(add(e->slot(0,1),([&](){V t310=get(get(e->slot(1,1),lit40),lit92);return !truth(t310)?V(0.0):t310;})()),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit53)};V t311=lit209;refs[0].put(std::move(t311));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit53)};V t312=lit210;refs[0].put(std::move(t312));}
}

return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,7),Args{lit211,([&](){V t313=get(get(e->slot(1,1),lit40),lit41);return !truth(t313)?V(0.5):t313;})()});
call(e->slot(1,7),Args{lit212,([&](){V t314=get(get(e->slot(1,1),lit40),lit42);return !truth(t314)?V(0.5):t314;})()});
call(e->slot(1,7),Args{lit213,([&](){V t315=get(get(e->slot(1,1),lit40),lit43);return !truth(t315)?V(0.5):t315;})()});
call(e->slot(1,7),Args{lit214,([&](){V t316=get(get(e->slot(1,1),lit40),lit44);return !truth(t316)?V(0.5):t316;})()});
call(e->slot(1,7),Args{lit215,([&](){V t317=get(get(e->slot(1,1),lit40),lit41);return !truth(t317)?V(0.5):t317;})()});
call(e->slot(1,7),Args{lit216,([&](){V t318=get(get(e->slot(1,1),lit40),lit42);return !truth(t318)?V(0.5):t318;})()});
call(e->slot(1,7),Args{lit217,([&](){V t319=get(get(e->slot(1,1),lit40),lit43);return !truth(t319)?V(0.5):t319;})()});
call(e->slot(1,7),Args{lit218,([&](){V t320=get(get(e->slot(1,1),lit40),lit44);return !truth(t320)?V(0.5):t320;})()});
call(e->slot(1,7),Args{lit219,([&](){V t321=get(get(e->slot(1,1),lit40),lit45);return !truth(t321)?V(0.5):t321;})()});
call(e->slot(1,7),Args{lit220,([&](){V t322=get(get(e->slot(1,1),lit40),lit46);return !truth(t322)?V(0.5):t322;})()});
call(e->slot(1,7),Args{lit221,([&](){V t323=get(get(e->slot(1,1),lit40),lit47);return !truth(t323)?V(0.5):t323;})()});
call(e->slot(1,7),Args{lit222,([&](){V t324=get(get(e->slot(1,1),lit40),lit48);return !truth(t324)?V(0.5):t324;})()});
call(e->slot(1,7),Args{lit223,([&](){V t325=get(get(e->slot(1,1),lit40),lit49);return !truth(t325)?V(0.0):t325;})()});
call(e->slot(1,7),Args{lit224,([&](){V t326=get(get(e->slot(1,1),lit40),lit50);return !truth(t326)?V(0.0):t326;})()});
call(e->slot(1,7),Args{lit225,([&](){V t327=get(get(e->slot(1,1),lit40),lit54);return !truth(t327)?lit226:t327;})()});
call(e->slot(1,7),Args{lit227,([&](){V t328=get(get(e->slot(1,1),lit40),lit56);return !truth(t328)?V(0.0):t328;})()});
call(e->slot(1,7),Args{lit228,([&](){V t329=([&](){V t330=get(get(e->slot(1,1),lit40),lit58);return truth(t330)?V(1.0):t330;})();return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,7),Args{lit229,([&](){V t331=([&](){V t332=get(get(e->slot(1,1),lit40),lit59);return truth(t332)?V(1.0):t332;})();return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,7),Args{lit230,([&](){V t333=([&](){V t334=get(get(e->slot(1,1),lit40),lit57);return truth(t334)?V(1.0):t334;})();return !truth(t333)?V(0.0):t333;})()});
call(e->slot(1,7),Args{lit231,([&](){V t335=get(get(e->slot(1,1),lit40),lit51);return !truth(t335)?lit205:t335;})()});
call(e->slot(1,7),Args{lit232,([&](){V t336=get(get(e->slot(1,1),lit40),lit53);return !truth(t336)?lit208:t336;})()});
call(e->slot(1,7),Args{lit233,([&](){V t337=get(get(e->slot(1,1),lit40),lit90);return !truth(t337)?V(0.0):t337;})()});
call(e->slot(1,7),Args{lit234,([&](){V t338=get(get(e->slot(1,1),lit40),lit91);return !truth(t338)?V(0.0):t338;})()});
call(e->slot(1,7),Args{lit235,([&](){V t339=get(get(e->slot(1,1),lit40),lit92);return !truth(t339)?V(0.0):t339;})()});
call(e->slot(1,7),Args{lit236,([&](){V t340=get(get(e->slot(1,1),lit40),lit93);return !truth(t340)?V(0.0):t340;})()});
call(e->slot(1,7),Args{lit237,([&](){V t341=get(get(e->slot(1,1),lit40),lit61);return !truth(t341)?V(0.0):t341;})()});
call(e->slot(1,7),Args{lit238,([&](){V t342=get(get(e->slot(1,1),lit40),lit62);return !truth(t342)?V(0.0):t342;})()});
call(e->slot(1,7),Args{lit239,([&](){V t343=get(get(e->slot(1,1),lit40),lit63);return !truth(t343)?V(0.0):t343;})()});
call(e->slot(1,7),Args{lit240,([&](){V t344=get(get(e->slot(1,1),lit40),lit76);return !truth(t344)?V(0.0):t344;})()});
call(e->slot(1,7),Args{lit241,([&](){V t345=get(get(e->slot(1,1),lit40),lit77);return !truth(t345)?V(0.0):t345;})()});
call(e->slot(1,7),Args{lit242,([&](){V t346=get(get(e->slot(1,1),lit40),lit80);return !truth(t346)?V(0.0):t346;})()});
call(e->slot(1,7),Args{lit243,([&](){V t347=get(get(e->slot(1,1),lit40),lit78);return !truth(t347)?V(0.0):t347;})()});
call(e->slot(1,7),Args{lit244,([&](){V t348=get(get(e->slot(1,1),lit40),lit79);return !truth(t348)?V(0.0):t348;})()});
call(e->slot(1,7),Args{lit245,([&](){V t349=get(get(e->slot(1,1),lit40),lit41);return !truth(t349)?V(0.5):t349;})()});
call(e->slot(1,7),Args{lit246,([&](){V t350=get(get(e->slot(1,1),lit40),lit42);return !truth(t350)?V(0.5):t350;})()});
call(e->slot(1,7),Args{lit247,([&](){V t351=get(get(e->slot(1,1),lit40),lit43);return !truth(t351)?V(0.5):t351;})()});
call(e->slot(1,7),Args{lit248,([&](){V t352=get(get(e->slot(1,1),lit40),lit44);return !truth(t352)?V(0.5):t352;})()});
call(e->slot(1,7),Args{lit249,([&](){V t353=get(get(e->slot(1,1),lit40),lit61);return !truth(t353)?V(0.0):t353;})()});
call(e->slot(1,7),Args{lit250,([&](){V t354=get(get(e->slot(1,1),lit40),lit62);return !truth(t354)?V(0.0):t354;})()});
call(e->slot(1,7),Args{lit251,([&](){V t355=get(get(e->slot(1,1),lit40),lit94);return !truth(t355)?V(0.0):t355;})()});
call(e->slot(1,7),Args{lit252,([&](){V t356=get(get(e->slot(1,1),lit40),lit88);return !truth(t356)?V(0.0):t356;})()});
call(e->slot(1,7),Args{lit253,([&](){V t357=get(get(e->slot(1,1),lit40),lit89);return !truth(t357)?V(0.0):t357;})()});
call(e->slot(1,7),Args{lit254,([&](){V t358=get(get(e->slot(1,1),lit40),lit60);return !truth(t358)?V(0.0):t358;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit40),lit105))))){return Args{};
}
call(e->slot(1,7),Args{lit255,([&](){V t359=([&](){V t360=get(get(e->slot(1,1),lit40),lit95);return truth(t360)?V(1.0):t360;})();return !truth(t359)?V(0.0):t359;})()});
call(e->slot(1,7),Args{lit256,([&](){V t361=([&](){V t362=get(get(e->slot(1,1),lit40),lit96);return truth(t362)?V(1.0):t362;})();return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,7),Args{lit257,([&](){V t363=([&](){V t364=get(get(e->slot(1,1),lit40),lit97);return truth(t364)?V(1.0):t364;})();return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,7),Args{lit258,([&](){V t365=([&](){V t366=get(get(e->slot(1,1),lit40),lit98);return truth(t366)?V(1.0):t366;})();return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,7),Args{lit259,([&](){V t367=([&](){V t368=get(get(e->slot(1,1),lit40),lit99);return truth(t368)?V(1.0):t368;})();return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,7),Args{lit260,([&](){V t369=([&](){V t370=get(get(e->slot(1,1),lit40),lit100);return truth(t370)?V(1.0):t370;})();return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,7),Args{lit261,([&](){V t371=([&](){V t372=get(get(e->slot(1,1),lit40),lit101);return truth(t372)?V(1.0):t372;})();return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,7),Args{lit262,([&](){V t373=([&](){V t374=get(get(e->slot(1,1),lit40),lit102);return truth(t374)?V(1.0):t374;})();return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,7),Args{lit263,([&](){V t375=([&](){V t376=get(get(e->slot(1,1),lit40),lit103);return truth(t376)?V(1.0):t376;})();return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,7),Args{lit264,([&](){V t377=get(get(e->slot(1,1),lit40),lit71);return !truth(t377)?V(0.0):t377;})()});
call(e->slot(1,7),Args{lit265,([&](){V t378=get(get(e->slot(1,1),lit40),lit72);return !truth(t378)?V(0.0):t378;})()});
call(e->slot(1,7),Args{lit266,([&](){V t379=get(get(e->slot(1,1),lit40),lit73);return !truth(t379)?V(0.0):t379;})()});
call(e->slot(1,7),Args{lit267,([&](){V t380=get(get(e->slot(1,1),lit40),lit74);return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,7),Args{lit268,([&](){V t381=get(get(e->slot(1,1),lit40),lit75);return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,7),Args{lit269,([&](){V t382=get(get(e->slot(1,1),lit40),lit81);return !truth(t382)?V(1.0):t382;})()});
call(e->slot(1,7),Args{lit270,([&](){V t383=get(get(e->slot(1,1),lit40),lit82);return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,7),Args{lit271,([&](){V t384=get(get(e->slot(1,1),lit40),lit85);return !truth(t384)?V(0.0):t384;})()});
return Args{};});
Ref(e->slot(0,1),lit272).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t385=lit55;refs[0].put(std::move(t385));}
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit273).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit56)};V t386=add(([&](){V t387=get(get(e->slot(1,1),lit40),lit56);return !truth(t387)?V(0.0):t387;})(),V(1.0));refs[0].put(std::move(t386));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t388=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t388));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t389=lit274;refs[0].put(std::move(t389));}
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t390=first(call(e->slot(1,3),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit36),get(get(e->slot(1,1),lit1),lit37)}));refs[0].put(std::move(t390));}
call(e->slot(1,13),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t391=([&](){V t392=e->slot(0,1);return !truth(t392)?first(call(e->slot(1,10),Args{})):t392;})();refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit59)};V t393=eq(e->slot(0,1),V());refs[0].put(std::move(t393));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit58)};V t394=([&](){V t395=ne(e->slot(0,1),V());return truth(t395)?ne(first(call(e->slot(1,8),Args{e->slot(0,1),lit112,V()})),V()):t395;})();refs[0].put(std::move(t394));}
call(e->slot(1,14),Args{});
call(e->slot(1,16),Args{e->slot(0,1)});
call(e->slot(1,17),Args{});
call(e->slot(1,26),Args{e->slot(0,1)});
if(truth(get(get(e->slot(1,1),lit40),lit59))){call(e->slot(1,30),Args{e->slot(0,0)});
}
call(e->slot(1,27),Args{get(get(e->slot(1,1),lit40),lit49)});
call(e->slot(1,28),Args{get(get(e->slot(1,1),lit40),lit50)});
call(e->slot(1,29),Args{e->slot(0,0)});
call(e->slot(1,31),Args{get(get(e->slot(1,1),lit40),lit49),get(get(e->slot(1,1),lit40),lit50)});
if(truth(get(get(e->slot(1,1),lit40),lit59))){if(truth(([&](){V t396=gt(get(get(e->slot(1,1),lit40),lit94),V(0.0));return !truth(t396)?get(get(e->slot(1,1),lit40),lit57):t396;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t397=lit275;refs[0].put(std::move(t397));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t398=lit276;refs[0].put(std::move(t398));}
}
}else if(truth(get(get(e->slot(1,1),lit40),lit57))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t399=lit277;refs[0].put(std::move(t399));}
}else if(truth(gt(get(get(e->slot(1,1),lit40),lit94),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t400=lit278;refs[0].put(std::move(t400));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit40),lit54)};V t401=lit279;refs[0].put(std::move(t401));}
}


call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit280).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,1),lit40)};
return Args{};}));
Ref(e->slot(0,1),lit281).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t402=get(get(e->slot(1,1),lit40),lit41);return !truth(t402)?V(0.5):t402;})()};
return Args{};}));
Ref(e->slot(0,1),lit282).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t403=get(get(e->slot(1,1),lit40),lit42);return !truth(t403)?V(0.5):t403;})()};
return Args{};}));
Ref(e->slot(0,1),lit283).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t404=get(get(e->slot(1,1),lit40),lit43);return !truth(t404)?V(0.5):t404;})()};
return Args{};}));
Ref(e->slot(0,1),lit284).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t405=get(get(e->slot(1,1),lit40),lit44);return !truth(t405)?V(0.5):t405;})()};
return Args{};}));
Ref(e->slot(0,1),lit285).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t406=get(get(e->slot(1,1),lit40),lit45);return !truth(t406)?V(0.5):t406;})()};
return Args{};}));
Ref(e->slot(0,1),lit286).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t407=get(get(e->slot(1,1),lit40),lit46);return !truth(t407)?V(0.5):t407;})()};
return Args{};}));
Ref(e->slot(0,1),lit287).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t408=get(get(e->slot(1,1),lit40),lit90);return !truth(t408)?V(0.0):t408;})(),([&](){V t409=get(get(e->slot(1,1),lit40),lit91);return !truth(t409)?V(0.0):t409;})(),([&](){V t410=get(get(e->slot(1,1),lit40),lit92);return !truth(t410)?V(0.0):t410;})(),([&](){V t411=get(get(e->slot(1,1),lit40),lit93);return !truth(t411)?V(0.0):t411;})()};
return Args{};}));
Ref(e->slot(0,1),lit288).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit289),Args{concat(lit290,concat(lit291,concat(lit292,concat(lit293,concat(lit294,concat(lit295,concat(lit296,lit297))))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit40),lit54)})),([&](){V t412=get(get(e->slot(1,1),lit40),lit56);return !truth(t412)?V(0.0):t412;})(),([&](){V t413=([&](){V t414=get(get(e->slot(1,1),lit40),lit57);return truth(t414)?lit298:t414;})();return !truth(t413)?lit299:t413;})(),([&](){V t415=([&](){V t416=get(get(e->slot(1,1),lit40),lit59);return truth(t416)?lit300:t416;})();return !truth(t415)?lit301:t415;})(),mul(([&](){V t417=get(get(e->slot(1,1),lit40),lit41);return !truth(t417)?V(0.5):t417;})(),V(100.0)),mul(([&](){V t418=get(get(e->slot(1,1),lit40),lit42);return !truth(t418)?V(0.5):t418;})(),V(100.0)),mul(([&](){V t419=get(get(e->slot(1,1),lit40),lit43);return !truth(t419)?V(0.5):t419;})(),V(100.0)),mul(([&](){V t420=get(get(e->slot(1,1),lit40),lit44);return !truth(t420)?V(0.5):t420;})(),V(100.0)),([&](){V t421=get(get(e->slot(1,1),lit40),lit45);return !truth(t421)?V(0.5):t421;})(),([&](){V t422=get(get(e->slot(1,1),lit40),lit46);return !truth(t422)?V(0.5):t422;})(),([&](){V t423=get(get(e->slot(1,1),lit40),lit47);return !truth(t423)?V(0.5):t423;})(),([&](){V t424=get(get(e->slot(1,1),lit40),lit48);return !truth(t424)?V(0.5):t424;})(),([&](){V t425=get(get(e->slot(1,1),lit40),lit49);return !truth(t425)?V(0.0):t425;})(),([&](){V t426=get(get(e->slot(1,1),lit40),lit50);return !truth(t426)?V(0.0):t426;})(),([&](){V t427=get(get(e->slot(1,1),lit40),lit61);return !truth(t427)?V(0.0):t427;})(),([&](){V t428=get(get(e->slot(1,1),lit40),lit62);return !truth(t428)?V(0.0):t428;})(),([&](){V t429=get(get(e->slot(1,1),lit40),lit63);return !truth(t429)?V(0.0):t429;})(),([&](){V t430=get(get(e->slot(1,1),lit40),lit90);return !truth(t430)?V(0.0):t430;})(),([&](){V t431=get(get(e->slot(1,1),lit40),lit91);return !truth(t431)?V(0.0):t431;})(),([&](){V t432=get(get(e->slot(1,1),lit40),lit92);return !truth(t432)?V(0.0):t432;})(),([&](){V t433=get(get(e->slot(1,1),lit40),lit93);return !truth(t433)?V(0.0):t433;})(),([&](){V t434=get(get(e->slot(1,1),lit40),lit76);return !truth(t434)?V(0.0):t434;})(),([&](){V t435=get(get(e->slot(1,1),lit40),lit78);return !truth(t435)?V(0.0):t435;})(),([&](){V t436=get(get(e->slot(1,1),lit40),lit80);return !truth(t436)?V(0.0):t436;})(),([&](){V t437=get(get(e->slot(1,1),lit40),lit81);return !truth(t437)?V(1.0):t437;})(),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit40),lit51)})),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit40),lit53)})),([&](){V t438=([&](){V t439=get(get(e->slot(1,1),lit40),lit95);return truth(t439)?lit298:t439;})();return !truth(t438)?lit299:t438;})(),([&](){V t440=([&](){V t441=get(get(e->slot(1,1),lit40),lit96);return truth(t441)?lit298:t441;})();return !truth(t440)?lit299:t440;})(),([&](){V t442=([&](){V t443=get(get(e->slot(1,1),lit40),lit97);return truth(t443)?lit298:t443;})();return !truth(t442)?lit299:t442;})(),([&](){V t444=([&](){V t445=get(get(e->slot(1,1),lit40),lit98);return truth(t445)?lit298:t445;})();return !truth(t444)?lit299:t444;})(),([&](){V t446=([&](){V t447=get(get(e->slot(1,1),lit40),lit99);return truth(t447)?lit298:t447;})();return !truth(t446)?lit299:t446;})(),([&](){V t448=([&](){V t449=get(get(e->slot(1,1),lit40),lit100);return truth(t449)?lit298:t449;})();return !truth(t448)?lit299:t448;})(),([&](){V t450=([&](){V t451=get(get(e->slot(1,1),lit40),lit101);return truth(t451)?lit298:t451;})();return !truth(t450)?lit299:t450;})(),([&](){V t452=([&](){V t453=get(get(e->slot(1,1),lit40),lit102);return truth(t453)?lit298:t453;})();return !truth(t452)?lit299:t452;})(),([&](){V t454=([&](){V t455=get(get(e->slot(1,1),lit40),lit103);return truth(t455)?lit298:t455;})();return !truth(t454)?lit299:t454;})()});
return Args{};}));
Ref(e->slot(0,1),lit302).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit303),Args{lit304});
call(get(e->get("ui"),lit303),call(get(e->slot(1,1),lit288),Args{}));
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

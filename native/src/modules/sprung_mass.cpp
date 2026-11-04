// Generated native C++ from pinned sprung_mass.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("frontSpringRef");
static const V lit3("rearSpringRef");
static const V lit4("pitchCGScale");
static const V lit5("rollCGScale");
static const V lit6("pitchTau");
static const V lit7("rollTau");
static const V lit8("maxPitchCG");
static const V lit9("maxRollCG");
static const V lit10("chassisEnergyPitchGain");
static const V lit11("chassisReleasePitchGain");
static const V lit12("chassisEnergyRollGain");
static const V lit13("chassisReleaseRollGain");
static const V lit14("springForceGain");
static const V lit15("damperForceGain");
static const V lit16("tireHopCGGain");
static const V lit17("brakePitchGain");
static const V lit18("drivePitchGain");
static const V lit19("bodyFlexCGGain");
static const V lit20("bodyStiffCGLoss");
static const V lit21("suspensionStressCGGain");
static const V lit22("brakeLockCGGain");
static const V lit23("weightBiasCGGain");
static const V lit24("damageRuntimeCGGain");
static const V lit25("chassisFlexCGGain");
static const V lit26("roadBodyPitchGain");
static const V lit27("roadBodyRollGain");
static const V lit28("loadPathPitchGain");
static const V lit29("loadPathRollGain");
static const V lit30("impactCGGain");
static const V lit31("maxRootCGAdd");
static const V lit32("maxCompression");
static const V lit33("loadReference");
static const V lit34("minDt");
static const V lit35("maxDt");
static const V lit36("debugStoreInterval");
static const V lit37("frontCompression");
static const V lit38("rearCompression");
static const V lit39("leftCompression");
static const V lit40("rightCompression");
static const V lit41("targetFrontCompression");
static const V lit42("targetRearCompression");
static const V lit43("targetLeftCompression");
static const V lit44("targetRightCompression");
static const V lit45("pitchCG");
static const V lit46("rollCG");
static const V lit47("targetPitchCG");
static const V lit48("targetRollCG");
static const V lit49("pitchState");
static const V lit50("NEUTRAL");
static const V lit51("rollState");
static const V lit52("load");
static const V lit53("springForce");
static const V lit54("damperForce");
static const V lit55("tireHop");
static const V lit56("loadPathLoss");
static const V lit57("loadPathBody");
static const V lit58("roadVertical");
static const V lit59("chassisEnergy");
static const V lit60("chassisRelease");
static const V lit61("brakeInput");
static const V lit62("driveTorque");
static const V lit63("bodyRigidity");
static const V lit64("bodyFlexFactor");
static const V lit65("bodyTorsionFactor");
static const V lit66("bodyBendingFactor");
static const V lit67("bodyDampingFactor");
static const V lit68("roadBodyPitch");
static const V lit69("roadBodyRoll");
static const V lit70("roadBodyHeave");
static const V lit71("roadBodyYaw");
static const V lit72("suspensionStress");
static const V lit73("brakeLockAvg");
static const V lit74("weightPitch");
static const V lit75("weightRoll");
static const V lit76("damageRuntimeAdd");
static const V lit77("chassisFlexEnergy");
static const V lit78("impactValue");
static const V lit79("rootPitchCGAdd");
static const V lit80("rootRollCGAdd");
static const V lit81("avgCompression");
static const V lit82("maxAbsCG");
static const V lit83("status");
static const V lit84("INIT");
static const V lit85("updateCount");
static const V lit86("carLinked");
static const V lit87("loadLinked");
static const V lit88("springLinked");
static const V lit89("damperLinked");
static const V lit90("tireLinked");
static const V lit91("brakeLinked");
static const V lit92("driveLinked");
static const V lit93("energyLinked");
static const V lit94("bodyLinked");
static const V lit95("suspensionLinked");
static const V lit96("weightLinked");
static const V lit97("damageRuntimeLinked");
static const V lit98("chassisFlexLinked");
static const V lit99("roadBodyLinked");
static const V lit100("loadPathLinked");
static const V lit101("impactLinked");
static const V lit102("debugStoreTimer");
static const V lit103("debugStoreNow");
static const V lit104("state");
static const V lit105("debug");
static const V lit106("huge");
static const V lit107("abs");
static const V lit108("max");
static const V lit109("safeLoadRaw");
static const V lit110("safeStore");
static const V lit111("safeField");
static const V lit112("getCar");
static const V lit113("wheels");
static const V lit114("loadK");
static const V lit115("ngp_wheel_load_");
static const V lit116("ngp_load_wheel_");
static const V lit117("ngp_tire_load_input_");
static const V lit118("ngp_susp_load_input_");
static const V lit119("ngp_load_path_load_");
static const V lit120("ngp_contact_load_");
static const V lit121("ngp_tire_state_load_");
static const V lit122("ngp_dlt_load_");
static const V lit123("ngp_spring_force_");
static const V lit124("ngp_progressive_spring_");
static const V lit125("ngp_spring_raw_");
static const V lit126("ngp_damper_force_");
static const V lit127("ngp_damper_");
static const V lit128("ngp_damper_model_force_");
static const V lit129("ngp_damper_hyst_force_");
static const V lit130("ngp_tire_hop_energy_");
static const V lit131("ngp_tire_hop_");
static const V lit132("ngp_tirehop_energy_");
static const V lit133("ngp_rii_hop_");
static const V lit134("ngp_load_path_loss_");
static const V lit135("ngp_lp_loss_");
static const V lit136("ngp_road_path_loss_");
static const V lit137("ngp_rii_path_loss_");
static const V lit138("ngp_load_path_body_absorb_");
static const V lit139("ngp_road_body_absorb_");
static const V lit140("ngp_lp_body_");
static const V lit141("ngp_road_vertical_flow_");
static const V lit142("ngp_lp_vertical_flow_");
static const V lit143("ngp_rii_vertical_");
static const V lit144("ngp_road_input_vertical_");
static const V lit145("ngp_chassis_energy");
static const V lit146("ngp_chassis_body_energy");
static const V lit147("ngp_chassis_target_energy");
static const V lit148("ngp_chassis_release");
static const V lit149("ngp_chassis_body_release");
static const V lit150("ngp_brake_input");
static const V lit151("brake");
static const V lit152("ngp_drive_torque");
static const V lit153("ngp_drive_transmitted_torque");
static const V lit154("ngp_driveline_torque");
static const V lit155("ngp_dt_torque");
static const V lit156("ngp_body_rigidity");
static const V lit157("ngp_body_flex_factor");
static const V lit158("ngp_body_torsion_factor");
static const V lit159("ngp_body_bending_factor");
static const V lit160("ngp_body_damping_factor");
static const V lit161("ngp_body_heave_input");
static const V lit162("ngp_road_body_heave");
static const V lit163("ngp_rbi_heave");
static const V lit164("ngp_body_pitch_input");
static const V lit165("ngp_road_body_pitch");
static const V lit166("ngp_rbi_pitch");
static const V lit167("ngp_body_roll_input");
static const V lit168("ngp_road_body_roll");
static const V lit169("ngp_rbi_roll");
static const V lit170("ngp_body_yaw_hint");
static const V lit171("ngp_road_body_yaw");
static const V lit172("ngp_rbi_yaw");
static const V lit173("ngp_weight_suspension_stress");
static const V lit174("ngp_chassis_flex_suspension_stress");
static const V lit175("ngp_suspension_stress");
static const V lit176("ngp_load_path_avg_work");
static const V lit177("ngp_brake_lock_");
static const V lit178("ngp_weight_front_bias");
static const V lit179("ngp_load_front");
static const V lit180("ngp_front_bias");
static const V lit181("ngp_weight_rear_bias");
static const V lit182("ngp_load_rear");
static const V lit183("ngp_rear_bias");
static const V lit184("ngp_weight_left_bias");
static const V lit185("ngp_load_left");
static const V lit186("ngp_left_bias");
static const V lit187("ngp_weight_right_bias");
static const V lit188("ngp_load_right");
static const V lit189("ngp_right_bias");
static const V lit190("ngp_damage_runtime_add");
static const V lit191("ngp_vehicle_condition_total");
static const V lit192("ngp_condition_total");
static const V lit193("ngp_damage_total");
static const V lit194("ngp_chassis_flex_energy");
static const V lit195("ngp_flex_energy");
static const V lit196("ngp_impact_value");
static const V lit197("ngp_impact_root_value");
static const V lit198("ngp_rii_avg_impact");
static const V lit199("ngp_road_impact");
static const V lit200("_dt");
static const V lit201("FRONT CG");
static const V lit202("REAR CG");
static const V lit203("LEFT CG");
static const V lit204("RIGHT CG");
static const V lit205("ngp_pitch_cg");
static const V lit206("ngp_roll_cg");
static const V lit207("ngp_sprung_front_compression");
static const V lit208("ngp_sprung_rear_compression");
static const V lit209("ngp_sprung_left_compression");
static const V lit210("ngp_sprung_right_compression");
static const V lit211("ngp_sprung_pitch_state");
static const V lit212("ngp_sprung_roll_state");
static const V lit213("ngp_sprung_mass_status");
static const V lit214("ngp_sprung_mass_update_count");
static const V lit215("ngp_sprung_root_pitch_cg_add");
static const V lit216("ngp_sprung_root_roll_cg_add");
static const V lit217("ngp_sprung_target_pitch_cg");
static const V lit218("ngp_sprung_target_roll_cg");
static const V lit219("ngp_sprung_avg_compression");
static const V lit220("ngp_sprung_max_abs_cg");
static const V lit221("ngp_sprung_front_target");
static const V lit222("ngp_sprung_rear_target");
static const V lit223("ngp_sprung_left_target");
static const V lit224("ngp_sprung_right_target");
static const V lit225("ngp_sm_pitch_cg");
static const V lit226("ngp_sm_roll_cg");
static const V lit227("ngp_sm_avg_compression");
static const V lit228("ngp_sprung_load_linked");
static const V lit229("ngp_sprung_spring_linked");
static const V lit230("ngp_sprung_damper_linked");
static const V lit231("ngp_sprung_tire_linked");
static const V lit232("ngp_sprung_energy_linked");
static const V lit233("ngp_sprung_body_linked");
static const V lit234("ngp_sprung_suspension_linked");
static const V lit235("ngp_sprung_weight_linked");
static const V lit236("ngp_sprung_damage_runtime_linked");
static const V lit237("ngp_sprung_chassis_flex_linked");
static const V lit238("ngp_sprung_car_linked");
static const V lit239("ngp_sprung_road_body_linked");
static const V lit240("ngp_sprung_load_path_linked");
static const V lit241("ngp_sprung_impact_linked");
static const V lit242("ngp_sprung_load_");
static const V lit243("ngp_sprung_spring_force_");
static const V lit244("ngp_sprung_damper_force_");
static const V lit245("ngp_sprung_hop_");
static const V lit246("init");
static const V lit247("update");
static const V lit248("NO CAR");
static const V lit249("RUNNING");
static const V lit250("getPitchCG");
static const V lit251("getRollCG");
static const V lit252("getCompression");
static const V lit253("front");
static const V lit254("rear");
static const V lit255("left");
static const V lit256("right");
static const V lit257("getState");
static const V lit258("debugStr");
static const V lit259("format");
static const V lit260("Status %s / Count %.0f\n");
static const V lit261("PitchCG %.4f -> %.4f / %s\n");
static const V lit262("RollCG %.4f -> %.4f / %s\n");
static const V lit263("Comp F/R %.4f %.4f / L/R %.4f %.4f Avg %.4f\n");
static const V lit264("Target F/R %.4f %.4f / L/R %.4f %.4f\n");
static const V lit265("RootCG P/R %.4f %.4f / MaxCG %.4f\n");
static const V lit266("Inputs Susp %.3f BrakeLock %.3f Damage %.3f Flex %.3f Impact %.3f\n");
static const V lit267("Links Load:%s Spring:%s Damper:%s Tire:%s Energy:%s Body:%s RBI:%s LP:%s");
static const V lit268("OK");
static const V lit269("NIL");
V load_sprung_mass(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(28);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{Args t3=Args{V(0.0),V(1.0),V(2.0),V(3.0)};e->slot(0,2)=arg(t3,0);e->slot(0,3)=arg(t3,1);e->slot(0,4)=arg(t3,2);e->slot(0,5)=arg(t3,3);}
{V t4=V(1310.0);e->slot(0,6)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t5=([&](){V z=table();set(z,lit2,V(32000.0));set(z,lit3,V(36000.0));set(z,lit4,V(0.1));set(z,lit5,V(0.08));set(z,lit6,V(0.1));set(z,lit7,V(0.08));set(z,lit8,V(0.08));set(z,lit9,V(0.06));set(z,lit10,V(0.004));set(z,lit11,V(0.006));set(z,lit12,V(0.003));set(z,lit13,V(0.005));set(z,lit14,V(6e-06));set(z,lit15,V(4e-06));set(z,lit16,V(0.004));set(z,lit17,V(0.006));set(z,lit18,V(0.004));set(z,lit19,V(0.08));set(z,lit20,V(0.04));set(z,lit21,V(0.025));set(z,lit22,V(0.018));set(z,lit23,V(0.02));set(z,lit24,V(0.015));set(z,lit25,V(0.018));set(z,lit26,V(0.012));set(z,lit27,V(0.01));set(z,lit28,V(0.01));set(z,lit29,V(0.009));set(z,lit30,V(0.01));set(z,lit31,V(0.035));set(z,lit32,V(0.2));set(z,lit33,V(3200.0));set(z,lit34,V(5e-05));set(z,lit35,V(0.05));set(z,lit36,V(0.25));return z;})();refs[0].put(std::move(t5));}
{V t6=([&](){V z=table();set(z,lit37,V(0.0));set(z,lit38,V(0.0));set(z,lit39,V(0.0));set(z,lit40,V(0.0));set(z,lit41,V(0.0));set(z,lit42,V(0.0));set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,V(0.0));set(z,lit46,V(0.0));set(z,lit47,V(0.0));set(z,lit48,V(0.0));set(z,lit49,lit50);set(z,lit51,lit50);set(z,lit52,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit53,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit54,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(1.0));set(z,lit64,V(1.0));set(z,lit65,V(1.0));set(z,lit66,V(1.0));set(z,lit67,V(1.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,lit84);set(z,lit85,V(0.0));set(z,lit86,V(false));set(z,lit87,V(false));set(z,lit88,V(false));set(z,lit89,V(false));set(z,lit90,V(false));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(999.0));set(z,lit103,V(true));return z;})();e->slot(0,7)=std::move(t6);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t7=e->slot(0,7);refs[0].put(std::move(t7));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t8=e->slot(0,7);refs[0].put(std::move(t8));}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t9=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t9);}
if(truth(([&](){V t10=([&](){V t11=([&](){V t12=eq(e->slot(0,2),V());return !truth(t12)?ne(e->slot(0,2),e->slot(0,2)):t12;})();return !truth(t11)?eq(e->slot(0,2),get(e->get("math"),lit106)):t11;})();return !truth(t10)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit106)))):t10;})())){return Args{([&](){V t13=e->slot(0,1);return !truth(t13)?V(0.0):t13;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,8),Args{e->slot(0,0),([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()}));refs[0].put(std::move(t14));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit107),call(e->slot(1,8),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t16=first(call(e->slot(1,8),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t17=first(call(e->slot(1,8),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t18=first(call(e->slot(1,8),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t19=first(call(e->slot(1,8),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t19));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,9),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit108),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
{V t20=get(e->slot(0,0),lit109);e->slot(0,12)=std::move(t20);}
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t21=first(call(e->slot(1,12),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t21);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()};
}
return call(e->slot(1,8),Args{e->slot(0,2),([&](){V t23=e->slot(0,1);return !truth(t23)?V(0.0):t23;})()});
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t24=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t24);}
{double t25=num(V(1.0)),t26=num(length(e->slot(0,1))),t27=num(V(1.0));for(double t28=t25;(t27>0?t28<=t26:t28>=t26);t28+=t27){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t28);{V t29=first(call(e->slot(2,12),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t29);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,8),Args{e->slot(0,1),([&](){V t30=e->slot(1,0);return !truth(t30)?V(0.0):t30;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t31=e->slot(0,0);return !truth(t31)?V(0.0):t31;})(),V()};
return Args{};});
{V t32=get(e->slot(0,0),lit110);e->slot(0,15)=std::move(t32);}
{V t33=get(e->slot(0,0),lit111);e->slot(0,16)=std::move(t33);}
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t34=V(!truth(e->get("ac")));return !truth(t34)?V(!truth(get(e->get("ac"),lit112))):t34;})())){return Args{V()};
}
{Args t35=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit112),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t35,0);e->slot(0,1)=arg(t35,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,7),lit102)};V t36=add(([&](){V t37=get(e->slot(1,7),lit102);return !truth(t37)?V(0.0):t37;})(),([&](){V t38=e->slot(0,0);return !truth(t38)?V(0.0):t38;})());refs[0].put(std::move(t36));}
if(truth(ge(get(e->slot(1,7),lit102),([&](){V t39=get(get(e->slot(1,1),lit1),lit36);return !truth(t39)?V(0.25):t39;})()))){{std::array<Ref,1> refs{Ref(e->slot(1,7),lit102)};V t40=V(0.0);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit103)};V t41=V(true);refs[0].put(std::move(t41));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,7),lit103)};V t42=V(false);refs[0].put(std::move(t42));}
}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t43=first(call(e->slot(1,16),Args{e->slot(0,0),lit113,V()}));e->slot(0,2)=std::move(t43);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t44=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t45=get(e->slot(1,2),e->slot(1,1));return !truth(t45)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t45;})()};
return Args{};})});e->slot(0,3)=arg(t44,0);e->slot(0,4)=arg(t44,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t46=([&](){V z=table();set(z,V(1.0),lit52);set(z,V(2.0),lit114);return z;})();e->slot(0,1)=std::move(t46);}
{double t47=num(V(1.0)),t48=num(length(e->slot(0,1))),t49=num(V(1.0));for(double t50=t47;(t49>0?t50<=t48:t50>=t48);t50+=t49){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t50);{V t51=first(call(e->slot(2,16),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t51);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,8),Args{e->slot(0,1),V()});
}
}}
return Args{V()};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t52=call(e->slot(1,14),Args{V(),concat(lit115,e->slot(0,0)),concat(lit116,e->slot(0,0)),concat(lit117,e->slot(0,0)),concat(lit118,e->slot(0,0)),concat(lit119,e->slot(0,0)),concat(lit120,e->slot(0,0)),concat(lit121,e->slot(0,0))});e->slot(0,2)=arg(t52,0);e->slot(0,3)=arg(t52,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,7),lit87)};V t53=V(true);refs[0].put(std::move(t53));}
return call(e->slot(1,9),Args{e->slot(0,2),V(0.0),V(12000.0)});
}
{V t54=first(call(e->slot(1,12),Args{concat(lit122,e->slot(0,0))}));e->slot(0,4)=std::move(t54);}
if(truth(ne(e->slot(0,4),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(2,7),lit87)};V t55=V(true);refs[0].put(std::move(t55));}
{V t56=first(call(e->slot(2,8),Args{e->slot(1,4),V(0.0)}));e->slot(0,0)=std::move(t56);}
if(truth(gt(first(call(e->slot(2,10),Args{e->slot(0,0)})),V(900.0)))){return call(e->slot(2,9),Args{first(call(e->slot(2,10),Args{e->slot(0,0)})),V(0.0),V(12000.0)});
}
return call(e->slot(2,9),Args{add(([&](){V t57=get(get(e->slot(2,1),lit1),lit33);return !truth(t57)?V(3200.0):t57;})(),e->slot(0,0)),V(0.0),V(12000.0)});
}
{V t58=first(call(e->slot(1,20),Args{e->slot(0,1)}));e->slot(0,5)=std::move(t58);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,7),lit86)};V t59=V(true);refs[0].put(std::move(t59));}
return call(e->slot(1,9),Args{first(call(e->slot(1,10),Args{e->slot(0,5)})),V(0.0),V(12000.0)});
}
return Args{([&](){V t60=get(get(e->slot(1,1),lit1),lit33);return !truth(t60)?V(3200.0):t60;})()};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,34);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,7),lit86)};V t61=ne(e->slot(0,0),V());refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit87)};V t62=V(false);refs[0].put(std::move(t62));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit88)};V t63=V(false);refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit89)};V t64=V(false);refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit90)};V t65=V(false);refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit91)};V t66=V(false);refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit92)};V t67=V(false);refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit93)};V t68=V(false);refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit94)};V t69=V(false);refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit95)};V t70=V(false);refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit96)};V t71=V(false);refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit97)};V t72=V(false);refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit98)};V t73=V(false);refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit99)};V t74=V(false);refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit100)};V t75=V(false);refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit101)};V t76=V(false);refs[0].put(std::move(t76));}
{double t77=num(V(0.0)),t78=num(V(3.0)),t79=num(V(1.0));for(double t80=t77;(t79>0?t80<=t78:t80>=t78);t80+=t79){auto parent=e;Env storage(parent,false,14);auto e=&storage;e->slot(0,0)=V(t80);{V t81=first(call(e->slot(2,19),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,1)=std::move(t81);}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit52),e->slot(0,0))};V t82=first(call(e->slot(2,21),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t82));}
{Args t83=call(e->slot(2,14),Args{V(0.0),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0)),concat(lit125,e->slot(0,0))});e->slot(0,2)=arg(t83,0);e->slot(0,3)=arg(t83,1);}
{std::array<Ref,1> refs{Ref(e->slot(2,7),lit88)};V t84=([&](){V t85=get(e->slot(2,7),lit88);return !truth(t85)?ne(e->slot(0,3),V()):t85;})();refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit53),e->slot(0,0))};V t86=e->slot(0,2);refs[0].put(std::move(t86));}
{Args t87=call(e->slot(2,14),Args{V(0.0),concat(lit126,e->slot(0,0)),concat(lit127,e->slot(0,0)),concat(lit128,e->slot(0,0)),concat(lit129,e->slot(0,0))});e->slot(0,4)=arg(t87,0);e->slot(0,5)=arg(t87,1);}
{std::array<Ref,1> refs{Ref(e->slot(2,7),lit89)};V t88=([&](){V t89=get(e->slot(2,7),lit89);return !truth(t89)?ne(e->slot(0,5),V()):t89;})();refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit54),e->slot(0,0))};V t90=e->slot(0,4);refs[0].put(std::move(t90));}
{Args t91=call(e->slot(2,14),Args{V(0.0),concat(lit130,e->slot(0,0)),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0)),concat(lit133,e->slot(0,0))});e->slot(0,6)=arg(t91,0);e->slot(0,7)=arg(t91,1);}
{std::array<Ref,1> refs{Ref(e->slot(2,7),lit90)};V t92=([&](){V t93=get(e->slot(2,7),lit90);return !truth(t93)?ne(e->slot(0,7),V()):t93;})();refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit55),e->slot(0,0))};V t94=first(call(e->slot(2,9),Args{e->slot(0,6),V(0.0),V(1.0)}));refs[0].put(std::move(t94));}
{Args t95=call(e->slot(2,14),Args{V(0.0),concat(lit134,e->slot(0,0)),concat(lit135,e->slot(0,0)),concat(lit136,e->slot(0,0)),concat(lit137,e->slot(0,0))});e->slot(0,8)=arg(t95,0);e->slot(0,9)=arg(t95,1);}
{Args t96=call(e->slot(2,14),Args{V(0.0),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0)),concat(lit140,e->slot(0,0))});e->slot(0,10)=arg(t96,0);e->slot(0,11)=arg(t96,1);}
{Args t97=call(e->slot(2,14),Args{V(0.0),concat(lit141,e->slot(0,0)),concat(lit142,e->slot(0,0)),concat(lit143,e->slot(0,0)),concat(lit144,e->slot(0,0))});e->slot(0,12)=arg(t97,0);e->slot(0,13)=arg(t97,1);}
{std::array<Ref,1> refs{Ref(e->slot(2,7),lit100)};V t98=([&](){V t99=([&](){V t100=([&](){V t101=get(e->slot(2,7),lit100);return !truth(t101)?ne(e->slot(0,9),V()):t101;})();return !truth(t100)?ne(e->slot(0,11),V()):t100;})();return !truth(t99)?ne(e->slot(0,13),V()):t99;})();refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit56),e->slot(0,0))};V t102=first(call(e->slot(2,9),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit57),e->slot(0,0))};V t103=first(call(e->slot(2,9),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,7),lit58),e->slot(0,0))};V t104=first(call(e->slot(2,9),Args{e->slot(0,12),V(0.0),V(1.5)}));refs[0].put(std::move(t104));}
}}
{Args t105=call(e->slot(1,14),Args{V(0.0),lit145,lit146,lit147});e->slot(0,1)=arg(t105,0);e->slot(0,2)=arg(t105,1);}
{Args t106=call(e->slot(1,14),Args{V(0.0),lit148,lit149});e->slot(0,3)=arg(t106,0);e->slot(0,4)=arg(t106,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit93)};V t107=([&](){V t108=ne(e->slot(0,2),V());return !truth(t108)?ne(e->slot(0,4),V()):t108;})();refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit59)};V t109=first(call(e->slot(1,9),Args{e->slot(0,1),V(0.0),V(1.5)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit60)};V t110=first(call(e->slot(1,9),Args{e->slot(0,3),V(0.0),V(1.5)}));refs[0].put(std::move(t110));}
{V t111=first(call(e->slot(1,12),Args{lit150}));e->slot(0,5)=std::move(t111);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit61)};V t112=first(call(e->slot(1,9),Args{first(call(e->slot(1,8),joined(Args{e->slot(0,5)},call(e->slot(1,16),Args{e->slot(0,0),lit151,V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t112));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit91)};V t113=ne(e->slot(0,5),V());refs[0].put(std::move(t113));}
{Args t114=call(e->slot(1,14),Args{V(0.0),lit152,lit153,lit154,lit155});e->slot(0,6)=arg(t114,0);e->slot(0,7)=arg(t114,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit92)};V t115=ne(e->slot(0,7),V());refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit62)};V t116=e->slot(0,6);refs[0].put(std::move(t116));}
{V t117=first(call(e->slot(1,12),Args{lit156}));e->slot(0,8)=std::move(t117);}
{V t118=first(call(e->slot(1,12),Args{lit157}));e->slot(0,9)=std::move(t118);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit94)};V t119=([&](){V t120=ne(e->slot(0,8),V());return !truth(t120)?ne(e->slot(0,9),V()):t120;})();refs[0].put(std::move(t119));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit63)};V t121=first(call(e->slot(1,9),Args{first(call(e->slot(1,8),Args{e->slot(0,8),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit64)};V t122=first(call(e->slot(1,9),Args{first(call(e->slot(1,8),Args{e->slot(0,9),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit65)};V t123=first(call(e->slot(1,9),Args{first(call(e->slot(1,13),Args{lit158,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit66)};V t124=first(call(e->slot(1,9),Args{first(call(e->slot(1,13),Args{lit159,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit67)};V t125=first(call(e->slot(1,9),Args{first(call(e->slot(1,13),Args{lit160,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t125));}
{Args t126=call(e->slot(1,14),Args{V(0.0),lit161,lit162,lit163});e->slot(0,10)=arg(t126,0);e->slot(0,11)=arg(t126,1);}
{Args t127=call(e->slot(1,14),Args{V(0.0),lit164,lit165,lit166});e->slot(0,12)=arg(t127,0);e->slot(0,13)=arg(t127,1);}
{Args t128=call(e->slot(1,14),Args{V(0.0),lit167,lit168,lit169});e->slot(0,14)=arg(t128,0);e->slot(0,15)=arg(t128,1);}
{Args t129=call(e->slot(1,14),Args{V(0.0),lit170,lit171,lit172});e->slot(0,16)=arg(t129,0);e->slot(0,17)=arg(t129,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit99)};V t130=([&](){V t131=([&](){V t132=([&](){V t133=ne(e->slot(0,11),V());return !truth(t133)?ne(e->slot(0,13),V()):t133;})();return !truth(t132)?ne(e->slot(0,15),V()):t132;})();return !truth(t131)?ne(e->slot(0,17),V()):t131;})();refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit70)};V t134=first(call(e->slot(1,9),Args{e->slot(0,10),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit68)};V t135=first(call(e->slot(1,9),Args{e->slot(0,12),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit69)};V t136=first(call(e->slot(1,9),Args{e->slot(0,14),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit71)};V t137=first(call(e->slot(1,9),Args{e->slot(0,16),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t137));}
{Args t138=call(e->slot(1,14),Args{V(0.0),lit173,lit174,lit175,lit176});e->slot(0,18)=arg(t138,0);e->slot(0,19)=arg(t138,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit95)};V t139=ne(e->slot(0,19),V());refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit72)};V t140=first(call(e->slot(1,9),Args{e->slot(0,18),V(0.0),V(1.0)}));refs[0].put(std::move(t140));}
{V t141=V(0.0);e->slot(0,20)=std::move(t141);}
{V t142=V(false);e->slot(0,21)=std::move(t142);}
{double t143=num(V(0.0)),t144=num(V(3.0)),t145=num(V(1.0));for(double t146=t143;(t145>0?t146<=t144:t146>=t144);t146+=t145){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t146);{V t147=first(call(e->slot(2,12),Args{concat(lit177,e->slot(0,0))}));e->slot(0,1)=std::move(t147);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,21)};V t148=V(true);refs[0].put(std::move(t148));}
}
{std::array<Ref,1> refs{Ref(e,1,20)};V t149=add(e->slot(1,20),first(call(e->slot(2,9),Args{first(call(e->slot(2,8),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t149));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit73)};V t150=mul(e->slot(0,20),V(0.25));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit91)};V t151=([&](){V t152=get(e->slot(1,7),lit91);return !truth(t152)?e->slot(0,21):t152;})();refs[0].put(std::move(t151));}
{V t153=([&](){V t154=([&](){V t155=first(call(e->slot(1,12),Args{lit178}));return !truth(t155)?first(call(e->slot(1,12),Args{lit179})):t155;})();return !truth(t154)?first(call(e->slot(1,12),Args{lit180})):t154;})();e->slot(0,22)=std::move(t153);}
{V t156=([&](){V t157=([&](){V t158=first(call(e->slot(1,12),Args{lit181}));return !truth(t158)?first(call(e->slot(1,12),Args{lit182})):t158;})();return !truth(t157)?first(call(e->slot(1,12),Args{lit183})):t157;})();e->slot(0,23)=std::move(t156);}
{V t159=([&](){V t160=([&](){V t161=first(call(e->slot(1,12),Args{lit184}));return !truth(t161)?first(call(e->slot(1,12),Args{lit185})):t161;})();return !truth(t160)?first(call(e->slot(1,12),Args{lit186})):t160;})();e->slot(0,24)=std::move(t159);}
{V t162=([&](){V t163=([&](){V t164=first(call(e->slot(1,12),Args{lit187}));return !truth(t164)?first(call(e->slot(1,12),Args{lit188})):t164;})();return !truth(t163)?first(call(e->slot(1,12),Args{lit189})):t163;})();e->slot(0,25)=std::move(t162);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit96)};V t165=([&](){V t166=([&](){V t167=([&](){V t168=ne(e->slot(0,22),V());return !truth(t168)?ne(e->slot(0,23),V()):t168;})();return !truth(t167)?ne(e->slot(0,24),V()):t167;})();return !truth(t166)?ne(e->slot(0,25),V()):t166;})();refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit74)};V t169=first(call(e->slot(1,9),Args{sub(first(call(e->slot(1,8),Args{e->slot(0,22),V(0.5)})),first(call(e->slot(1,8),Args{e->slot(0,23),V(0.5)}))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit75)};V t170=first(call(e->slot(1,9),Args{sub(first(call(e->slot(1,8),Args{e->slot(0,24),V(0.5)})),first(call(e->slot(1,8),Args{e->slot(0,25),V(0.5)}))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t170));}
{Args t171=call(e->slot(1,14),Args{V(0.0),lit190,lit191,lit192,lit193});e->slot(0,26)=arg(t171,0);e->slot(0,27)=arg(t171,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit97)};V t172=ne(e->slot(0,27),V());refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit76)};V t173=first(call(e->slot(1,9),Args{e->slot(0,26),V(0.0),V(1.0)}));refs[0].put(std::move(t173));}
{Args t174=call(e->slot(1,14),Args{V(0.0),lit194,lit195,lit145});e->slot(0,28)=arg(t174,0);e->slot(0,29)=arg(t174,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit98)};V t175=ne(e->slot(0,29),V());refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit77)};V t176=first(call(e->slot(1,9),Args{e->slot(0,28),V(0.0),V(1.0)}));refs[0].put(std::move(t176));}
{Args t177=call(e->slot(1,14),Args{V(0.0),lit196,lit197,lit198,lit199});e->slot(0,30)=arg(t177,0);e->slot(0,31)=arg(t177,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit101)};V t178=ne(e->slot(0,31),V());refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit78)};V t179=first(call(e->slot(1,9),Args{e->slot(0,30),V(0.0),V(1.0)}));refs[0].put(std::move(t179));}
{V t180=mul(sub(add(get(get(e->slot(1,7),lit56),e->slot(1,2)),get(get(e->slot(1,7),lit56),e->slot(1,3))),add(get(get(e->slot(1,7),lit56),e->slot(1,4)),get(get(e->slot(1,7),lit56),e->slot(1,5)))),V(0.5));e->slot(0,32)=std::move(t180);}
{V t181=mul(sub(add(get(get(e->slot(1,7),lit57),e->slot(1,2)),get(get(e->slot(1,7),lit57),e->slot(1,4))),add(get(get(e->slot(1,7),lit57),e->slot(1,3)),get(get(e->slot(1,7),lit57),e->slot(1,5)))),V(0.5));e->slot(0,33)=std::move(t181);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit79)};V t182=first(call(e->slot(1,9),Args{add(add(add(add(add(add(add(mul(get(e->slot(1,7),lit72),get(get(e->slot(1,1),lit1),lit21)),mul(get(e->slot(1,7),lit73),get(get(e->slot(1,1),lit1),lit22))),mul(get(e->slot(1,7),lit74),get(get(e->slot(1,1),lit1),lit23))),mul(get(e->slot(1,7),lit76),get(get(e->slot(1,1),lit1),lit24))),mul(get(e->slot(1,7),lit77),get(get(e->slot(1,1),lit1),lit25))),mul(get(e->slot(1,7),lit68),get(get(e->slot(1,1),lit1),lit26))),mul(e->slot(0,32),get(get(e->slot(1,1),lit1),lit28))),mul(get(e->slot(1,7),lit78),get(get(e->slot(1,1),lit1),lit30))),V(-num(get(get(e->slot(1,1),lit1),lit31))),get(get(e->slot(1,1),lit1),lit31)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit80)};V t183=first(call(e->slot(1,9),Args{add(add(add(add(add(mul(get(e->slot(1,7),lit72),get(get(e->slot(1,1),lit1),lit21)),mul(get(e->slot(1,7),lit75),get(get(e->slot(1,1),lit1),lit23))),mul(get(e->slot(1,7),lit76),get(get(e->slot(1,1),lit1),lit24))),mul(get(e->slot(1,7),lit77),get(get(e->slot(1,1),lit1),lit25))),mul(get(e->slot(1,7),lit69),get(get(e->slot(1,1),lit1),lit27))),mul(e->slot(0,33),get(get(e->slot(1,1),lit1),lit29))),V(-num(get(get(e->slot(1,1),lit1),lit31))),get(get(e->slot(1,1),lit1),lit31)}));refs[0].put(std::move(t183));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,7),lit37)};V t184=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit37),V(0.0),get(get(e->slot(1,1),lit1),lit6),e->slot(0,0)}));refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit38)};V t185=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit38),V(0.0),get(get(e->slot(1,1),lit1),lit6),e->slot(0,0)}));refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit39)};V t186=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit39),V(0.0),get(get(e->slot(1,1),lit1),lit7),e->slot(0,0)}));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit40)};V t187=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit40),V(0.0),get(get(e->slot(1,1),lit1),lit7),e->slot(0,0)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit41)};V t188=V(0.0);refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit42)};V t189=V(0.0);refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit43)};V t190=V(0.0);refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit44)};V t191=V(0.0);refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit45)};V t192=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit45),V(0.0),get(get(e->slot(1,1),lit1),lit6),e->slot(0,0)}));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit46)};V t193=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit46),V(0.0),get(get(e->slot(1,1),lit1),lit7),e->slot(0,0)}));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit47)};V t194=V(0.0);refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit48)};V t195=V(0.0);refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit79)};V t196=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit79),V(0.0),get(get(e->slot(1,1),lit1),lit6),e->slot(0,0)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit80)};V t197=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit80),V(0.0),get(get(e->slot(1,1),lit1),lit7),e->slot(0,0)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit49)};V t198=lit50;refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit51)};V t199=lit50;refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit81)};V t200=V(0.0);refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit82)};V t201=first(call(get(e->get("math"),lit108),joined(Args{first(call(e->slot(1,10),Args{get(e->slot(1,7),lit45)}))},call(e->slot(1,10),Args{get(e->slot(1,7),lit46)}))));refs[0].put(std::move(t201));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;{V t202=([&](){V t203=get(get(e->slot(1,7),lit52),e->slot(1,2));return !truth(t203)?V(0.0):t203;})();e->slot(0,0)=std::move(t202);}
{V t204=([&](){V t205=get(get(e->slot(1,7),lit52),e->slot(1,3));return !truth(t205)?V(0.0):t205;})();e->slot(0,1)=std::move(t204);}
{V t206=([&](){V t207=get(get(e->slot(1,7),lit52),e->slot(1,4));return !truth(t207)?V(0.0):t207;})();e->slot(0,2)=std::move(t206);}
{V t208=([&](){V t209=get(get(e->slot(1,7),lit52),e->slot(1,5));return !truth(t209)?V(0.0):t209;})();e->slot(0,3)=std::move(t208);}
{V t210=mul(add(e->slot(0,0),e->slot(0,1)),V(0.5));e->slot(0,4)=std::move(t210);}
{V t211=mul(add(e->slot(0,2),e->slot(0,3)),V(0.5));e->slot(0,5)=std::move(t211);}
{V t212=mul(add(e->slot(0,0),e->slot(0,2)),V(0.5));e->slot(0,6)=std::move(t212);}
{V t213=mul(add(e->slot(0,1),e->slot(0,3)),V(0.5));e->slot(0,7)=std::move(t213);}
{V t214=first(call(get(e->get("math"),lit108),Args{([&](){V t215=get(get(e->slot(1,1),lit1),lit2);return !truth(t215)?V(32000.0):t215;})(),V(1.0)}));e->slot(0,8)=std::move(t214);}
{V t216=first(call(get(e->get("math"),lit108),Args{([&](){V t217=get(get(e->slot(1,1),lit1),lit3);return !truth(t217)?V(36000.0):t217;})(),V(1.0)}));e->slot(0,9)=std::move(t216);}
{V t218=first(call(get(e->get("math"),lit108),Args{mul(add(e->slot(0,8),e->slot(0,9)),V(0.5)),V(1.0)}));e->slot(0,10)=std::move(t218);}
{V t219=mul(mul(add(get(get(e->slot(1,7),lit53),e->slot(1,2)),get(get(e->slot(1,7),lit53),e->slot(1,3))),V(0.5)),get(get(e->slot(1,1),lit1),lit14));e->slot(0,11)=std::move(t219);}
{V t220=mul(mul(add(get(get(e->slot(1,7),lit53),e->slot(1,4)),get(get(e->slot(1,7),lit53),e->slot(1,5))),V(0.5)),get(get(e->slot(1,1),lit1),lit14));e->slot(0,12)=std::move(t220);}
{V t221=mul(mul(add(first(call(e->slot(1,10),Args{get(get(e->slot(1,7),lit54),e->slot(1,2))})),first(call(e->slot(1,10),Args{get(get(e->slot(1,7),lit54),e->slot(1,3))}))),V(0.5)),get(get(e->slot(1,1),lit1),lit15));e->slot(0,13)=std::move(t221);}
{V t222=mul(mul(add(first(call(e->slot(1,10),Args{get(get(e->slot(1,7),lit54),e->slot(1,4))})),first(call(e->slot(1,10),Args{get(get(e->slot(1,7),lit54),e->slot(1,5))}))),V(0.5)),get(get(e->slot(1,1),lit1),lit15));e->slot(0,14)=std::move(t222);}
{V t223=mul(mul(add(get(get(e->slot(1,7),lit58),e->slot(1,2)),get(get(e->slot(1,7),lit58),e->slot(1,3))),V(0.5)),V(0.012));e->slot(0,15)=std::move(t223);}
{V t224=mul(mul(add(get(get(e->slot(1,7),lit58),e->slot(1,4)),get(get(e->slot(1,7),lit58),e->slot(1,5))),V(0.5)),V(0.012));e->slot(0,16)=std::move(t224);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit41)};V t225=first(call(e->slot(1,9),Args{add(add(add(divv(e->slot(0,4),e->slot(0,8)),e->slot(0,11)),e->slot(0,13)),e->slot(0,15)),V(-num(get(get(e->slot(1,1),lit1),lit32))),get(get(e->slot(1,1),lit1),lit32)}));refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit42)};V t226=first(call(e->slot(1,9),Args{add(add(add(divv(e->slot(0,5),e->slot(0,9)),e->slot(0,12)),e->slot(0,14)),e->slot(0,16)),V(-num(get(get(e->slot(1,1),lit1),lit32))),get(get(e->slot(1,1),lit1),lit32)}));refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit43)};V t227=first(call(e->slot(1,9),Args{divv(e->slot(0,6),e->slot(0,10)),V(-num(get(get(e->slot(1,1),lit1),lit32))),get(get(e->slot(1,1),lit1),lit32)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit44)};V t228=first(call(e->slot(1,9),Args{divv(e->slot(0,7),e->slot(0,10)),V(-num(get(get(e->slot(1,1),lit1),lit32))),get(get(e->slot(1,1),lit1),lit32)}));refs[0].put(std::move(t228));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t229=sub(add(V(1.0),mul(first(call(get(e->get("math"),lit108),Args{sub(([&](){V t230=get(e->slot(1,7),lit64);return !truth(t230)?V(1.0):t230;})(),V(1.0)),V(0.0)})),V(0.3))),mul(first(call(get(e->get("math"),lit108),Args{sub(([&](){V t231=get(e->slot(1,7),lit63);return !truth(t231)?V(1.0):t231;})(),V(1.0)),V(0.0)})),V(0.08)));e->slot(0,1)=std::move(t229);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t232=first(call(e->slot(1,9),Args{divv(e->slot(0,1),first(call(get(e->get("math"),lit108),Args{([&](){V t233=get(e->slot(1,7),lit67);return !truth(t233)?V(1.0):t233;})(),V(0.5)}))),V(0.75),V(1.35)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit37)};V t234=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit37),get(e->slot(1,7),lit41),mul(get(get(e->slot(1,1),lit1),lit6),e->slot(0,1)),e->slot(0,0)}));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit38)};V t235=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit38),get(e->slot(1,7),lit42),mul(get(get(e->slot(1,1),lit1),lit6),e->slot(0,1)),e->slot(0,0)}));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit39)};V t236=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit39),get(e->slot(1,7),lit43),mul(get(get(e->slot(1,1),lit1),lit7),e->slot(0,1)),e->slot(0,0)}));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit40)};V t237=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit40),get(e->slot(1,7),lit44),mul(get(get(e->slot(1,1),lit1),lit7),e->slot(0,1)),e->slot(0,0)}));refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit81)};V t238=mul(add(add(add(first(call(e->slot(1,10),Args{get(e->slot(1,7),lit37)})),first(call(e->slot(1,10),Args{get(e->slot(1,7),lit38)}))),first(call(e->slot(1,10),Args{get(e->slot(1,7),lit39)}))),first(call(e->slot(1,10),Args{get(e->slot(1,7),lit40)}))),V(0.25));refs[0].put(std::move(t238));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t239=sub(add(V(1.0),mul(first(call(get(e->get("math"),lit108),Args{sub(([&](){V t240=get(e->slot(1,7),lit64);return !truth(t240)?V(1.0):t240;})(),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit19))),mul(first(call(get(e->get("math"),lit108),Args{sub(([&](){V t241=get(e->slot(1,7),lit63);return !truth(t241)?V(1.0):t241;})(),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit20)));e->slot(0,0)=std::move(t239);}
{std::array<Ref,1> refs{Ref(e,0,0)};V t242=first(call(e->slot(1,9),Args{e->slot(0,0),V(0.85),V(1.2)}));refs[0].put(std::move(t242));}
{V t243=add(add(sub(add(sub(add(mul(mul(sub(get(e->slot(1,7),lit37),get(e->slot(1,7),lit38)),get(get(e->slot(1,1),lit1),lit4)),e->slot(0,0)),mul(get(e->slot(1,7),lit59),get(get(e->slot(1,1),lit1),lit10))),mul(get(e->slot(1,7),lit60),get(get(e->slot(1,1),lit1),lit11))),mul(get(e->slot(1,7),lit61),get(get(e->slot(1,1),lit1),lit17))),mul(first(call(e->slot(1,10),Args{get(e->slot(1,7),lit62)})),get(get(e->slot(1,1),lit1),lit18))),mul(get(e->slot(1,7),lit68),get(get(e->slot(1,1),lit1),lit26))),get(e->slot(1,7),lit79));e->slot(0,1)=std::move(t243);}
{V t244=add(add(add(sub(add(mul(mul(sub(get(e->slot(1,7),lit39),get(e->slot(1,7),lit40)),get(get(e->slot(1,1),lit1),lit5)),e->slot(0,0)),mul(get(e->slot(1,7),lit59),get(get(e->slot(1,1),lit1),lit12))),mul(get(e->slot(1,7),lit60),get(get(e->slot(1,1),lit1),lit13))),mul(mul(sub(add(get(get(e->slot(1,7),lit55),e->slot(1,2)),get(get(e->slot(1,7),lit55),e->slot(1,4))),add(get(get(e->slot(1,7),lit55),e->slot(1,3)),get(get(e->slot(1,7),lit55),e->slot(1,5)))),V(0.5)),get(get(e->slot(1,1),lit1),lit16))),mul(get(e->slot(1,7),lit69),get(get(e->slot(1,1),lit1),lit27))),get(e->slot(1,7),lit80));e->slot(0,2)=std::move(t244);}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit47)};V t245=first(call(e->slot(1,9),Args{e->slot(0,1),V(-num(get(get(e->slot(1,1),lit1),lit8))),get(get(e->slot(1,1),lit1),lit8)}));refs[0].put(std::move(t245));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit48)};V t246=first(call(e->slot(1,9),Args{e->slot(0,2),V(-num(get(get(e->slot(1,1),lit1),lit9))),get(get(e->slot(1,1),lit1),lit9)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit45)};V t247=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit45),get(e->slot(1,7),lit47),get(get(e->slot(1,1),lit1),lit6),([&](){V t248=get(e->slot(1,1),lit200);return !truth(t248)?V(0.016):t248;})()}));refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit46)};V t249=first(call(e->slot(1,11),Args{get(e->slot(1,7),lit46),get(e->slot(1,7),lit48),get(get(e->slot(1,1),lit1),lit7),([&](){V t250=get(e->slot(1,1),lit200);return !truth(t250)?V(0.016):t250;})()}));refs[0].put(std::move(t249));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit49)};V t251=([&](){V t252=([&](){V t253=lt(first(call(e->slot(1,10),Args{get(e->slot(1,7),lit45)})),V(0.005));return truth(t253)?lit50:t253;})();return !truth(t252)?([&](){V t254=([&](){V t255=gt(get(e->slot(1,7),lit45),V(0.0));return truth(t255)?lit201:t255;})();return !truth(t254)?lit202:t254;})():t252;})();refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit51)};V t256=([&](){V t257=([&](){V t258=lt(first(call(e->slot(1,10),Args{get(e->slot(1,7),lit46)})),V(0.005));return truth(t258)?lit50:t258;})();return !truth(t257)?([&](){V t259=([&](){V t260=gt(get(e->slot(1,7),lit46),V(0.0));return truth(t260)?lit203:t260;})();return !truth(t259)?lit204:t259;})():t257;})();refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit82)};V t261=first(call(get(e->get("math"),lit108),joined(Args{first(call(e->slot(1,10),Args{get(e->slot(1,7),lit45)}))},call(e->slot(1,10),Args{get(e->slot(1,7),lit46)}))));refs[0].put(std::move(t261));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,15),Args{lit205,get(e->slot(1,7),lit45)});
call(e->slot(1,15),Args{lit206,get(e->slot(1,7),lit46)});
call(e->slot(1,15),Args{lit207,get(e->slot(1,7),lit37)});
call(e->slot(1,15),Args{lit208,get(e->slot(1,7),lit38)});
call(e->slot(1,15),Args{lit209,get(e->slot(1,7),lit39)});
call(e->slot(1,15),Args{lit210,get(e->slot(1,7),lit40)});
call(e->slot(1,15),Args{lit211,get(e->slot(1,7),lit49)});
call(e->slot(1,15),Args{lit212,get(e->slot(1,7),lit51)});
call(e->slot(1,15),Args{lit213,get(e->slot(1,7),lit83)});
call(e->slot(1,15),Args{lit214,get(e->slot(1,7),lit85)});
call(e->slot(1,15),Args{lit215,get(e->slot(1,7),lit79)});
call(e->slot(1,15),Args{lit216,get(e->slot(1,7),lit80)});
call(e->slot(1,15),Args{lit217,get(e->slot(1,7),lit47)});
call(e->slot(1,15),Args{lit218,get(e->slot(1,7),lit48)});
call(e->slot(1,15),Args{lit219,get(e->slot(1,7),lit81)});
call(e->slot(1,15),Args{lit220,get(e->slot(1,7),lit82)});
call(e->slot(1,15),Args{lit221,get(e->slot(1,7),lit41)});
call(e->slot(1,15),Args{lit222,get(e->slot(1,7),lit42)});
call(e->slot(1,15),Args{lit223,get(e->slot(1,7),lit43)});
call(e->slot(1,15),Args{lit224,get(e->slot(1,7),lit44)});
call(e->slot(1,15),Args{lit225,get(e->slot(1,7),lit45)});
call(e->slot(1,15),Args{lit226,get(e->slot(1,7),lit46)});
call(e->slot(1,15),Args{lit227,get(e->slot(1,7),lit81)});
if(truth(V(!truth(get(e->slot(1,7),lit103))))){return Args{};
}
call(e->slot(1,15),Args{lit228,([&](){V t262=([&](){V t263=get(e->slot(1,7),lit87);return truth(t263)?V(1.0):t263;})();return !truth(t262)?V(0.0):t262;})()});
call(e->slot(1,15),Args{lit229,([&](){V t264=([&](){V t265=get(e->slot(1,7),lit88);return truth(t265)?V(1.0):t265;})();return !truth(t264)?V(0.0):t264;})()});
call(e->slot(1,15),Args{lit230,([&](){V t266=([&](){V t267=get(e->slot(1,7),lit89);return truth(t267)?V(1.0):t267;})();return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,15),Args{lit231,([&](){V t268=([&](){V t269=get(e->slot(1,7),lit90);return truth(t269)?V(1.0):t269;})();return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,15),Args{lit232,([&](){V t270=([&](){V t271=get(e->slot(1,7),lit93);return truth(t271)?V(1.0):t271;})();return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,15),Args{lit233,([&](){V t272=([&](){V t273=get(e->slot(1,7),lit94);return truth(t273)?V(1.0):t273;})();return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,15),Args{lit234,([&](){V t274=([&](){V t275=get(e->slot(1,7),lit95);return truth(t275)?V(1.0):t275;})();return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,15),Args{lit235,([&](){V t276=([&](){V t277=get(e->slot(1,7),lit96);return truth(t277)?V(1.0):t277;})();return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,15),Args{lit236,([&](){V t278=([&](){V t279=get(e->slot(1,7),lit97);return truth(t279)?V(1.0):t279;})();return !truth(t278)?V(0.0):t278;})()});
call(e->slot(1,15),Args{lit237,([&](){V t280=([&](){V t281=get(e->slot(1,7),lit98);return truth(t281)?V(1.0):t281;})();return !truth(t280)?V(0.0):t280;})()});
call(e->slot(1,15),Args{lit238,([&](){V t282=([&](){V t283=get(e->slot(1,7),lit86);return truth(t283)?V(1.0):t283;})();return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,15),Args{lit239,([&](){V t284=([&](){V t285=get(e->slot(1,7),lit99);return truth(t285)?V(1.0):t285;})();return !truth(t284)?V(0.0):t284;})()});
call(e->slot(1,15),Args{lit240,([&](){V t286=([&](){V t287=get(e->slot(1,7),lit100);return truth(t287)?V(1.0):t287;})();return !truth(t286)?V(0.0):t286;})()});
call(e->slot(1,15),Args{lit241,([&](){V t288=([&](){V t289=get(e->slot(1,7),lit101);return truth(t289)?V(1.0):t289;})();return !truth(t288)?V(0.0):t288;})()});
{double t290=num(V(0.0)),t291=num(V(3.0)),t292=num(V(1.0));for(double t293=t290;(t292>0?t293<=t291:t293>=t291);t293+=t292){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t293);call(e->slot(2,15),Args{concat(lit242,e->slot(0,0)),([&](){V t294=get(get(e->slot(2,7),lit52),e->slot(0,0));return !truth(t294)?V(0.0):t294;})()});
call(e->slot(2,15),Args{concat(lit243,e->slot(0,0)),([&](){V t295=get(get(e->slot(2,7),lit53),e->slot(0,0));return !truth(t295)?V(0.0):t295;})()});
call(e->slot(2,15),Args{concat(lit244,e->slot(0,0)),([&](){V t296=get(get(e->slot(2,7),lit54),e->slot(0,0));return !truth(t296)?V(0.0):t296;})()});
call(e->slot(2,15),Args{concat(lit245,e->slot(0,0)),([&](){V t297=get(get(e->slot(2,7),lit55),e->slot(0,0));return !truth(t297)?V(0.0):t297;})()});
}}
return Args{};});
Ref(e->slot(0,1),lit246).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,7),lit83)};V t298=lit84;refs[0].put(std::move(t298));}
call(e->slot(1,27),Args{});
return Args{};}));
Ref(e->slot(0,1),lit247).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,7),lit85)};V t299=add(([&](){V t300=get(e->slot(1,7),lit85);return !truth(t300)?V(0.0):t300;})(),V(1.0));refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t301=first(call(e->slot(1,9),Args{first(call(e->slot(1,8),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit34),get(get(e->slot(1,1),lit1),lit35)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit200)};V t302=e->slot(0,0);refs[0].put(std::move(t302));}
call(e->slot(1,18),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t303=([&](){V t304=e->slot(0,1);return !truth(t304)?first(call(e->slot(1,17),Args{})):t304;})();refs[0].put(std::move(t303));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,7),lit83)};V t305=lit248;refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit86)};V t306=V(false);refs[0].put(std::move(t306));}
call(e->slot(1,22),Args{V()});
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,27),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,7),lit83)};V t307=lit249;refs[0].put(std::move(t307));}
call(e->slot(1,22),Args{e->slot(0,1)});
call(e->slot(1,24),Args{});
call(e->slot(1,25),Args{e->slot(0,0)});
call(e->slot(1,26),Args{});
call(e->slot(1,27),Args{});
return Args{};}));
Ref(e->slot(0,1),lit250).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t308=get(e->slot(1,7),lit45);return !truth(t308)?V(0.0):t308;})()};
return Args{};}));
Ref(e->slot(0,1),lit251).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t309=get(e->slot(1,7),lit46);return !truth(t309)?V(0.0):t309;})()};
return Args{};}));
Ref(e->slot(0,1),lit252).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V z=table();set(z,lit253,([&](){V t310=get(e->slot(1,7),lit37);return !truth(t310)?V(0.0):t310;})());set(z,lit254,([&](){V t311=get(e->slot(1,7),lit38);return !truth(t311)?V(0.0):t311;})());set(z,lit255,([&](){V t312=get(e->slot(1,7),lit39);return !truth(t312)?V(0.0):t312;})());set(z,lit256,([&](){V t313=get(e->slot(1,7),lit40);return !truth(t313)?V(0.0):t313;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit257).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,7)};
return Args{};}));
Ref(e->slot(0,1),lit258).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit259),Args{concat(lit260,concat(lit261,concat(lit262,concat(lit263,concat(lit264,concat(lit265,concat(lit266,lit267))))))),first(call(e->get("tostring"),Args{get(e->slot(1,7),lit83)})),([&](){V t314=get(e->slot(1,7),lit85);return !truth(t314)?V(0.0):t314;})(),([&](){V t315=get(e->slot(1,7),lit45);return !truth(t315)?V(0.0):t315;})(),([&](){V t316=get(e->slot(1,7),lit47);return !truth(t316)?V(0.0):t316;})(),first(call(e->get("tostring"),Args{get(e->slot(1,7),lit49)})),([&](){V t317=get(e->slot(1,7),lit46);return !truth(t317)?V(0.0):t317;})(),([&](){V t318=get(e->slot(1,7),lit48);return !truth(t318)?V(0.0):t318;})(),first(call(e->get("tostring"),Args{get(e->slot(1,7),lit51)})),([&](){V t319=get(e->slot(1,7),lit37);return !truth(t319)?V(0.0):t319;})(),([&](){V t320=get(e->slot(1,7),lit38);return !truth(t320)?V(0.0):t320;})(),([&](){V t321=get(e->slot(1,7),lit39);return !truth(t321)?V(0.0):t321;})(),([&](){V t322=get(e->slot(1,7),lit40);return !truth(t322)?V(0.0):t322;})(),([&](){V t323=get(e->slot(1,7),lit81);return !truth(t323)?V(0.0):t323;})(),([&](){V t324=get(e->slot(1,7),lit41);return !truth(t324)?V(0.0):t324;})(),([&](){V t325=get(e->slot(1,7),lit42);return !truth(t325)?V(0.0):t325;})(),([&](){V t326=get(e->slot(1,7),lit43);return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(e->slot(1,7),lit44);return !truth(t327)?V(0.0):t327;})(),([&](){V t328=get(e->slot(1,7),lit79);return !truth(t328)?V(0.0):t328;})(),([&](){V t329=get(e->slot(1,7),lit80);return !truth(t329)?V(0.0):t329;})(),([&](){V t330=get(e->slot(1,7),lit82);return !truth(t330)?V(0.0):t330;})(),([&](){V t331=get(e->slot(1,7),lit72);return !truth(t331)?V(0.0):t331;})(),([&](){V t332=get(e->slot(1,7),lit73);return !truth(t332)?V(0.0):t332;})(),([&](){V t333=get(e->slot(1,7),lit76);return !truth(t333)?V(0.0):t333;})(),([&](){V t334=get(e->slot(1,7),lit77);return !truth(t334)?V(0.0):t334;})(),([&](){V t335=get(e->slot(1,7),lit78);return !truth(t335)?V(0.0):t335;})(),([&](){V t336=([&](){V t337=get(e->slot(1,7),lit87);return truth(t337)?lit268:t337;})();return !truth(t336)?lit269:t336;})(),([&](){V t338=([&](){V t339=get(e->slot(1,7),lit88);return truth(t339)?lit268:t339;})();return !truth(t338)?lit269:t338;})(),([&](){V t340=([&](){V t341=get(e->slot(1,7),lit89);return truth(t341)?lit268:t341;})();return !truth(t340)?lit269:t340;})(),([&](){V t342=([&](){V t343=get(e->slot(1,7),lit90);return truth(t343)?lit268:t343;})();return !truth(t342)?lit269:t342;})(),([&](){V t344=([&](){V t345=get(e->slot(1,7),lit93);return truth(t345)?lit268:t345;})();return !truth(t344)?lit269:t344;})(),([&](){V t346=([&](){V t347=get(e->slot(1,7),lit94);return truth(t347)?lit268:t347;})();return !truth(t346)?lit269:t346;})(),([&](){V t348=([&](){V t349=get(e->slot(1,7),lit99);return truth(t349)?lit268:t349;})();return !truth(t348)?lit269:t348;})(),([&](){V t350=([&](){V t351=get(e->slot(1,7),lit100);return truth(t351)?lit268:t351;})();return !truth(t350)?lit269:t350;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

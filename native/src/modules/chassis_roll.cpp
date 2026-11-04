// Generated native C++ from pinned chassis_roll.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("brakeTemperatureInputContract");
static const V lit3("original");
static const V lit4("rollTau");
static const V lit5("pitchTau");
static const V lit6("heaveTau");
static const V lit7("yawTau");
static const V lit8("rollReturnTau");
static const V lit9("pitchReturnTau");
static const V lit10("heaveReturnTau");
static const V lit11("yawReturnTau");
static const V lit12("rollGain");
static const V lit13("pitchGain");
static const V lit14("heaveGain");
static const V lit15("yawGain");
static const V lit16("loadRollGain");
static const V lit17("loadPitchGain");
static const V lit18("maxRoll");
static const V lit19("maxPitch");
static const V lit20("maxHeave");
static const V lit21("maxYaw");
static const V lit22("energyGain");
static const V lit23("releaseGain");
static const V lit24("bodyFlexRollLoss");
static const V lit25("bodyFlexPitchLoss");
static const V lit26("bodyFlexHeaveLoss");
static const V lit27("bodyFlexYawLoss");
static const V lit28("bodyTorsionRollLoss");
static const V lit29("bodyBendingPitchLoss");
static const V lit30("bodyStiffGain");
static const V lit31("bodyFlexTauGain");
static const V lit32("bodyStiffTauGain");
static const V lit33("minBodyChassisScale");
static const V lit34("maxBodyChassisScale");
static const V lit35("tireHopHeaveGain");
static const V lit36("contactLossInputGain");
static const V lit37("brakePitchGain");
static const V lit38("drivePitchGain");
static const V lit39("damageResponseLoss");
static const V lit40("virtualYawInputGain");
static const V lit41("virtualRollInputGain");
static const V lit42("virtualPitchInputGain");
static const V lit43("sprungPitchGain");
static const V lit44("sprungRollGain");
static const V lit45("brakeLockPitchGain");
static const V lit46("brakeThermalResponseLoss");
static const V lit47("suspensionStressGain");
static const V lit48("maxRootInputAdd");
static const V lit49("rootReadInterval");
static const V lit50("debugStoreInterval");
static const V lit51("roll");
static const V lit52("pitch");
static const V lit53("heave");
static const V lit54("yawHint");
static const V lit55("inputRoll");
static const V lit56("inputPitch");
static const V lit57("inputHeave");
static const V lit58("inputYaw");
static const V lit59("loadRoll");
static const V lit60("loadPitch");
static const V lit61("bodyEnergy");
static const V lit62("bodyRelease");
static const V lit63("rollState");
static const V lit64("NEUTRAL");
static const V lit65("pitchState");
static const V lit66("heaveState");
static const V lit67("transition");
static const V lit68("STABLE");
static const V lit69("bodyRigidity");
static const V lit70("bodyFlexFactor");
static const V lit71("bodyTorsionFactor");
static const V lit72("bodyBendingFactor");
static const V lit73("bodyDampingFactor");
static const V lit74("bodyRollScale");
static const V lit75("bodyPitchScale");
static const V lit76("bodyHeaveScale");
static const V lit77("bodyYawScale");
static const V lit78("bodyRollTau");
static const V lit79("bodyPitchTau");
static const V lit80("bodyHeaveTau");
static const V lit81("bodyYawTau");
static const V lit82("tireHopAvg");
static const V lit83("contactLossAvg");
static const V lit84("brakeInput");
static const V lit85("brakeLockAvg");
static const V lit86("brakeThermalStress");
static const V lit87("driveTorque");
static const V lit88("driveTorqueNorm");
static const V lit89("vehicleDamage");
static const V lit90("virtualYaw");
static const V lit91("virtualRoll");
static const V lit92("virtualPitch");
static const V lit93("sprungPitchCG");
static const V lit94("sprungRollCG");
static const V lit95("suspensionStress");
static const V lit96("rootRollAdd");
static const V lit97("rootPitchAdd");
static const V lit98("rootHeaveAdd");
static const V lit99("rootYawAdd");
static const V lit100("status");
static const V lit101("INIT");
static const V lit102("updateCount");
static const V lit103("bodyRigidityLinked");
static const V lit104("loadLinked");
static const V lit105("roadLinked");
static const V lit106("tireLinked");
static const V lit107("brakeLinked");
static const V lit108("drivetrainLinked");
static const V lit109("damageLinked");
static const V lit110("virtualLinked");
static const V lit111("sprungLinked");
static const V lit112("suspensionLinked");
static const V lit113("thermalLinked");
static const V lit114("rootReadTimer");
static const V lit115("rootReadNow");
static const V lit116("debugStoreTimer");
static const V lit117("debugStoreNow");
static const V lit118("state");
static const V lit119("debug");
static const V lit120("safeLoadRaw");
static const V lit121("safeStore");
static const V lit122("safeField");
static const V lit123("getCar");
static const V lit124("ngp_body_rigidity");
static const V lit125("ngp_body_flex_factor");
static const V lit126("ngp_body_torsion_factor");
static const V lit127("ngp_body_bending_factor");
static const V lit128("ngp_body_damping_factor");
static const V lit129("ngp_body_rigidity_update_count");
static const V lit130("max");
static const V lit131("current_wheel_brake_temperature_max_v1");
static const V lit132("wheels");
static const V lit133("huge");
static const V lit134("brakeTemperature");
static const V lit135("number");
static const V lit136("abs");
static const V lit137("Current chassis roll wheel brake temperature unavailable");
static const V lit138("brakeTemperatureInput");
static const V lit139("brakeTemperatureSource");
static const V lit140("CURRENT_WHEEL_BRAKE_TEMPERATURE_MAX");
static const V lit141("ngp_brake_temp_max");
static const V lit142("ngp_brake_max_temp");
static const V lit143("ngp_brake_temp_avg");
static const V lit144("ngp_brake_avg_temp");
static const V lit145("Invalid chassis roll brake temperature input contract");
static const V lit146("ngp_body_roll_input");
static const V lit147("ngp_road_body_roll");
static const V lit148("ngp_body_pitch_input");
static const V lit149("ngp_road_body_pitch");
static const V lit150("ngp_body_heave_input");
static const V lit151("ngp_road_body_heave");
static const V lit152("ngp_body_yaw_hint");
static const V lit153("ngp_road_body_yaw");
static const V lit154("ngp_load_left");
static const V lit155("ngp_load_abs_left");
static const V lit156("ngp_load_right");
static const V lit157("ngp_load_abs_right");
static const V lit158("ngp_load_front");
static const V lit159("ngp_load_abs_front");
static const V lit160("ngp_load_rear");
static const V lit161("ngp_load_abs_rear");
static const V lit162("ngp_tire_hop_energy_");
static const V lit163("ngp_tire_hop_");
static const V lit164("ngp_tire_contact_loss_");
static const V lit165("ngp_tcr_contact_loss_");
static const V lit166("ngp_brake_input_smoothed");
static const V lit167("ngp_brake_input");
static const V lit168("brake");
static const V lit169("ngp_drive_torque");
static const V lit170("ngp_drivetrain_torque");
static const V lit171("ngp_shaft_torque");
static const V lit172("ngp_condition_total");
static const V lit173("ngp_vehicle_condition_total");
static const V lit174("ngp_virtual_yaw");
static const V lit175("ngp_virtual_roll");
static const V lit176("ngp_virtual_pitch");
static const V lit177("ngp_pitch_cg");
static const V lit178("ngp_roll_cg");
static const V lit179("ngp_brake_lock_");
static const V lit180("ngp_susp_integrated_force_");
static const V lit181("ngp_susp_int_force_");
static const V lit182("ngp_susp_");
static const V lit183("ngp_damper_force_");
static const V lit184("min");
static const V lit185("ROLL RIGHT");
static const V lit186("ROLL LEFT");
static const V lit187("NOSE DOWN");
static const V lit188("NOSE UP");
static const V lit189("HEAVE UP");
static const V lit190("HEAVE DOWN");
static const V lit191("LOAD SHIFT");
static const V lit192("BODY TRANSITION");
static const V lit193("ngp_chassis_roll");
static const V lit194("ngp_chassis_pitch");
static const V lit195("ngp_chassis_heave");
static const V lit196("ngp_chassis_yaw_hint");
static const V lit197("ngp_body_roll");
static const V lit198("ngp_body_pitch");
static const V lit199("ngp_body_heave");
static const V lit200("ngp_body_yaw_hint_live");
static const V lit201("ngp_chassis_body_energy");
static const V lit202("ngp_chassis_body_release");
static const V lit203("ngp_chassis_roll_state");
static const V lit204("ngp_chassis_pitch_state");
static const V lit205("ngp_chassis_heave_state");
static const V lit206("ngp_chassis_transition");
static const V lit207("ngp_chassis_roll_status");
static const V lit208("ngp_chassis_roll_update_count");
static const V lit209("ngp_chassis_status");
static const V lit210("ngp_chassis_update_count");
static const V lit211("ngp_chassis_roll_root_roll_add");
static const V lit212("ngp_chassis_roll_root_pitch_add");
static const V lit213("ngp_chassis_roll_root_heave_add");
static const V lit214("ngp_chassis_roll_root_yaw_add");
static const V lit215("ngp_chassis_roll_body_linked");
static const V lit216("ngp_chassis_roll_load_linked");
static const V lit217("ngp_chassis_roll_road_linked");
static const V lit218("ngp_chassis_roll_tire_linked");
static const V lit219("ngp_chassis_roll_brake_linked");
static const V lit220("ngp_chassis_roll_drive_linked");
static const V lit221("ngp_chassis_roll_damage_linked");
static const V lit222("ngp_chassis_roll_virtual_linked");
static const V lit223("ngp_chassis_roll_sprung_linked");
static const V lit224("ngp_chassis_roll_suspension_linked");
static const V lit225("ngp_chassis_roll_thermal_linked");
static const V lit226("ngp_chassis_roll_body_roll_scale");
static const V lit227("ngp_chassis_roll_body_pitch_scale");
static const V lit228("ngp_chassis_roll_body_heave_scale");
static const V lit229("ngp_chassis_roll_body_yaw_scale");
static const V lit230("ngp_chassis_roll_body_roll_tau");
static const V lit231("ngp_chassis_roll_body_pitch_tau");
static const V lit232("ngp_chassis_roll_body_heave_tau");
static const V lit233("ngp_chassis_roll_body_yaw_tau");
static const V lit234("ngp_chassis_roll_brake_lock_avg");
static const V lit235("ngp_chassis_roll_thermal_stress");
static const V lit236("ngp_chassis_roll_suspension_stress");
static const V lit237("ngp_chassis_roll_input_roll");
static const V lit238("ngp_chassis_roll_input_pitch");
static const V lit239("ngp_chassis_roll_input_heave");
static const V lit240("ngp_chassis_roll_input_yaw");
static const V lit241("ngp_chassis_roll_load_roll");
static const V lit242("ngp_chassis_roll_load_pitch");
static const V lit243("init");
static const V lit244("update");
static const V lit245("BAD DT");
static const V lit246("NO CAR");
static const V lit247("RUNNING");
static const V lit248("getRoll");
static const V lit249("getPitch");
static const V lit250("getHeave");
static const V lit251("getYawHint");
static const V lit252("getEnergy");
static const V lit253("getRelease");
static const V lit254("debugStr");
static const V lit255("format");
static const V lit256("Status %s / Count %.0f\n");
static const V lit257("Roll %.3f Pitch %.3f Heave %.3f Yaw %.3f\n");
static const V lit258("Energy %.3f Release %.3f %s\n");
static const V lit259("RootAdd R/P/H/Y %.3f %.3f %.3f %.3f\n");
static const V lit260("Links Body:%s Load:%s Road:%s Tire:%s Brake:%s Drive:%s Damage:%s Virtual:%s Sprung:%s Susp:%s Therm:%s");
static const V lit261("OK");
static const V lit262("NIL");
V load_chassis_roll(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(20);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(0.14));set(z,lit5,V(0.16));set(z,lit6,V(0.12));set(z,lit7,V(0.18));set(z,lit8,V(0.22));set(z,lit9,V(0.24));set(z,lit10,V(0.18));set(z,lit11,V(0.26));set(z,lit12,V(0.85));set(z,lit13,V(0.75));set(z,lit14,V(0.65));set(z,lit15,V(0.35));set(z,lit16,V(0.22));set(z,lit17,V(0.18));set(z,lit18,V(1.0));set(z,lit19,V(1.0));set(z,lit20,V(1.0));set(z,lit21,V(1.0));set(z,lit22,V(0.7));set(z,lit23,V(0.45));set(z,lit24,V(0.1));set(z,lit25,V(0.08));set(z,lit26,V(0.06));set(z,lit27,V(0.08));set(z,lit28,V(0.08));set(z,lit29,V(0.08));set(z,lit30,V(0.05));set(z,lit31,V(0.42));set(z,lit32,V(0.1));set(z,lit33,V(0.86));set(z,lit34,V(1.1));set(z,lit35,V(0.18));set(z,lit36,V(0.08));set(z,lit37,V(0.12));set(z,lit38,V(0.08));set(z,lit39,V(0.12));set(z,lit40,V(0.1));set(z,lit41,V(0.08));set(z,lit42,V(0.07));set(z,lit43,V(0.65));set(z,lit44,V(0.65));set(z,lit45,V(0.05));set(z,lit46,V(0.05));set(z,lit47,V(0.06));set(z,lit48,V(0.25));set(z,lit49,V(0.05));set(z,lit50,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,lit64);set(z,lit65,lit64);set(z,lit66,lit64);set(z,lit67,lit68);set(z,lit69,V(1.0));set(z,lit70,V(1.0));set(z,lit71,V(1.0));set(z,lit72,V(1.0));set(z,lit73,V(1.0));set(z,lit74,V(1.0));set(z,lit75,V(1.0));set(z,lit76,V(1.0));set(z,lit77,V(1.0));set(z,lit78,V(0.14));set(z,lit79,V(0.16));set(z,lit80,V(0.12));set(z,lit81,V(0.18));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,lit101);set(z,lit102,V(0.0));set(z,lit103,V(false));set(z,lit104,V(false));set(z,lit105,V(false));set(z,lit106,V(false));set(z,lit107,V(false));set(z,lit108,V(false));set(z,lit109,V(false));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(false));set(z,lit113,V(false));set(z,lit114,V(999.0));set(z,lit115,V(true));set(z,lit116,V(999.0));set(z,lit117,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t7=([&](){V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t8)?V(0.0):t8;})();refs[0].put(std::move(t7));}
if(truth(ne(e->slot(0,0),e->slot(0,0)))){return Args{e->slot(0,1)};
}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t9=([&](){V t10=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t10)?V(0.0):t10;})();refs[0].put(std::move(t9));}
return Args{([&](){V t11=([&](){V t12=lt(e->slot(0,0),V(0.0));return truth(t12)?V(-num(e->slot(0,0))):t12;})();return !truth(t11)?e->slot(0,0):t11;})()};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(([&](){V t14=eq(e->slot(0,2),V());return !truth(t14)?ne(e->slot(0,2),e->slot(0,2)):t14;})())){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return Args{e->slot(0,2)};
return Args{};});
{V t16=get(e->slot(0,0),lit120);e->slot(0,6)=std::move(t16);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t17=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t17);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()};
}
return call(e->slot(1,5),Args{e->slot(0,2),([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()});
return Args{};});
{V t20=get(e->slot(0,0),lit121);e->slot(0,8)=std::move(t20);}
{V t21=get(e->slot(0,0),lit122);e->slot(0,9)=std::move(t21);}
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t22=V(!truth(e->get("ac")));return !truth(t22)?V(!truth(get(e->get("ac"),lit123))):t22;})())){return Args{V()};
}
{Args t23=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit123),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t23,0);e->slot(0,1)=arg(t23,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t24=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t25=first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t26=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t27=first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t27));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t28=first(call(e->slot(1,3),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t28);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t29=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit114)};V t30=add(([&](){V t31=get(e->slot(1,2),lit114);return !truth(t31)?V(0.0):t31;})(),e->slot(0,0));refs[0].put(std::move(t30));}
if(truth(ge(get(e->slot(1,2),lit114),get(get(e->slot(1,1),lit1),lit49)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit114)};V t32=V(0.0);refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t33=V(true);refs[0].put(std::move(t33));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t34=V(false);refs[0].put(std::move(t34));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t35=add(([&](){V t36=get(e->slot(1,2),lit116);return !truth(t36)?V(0.0):t36;})(),e->slot(0,0));refs[0].put(std::move(t35));}
if(truth(ge(get(e->slot(1,2),lit116),get(get(e->slot(1,1),lit1),lit50)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t37=V(0.0);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t38=V(true);refs[0].put(std::move(t38));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t39=V(false);refs[0].put(std::move(t39));}
}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t40=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{lit124,V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t41=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{lit125,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t42=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{lit126,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t43=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{lit127,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t44=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{lit128,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t45=gt(first(call(e->slot(1,7),Args{lit129,V(0.0)})),V(0.0));refs[0].put(std::move(t45));}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t46=get(e->slot(1,1),lit1);e->slot(0,5)=std::move(t46);}
if(truth(V(!truth(get(e->slot(1,2),lit103))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t47=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit74),V(1.0),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t48=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit75),V(1.0),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t49=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit76),V(1.0),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t50=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit77),V(1.0),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t51=get(e->slot(0,5),lit4);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t52=get(e->slot(0,5),lit5);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t53=get(e->slot(0,5),lit6);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t54=get(e->slot(0,5),lit7);refs[0].put(std::move(t54));}
return Args{e->slot(0,0),e->slot(0,1),e->slot(0,2),e->slot(0,3)};
}
{V t55=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit69),V(0.2),V(1.35)}));e->slot(0,6)=std::move(t55);}
{V t56=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit70),V(0.25),V(1.8)}));e->slot(0,7)=std::move(t56);}
{V t57=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit71),V(0.35),V(2.0)}));e->slot(0,8)=std::move(t57);}
{V t58=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit72),V(0.35),V(2.0)}));e->slot(0,9)=std::move(t58);}
{V t59=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit73),V(0.5),V(1.8)}));e->slot(0,10)=std::move(t59);}
{V t60=first(call(e->slot(1,3),Args{sub(e->slot(0,7),V(1.0)),V(0.0),V(0.8)}));e->slot(0,11)=std::move(t60);}
{V t61=first(call(e->slot(1,3),Args{sub(e->slot(0,6),V(1.0)),V(0.0),V(0.35)}));e->slot(0,12)=std::move(t61);}
{V t62=first(call(e->slot(1,3),Args{sub(e->slot(0,8),V(1.0)),V(0.0),V(1.0)}));e->slot(0,13)=std::move(t62);}
{V t63=first(call(e->slot(1,3),Args{sub(e->slot(0,9),V(1.0)),V(0.0),V(1.0)}));e->slot(0,14)=std::move(t63);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t64=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit74),first(call(e->slot(1,3),Args{add(sub(sub(V(1.0),mul(e->slot(0,11),get(e->slot(0,5),lit24))),mul(e->slot(0,13),get(e->slot(0,5),lit28))),mul(e->slot(0,12),get(e->slot(0,5),lit30))),get(e->slot(0,5),lit33),get(e->slot(0,5),lit34)})),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t65=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit75),first(call(e->slot(1,3),Args{add(sub(sub(V(1.0),mul(e->slot(0,11),get(e->slot(0,5),lit25))),mul(e->slot(0,14),get(e->slot(0,5),lit29))),mul(e->slot(0,12),get(e->slot(0,5),lit30))),get(e->slot(0,5),lit33),get(e->slot(0,5),lit34)})),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t66=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit76),first(call(e->slot(1,3),Args{add(sub(V(1.0),mul(e->slot(0,11),get(e->slot(0,5),lit26))),mul(e->slot(0,12),get(e->slot(0,5),lit30))),get(e->slot(0,5),lit33),get(e->slot(0,5),lit34)})),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t67=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit77),first(call(e->slot(1,3),Args{add(sub(sub(V(1.0),mul(e->slot(0,11),get(e->slot(0,5),lit27))),mul(mul(e->slot(0,13),get(e->slot(0,5),lit28)),V(0.75))),mul(e->slot(0,12),get(e->slot(0,5),lit30))),get(e->slot(0,5),lit33),get(e->slot(0,5),lit34)})),V(0.05),e->slot(0,4)}));refs[0].put(std::move(t67));}
{V t68=divv(add(V(1.0),mul(e->slot(0,11),get(e->slot(0,5),lit31))),add(V(1.0),mul(e->slot(0,12),get(e->slot(0,5),lit32))));e->slot(0,15)=std::move(t68);}
{std::array<Ref,1> refs{Ref(e,0,15)};V t69=divv(e->slot(0,15),first(call(get(e->get("math"),lit130),Args{e->slot(0,10),V(0.5)})));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t70=first(call(e->slot(1,3),Args{mul(get(e->slot(0,5),lit4),e->slot(0,15)),V(0.03),V(0.18)}));refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t71=first(call(e->slot(1,3),Args{mul(get(e->slot(0,5),lit5),e->slot(0,15)),V(0.035),V(0.2)}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t72=first(call(e->slot(1,3),Args{mul(get(e->slot(0,5),lit6),e->slot(0,15)),V(0.04),V(0.18)}));refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t73=first(call(e->slot(1,3),Args{mul(get(e->slot(0,5),lit7),e->slot(0,15)),V(0.04),V(0.22)}));refs[0].put(std::move(t73));}
return Args{mul(e->slot(0,0),get(e->slot(1,2),lit74)),mul(e->slot(0,1),get(e->slot(1,2),lit75)),mul(e->slot(0,2),get(e->slot(1,2),lit76)),mul(e->slot(0,3),get(e->slot(1,2),lit77))};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t74=V(false);refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t75=V(false);refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t76=V(false);refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t77=V(false);refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t78=V(false);refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t79=V(false);refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t80=V(false);refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t81=V(false);refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t82=V(false);refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t83=V(false);refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t84=V(false);refs[0].put(std::move(t84));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t85=get(get(e->slot(1,1),lit1),lit2);e->slot(0,1)=std::move(t85);}
if(truth(eq(e->slot(0,1),lit131))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t86=([&](){V t87=e->slot(1,0);return truth(t87)?get(e->slot(1,0),lit132):t87;})();e->slot(0,0)=std::move(t86);}
{V t88=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t88);}
{V t89=V(-num(get(e->get("math"),lit133)));e->slot(0,2)=std::move(t89);}
{double t90=num(V(0.0)),t91=num(V(3.0)),t92=num(V(1.0));for(double t93=t90;(t92>0?t93<=t91:t93>=t91);t93+=t92){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t93);{V t94=([&](){V t95=e->slot(1,0);return truth(t95)?get(e->slot(1,0),e->slot(0,0)):t95;})();e->slot(0,1)=std::move(t94);}
{V t96=([&](){V t97=e->slot(0,1);return truth(t97)?get(e->slot(0,1),lit134):t97;})();e->slot(0,2)=std::move(t96);}
if(truth(([&](){V t98=([&](){V t99=([&](){V t100=ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit135);return !truth(t100)?ne(e->slot(0,2),e->slot(0,2)):t100;})();return !truth(t99)?eq(first(call(get(e->get("math"),lit136),Args{e->slot(0,2)})),get(e->get("math"),lit133)):t99;})();return !truth(t98)?lt(e->slot(0,2),V(-num(V(273.15)))):t98;})())){call(e->get("error"),Args{lit137});
}
{std::array<Ref,1> refs{Ref(e->slot(1,1),e->slot(0,0))};V t101=e->slot(0,2);refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t102=first(call(get(e->get("math"),lit130),Args{e->slot(1,2),e->slot(0,2)}));refs[0].put(std::move(t102));}
}}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit138)};V t103=e->slot(0,1);refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit139)};V t104=lit140;refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit113)};V t105=V(true);refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit86)};V t106=first(call(e->slot(2,3),Args{divv(sub(e->slot(0,2),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t106));}
}else if(truth(eq(e->slot(0,1),lit3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t107=([&](){V t108=([&](){V t109=([&](){V t110=first(call(e->slot(2,6),Args{lit141}));return !truth(t110)?first(call(e->slot(2,6),Args{lit142})):t110;})();return !truth(t109)?first(call(e->slot(2,6),Args{lit143})):t109;})();return !truth(t108)?first(call(e->slot(2,6),Args{lit144})):t108;})();e->slot(0,0)=std::move(t107);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit113)};V t111=ne(e->slot(0,0),V());refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit86)};V t112=first(call(e->slot(2,3),Args{divv(sub(first(call(e->slot(2,5),Args{e->slot(0,0),V(25.0)})),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t112));}
}else{call(e->get("error"),Args{lit145});
}

return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,24);auto e=&storage;e->slot(0,0)=arg(a,0);{V t113=([&](){V t114=first(call(e->slot(1,6),Args{lit146}));return !truth(t114)?first(call(e->slot(1,6),Args{lit147})):t114;})();e->slot(0,1)=std::move(t113);}
{V t115=([&](){V t116=first(call(e->slot(1,6),Args{lit148}));return !truth(t116)?first(call(e->slot(1,6),Args{lit149})):t116;})();e->slot(0,2)=std::move(t115);}
{V t117=([&](){V t118=first(call(e->slot(1,6),Args{lit150}));return !truth(t118)?first(call(e->slot(1,6),Args{lit151})):t118;})();e->slot(0,3)=std::move(t117);}
{V t119=([&](){V t120=first(call(e->slot(1,6),Args{lit152}));return !truth(t120)?first(call(e->slot(1,6),Args{lit153})):t120;})();e->slot(0,4)=std::move(t119);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t121=([&](){V t122=([&](){V t123=([&](){V t124=ne(e->slot(0,1),V());return !truth(t124)?ne(e->slot(0,2),V()):t124;})();return !truth(t123)?ne(e->slot(0,3),V()):t123;})();return !truth(t122)?ne(e->slot(0,4),V()):t122;})();refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t125=first(call(e->slot(1,7),joined(Args{lit146},call(e->slot(1,7),Args{lit147,V(0.0)}))));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t126=first(call(e->slot(1,7),joined(Args{lit148},call(e->slot(1,7),Args{lit149,V(0.0)}))));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t127=first(call(e->slot(1,7),joined(Args{lit150},call(e->slot(1,7),Args{lit151,V(0.0)}))));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t128=first(call(e->slot(1,7),joined(Args{lit152},call(e->slot(1,7),Args{lit153,V(0.0)}))));refs[0].put(std::move(t128));}
{V t129=([&](){V t130=first(call(e->slot(1,6),Args{lit154}));return !truth(t130)?first(call(e->slot(1,6),Args{lit155})):t130;})();e->slot(0,5)=std::move(t129);}
{V t131=([&](){V t132=first(call(e->slot(1,6),Args{lit156}));return !truth(t132)?first(call(e->slot(1,6),Args{lit157})):t132;})();e->slot(0,6)=std::move(t131);}
{V t133=([&](){V t134=first(call(e->slot(1,6),Args{lit158}));return !truth(t134)?first(call(e->slot(1,6),Args{lit159})):t134;})();e->slot(0,7)=std::move(t133);}
{V t135=([&](){V t136=first(call(e->slot(1,6),Args{lit160}));return !truth(t136)?first(call(e->slot(1,6),Args{lit161})):t136;})();e->slot(0,8)=std::move(t135);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t137=([&](){V t138=([&](){V t139=([&](){V t140=ne(e->slot(0,5),V());return !truth(t140)?ne(e->slot(0,6),V()):t140;})();return !truth(t139)?ne(e->slot(0,7),V()):t139;})();return !truth(t138)?ne(e->slot(0,8),V()):t138;})();refs[0].put(std::move(t137));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t141=first(call(e->slot(1,3),Args{sub(first(call(e->slot(1,7),joined(Args{lit156},call(e->slot(1,7),Args{lit157,V(0.5)})))),first(call(e->slot(1,7),joined(Args{lit154},call(e->slot(1,7),Args{lit155,V(0.5)}))))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t142=first(call(e->slot(1,3),Args{sub(first(call(e->slot(1,7),joined(Args{lit158},call(e->slot(1,7),Args{lit159,V(0.5)})))),first(call(e->slot(1,7),joined(Args{lit160},call(e->slot(1,7),Args{lit161,V(0.5)}))))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t142));}
{V t143=V(0.0);e->slot(0,9)=std::move(t143);}
{V t144=V(0.0);e->slot(0,10)=std::move(t144);}
{V t145=V(false);e->slot(0,11)=std::move(t145);}
{double t146=num(V(0.0)),t147=num(V(3.0)),t148=num(V(1.0));for(double t149=t146;(t148>0?t149<=t147:t149>=t147);t149+=t148){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t149);{V t150=([&](){V t151=first(call(e->slot(2,6),Args{concat(lit162,e->slot(0,0))}));return !truth(t151)?first(call(e->slot(2,6),Args{concat(lit163,e->slot(0,0))})):t151;})();e->slot(0,1)=std::move(t150);}
{V t152=([&](){V t153=first(call(e->slot(2,6),Args{concat(lit164,e->slot(0,0))}));return !truth(t153)?first(call(e->slot(2,6),Args{concat(lit165,e->slot(0,0))})):t153;})();e->slot(0,2)=std::move(t152);}
if(truth(([&](){V t154=ne(e->slot(0,1),V());return !truth(t154)?ne(e->slot(0,2),V()):t154;})())){{std::array<Ref,1> refs{Ref(e,1,11)};V t155=V(true);refs[0].put(std::move(t155));}
}
{std::array<Ref,1> refs{Ref(e,1,9)};V t156=add(e->slot(1,9),first(call(e->slot(2,3),Args{first(call(e->slot(2,5),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t157=add(e->slot(1,10),first(call(e->slot(2,3),Args{first(call(e->slot(2,5),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t157));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t158=e->slot(0,11);refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t159=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t160=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t160));}
{V t161=([&](){V t162=first(call(e->slot(1,6),Args{lit166}));return !truth(t162)?first(call(e->slot(1,6),Args{lit167})):t162;})();e->slot(0,12)=std::move(t161);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t163=ne(e->slot(0,12),V());refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t164=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),joined(Args{e->slot(0,12)},call(e->slot(1,5),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit168,V(0.0)})),V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t164));}
{V t165=([&](){V t166=([&](){V t167=first(call(e->slot(1,6),Args{lit169}));return !truth(t167)?first(call(e->slot(1,6),Args{lit170})):t167;})();return !truth(t166)?first(call(e->slot(1,6),Args{lit171})):t166;})();e->slot(0,13)=std::move(t165);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t168=ne(e->slot(0,13),V());refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t169=first(call(e->slot(1,5),Args{e->slot(0,13),V(0.0)}));refs[0].put(std::move(t169));}
{V t170=([&](){V t171=first(call(e->slot(1,6),Args{lit172}));return !truth(t171)?first(call(e->slot(1,6),Args{lit173})):t171;})();e->slot(0,14)=std::move(t170);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t172=ne(e->slot(0,14),V());refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t173=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t173));}
{V t174=first(call(e->slot(1,6),Args{lit174}));e->slot(0,15)=std::move(t174);}
{V t175=first(call(e->slot(1,6),Args{lit175}));e->slot(0,16)=std::move(t175);}
{V t176=first(call(e->slot(1,6),Args{lit176}));e->slot(0,17)=std::move(t176);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t177=([&](){V t178=([&](){V t179=ne(e->slot(0,15),V());return !truth(t179)?ne(e->slot(0,16),V()):t179;})();return !truth(t178)?ne(e->slot(0,17),V()):t178;})();refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t180=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,15),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t181=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,16),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t182=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,17),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t182));}
{V t183=first(call(e->slot(1,6),Args{lit177}));e->slot(0,18)=std::move(t183);}
{V t184=first(call(e->slot(1,6),Args{lit178}));e->slot(0,19)=std::move(t184);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t185=([&](){V t186=ne(e->slot(0,18),V());return !truth(t186)?ne(e->slot(0,19),V()):t186;})();refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t187=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,18),V(0.0)})),V(-num(V(0.12))),V(0.12)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t188=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,19),V(0.0)})),V(-num(V(0.12))),V(0.12)}));refs[0].put(std::move(t188));}
{V t189=V(0.0);e->slot(0,20)=std::move(t189);}
{V t190=V(false);e->slot(0,21)=std::move(t190);}
{double t191=num(V(0.0)),t192=num(V(3.0)),t193=num(V(1.0));for(double t194=t191;(t193>0?t194<=t192:t194>=t192);t194+=t193){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t194);{V t195=first(call(e->slot(2,6),Args{concat(lit179,e->slot(0,0))}));e->slot(0,1)=std::move(t195);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,21)};V t196=V(true);refs[0].put(std::move(t196));}
}
{std::array<Ref,1> refs{Ref(e,1,20)};V t197=add(e->slot(1,20),first(call(e->slot(2,3),Args{first(call(e->slot(2,5),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t197));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t198=mul(e->slot(0,20),V(0.25));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t199=([&](){V t200=get(e->slot(1,2),lit107);return !truth(t200)?e->slot(0,21):t200;})();refs[0].put(std::move(t199));}
call(e->slot(1,16),Args{e->slot(0,0)});
{V t201=V(0.0);e->slot(0,22)=std::move(t201);}
{V t202=V(false);e->slot(0,23)=std::move(t202);}
{double t203=num(V(0.0)),t204=num(V(3.0)),t205=num(V(1.0));for(double t206=t203;(t205>0?t206<=t204:t206>=t204);t206+=t205){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t206);{V t207=([&](){V t208=([&](){V t209=([&](){V t210=first(call(e->slot(2,6),Args{concat(lit180,e->slot(0,0))}));return !truth(t210)?first(call(e->slot(2,6),Args{concat(lit181,e->slot(0,0))})):t210;})();return !truth(t209)?first(call(e->slot(2,6),Args{concat(lit182,e->slot(0,0))})):t209;})();return !truth(t208)?first(call(e->slot(2,6),Args{concat(lit183,e->slot(0,0))})):t208;})();e->slot(0,1)=std::move(t207);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,23)};V t211=V(true);refs[0].put(std::move(t211));}
}
{std::array<Ref,1> refs{Ref(e,1,22)};V t212=add(e->slot(1,22),first(call(get(e->get("math"),lit184),Args{divv(first(call(e->slot(2,4),call(e->slot(2,5),Args{e->slot(0,1),V(0.0)}))),V(25000.0)),V(1.0)})));refs[0].put(std::move(t212));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t213=e->slot(0,23);refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t214=first(call(e->slot(1,3),Args{mul(e->slot(0,22),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t215=first(call(e->slot(1,3),Args{divv(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit87)})),V(2500.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t216=first(call(e->slot(1,3),Args{add(add(mul(get(e->slot(1,2),lit91),get(get(e->slot(1,1),lit1),lit41)),mul(get(e->slot(1,2),lit94),get(get(e->slot(1,1),lit1),lit44))),mul(get(e->slot(1,2),lit95),get(get(e->slot(1,1),lit1),lit47))),V(-num(get(get(e->slot(1,1),lit1),lit48))),get(get(e->slot(1,1),lit1),lit48)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t217=first(call(e->slot(1,3),Args{add(add(mul(get(e->slot(1,2),lit92),get(get(e->slot(1,1),lit1),lit42)),mul(get(e->slot(1,2),lit93),get(get(e->slot(1,1),lit1),lit43))),mul(get(e->slot(1,2),lit85),get(get(e->slot(1,1),lit1),lit45))),V(-num(get(get(e->slot(1,1),lit1),lit48))),get(get(e->slot(1,1),lit1),lit48)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t218=first(call(e->slot(1,3),Args{add(mul(get(e->slot(1,2),lit95),get(get(e->slot(1,1),lit1),lit47)),mul(get(e->slot(1,2),lit82),V(0.04))),V(0.0),get(get(e->slot(1,1),lit1),lit48)}));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t219=first(call(e->slot(1,3),Args{sub(mul(get(e->slot(1,2),lit90),get(get(e->slot(1,1),lit1),lit40)),mul(get(e->slot(1,2),lit88),V(0.04))),V(-num(get(get(e->slot(1,1),lit1),lit48))),get(get(e->slot(1,1),lit1),lit48)}));refs[0].put(std::move(t219));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t220=([&](){V t221=([&](){V t222=lt(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit51)})),V(0.05));return truth(t222)?lit64:t222;})();return !truth(t221)?([&](){V t223=([&](){V t224=gt(get(e->slot(1,2),lit51),V(0.0));return truth(t224)?lit185:t224;})();return !truth(t223)?lit186:t223;})():t221;})();refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t225=([&](){V t226=([&](){V t227=lt(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit52)})),V(0.05));return truth(t227)?lit64:t227;})();return !truth(t226)?([&](){V t228=([&](){V t229=gt(get(e->slot(1,2),lit52),V(0.0));return truth(t229)?lit187:t229;})();return !truth(t228)?lit188:t228;})():t226;})();refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t230=([&](){V t231=([&](){V t232=lt(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit53)})),V(0.05));return truth(t232)?lit64:t232;})();return !truth(t231)?([&](){V t233=([&](){V t234=gt(get(e->slot(1,2),lit53),V(0.0));return truth(t234)?lit189:t234;})();return !truth(t233)?lit190:t233;})():t231;})();refs[0].put(std::move(t230));}
{V t235=first(call(e->slot(1,3),Args{add(add(add(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit51)})),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit52)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit53)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit54)}))),V(0.0),V(2.0)}));e->slot(0,0)=std::move(t235);}
if(truth(lt(e->slot(0,0),V(0.15)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t236=lit68;refs[0].put(std::move(t236));}
}else if(truth(lt(e->slot(0,0),V(0.45)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t237=lit191;refs[0].put(std::move(t237));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t238=lit192;refs[0].put(std::move(t238));}
}

return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,8),Args{lit193,get(e->slot(1,2),lit51)});
call(e->slot(1,8),Args{lit194,get(e->slot(1,2),lit52)});
call(e->slot(1,8),Args{lit195,get(e->slot(1,2),lit53)});
call(e->slot(1,8),Args{lit196,get(e->slot(1,2),lit54)});
call(e->slot(1,8),Args{lit197,get(e->slot(1,2),lit51)});
call(e->slot(1,8),Args{lit198,get(e->slot(1,2),lit52)});
call(e->slot(1,8),Args{lit199,get(e->slot(1,2),lit53)});
call(e->slot(1,8),Args{lit200,get(e->slot(1,2),lit54)});
call(e->slot(1,8),Args{lit201,get(e->slot(1,2),lit61)});
call(e->slot(1,8),Args{lit202,get(e->slot(1,2),lit62)});
call(e->slot(1,8),Args{lit203,get(e->slot(1,2),lit63)});
call(e->slot(1,8),Args{lit204,get(e->slot(1,2),lit65)});
call(e->slot(1,8),Args{lit205,get(e->slot(1,2),lit66)});
call(e->slot(1,8),Args{lit206,get(e->slot(1,2),lit67)});
call(e->slot(1,8),Args{lit207,get(e->slot(1,2),lit100)});
call(e->slot(1,8),Args{lit208,get(e->slot(1,2),lit102)});
call(e->slot(1,8),Args{lit209,get(e->slot(1,2),lit100)});
call(e->slot(1,8),Args{lit210,get(e->slot(1,2),lit102)});
call(e->slot(1,8),Args{lit211,get(e->slot(1,2),lit96)});
call(e->slot(1,8),Args{lit212,get(e->slot(1,2),lit97)});
call(e->slot(1,8),Args{lit213,get(e->slot(1,2),lit98)});
call(e->slot(1,8),Args{lit214,get(e->slot(1,2),lit99)});
if(truth(V(!truth(get(e->slot(1,2),lit117))))){return Args{};
}
call(e->slot(1,8),Args{lit215,([&](){V t239=([&](){V t240=get(e->slot(1,2),lit103);return truth(t240)?V(1.0):t240;})();return !truth(t239)?V(0.0):t239;})()});
call(e->slot(1,8),Args{lit216,([&](){V t241=([&](){V t242=get(e->slot(1,2),lit104);return truth(t242)?V(1.0):t242;})();return !truth(t241)?V(0.0):t241;})()});
call(e->slot(1,8),Args{lit217,([&](){V t243=([&](){V t244=get(e->slot(1,2),lit105);return truth(t244)?V(1.0):t244;})();return !truth(t243)?V(0.0):t243;})()});
call(e->slot(1,8),Args{lit218,([&](){V t245=([&](){V t246=get(e->slot(1,2),lit106);return truth(t246)?V(1.0):t246;})();return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,8),Args{lit219,([&](){V t247=([&](){V t248=get(e->slot(1,2),lit107);return truth(t248)?V(1.0):t248;})();return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,8),Args{lit220,([&](){V t249=([&](){V t250=get(e->slot(1,2),lit108);return truth(t250)?V(1.0):t250;})();return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,8),Args{lit221,([&](){V t251=([&](){V t252=get(e->slot(1,2),lit109);return truth(t252)?V(1.0):t252;})();return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,8),Args{lit222,([&](){V t253=([&](){V t254=get(e->slot(1,2),lit110);return truth(t254)?V(1.0):t254;})();return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,8),Args{lit223,([&](){V t255=([&](){V t256=get(e->slot(1,2),lit111);return truth(t256)?V(1.0):t256;})();return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,8),Args{lit224,([&](){V t257=([&](){V t258=get(e->slot(1,2),lit112);return truth(t258)?V(1.0):t258;})();return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,8),Args{lit225,([&](){V t259=([&](){V t260=get(e->slot(1,2),lit113);return truth(t260)?V(1.0):t260;})();return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,8),Args{lit226,get(e->slot(1,2),lit74)});
call(e->slot(1,8),Args{lit227,get(e->slot(1,2),lit75)});
call(e->slot(1,8),Args{lit228,get(e->slot(1,2),lit76)});
call(e->slot(1,8),Args{lit229,get(e->slot(1,2),lit77)});
call(e->slot(1,8),Args{lit230,get(e->slot(1,2),lit78)});
call(e->slot(1,8),Args{lit231,get(e->slot(1,2),lit79)});
call(e->slot(1,8),Args{lit232,get(e->slot(1,2),lit80)});
call(e->slot(1,8),Args{lit233,get(e->slot(1,2),lit81)});
call(e->slot(1,8),Args{lit234,get(e->slot(1,2),lit85)});
call(e->slot(1,8),Args{lit235,get(e->slot(1,2),lit86)});
call(e->slot(1,8),Args{lit236,get(e->slot(1,2),lit95)});
call(e->slot(1,8),Args{lit237,get(e->slot(1,2),lit55)});
call(e->slot(1,8),Args{lit238,get(e->slot(1,2),lit56)});
call(e->slot(1,8),Args{lit239,get(e->slot(1,2),lit57)});
call(e->slot(1,8),Args{lit240,get(e->slot(1,2),lit58)});
call(e->slot(1,8),Args{lit241,get(e->slot(1,2),lit59)});
call(e->slot(1,8),Args{lit242,get(e->slot(1,2),lit60)});
return Args{};});
Ref(e->slot(0,1),lit243).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t261=lit101;refs[0].put(std::move(t261));}
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit244).put(native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t262=add(([&](){V t263=get(e->slot(1,2),lit102);return !truth(t263)?V(0.0):t263;})(),V(1.0));refs[0].put(std::move(t262));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t264=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t264));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t265=lit245;refs[0].put(std::move(t265));}
call(e->slot(1,19),Args{});
return Args{};
}
call(e->slot(1,12),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t266=([&](){V t267=e->slot(0,1);return !truth(t267)?first(call(e->slot(1,10),Args{})):t267;})();refs[0].put(std::move(t266));}
if(truth(get(e->slot(1,2),lit115))){call(e->slot(1,15),Args{});
call(e->slot(1,13),Args{});
call(e->slot(1,17),Args{e->slot(0,1)});
}else{call(e->slot(1,13),Args{});
if(truth(eq(get(get(e->slot(1,1),lit1),lit2),lit131))){call(e->slot(1,16),Args{e->slot(0,1)});
}
}
call(e->slot(1,14),Args{V(0.0),V(0.0),V(0.0),V(0.0),e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t268=lit246;refs[0].put(std::move(t268));}
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
return Args{};
}
{V t269=add(add(add(mul(get(e->slot(1,2),lit55),get(get(e->slot(1,1),lit1),lit12)),mul(get(e->slot(1,2),lit59),get(get(e->slot(1,1),lit1),lit16))),mul(get(e->slot(1,2),lit83),get(get(e->slot(1,1),lit1),lit36))),get(e->slot(1,2),lit96));e->slot(0,3)=std::move(t269);}
{V t270=add(sub(add(add(mul(get(e->slot(1,2),lit56),get(get(e->slot(1,1),lit1),lit13)),mul(get(e->slot(1,2),lit60),get(get(e->slot(1,1),lit1),lit17))),mul(get(e->slot(1,2),lit84),get(get(e->slot(1,1),lit1),lit37))),mul(get(e->slot(1,2),lit88),get(get(e->slot(1,1),lit1),lit38))),get(e->slot(1,2),lit97));e->slot(0,4)=std::move(t270);}
{V t271=add(add(mul(get(e->slot(1,2),lit57),get(get(e->slot(1,1),lit1),lit14)),mul(get(e->slot(1,2),lit82),get(get(e->slot(1,1),lit1),lit35))),get(e->slot(1,2),lit98));e->slot(0,5)=std::move(t271);}
{V t272=add(add(add(mul(get(e->slot(1,2),lit58),get(get(e->slot(1,1),lit1),lit15)),mul(get(e->slot(1,2),lit59),V(0.12))),mul(get(e->slot(1,2),lit83),V(0.05))),get(e->slot(1,2),lit99));e->slot(0,6)=std::move(t272);}
{std::array<Ref,4> refs{Ref(e,0,3),Ref(e,0,4),Ref(e,0,5),Ref(e,0,6)};Args t273=call(e->slot(1,14),Args{e->slot(0,3),e->slot(0,4),e->slot(0,5),e->slot(0,6),e->slot(0,0)});refs[0].put(arg(t273,0));refs[1].put(arg(t273,1));refs[2].put(arg(t273,2));refs[3].put(arg(t273,3));}
{V t274=first(call(e->slot(1,3),Args{sub(sub(V(1.0),mul(get(e->slot(1,2),lit89),get(get(e->slot(1,1),lit1),lit39))),mul(get(e->slot(1,2),lit86),get(get(e->slot(1,1),lit1),lit46))),V(0.65),V(1.05)}));e->slot(0,7)=std::move(t274);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t275=mul(e->slot(0,3),e->slot(0,7));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t276=mul(e->slot(0,4),e->slot(0,7));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e,0,5)};V t277=mul(e->slot(0,5),e->slot(0,7));refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t278=mul(e->slot(0,6),e->slot(0,7));refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t279=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit51),first(call(e->slot(1,3),Args{e->slot(0,3),V(-num(get(get(e->slot(1,1),lit1),lit18))),get(get(e->slot(1,1),lit1),lit18)})),get(e->slot(1,2),lit78),e->slot(0,0)}));refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t280=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit52),first(call(e->slot(1,3),Args{e->slot(0,4),V(-num(get(get(e->slot(1,1),lit1),lit19))),get(get(e->slot(1,1),lit1),lit19)})),get(e->slot(1,2),lit79),e->slot(0,0)}));refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t281=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit53),first(call(e->slot(1,3),Args{e->slot(0,5),V(-num(get(get(e->slot(1,1),lit1),lit20))),get(get(e->slot(1,1),lit1),lit20)})),get(e->slot(1,2),lit80),e->slot(0,0)}));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t282=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit54),first(call(e->slot(1,3),Args{e->slot(0,6),V(-num(get(get(e->slot(1,1),lit1),lit21))),get(get(e->slot(1,1),lit1),lit21)})),get(e->slot(1,2),lit81),e->slot(0,0)}));refs[0].put(std::move(t282));}
{V t283=first(call(e->slot(1,3),Args{add(add(add(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit51)})),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit52)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit53)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit54)}))),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t283);}
{V t284=get(e->slot(1,2),lit61);e->slot(0,9)=std::move(t284);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t285=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit61),e->slot(0,8),V(0.12),e->slot(0,0)}));refs[0].put(std::move(t285));}
{V t286=first(call(e->slot(1,3),Args{mul(first(call(get(e->get("math"),lit130),Args{sub(e->slot(0,9),e->slot(0,8)),V(0.0)})),get(get(e->slot(1,1),lit1),lit23)),V(0.0),V(1.0)}));e->slot(0,10)=std::move(t286);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t287=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit62),e->slot(0,10),V(0.18),e->slot(0,0)}));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t288=lit247;refs[0].put(std::move(t288));}
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit248).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t289=get(e->slot(1,2),lit51);return !truth(t289)?V(0.0):t289;})()};
return Args{};}));
Ref(e->slot(0,1),lit249).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t290=get(e->slot(1,2),lit52);return !truth(t290)?V(0.0):t290;})()};
return Args{};}));
Ref(e->slot(0,1),lit250).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t291=get(e->slot(1,2),lit53);return !truth(t291)?V(0.0):t291;})()};
return Args{};}));
Ref(e->slot(0,1),lit251).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t292=get(e->slot(1,2),lit54);return !truth(t292)?V(0.0):t292;})()};
return Args{};}));
Ref(e->slot(0,1),lit252).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t293=get(e->slot(1,2),lit61);return !truth(t293)?V(0.0):t293;})()};
return Args{};}));
Ref(e->slot(0,1),lit253).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t294=get(e->slot(1,2),lit62);return !truth(t294)?V(0.0):t294;})()};
return Args{};}));
Ref(e->slot(0,1),lit254).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit255),Args{concat(lit256,concat(lit257,concat(lit258,concat(lit259,lit260)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit100)})),([&](){V t295=get(e->slot(1,2),lit102);return !truth(t295)?V(0.0):t295;})(),([&](){V t296=get(e->slot(1,2),lit51);return !truth(t296)?V(0.0):t296;})(),([&](){V t297=get(e->slot(1,2),lit52);return !truth(t297)?V(0.0):t297;})(),([&](){V t298=get(e->slot(1,2),lit53);return !truth(t298)?V(0.0):t298;})(),([&](){V t299=get(e->slot(1,2),lit54);return !truth(t299)?V(0.0):t299;})(),([&](){V t300=get(e->slot(1,2),lit61);return !truth(t300)?V(0.0):t300;})(),([&](){V t301=get(e->slot(1,2),lit62);return !truth(t301)?V(0.0):t301;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit67)})),([&](){V t302=get(e->slot(1,2),lit96);return !truth(t302)?V(0.0):t302;})(),([&](){V t303=get(e->slot(1,2),lit97);return !truth(t303)?V(0.0):t303;})(),([&](){V t304=get(e->slot(1,2),lit98);return !truth(t304)?V(0.0):t304;})(),([&](){V t305=get(e->slot(1,2),lit99);return !truth(t305)?V(0.0):t305;})(),([&](){V t306=([&](){V t307=get(e->slot(1,2),lit103);return truth(t307)?lit261:t307;})();return !truth(t306)?lit262:t306;})(),([&](){V t308=([&](){V t309=get(e->slot(1,2),lit104);return truth(t309)?lit261:t309;})();return !truth(t308)?lit262:t308;})(),([&](){V t310=([&](){V t311=get(e->slot(1,2),lit105);return truth(t311)?lit261:t311;})();return !truth(t310)?lit262:t310;})(),([&](){V t312=([&](){V t313=get(e->slot(1,2),lit106);return truth(t313)?lit261:t313;})();return !truth(t312)?lit262:t312;})(),([&](){V t314=([&](){V t315=get(e->slot(1,2),lit107);return truth(t315)?lit261:t315;})();return !truth(t314)?lit262:t314;})(),([&](){V t316=([&](){V t317=get(e->slot(1,2),lit108);return truth(t317)?lit261:t317;})();return !truth(t316)?lit262:t316;})(),([&](){V t318=([&](){V t319=get(e->slot(1,2),lit109);return truth(t319)?lit261:t319;})();return !truth(t318)?lit262:t318;})(),([&](){V t320=([&](){V t321=get(e->slot(1,2),lit110);return truth(t321)?lit261:t321;})();return !truth(t320)?lit262:t320;})(),([&](){V t322=([&](){V t323=get(e->slot(1,2),lit111);return truth(t323)?lit261:t323;})();return !truth(t322)?lit262:t322;})(),([&](){V t324=([&](){V t325=get(e->slot(1,2),lit112);return truth(t325)?lit261:t325;})();return !truth(t324)?lit262:t324;})(),([&](){V t326=([&](){V t327=get(e->slot(1,2),lit113);return truth(t327)?lit261:t327;})();return !truth(t326)?lit262:t326;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

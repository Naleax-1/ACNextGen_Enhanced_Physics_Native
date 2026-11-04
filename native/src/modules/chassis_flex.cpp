// Generated native C++ from pinned chassis_flex.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("brakeTemperatureInputContract");
static const V lit3("original");
static const V lit4("flexTau");
static const V lit5("rearTau");
static const V lit6("returnTau");
static const V lit7("frontCompliance");
static const V lit8("rearCompliance");
static const V lit9("bodyFrontMix");
static const V lit10("bodyRearMix");
static const V lit11("roadRollGain");
static const V lit12("roadPitchGain");
static const V lit13("roadYawGain");
static const V lit14("heaveGain");
static const V lit15("chassisRollGain");
static const V lit16("chassisPitchGain");
static const V lit17("chassisYawGain");
static const V lit18("virtualYawGain");
static const V lit19("virtualRollGain");
static const V lit20("virtualPitchGain");
static const V lit21("energyFlexGain");
static const V lit22("releaseReturnGain");
static const V lit23("maxBodySteer");
static const V lit24("maxFlexYaw");
static const V lit25("maxFlexRoll");
static const V lit26("maxFlexPitch");
static const V lit27("maxFlexHeave");
static const V lit28("maxDelay");
static const V lit29("bodyFlexSteerGain");
static const V lit30("bodyFlexYawGain");
static const V lit31("bodyFlexRollGain");
static const V lit32("bodyBendingPitchGain");
static const V lit33("bodyStiffSteerGain");
static const V lit34("bodyStiffFlexGain");
static const V lit35("bodyTauFlexGain");
static const V lit36("bodyTauStiffGain");
static const V lit37("minBodyFlexScale");
static const V lit38("maxBodyFlexScale");
static const V lit39("tireHopFlexGain");
static const V lit40("contactLossFlexGain");
static const V lit41("drivetrainTwistGain");
static const V lit42("brakeFlexGain");
static const V lit43("damageFlexGain");
static const V lit44("rollRootFlexGain");
static const V lit45("pitchRootFlexGain");
static const V lit46("heaveRootFlexGain");
static const V lit47("yawRootFlexGain");
static const V lit48("chassisEnergyDirectGain");
static const V lit49("chassisReleaseReturnGain");
static const V lit50("sprungPitchFlexGain");
static const V lit51("sprungRollFlexGain");
static const V lit52("suspensionStressFlexGain");
static const V lit53("brakeLockFlexGain");
static const V lit54("brakeThermalFlexGain");
static const V lit55("bodyRuntimePenaltyFlexGain");
static const V lit56("maxRootFlexAdd");
static const V lit57("rootReadInterval");
static const V lit58("debugStoreInterval");
static const V lit59("steer");
static const V lit60("front");
static const V lit61("rear");
static const V lit62("bodySteer");
static const V lit63("delay");
static const V lit64("flexYaw");
static const V lit65("flexRoll");
static const V lit66("flexPitch");
static const V lit67("flexHeave");
static const V lit68("roadRoll");
static const V lit69("roadPitch");
static const V lit70("roadHeave");
static const V lit71("roadYaw");
static const V lit72("chassisRoll");
static const V lit73("chassisPitch");
static const V lit74("chassisYaw");
static const V lit75("virtualYaw");
static const V lit76("virtualRoll");
static const V lit77("virtualPitch");
static const V lit78("chassisEnergy");
static const V lit79("chassisRelease");
static const V lit80("flexEnergy");
static const V lit81("flexRelease");
static const V lit82("bodyRigidity");
static const V lit83("bodyFlexFactor");
static const V lit84("bodyTorsionFactor");
static const V lit85("bodyBendingFactor");
static const V lit86("bodyDampingFactor");
static const V lit87("bodySteerScale");
static const V lit88("bodyYawScale");
static const V lit89("bodyRollScale");
static const V lit90("bodyPitchScale");
static const V lit91("bodyHeaveScale");
static const V lit92("bodyTauScale");
static const V lit93("tireHopAvg");
static const V lit94("contactLossAvg");
static const V lit95("driveTwist");
static const V lit96("brakeInput");
static const V lit97("brakeLockAvg");
static const V lit98("brakeThermalStress");
static const V lit99("suspensionStress");
static const V lit100("vehicleDamage");
static const V lit101("rootRollAdd");
static const V lit102("rootPitchAdd");
static const V lit103("rootHeaveAdd");
static const V lit104("rootYawAdd");
static const V lit105("sprungPitchCG");
static const V lit106("sprungRollCG");
static const V lit107("bodyRuntimePenalty");
static const V lit108("rootFlexYawAdd");
static const V lit109("rootFlexRollAdd");
static const V lit110("rootFlexPitchAdd");
static const V lit111("rootFlexHeaveAdd");
static const V lit112("rootSteerAdd");
static const V lit113("mode");
static const V lit114("STABLE");
static const V lit115("status");
static const V lit116("INIT");
static const V lit117("updateCount");
static const V lit118("bodyRigidityLinked");
static const V lit119("chassisLinked");
static const V lit120("virtualLinked");
static const V lit121("energyLinked");
static const V lit122("tireLinked");
static const V lit123("drivetrainLinked");
static const V lit124("brakeLinked");
static const V lit125("damageLinked");
static const V lit126("rollRootLinked");
static const V lit127("sprungLinked");
static const V lit128("suspensionLinked");
static const V lit129("thermalLinked");
static const V lit130("bodyRuntimeLinked");
static const V lit131("rootReadTimer");
static const V lit132("debugStoreTimer");
static const V lit133("debugStoreNow");
static const V lit134("state");
static const V lit135("debug");
static const V lit136("safeLoadRaw");
static const V lit137("safeStore");
static const V lit138("safeField");
static const V lit139("max");
static const V lit140("ngp_body_rigidity");
static const V lit141("ngp_body_flex_factor");
static const V lit142("ngp_body_torsion_factor");
static const V lit143("ngp_body_bending_factor");
static const V lit144("ngp_body_damping_factor");
static const V lit145("ngp_body_rigidity_update_count");
static const V lit146("ngp_brake_input");
static const V lit147("brake");
static const V lit148("current_wheel_brake_temperature_max_v1");
static const V lit149("wheels");
static const V lit150("huge");
static const V lit151("brakeTemperature");
static const V lit152("number");
static const V lit153("abs");
static const V lit154("Current chassis flex wheel brake temperature unavailable");
static const V lit155("brakeTemperatureInput");
static const V lit156("brakeTemperatureSource");
static const V lit157("CURRENT_WHEEL_BRAKE_TEMPERATURE_MAX");
static const V lit158("ngp_brake_temp_max");
static const V lit159("ngp_brake_max_temp");
static const V lit160("ngp_brake_temp_avg");
static const V lit161("ngp_brake_avg_temp");
static const V lit162("Invalid chassis flex brake temperature input contract");
static const V lit163("ngp_chassis_roll");
static const V lit164("ngp_chassis_pitch");
static const V lit165("ngp_chassis_yaw_hint");
static const V lit166("ngp_virtual_yaw");
static const V lit167("ngp_virtual_roll");
static const V lit168("ngp_virtual_pitch");
static const V lit169("ngp_chassis_energy");
static const V lit170("ngp_chassis_body_energy");
static const V lit171("ngp_chassis_release");
static const V lit172("ngp_chassis_body_release");
static const V lit173("ngp_body_roll_input");
static const V lit174("ngp_road_body_roll");
static const V lit175("ngp_body_pitch_input");
static const V lit176("ngp_road_body_pitch");
static const V lit177("ngp_body_heave_input");
static const V lit178("ngp_road_body_heave");
static const V lit179("ngp_body_yaw_hint");
static const V lit180("ngp_road_body_yaw");
static const V lit181("ngp_tire_hop_energy_");
static const V lit182("ngp_tire_hop_");
static const V lit183("ngp_tire_contact_loss_");
static const V lit184("ngp_tcr_contact_loss_");
static const V lit185("ngp_contact_quality_");
static const V lit186("ngp_shaft_twist");
static const V lit187("ngp_driveline_twist");
static const V lit188("ngp_driveline_windup_twist");
static const V lit189("ngp_condition_total");
static const V lit190("ngp_vehicle_condition_total");
static const V lit191("ngp_damage_chassis");
static const V lit192("ngp_chassis_roll_root_roll_add");
static const V lit193("ngp_chassis_roll_root_pitch_add");
static const V lit194("ngp_chassis_roll_root_heave_add");
static const V lit195("ngp_chassis_roll_root_yaw_add");
static const V lit196("ngp_pitch_cg");
static const V lit197("ngp_roll_cg");
static const V lit198("ngp_brake_lock_");
static const V lit199("ngp_susp_integrated_force_");
static const V lit200("ngp_susp_int_force_");
static const V lit201("ngp_susp_");
static const V lit202("ngp_damper_force_");
static const V lit203("min");
static const V lit204("ngp_body_runtime_flex_penalty");
static const V lit205("RELEASE");
static const V lit206("FLEX");
static const V lit207("LOADED");
static const V lit208("ngp_body_steer");
static const V lit209("ngp_chassis_flex_yaw");
static const V lit210("ngp_chassis_flex_roll");
static const V lit211("ngp_chassis_flex_pitch");
static const V lit212("ngp_chassis_flex_heave");
static const V lit213("ngp_chassis_flex_delay");
static const V lit214("ngp_chassis_flex_energy");
static const V lit215("ngp_chassis_flex_release");
static const V lit216("ngp_body_flex_yaw");
static const V lit217("ngp_body_flex_roll");
static const V lit218("ngp_body_flex_pitch");
static const V lit219("ngp_body_flex_heave");
static const V lit220("ngp_flex_energy");
static const V lit221("ngp_flex_release");
static const V lit222("ngp_chassis_flex_status");
static const V lit223("ngp_chassis_flex_update_count");
static const V lit224("ngp_chassis_flex_mode");
static const V lit225("ngp_chassis_flex_root_yaw_add");
static const V lit226("ngp_chassis_flex_root_roll_add");
static const V lit227("ngp_chassis_flex_root_pitch_add");
static const V lit228("ngp_chassis_flex_root_heave_add");
static const V lit229("ngp_chassis_flex_root_steer_add");
static const V lit230("ngp_chassis_flex_body_tau_scale");
static const V lit231("ngp_chassis_flex_body_linked");
static const V lit232("ngp_chassis_flex_chassis_linked");
static const V lit233("ngp_chassis_flex_virtual_linked");
static const V lit234("ngp_chassis_flex_energy_linked");
static const V lit235("ngp_chassis_flex_tire_linked");
static const V lit236("ngp_chassis_flex_drive_linked");
static const V lit237("ngp_chassis_flex_brake_linked");
static const V lit238("ngp_chassis_flex_damage_linked");
static const V lit239("ngp_chassis_flex_roll_root_linked");
static const V lit240("ngp_chassis_flex_sprung_linked");
static const V lit241("ngp_chassis_flex_suspension_linked");
static const V lit242("ngp_chassis_flex_thermal_linked");
static const V lit243("ngp_chassis_flex_body_runtime_linked");
static const V lit244("ngp_chassis_flex_brake_lock_avg");
static const V lit245("ngp_chassis_flex_thermal_stress");
static const V lit246("ngp_chassis_flex_suspension_stress");
static const V lit247("ngp_chassis_flex_body_runtime_penalty");
static const V lit248("ngp_chassis_flex_body_steer_scale");
static const V lit249("ngp_chassis_flex_body_yaw_scale");
static const V lit250("ngp_chassis_flex_body_roll_scale");
static const V lit251("ngp_chassis_flex_body_pitch_scale");
static const V lit252("ngp_chassis_flex_body_heave_scale");
static const V lit253("init");
static const V lit254("update");
static const V lit255("BAD DT");
static const V lit256("getCar");
static const V lit257("NO CAR");
static const V lit258("RUNNING");
static const V lit259("getBodySteer");
static const V lit260("getFlexYaw");
static const V lit261("getFlexRoll");
static const V lit262("getFlexPitch");
static const V lit263("getEnergy");
static const V lit264("getRelease");
static const V lit265("debugStr");
static const V lit266("format");
static const V lit267("Status %s / Count %.0f Mode %s\n");
static const V lit268("BodySteer %.3f Delay %.3f Energy %.3f Release %.3f\n");
static const V lit269("Flex Y/R/P/H %.3f %.3f %.3f %.3f\n");
static const V lit270("RootAdd Y/R/P/H/S %.3f %.3f %.3f %.3f %.3f\n");
static const V lit271("Links Body:%s Chassis:%s Virtual:%s Energy:%s Tire:%s Drive:%s Brake:%s Damage:%s RollRoot:%s Sprung:%s Susp:%s Therm:%s BodyRun:%s");
static const V lit272("OK");
static const V lit273("NIL");
V load_chassis_flex(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(20);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(0.12));set(z,lit5,V(0.18));set(z,lit6,V(0.22));set(z,lit7,V(0.65));set(z,lit8,V(0.35));set(z,lit9,V(0.7));set(z,lit10,V(0.3));set(z,lit11,V(0.24));set(z,lit12,V(0.18));set(z,lit13,V(0.22));set(z,lit14,V(0.12));set(z,lit15,V(0.3));set(z,lit16,V(0.22));set(z,lit17,V(0.28));set(z,lit18,V(0.25));set(z,lit19,V(0.18));set(z,lit20,V(0.16));set(z,lit21,V(0.3));set(z,lit22,V(0.4));set(z,lit23,V(1.0));set(z,lit24,V(1.0));set(z,lit25,V(1.0));set(z,lit26,V(1.0));set(z,lit27,V(1.0));set(z,lit28,V(1.0));set(z,lit29,V(0.08));set(z,lit30,V(0.12));set(z,lit31,V(0.1));set(z,lit32,V(0.08));set(z,lit33,V(0.04));set(z,lit34,V(0.05));set(z,lit35,V(0.35));set(z,lit36,V(0.1));set(z,lit37,V(0.86));set(z,lit38,V(1.18));set(z,lit39,V(0.08));set(z,lit40,V(0.06));set(z,lit41,V(0.08));set(z,lit42,V(0.04));set(z,lit43,V(0.14));set(z,lit44,V(0.18));set(z,lit45,V(0.14));set(z,lit46,V(0.1));set(z,lit47,V(0.16));set(z,lit48,V(0.2));set(z,lit49,V(0.16));set(z,lit50,V(0.12));set(z,lit51,V(0.12));set(z,lit52,V(0.1));set(z,lit53,V(0.06));set(z,lit54,V(0.05));set(z,lit55,V(0.18));set(z,lit56,V(0.35));set(z,lit57,V(0.05));set(z,lit58,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(1.0));set(z,lit83,V(1.0));set(z,lit84,V(1.0));set(z,lit85,V(1.0));set(z,lit86,V(1.0));set(z,lit87,V(1.0));set(z,lit88,V(1.0));set(z,lit89,V(1.0));set(z,lit90,V(1.0));set(z,lit91,V(1.0));set(z,lit92,V(1.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,lit114);set(z,lit115,lit116);set(z,lit117,V(0.0));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,V(false));set(z,lit121,V(false));set(z,lit122,V(false));set(z,lit123,V(false));set(z,lit124,V(false));set(z,lit125,V(false));set(z,lit126,V(false));set(z,lit127,V(false));set(z,lit128,V(false));set(z,lit129,V(false));set(z,lit130,V(false));set(z,lit131,V(999.0));set(z,lit132,V(999.0));set(z,lit133,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
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
{V t13=get(e->slot(0,0),lit136);e->slot(0,5)=std::move(t13);}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->slot(1,5),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return Args{([&](){V t16=([&](){V t17=first(call(e->get("tonumber"),Args{e->slot(0,2)}));return !truth(t17)?e->slot(0,1):t17;})();return !truth(t16)?V(0.0):t16;})()};
return Args{};});
{V t18=get(e->slot(0,0),lit137);e->slot(0,7)=std::move(t18);}
{V t19=get(e->slot(0,0),lit138);e->slot(0,8)=std::move(t19);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=([&](){V t21=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t21)?V(0.0):t21;})();refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t22=([&](){V t23=first(call(e->get("tonumber"),Args{e->slot(0,1)}));return !truth(t23)?V(0.0):t23;})();refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t24=first(call(get(e->get("math"),lit139),Args{([&](){V t25=first(call(e->get("tonumber"),Args{e->slot(0,2)}));return !truth(t25)?V(0.001):t25;})(),V(0.0001)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t26=first(call(get(e->get("math"),lit139),Args{([&](){V t27=first(call(e->get("tonumber"),Args{e->slot(0,3)}));return !truth(t27)?V(0.0):t27;})(),V(0.0)}));refs[0].put(std::move(t26));}
{V t28=first(call(e->slot(1,3),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t28);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t29=add(([&](){V t30=get(e->slot(1,2),lit132);return !truth(t30)?V(0.0):t30;})(),([&](){V t31=e->slot(0,0);return !truth(t31)?V(0.0):t31;})());refs[0].put(std::move(t29));}
if(truth(ge(get(e->slot(1,2),lit132),get(get(e->slot(1,1),lit1),lit58)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t32=V(0.0);refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t33=V(true);refs[0].put(std::move(t33));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t34=V(false);refs[0].put(std::move(t34));}
}
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t35=add(([&](){V t36=get(e->slot(1,2),lit131);return !truth(t36)?V(0.0):t36;})(),([&](){V t37=e->slot(0,0);return !truth(t37)?V(0.0):t37;})());refs[0].put(std::move(t35));}
if(truth(ge(get(e->slot(1,2),lit131),get(get(e->slot(1,1),lit1),lit57)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t38=V(0.0);refs[0].put(std::move(t38));}
return Args{V(true)};
}
return Args{V(false)};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;{V t39=first(call(e->slot(1,5),Args{lit140}));e->slot(0,0)=std::move(t39);}
{V t40=first(call(e->slot(1,5),Args{lit141}));e->slot(0,1)=std::move(t40);}
{V t41=first(call(e->slot(1,5),Args{lit142}));e->slot(0,2)=std::move(t41);}
{V t42=first(call(e->slot(1,5),Args{lit143}));e->slot(0,3)=std::move(t42);}
{V t43=first(call(e->slot(1,5),Args{lit144}));e->slot(0,4)=std::move(t43);}
{V t44=first(call(e->slot(1,5),Args{lit145}));e->slot(0,5)=std::move(t44);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t45=([&](){V t46=([&](){V t47=([&](){V t48=([&](){V t49=ne(e->slot(0,0),V());return !truth(t49)?ne(e->slot(0,1),V()):t49;})();return !truth(t48)?ne(e->slot(0,2),V()):t48;})();return !truth(t47)?ne(e->slot(0,3),V()):t47;})();return !truth(t46)?ne(e->slot(0,5),V()):t46;})();refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t50=first(call(e->slot(1,3),Args{([&](){V t51=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t51)?V(1.0):t51;})(),V(0.2),V(1.35)}));refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t52=first(call(e->slot(1,3),Args{([&](){V t53=first(call(e->get("tonumber"),Args{e->slot(0,1)}));return !truth(t53)?V(1.0):t53;})(),V(0.25),V(1.8)}));refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t54=first(call(e->slot(1,3),Args{([&](){V t55=first(call(e->get("tonumber"),Args{e->slot(0,2)}));return !truth(t55)?V(1.0):t55;})(),V(0.35),V(2.0)}));refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t56=first(call(e->slot(1,3),Args{([&](){V t57=first(call(e->get("tonumber"),Args{e->slot(0,3)}));return !truth(t57)?V(1.0):t57;})(),V(0.35),V(2.0)}));refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t58=first(call(e->slot(1,3),Args{([&](){V t59=first(call(e->get("tonumber"),Args{e->slot(0,4)}));return !truth(t59)?V(1.0):t59;})(),V(0.5),V(1.8)}));refs[0].put(std::move(t58));}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t60=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t60);}
if(truth(V(!truth(get(e->slot(1,2),lit118))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t61=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit87),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t62=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit88),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t62));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t63=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit89),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t64=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit90),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t65=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit91),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t66=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit92),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t66));}
return Args{};
}
{V t67=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit82),V(0.2),V(1.35)}));e->slot(0,2)=std::move(t67);}
{V t68=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit83),V(0.25),V(1.8)}));e->slot(0,3)=std::move(t68);}
{V t69=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit84),V(0.35),V(2.0)}));e->slot(0,4)=std::move(t69);}
{V t70=first(call(e->slot(1,3),Args{get(e->slot(1,2),lit85),V(0.35),V(2.0)}));e->slot(0,5)=std::move(t70);}
{V t71=first(call(e->slot(1,3),Args{sub(e->slot(0,3),V(1.0)),V(0.0),V(0.8)}));e->slot(0,6)=std::move(t71);}
{V t72=first(call(e->slot(1,3),Args{sub(e->slot(0,2),V(1.0)),V(0.0),V(0.35)}));e->slot(0,7)=std::move(t72);}
{V t73=first(call(e->slot(1,3),Args{sub(e->slot(0,4),V(1.0)),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t73);}
{V t74=first(call(e->slot(1,3),Args{sub(e->slot(0,5),V(1.0)),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t74);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t75=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit87),first(call(e->slot(1,3),Args{sub(add(V(1.0),mul(e->slot(0,6),get(e->slot(0,1),lit29))),mul(e->slot(0,7),get(e->slot(0,1),lit33))),get(e->slot(0,1),lit37),get(e->slot(0,1),lit38)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t76=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit88),first(call(e->slot(1,3),Args{sub(add(add(V(1.0),mul(e->slot(0,8),get(e->slot(0,1),lit30))),mul(e->slot(0,6),V(0.04))),mul(e->slot(0,7),get(e->slot(0,1),lit34))),get(e->slot(0,1),lit37),get(e->slot(0,1),lit38)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t77=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit89),first(call(e->slot(1,3),Args{sub(add(add(V(1.0),mul(e->slot(0,8),get(e->slot(0,1),lit31))),mul(e->slot(0,6),V(0.03))),mul(e->slot(0,7),get(e->slot(0,1),lit34))),get(e->slot(0,1),lit37),get(e->slot(0,1),lit38)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t78=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit90),first(call(e->slot(1,3),Args{sub(add(add(V(1.0),mul(e->slot(0,9),get(e->slot(0,1),lit32))),mul(e->slot(0,6),V(0.02))),mul(e->slot(0,7),get(e->slot(0,1),lit34))),get(e->slot(0,1),lit37),get(e->slot(0,1),lit38)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t79=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit91),first(call(e->slot(1,3),Args{sub(add(add(V(1.0),mul(e->slot(0,6),V(0.06))),mul(e->slot(0,9),V(0.03))),mul(e->slot(0,7),V(0.03))),get(e->slot(0,1),lit37),get(e->slot(0,1),lit38)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t80=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit92),first(call(e->slot(1,3),Args{sub(add(V(1.0),mul(e->slot(0,6),get(e->slot(0,1),lit35))),mul(e->slot(0,7),get(e->slot(0,1),lit36))),V(0.9),V(1.3)})),V(0.1),e->slot(0,0)}));refs[0].put(std::move(t80));}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t81=first(call(e->slot(1,3),Args{([&](){V t82=first(call(e->get("tonumber"),call(e->slot(1,8),Args{e->slot(0,0),lit59,V(0.0)})));return !truth(t82)?V(0.0):t82;})(),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t83=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{lit146},call(e->slot(1,8),Args{e->slot(0,0),lit147,V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t83));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t84=get(get(e->slot(1,1),lit1),lit2);e->slot(0,1)=std::move(t84);}
if(truth(eq(e->slot(0,1),lit148))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t85=([&](){V t86=e->slot(1,0);return truth(t86)?get(e->slot(1,0),lit149):t86;})();e->slot(0,0)=std::move(t85);}
{V t87=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t87);}
{V t88=V(-num(get(e->get("math"),lit150)));e->slot(0,2)=std::move(t88);}
{double t89=num(V(0.0)),t90=num(V(3.0)),t91=num(V(1.0));for(double t92=t89;(t91>0?t92<=t90:t92>=t90);t92+=t91){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t92);{V t93=([&](){V t94=e->slot(1,0);return truth(t94)?get(e->slot(1,0),e->slot(0,0)):t94;})();e->slot(0,1)=std::move(t93);}
{V t95=([&](){V t96=e->slot(0,1);return truth(t96)?get(e->slot(0,1),lit151):t96;})();e->slot(0,2)=std::move(t95);}
if(truth(([&](){V t97=([&](){V t98=([&](){V t99=ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit152);return !truth(t99)?ne(e->slot(0,2),e->slot(0,2)):t99;})();return !truth(t98)?eq(first(call(get(e->get("math"),lit153),Args{e->slot(0,2)})),get(e->get("math"),lit150)):t98;})();return !truth(t97)?lt(e->slot(0,2),V(-num(V(273.15)))):t97;})())){call(e->get("error"),Args{lit154});
}
{std::array<Ref,1> refs{Ref(e->slot(1,1),e->slot(0,0))};V t100=e->slot(0,2);refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t101=first(call(get(e->get("math"),lit139),Args{e->slot(1,2),e->slot(0,2)}));refs[0].put(std::move(t101));}
}}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit155)};V t102=e->slot(0,1);refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit156)};V t103=lit157;refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit129)};V t104=V(true);refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit98)};V t105=first(call(e->slot(2,3),Args{divv(sub(e->slot(0,2),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t105));}
}else if(truth(eq(e->slot(0,1),lit3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t106=([&](){V t107=([&](){V t108=([&](){V t109=first(call(e->slot(2,5),Args{lit158}));return !truth(t109)?first(call(e->slot(2,5),Args{lit159})):t109;})();return !truth(t108)?first(call(e->slot(2,5),Args{lit160})):t108;})();return !truth(t107)?first(call(e->slot(2,5),Args{lit161})):t107;})();e->slot(0,0)=std::move(t106);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit129)};V t110=ne(e->slot(0,0),V());refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit98)};V t111=first(call(e->slot(2,3),Args{divv(sub(([&](){V t112=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t112)?V(25.0):t112;})(),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t111));}
}else{call(e->get("error"),Args{lit162});
}

return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,26);auto e=&storage;e->slot(0,0)=arg(a,0);{V t113=first(call(e->slot(1,5),Args{lit163}));e->slot(0,1)=std::move(t113);}
{V t114=first(call(e->slot(1,5),Args{lit164}));e->slot(0,2)=std::move(t114);}
{V t115=first(call(e->slot(1,5),Args{lit165}));e->slot(0,3)=std::move(t115);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit119)};V t116=([&](){V t117=([&](){V t118=ne(e->slot(0,1),V());return !truth(t118)?ne(e->slot(0,2),V()):t118;})();return !truth(t117)?ne(e->slot(0,3),V()):t117;})();refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t119=first(call(e->slot(1,3),Args{([&](){V t120=first(call(e->get("tonumber"),Args{e->slot(0,1)}));return !truth(t120)?V(0.0):t120;})(),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t119));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t121=first(call(e->slot(1,3),Args{([&](){V t122=first(call(e->get("tonumber"),Args{e->slot(0,2)}));return !truth(t122)?V(0.0):t122;})(),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t123=first(call(e->slot(1,3),Args{([&](){V t124=first(call(e->get("tonumber"),Args{e->slot(0,3)}));return !truth(t124)?V(0.0):t124;})(),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t123));}
{V t125=first(call(e->slot(1,5),Args{lit166}));e->slot(0,4)=std::move(t125);}
{V t126=first(call(e->slot(1,5),Args{lit167}));e->slot(0,5)=std::move(t126);}
{V t127=first(call(e->slot(1,5),Args{lit168}));e->slot(0,6)=std::move(t127);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t128=([&](){V t129=([&](){V t130=ne(e->slot(0,4),V());return !truth(t130)?ne(e->slot(0,5),V()):t130;})();return !truth(t129)?ne(e->slot(0,6),V()):t129;})();refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t131=first(call(e->slot(1,3),Args{([&](){V t132=first(call(e->get("tonumber"),Args{e->slot(0,4)}));return !truth(t132)?V(0.0):t132;})(),V(-num(V(3.0))),V(3.0)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t133=first(call(e->slot(1,3),Args{([&](){V t134=first(call(e->get("tonumber"),Args{e->slot(0,5)}));return !truth(t134)?V(0.0):t134;})(),V(-num(V(3.0))),V(3.0)}));refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t135=first(call(e->slot(1,3),Args{([&](){V t136=first(call(e->get("tonumber"),Args{e->slot(0,6)}));return !truth(t136)?V(0.0):t136;})(),V(-num(V(3.0))),V(3.0)}));refs[0].put(std::move(t135));}
{V t137=([&](){V t138=first(call(e->slot(1,5),Args{lit169}));return !truth(t138)?first(call(e->slot(1,5),Args{lit170})):t138;})();e->slot(0,7)=std::move(t137);}
{V t139=([&](){V t140=first(call(e->slot(1,5),Args{lit171}));return !truth(t140)?first(call(e->slot(1,5),Args{lit172})):t140;})();e->slot(0,8)=std::move(t139);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit121)};V t141=([&](){V t142=ne(e->slot(0,7),V());return !truth(t142)?ne(e->slot(0,8),V()):t142;})();refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t143=first(call(e->slot(1,3),Args{([&](){V t144=first(call(e->get("tonumber"),Args{e->slot(0,7)}));return !truth(t144)?V(0.0):t144;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t143));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t145=first(call(e->slot(1,3),Args{([&](){V t146=first(call(e->get("tonumber"),Args{e->slot(0,8)}));return !truth(t146)?V(0.0):t146;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t145));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t147=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{lit173},call(e->slot(1,6),Args{lit174,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t148=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{lit175},call(e->slot(1,6),Args{lit176,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t149=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{lit177},call(e->slot(1,6),Args{lit178,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t150=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{lit179},call(e->slot(1,6),Args{lit180,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t150));}
{V t151=V(0.0);e->slot(0,9)=std::move(t151);}
{V t152=V(0.0);e->slot(0,10)=std::move(t152);}
{V t153=V(false);e->slot(0,11)=std::move(t153);}
{double t154=num(V(0.0)),t155=num(V(3.0)),t156=num(V(1.0));for(double t157=t154;(t156>0?t157<=t155:t157>=t155);t157+=t156){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t157);{V t158=([&](){V t159=first(call(e->slot(2,5),Args{concat(lit181,e->slot(0,0))}));return !truth(t159)?first(call(e->slot(2,5),Args{concat(lit182,e->slot(0,0))})):t159;})();e->slot(0,1)=std::move(t158);}
{V t160=([&](){V t161=([&](){V t162=first(call(e->slot(2,5),Args{concat(lit183,e->slot(0,0))}));return !truth(t162)?first(call(e->slot(2,5),Args{concat(lit184,e->slot(0,0))})):t162;})();return !truth(t161)?sub(V(1.0),first(call(e->slot(2,6),Args{concat(lit185,e->slot(0,0)),V(1.0)}))):t161;})();e->slot(0,2)=std::move(t160);}
if(truth(([&](){V t163=ne(e->slot(0,1),V());return !truth(t163)?ne(e->slot(0,2),V()):t163;})())){{std::array<Ref,1> refs{Ref(e,1,11)};V t164=V(true);refs[0].put(std::move(t164));}
}
{std::array<Ref,1> refs{Ref(e,1,9)};V t165=add(e->slot(1,9),first(call(e->slot(2,3),Args{([&](){V t166=first(call(e->get("tonumber"),Args{e->slot(0,1)}));return !truth(t166)?V(0.0):t166;})(),V(0.0),V(1.0)})));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t167=add(e->slot(1,10),first(call(e->slot(2,3),Args{([&](){V t168=first(call(e->get("tonumber"),Args{e->slot(0,2)}));return !truth(t168)?V(0.0):t168;})(),V(0.0),V(1.0)})));refs[0].put(std::move(t167));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t169=e->slot(0,11);refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t170=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t171=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t171));}
{V t172=([&](){V t173=([&](){V t174=first(call(e->slot(1,5),Args{lit186}));return !truth(t174)?first(call(e->slot(1,5),Args{lit187})):t174;})();return !truth(t173)?first(call(e->slot(1,5),Args{lit188})):t173;})();e->slot(0,12)=std::move(t172);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit123)};V t175=ne(e->slot(0,12),V());refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t176=first(call(e->slot(1,3),Args{([&](){V t177=first(call(e->get("tonumber"),Args{e->slot(0,12)}));return !truth(t177)?V(0.0):t177;})(),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t176));}
{V t178=([&](){V t179=([&](){V t180=first(call(e->slot(1,5),Args{lit189}));return !truth(t180)?first(call(e->slot(1,5),Args{lit190})):t180;})();return !truth(t179)?first(call(e->slot(1,5),Args{lit191})):t179;})();e->slot(0,13)=std::move(t178);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit125)};V t181=ne(e->slot(0,13),V());refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t182=first(call(e->slot(1,3),Args{([&](){V t183=first(call(e->get("tonumber"),Args{e->slot(0,13)}));return !truth(t183)?V(0.0):t183;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t182));}
{V t184=first(call(e->slot(1,5),Args{lit192}));e->slot(0,14)=std::move(t184);}
{V t185=first(call(e->slot(1,5),Args{lit193}));e->slot(0,15)=std::move(t185);}
{V t186=first(call(e->slot(1,5),Args{lit194}));e->slot(0,16)=std::move(t186);}
{V t187=first(call(e->slot(1,5),Args{lit195}));e->slot(0,17)=std::move(t187);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t188=([&](){V t189=([&](){V t190=([&](){V t191=ne(e->slot(0,14),V());return !truth(t191)?ne(e->slot(0,15),V()):t191;})();return !truth(t190)?ne(e->slot(0,16),V()):t190;})();return !truth(t189)?ne(e->slot(0,17),V()):t189;})();refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t192=first(call(e->slot(1,3),Args{([&](){V t193=first(call(e->get("tonumber"),Args{e->slot(0,14)}));return !truth(t193)?V(0.0):t193;})(),V(-num(V(0.35))),V(0.35)}));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t194=first(call(e->slot(1,3),Args{([&](){V t195=first(call(e->get("tonumber"),Args{e->slot(0,15)}));return !truth(t195)?V(0.0):t195;})(),V(-num(V(0.35))),V(0.35)}));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t196=first(call(e->slot(1,3),Args{([&](){V t197=first(call(e->get("tonumber"),Args{e->slot(0,16)}));return !truth(t197)?V(0.0):t197;})(),V(-num(V(0.35))),V(0.35)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t198=first(call(e->slot(1,3),Args{([&](){V t199=first(call(e->get("tonumber"),Args{e->slot(0,17)}));return !truth(t199)?V(0.0):t199;})(),V(-num(V(0.35))),V(0.35)}));refs[0].put(std::move(t198));}
{V t200=first(call(e->slot(1,5),Args{lit196}));e->slot(0,18)=std::move(t200);}
{V t201=first(call(e->slot(1,5),Args{lit197}));e->slot(0,19)=std::move(t201);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit127)};V t202=([&](){V t203=ne(e->slot(0,18),V());return !truth(t203)?ne(e->slot(0,19),V()):t203;})();refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t204=first(call(e->slot(1,3),Args{([&](){V t205=first(call(e->get("tonumber"),Args{e->slot(0,18)}));return !truth(t205)?V(0.0):t205;})(),V(-num(V(0.12))),V(0.12)}));refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t206=first(call(e->slot(1,3),Args{([&](){V t207=first(call(e->get("tonumber"),Args{e->slot(0,19)}));return !truth(t207)?V(0.0):t207;})(),V(-num(V(0.12))),V(0.12)}));refs[0].put(std::move(t206));}
{V t208=V(0.0);e->slot(0,20)=std::move(t208);}
{V t209=V(false);e->slot(0,21)=std::move(t209);}
{double t210=num(V(0.0)),t211=num(V(3.0)),t212=num(V(1.0));for(double t213=t210;(t212>0?t213<=t211:t213>=t211);t213+=t212){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t213);{V t214=first(call(e->slot(2,5),Args{concat(lit198,e->slot(0,0))}));e->slot(0,1)=std::move(t214);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,21)};V t215=V(true);refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(e,1,20)};V t216=add(e->slot(1,20),first(call(e->slot(2,3),Args{([&](){V t217=first(call(e->get("tonumber"),Args{e->slot(0,1)}));return !truth(t217)?V(0.0):t217;})(),V(0.0),V(1.0)})));refs[0].put(std::move(t216));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t218=mul(e->slot(0,20),V(0.25));refs[0].put(std::move(t218));}
{V t219=first(call(e->slot(1,5),Args{lit146}));e->slot(0,22)=std::move(t219);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t220=([&](){V t221=ne(e->slot(0,22),V());return !truth(t221)?e->slot(0,21):t221;})();refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t222=first(call(e->slot(1,3),Args{([&](){V t223=([&](){V t224=first(call(e->get("tonumber"),Args{e->slot(0,22)}));return !truth(t224)?get(e->slot(1,2),lit96):t224;})();return !truth(t223)?V(0.0):t223;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t222));}
call(e->slot(1,15),Args{e->slot(0,0)});
{V t225=V(0.0);e->slot(0,23)=std::move(t225);}
{V t226=V(false);e->slot(0,24)=std::move(t226);}
{double t227=num(V(0.0)),t228=num(V(3.0)),t229=num(V(1.0));for(double t230=t227;(t229>0?t230<=t228:t230>=t228);t230+=t229){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t230);{V t231=([&](){V t232=([&](){V t233=([&](){V t234=first(call(e->slot(2,5),Args{concat(lit199,e->slot(0,0))}));return !truth(t234)?first(call(e->slot(2,5),Args{concat(lit200,e->slot(0,0))})):t234;})();return !truth(t233)?first(call(e->slot(2,5),Args{concat(lit201,e->slot(0,0))})):t233;})();return !truth(t232)?first(call(e->slot(2,5),Args{concat(lit202,e->slot(0,0))})):t232;})();e->slot(0,1)=std::move(t231);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,24)};V t235=V(true);refs[0].put(std::move(t235));}
}
{std::array<Ref,1> refs{Ref(e,1,23)};V t236=add(e->slot(1,23),first(call(get(e->get("math"),lit203),Args{divv(first(call(e->slot(2,4),Args{([&](){V t237=first(call(e->get("tonumber"),Args{e->slot(0,1)}));return !truth(t237)?V(0.0):t237;})()})),V(25000.0)),V(1.0)})));refs[0].put(std::move(t236));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t238=e->slot(0,24);refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t239=first(call(e->slot(1,3),Args{mul(e->slot(0,23),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t239));}
{V t240=first(call(e->slot(1,5),Args{lit204}));e->slot(0,25)=std::move(t240);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit130)};V t241=ne(e->slot(0,25),V());refs[0].put(std::move(t241));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t242=first(call(e->slot(1,3),Args{([&](){V t243=first(call(e->get("tonumber"),Args{e->slot(0,25)}));return !truth(t243)?V(0.0):t243;})(),V(0.0),V(0.55)}));refs[0].put(std::move(t242));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t244=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t244);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t245=first(call(e->slot(1,3),Args{add(add(add(mul(get(e->slot(1,2),lit104),get(e->slot(0,0),lit47)),mul(get(e->slot(1,2),lit101),V(0.04))),mul(get(e->slot(1,2),lit97),get(e->slot(0,0),lit53))),mul(get(e->slot(1,2),lit107),get(e->slot(0,0),lit55))),V(-num(get(e->slot(0,0),lit56))),get(e->slot(0,0),lit56)}));refs[0].put(std::move(t245));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t246=first(call(e->slot(1,3),Args{add(add(add(mul(get(e->slot(1,2),lit101),get(e->slot(0,0),lit44)),mul(get(e->slot(1,2),lit106),get(e->slot(0,0),lit51))),mul(get(e->slot(1,2),lit99),get(e->slot(0,0),lit52))),mul(get(e->slot(1,2),lit98),get(e->slot(0,0),lit54))),V(-num(get(e->slot(0,0),lit56))),get(e->slot(0,0),lit56)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t247=first(call(e->slot(1,3),Args{add(add(add(add(mul(get(e->slot(1,2),lit102),get(e->slot(0,0),lit45)),mul(get(e->slot(1,2),lit105),get(e->slot(0,0),lit50))),mul(get(e->slot(1,2),lit96),get(e->slot(0,0),lit42))),mul(get(e->slot(1,2),lit97),get(e->slot(0,0),lit53))),mul(get(e->slot(1,2),lit98),get(e->slot(0,0),lit54))),V(-num(get(e->slot(0,0),lit56))),get(e->slot(0,0),lit56)}));refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t248=first(call(e->slot(1,3),Args{add(add(mul(get(e->slot(1,2),lit103),get(e->slot(0,0),lit46)),mul(get(e->slot(1,2),lit99),get(e->slot(0,0),lit52))),mul(get(e->slot(1,2),lit93),get(e->slot(0,0),lit39))),V(0.0),get(e->slot(0,0),lit56)}));refs[0].put(std::move(t248));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t249=first(call(e->slot(1,3),Args{add(mul(get(e->slot(1,2),lit104),V(0.08)),mul(get(e->slot(1,2),lit101),V(0.04))),V(-num(get(e->slot(0,0),lit56))),get(e->slot(0,0),lit56)}));refs[0].put(std::move(t249));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(lt(get(e->slot(1,2),lit80),V(0.05)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t250=lit114;refs[0].put(std::move(t250));}
}else if(truth(gt(get(e->slot(1,2),lit81),V(0.08)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t251=lit205;refs[0].put(std::move(t251));}
}else if(truth(lt(get(e->slot(1,2),lit80),V(0.3)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t252=lit206;refs[0].put(std::move(t252));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t253=lit207;refs[0].put(std::move(t253));}
}


return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,7),Args{lit208,get(e->slot(1,2),lit62)});
call(e->slot(1,7),Args{lit209,get(e->slot(1,2),lit64)});
call(e->slot(1,7),Args{lit210,get(e->slot(1,2),lit65)});
call(e->slot(1,7),Args{lit211,get(e->slot(1,2),lit66)});
call(e->slot(1,7),Args{lit212,get(e->slot(1,2),lit67)});
call(e->slot(1,7),Args{lit213,get(e->slot(1,2),lit63)});
call(e->slot(1,7),Args{lit214,get(e->slot(1,2),lit80)});
call(e->slot(1,7),Args{lit215,get(e->slot(1,2),lit81)});
call(e->slot(1,7),Args{lit216,get(e->slot(1,2),lit64)});
call(e->slot(1,7),Args{lit217,get(e->slot(1,2),lit65)});
call(e->slot(1,7),Args{lit218,get(e->slot(1,2),lit66)});
call(e->slot(1,7),Args{lit219,get(e->slot(1,2),lit67)});
call(e->slot(1,7),Args{lit220,get(e->slot(1,2),lit80)});
call(e->slot(1,7),Args{lit221,get(e->slot(1,2),lit81)});
call(e->slot(1,7),Args{lit222,get(e->slot(1,2),lit115)});
call(e->slot(1,7),Args{lit223,get(e->slot(1,2),lit117)});
call(e->slot(1,7),Args{lit224,get(e->slot(1,2),lit113)});
call(e->slot(1,7),Args{lit225,get(e->slot(1,2),lit108)});
call(e->slot(1,7),Args{lit226,get(e->slot(1,2),lit109)});
call(e->slot(1,7),Args{lit227,get(e->slot(1,2),lit110)});
call(e->slot(1,7),Args{lit228,get(e->slot(1,2),lit111)});
call(e->slot(1,7),Args{lit229,get(e->slot(1,2),lit112)});
call(e->slot(1,7),Args{lit230,get(e->slot(1,2),lit92)});
if(truth(V(!truth(get(e->slot(1,2),lit133))))){return Args{};
}
call(e->slot(1,7),Args{lit231,([&](){V t254=([&](){V t255=get(e->slot(1,2),lit118);return truth(t255)?V(1.0):t255;})();return !truth(t254)?V(0.0):t254;})()});
call(e->slot(1,7),Args{lit232,([&](){V t256=([&](){V t257=get(e->slot(1,2),lit119);return truth(t257)?V(1.0):t257;})();return !truth(t256)?V(0.0):t256;})()});
call(e->slot(1,7),Args{lit233,([&](){V t258=([&](){V t259=get(e->slot(1,2),lit120);return truth(t259)?V(1.0):t259;})();return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,7),Args{lit234,([&](){V t260=([&](){V t261=get(e->slot(1,2),lit121);return truth(t261)?V(1.0):t261;})();return !truth(t260)?V(0.0):t260;})()});
call(e->slot(1,7),Args{lit235,([&](){V t262=([&](){V t263=get(e->slot(1,2),lit122);return truth(t263)?V(1.0):t263;})();return !truth(t262)?V(0.0):t262;})()});
call(e->slot(1,7),Args{lit236,([&](){V t264=([&](){V t265=get(e->slot(1,2),lit123);return truth(t265)?V(1.0):t265;})();return !truth(t264)?V(0.0):t264;})()});
call(e->slot(1,7),Args{lit237,([&](){V t266=([&](){V t267=get(e->slot(1,2),lit124);return truth(t267)?V(1.0):t267;})();return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,7),Args{lit238,([&](){V t268=([&](){V t269=get(e->slot(1,2),lit125);return truth(t269)?V(1.0):t269;})();return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,7),Args{lit239,([&](){V t270=([&](){V t271=get(e->slot(1,2),lit126);return truth(t271)?V(1.0):t271;})();return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,7),Args{lit240,([&](){V t272=([&](){V t273=get(e->slot(1,2),lit127);return truth(t273)?V(1.0):t273;})();return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,7),Args{lit241,([&](){V t274=([&](){V t275=get(e->slot(1,2),lit128);return truth(t275)?V(1.0):t275;})();return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,7),Args{lit242,([&](){V t276=([&](){V t277=get(e->slot(1,2),lit129);return truth(t277)?V(1.0):t277;})();return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,7),Args{lit243,([&](){V t278=([&](){V t279=get(e->slot(1,2),lit130);return truth(t279)?V(1.0):t279;})();return !truth(t278)?V(0.0):t278;})()});
call(e->slot(1,7),Args{lit244,get(e->slot(1,2),lit97)});
call(e->slot(1,7),Args{lit245,get(e->slot(1,2),lit98)});
call(e->slot(1,7),Args{lit246,get(e->slot(1,2),lit99)});
call(e->slot(1,7),Args{lit247,get(e->slot(1,2),lit107)});
call(e->slot(1,7),Args{lit248,get(e->slot(1,2),lit87)});
call(e->slot(1,7),Args{lit249,get(e->slot(1,2),lit88)});
call(e->slot(1,7),Args{lit250,get(e->slot(1,2),lit89)});
call(e->slot(1,7),Args{lit251,get(e->slot(1,2),lit90)});
call(e->slot(1,7),Args{lit252,get(e->slot(1,2),lit91)});
return Args{};});
Ref(e->slot(0,1),lit253).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t280=lit116;refs[0].put(std::move(t280));}
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit254).put(native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,14);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t281=add(([&](){V t282=get(e->slot(1,2),lit117);return !truth(t282)?V(0.0):t282;})(),V(1.0));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t283=([&](){V t284=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t284)?V(0.0):t284;})();refs[0].put(std::move(t283));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t285=lit255;refs[0].put(std::move(t285));}
call(e->slot(1,19),Args{});
return Args{};
}
call(e->slot(1,10),Args{e->slot(0,0)});
if(truth(([&](){V t286=([&](){V t287=V(!truth(e->slot(0,1)));return truth(t287)?e->get("ac"):t287;})();return truth(t286)?get(e->get("ac"),lit256):t286;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t288=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit256),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t288,0);e->slot(0,1)=arg(t288,1);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,1,1)};V t289=e->slot(0,1);refs[0].put(std::move(t289));}
}
}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t290=lit257;refs[0].put(std::move(t290));}
call(e->slot(1,12),Args{});
if(truth(first(call(e->slot(1,11),Args{e->slot(0,0)})))){call(e->slot(1,16),Args{e->slot(0,1)});
call(e->slot(1,17),Args{});
}
call(e->slot(1,13),Args{e->slot(0,0)});
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t291=lit258;refs[0].put(std::move(t291));}
call(e->slot(1,14),Args{e->slot(0,1)});
call(e->slot(1,12),Args{});
if(truth(first(call(e->slot(1,11),Args{e->slot(0,0)})))){call(e->slot(1,16),Args{e->slot(0,1)});
call(e->slot(1,17),Args{});
}else if(truth(ne(get(get(e->slot(1,1),lit1),lit2),lit3))){call(e->slot(1,15),Args{e->slot(0,1)});
call(e->slot(1,17),Args{});
}

call(e->slot(1,13),Args{e->slot(0,0)});
{V t292=get(e->slot(1,1),lit1);e->slot(0,3)=std::move(t292);}
{V t293=add(V(1.0),mul(get(e->slot(1,2),lit100),get(e->slot(0,3),lit43)));e->slot(0,4)=std::move(t293);}
{V t294=([&](){V t295=get(e->slot(1,2),lit92);return !truth(t295)?V(1.0):t295;})();e->slot(0,5)=std::move(t294);}
{V t296=mul(mul(add(add(add(add(add(mul(get(e->slot(1,2),lit59),get(e->slot(0,3),lit7)),get(e->slot(1,2),lit112)),mul(get(e->slot(1,2),lit71),get(e->slot(0,3),lit13))),mul(get(e->slot(1,2),lit74),get(e->slot(0,3),lit17))),mul(get(e->slot(1,2),lit75),get(e->slot(0,3),lit18))),get(e->slot(1,2),lit108)),get(e->slot(1,2),lit87)),e->slot(0,4));e->slot(0,6)=std::move(t296);}
{V t297=mul(mul(mul(add(add(add(add(mul(get(e->slot(1,2),lit71),get(e->slot(0,3),lit13)),mul(get(e->slot(1,2),lit74),get(e->slot(0,3),lit17))),mul(get(e->slot(1,2),lit75),get(e->slot(0,3),lit18))),get(e->slot(1,2),lit108)),mul(get(e->slot(1,2),lit95),get(e->slot(0,3),lit41))),get(e->slot(0,3),lit8)),get(e->slot(1,2),lit88)),e->slot(0,4));e->slot(0,7)=std::move(t297);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t298=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit60),e->slot(0,6),mul(get(e->slot(0,3),lit4),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t299=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit61),e->slot(0,7),mul(get(e->slot(0,3),lit5),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t300=first(call(e->slot(1,3),Args{add(mul(get(e->slot(1,2),lit60),get(e->slot(0,3),lit9)),mul(get(e->slot(1,2),lit61),get(e->slot(0,3),lit10))),V(-num(get(e->slot(0,3),lit23))),get(e->slot(0,3),lit23)}));refs[0].put(std::move(t300));}
{V t301=mul(mul(add(add(add(add(mul(get(e->slot(1,2),lit71),get(e->slot(0,3),lit13)),mul(get(e->slot(1,2),lit74),get(e->slot(0,3),lit17))),mul(get(e->slot(1,2),lit75),get(e->slot(0,3),lit18))),mul(get(e->slot(1,2),lit94),get(e->slot(0,3),lit40))),get(e->slot(1,2),lit108)),get(e->slot(1,2),lit88)),e->slot(0,4));e->slot(0,8)=std::move(t301);}
{V t302=mul(mul(add(add(add(add(mul(get(e->slot(1,2),lit68),get(e->slot(0,3),lit11)),mul(get(e->slot(1,2),lit72),get(e->slot(0,3),lit15))),mul(get(e->slot(1,2),lit76),get(e->slot(0,3),lit19))),mul(get(e->slot(1,2),lit93),get(e->slot(0,3),lit39))),get(e->slot(1,2),lit109)),get(e->slot(1,2),lit89)),e->slot(0,4));e->slot(0,9)=std::move(t302);}
{V t303=mul(mul(add(add(add(add(mul(get(e->slot(1,2),lit69),get(e->slot(0,3),lit12)),mul(get(e->slot(1,2),lit73),get(e->slot(0,3),lit16))),mul(get(e->slot(1,2),lit77),get(e->slot(0,3),lit20))),mul(get(e->slot(1,2),lit96),get(e->slot(0,3),lit42))),get(e->slot(1,2),lit110)),get(e->slot(1,2),lit90)),e->slot(0,4));e->slot(0,10)=std::move(t303);}
{V t304=mul(mul(add(add(mul(get(e->slot(1,2),lit70),get(e->slot(0,3),lit14)),mul(get(e->slot(1,2),lit93),get(e->slot(0,3),lit39))),get(e->slot(1,2),lit111)),get(e->slot(1,2),lit91)),e->slot(0,4));e->slot(0,11)=std::move(t304);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t305=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit64),first(call(e->slot(1,3),Args{e->slot(0,8),V(-num(get(e->slot(0,3),lit24))),get(e->slot(0,3),lit24)})),mul(get(e->slot(0,3),lit4),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t306=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit65),first(call(e->slot(1,3),Args{e->slot(0,9),V(-num(get(e->slot(0,3),lit25))),get(e->slot(0,3),lit25)})),mul(get(e->slot(0,3),lit4),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t307=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit66),first(call(e->slot(1,3),Args{e->slot(0,10),V(-num(get(e->slot(0,3),lit26))),get(e->slot(0,3),lit26)})),mul(get(e->slot(0,3),lit4),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t308=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit67),first(call(e->slot(1,3),Args{e->slot(0,11),V(-num(get(e->slot(0,3),lit27))),get(e->slot(0,3),lit27)})),mul(get(e->slot(0,3),lit4),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t308));}
{V t309=first(call(e->slot(1,3),Args{add(add(add(add(add(add(add(add(add(add(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit62)})),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit64)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit65)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit66)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit67)}))),mul(get(e->slot(1,2),lit78),get(e->slot(0,3),lit21))),mul(get(e->slot(1,2),lit78),get(e->slot(0,3),lit48))),mul(get(e->slot(1,2),lit107),get(e->slot(0,3),lit55))),mul(get(e->slot(1,2),lit99),get(e->slot(0,3),lit52))),mul(get(e->slot(1,2),lit97),get(e->slot(0,3),lit53))),mul(get(e->slot(1,2),lit98),get(e->slot(0,3),lit54))),V(0.0),V(1.0)}));e->slot(0,12)=std::move(t309);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t310=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit80),e->slot(0,12),mul(get(e->slot(0,3),lit4),e->slot(0,5)),e->slot(0,0)}));refs[0].put(std::move(t310));}
{V t311=first(call(get(e->get("math"),lit139),Args{add(add(mul(get(e->slot(1,2),lit79),get(e->slot(0,3),lit22)),mul(get(e->slot(1,2),lit79),get(e->slot(0,3),lit49))),sub(get(e->slot(1,2),lit80),e->slot(0,12))),V(0.0)}));e->slot(0,13)=std::move(t311);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t312=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit81),first(call(e->slot(1,3),Args{e->slot(0,13),V(0.0),V(1.0)})),get(e->slot(0,3),lit6),e->slot(0,0)}));refs[0].put(std::move(t312));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t313=first(call(e->slot(1,3),Args{sub(get(e->slot(1,2),lit80),mul(get(e->slot(1,2),lit81),get(e->slot(0,3),lit22))),V(0.0),get(e->slot(0,3),lit28)}));refs[0].put(std::move(t313));}
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit259).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t314=get(e->slot(1,2),lit62);return !truth(t314)?V(0.0):t314;})()};
return Args{};}));
Ref(e->slot(0,1),lit260).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t315=get(e->slot(1,2),lit64);return !truth(t315)?V(0.0):t315;})()};
return Args{};}));
Ref(e->slot(0,1),lit261).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t316=get(e->slot(1,2),lit65);return !truth(t316)?V(0.0):t316;})()};
return Args{};}));
Ref(e->slot(0,1),lit262).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t317=get(e->slot(1,2),lit66);return !truth(t317)?V(0.0):t317;})()};
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t318=get(e->slot(1,2),lit80);return !truth(t318)?V(0.0):t318;})()};
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t319=get(e->slot(1,2),lit81);return !truth(t319)?V(0.0):t319;})()};
return Args{};}));
Ref(e->slot(0,1),lit265).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit266),Args{concat(lit267,concat(lit268,concat(lit269,concat(lit270,lit271)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit115)})),([&](){V t320=get(e->slot(1,2),lit117);return !truth(t320)?V(0.0):t320;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit113)})),([&](){V t321=get(e->slot(1,2),lit62);return !truth(t321)?V(0.0):t321;})(),([&](){V t322=get(e->slot(1,2),lit63);return !truth(t322)?V(0.0):t322;})(),([&](){V t323=get(e->slot(1,2),lit80);return !truth(t323)?V(0.0):t323;})(),([&](){V t324=get(e->slot(1,2),lit81);return !truth(t324)?V(0.0):t324;})(),([&](){V t325=get(e->slot(1,2),lit64);return !truth(t325)?V(0.0):t325;})(),([&](){V t326=get(e->slot(1,2),lit65);return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(e->slot(1,2),lit66);return !truth(t327)?V(0.0):t327;})(),([&](){V t328=get(e->slot(1,2),lit67);return !truth(t328)?V(0.0):t328;})(),([&](){V t329=get(e->slot(1,2),lit108);return !truth(t329)?V(0.0):t329;})(),([&](){V t330=get(e->slot(1,2),lit109);return !truth(t330)?V(0.0):t330;})(),([&](){V t331=get(e->slot(1,2),lit110);return !truth(t331)?V(0.0):t331;})(),([&](){V t332=get(e->slot(1,2),lit111);return !truth(t332)?V(0.0):t332;})(),([&](){V t333=get(e->slot(1,2),lit112);return !truth(t333)?V(0.0):t333;})(),([&](){V t334=([&](){V t335=get(e->slot(1,2),lit118);return truth(t335)?lit272:t335;})();return !truth(t334)?lit273:t334;})(),([&](){V t336=([&](){V t337=get(e->slot(1,2),lit119);return truth(t337)?lit272:t337;})();return !truth(t336)?lit273:t336;})(),([&](){V t338=([&](){V t339=get(e->slot(1,2),lit120);return truth(t339)?lit272:t339;})();return !truth(t338)?lit273:t338;})(),([&](){V t340=([&](){V t341=get(e->slot(1,2),lit121);return truth(t341)?lit272:t341;})();return !truth(t340)?lit273:t340;})(),([&](){V t342=([&](){V t343=get(e->slot(1,2),lit122);return truth(t343)?lit272:t343;})();return !truth(t342)?lit273:t342;})(),([&](){V t344=([&](){V t345=get(e->slot(1,2),lit123);return truth(t345)?lit272:t345;})();return !truth(t344)?lit273:t344;})(),([&](){V t346=([&](){V t347=get(e->slot(1,2),lit124);return truth(t347)?lit272:t347;})();return !truth(t346)?lit273:t346;})(),([&](){V t348=([&](){V t349=get(e->slot(1,2),lit125);return truth(t349)?lit272:t349;})();return !truth(t348)?lit273:t348;})(),([&](){V t350=([&](){V t351=get(e->slot(1,2),lit126);return truth(t351)?lit272:t351;})();return !truth(t350)?lit273:t350;})(),([&](){V t352=([&](){V t353=get(e->slot(1,2),lit127);return truth(t353)?lit272:t353;})();return !truth(t352)?lit273:t352;})(),([&](){V t354=([&](){V t355=get(e->slot(1,2),lit128);return truth(t355)?lit272:t355;})();return !truth(t354)?lit273:t354;})(),([&](){V t356=([&](){V t357=get(e->slot(1,2),lit129);return truth(t357)?lit272:t357;})();return !truth(t356)?lit273:t356;})(),([&](){V t358=([&](){V t359=get(e->slot(1,2),lit130);return truth(t359)?lit272:t359;})();return !truth(t358)?lit273:t358;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

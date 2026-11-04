// Generated native C++ from pinned chassis_energy.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("brakeTemperatureInputContract");
static const V lit3("original");
static const V lit4("buildTau");
static const V lit5("releaseTau");
static const V lit6("yawGain");
static const V lit7("rollGain");
static const V lit8("pitchRateGain");
static const V lit9("steerGain");
static const V lit10("chassisRollGain");
static const V lit11("chassisPitchGain");
static const V lit12("chassisHeaveGain");
static const V lit13("chassisYawGain");
static const V lit14("virtualYawGain");
static const V lit15("virtualPitchGain");
static const V lit16("virtualRollGain");
static const V lit17("rearYawLagGain");
static const V lit18("instabilityGain");
static const V lit19("rollCGGain");
static const V lit20("pitchCGGain");
static const V lit21("loadRollGain");
static const V lit22("loadPitchGain");
static const V lit23("tireHopGain");
static const V lit24("contactLossGain");
static const V lit25("brakeEnergyGain");
static const V lit26("brakeLockEnergyGain");
static const V lit27("brakeThermalEnergyGain");
static const V lit28("suspensionStressEnergyGain");
static const V lit29("sprungCGEnergyGain");
static const V lit30("chassisRollRootGain");
static const V lit31("chassisRollThermalGain");
static const V lit32("chassisRollSuspensionGain");
static const V lit33("damageEnergyGain");
static const V lit34("bodyRuntimePenaltyGain");
static const V lit35("bodyFlexEnergyGain");
static const V lit36("bodyTorsionEnergyGain");
static const V lit37("bodyBendingEnergyGain");
static const V lit38("bodyStiffEnergyLoss");
static const V lit39("bodyFlexReleaseLoss");
static const V lit40("bodyStiffReleaseGain");
static const V lit41("minBodyEnergyScale");
static const V lit42("maxBodyEnergyScale");
static const V lit43("minBodyReleaseScale");
static const V lit44("maxBodyReleaseScale");
static const V lit45("maxRootEnergyAdd");
static const V lit46("maxEnergy");
static const V lit47("maxRelease");
static const V lit48("minDt");
static const V lit49("maxDt");
static const V lit50("globalReadInterval");
static const V lit51("debugStoreInterval");
static const V lit52("yawEnergy");
static const V lit53("rollEnergy");
static const V lit54("pitchEnergy");
static const V lit55("heaveEnergy");
static const V lit56("steerEnergy");
static const V lit57("virtualEnergy");
static const V lit58("bodyInputEnergy");
static const V lit59("instabilityEnergy");
static const V lit60("loadEnergy");
static const V lit61("tireEnergy");
static const V lit62("brakeEnergy");
static const V lit63("brakeLockEnergy");
static const V lit64("thermalEnergy");
static const V lit65("suspensionStressEnergy");
static const V lit66("sprungCGEnergy");
static const V lit67("rootChassisRollEnergy");
static const V lit68("bodyRuntimeEnergy");
static const V lit69("totalEnergy");
static const V lit70("targetEnergy");
static const V lit71("release");
static const V lit72("prevTargetEnergy");
static const V lit73("yawRate");
static const V lit74("pitchRate");
static const V lit75("rollRate");
static const V lit76("steer");
static const V lit77("chassisRoll");
static const V lit78("chassisPitch");
static const V lit79("chassisHeave");
static const V lit80("chassisYaw");
static const V lit81("virtualYaw");
static const V lit82("virtualPitch");
static const V lit83("virtualRoll");
static const V lit84("virtualRearYaw");
static const V lit85("instability");
static const V lit86("rollCG");
static const V lit87("pitchCG");
static const V lit88("loadRoll");
static const V lit89("loadPitch");
static const V lit90("tireHopAvg");
static const V lit91("contactLossAvg");
static const V lit92("brakeInput");
static const V lit93("brakeLockAvg");
static const V lit94("brakeThermalStress");
static const V lit95("suspensionStress");
static const V lit96("sprungPitchCG");
static const V lit97("sprungRollCG");
static const V lit98("rootRollAdd");
static const V lit99("rootPitchAdd");
static const V lit100("rootHeaveAdd");
static const V lit101("rootYawAdd");
static const V lit102("bodyRuntimePenalty");
static const V lit103("vehicleDamage");
static const V lit104("bodyRigidity");
static const V lit105("bodyFlexFactor");
static const V lit106("bodyTorsionFactor");
static const V lit107("bodyBendingFactor");
static const V lit108("bodyDampingFactor");
static const V lit109("bodyEnergyScale");
static const V lit110("bodyReleaseScale");
static const V lit111("mode");
static const V lit112("STABLE");
static const V lit113("status");
static const V lit114("INIT");
static const V lit115("updateCount");
static const V lit116("bodyRigidityLinked");
static const V lit117("chassisLinked");
static const V lit118("virtualLinked");
static const V lit119("loadLinked");
static const V lit120("tireLinked");
static const V lit121("brakeLinked");
static const V lit122("damageLinked");
static const V lit123("thermalLinked");
static const V lit124("suspensionLinked");
static const V lit125("sprungLinked");
static const V lit126("rollRootLinked");
static const V lit127("globalReadTimer");
static const V lit128("debugStoreTimer");
static const V lit129("debugStoreNow");
static const V lit130("state");
static const V lit131("debug");
static const V lit132("safeLoadRaw");
static const V lit133("safeStore");
static const V lit134("safeField");
static const V lit135("getCar");
static const V lit136("max");
static const V lit137("ngp_body_rigidity_update_count");
static const V lit138("ngp_body_rigidity");
static const V lit139("ngp_body_flex_factor");
static const V lit140("ngp_body_torsion_factor");
static const V lit141("ngp_body_bending_factor");
static const V lit142("ngp_body_damping_factor");
static const V lit143("ngp_body_runtime_flex_penalty");
static const V lit144("localAngularVelocity");
static const V lit145("x");
static const V lit146("y");
static const V lit147("z");
static const V lit148("brake");
static const V lit149("ngp_brake_input");
static const V lit150("ngp_chassis_roll");
static const V lit151("ngp_chassis_pitch");
static const V lit152("ngp_chassis_heave");
static const V lit153("ngp_chassis_yaw_hint");
static const V lit154("ngp_virtual_yaw");
static const V lit155("ngp_virtual_pitch");
static const V lit156("ngp_virtual_roll");
static const V lit157("ngp_virtual_rear_yaw");
static const V lit158("ngp_virtual_instability");
static const V lit159("ngp_load_front");
static const V lit160("ngp_load_path_front_delivery");
static const V lit161("ngp_load_path_front_integrity");
static const V lit162("ngp_load_rear");
static const V lit163("ngp_load_path_rear_delivery");
static const V lit164("ngp_load_path_rear_integrity");
static const V lit165("ngp_load_left");
static const V lit166("ngp_load_right");
static const V lit167("ngp_roll_cg");
static const V lit168("ngp_pitch_cg");
static const V lit169("ngp_tire_hop_energy_");
static const V lit170("ngp_tire_hop_");
static const V lit171("ngp_tire_contact_loss_");
static const V lit172("ngp_tcr_contact_loss_");
static const V lit173("ngp_contact_quality_");
static const V lit174("current_wheel_brake_temperature_max_v1");
static const V lit175("wheels");
static const V lit176("huge");
static const V lit177("brakeTemperature");
static const V lit178("number");
static const V lit179("abs");
static const V lit180("Current chassis energy wheel brake temperature unavailable");
static const V lit181("brakeTemperatureInput");
static const V lit182("brakeTemperatureSource");
static const V lit183("CURRENT_WHEEL_BRAKE_TEMPERATURE_MAX");
static const V lit184("ngp_brake_temp_max");
static const V lit185("ngp_brake_max_temp");
static const V lit186("ngp_brake_temp_avg");
static const V lit187("ngp_brake_avg_temp");
static const V lit188("Invalid chassis energy brake temperature input contract");
static const V lit189("ngp_brake_lock_");
static const V lit190("ngp_susp_integrated_force_");
static const V lit191("ngp_susp_int_force_");
static const V lit192("ngp_susp_");
static const V lit193("ngp_damper_hyst_");
static const V lit194("ngp_damper_force_");
static const V lit195("ngp_damper_");
static const V lit196("min");
static const V lit197("ngp_sprung_pitch_cg");
static const V lit198("ngp_sprung_roll_cg");
static const V lit199("ngp_chassis_roll_root_roll_add");
static const V lit200("ngp_chassis_roll_root_pitch_add");
static const V lit201("ngp_chassis_roll_root_heave_add");
static const V lit202("ngp_chassis_roll_root_yaw_add");
static const V lit203("ngp_condition_total");
static const V lit204("ngp_vehicle_condition_total");
static const V lit205("ngp_damage_chassis");
static const V lit206("RELEASE");
static const V lit207("BUILD");
static const V lit208("LOADED");
static const V lit209("ngp_chassis_energy");
static const V lit210("ngp_chassis_target_energy");
static const V lit211("ngp_chassis_release");
static const V lit212("ngp_chassis_body_energy");
static const V lit213("ngp_chassis_body_release");
static const V lit214("ngp_body_chassis_energy");
static const V lit215("ngp_body_chassis_release");
static const V lit216("ngp_chassis_energy_mode");
static const V lit217("ngp_chassis_energy_status");
static const V lit218("ngp_chassis_energy_update_count");
static const V lit219("ngp_chassis_energy_body_energy_scale");
static const V lit220("ngp_chassis_energy_body_release_scale");
static const V lit221("ngp_chassis_yaw_energy");
static const V lit222("ngp_chassis_roll_energy");
static const V lit223("ngp_chassis_pitch_energy");
static const V lit224("ngp_chassis_virtual_energy");
static const V lit225("ngp_chassis_body_input_energy");
static const V lit226("ngp_chassis_energy_yaw");
static const V lit227("ngp_chassis_energy_roll");
static const V lit228("ngp_chassis_energy_pitch");
static const V lit229("ngp_chassis_energy_heave");
static const V lit230("ngp_chassis_energy_steer");
static const V lit231("ngp_chassis_energy_virtual");
static const V lit232("ngp_chassis_energy_body_input");
static const V lit233("ngp_chassis_energy_instability");
static const V lit234("ngp_chassis_energy_load");
static const V lit235("ngp_chassis_energy_tire");
static const V lit236("ngp_chassis_energy_brake");
static const V lit237("ngp_chassis_energy_brake_lock");
static const V lit238("ngp_chassis_energy_thermal");
static const V lit239("ngp_chassis_energy_suspension_stress");
static const V lit240("ngp_chassis_energy_sprung_cg");
static const V lit241("ngp_chassis_energy_roll_root");
static const V lit242("ngp_chassis_energy_body_runtime");
static const V lit243("ngp_chassis_energy_body_linked");
static const V lit244("ngp_chassis_energy_chassis_linked");
static const V lit245("ngp_chassis_energy_virtual_linked");
static const V lit246("ngp_chassis_energy_load_linked");
static const V lit247("ngp_chassis_energy_tire_linked");
static const V lit248("ngp_chassis_energy_brake_linked");
static const V lit249("ngp_chassis_energy_damage_linked");
static const V lit250("ngp_chassis_energy_thermal_linked");
static const V lit251("ngp_chassis_energy_suspension_linked");
static const V lit252("ngp_chassis_energy_sprung_linked");
static const V lit253("ngp_chassis_energy_roll_root_linked");
static const V lit254("ngp_chassis_energy_yaw_rate");
static const V lit255("ngp_chassis_energy_roll_rate");
static const V lit256("ngp_chassis_energy_pitch_rate");
static const V lit257("ngp_chassis_energy_steer_input");
static const V lit258("init");
static const V lit259("update");
static const V lit260("NO CAR");
static const V lit261("RUNNING");
static const V lit262("getEnergy");
static const V lit263("getRelease");
static const V lit264("getTargetEnergy");
static const V lit265("debugStr");
static const V lit266("format");
static const V lit267("Status %s / Count %.0f\n");
static const V lit268("Energy %.3f Target %.3f Release %.3f Mode %s\n");
static const V lit269("Y %.2f R %.2f P %.2f H %.2f V %.2f Load %.2f Tire %.2f Brake %.2f\n");
static const V lit270("Root Lock %.2f Therm %.2f Susp %.2f Sprung %.2f RollRoot %.2f BodyRun %.2f\n");
static const V lit271("Links Body:%s Chassis:%s Virtual:%s Load:%s Tire:%s Brake:%s Damage:%s Therm:%s Susp:%s Sprung:%s RollRoot:%s");
static const V lit272("OK");
static const V lit273("NIL");
V load_chassis_energy(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(30);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(0.1));set(z,lit5,V(0.18));set(z,lit6,V(0.42));set(z,lit7,V(0.35));set(z,lit8,V(0.28));set(z,lit9,V(0.26));set(z,lit10,V(0.52));set(z,lit11,V(0.42));set(z,lit12,V(0.34));set(z,lit13,V(0.38));set(z,lit14,V(0.36));set(z,lit15,V(0.24));set(z,lit16,V(0.28));set(z,lit17,V(0.3));set(z,lit18,V(0.4));set(z,lit19,V(0.3));set(z,lit20,V(0.22));set(z,lit21,V(0.24));set(z,lit22,V(0.2));set(z,lit23,V(0.14));set(z,lit24,V(0.1));set(z,lit25,V(0.08));set(z,lit26,V(0.06));set(z,lit27,V(0.05));set(z,lit28,V(0.1));set(z,lit29,V(0.08));set(z,lit30,V(0.24));set(z,lit31,V(0.05));set(z,lit32,V(0.08));set(z,lit33,V(0.18));set(z,lit34,V(0.12));set(z,lit35,V(0.12));set(z,lit36,V(0.08));set(z,lit37,V(0.07));set(z,lit38,V(0.05));set(z,lit39,V(0.14));set(z,lit40,V(0.06));set(z,lit41,V(0.88));set(z,lit42,V(1.18));set(z,lit43,V(0.82));set(z,lit44,V(1.1));set(z,lit45,V(0.25));set(z,lit46,V(1.0));set(z,lit47,V(1.0));set(z,lit48,V(0.0001));set(z,lit49,V(0.05));set(z,lit50,V(0.05));set(z,lit51,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(1.0));set(z,lit105,V(1.0));set(z,lit106,V(1.0));set(z,lit107,V(1.0));set(z,lit108,V(1.0));set(z,lit109,V(1.0));set(z,lit110,V(1.0));set(z,lit111,lit112);set(z,lit113,lit114);set(z,lit115,V(0.0));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,V(false));set(z,lit121,V(false));set(z,lit122,V(false));set(z,lit123,V(false));set(z,lit124,V(false));set(z,lit125,V(false));set(z,lit126,V(false));set(z,lit127,V(999.0));set(z,lit128,V(999.0));set(z,lit129,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=eq(e->slot(0,2),V());return !truth(t8)?ne(e->slot(0,2),e->slot(0,2)):t8;})())){return Args{([&](){V t9=e->slot(0,1);return !truth(t9)?V(0.0):t9;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t10=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t10));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(e->slot(0,0)))};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t11=first(call(e->slot(1,3),Args{e->slot(0,0),([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()}));refs[0].put(std::move(t11));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
{V t13=get(e->slot(0,0),lit132);e->slot(0,6)=std::move(t13);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()});
return Args{};});
{V t17=get(e->slot(0,0),lit133);e->slot(0,8)=std::move(t17);}
{V t18=get(e->slot(0,0),lit134);e->slot(0,9)=std::move(t18);}
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t19=V(!truth(e->get("ac")));return !truth(t19)?V(!truth(get(e->get("ac"),lit135))):t19;})())){return Args{V()};
}
{Args t20=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit135),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t20,0);e->slot(0,1)=arg(t20,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t21=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t22=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t23=first(call(get(e->get("math"),lit136),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.001)})),V(0.0001)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t24=first(call(get(e->get("math"),lit136),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0)}));refs[0].put(std::move(t24));}
{V t25=first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t25);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit127)};V t26=add(([&](){V t27=get(e->slot(1,2),lit127);return !truth(t27)?V(0.0):t27;})(),e->slot(0,0));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t28=add(([&](){V t29=get(e->slot(1,2),lit128);return !truth(t29)?V(0.0):t29;})(),e->slot(0,0));refs[0].put(std::move(t28));}
if(truth(ge(get(e->slot(1,2),lit128),get(get(e->slot(1,1),lit1),lit51)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t30=V(0.0);refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit129)};V t31=V(true);refs[0].put(std::move(t31));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit129)};V t32=V(false);refs[0].put(std::move(t32));}
}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(ge(get(e->slot(1,2),lit127),get(get(e->slot(1,1),lit1),lit50)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit127)};V t33=V(0.0);refs[0].put(std::move(t33));}
return Args{V(true)};
}
return Args{V(false)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t34=([&](){V t35=ne(first(call(e->slot(1,6),Args{lit137})),V());return !truth(t35)?ne(first(call(e->slot(1,6),Args{lit138})),V()):t35;})();e->slot(0,0)=std::move(t34);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t36=e->slot(0,0);refs[0].put(std::move(t36));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t37=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit138,V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t38=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit139,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t39=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit140,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t40=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit141,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t41=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit142,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t42=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit143,V(0.0)})),V(0.0),V(0.55)}));refs[0].put(std::move(t42));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(get(e->slot(1,2),lit116))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t43=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit109),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t44=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit110),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t44));}
return Args{};
}
{V t45=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t45);}
{V t46=first(call(e->slot(1,5),Args{sub(([&](){V t47=get(e->slot(1,2),lit105);return !truth(t47)?V(1.0):t47;})(),V(1.0)),V(0.0),V(0.8)}));e->slot(0,2)=std::move(t46);}
{V t48=first(call(e->slot(1,5),Args{sub(([&](){V t49=get(e->slot(1,2),lit106);return !truth(t49)?V(1.0):t49;})(),V(1.0)),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t48);}
{V t50=first(call(e->slot(1,5),Args{sub(([&](){V t51=get(e->slot(1,2),lit107);return !truth(t51)?V(1.0):t51;})(),V(1.0)),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t50);}
{V t52=first(call(e->slot(1,5),Args{sub(([&](){V t53=get(e->slot(1,2),lit104);return !truth(t53)?V(1.0):t53;})(),V(1.0)),V(0.0),V(0.35)}));e->slot(0,5)=std::move(t52);}
{V t54=sub(add(add(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit35))),mul(e->slot(0,3),get(e->slot(0,1),lit36))),mul(e->slot(0,4),get(e->slot(0,1),lit37))),mul(e->slot(0,5),get(e->slot(0,1),lit38)));e->slot(0,6)=std::move(t54);}
{V t55=add(sub(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit39))),mul(e->slot(0,5),get(e->slot(0,1),lit40)));e->slot(0,7)=std::move(t55);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t56=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit109),first(call(e->slot(1,5),Args{e->slot(0,6),get(e->slot(0,1),lit41),get(e->slot(0,1),lit42)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t57=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit110),first(call(e->slot(1,5),Args{e->slot(0,7),get(e->slot(0,1),lit43),get(e->slot(0,1),lit44)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t57));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t58=first(call(e->slot(1,9),Args{e->slot(0,0),lit144,V()}));e->slot(0,1)=std::move(t58);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t59=first(call(e->slot(1,3),Args{get(e->slot(0,1),lit145),V(0.0)}));refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t60=first(call(e->slot(1,3),Args{get(e->slot(0,1),lit146),V(0.0)}));refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t61=first(call(e->slot(1,3),Args{get(e->slot(0,1),lit147),V(0.0)}));refs[0].put(std::move(t61));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t62=V(0.0);refs[0].put(std::move(t62));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t63=V(0.0);refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t64=V(0.0);refs[0].put(std::move(t64));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t65=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit76,V(0.0)})),V(0.0)})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t65));}
{V t66=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit148,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));e->slot(0,2)=std::move(t66);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t67=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit149,e->slot(0,2)})),V(0.0),V(1.0)}));refs[0].put(std::move(t67));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t68=first(call(e->slot(1,6),Args{lit150}));e->slot(0,0)=std::move(t68);}
{V t69=first(call(e->slot(1,6),Args{lit151}));e->slot(0,1)=std::move(t69);}
{V t70=first(call(e->slot(1,6),Args{lit152}));e->slot(0,2)=std::move(t70);}
{V t71=first(call(e->slot(1,6),Args{lit153}));e->slot(0,3)=std::move(t71);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t72=([&](){V t73=([&](){V t74=([&](){V t75=ne(e->slot(0,0),V());return !truth(t75)?ne(e->slot(0,1),V()):t75;})();return !truth(t74)?ne(e->slot(0,2),V()):t74;})();return !truth(t73)?ne(e->slot(0,3),V()):t73;})();refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t76=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t77=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t78=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t79=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t79));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t80=first(call(e->slot(1,6),Args{lit154}));e->slot(0,0)=std::move(t80);}
{V t81=first(call(e->slot(1,6),Args{lit155}));e->slot(0,1)=std::move(t81);}
{V t82=first(call(e->slot(1,6),Args{lit156}));e->slot(0,2)=std::move(t82);}
{V t83=first(call(e->slot(1,6),Args{lit157}));e->slot(0,3)=std::move(t83);}
{V t84=first(call(e->slot(1,6),Args{lit158}));e->slot(0,4)=std::move(t84);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t85=([&](){V t86=([&](){V t87=([&](){V t88=([&](){V t89=ne(e->slot(0,0),V());return !truth(t89)?ne(e->slot(0,1),V()):t89;})();return !truth(t88)?ne(e->slot(0,2),V()):t88;})();return !truth(t87)?ne(e->slot(0,3),V()):t87;})();return !truth(t86)?ne(e->slot(0,4),V()):t86;})();refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t90=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t90));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t91=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t92=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t93=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t94=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t94));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;{V t95=([&](){V t96=([&](){V t97=first(call(e->slot(1,6),Args{lit159}));return !truth(t97)?first(call(e->slot(1,6),Args{lit160})):t97;})();return !truth(t96)?first(call(e->slot(1,6),Args{lit161})):t96;})();e->slot(0,0)=std::move(t95);}
{V t98=([&](){V t99=([&](){V t100=first(call(e->slot(1,6),Args{lit162}));return !truth(t100)?first(call(e->slot(1,6),Args{lit163})):t100;})();return !truth(t99)?first(call(e->slot(1,6),Args{lit164})):t99;})();e->slot(0,1)=std::move(t98);}
{V t101=first(call(e->slot(1,6),Args{lit165}));e->slot(0,2)=std::move(t101);}
{V t102=first(call(e->slot(1,6),Args{lit166}));e->slot(0,3)=std::move(t102);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit119)};V t103=([&](){V t104=([&](){V t105=([&](){V t106=ne(e->slot(0,0),V());return !truth(t106)?ne(e->slot(0,1),V()):t106;})();return !truth(t105)?ne(e->slot(0,2),V()):t105;})();return !truth(t104)?ne(e->slot(0,3),V()):t104;})();refs[0].put(std::move(t103));}
{V t107=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.5)})),V(0.0),V(1.5)}));e->slot(0,4)=std::move(t107);}
{V t108=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.5)})),V(0.0),V(1.5)}));e->slot(0,5)=std::move(t108);}
{V t109=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.5)})),V(0.0),V(1.5)}));e->slot(0,6)=std::move(t109);}
{V t110=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.5)})),V(0.0),V(1.5)}));e->slot(0,7)=std::move(t110);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t111=first(call(e->slot(1,5),Args{sub(e->slot(0,4),e->slot(0,5)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t112=first(call(e->slot(1,5),Args{sub(e->slot(0,7),e->slot(0,6)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t112));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t113=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit167,V(0.0)})),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t114=first(call(e->slot(1,5),Args{first(call(e->slot(1,7),Args{lit168,V(0.0)})),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t114));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t115=V(false);e->slot(0,0)=std::move(t115);}
{V t116=V(0.0);e->slot(0,1)=std::move(t116);}
{V t117=V(0.0);e->slot(0,2)=std::move(t117);}
{double t118=num(V(0.0)),t119=num(V(3.0)),t120=num(V(1.0));for(double t121=t118;(t120>0?t121<=t119:t121>=t119);t121+=t120){auto parent=e;Env storage(parent,false,4);auto e=&storage;e->slot(0,0)=V(t121);{V t122=([&](){V t123=first(call(e->slot(2,6),Args{concat(lit169,e->slot(0,0))}));return !truth(t123)?first(call(e->slot(2,6),Args{concat(lit170,e->slot(0,0))})):t123;})();e->slot(0,1)=std::move(t122);}
{V t124=([&](){V t125=first(call(e->slot(2,6),Args{concat(lit171,e->slot(0,0))}));return !truth(t125)?first(call(e->slot(2,6),Args{concat(lit172,e->slot(0,0))})):t125;})();e->slot(0,2)=std::move(t124);}
{V t126=first(call(e->slot(2,6),Args{concat(lit173,e->slot(0,0))}));e->slot(0,3)=std::move(t126);}
if(truth(([&](){V t127=([&](){V t128=ne(e->slot(0,1),V());return !truth(t128)?ne(e->slot(0,2),V()):t128;})();return !truth(t127)?ne(e->slot(0,3),V()):t127;})())){{std::array<Ref,1> refs{Ref(e,1,0)};V t129=V(true);refs[0].put(std::move(t129));}
}
if(truth(([&](){V t130=eq(e->slot(0,2),V());return truth(t130)?ne(e->slot(0,3),V()):t130;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t131=sub(V(1.0),first(call(e->slot(2,5),Args{first(call(e->slot(2,3),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t131));}
}
{std::array<Ref,1> refs{Ref(e,1,1)};V t132=add(e->slot(1,1),first(call(e->slot(2,5),Args{first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t133=add(e->slot(1,2),first(call(e->slot(2,5),Args{first(call(e->slot(2,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t133));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t134=e->slot(0,0);refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t135=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t136=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t136));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t137=get(get(e->slot(1,1),lit1),lit2);e->slot(0,1)=std::move(t137);}
if(truth(eq(e->slot(0,1),lit174))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t138=([&](){V t139=e->slot(1,0);return truth(t139)?get(e->slot(1,0),lit175):t139;})();e->slot(0,0)=std::move(t138);}
{V t140=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t140);}
{V t141=V(-num(get(e->get("math"),lit176)));e->slot(0,2)=std::move(t141);}
{double t142=num(V(0.0)),t143=num(V(3.0)),t144=num(V(1.0));for(double t145=t142;(t144>0?t145<=t143:t145>=t143);t145+=t144){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t145);{V t146=([&](){V t147=e->slot(1,0);return truth(t147)?get(e->slot(1,0),e->slot(0,0)):t147;})();e->slot(0,1)=std::move(t146);}
{V t148=([&](){V t149=e->slot(0,1);return truth(t149)?get(e->slot(0,1),lit177):t149;})();e->slot(0,2)=std::move(t148);}
if(truth(([&](){V t150=([&](){V t151=([&](){V t152=ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit178);return !truth(t152)?ne(e->slot(0,2),e->slot(0,2)):t152;})();return !truth(t151)?eq(first(call(get(e->get("math"),lit179),Args{e->slot(0,2)})),get(e->get("math"),lit176)):t151;})();return !truth(t150)?lt(e->slot(0,2),V(-num(V(273.15)))):t150;})())){call(e->get("error"),Args{lit180});
}
{std::array<Ref,1> refs{Ref(e->slot(1,1),e->slot(0,0))};V t153=e->slot(0,2);refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t154=first(call(get(e->get("math"),lit136),Args{e->slot(1,2),e->slot(0,2)}));refs[0].put(std::move(t154));}
}}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit181)};V t155=e->slot(0,1);refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit182)};V t156=lit183;refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit123)};V t157=V(true);refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit94)};V t158=first(call(e->slot(2,5),Args{divv(sub(e->slot(0,2),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t158));}
}else if(truth(eq(e->slot(0,1),lit3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t159=([&](){V t160=([&](){V t161=([&](){V t162=first(call(e->slot(2,6),Args{lit184}));return !truth(t162)?first(call(e->slot(2,6),Args{lit185})):t162;})();return !truth(t161)?first(call(e->slot(2,6),Args{lit186})):t161;})();return !truth(t160)?first(call(e->slot(2,6),Args{lit187})):t160;})();e->slot(0,0)=std::move(t159);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit123)};V t163=ne(e->slot(0,0),V());refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit94)};V t164=first(call(e->slot(2,5),Args{divv(sub(first(call(e->slot(2,3),Args{e->slot(0,0),V(25.0)})),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t164));}
}else{call(e->get("error"),Args{lit188});
}

return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t165=V(false);e->slot(0,1)=std::move(t165);}
{V t166=V(0.0);e->slot(0,2)=std::move(t166);}
{double t167=num(V(0.0)),t168=num(V(3.0)),t169=num(V(1.0));for(double t170=t167;(t169>0?t170<=t168:t170>=t168);t170+=t169){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t170);{V t171=first(call(e->slot(2,6),Args{concat(lit189,e->slot(0,0))}));e->slot(0,1)=std::move(t171);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t172=V(true);refs[0].put(std::move(t172));}
}
{std::array<Ref,1> refs{Ref(e,1,2)};V t173=add(e->slot(1,2),first(call(e->slot(2,5),Args{first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t173));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t174=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit121)};V t175=([&](){V t176=ne(first(call(e->slot(1,6),Args{lit149})),V());return !truth(t176)?e->slot(0,1):t176;})();refs[0].put(std::move(t175));}
call(e->slot(1,21),Args{e->slot(0,0)});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t177=V(false);e->slot(0,0)=std::move(t177);}
{V t178=V(0.0);e->slot(0,1)=std::move(t178);}
{double t179=num(V(0.0)),t180=num(V(3.0)),t181=num(V(1.0));for(double t182=t179;(t181>0?t182<=t180:t182>=t180);t182+=t181){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t182);{V t183=([&](){V t184=([&](){V t185=first(call(e->slot(2,6),Args{concat(lit190,e->slot(0,0))}));return !truth(t185)?first(call(e->slot(2,6),Args{concat(lit191,e->slot(0,0))})):t185;})();return !truth(t184)?first(call(e->slot(2,6),Args{concat(lit192,e->slot(0,0))})):t184;})();e->slot(0,1)=std::move(t183);}
{V t186=([&](){V t187=([&](){V t188=first(call(e->slot(2,6),Args{concat(lit193,e->slot(0,0))}));return !truth(t188)?first(call(e->slot(2,6),Args{concat(lit194,e->slot(0,0))})):t188;})();return !truth(t187)?first(call(e->slot(2,6),Args{concat(lit195,e->slot(0,0))})):t187;})();e->slot(0,2)=std::move(t186);}
if(truth(([&](){V t189=ne(e->slot(0,1),V());return !truth(t189)?ne(e->slot(0,2),V()):t189;})())){{std::array<Ref,1> refs{Ref(e,1,0)};V t190=V(true);refs[0].put(std::move(t190));}
}
{std::array<Ref,1> refs{Ref(e,1,1)};V t191=add(e->slot(1,1),first(call(get(e->get("math"),lit196),Args{divv(add(first(call(e->slot(2,4),call(e->slot(2,3),Args{e->slot(0,1),V(0.0)}))),first(call(e->slot(2,4),call(e->slot(2,3),Args{e->slot(0,2),V(0.0)})))),V(25000.0)),V(1.0)})));refs[0].put(std::move(t191));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t192=e->slot(0,0);refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t193=first(call(e->slot(1,5),Args{mul(e->slot(0,1),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t193));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;{V t194=([&](){V t195=first(call(e->slot(1,6),Args{lit197}));return !truth(t195)?first(call(e->slot(1,6),Args{lit168})):t195;})();e->slot(0,0)=std::move(t194);}
{V t196=([&](){V t197=first(call(e->slot(1,6),Args{lit198}));return !truth(t197)?first(call(e->slot(1,6),Args{lit167})):t197;})();e->slot(0,1)=std::move(t196);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit125)};V t198=([&](){V t199=ne(e->slot(0,0),V());return !truth(t199)?ne(e->slot(0,1),V()):t199;})();refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t200=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),V(-num(V(0.12))),V(0.12)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t201=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(0.12))),V(0.12)}));refs[0].put(std::move(t201));}
{V t202=first(call(e->slot(1,6),Args{lit199}));e->slot(0,2)=std::move(t202);}
{V t203=first(call(e->slot(1,6),Args{lit200}));e->slot(0,3)=std::move(t203);}
{V t204=first(call(e->slot(1,6),Args{lit201}));e->slot(0,4)=std::move(t204);}
{V t205=first(call(e->slot(1,6),Args{lit202}));e->slot(0,5)=std::move(t205);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t206=([&](){V t207=([&](){V t208=([&](){V t209=ne(e->slot(0,2),V());return !truth(t209)?ne(e->slot(0,3),V()):t209;})();return !truth(t208)?ne(e->slot(0,4),V()):t208;})();return !truth(t207)?ne(e->slot(0,5),V()):t207;})();refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t210=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(-num(V(0.25))),V(0.25)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t211=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(-num(V(0.25))),V(0.25)}));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t212=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})),V(-num(V(0.25))),V(0.25)}));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t213=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(-num(V(0.25))),V(0.25)}));refs[0].put(std::move(t213));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t214=([&](){V t215=([&](){V t216=first(call(e->slot(1,6),Args{lit203}));return !truth(t216)?first(call(e->slot(1,6),Args{lit204})):t216;})();return !truth(t215)?first(call(e->slot(1,6),Args{lit205})):t215;})();e->slot(0,0)=std::move(t214);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t217=ne(e->slot(0,0),V());refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t218=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t218));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,16),Args{e->slot(0,0)});
if(truth(first(call(e->slot(1,13),Args{})))){call(e->slot(1,14),Args{});
call(e->slot(1,17),Args{});
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
call(e->slot(1,20),Args{});
call(e->slot(1,22),Args{e->slot(0,0)});
call(e->slot(1,23),Args{});
call(e->slot(1,24),Args{});
call(e->slot(1,25),Args{});
}else if(truth(ne(get(get(e->slot(1,1),lit1),lit2),lit3))){call(e->slot(1,21),Args{e->slot(0,0)});
}

return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t219=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t219);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t220=first(call(e->slot(1,5),Args{mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit73)})),get(e->slot(0,0),lit6)),V(0.0),V(1.0)}));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t221=first(call(e->slot(1,5),Args{add(mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit75)})),get(e->slot(0,0),lit7)),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit77)})),get(e->slot(0,0),lit10))),V(0.0),V(1.0)}));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t222=first(call(e->slot(1,5),Args{add(mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit74)})),get(e->slot(0,0),lit8)),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit78)})),get(e->slot(0,0),lit11))),V(0.0),V(1.0)}));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t223=first(call(e->slot(1,5),Args{mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit79)})),get(e->slot(0,0),lit12)),V(0.0),V(1.0)}));refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t224=first(call(e->slot(1,5),Args{mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit76)})),get(e->slot(0,0),lit9)),V(0.0),V(1.0)}));refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t225=first(call(e->slot(1,5),Args{add(add(add(mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit81)})),get(e->slot(0,0),lit14)),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit82)})),get(e->slot(0,0),lit15))),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit83)})),get(e->slot(0,0),lit16))),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit84)})),get(e->slot(0,0),lit17))),V(0.0),V(1.0)}));refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t226=first(call(e->slot(1,5),Args{add(add(add(mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit80)})),get(e->slot(0,0),lit13)),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit77)})),get(e->slot(0,0),lit10))),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit78)})),get(e->slot(0,0),lit11))),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit79)})),get(e->slot(0,0),lit12))),V(0.0),V(1.0)}));refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t227=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit85),get(e->slot(0,0),lit18)),V(0.0),V(1.0)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t228=first(call(e->slot(1,5),Args{add(add(add(mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit88)})),get(e->slot(0,0),lit21)),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit89)})),get(e->slot(0,0),lit22))),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit86)})),get(e->slot(0,0),lit19))),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit87)})),get(e->slot(0,0),lit20))),V(0.0),V(1.0)}));refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t229=first(call(e->slot(1,5),Args{add(mul(get(e->slot(1,2),lit90),get(e->slot(0,0),lit23)),mul(get(e->slot(1,2),lit91),get(e->slot(0,0),lit24))),V(0.0),V(1.0)}));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t230=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit92),get(e->slot(0,0),lit25)),V(0.0),V(1.0)}));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t231=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit93),get(e->slot(0,0),lit26)),V(0.0),V(1.0)}));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t232=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit94),get(e->slot(0,0),lit27)),V(0.0),V(1.0)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t233=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit95),get(e->slot(0,0),lit28)),V(0.0),V(1.0)}));refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t234=first(call(e->slot(1,5),Args{mul(add(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit96)})),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit97)}))),get(e->slot(0,0),lit29)),V(0.0),V(1.0)}));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t235=first(call(e->slot(1,5),Args{add(add(mul(add(add(add(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit98)})),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit99)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit100)}))),first(call(e->slot(1,4),Args{get(e->slot(1,2),lit101)}))),get(e->slot(0,0),lit30)),mul(get(e->slot(1,2),lit94),get(e->slot(0,0),lit31))),mul(get(e->slot(1,2),lit95),get(e->slot(0,0),lit32))),V(0.0),get(e->slot(0,0),lit45)}));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t236=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit102),get(e->slot(0,0),lit34)),V(0.0),V(1.0)}));refs[0].put(std::move(t236));}
{V t237=add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(get(e->slot(1,2),lit52),get(e->slot(1,2),lit53)),get(e->slot(1,2),lit54)),get(e->slot(1,2),lit55)),get(e->slot(1,2),lit56)),get(e->slot(1,2),lit57)),get(e->slot(1,2),lit58)),get(e->slot(1,2),lit59)),get(e->slot(1,2),lit60)),get(e->slot(1,2),lit61)),get(e->slot(1,2),lit62)),get(e->slot(1,2),lit63)),get(e->slot(1,2),lit64)),get(e->slot(1,2),lit65)),get(e->slot(1,2),lit66)),get(e->slot(1,2),lit67)),get(e->slot(1,2),lit68)),mul(get(e->slot(1,2),lit103),get(e->slot(0,0),lit33)));e->slot(0,1)=std::move(t237);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t238=first(call(e->slot(1,5),Args{mul(e->slot(0,1),V(0.35)),V(0.0),get(e->slot(0,0),lit46)}));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t239=first(call(e->slot(1,5),Args{mul(e->slot(0,1),get(e->slot(1,2),lit109)),V(0.0),get(e->slot(0,0),lit46)}));refs[0].put(std::move(t239));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t240=e->slot(0,1);refs[0].put(std::move(t240));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(lt(get(e->slot(1,2),lit69),V(0.08)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t241=lit112;refs[0].put(std::move(t241));}
}else if(truth(gt(get(e->slot(1,2),lit71),V(0.1)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t242=lit206;refs[0].put(std::move(t242));}
}else if(truth(lt(get(e->slot(1,2),lit69),V(0.35)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t243=lit207;refs[0].put(std::move(t243));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t244=lit208;refs[0].put(std::move(t244));}
}


return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,8),Args{lit209,get(e->slot(1,2),lit69)});
call(e->slot(1,8),Args{lit210,get(e->slot(1,2),lit70)});
call(e->slot(1,8),Args{lit211,get(e->slot(1,2),lit71)});
call(e->slot(1,8),Args{lit212,get(e->slot(1,2),lit69)});
call(e->slot(1,8),Args{lit213,get(e->slot(1,2),lit71)});
call(e->slot(1,8),Args{lit214,get(e->slot(1,2),lit69)});
call(e->slot(1,8),Args{lit215,get(e->slot(1,2),lit71)});
call(e->slot(1,8),Args{lit216,get(e->slot(1,2),lit111)});
call(e->slot(1,8),Args{lit217,get(e->slot(1,2),lit113)});
call(e->slot(1,8),Args{lit218,get(e->slot(1,2),lit115)});
call(e->slot(1,8),Args{lit219,get(e->slot(1,2),lit109)});
call(e->slot(1,8),Args{lit220,get(e->slot(1,2),lit110)});
call(e->slot(1,8),Args{lit221,get(e->slot(1,2),lit52)});
call(e->slot(1,8),Args{lit222,get(e->slot(1,2),lit53)});
call(e->slot(1,8),Args{lit223,get(e->slot(1,2),lit54)});
call(e->slot(1,8),Args{lit224,get(e->slot(1,2),lit57)});
call(e->slot(1,8),Args{lit225,get(e->slot(1,2),lit58)});
if(truth(V(!truth(get(e->slot(1,2),lit129))))){return Args{};
}
call(e->slot(1,8),Args{lit226,get(e->slot(1,2),lit52)});
call(e->slot(1,8),Args{lit227,get(e->slot(1,2),lit53)});
call(e->slot(1,8),Args{lit228,get(e->slot(1,2),lit54)});
call(e->slot(1,8),Args{lit229,get(e->slot(1,2),lit55)});
call(e->slot(1,8),Args{lit230,get(e->slot(1,2),lit56)});
call(e->slot(1,8),Args{lit231,get(e->slot(1,2),lit57)});
call(e->slot(1,8),Args{lit232,get(e->slot(1,2),lit58)});
call(e->slot(1,8),Args{lit233,get(e->slot(1,2),lit59)});
call(e->slot(1,8),Args{lit234,get(e->slot(1,2),lit60)});
call(e->slot(1,8),Args{lit235,get(e->slot(1,2),lit61)});
call(e->slot(1,8),Args{lit236,get(e->slot(1,2),lit62)});
call(e->slot(1,8),Args{lit237,get(e->slot(1,2),lit63)});
call(e->slot(1,8),Args{lit238,get(e->slot(1,2),lit64)});
call(e->slot(1,8),Args{lit239,get(e->slot(1,2),lit65)});
call(e->slot(1,8),Args{lit240,get(e->slot(1,2),lit66)});
call(e->slot(1,8),Args{lit241,get(e->slot(1,2),lit67)});
call(e->slot(1,8),Args{lit242,get(e->slot(1,2),lit68)});
call(e->slot(1,8),Args{lit243,([&](){V t245=([&](){V t246=get(e->slot(1,2),lit116);return truth(t246)?V(1.0):t246;})();return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,8),Args{lit244,([&](){V t247=([&](){V t248=get(e->slot(1,2),lit117);return truth(t248)?V(1.0):t248;})();return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,8),Args{lit245,([&](){V t249=([&](){V t250=get(e->slot(1,2),lit118);return truth(t250)?V(1.0):t250;})();return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,8),Args{lit246,([&](){V t251=([&](){V t252=get(e->slot(1,2),lit119);return truth(t252)?V(1.0):t252;})();return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,8),Args{lit247,([&](){V t253=([&](){V t254=get(e->slot(1,2),lit120);return truth(t254)?V(1.0):t254;})();return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,8),Args{lit248,([&](){V t255=([&](){V t256=get(e->slot(1,2),lit121);return truth(t256)?V(1.0):t256;})();return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,8),Args{lit249,([&](){V t257=([&](){V t258=get(e->slot(1,2),lit122);return truth(t258)?V(1.0):t258;})();return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,8),Args{lit250,([&](){V t259=([&](){V t260=get(e->slot(1,2),lit123);return truth(t260)?V(1.0):t260;})();return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,8),Args{lit251,([&](){V t261=([&](){V t262=get(e->slot(1,2),lit124);return truth(t262)?V(1.0):t262;})();return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,8),Args{lit252,([&](){V t263=([&](){V t264=get(e->slot(1,2),lit125);return truth(t264)?V(1.0):t264;})();return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,8),Args{lit253,([&](){V t265=([&](){V t266=get(e->slot(1,2),lit126);return truth(t266)?V(1.0):t266;})();return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,8),Args{lit254,get(e->slot(1,2),lit73)});
call(e->slot(1,8),Args{lit255,get(e->slot(1,2),lit75)});
call(e->slot(1,8),Args{lit256,get(e->slot(1,2),lit74)});
call(e->slot(1,8),Args{lit257,get(e->slot(1,2),lit76)});
return Args{};});
Ref(e->slot(0,1),lit258).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t267=lit114;refs[0].put(std::move(t267));}
call(e->slot(1,29),Args{});
return Args{};}));
Ref(e->slot(0,1),lit259).put(native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t268=add(([&](){V t269=get(e->slot(1,2),lit115);return !truth(t269)?V(0.0):t269;})(),V(1.0));refs[0].put(std::move(t268));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t270=first(call(e->slot(1,5),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit48),get(get(e->slot(1,1),lit1),lit49)}));refs[0].put(std::move(t270));}
call(e->slot(1,12),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t271=([&](){V t272=e->slot(0,1);return !truth(t272)?first(call(e->slot(1,10),Args{})):t272;})();refs[0].put(std::move(t271));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t273=lit260;refs[0].put(std::move(t273));}
call(e->slot(1,29),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t274=lit261;refs[0].put(std::move(t274));}
call(e->slot(1,26),Args{e->slot(0,1)});
call(e->slot(1,15),Args{e->slot(0,0)});
call(e->slot(1,27),Args{});
{V t275=([&](){V t276=([&](){V t277=gt(get(e->slot(1,2),lit70),get(e->slot(1,2),lit69));return truth(t277)?get(get(e->slot(1,1),lit1),lit4):t277;})();return !truth(t276)?get(get(e->slot(1,1),lit1),lit5):t276;})();e->slot(0,3)=std::move(t275);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t278=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit69),get(e->slot(1,2),lit70),e->slot(0,3),e->slot(0,0)}));refs[0].put(std::move(t278));}
{V t279=first(call(e->slot(1,5),Args{mul(first(call(get(e->get("math"),lit136),Args{sub(([&](){V t280=get(e->slot(1,2),lit72);return !truth(t280)?V(0.0):t280;})(),([&](){V t281=get(e->slot(1,2),lit70);return !truth(t281)?V(0.0):t281;})()),V(0.0)})),get(e->slot(1,2),lit110)),V(0.0),get(get(e->slot(1,1),lit1),lit47)}));e->slot(0,4)=std::move(t279);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t282=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit71),e->slot(0,4),get(get(e->slot(1,1),lit1),lit5),e->slot(0,0)}));refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t283=get(e->slot(1,2),lit70);refs[0].put(std::move(t283));}
call(e->slot(1,28),Args{});
call(e->slot(1,29),Args{});
return Args{};}));
Ref(e->slot(0,1),lit262).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t284=get(e->slot(1,2),lit69);return !truth(t284)?V(0.0):t284;})()};
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t285=get(e->slot(1,2),lit71);return !truth(t285)?V(0.0):t285;})()};
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t286=get(e->slot(1,2),lit70);return !truth(t286)?V(0.0):t286;})()};
return Args{};}));
Ref(e->slot(0,1),lit265).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit266),Args{concat(lit267,concat(lit268,concat(lit269,concat(lit270,lit271)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit113)})),([&](){V t287=get(e->slot(1,2),lit115);return !truth(t287)?V(0.0):t287;})(),([&](){V t288=get(e->slot(1,2),lit69);return !truth(t288)?V(0.0):t288;})(),([&](){V t289=get(e->slot(1,2),lit70);return !truth(t289)?V(0.0):t289;})(),([&](){V t290=get(e->slot(1,2),lit71);return !truth(t290)?V(0.0):t290;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit111)})),([&](){V t291=get(e->slot(1,2),lit52);return !truth(t291)?V(0.0):t291;})(),([&](){V t292=get(e->slot(1,2),lit53);return !truth(t292)?V(0.0):t292;})(),([&](){V t293=get(e->slot(1,2),lit54);return !truth(t293)?V(0.0):t293;})(),([&](){V t294=get(e->slot(1,2),lit55);return !truth(t294)?V(0.0):t294;})(),([&](){V t295=get(e->slot(1,2),lit57);return !truth(t295)?V(0.0):t295;})(),([&](){V t296=get(e->slot(1,2),lit60);return !truth(t296)?V(0.0):t296;})(),([&](){V t297=get(e->slot(1,2),lit61);return !truth(t297)?V(0.0):t297;})(),([&](){V t298=get(e->slot(1,2),lit62);return !truth(t298)?V(0.0):t298;})(),([&](){V t299=get(e->slot(1,2),lit63);return !truth(t299)?V(0.0):t299;})(),([&](){V t300=get(e->slot(1,2),lit64);return !truth(t300)?V(0.0):t300;})(),([&](){V t301=get(e->slot(1,2),lit65);return !truth(t301)?V(0.0):t301;})(),([&](){V t302=get(e->slot(1,2),lit66);return !truth(t302)?V(0.0):t302;})(),([&](){V t303=get(e->slot(1,2),lit67);return !truth(t303)?V(0.0):t303;})(),([&](){V t304=get(e->slot(1,2),lit68);return !truth(t304)?V(0.0):t304;})(),([&](){V t305=([&](){V t306=get(e->slot(1,2),lit116);return truth(t306)?lit272:t306;})();return !truth(t305)?lit273:t305;})(),([&](){V t307=([&](){V t308=get(e->slot(1,2),lit117);return truth(t308)?lit272:t308;})();return !truth(t307)?lit273:t307;})(),([&](){V t309=([&](){V t310=get(e->slot(1,2),lit118);return truth(t310)?lit272:t310;})();return !truth(t309)?lit273:t309;})(),([&](){V t311=([&](){V t312=get(e->slot(1,2),lit119);return truth(t312)?lit272:t312;})();return !truth(t311)?lit273:t311;})(),([&](){V t313=([&](){V t314=get(e->slot(1,2),lit120);return truth(t314)?lit272:t314;})();return !truth(t313)?lit273:t313;})(),([&](){V t315=([&](){V t316=get(e->slot(1,2),lit121);return truth(t316)?lit272:t316;})();return !truth(t315)?lit273:t315;})(),([&](){V t317=([&](){V t318=get(e->slot(1,2),lit122);return truth(t318)?lit272:t318;})();return !truth(t317)?lit273:t317;})(),([&](){V t319=([&](){V t320=get(e->slot(1,2),lit123);return truth(t320)?lit272:t320;})();return !truth(t319)?lit273:t319;})(),([&](){V t321=([&](){V t322=get(e->slot(1,2),lit124);return truth(t322)?lit272:t322;})();return !truth(t321)?lit273:t321;})(),([&](){V t323=([&](){V t324=get(e->slot(1,2),lit125);return truth(t324)?lit272:t324;})();return !truth(t323)?lit273:t323;})(),([&](){V t325=([&](){V t326=get(e->slot(1,2),lit126);return truth(t326)?lit272:t326;})();return !truth(t325)?lit273:t325;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

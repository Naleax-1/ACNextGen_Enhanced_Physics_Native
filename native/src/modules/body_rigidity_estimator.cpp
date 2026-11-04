// Generated native C++ from pinned body_rigidity_estimator.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("brakeTemperatureInputContract");
static const V lit3("original");
static const V lit4("refMass");
static const V lit5("refWheelbase");
static const V lit6("refTrack");
static const V lit7("refHeight");
static const V lit8("refColliderLength");
static const V lit9("refColliderWidth");
static const V lit10("refColliderHeight");
static const V lit11("refTorsionalStiffness");
static const V lit12("minTorsionalStiffness");
static const V lit13("maxTorsionalStiffness");
static const V lit14("refTorsionalDamping");
static const V lit15("minRigidity");
static const V lit16("maxRigidity");
static const V lit17("minFlexFactor");
static const V lit18("maxFlexFactor");
static const V lit19("massWeight");
static const V lit20("wheelbaseWeight");
static const V lit21("trackWeight");
static const V lit22("heightWeight");
static const V lit23("colliderWeight");
static const V lit24("suspensionWeight");
static const V lit25("maxColliders");
static const V lit26("defaultMass");
static const V lit27("defaultWheelbase");
static const V lit28("defaultTrackF");
static const V lit29("defaultTrackR");
static const V lit30("defaultCGLocation");
static const V lit31("defaultRideHeight");
static const V lit32("massBalanceInfluence");
static const V lit33("yawInertiaInfluence");
static const V lit34("cgShiftInfluence");
static const V lit35("loadInstabilityFlexGain");
static const V lit36("tireHopFlexGain");
static const V lit37("damageFlexGain");
static const V lit38("conditionFlexGain");
static const V lit39("brakeThermalFlexGain");
static const V lit40("brakeLockFlexGain");
static const V lit41("suspensionStressFlexGain");
static const V lit42("chassisEnergyFlexGain");
static const V lit43("maxBasePenalty");
static const V lit44("maxRuntimeFlexPenalty");
static const V lit45("runtimeReadInterval");
static const V lit46("debugStoreInterval");
static const V lit47("mass");
static const V lit48("inertiaX");
static const V lit49("inertiaY");
static const V lit50("inertiaZ");
static const V lit51("wheelbase");
static const V lit52("trackF");
static const V lit53("trackR");
static const V lit54("avgTrack");
static const V lit55("cgLocation");
static const V lit56("rideHeightApprox");
static const V lit57("frontSpring");
static const V lit58("rearSpring");
static const V lit59("frontDamper");
static const V lit60("rearDamper");
static const V lit61("colliderCount");
static const V lit62("colliderWidth");
static const V lit63("colliderHeight");
static const V lit64("colliderLength");
static const V lit65("colliderVolume");
static const V lit66("extensionFlexFound");
static const V lit67("torsionalStiffness");
static const V lit68("torsionalDamping");
static const V lit69("massFactor");
static const V lit70("wheelbaseFactor");
static const V lit71("trackFactor");
static const V lit72("heightFactor");
static const V lit73("colliderFactor");
static const V lit74("suspensionFactor");
static const V lit75("extensionFactor");
static const V lit76("baseFlexPenalty");
static const V lit77("runtimeFlexPenalty");
static const V lit78("rootFlexPenalty");
static const V lit79("brakeThermalStress");
static const V lit80("brakeLockAvg");
static const V lit81("suspensionStress");
static const V lit82("chassisEnergy");
static const V lit83("bodyRigidity");
static const V lit84("bodyFlexFactor");
static const V lit85("torsionFactor");
static const V lit86("bendingFactor");
static const V lit87("dampingFactor");
static const V lit88("status");
static const V lit89("INIT");
static const V lit90("updateCount");
static const V lit91("initialized");
static const V lit92("massLinked");
static const V lit93("loadLinked");
static const V lit94("tireLinked");
static const V lit95("damageLinked");
static const V lit96("brakeLinked");
static const V lit97("suspensionLinked");
static const V lit98("chassisLinked");
static const V lit99("runtimeReadTimer");
static const V lit100("debugStoreTimer");
static const V lit101("debugStoreNow");
static const V lit102("state");
static const V lit103("debug");
static const V lit104("safeStore");
static const V lit105("safeLoadRaw");
static const V lit106("#");
static const V lit107("getCarConfig");
static const V lit108("string");
static const V lit109("match");
static const V lit110("([^,]+),([^,]+),([^,]+)");
static const V lit111("max");
static const V lit112("BASIC");
static const V lit113("TOTALMASS");
static const V lit114("INERTIA");
static const V lit115("1.0,1.0,1.0");
static const V lit116("WHEELBASE");
static const V lit117("CG_LOCATION");
static const V lit118("FRONT");
static const V lit119("TRACK");
static const V lit120("REAR");
static const V lit121("BASEY");
static const V lit122("RIDE");
static const V lit123("PICKUP_FRONT_HEIGHT");
static const V lit124("PICKUP_REAR_HEIGHT");
static const V lit125("SPRING_RATE");
static const V lit126("DAMP_BUMP");
static const V lit127("COLLIDER_");
static const V lit128("SIZE");
static const V lit129("_EXTENSION_FLEX");
static const V lit130("TORSIONAL_STIFFNESS");
static const V lit131("TORSIONAL_DAMPING");
static const V lit132("current_wheel_brake_temperature_max_v1");
static const V lit133("getCar");
static const V lit134("wheels");
static const V lit135("huge");
static const V lit136("brakeTemperature");
static const V lit137("number");
static const V lit138("abs");
static const V lit139("Current body wheel brake temperature unavailable");
static const V lit140("brakeTemperatureInput");
static const V lit141("brakeTemperatureSource");
static const V lit142("CURRENT_WHEEL_BRAKE_TEMPERATURE_MAX");
static const V lit143("ngp_brake_temp_max");
static const V lit144("ngp_brake_temp_avg");
static const V lit145("ngp_brake_disc_temp_avg");
static const V lit146("Invalid body brake temperature input contract");
static const V lit147("ngp_vehicle_mass_scale");
static const V lit148("ngp_vehicle_yaw_inertia_scale");
static const V lit149("ngp_vehicle_cg_rear_shift");
static const V lit150("ngp_virtual_instability");
static const V lit151("ngp_load_transfer_pitch_ratio");
static const V lit152("ngp_tire_hop_energy_");
static const V lit153("ngp_tire_hop_");
static const V lit154("ngp_condition_total");
static const V lit155("ngp_vehicle_condition_total");
static const V lit156("ngp_damage_chassis");
static const V lit157("ngp_brake_lock_");
static const V lit158("ngp_susp_integrated_force_");
static const V lit159("ngp_susp_int_force_");
static const V lit160("ngp_susp_");
static const V lit161("ngp_damper_force_");
static const V lit162("ngp_damper_");
static const V lit163("ngp_damper_hyst_");
static const V lit164("ngp_spring_force_");
static const V lit165("ngp_progressive_spring_");
static const V lit166("min");
static const V lit167("ngp_chassis_energy");
static const V lit168("ngp_chassis_body_energy");
static const V lit169("ngp_body_chassis_energy");
static const V lit170("ngp_body_rigidity_status");
static const V lit171("ngp_body_rigidity_estimator_status");
static const V lit172("ngp_body_status");
static const V lit173("ngp_body_rigidity_update_count");
static const V lit174("ngp_body_update_count");
static const V lit175("ngp_body_rigidity");
static const V lit176("ngp_body_flex_factor");
static const V lit177("ngp_body_torsion_factor");
static const V lit178("ngp_body_bending_factor");
static const V lit179("ngp_body_damping_factor");
static const V lit180("ngp_body_mass");
static const V lit181("ngp_body_wheelbase");
static const V lit182("ngp_body_track_avg");
static const V lit183("ngp_body_ride_height");
static const V lit184("ngp_body_collider_count");
static const V lit185("ngp_body_extension_flex_found");
static const V lit186("ngp_body_base_flex_penalty");
static const V lit187("ngp_body_root_flex_penalty");
static const V lit188("ngp_body_runtime_flex_penalty");
static const V lit189("ngp_body_brake_thermal_stress");
static const V lit190("ngp_body_brake_lock_avg");
static const V lit191("ngp_body_suspension_stress");
static const V lit192("ngp_body_chassis_energy_input");
static const V lit193("ngp_body_mass_linked");
static const V lit194("ngp_body_load_linked");
static const V lit195("ngp_body_tire_linked");
static const V lit196("ngp_body_damage_linked");
static const V lit197("ngp_body_brake_linked");
static const V lit198("ngp_body_suspension_linked");
static const V lit199("ngp_body_chassis_linked");
static const V lit200("ngp_body_factor_mass");
static const V lit201("ngp_body_factor_wheelbase");
static const V lit202("ngp_body_factor_track");
static const V lit203("ngp_body_factor_height");
static const V lit204("ngp_body_factor_collider");
static const V lit205("ngp_body_factor_suspension");
static const V lit206("ngp_body_factor_extension");
static const V lit207("init");
static const V lit208("RUNNING");
static const V lit209("update");
static const V lit210("BAD DT");
static const V lit211("getRigidity");
static const V lit212("getFlexFactor");
static const V lit213("getTorsionFactor");
static const V lit214("getBendingFactor");
static const V lit215("debugStr");
static const V lit216("format");
static const V lit217("Status %s / Count %.0f\n");
static const V lit218("Rig %.3f Flex %.3f Tors %.3f Bend %.3f Damp %.3f\n");
static const V lit219("Mass %.0f WB %.2f Track %.2f RH %.2f\n");
static const V lit220("Penalty B %.3f R %.3f Total %.3f\n");
static const V lit221("BrakeHeat %.2f Lock %.2f Susp %.2f Energy %.2f\n");
static const V lit222("Links Mass:%s Load:%s Tire:%s Damage:%s Brake:%s Susp:%s Chassis:%s");
static const V lit223("OK");
static const V lit224("NIL");
V load_body_rigidity_estimator(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(27);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(1300.0));set(z,lit5,V(2.55));set(z,lit6,V(1.55));set(z,lit7,V(0.55));set(z,lit8,V(4.2));set(z,lit9,V(1.7));set(z,lit10,V(0.45));set(z,lit11,V(18000.0));set(z,lit12,V(6000.0));set(z,lit13,V(42000.0));set(z,lit14,V(450.0));set(z,lit15,V(0.2));set(z,lit16,V(1.35));set(z,lit17,V(0.25));set(z,lit18,V(1.8));set(z,lit19,V(0.22));set(z,lit20,V(0.2));set(z,lit21,V(0.12));set(z,lit22,V(0.16));set(z,lit23,V(0.18));set(z,lit24,V(0.12));set(z,lit25,V(16.0));set(z,lit26,V(1300.0));set(z,lit27,V(2.55));set(z,lit28,V(1.55));set(z,lit29,V(1.55));set(z,lit30,V(0.5));set(z,lit31,V(0.33));set(z,lit32,V(0.14));set(z,lit33,V(0.1));set(z,lit34,V(0.08));set(z,lit35,V(0.08));set(z,lit36,V(0.06));set(z,lit37,V(0.16));set(z,lit38,V(0.1));set(z,lit39,V(0.04));set(z,lit40,V(0.05));set(z,lit41,V(0.06));set(z,lit42,V(0.05));set(z,lit43,V(0.45));set(z,lit44,V(0.55));set(z,lit45,V(0.05));set(z,lit46,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit47,V(1300.0));set(z,lit48,V(1.0));set(z,lit49,V(1.0));set(z,lit50,V(1.0));set(z,lit51,V(2.55));set(z,lit52,V(1.55));set(z,lit53,V(1.55));set(z,lit54,V(1.55));set(z,lit55,V(0.5));set(z,lit56,V(0.33));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(1.7));set(z,lit63,V(0.45));set(z,lit64,V(4.2));set(z,lit65,V(0.0));set(z,lit66,V(false));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(1.0));set(z,lit70,V(1.0));set(z,lit71,V(1.0));set(z,lit72,V(1.0));set(z,lit73,V(1.0));set(z,lit74,V(1.0));set(z,lit75,V(1.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(1.0));set(z,lit84,V(1.0));set(z,lit85,V(1.0));set(z,lit86,V(1.0));set(z,lit87,V(1.0));set(z,lit88,lit89);set(z,lit90,V(0.0));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(999.0));set(z,lit100,V(999.0));set(z,lit101,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=eq(e->slot(0,2),V());return !truth(t8)?ne(e->slot(0,2),e->slot(0,2)):t8;})())){return Args{([&](){V t9=e->slot(0,1);return !truth(t9)?V(0.0):t9;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t10=first(call(e->slot(1,3),Args{e->slot(0,0),([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()}));refs[0].put(std::move(t10));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(e->slot(0,0)))};
}
return Args{e->slot(0,0)};
return Args{};});
{V t13=get(e->slot(0,0),lit104);e->slot(0,6)=std::move(t13);}
{V t14=get(e->slot(0,0),lit105);e->slot(0,7)=std::move(t14);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t15=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t15);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{double t18=num(V(1.0)),t19=num(first(call(e->get("select"),joined(Args{lit106},e->dots())))),t20=num(V(1.0));for(double t21=t18;(t20>0?t21<=t19:t21>=t19);t21+=t20){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t21);{V t22=first(call(e->get("select"),joined(Args{e->slot(0,0)},e->dots())));e->slot(0,1)=std::move(t22);}
{V t23=first(call(e->slot(2,7),Args{e->slot(0,1)}));e->slot(0,2)=std::move(t23);}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,2),([&](){V t24=e->slot(1,0);return !truth(t24)?V(0.0):t24;})()})),V(true)};
}
}}
return Args{([&](){V t25=e->slot(0,0);return !truth(t25)?V(0.0):t25;})(),V(false)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(([&](){V t26=V(!truth(e->get("ac")));return !truth(t26)?V(!truth(get(e->get("ac"),lit107))):t26;})())){return Args{e->slot(0,2)};
}
{Args t27=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit107),Args{V(0.0),e->slot(1,0),e->slot(1,1),e->slot(1,2)});
return Args{};})});e->slot(0,3)=arg(t27,0);e->slot(0,4)=arg(t27,1);}
if(truth(([&](){V t28=V(!truth(e->slot(0,3)));return !truth(t28)?eq(e->slot(0,4),V()):t28;})())){return Args{e->slot(0,2)};
}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return call(e->slot(1,3),Args{first(call(e->slot(1,10),Args{e->slot(0,0),e->slot(0,1),e->slot(0,2)})),e->slot(0,2)});
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);if(truth(ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit108))){return Args{([&](){V t29=e->slot(0,1);return !truth(t29)?V(0.0):t29;})(),([&](){V t30=e->slot(0,2);return !truth(t30)?V(0.0):t30;})(),([&](){V t31=e->slot(0,3);return !truth(t31)?V(0.0):t31;})()};
}
{Args t32=call(get(e->get("string"),lit109),Args{e->slot(0,0),lit110});e->slot(0,4)=arg(t32,0);e->slot(0,5)=arg(t32,1);e->slot(0,6)=arg(t32,2);}
return joined(Args{first(call(e->slot(1,3),Args{e->slot(0,4),([&](){V t33=e->slot(0,1);return !truth(t33)?V(0.0):t33;})()})),first(call(e->slot(1,3),Args{e->slot(0,5),([&](){V t34=e->slot(0,2);return !truth(t34)?V(0.0):t34;})()}))},call(e->slot(1,3),Args{e->slot(0,6),([&](){V t35=e->slot(0,3);return !truth(t35)?V(0.0):t35;})()}));
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t36=first(call(get(e->get("math"),lit111),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(1.0)})),V(0.001)}));refs[0].put(std::move(t36));}
return Args{divv(V(1.0),e->slot(0,0))};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t37=add(([&](){V t38=get(e->slot(1,2),lit100);return !truth(t38)?V(0.0):t38;})(),first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t37));}
if(truth(ge(get(e->slot(1,2),lit100),get(get(e->slot(1,1),lit1),lit46)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t39=V(0.0);refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t40=V(true);refs[0].put(std::move(t40));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t41=V(false);refs[0].put(std::move(t41));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t42=first(call(e->slot(1,11),Args{lit112,lit113,get(get(e->slot(1,1),lit1),lit26)}));refs[0].put(std::move(t42));}
{V t43=first(call(e->slot(1,10),Args{lit112,lit114,lit115}));e->slot(0,0)=std::move(t43);}
{std::array<Ref,3> refs{Ref(e->slot(1,2),lit48),Ref(e->slot(1,2),lit49),Ref(e->slot(1,2),lit50)};Args t44=call(e->slot(1,12),Args{e->slot(0,0),V(1.0),V(1.0),V(1.0)});refs[0].put(arg(t44,0));refs[1].put(arg(t44,1));refs[2].put(arg(t44,2));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t45=first(call(e->slot(1,11),Args{lit112,lit116,get(get(e->slot(1,1),lit1),lit27)}));refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t46=first(call(e->slot(1,11),Args{lit112,lit117,get(get(e->slot(1,1),lit1),lit30)}));refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t47=first(call(e->slot(1,11),Args{lit118,lit119,get(get(e->slot(1,1),lit1),lit28)}));refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t48=first(call(e->slot(1,11),Args{lit120,lit119,get(get(e->slot(1,1),lit1),lit29)}));refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t49=mul(add(get(e->slot(1,2),lit52),get(e->slot(1,2),lit53)),V(0.5));refs[0].put(std::move(t49));}
{V t50=first(call(e->slot(1,11),Args{lit118,lit121,V(-num(V(0.13)))}));e->slot(0,0)=std::move(t50);}
{V t51=first(call(e->slot(1,11),Args{lit120,lit121,V(-num(V(0.13)))}));e->slot(0,1)=std::move(t51);}
{V t52=first(call(e->slot(1,11),Args{lit122,lit123,V(-num(V(0.33)))}));e->slot(0,2)=std::move(t52);}
{V t53=first(call(e->slot(1,11),Args{lit122,lit124,V(-num(V(0.33)))}));e->slot(0,3)=std::move(t53);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t54=first(call(e->slot(1,5),Args{mul(add(add(add(e->slot(0,2),e->slot(0,3)),e->slot(0,0)),e->slot(0,1)),V(0.25))}));refs[0].put(std::move(t54));}
if(truth(le(get(e->slot(1,2),lit56),V(0.05)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t55=get(get(e->slot(1,1),lit1),lit31);refs[0].put(std::move(t55));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t56=first(call(e->slot(1,11),Args{lit118,lit125,V(0.0)}));refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t57=first(call(e->slot(1,11),Args{lit120,lit125,V(0.0)}));refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t58=first(call(e->slot(1,11),Args{lit118,lit126,V(0.0)}));refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t59=first(call(e->slot(1,11),Args{lit120,lit126,V(0.0)}));refs[0].put(std::move(t59));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t60=V(0.0);e->slot(0,0)=std::move(t60);}
{V t61=V(0.0);e->slot(0,1)=std::move(t61);}
{V t62=V(0.0);e->slot(0,2)=std::move(t62);}
{V t63=V(0.0);e->slot(0,3)=std::move(t63);}
{V t64=V(0.0);e->slot(0,4)=std::move(t64);}
{double t65=num(V(0.0)),t66=num(sub(get(get(e->slot(1,1),lit1),lit25),V(1.0))),t67=num(V(1.0));for(double t68=t65;(t67>0?t68<=t66:t68>=t66);t68+=t67){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t68);{V t69=first(call(e->slot(2,10),Args{concat(lit127,first(call(e->get("tostring"),Args{e->slot(0,0)}))),lit128,V()}));e->slot(0,1)=std::move(t69);}
if(truth(eq(first(call(e->get("type"),Args{e->slot(0,1)})),lit108))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{Args t70=call(e->slot(3,12),Args{e->slot(1,1),V(0.0),V(0.0),V(0.0)});e->slot(0,0)=arg(t70,0);e->slot(0,1)=arg(t70,1);e->slot(0,2)=arg(t70,2);}
{std::array<Ref,3> refs{Ref(e,0,0),Ref(e,0,1),Ref(e,0,2)};Args t71=joined(Args{first(call(e->slot(3,5),Args{e->slot(0,0)})),first(call(e->slot(3,5),Args{e->slot(0,1)}))},call(e->slot(3,5),Args{e->slot(0,2)}));refs[0].put(arg(t71,0));refs[1].put(arg(t71,1));refs[2].put(arg(t71,2));}
if(truth(([&](){V t72=([&](){V t73=gt(e->slot(0,0),V(0.0));return truth(t73)?gt(e->slot(0,1),V(0.0)):t73;})();return truth(t72)?gt(e->slot(0,2),V(0.0)):t72;})())){{std::array<Ref,1> refs{Ref(e,2,4)};V t74=add(e->slot(2,4),V(1.0));refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e,2,0)};V t75=first(call(get(e->get("math"),lit111),Args{e->slot(2,0),e->slot(0,0)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e,2,1)};V t76=first(call(get(e->get("math"),lit111),Args{e->slot(2,1),e->slot(0,1)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e,2,2)};V t77=first(call(get(e->get("math"),lit111),Args{e->slot(2,2),e->slot(0,2)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e,2,3)};V t78=add(e->slot(2,3),mul(mul(e->slot(0,0),e->slot(0,1)),e->slot(0,2)));refs[0].put(std::move(t78));}
}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t79=e->slot(0,4);refs[0].put(std::move(t79));}
if(truth(gt(e->slot(0,4),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t80=e->slot(0,0);refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t81=e->slot(0,1);refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t82=e->slot(0,2);refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t83=e->slot(0,3);refs[0].put(std::move(t83));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t84=get(get(e->slot(1,1),lit1),lit9);refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t85=get(get(e->slot(1,1),lit1),lit10);refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t86=get(get(e->slot(1,1),lit1),lit8);refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t87=mul(mul(get(e->slot(1,2),lit62),get(e->slot(1,2),lit63)),get(e->slot(1,2),lit64));refs[0].put(std::move(t87));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t88=first(call(e->slot(1,11),Args{lit129,lit130,V(0.0)}));e->slot(0,0)=std::move(t88);}
{V t89=first(call(e->slot(1,11),Args{lit129,lit131,V(0.0)}));e->slot(0,1)=std::move(t89);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t90=e->slot(0,0);refs[0].put(std::move(t90));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t91=e->slot(0,1);refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t92=([&](){V t93=gt(e->slot(0,0),V(0.0));return !truth(t93)?gt(e->slot(0,1),V(0.0)):t93;})();refs[0].put(std::move(t92));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{Args t94=Args{};e->slot(0,0)=arg(t94,0);e->slot(0,1)=arg(t94,1);}
{V t95=get(get(e->slot(1,1),lit1),lit2);e->slot(0,2)=std::move(t95);}
if(truth(eq(e->slot(0,2),lit132))){auto parent=e;Env storage(parent,false,4);auto e=&storage;{V t96=([&](){V t97=([&](){V t98=e->get("ac");return truth(t98)?get(e->get("ac"),lit133):t98;})();return truth(t97)?first(call(get(e->get("ac"),lit133),Args{V(0.0)})):t97;})();e->slot(0,0)=std::move(t96);}
{V t99=([&](){V t100=e->slot(0,0);return truth(t100)?get(e->slot(0,0),lit134):t100;})();e->slot(0,1)=std::move(t99);}
{V t101=([&](){V z=table();return z;})();e->slot(0,2)=std::move(t101);}
{V t102=V(-num(get(e->get("math"),lit135)));e->slot(0,3)=std::move(t102);}
{double t103=num(V(0.0)),t104=num(V(3.0)),t105=num(V(1.0));for(double t106=t103;(t105>0?t106<=t104:t106>=t104);t106+=t105){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t106);{V t107=([&](){V t108=e->slot(1,1);return truth(t108)?get(e->slot(1,1),e->slot(0,0)):t108;})();e->slot(0,1)=std::move(t107);}
{V t109=([&](){V t110=e->slot(0,1);return truth(t110)?get(e->slot(0,1),lit136):t110;})();e->slot(0,2)=std::move(t109);}
if(truth(([&](){V t111=([&](){V t112=([&](){V t113=ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit137);return !truth(t113)?ne(e->slot(0,2),e->slot(0,2)):t113;})();return !truth(t112)?eq(first(call(get(e->get("math"),lit138),Args{e->slot(0,2)})),get(e->get("math"),lit135)):t112;})();return !truth(t111)?lt(e->slot(0,2),V(-num(V(273.15)))):t111;})())){call(e->get("error"),Args{lit139});
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),e->slot(0,0))};V t114=e->slot(0,2);refs[0].put(std::move(t114));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t115=first(call(get(e->get("math"),lit111),Args{e->slot(1,3),e->slot(0,2)}));refs[0].put(std::move(t115));}
}}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit140)};V t116=e->slot(0,2);refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit141)};V t117=lit142;refs[0].put(std::move(t117));}
{std::array<Ref,2> refs{Ref(e,1,0),Ref(e,1,1)};Args t118=Args{e->slot(0,3),V(true)};refs[0].put(arg(t118,0));refs[1].put(arg(t118,1));}
}else if(truth(eq(e->slot(0,2),lit3))){{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t119=call(e->slot(1,9),Args{V(25.0),lit143,lit144,lit145});refs[0].put(arg(t119,0));refs[1].put(arg(t119,1));}
}else{call(e->get("error"),Args{lit146});
}

return Args{e->slot(0,0),e->slot(0,1)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t120=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t120);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t121=first(call(e->slot(1,4),Args{add(add(add(mul(get(e->slot(1,2),lit79),get(e->slot(0,0),lit39)),mul(get(e->slot(1,2),lit80),get(e->slot(0,0),lit40))),mul(get(e->slot(1,2),lit81),get(e->slot(0,0),lit41))),mul(get(e->slot(1,2),lit82),get(e->slot(0,0),lit42))),V(0.0),get(e->slot(0,0),lit44)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t122=first(call(e->slot(1,4),Args{add(get(e->slot(1,2),lit76),get(e->slot(1,2),lit77)),V(0.0),get(e->slot(0,0),lit44)}));refs[0].put(std::move(t122));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,21);auto e=&storage;{V t123=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t123);}
{V t124=first(call(e->slot(1,7),Args{lit147}));e->slot(0,1)=std::move(t124);}
{V t125=first(call(e->slot(1,7),Args{lit148}));e->slot(0,2)=std::move(t125);}
{V t126=first(call(e->slot(1,7),Args{lit149}));e->slot(0,3)=std::move(t126);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t127=([&](){V t128=([&](){V t129=ne(e->slot(0,1),V());return !truth(t129)?ne(e->slot(0,2),V()):t129;})();return !truth(t128)?ne(e->slot(0,3),V()):t128;})();refs[0].put(std::move(t127));}
{V t130=first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)}));e->slot(0,4)=std::move(t130);}
{V t131=first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)}));e->slot(0,5)=std::move(t131);}
{V t132=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));e->slot(0,6)=std::move(t132);}
{Args t133=call(e->slot(1,9),Args{V(0.0),lit150,lit151});e->slot(0,7)=arg(t133,0);e->slot(0,8)=arg(t133,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t134=e->slot(0,8);refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e,0,7)};V t135=first(call(e->slot(1,5),Args{e->slot(0,7)}));refs[0].put(std::move(t135));}
{V t136=V(0.0);e->slot(0,9)=std::move(t136);}
{V t137=V(false);e->slot(0,10)=std::move(t137);}
{double t138=num(V(0.0)),t139=num(V(3.0)),t140=num(V(1.0));for(double t141=t138;(t140>0?t141<=t139:t141>=t139);t141+=t140){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t141);{Args t142=call(e->slot(2,9),Args{V(0.0),concat(lit152,e->slot(0,0)),concat(lit153,e->slot(0,0))});e->slot(0,1)=arg(t142,0);e->slot(0,2)=arg(t142,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e,1,10)};V t143=V(true);refs[0].put(std::move(t143));}
}
{std::array<Ref,1> refs{Ref(e,1,9)};V t144=add(e->slot(1,9),first(call(e->slot(2,4),Args{e->slot(0,1),V(0.0),V(1.0)})));refs[0].put(std::move(t144));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t145=e->slot(0,10);refs[0].put(std::move(t145));}
{Args t146=call(e->slot(1,9),Args{V(0.0),lit154,lit155,lit156});e->slot(0,11)=arg(t146,0);e->slot(0,12)=arg(t146,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t147=e->slot(0,12);refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e,0,11)};V t148=first(call(e->slot(1,4),Args{e->slot(0,11),V(0.0),V(1.0)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t149=first(call(e->slot(1,4),Args{add(add(add(add(add(mul(sub(e->slot(0,4),V(1.0)),get(e->slot(0,0),lit32)),mul(sub(e->slot(0,5),V(1.0)),get(e->slot(0,0),lit33))),mul(first(call(e->slot(1,5),Args{e->slot(0,6)})),get(e->slot(0,0),lit34))),mul(e->slot(0,7),get(e->slot(0,0),lit35))),mul(mul(e->slot(0,9),V(0.25)),get(e->slot(0,0),lit36))),mul(e->slot(0,11),add(get(e->slot(0,0),lit37),get(e->slot(0,0),lit38)))),V(0.0),get(e->slot(0,0),lit43)}));refs[0].put(std::move(t149));}
{Args t150=call(e->slot(1,19),Args{});e->slot(0,13)=arg(t150,0);e->slot(0,14)=arg(t150,1);}
{V t151=V(0.0);e->slot(0,15)=std::move(t151);}
{V t152=e->slot(0,14);e->slot(0,16)=std::move(t152);}
{double t153=num(V(0.0)),t154=num(V(3.0)),t155=num(V(1.0));for(double t156=t153;(t155>0?t156<=t154:t156>=t154);t156+=t155){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t156);{Args t157=call(e->slot(2,9),Args{V(0.0),concat(lit157,e->slot(0,0))});e->slot(0,1)=arg(t157,0);e->slot(0,2)=arg(t157,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e,1,16)};V t158=V(true);refs[0].put(std::move(t158));}
}
{std::array<Ref,1> refs{Ref(e,1,15)};V t159=add(e->slot(1,15),first(call(e->slot(2,4),Args{e->slot(0,1),V(0.0),V(1.0)})));refs[0].put(std::move(t159));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t160=e->slot(0,16);refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t161=mul(e->slot(0,15),V(0.25));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t162=first(call(e->slot(1,4),Args{divv(sub(e->slot(0,13),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t162));}
{V t163=V(0.0);e->slot(0,17)=std::move(t163);}
{V t164=V(false);e->slot(0,18)=std::move(t164);}
{double t165=num(V(0.0)),t166=num(V(3.0)),t167=num(V(1.0));for(double t168=t165;(t167>0?t168<=t166:t168>=t166);t168+=t167){auto parent=e;Env storage(parent,false,7);auto e=&storage;e->slot(0,0)=V(t168);{Args t169=call(e->slot(2,9),Args{V(0.0),concat(lit158,e->slot(0,0)),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0))});e->slot(0,1)=arg(t169,0);e->slot(0,2)=arg(t169,1);}
{Args t170=call(e->slot(2,9),Args{V(0.0),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0)),concat(lit163,e->slot(0,0))});e->slot(0,3)=arg(t170,0);e->slot(0,4)=arg(t170,1);}
{Args t171=call(e->slot(2,9),Args{V(0.0),concat(lit164,e->slot(0,0)),concat(lit165,e->slot(0,0))});e->slot(0,5)=arg(t171,0);e->slot(0,6)=arg(t171,1);}
if(truth(([&](){V t172=([&](){V t173=e->slot(0,2);return !truth(t173)?e->slot(0,4):t173;})();return !truth(t172)?e->slot(0,6):t172;})())){{std::array<Ref,1> refs{Ref(e,1,18)};V t174=V(true);refs[0].put(std::move(t174));}
}
{std::array<Ref,1> refs{Ref(e,1,17)};V t175=add(e->slot(1,17),first(call(get(e->get("math"),lit166),Args{divv(add(add(first(call(e->slot(2,5),Args{e->slot(0,1)})),first(call(e->slot(2,5),Args{e->slot(0,3)}))),first(call(e->slot(2,5),Args{e->slot(0,5)}))),V(25000.0)),V(1.0)})));refs[0].put(std::move(t175));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t176=e->slot(0,18);refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t177=first(call(e->slot(1,4),Args{mul(e->slot(0,17),V(0.25)),V(0.0),V(1.0)}));refs[0].put(std::move(t177));}
{Args t178=call(e->slot(1,9),Args{V(0.0),lit167,lit168,lit169});e->slot(0,19)=arg(t178,0);e->slot(0,20)=arg(t178,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t179=e->slot(0,20);refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t180=first(call(e->slot(1,4),Args{e->slot(0,19),V(0.0),V(1.0)}));refs[0].put(std::move(t180));}
call(e->slot(1,20),Args{});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t181=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t181);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t182=first(call(e->slot(1,4),Args{first(call(e->slot(1,13),Args{divv(get(e->slot(1,2),lit47),get(e->slot(0,0),lit4))})),V(0.65),V(1.35)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t183=first(call(e->slot(1,4),Args{first(call(e->slot(1,13),Args{divv(get(e->slot(1,2),lit51),get(e->slot(0,0),lit5))})),V(0.7),V(1.3)}));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t184=first(call(e->slot(1,4),Args{divv(get(e->slot(1,2),lit54),get(e->slot(0,0),lit6)),V(0.75),V(1.25)}));refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t185=first(call(e->slot(1,4),Args{first(call(e->slot(1,13),Args{divv(get(e->slot(1,2),lit56),get(e->slot(0,0),lit7))})),V(0.7),V(1.3)}));refs[0].put(std::move(t185));}
{V t186=first(call(e->slot(1,13),Args{divv(get(e->slot(1,2),lit64),get(e->slot(0,0),lit8))}));e->slot(0,1)=std::move(t186);}
{V t187=divv(get(e->slot(1,2),lit62),get(e->slot(0,0),lit9));e->slot(0,2)=std::move(t187);}
{V t188=first(call(e->slot(1,4),Args{divv(get(e->slot(1,2),lit63),get(e->slot(0,0),lit10)),V(0.45),V(1.25)}));e->slot(0,3)=std::move(t188);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t189=first(call(e->slot(1,4),Args{add(add(mul(e->slot(0,1),V(0.45)),mul(e->slot(0,2),V(0.35))),mul(e->slot(0,3),V(0.2))),V(0.6),V(1.35)}));refs[0].put(std::move(t189));}
{V t190=mul(add(get(e->slot(1,2),lit57),get(e->slot(1,2),lit58)),V(0.5));e->slot(0,4)=std::move(t190);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t191=first(call(e->slot(1,4),Args{divv(e->slot(0,4),V(65000.0)),V(0.65),V(1.35)}));refs[0].put(std::move(t191));}
if(truth(get(e->slot(1,2),lit66))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t192=divv(first(call(e->slot(2,4),Args{get(e->slot(2,2),lit67),get(e->slot(1,0),lit12),get(e->slot(1,0),lit13)})),get(e->slot(1,0),lit11));e->slot(0,0)=std::move(t192);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit75)};V t193=first(call(e->slot(2,4),Args{e->slot(0,0),V(0.45),V(1.85)}));refs[0].put(std::move(t193));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t194=V(1.0);refs[0].put(std::move(t194));}
}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t195=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t195);}
{V t196=add(add(add(add(add(mul(get(e->slot(1,2),lit69),get(e->slot(0,0),lit19)),mul(get(e->slot(1,2),lit70),get(e->slot(0,0),lit20))),mul(get(e->slot(1,2),lit71),get(e->slot(0,0),lit21))),mul(get(e->slot(1,2),lit72),get(e->slot(0,0),lit22))),mul(get(e->slot(1,2),lit73),get(e->slot(0,0),lit23))),mul(get(e->slot(1,2),lit74),get(e->slot(0,0),lit24)));e->slot(0,1)=std::move(t196);}
if(truth(get(e->slot(1,2),lit66))){{std::array<Ref,1> refs{Ref(e,0,1)};V t197=add(mul(e->slot(0,1),V(0.65)),mul(get(e->slot(1,2),lit75),V(0.35)));refs[0].put(std::move(t197));}
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t198=sub(e->slot(0,1),get(e->slot(1,2),lit78));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t199=first(call(e->slot(1,4),Args{e->slot(0,1),get(e->slot(0,0),lit15),get(e->slot(0,0),lit16)}));refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t200=first(call(e->slot(1,4),Args{divv(V(1.0),first(call(get(e->get("math"),lit111),Args{get(e->slot(1,2),lit83),V(0.05)}))),get(e->slot(0,0),lit17),get(e->slot(0,0),lit18)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t201=first(call(e->slot(1,4),Args{mul(mul(get(e->slot(1,2),lit84),divv(get(e->slot(1,2),lit51),get(e->slot(0,0),lit5))),divv(get(e->slot(0,0),lit6),first(call(get(e->get("math"),lit111),Args{get(e->slot(1,2),lit54),V(0.1)})))),V(0.35),V(2.0)}));refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t202=first(call(e->slot(1,4),Args{mul(mul(get(e->slot(1,2),lit84),divv(get(e->slot(1,2),lit47),get(e->slot(0,0),lit4))),divv(get(e->slot(1,2),lit51),get(e->slot(0,0),lit5))),V(0.35),V(2.0)}));refs[0].put(std::move(t202));}
if(truth(gt(get(e->slot(1,2),lit68),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t203=first(call(e->slot(1,4),Args{divv(get(e->slot(1,2),lit68),get(e->slot(0,0),lit14)),V(0.5),V(1.8)}));refs[0].put(std::move(t203));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t204=V(1.0);refs[0].put(std::move(t204));}
}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,6),Args{lit170,get(e->slot(1,2),lit88)});
call(e->slot(1,6),Args{lit171,get(e->slot(1,2),lit88)});
call(e->slot(1,6),Args{lit172,get(e->slot(1,2),lit88)});
call(e->slot(1,6),Args{lit173,get(e->slot(1,2),lit90)});
call(e->slot(1,6),Args{lit174,get(e->slot(1,2),lit90)});
call(e->slot(1,6),Args{lit175,get(e->slot(1,2),lit83)});
call(e->slot(1,6),Args{lit176,get(e->slot(1,2),lit84)});
call(e->slot(1,6),Args{lit177,get(e->slot(1,2),lit85)});
call(e->slot(1,6),Args{lit178,get(e->slot(1,2),lit86)});
call(e->slot(1,6),Args{lit179,get(e->slot(1,2),lit87)});
call(e->slot(1,6),Args{lit180,get(e->slot(1,2),lit47)});
call(e->slot(1,6),Args{lit181,get(e->slot(1,2),lit51)});
call(e->slot(1,6),Args{lit182,get(e->slot(1,2),lit54)});
call(e->slot(1,6),Args{lit183,get(e->slot(1,2),lit56)});
call(e->slot(1,6),Args{lit184,get(e->slot(1,2),lit61)});
call(e->slot(1,6),Args{lit185,([&](){V t205=([&](){V t206=get(e->slot(1,2),lit66);return truth(t206)?V(1.0):t206;})();return !truth(t205)?V(0.0):t205;})()});
if(truth(V(!truth(get(e->slot(1,2),lit101))))){return Args{};
}
call(e->slot(1,6),Args{lit186,get(e->slot(1,2),lit76)});
call(e->slot(1,6),Args{lit187,get(e->slot(1,2),lit78)});
call(e->slot(1,6),Args{lit188,get(e->slot(1,2),lit77)});
call(e->slot(1,6),Args{lit189,get(e->slot(1,2),lit79)});
call(e->slot(1,6),Args{lit190,get(e->slot(1,2),lit80)});
call(e->slot(1,6),Args{lit191,get(e->slot(1,2),lit81)});
call(e->slot(1,6),Args{lit192,get(e->slot(1,2),lit82)});
call(e->slot(1,6),Args{lit193,([&](){V t207=([&](){V t208=get(e->slot(1,2),lit92);return truth(t208)?V(1.0):t208;})();return !truth(t207)?V(0.0):t207;})()});
call(e->slot(1,6),Args{lit194,([&](){V t209=([&](){V t210=get(e->slot(1,2),lit93);return truth(t210)?V(1.0):t210;})();return !truth(t209)?V(0.0):t209;})()});
call(e->slot(1,6),Args{lit195,([&](){V t211=([&](){V t212=get(e->slot(1,2),lit94);return truth(t212)?V(1.0):t212;})();return !truth(t211)?V(0.0):t211;})()});
call(e->slot(1,6),Args{lit196,([&](){V t213=([&](){V t214=get(e->slot(1,2),lit95);return truth(t214)?V(1.0):t214;})();return !truth(t213)?V(0.0):t213;})()});
call(e->slot(1,6),Args{lit197,([&](){V t215=([&](){V t216=get(e->slot(1,2),lit96);return truth(t216)?V(1.0):t216;})();return !truth(t215)?V(0.0):t215;})()});
call(e->slot(1,6),Args{lit198,([&](){V t217=([&](){V t218=get(e->slot(1,2),lit97);return truth(t218)?V(1.0):t218;})();return !truth(t217)?V(0.0):t217;})()});
call(e->slot(1,6),Args{lit199,([&](){V t219=([&](){V t220=get(e->slot(1,2),lit98);return truth(t220)?V(1.0):t220;})();return !truth(t219)?V(0.0):t219;})()});
call(e->slot(1,6),Args{lit200,get(e->slot(1,2),lit69)});
call(e->slot(1,6),Args{lit201,get(e->slot(1,2),lit70)});
call(e->slot(1,6),Args{lit202,get(e->slot(1,2),lit71)});
call(e->slot(1,6),Args{lit203,get(e->slot(1,2),lit72)});
call(e->slot(1,6),Args{lit204,get(e->slot(1,2),lit73)});
call(e->slot(1,6),Args{lit205,get(e->slot(1,2),lit74)});
call(e->slot(1,6),Args{lit206,get(e->slot(1,2),lit75)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,15),Args{});
call(e->slot(1,16),Args{});
call(e->slot(1,17),Args{});
call(e->slot(1,18),Args{});
call(e->slot(1,22),Args{});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t221=get(get(e->slot(1,1),lit1),lit45);refs[0].put(std::move(t221));}
}
if(truth(V(!truth(e->slot(0,0))))){if(truth(lt(get(e->slot(1,2),lit99),get(get(e->slot(1,1),lit1),lit45)))){return Args{V(false)};
}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t222=V(0.0);refs[0].put(std::move(t222));}
call(e->slot(1,21),Args{});
call(e->slot(1,23),Args{});
return Args{V(true)};
return Args{};});
Ref(e->slot(0,1),lit207).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t223=lit89;refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t224=add(get(e->slot(1,2),lit90),V(1.0));refs[0].put(std::move(t224));}
call(e->slot(1,25),Args{});
call(e->slot(1,26),Args{V(true)});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t225=V(true);refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t226=lit208;refs[0].put(std::move(t226));}
call(e->slot(1,24),Args{});
return Args{};}));
Ref(e->slot(0,1),lit209).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t227=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t227));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t228=lit210;refs[0].put(std::move(t228));}
call(e->slot(1,24),Args{});
return Args{};
}
call(e->slot(1,14),Args{e->slot(0,0)});
if(truth(V(!truth(get(e->slot(1,2),lit91))))){call(get(e->slot(1,1),lit207),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t229=add(get(e->slot(1,2),lit90),V(1.0));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t230=add(([&](){V t231=get(e->slot(1,2),lit99);return !truth(t231)?V(0.0):t231;})(),e->slot(0,0));refs[0].put(std::move(t230));}
{V t232=first(call(e->slot(1,26),Args{V(false)}));e->slot(0,3)=std::move(t232);}
if(truth(([&](){V t233=V(!truth(e->slot(0,3)));return truth(t233)?eq(get(get(e->slot(1,1),lit1),lit2),lit132):t233;})())){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t234=first(call(e->slot(2,19),Args{}));e->slot(0,0)=std::move(t234);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit96)};V t235=V(true);refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit79)};V t236=first(call(e->slot(2,4),Args{divv(sub(e->slot(0,0),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t236));}
call(e->slot(2,20),Args{});
call(e->slot(2,23),Args{});
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t237=lit208;refs[0].put(std::move(t237));}
call(e->slot(1,24),Args{});
return Args{};}));
Ref(e->slot(0,1),lit211).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t238=get(e->slot(1,2),lit83);return !truth(t238)?V(1.0):t238;})()};
return Args{};}));
Ref(e->slot(0,1),lit212).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t239=get(e->slot(1,2),lit84);return !truth(t239)?V(1.0):t239;})()};
return Args{};}));
Ref(e->slot(0,1),lit213).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t240=get(e->slot(1,2),lit85);return !truth(t240)?V(1.0):t240;})()};
return Args{};}));
Ref(e->slot(0,1),lit214).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t241=get(e->slot(1,2),lit86);return !truth(t241)?V(1.0):t241;})()};
return Args{};}));
Ref(e->slot(0,1),lit215).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit216),Args{concat(lit217,concat(lit218,concat(lit219,concat(lit220,concat(lit221,lit222))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit88)})),([&](){V t242=get(e->slot(1,2),lit90);return !truth(t242)?V(0.0):t242;})(),([&](){V t243=get(e->slot(1,2),lit83);return !truth(t243)?V(1.0):t243;})(),([&](){V t244=get(e->slot(1,2),lit84);return !truth(t244)?V(1.0):t244;})(),([&](){V t245=get(e->slot(1,2),lit85);return !truth(t245)?V(1.0):t245;})(),([&](){V t246=get(e->slot(1,2),lit86);return !truth(t246)?V(1.0):t246;})(),([&](){V t247=get(e->slot(1,2),lit87);return !truth(t247)?V(1.0):t247;})(),([&](){V t248=get(e->slot(1,2),lit47);return !truth(t248)?V(0.0):t248;})(),([&](){V t249=get(e->slot(1,2),lit51);return !truth(t249)?V(0.0):t249;})(),([&](){V t250=get(e->slot(1,2),lit54);return !truth(t250)?V(0.0):t250;})(),([&](){V t251=get(e->slot(1,2),lit56);return !truth(t251)?V(0.0):t251;})(),([&](){V t252=get(e->slot(1,2),lit76);return !truth(t252)?V(0.0):t252;})(),([&](){V t253=get(e->slot(1,2),lit77);return !truth(t253)?V(0.0):t253;})(),([&](){V t254=get(e->slot(1,2),lit78);return !truth(t254)?V(0.0):t254;})(),([&](){V t255=get(e->slot(1,2),lit79);return !truth(t255)?V(0.0):t255;})(),([&](){V t256=get(e->slot(1,2),lit80);return !truth(t256)?V(0.0):t256;})(),([&](){V t257=get(e->slot(1,2),lit81);return !truth(t257)?V(0.0):t257;})(),([&](){V t258=get(e->slot(1,2),lit82);return !truth(t258)?V(0.0):t258;})(),([&](){V t259=([&](){V t260=get(e->slot(1,2),lit92);return truth(t260)?lit223:t260;})();return !truth(t259)?lit224:t259;})(),([&](){V t261=([&](){V t262=get(e->slot(1,2),lit93);return truth(t262)?lit223:t262;})();return !truth(t261)?lit224:t261;})(),([&](){V t263=([&](){V t264=get(e->slot(1,2),lit94);return truth(t264)?lit223:t264;})();return !truth(t263)?lit224:t263;})(),([&](){V t265=([&](){V t266=get(e->slot(1,2),lit95);return truth(t266)?lit223:t266;})();return !truth(t265)?lit224:t265;})(),([&](){V t267=([&](){V t268=get(e->slot(1,2),lit96);return truth(t268)?lit223:t268;})();return !truth(t267)?lit224:t267;})(),([&](){V t269=([&](){V t270=get(e->slot(1,2),lit97);return truth(t270)?lit223:t270;})();return !truth(t269)?lit224:t269;})(),([&](){V t271=([&](){V t272=get(e->slot(1,2),lit98);return truth(t272)?lit223:t272;})();return !truth(t271)?lit224:t271;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

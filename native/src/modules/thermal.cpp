// Generated native C++ from pinned thermal.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("brakeToHub");
static const V lit3("tyreToHub");
static const V lit4("hubCoolBase");
static const V lit5("hubCoolSpeed");
static const V lit6("diffHeatScale");
static const V lit7("diffLSDHeatGain");
static const V lit8("diffTorqueHeatGain");
static const V lit9("diffCoolBase");
static const V lit10("diffCoolSpeed");
static const V lit11("gearboxHeatScale");
static const V lit12("drivetrainHeatGain");
static const V lit13("driveTorqueHeatGain");
static const V lit14("gearboxCoolBase");
static const V lit15("gearboxCoolSpeed");
static const V lit16("brakeLockHeatGain");
static const V lit17("brakeRootHeatGain");
static const V lit18("tireMemoryTempGain");
static const V lit19("tireHeatTempGain");
static const V lit20("roadShockHubGain");
static const V lit21("contactLossHubGain");
static const V lit22("ambientTemp");
static const V lit23("maxTemp");
static const V lit24("stressRefHub");
static const V lit25("stressRefBrake");
static const V lit26("stressRefTyre");
static const V lit27("stressRefDiff");
static const V lit28("stressRefGearbox");
static const V lit29("unavailableTau");
static const V lit30("debugStoreInterval");
static const V lit31("hubTemp");
static const V lit32("brakeTemp");
static const V lit33("tyreTemp");
static const V lit34("rubberMemory");
static const V lit35("tireMemoryHeat");
static const V lit36("brakeLock");
static const V lit37("roadShock");
static const V lit38("contactLoss");
static const V lit39("diffTemp");
static const V lit40("gearboxTemp");
static const V lit41("diffHeat");
static const V lit42("gearboxHeat");
static const V lit43("wheelDiff");
static const V lit44("lsdDiff");
static const V lit45("lsdHeat");
static const V lit46("lsdLock");
static const V lit47("diffTorque");
static const V lit48("drivetrainHeat");
static const V lit49("driveTorque");
static const V lit50("shiftShock");
static const V lit51("rpm");
static const V lit52("gas");
static const V lit53("gear");
static const V lit54("speed");
static const V lit55("avgHubTemp");
static const V lit56("maxHubTemp");
static const V lit57("avgBrakeTemp");
static const V lit58("maxBrakeTemp");
static const V lit59("avgTyreTemp");
static const V lit60("maxTyreTemp");
static const V lit61("hubStress");
static const V lit62("brakeStress");
static const V lit63("tyreStress");
static const V lit64("diffStress");
static const V lit65("gearboxStress");
static const V lit66("thermalStress");
static const V lit67("wheelsValid");
static const V lit68("carLinked");
static const V lit69("brakeLinked");
static const V lit70("tyreLinked");
static const V lit71("memoryLinked");
static const V lit72("diffLinked");
static const V lit73("drivetrainLinked");
static const V lit74("roadLinked");
static const V lit75("contactLinked");
static const V lit76("status");
static const V lit77("INIT");
static const V lit78("updateCount");
static const V lit79("debugStoreTimer");
static const V lit80("debugStoreNow");
static const V lit81("state");
static const V lit82("debug");
static const V lit83("huge");
static const V lit84("abs");
static const V lit85("safeField");
static const V lit86("safeLoadRaw");
static const V lit87("safeStore");
static const V lit88("getCar");
static const V lit89("wheels");
static const V lit90("length");
static const V lit91("function");
static const V lit92("number");
static const V lit93("x");
static const V lit94("y");
static const V lit95("z");
static const V lit96("sqrt");
static const V lit97("speedKmh");
static const V lit98("velocity");
static const V lit99("localVelocity");
static const V lit100("ngp_hub_speed");
static const V lit101("ngp_thermal_speed");
static const V lit102("max");
static const V lit103("brakeTemperature");
static const V lit104("discTemperature");
static const V lit105("ngp_brake_temp_");
static const V lit106("ngp_brake_disc_temp_");
static const V lit107("ngp_brake_system_temp_");
static const V lit108("ngp_brake_thermal_temp_");
static const V lit109("ngp_hub_brake_temp_");
static const V lit110("tyreCoreTemperature");
static const V lit111("tyreMiddleTemperature");
static const V lit112("tyreInsideTemperature");
static const V lit113("tyreOutsideTemperature");
static const V lit114("ngp_tyre_temp_");
static const V lit115("ngp_tire_temp_");
static const V lit116("ngp_memory_virtual_temp_");
static const V lit117("ngp_tire_memory_virtual_temp_");
static const V lit118("ngp_thermal_tire_temp_");
static const V lit119("ngp_rubber_memory_");
static const V lit120("ngp_tire_memory_");
static const V lit121("ngp_memory_");
static const V lit122("ngp_slide_memory_");
static const V lit123("ngp_tire_memory_heat_");
static const V lit124("ngp_memory_heat_");
static const V lit125("ngp_memory_micro_heat_");
static const V lit126("ngp_memory_macro_heat_");
static const V lit127("ngp_slip_thermal_memory_");
static const V lit128("ngp_brake_lock_");
static const V lit129("ngp_brake_lock_state_");
static const V lit130("ngp_road_shock_");
static const V lit131("ngp_rii_shock_");
static const V lit132("ngp_road_impact_");
static const V lit133("ngp_rii_impact_");
static const V lit134("ngp_impact_wheel_");
static const V lit135("ngp_contact_loss_");
static const V lit136("ngp_tire_contact_loss_");
static const V lit137("ngp_tcr_contact_loss_");
static const V lit138("ngp_road_surface_limit_");
static const V lit139("ngp_rii_surface_limit_");
static const V lit140("angularSpeed");
static const V lit141("ngp_hub_omega_2");
static const V lit142("ngp_hub_omega_3");
static const V lit143("ngp_lsd_diff");
static const V lit144("ngp_diff_diff");
static const V lit145("ngp_lsd_sdiff");
static const V lit146("ngp_diff_sdiff");
static const V lit147("ngp_thermal_lsd_diff");
static const V lit148("ngp_lsd_heat");
static const V lit149("ngp_diff_heat");
static const V lit150("ngp_thermal_lsd_heat");
static const V lit151("ngp_lsd_lock");
static const V lit152("ngp_diff_lock");
static const V lit153("ngp_hub_lsd_lock");
static const V lit154("ngp_diff_input_torque_nm");
static const V lit155("ngp_drivetrain_diff_input_torque_nm");
static const V lit156("ngp_drive_torque");
static const V lit157("ngp_dt_torque");
static const V lit158("ngp_engine_rpm");
static const V lit159("ngp_throttle");
static const V lit160("ngp_gear");
static const V lit161("ngp_gearbox_heat");
static const V lit162("ngp_drive_gearbox_heat");
static const V lit163("ngp_drivetrain_gearbox_heat");
static const V lit164("ngp_dt_gearbox_heat");
static const V lit165("ngp_drivetrain_torque");
static const V lit166("ngp_drive_transmitted_torque");
static const V lit167("ngp_shift_shock");
static const V lit168("ngp_drive_shift_shock");
static const V lit169("ngp_drivetrain_shift_shock");
static const V lit170("ngp_thermal_status");
static const V lit171("UNKNOWN");
static const V lit172("ngp_thermal_update_count");
static const V lit173("ngp_thermal_wheels_valid");
static const V lit174("ngp_hub_temp_");
static const V lit175("ngp_thermal_hub_temp_");
static const V lit176("ngp_th_hub_temp_");
static const V lit177("ngp_brake_temp_read_");
static const V lit178("ngp_thermal_brake_temp_");
static const V lit179("ngp_th_brake_temp_");
static const V lit180("ngp_th_tire_temp_");
static const V lit181("ngp_rubber_memory_temp_");
static const V lit182("ngp_thermal_memory_heat_");
static const V lit183("ngp_th_memory_heat_");
static const V lit184("ngp_diff_temp");
static const V lit185("ngp_gearbox_temp");
static const V lit186("ngp_thermal_diff_temp");
static const V lit187("ngp_thermal_gearbox_temp");
static const V lit188("ngp_th_diff_temp");
static const V lit189("ngp_th_gearbox_temp");
static const V lit190("ngp_thermal_diff_heat");
static const V lit191("ngp_thermal_gearbox_heat");
static const V lit192("ngp_thermal_wheel_diff");
static const V lit193("ngp_thermal_drivetrain_heat");
static const V lit194("ngp_thermal_avg_hub_temp");
static const V lit195("ngp_thermal_max_hub_temp");
static const V lit196("ngp_thermal_avg_brake_temp");
static const V lit197("ngp_thermal_max_brake_temp");
static const V lit198("ngp_thermal_avg_tire_temp");
static const V lit199("ngp_thermal_max_tire_temp");
static const V lit200("ngp_thermal_hub_stress");
static const V lit201("ngp_thermal_brake_stress");
static const V lit202("ngp_thermal_tire_stress");
static const V lit203("ngp_thermal_diff_stress");
static const V lit204("ngp_thermal_gearbox_stress");
static const V lit205("ngp_thermal_stress");
static const V lit206("ngp_virtual_thermal_stress");
static const V lit207("ngp_brake_root_heat_avg");
static const V lit208("ngp_th_stress");
static const V lit209("ngp_thermal_car_linked");
static const V lit210("ngp_thermal_brake_linked");
static const V lit211("ngp_thermal_tyre_linked");
static const V lit212("ngp_thermal_memory_linked");
static const V lit213("ngp_thermal_diff_linked");
static const V lit214("ngp_thermal_drivetrain_linked");
static const V lit215("ngp_thermal_road_linked");
static const V lit216("ngp_thermal_contact_linked");
static const V lit217("ngp_thermal_lsd_lock");
static const V lit218("ngp_thermal_diff_torque");
static const V lit219("ngp_thermal_drive_torque");
static const V lit220("ngp_thermal_shift_shock");
static const V lit221("init");
static const V lit222("update");
static const V lit223("BAD DT");
static const V lit224("RUNNING");
static const V lit225("NO WHEELS");
static const V lit226("NO CAR");
static const V lit227("getHubTemp");
static const V lit228("getBrakeTemp");
static const V lit229("getTyreTemp");
static const V lit230("getTireTemp");
static const V lit231("getDiffTemp");
static const V lit232("getGearboxTemp");
static const V lit233("getStress");
static const V lit234("getState");
static const V lit235("debugStr");
static const V lit236("format");
static const V lit237("%s Hub %.1f Brake %.1f Tire %.1f Mem %.2f Heat %.2f Lock %.2f Shock %.2f Loss %.2f");
static const V lit238("FL");
static const V lit239("FR");
static const V lit240("RL");
static const V lit241("RR");
static const V lit242("Status %s / Count %.0f / Wheels %s\n");
static const V lit243("Hub %.1f %.1f %.1f %.1f / Avg %.1f Max %.1f\n");
static const V lit244("Brake %.1f %.1f %.1f %.1f / Tire %.1f %.1f %.1f %.1f\n");
static const V lit245("Diff %.1f Gearbox %.1f / Heat D %.2f G %.2f\n");
static const V lit246("Stress H %.2f B %.2f T %.2f D %.2f G %.2f Total %.2f\n");
static const V lit247("Links Car:%s Brake:%s Tire:%s Mem:%s Diff:%s Drive:%s Road:%s CQ:%s");
static const V lit248("OK");
static const V lit249("NIL");
V load_thermal(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(32);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.15));set(z,lit3,V(0.05));set(z,lit4,V(0.02));set(z,lit5,V(0.004));set(z,lit6,V(8.0));set(z,lit7,V(0.06));set(z,lit8,V(1.8e-05));set(z,lit9,V(0.015));set(z,lit10,V(0.003));set(z,lit11,V(0.8));set(z,lit12,V(1.0));set(z,lit13,V(1e-05));set(z,lit14,V(0.01));set(z,lit15,V(0.002));set(z,lit16,V(18.0));set(z,lit17,V(22.0));set(z,lit18,V(6.0));set(z,lit19,V(18.0));set(z,lit20,V(3.0));set(z,lit21,V(2.0));set(z,lit22,V(25.0));set(z,lit23,V(1600.0));set(z,lit24,V(180.0));set(z,lit25,V(850.0));set(z,lit26,V(140.0));set(z,lit27,V(180.0));set(z,lit28,V(170.0));set(z,lit29,V(0.8));set(z,lit30,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit31,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit32,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit33,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit34,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit35,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit36,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit37,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit38,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit39,V(25.0));set(z,lit40,V(25.0));set(z,lit41,V(0.0));set(z,lit42,V(0.0));set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,V(0.0));set(z,lit46,V(0.0));set(z,lit47,V(0.0));set(z,lit48,V(0.0));set(z,lit49,V(0.0));set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(25.0));set(z,lit56,V(25.0));set(z,lit57,V(25.0));set(z,lit58,V(25.0));set(z,lit59,V(25.0));set(z,lit60,V(25.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(false));set(z,lit68,V(false));set(z,lit69,V(false));set(z,lit70,V(false));set(z,lit71,V(false));set(z,lit72,V(false));set(z,lit73,V(false));set(z,lit74,V(false));set(z,lit75,V(false));set(z,lit76,lit77);set(z,lit78,V(0.0));set(z,lit79,V(999.0));set(z,lit80,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit81)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit82)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit83)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit83)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,3),Args{e->slot(0,0),([&](){V t13=e->slot(0,1);return !truth(t13)?V(0.0):t13;})()}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit84),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t14=get(e->slot(0,0),lit85);e->slot(0,6)=std::move(t14);}
{V t15=get(e->slot(0,0),lit86);e->slot(0,7)=std::move(t15);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t16=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t16);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t19=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t19);}
{double t20=num(V(1.0)),t21=num(length(e->slot(0,1))),t22=num(V(1.0));for(double t23=t20;(t22>0?t23<=t21:t23>=t21);t23+=t22){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t23);{V t24=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t24);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t25=e->slot(1,0);return !truth(t25)?V(0.0):t25;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
{V t26=get(e->slot(0,0),lit87);e->slot(0,10)=std::move(t26);}
e->slot(0,11)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t27=V(!truth(e->get("ac")));return !truth(t27)?V(!truth(get(e->get("ac"),lit88))):t27;})())){return Args{V()};
}
{Args t28=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit88),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t28,0);e->slot(0,1)=arg(t28,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,6),Args{e->slot(0,0),lit89,V()});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t29=first(call(e->slot(1,12),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t29);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t30=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t30,0);e->slot(0,4)=arg(t30,1);}
if(truth(([&](){V t31=e->slot(0,3);return truth(t31)?e->slot(0,4):t31;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t32=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t32,0));refs[1].put(arg(t32,1));}
if(truth(([&](){V t33=e->slot(0,3);return truth(t33)?e->slot(0,4):t33;})())){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t34=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit90)})),lit91))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit90)})),lit92))){return Args{get(e->slot(1,0),lit90)};
}
{V t35=first(call(e->slot(2,3),Args{get(e->slot(1,0),lit93),V(0.0)}));e->slot(0,0)=std::move(t35);}
{V t36=first(call(e->slot(2,3),Args{get(e->slot(1,0),lit94),V(0.0)}));e->slot(0,1)=std::move(t36);}
{V t37=first(call(e->slot(2,3),Args{get(e->slot(1,0),lit95),V(0.0)}));e->slot(0,2)=std::move(t37);}
return call(get(e->get("math"),lit96),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t34,0);e->slot(0,2)=arg(t34,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,3),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t38=first(call(e->slot(1,6),Args{e->slot(0,0),lit97,V()}));e->slot(0,1)=std::move(t38);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,3),Args{e->slot(0,1),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t39=V();refs[0].put(std::move(t39));}
if(truth(ne(e->slot(0,1),V()))){return Args{mul(first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(3.6))};
}
{V t40=first(call(e->slot(1,6),Args{e->slot(0,0),lit98,V()}));e->slot(0,2)=std::move(t40);}
if(truth(e->slot(0,2))){return Args{mul(first(call(e->slot(1,14),Args{e->slot(0,2)})),V(3.6))};
}
{V t41=first(call(e->slot(1,6),Args{e->slot(0,0),lit99,V()}));e->slot(0,3)=std::move(t41);}
if(truth(e->slot(0,3))){return Args{mul(first(call(e->slot(1,14),Args{e->slot(0,3)})),V(3.6))};
}
return call(e->slot(1,8),joined(Args{lit100},call(e->slot(1,8),Args{lit101,V(0.0)})));
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t42=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t43=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t44=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t45=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t45));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t46=add(([&](){V t47=get(e->slot(1,2),lit79);return !truth(t47)?V(0.0):t47;})(),([&](){V t48=e->slot(0,0);return !truth(t48)?V(0.0):t48;})());refs[0].put(std::move(t46));}
if(truth(ge(get(e->slot(1,2),lit79),([&](){V t49=get(get(e->slot(1,1),lit1),lit30);return !truth(t49)?V(0.25):t49;})()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t50=V(0.0);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t51=V(true);refs[0].put(std::move(t51));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t52=V(false);refs[0].put(std::move(t52));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{std::array<Ref,1> refs{Ref(e,0,0)};V t53=first(call(e->slot(1,3),Args{e->slot(0,0),e->slot(0,3)}));refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t54=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t55=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t56=first(call(e->slot(1,3),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit22)}));refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t57=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t57));}
{V t58=sub(add(e->slot(0,0),mul(e->slot(0,1),e->slot(0,4))),mul(mul(sub(e->slot(0,0),e->slot(0,3)),e->slot(0,2)),e->slot(0,4)));e->slot(0,5)=std::move(t58);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t59=first(call(get(e->get("math"),lit102),Args{e->slot(0,3),e->slot(0,5)}));refs[0].put(std::move(t59));}
return call(e->slot(1,4),Args{e->slot(0,5),e->slot(0,3),get(get(e->slot(1,1),lit1),lit23)});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return call(e->slot(1,4),Args{divv(sub(first(call(e->slot(1,3),Args{e->slot(0,0),e->slot(0,1)})),e->slot(0,1)),first(call(get(e->get("math"),lit102),Args{sub(e->slot(0,2),e->slot(0,1)),V(1.0)}))),V(0.0),V(1.0)});
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t60=first(call(e->slot(1,6),Args{e->slot(0,0),lit103,V()}));e->slot(0,3)=std::move(t60);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t61=V(true);refs[0].put(std::move(t61));}
return call(e->slot(1,3),Args{e->slot(0,3),e->slot(0,2)});
}
{std::array<Ref,1> refs{Ref(e,0,3)};V t62=first(call(e->slot(1,6),Args{e->slot(0,0),lit104,V()}));refs[0].put(std::move(t62));}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t63=V(true);refs[0].put(std::move(t63));}
return call(e->slot(1,3),Args{e->slot(0,3),e->slot(0,2)});
}
{Args t64=call(e->slot(1,9),Args{V(),concat(lit105,e->slot(0,1)),concat(lit106,e->slot(0,1)),concat(lit107,e->slot(0,1)),concat(lit108,e->slot(0,1)),concat(lit109,e->slot(0,1))});e->slot(0,4)=arg(t64,0);e->slot(0,5)=arg(t64,1);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t65=V(true);refs[0].put(std::move(t65));}
return call(e->slot(1,3),Args{e->slot(0,4),e->slot(0,2)});
}
return Args{([&](){V t66=get(get(e->slot(1,2),lit32),e->slot(0,1));return !truth(t66)?e->slot(0,2):t66;})()};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t67=([&](){V z=table();set(z,V(1.0),lit110);set(z,V(2.0),lit111);set(z,V(3.0),lit112);set(z,V(4.0),lit113);return z;})();e->slot(0,3)=std::move(t67);}
{double t68=num(V(1.0)),t69=num(length(e->slot(0,3))),t70=num(V(1.0));for(double t71=t68;(t70>0?t71<=t69:t71>=t69);t71+=t70){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t71);{V t72=first(call(e->slot(2,6),Args{e->slot(1,0),get(e->slot(1,3),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t72);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit70)};V t73=V(true);refs[0].put(std::move(t73));}
return call(e->slot(2,3),Args{e->slot(0,1),e->slot(1,2)});
}
}}
{Args t74=call(e->slot(1,9),Args{V(),concat(lit114,e->slot(0,1)),concat(lit115,e->slot(0,1)),concat(lit116,e->slot(0,1)),concat(lit117,e->slot(0,1)),concat(lit118,e->slot(0,1))});e->slot(0,4)=arg(t74,0);e->slot(0,5)=arg(t74,1);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t75=V(true);refs[0].put(std::move(t75));}
return call(e->slot(1,3),Args{e->slot(0,4),e->slot(0,2)});
}
return Args{([&](){V t76=get(get(e->slot(1,2),lit33),e->slot(0,1));return !truth(t76)?e->slot(0,2):t76;})()};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t77=call(e->slot(1,9),Args{V(0.0),concat(lit119,e->slot(0,0)),concat(lit120,e->slot(0,0)),concat(lit121,e->slot(0,0)),concat(lit122,e->slot(0,0))});e->slot(0,1)=arg(t77,0);e->slot(0,2)=arg(t77,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t78=V(true);refs[0].put(std::move(t78));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),e->slot(0,0))};V t79=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.5)}));refs[0].put(std::move(t79));}
{Args t80=call(e->slot(1,9),Args{V(0.0),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0)),concat(lit125,e->slot(0,0)),concat(lit126,e->slot(0,0)),concat(lit127,e->slot(0,0))});e->slot(0,3)=arg(t80,0);e->slot(0,4)=arg(t80,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t81=V(true);refs[0].put(std::move(t81));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit35),e->slot(0,0))};V t82=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.5)}));refs[0].put(std::move(t82));}
{Args t83=call(e->slot(1,9),Args{V(0.0),concat(lit128,e->slot(0,0)),concat(lit129,e->slot(0,0))});e->slot(0,5)=arg(t83,0);e->slot(0,6)=arg(t83,1);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t84=V(true);refs[0].put(std::move(t84));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit36),e->slot(0,0))};V t85=first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(1.5)}));refs[0].put(std::move(t85));}
{Args t86=call(e->slot(1,9),Args{V(0.0),concat(lit130,e->slot(0,0)),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0)),concat(lit133,e->slot(0,0)),concat(lit134,e->slot(0,0))});e->slot(0,7)=arg(t86,0);e->slot(0,8)=arg(t86,1);}
if(truth(ne(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t87=V(true);refs[0].put(std::move(t87));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit37),e->slot(0,0))};V t88=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0),V(1.5)}));refs[0].put(std::move(t88));}
{Args t89=call(e->slot(1,9),Args{V(0.0),concat(lit135,e->slot(0,0)),concat(lit136,e->slot(0,0)),concat(lit137,e->slot(0,0)),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0))});e->slot(0,9)=arg(t89,0);e->slot(0,10)=arg(t89,1);}
if(truth(ne(e->slot(0,10),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t90=V(true);refs[0].put(std::move(t90));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit38),e->slot(0,0))};V t91=first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0),V(1.5)}));refs[0].put(std::move(t91));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t92=first(call(e->slot(1,13),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,5)=std::move(t92);}
{V t93=first(call(e->slot(1,20),Args{e->slot(0,5),e->slot(0,1),e->slot(0,3)}));e->slot(0,6)=std::move(t93);}
{V t94=first(call(e->slot(1,21),Args{e->slot(0,5),e->slot(0,1),e->slot(0,3)}));e->slot(0,7)=std::move(t94);}
call(e->slot(1,22),Args{e->slot(0,1)});
{std::array<Ref,1> refs{Ref(e,0,7)};V t95=add(add(e->slot(0,7),mul(get(get(e->slot(1,2),lit34),e->slot(0,1)),get(get(e->slot(1,1),lit1),lit18))),mul(get(get(e->slot(1,2),lit35),e->slot(0,1)),get(get(e->slot(1,1),lit1),lit19)));refs[0].put(std::move(t95));}
{V t96=add(get(get(e->slot(1,1),lit1),lit4),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit5)));e->slot(0,8)=std::move(t96);}
{V t97=add(add(add(add(mul(sub(e->slot(0,6),get(get(e->slot(1,2),lit31),e->slot(0,1))),get(get(e->slot(1,1),lit1),lit2)),mul(sub(e->slot(0,7),get(get(e->slot(1,2),lit31),e->slot(0,1))),get(get(e->slot(1,1),lit1),lit3))),mul(get(get(e->slot(1,2),lit36),e->slot(0,1)),get(get(e->slot(1,1),lit1),lit16))),mul(get(get(e->slot(1,2),lit37),e->slot(0,1)),get(get(e->slot(1,1),lit1),lit20))),mul(get(get(e->slot(1,2),lit38),e->slot(0,1)),get(get(e->slot(1,1),lit1),lit21)));e->slot(0,9)=std::move(t97);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit31),e->slot(0,1))};V t98=first(call(e->slot(1,18),Args{get(get(e->slot(1,2),lit31),e->slot(0,1)),e->slot(0,9),e->slot(0,8),e->slot(0,3),e->slot(0,4)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit32),e->slot(0,1))};V t99=first(call(e->slot(1,4),Args{e->slot(0,6),e->slot(0,3),get(get(e->slot(1,1),lit1),lit23)}));refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit33),e->slot(0,1))};V t100=first(call(e->slot(1,4),Args{e->slot(0,7),e->slot(0,3),get(get(e->slot(1,1),lit1),lit23)}));refs[0].put(std::move(t100));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,3),Args{first(call(e->slot(1,6),Args{e->slot(0,0),lit140,V(0.0)})),V(0.0)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{V t101=first(call(e->slot(1,13),Args{e->slot(0,0),V(2.0)}));e->slot(0,1)=std::move(t101);}
{V t102=first(call(e->slot(1,13),Args{e->slot(0,0),V(3.0)}));e->slot(0,2)=std::move(t102);}
if(truth(([&](){V t103=e->slot(0,1);return !truth(t103)?e->slot(0,2):t103;})())){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t104=first(call(e->slot(2,24),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t104);}
{V t105=first(call(e->slot(2,24),Args{e->slot(1,2)}));e->slot(0,1)=std::move(t105);}
return call(e->slot(2,5),Args{sub(e->slot(0,0),e->slot(0,1))});
}
{V t106=first(call(e->slot(1,7),Args{lit141}));e->slot(0,3)=std::move(t106);}
{V t107=first(call(e->slot(1,7),Args{lit142}));e->slot(0,4)=std::move(t107);}
if(truth(([&](){V t108=ne(e->slot(0,3),V());return !truth(t108)?ne(e->slot(0,4),V()):t108;})())){return call(e->slot(1,5),Args{sub(first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})))});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t109=first(call(e->slot(1,25),Args{e->slot(0,0)}));e->slot(0,4)=std::move(t109);}
{Args t110=call(e->slot(1,9),Args{e->slot(0,4),lit143,lit144,lit145,lit146,lit147});e->slot(0,5)=arg(t110,0);e->slot(0,6)=arg(t110,1);}
{Args t111=call(e->slot(1,9),Args{V(0.0),lit148,lit149,lit150});e->slot(0,7)=arg(t111,0);e->slot(0,8)=arg(t111,1);}
{Args t112=call(e->slot(1,9),Args{V(0.0),lit151,lit152,lit153});e->slot(0,9)=arg(t112,0);e->slot(0,10)=arg(t112,1);}
{Args t113=call(e->slot(1,9),Args{V(0.0),lit154,lit155,lit156,lit157});e->slot(0,11)=arg(t113,0);e->slot(0,12)=arg(t113,1);}
if(truth(([&](){V t114=([&](){V t115=([&](){V t116=e->slot(0,6);return !truth(t116)?e->slot(0,8):t116;})();return !truth(t115)?e->slot(0,10):t115;})();return !truth(t114)?e->slot(0,12):t114;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t117=V(true);refs[0].put(std::move(t117));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t118=first(call(e->slot(1,5),Args{e->slot(0,4)}));refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t119=first(call(e->slot(1,5),Args{e->slot(0,5)}));refs[0].put(std::move(t119));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t120=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0),V(1000.0)}));refs[0].put(std::move(t120));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t121=first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0),V(1.0)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t122=first(call(e->slot(1,5),Args{e->slot(0,11)}));refs[0].put(std::move(t122));}
{V t123=first(call(get(e->get("math"),lit102),Args{get(e->slot(1,2),lit43),get(e->slot(1,2),lit44)}));e->slot(0,13)=std::move(t123);}
{V t124=add(add(add(mul(e->slot(0,13),get(get(e->slot(1,1),lit1),lit6)),mul(get(e->slot(1,2),lit45),get(get(e->slot(1,1),lit1),lit7))),mul(mul(get(e->slot(1,2),lit46),e->slot(0,13)),V(0.65))),mul(get(e->slot(1,2),lit47),get(get(e->slot(1,1),lit1),lit8)));e->slot(0,14)=std::move(t124);}
{V t125=add(get(get(e->slot(1,1),lit1),lit9),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit10)));e->slot(0,15)=std::move(t125);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t126=first(call(e->slot(1,18),Args{get(e->slot(1,2),lit39),e->slot(0,14),e->slot(0,15),e->slot(0,2),e->slot(0,3)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t127=e->slot(0,14);refs[0].put(std::move(t127));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t128=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{e->slot(0,0),lit51},call(e->slot(1,8),Args{lit158,V(0.0)})))),V(0.0)}));e->slot(0,4)=std::move(t128);}
{V t129=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{e->slot(0,0),lit52},call(e->slot(1,8),Args{lit159,V(0.0)})))),V(0.0)}));e->slot(0,5)=std::move(t129);}
{V t130=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),joined(Args{e->slot(0,0),lit53},call(e->slot(1,8),Args{lit160,V(0.0)})))),V(0.0)}));e->slot(0,6)=std::move(t130);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t131=e->slot(0,4);refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t132=e->slot(0,5);refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t133=e->slot(0,6);refs[0].put(std::move(t133));}
{V t134=first(call(e->slot(1,4),Args{divv(e->slot(0,4),V(8000.0)),V(0.0),V(1.2)}));e->slot(0,7)=std::move(t134);}
{V t135=mul(mul(e->slot(0,5),first(call(get(e->get("math"),lit102),Args{first(call(e->slot(1,5),Args{e->slot(0,6)})),V(1.0)}))),V(0.15));e->slot(0,8)=std::move(t135);}
{Args t136=call(e->slot(1,9),Args{V(),lit161,lit162,lit163,lit164});e->slot(0,9)=arg(t136,0);e->slot(0,10)=arg(t136,1);}
if(truth(eq(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(e,0,9)};V t137=V(20.0);refs[0].put(std::move(t137));}
}
{Args t138=call(e->slot(1,9),Args{V(0.0),lit156,lit165,lit157,lit166});e->slot(0,11)=arg(t138,0);e->slot(0,12)=arg(t138,1);}
{Args t139=call(e->slot(1,9),Args{V(0.0),lit167,lit168,lit169});e->slot(0,13)=arg(t139,0);e->slot(0,14)=arg(t139,1);}
if(truth(([&](){V t140=([&](){V t141=e->slot(0,10);return !truth(t141)?e->slot(0,12):t141;})();return !truth(t140)?e->slot(0,14):t140;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t142=V(true);refs[0].put(std::move(t142));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t143=divv(first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)})),V(120.0));refs[0].put(std::move(t143));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t144=first(call(e->slot(1,5),Args{e->slot(0,11)}));refs[0].put(std::move(t144));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t145=first(call(e->slot(1,4),Args{e->slot(0,13),V(0.0),V(2.0)}));refs[0].put(std::move(t145));}
{V t146=mul(add(add(add(add(e->slot(0,7),e->slot(0,8)),mul(get(e->slot(1,2),lit48),get(get(e->slot(1,1),lit1),lit12))),mul(get(e->slot(1,2),lit49),get(get(e->slot(1,1),lit1),lit13))),mul(get(e->slot(1,2),lit50),V(0.16))),get(get(e->slot(1,1),lit1),lit11));e->slot(0,15)=std::move(t146);}
{V t147=add(get(get(e->slot(1,1),lit1),lit14),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit15)));e->slot(0,16)=std::move(t147);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t148=first(call(e->slot(1,18),Args{get(e->slot(1,2),lit40),e->slot(0,15),e->slot(0,16),e->slot(0,2),e->slot(0,3)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t149=e->slot(0,15);refs[0].put(std::move(t149));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{V t150=V(0.0);e->slot(0,1)=std::move(t150);}
{V t151=V(0.0);e->slot(0,2)=std::move(t151);}
{V t152=V(0.0);e->slot(0,3)=std::move(t152);}
{V t153=e->slot(0,0);e->slot(0,4)=std::move(t153);}
{V t154=e->slot(0,0);e->slot(0,5)=std::move(t154);}
{V t155=e->slot(0,0);e->slot(0,6)=std::move(t155);}
{double t156=num(V(0.0)),t157=num(V(3.0)),t158=num(V(1.0));for(double t159=t156;(t158>0?t159<=t157:t159>=t157);t159+=t158){auto parent=e;Env storage(parent,false,4);auto e=&storage;e->slot(0,0)=V(t159);{V t160=([&](){V t161=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t161)?e->slot(1,0):t161;})();e->slot(0,1)=std::move(t160);}
{V t162=([&](){V t163=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t163)?e->slot(1,0):t163;})();e->slot(0,2)=std::move(t162);}
{V t164=([&](){V t165=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t165)?e->slot(1,0):t165;})();e->slot(0,3)=std::move(t164);}
{std::array<Ref,1> refs{Ref(e,1,1)};V t166=add(e->slot(1,1),e->slot(0,1));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t167=add(e->slot(1,2),e->slot(0,2));refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t168=add(e->slot(1,3),e->slot(0,3));refs[0].put(std::move(t168));}
if(truth(gt(e->slot(0,1),e->slot(1,4)))){{std::array<Ref,1> refs{Ref(e,1,4)};V t169=e->slot(0,1);refs[0].put(std::move(t169));}
}
if(truth(gt(e->slot(0,2),e->slot(1,5)))){{std::array<Ref,1> refs{Ref(e,1,5)};V t170=e->slot(0,2);refs[0].put(std::move(t170));}
}
if(truth(gt(e->slot(0,3),e->slot(1,6)))){{std::array<Ref,1> refs{Ref(e,1,6)};V t171=e->slot(0,3);refs[0].put(std::move(t171));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t172=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t173=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t174=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t175=e->slot(0,4);refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t176=e->slot(0,5);refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t177=e->slot(0,6);refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t178=first(call(e->slot(1,19),Args{e->slot(0,4),e->slot(0,0),get(get(e->slot(1,1),lit1),lit24)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t179=first(call(e->slot(1,19),Args{e->slot(0,5),e->slot(0,0),get(get(e->slot(1,1),lit1),lit25)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t180=first(call(e->slot(1,19),Args{e->slot(0,6),e->slot(0,0),get(get(e->slot(1,1),lit1),lit26)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t181=first(call(e->slot(1,19),Args{get(e->slot(1,2),lit39),e->slot(0,0),get(get(e->slot(1,1),lit1),lit27)}));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t182=first(call(e->slot(1,19),Args{get(e->slot(1,2),lit40),e->slot(0,0),get(get(e->slot(1,1),lit1),lit28)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t183=first(call(e->slot(1,4),Args{first(call(get(e->get("math"),lit102),Args{get(e->slot(1,2),lit61),get(e->slot(1,2),lit62),get(e->slot(1,2),lit63),get(e->slot(1,2),lit64),get(e->slot(1,2),lit65)})),V(0.0),V(1.0)}));refs[0].put(std::move(t183));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t184=V(false);refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t185=V(false);refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t186=V(false);refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t187=V(false);refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t188=V(false);refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t189=V(false);refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t190=V(false);refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t191=V(false);refs[0].put(std::move(t191));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit170,([&](){V t192=get(e->slot(1,2),lit76);return !truth(t192)?lit171:t192;})()});
call(e->slot(1,10),Args{lit172,([&](){V t193=get(e->slot(1,2),lit78);return !truth(t193)?V(0.0):t193;})()});
call(e->slot(1,10),Args{lit173,([&](){V t194=([&](){V t195=get(e->slot(1,2),lit67);return truth(t195)?V(1.0):t195;})();return !truth(t194)?V(0.0):t194;})()});
call(e->slot(1,10),Args{lit101,([&](){V t196=get(e->slot(1,2),lit54);return !truth(t196)?V(0.0):t196;})()});
{double t197=num(V(0.0)),t198=num(V(3.0)),t199=num(V(1.0));for(double t200=t197;(t199>0?t200<=t198:t200>=t198);t200+=t199){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t200);call(e->slot(2,10),Args{concat(lit174,e->slot(0,0)),([&](){V t201=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t201)?get(get(e->slot(2,1),lit1),lit22):t201;})()});
call(e->slot(2,10),Args{concat(lit175,e->slot(0,0)),([&](){V t202=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t202)?get(get(e->slot(2,1),lit1),lit22):t202;})()});
call(e->slot(2,10),Args{concat(lit176,e->slot(0,0)),([&](){V t203=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t203)?get(get(e->slot(2,1),lit1),lit22):t203;})()});
call(e->slot(2,10),Args{concat(lit177,e->slot(0,0)),([&](){V t204=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t204)?get(get(e->slot(2,1),lit1),lit22):t204;})()});
call(e->slot(2,10),Args{concat(lit178,e->slot(0,0)),([&](){V t205=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t205)?get(get(e->slot(2,1),lit1),lit22):t205;})()});
call(e->slot(2,10),Args{concat(lit179,e->slot(0,0)),([&](){V t206=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t206)?get(get(e->slot(2,1),lit1),lit22):t206;})()});
call(e->slot(2,10),Args{concat(lit114,e->slot(0,0)),([&](){V t207=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t207)?get(get(e->slot(2,1),lit1),lit22):t207;})()});
call(e->slot(2,10),Args{concat(lit115,e->slot(0,0)),([&](){V t208=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t208)?get(get(e->slot(2,1),lit1),lit22):t208;})()});
call(e->slot(2,10),Args{concat(lit118,e->slot(0,0)),([&](){V t209=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t209)?get(get(e->slot(2,1),lit1),lit22):t209;})()});
call(e->slot(2,10),Args{concat(lit180,e->slot(0,0)),([&](){V t210=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t210)?get(get(e->slot(2,1),lit1),lit22):t210;})()});
call(e->slot(2,10),Args{concat(lit181,e->slot(0,0)),([&](){V t211=get(get(e->slot(2,2),lit34),e->slot(0,0));return !truth(t211)?V(0.0):t211;})()});
call(e->slot(2,10),Args{concat(lit182,e->slot(0,0)),([&](){V t212=get(get(e->slot(2,2),lit35),e->slot(0,0));return !truth(t212)?V(0.0):t212;})()});
call(e->slot(2,10),Args{concat(lit183,e->slot(0,0)),([&](){V t213=get(get(e->slot(2,2),lit35),e->slot(0,0));return !truth(t213)?V(0.0):t213;})()});
}}
call(e->slot(1,10),Args{lit184,([&](){V t214=get(e->slot(1,2),lit39);return !truth(t214)?get(get(e->slot(1,1),lit1),lit22):t214;})()});
call(e->slot(1,10),Args{lit185,([&](){V t215=get(e->slot(1,2),lit40);return !truth(t215)?get(get(e->slot(1,1),lit1),lit22):t215;})()});
call(e->slot(1,10),Args{lit186,([&](){V t216=get(e->slot(1,2),lit39);return !truth(t216)?get(get(e->slot(1,1),lit1),lit22):t216;})()});
call(e->slot(1,10),Args{lit187,([&](){V t217=get(e->slot(1,2),lit40);return !truth(t217)?get(get(e->slot(1,1),lit1),lit22):t217;})()});
call(e->slot(1,10),Args{lit188,([&](){V t218=get(e->slot(1,2),lit39);return !truth(t218)?get(get(e->slot(1,1),lit1),lit22):t218;})()});
call(e->slot(1,10),Args{lit189,([&](){V t219=get(e->slot(1,2),lit40);return !truth(t219)?get(get(e->slot(1,1),lit1),lit22):t219;})()});
call(e->slot(1,10),Args{lit190,([&](){V t220=get(e->slot(1,2),lit41);return !truth(t220)?V(0.0):t220;})()});
call(e->slot(1,10),Args{lit191,([&](){V t221=get(e->slot(1,2),lit42);return !truth(t221)?V(0.0):t221;})()});
call(e->slot(1,10),Args{lit192,([&](){V t222=get(e->slot(1,2),lit43);return !truth(t222)?V(0.0):t222;})()});
call(e->slot(1,10),Args{lit147,([&](){V t223=get(e->slot(1,2),lit44);return !truth(t223)?V(0.0):t223;})()});
call(e->slot(1,10),Args{lit150,([&](){V t224=get(e->slot(1,2),lit45);return !truth(t224)?V(0.0):t224;})()});
call(e->slot(1,10),Args{lit193,([&](){V t225=get(e->slot(1,2),lit48);return !truth(t225)?V(0.0):t225;})()});
call(e->slot(1,10),Args{lit194,([&](){V t226=get(e->slot(1,2),lit55);return !truth(t226)?get(get(e->slot(1,1),lit1),lit22):t226;})()});
call(e->slot(1,10),Args{lit195,([&](){V t227=get(e->slot(1,2),lit56);return !truth(t227)?get(get(e->slot(1,1),lit1),lit22):t227;})()});
call(e->slot(1,10),Args{lit196,([&](){V t228=get(e->slot(1,2),lit57);return !truth(t228)?get(get(e->slot(1,1),lit1),lit22):t228;})()});
call(e->slot(1,10),Args{lit197,([&](){V t229=get(e->slot(1,2),lit58);return !truth(t229)?get(get(e->slot(1,1),lit1),lit22):t229;})()});
call(e->slot(1,10),Args{lit198,([&](){V t230=get(e->slot(1,2),lit59);return !truth(t230)?get(get(e->slot(1,1),lit1),lit22):t230;})()});
call(e->slot(1,10),Args{lit199,([&](){V t231=get(e->slot(1,2),lit60);return !truth(t231)?get(get(e->slot(1,1),lit1),lit22):t231;})()});
call(e->slot(1,10),Args{lit200,([&](){V t232=get(e->slot(1,2),lit61);return !truth(t232)?V(0.0):t232;})()});
call(e->slot(1,10),Args{lit201,([&](){V t233=get(e->slot(1,2),lit62);return !truth(t233)?V(0.0):t233;})()});
call(e->slot(1,10),Args{lit202,([&](){V t234=get(e->slot(1,2),lit63);return !truth(t234)?V(0.0):t234;})()});
call(e->slot(1,10),Args{lit203,([&](){V t235=get(e->slot(1,2),lit64);return !truth(t235)?V(0.0):t235;})()});
call(e->slot(1,10),Args{lit204,([&](){V t236=get(e->slot(1,2),lit65);return !truth(t236)?V(0.0):t236;})()});
call(e->slot(1,10),Args{lit205,([&](){V t237=get(e->slot(1,2),lit66);return !truth(t237)?V(0.0):t237;})()});
call(e->slot(1,10),Args{lit206,([&](){V t238=get(e->slot(1,2),lit66);return !truth(t238)?V(0.0):t238;})()});
call(e->slot(1,10),Args{lit207,([&](){V t239=get(e->slot(1,2),lit62);return !truth(t239)?V(0.0):t239;})()});
call(e->slot(1,10),Args{lit208,([&](){V t240=get(e->slot(1,2),lit66);return !truth(t240)?V(0.0):t240;})()});
if(truth(V(!truth(get(e->slot(1,2),lit80))))){return Args{};
}
call(e->slot(1,10),Args{lit209,([&](){V t241=([&](){V t242=get(e->slot(1,2),lit68);return truth(t242)?V(1.0):t242;})();return !truth(t241)?V(0.0):t241;})()});
call(e->slot(1,10),Args{lit210,([&](){V t243=([&](){V t244=get(e->slot(1,2),lit69);return truth(t244)?V(1.0):t244;})();return !truth(t243)?V(0.0):t243;})()});
call(e->slot(1,10),Args{lit211,([&](){V t245=([&](){V t246=get(e->slot(1,2),lit70);return truth(t246)?V(1.0):t246;})();return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,10),Args{lit212,([&](){V t247=([&](){V t248=get(e->slot(1,2),lit71);return truth(t248)?V(1.0):t248;})();return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,10),Args{lit213,([&](){V t249=([&](){V t250=get(e->slot(1,2),lit72);return truth(t250)?V(1.0):t250;})();return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,10),Args{lit214,([&](){V t251=([&](){V t252=get(e->slot(1,2),lit73);return truth(t252)?V(1.0):t252;})();return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,10),Args{lit215,([&](){V t253=([&](){V t254=get(e->slot(1,2),lit74);return truth(t254)?V(1.0):t254;})();return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,10),Args{lit216,([&](){V t255=([&](){V t256=get(e->slot(1,2),lit75);return truth(t256)?V(1.0):t256;})();return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,10),Args{lit217,([&](){V t257=get(e->slot(1,2),lit46);return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,10),Args{lit218,([&](){V t258=get(e->slot(1,2),lit47);return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,10),Args{lit219,([&](){V t259=get(e->slot(1,2),lit49);return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,10),Args{lit220,([&](){V t260=get(e->slot(1,2),lit50);return !truth(t260)?V(0.0):t260;})()});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t261=get(get(e->slot(1,1),lit1),lit22);e->slot(0,2)=std::move(t261);}
{V t262=first(call(e->slot(1,15),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t262);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t263=e->slot(0,3);refs[0].put(std::move(t263));}
call(e->slot(1,29),Args{});
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t264=V(true);refs[0].put(std::move(t264));}
}
{double t265=num(V(0.0)),t266=num(V(3.0)),t267=num(V(1.0));for(double t268=t265;(t267>0?t268<=t266:t268>=t266);t268+=t267){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t268);call(e->slot(2,23),Args{e->slot(1,1),e->slot(0,0),e->slot(1,3),e->slot(1,2),e->slot(1,0)});
}}
call(e->slot(1,26),Args{e->slot(0,1),e->slot(0,3),e->slot(0,2),e->slot(0,0)});
call(e->slot(1,27),Args{e->slot(0,1),e->slot(0,3),e->slot(0,2),e->slot(0,0)});
call(e->slot(1,28),Args{e->slot(0,2)});
return Args{};});
Ref(e->slot(0,1),lit221).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t269=lit77;refs[0].put(std::move(t269));}
call(e->slot(1,28),Args{get(get(e->slot(1,1),lit1),lit22)});
call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit222).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t270=add(([&](){V t271=get(e->slot(1,2),lit78);return !truth(t271)?V(0.0):t271;})(),V(1.0));refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t272=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t272));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t273=lit223;refs[0].put(std::move(t273));}
call(e->slot(1,30),Args{});
return Args{};
}
call(e->slot(1,17),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t274=([&](){V t275=e->slot(0,1);return !truth(t275)?first(call(e->slot(1,11),Args{})):t275;})();refs[0].put(std::move(t274));}
{V t276=first(call(e->slot(1,12),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t276);}
if(truth(([&](){V t277=e->slot(0,1);return truth(t277)?e->slot(0,3):t277;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t278=lit224;refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t279=V(true);refs[0].put(std::move(t279));}
call(e->slot(1,31),Args{e->slot(0,0),e->slot(0,1)});
}else if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t280=lit225;refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t281=V(false);refs[0].put(std::move(t281));}
call(e->slot(1,31),Args{e->slot(0,0),e->slot(0,1)});
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t282=lit226;refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t283=V(false);refs[0].put(std::move(t283));}
call(e->slot(1,31),Args{e->slot(0,0),V()});
}

call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit227).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t284=get(get(e->slot(1,2),lit31),e->slot(0,0));return !truth(t284)?get(get(e->slot(1,1),lit1),lit22):t284;})()};
return Args{};}));
Ref(e->slot(0,1),lit228).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t285=get(get(e->slot(1,2),lit32),e->slot(0,0));return !truth(t285)?get(get(e->slot(1,1),lit1),lit22):t285;})()};
return Args{};}));
Ref(e->slot(0,1),lit229).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t286=get(get(e->slot(1,2),lit33),e->slot(0,0));return !truth(t286)?get(get(e->slot(1,1),lit1),lit22):t286;})()};
return Args{};}));
Ref(e->slot(0,1),lit230).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->slot(1,1),lit229),Args{e->slot(0,0)});
return Args{};}));
Ref(e->slot(0,1),lit231).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t287=get(e->slot(1,2),lit39);return !truth(t287)?get(get(e->slot(1,1),lit1),lit22):t287;})()};
return Args{};}));
Ref(e->slot(0,1),lit232).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t288=get(e->slot(1,2),lit40);return !truth(t288)?get(get(e->slot(1,1),lit1),lit22):t288;})()};
return Args{};}));
Ref(e->slot(0,1),lit233).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t289=get(e->slot(1,2),lit66);return !truth(t289)?V(0.0):t289;})()};
return Args{};}));
Ref(e->slot(0,1),lit234).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit235).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t290=([&](){V t291=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t291)?V(0.0):t291;})();e->slot(0,0)=std::move(t290);}
return call(get(e->get("string"),lit236),Args{lit237,first(call(e->get("tostring"),Args{([&](){V t292=get(([&](){V z=table();set(z,V(0.0),lit238);set(z,V(1.0),lit239);set(z,V(2.0),lit240);set(z,V(3.0),lit241);return z;})(),e->slot(0,0));return !truth(t292)?e->slot(0,0):t292;})()})),([&](){V t293=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t293)?get(get(e->slot(2,1),lit1),lit22):t293;})(),([&](){V t294=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t294)?get(get(e->slot(2,1),lit1),lit22):t294;})(),([&](){V t295=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t295)?get(get(e->slot(2,1),lit1),lit22):t295;})(),([&](){V t296=get(get(e->slot(2,2),lit34),e->slot(0,0));return !truth(t296)?V(0.0):t296;})(),([&](){V t297=get(get(e->slot(2,2),lit35),e->slot(0,0));return !truth(t297)?V(0.0):t297;})(),([&](){V t298=get(get(e->slot(2,2),lit36),e->slot(0,0));return !truth(t298)?V(0.0):t298;})(),([&](){V t299=get(get(e->slot(2,2),lit37),e->slot(0,0));return !truth(t299)?V(0.0):t299;})(),([&](){V t300=get(get(e->slot(2,2),lit38),e->slot(0,0));return !truth(t300)?V(0.0):t300;})()});
}
return call(get(e->get("string"),lit236),Args{concat(lit242,concat(lit243,concat(lit244,concat(lit245,concat(lit246,lit247))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit76)})),([&](){V t301=get(e->slot(1,2),lit78);return !truth(t301)?V(0.0):t301;})(),([&](){V t302=([&](){V t303=get(e->slot(1,2),lit67);return truth(t303)?lit248:t303;})();return !truth(t302)?lit249:t302;})(),([&](){V t304=get(get(e->slot(1,2),lit31),V(0.0));return !truth(t304)?get(get(e->slot(1,1),lit1),lit22):t304;})(),([&](){V t305=get(get(e->slot(1,2),lit31),V(1.0));return !truth(t305)?get(get(e->slot(1,1),lit1),lit22):t305;})(),([&](){V t306=get(get(e->slot(1,2),lit31),V(2.0));return !truth(t306)?get(get(e->slot(1,1),lit1),lit22):t306;})(),([&](){V t307=get(get(e->slot(1,2),lit31),V(3.0));return !truth(t307)?get(get(e->slot(1,1),lit1),lit22):t307;})(),([&](){V t308=get(e->slot(1,2),lit55);return !truth(t308)?get(get(e->slot(1,1),lit1),lit22):t308;})(),([&](){V t309=get(e->slot(1,2),lit56);return !truth(t309)?get(get(e->slot(1,1),lit1),lit22):t309;})(),([&](){V t310=get(get(e->slot(1,2),lit32),V(0.0));return !truth(t310)?get(get(e->slot(1,1),lit1),lit22):t310;})(),([&](){V t311=get(get(e->slot(1,2),lit32),V(1.0));return !truth(t311)?get(get(e->slot(1,1),lit1),lit22):t311;})(),([&](){V t312=get(get(e->slot(1,2),lit32),V(2.0));return !truth(t312)?get(get(e->slot(1,1),lit1),lit22):t312;})(),([&](){V t313=get(get(e->slot(1,2),lit32),V(3.0));return !truth(t313)?get(get(e->slot(1,1),lit1),lit22):t313;})(),([&](){V t314=get(get(e->slot(1,2),lit33),V(0.0));return !truth(t314)?get(get(e->slot(1,1),lit1),lit22):t314;})(),([&](){V t315=get(get(e->slot(1,2),lit33),V(1.0));return !truth(t315)?get(get(e->slot(1,1),lit1),lit22):t315;})(),([&](){V t316=get(get(e->slot(1,2),lit33),V(2.0));return !truth(t316)?get(get(e->slot(1,1),lit1),lit22):t316;})(),([&](){V t317=get(get(e->slot(1,2),lit33),V(3.0));return !truth(t317)?get(get(e->slot(1,1),lit1),lit22):t317;})(),([&](){V t318=get(e->slot(1,2),lit39);return !truth(t318)?get(get(e->slot(1,1),lit1),lit22):t318;})(),([&](){V t319=get(e->slot(1,2),lit40);return !truth(t319)?get(get(e->slot(1,1),lit1),lit22):t319;})(),([&](){V t320=get(e->slot(1,2),lit41);return !truth(t320)?V(0.0):t320;})(),([&](){V t321=get(e->slot(1,2),lit42);return !truth(t321)?V(0.0):t321;})(),([&](){V t322=get(e->slot(1,2),lit61);return !truth(t322)?V(0.0):t322;})(),([&](){V t323=get(e->slot(1,2),lit62);return !truth(t323)?V(0.0):t323;})(),([&](){V t324=get(e->slot(1,2),lit63);return !truth(t324)?V(0.0):t324;})(),([&](){V t325=get(e->slot(1,2),lit64);return !truth(t325)?V(0.0):t325;})(),([&](){V t326=get(e->slot(1,2),lit65);return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(e->slot(1,2),lit66);return !truth(t327)?V(0.0):t327;})(),([&](){V t328=([&](){V t329=get(e->slot(1,2),lit68);return truth(t329)?lit248:t329;})();return !truth(t328)?lit249:t328;})(),([&](){V t330=([&](){V t331=get(e->slot(1,2),lit69);return truth(t331)?lit248:t331;})();return !truth(t330)?lit249:t330;})(),([&](){V t332=([&](){V t333=get(e->slot(1,2),lit70);return truth(t333)?lit248:t333;})();return !truth(t332)?lit249:t332;})(),([&](){V t334=([&](){V t335=get(e->slot(1,2),lit71);return truth(t335)?lit248:t335;})();return !truth(t334)?lit249:t334;})(),([&](){V t336=([&](){V t337=get(e->slot(1,2),lit72);return truth(t337)?lit248:t337;})();return !truth(t336)?lit249:t336;})(),([&](){V t338=([&](){V t339=get(e->slot(1,2),lit73);return truth(t339)?lit248:t339;})();return !truth(t338)?lit249:t338;})(),([&](){V t340=([&](){V t341=get(e->slot(1,2),lit74);return truth(t341)?lit248:t341;})();return !truth(t340)?lit249:t340;})(),([&](){V t342=([&](){V t343=get(e->slot(1,2),lit75);return truth(t343)?lit248:t343;})();return !truth(t342)?lit249:t342;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

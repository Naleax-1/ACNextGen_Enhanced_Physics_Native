// Generated native C++ from pinned brake_lock.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("lockSlip");
static const V lit3("recoverSlip");
static const V lit4("transitionTau");
static const V lit5("minSpeed");
static const V lit6("brakeInputMin");
static const V lit7("lowMuLockGain");
static const V lit8("contactLossLockGain");
static const V lit9("lowLoadLockGain");
static const V lit10("tireHopLockGain");
static const V lit11("wheelLoadRef");
static const V lit12("fadeRecoverLoss");
static const V lit13("weightBiasLockGain");
static const V lit14("chassisYawLockGain");
static const V lit15("virtualYawLockGain");
static const V lit16("suspensionStressLockGain");
static const V lit17("fadeRootLockGain");
static const V lit18("brakeThermalLockGain");
static const V lit19("frontRearBiasLockGain");
static const V lit20("maxRootLockAdd");
static const V lit21("globalReadInterval");
static const V lit22("debugStoreInterval");
static const V lit23("lock");
static const V lit24("slip");
static const V lit25("target");
static const V lit26("load");
static const V lit27("loadNorm");
static const V lit28("mu");
static const V lit29("contactLoss");
static const V lit30("tireHop");
static const V lit31("weightBias");
static const V lit32("fadeRoot");
static const V lit33("rootLockAdd");
static const V lit34("brakeInput");
static const V lit35("speedKmh");
static const V lit36("chassisYaw");
static const V lit37("virtualYaw");
static const V lit38("suspensionStress");
static const V lit39("thermalStress");
static const V lit40("frontBias");
static const V lit41("rearBias");
static const V lit42("avgLock");
static const V lit43("maxLock");
static const V lit44("avgSlip");
static const V lit45("avgRootAdd");
static const V lit46("status");
static const V lit47("INIT");
static const V lit48("updateCount");
static const V lit49("wheelsValid");
static const V lit50("tireStateLinked");
static const V lit51("loadLinked");
static const V lit52("fadeLinked");
static const V lit53("tireLinked");
static const V lit54("weightLinked");
static const V lit55("chassisLinked");
static const V lit56("virtualLinked");
static const V lit57("suspensionLinked");
static const V lit58("thermalLinked");
static const V lit59("fadeRootLinked");
static const V lit60("brakeInputLinked");
static const V lit61("globalReadTimer");
static const V lit62("debugStoreTimer");
static const V lit63("debugStoreNow");
static const V lit64("state");
static const V lit65("debug");
static const V lit66("safeLoadRaw");
static const V lit67("safeStore");
static const V lit68("safeField");
static const V lit69("getCar");
static const V lit70("wheels");
static const V lit71("ngp_brake_input_smoothed");
static const V lit72("ngp_brake_input");
static const V lit73("brake");
static const V lit74("ngp_speed_kmh");
static const V lit75("ngp_vehicle_speed_kmh");
static const V lit76("ngp_tire_slip_ratio_");
static const V lit77("ngp_slip_ratio_");
static const V lit78("ngp_filtered_slip_ratio_");
static const V lit79("ngp_tire_state_slip_ratio_");
static const V lit80("slipRatio");
static const V lit81("ngp_wheel_load_");
static const V lit82("ngp_load_wheel_");
static const V lit83("ngp_dlt_load_");
static const V lit84("ngp_sprung_load_");
static const V lit85("ngp_brake_mu_");
static const V lit86("ngp_brake_target_mu_");
static const V lit87("ngp_tire_contact_loss_");
static const V lit88("ngp_tcr_contact_loss_");
static const V lit89("ngp_contact_loss_");
static const V lit90("ngp_contact_quality_");
static const V lit91("ngp_tc_contact_");
static const V lit92("ngp_tire_contact_");
static const V lit93("ngp_tire_hop_energy_");
static const V lit94("ngp_tire_hop_");
static const V lit95("ngp_brake_fade_root_add_");
static const V lit96("ngp_brake_fade_");
static const V lit97("ngp_weight_front_bias");
static const V lit98("ngp_front_bias");
static const V lit99("ngp_load_front_ratio");
static const V lit100("ngp_weight_rear_bias");
static const V lit101("ngp_rear_bias");
static const V lit102("ngp_load_rear_ratio");
static const V lit103("ngp_weight_left_bias");
static const V lit104("ngp_left_bias");
static const V lit105("ngp_load_left_ratio");
static const V lit106("ngp_weight_right_bias");
static const V lit107("ngp_right_bias");
static const V lit108("ngp_load_right_ratio");
static const V lit109("ngp_chassis_yaw_hint");
static const V lit110("ngp_chassis_roll_root_yaw_add");
static const V lit111("ngp_body_yaw_hint");
static const V lit112("ngp_virtual_yaw");
static const V lit113("ngp_virtual_yaw_moment");
static const V lit114("ngp_weight_suspension_stress");
static const V lit115("ngp_chassis_flex_suspension_stress");
static const V lit116("ngp_chassis_roll_suspension_stress");
static const V lit117("ngp_body_suspension_stress");
static const V lit118("ngp_brake_root_heat_avg");
static const V lit119("ngp_brake_fade_root_add_avg");
static const V lit120("ngp_virtual_thermal_stress");
static const V lit121("max");
static const V lit122("ngp_brake_lock_");
static const V lit123("ngp_brake_lock_target_");
static const V lit124("ngp_brake_lock_slip_");
static const V lit125("ngp_brake_lock_load_");
static const V lit126("ngp_brake_lock_load_norm_");
static const V lit127("ngp_brake_lock_root_add_");
static const V lit128("ngp_brake_lock_weight_bias_");
static const V lit129("ngp_brake_lock_fade_root_");
static const V lit130("ngp_brake_lock_status");
static const V lit131("ngp_brake_lock_update_count");
static const V lit132("ngp_brake_lock_wheels_valid");
static const V lit133("ngp_brake_lock_brake_input");
static const V lit134("ngp_brake_lock_speed_kmh");
static const V lit135("ngp_brake_lock_avg");
static const V lit136("ngp_brake_lock_max");
static const V lit137("ngp_brake_lock_avg_slip");
static const V lit138("ngp_brake_lock_root_add_avg");
static const V lit139("ngp_brake_lock_tire_state_linked");
static const V lit140("ngp_brake_lock_load_linked");
static const V lit141("ngp_brake_lock_fade_linked");
static const V lit142("ngp_brake_lock_tire_linked");
static const V lit143("ngp_brake_lock_weight_linked");
static const V lit144("ngp_brake_lock_chassis_linked");
static const V lit145("ngp_brake_lock_virtual_linked");
static const V lit146("ngp_brake_lock_suspension_linked");
static const V lit147("ngp_brake_lock_thermal_linked");
static const V lit148("ngp_brake_lock_fade_root_linked");
static const V lit149("ngp_brake_lock_input_linked");
static const V lit150("ngp_brake_lock_chassis_yaw");
static const V lit151("ngp_brake_lock_virtual_yaw");
static const V lit152("ngp_brake_lock_suspension_stress");
static const V lit153("ngp_brake_lock_thermal_stress");
static const V lit154("init");
static const V lit155("update");
static const V lit156("BAD DT");
static const V lit157("NO CAR");
static const V lit158("RUNNING");
static const V lit159("getLock");
static const V lit160("getAvgLock");
static const V lit161("debugStr");
static const V lit162("format");
static const V lit163("%d Lock %.2f Target %.2f Slip %.3f Load %.0f Root %.3f Mu %.2f");
static const V lit164("Status %s / Count %.0f / Wheels %s\n");
static const V lit165("Lock %.2f %.2f %.2f %.2f / Avg %.2f Max %.2f\n");
static const V lit166("Slip %.3f %.3f %.3f %.3f / Brake %.2f Speed %.1f\n");
static const V lit167("RootAdd %.3f %.3f %.3f %.3f / Avg %.3f\n");
static const V lit168("Links TS:%s Load:%s Fade:%s Tire:%s Weight:%s Chassis:%s Virtual:%s Susp:%s Thermal:%s FadeRoot:%s Input:%s");
static const V lit169("OK");
static const V lit170("NIL");
V load_brake_lock(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(26);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.18));set(z,lit3,V(0.08));set(z,lit4,V(0.08));set(z,lit5,V(10.0));set(z,lit6,V(0.05));set(z,lit7,V(0.12));set(z,lit8,V(0.1));set(z,lit9,V(0.12));set(z,lit10,V(0.08));set(z,lit11,V(3500.0));set(z,lit12,V(0.08));set(z,lit13,V(0.08));set(z,lit14,V(0.04));set(z,lit15,V(0.04));set(z,lit16,V(0.06));set(z,lit17,V(0.08));set(z,lit18,V(0.05));set(z,lit19,V(0.04));set(z,lit20,V(0.2));set(z,lit21,V(0.05));set(z,lit22,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit23,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit24,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit25,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit26,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit27,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit28,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit29,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit30,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit31,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit32,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit33,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit34,V(0.0));set(z,lit35,V(0.0));set(z,lit36,V(0.0));set(z,lit37,V(0.0));set(z,lit38,V(0.0));set(z,lit39,V(0.0));set(z,lit40,V(0.5));set(z,lit41,V(0.5));set(z,lit42,V(0.0));set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,V(0.0));set(z,lit46,lit47);set(z,lit48,V(0.0));set(z,lit49,V(false));set(z,lit50,V(false));set(z,lit51,V(false));set(z,lit52,V(false));set(z,lit53,V(false));set(z,lit54,V(false));set(z,lit55,V(false));set(z,lit56,V(false));set(z,lit57,V(false));set(z,lit58,V(false));set(z,lit59,V(false));set(z,lit60,V(false));set(z,lit61,V(999.0));set(z,lit62,V(999.0));set(z,lit63,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit64)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit65)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=eq(e->slot(0,2),V());return !truth(t8)?ne(e->slot(0,2),e->slot(0,2)):t8;})())){return Args{([&](){V t9=e->slot(0,1);return !truth(t9)?V(0.0):t9;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t10=first(call(e->slot(1,3),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t10));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t11=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t11));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(e->slot(0,0)))};
}
return Args{e->slot(0,0)};
return Args{};});
{V t12=get(e->slot(0,0),lit66);e->slot(0,6)=std::move(t12);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t14=e->slot(0,1);return !truth(t14)?V(0.0):t14;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()});
return Args{};});
{V t16=get(e->slot(0,0),lit67);e->slot(0,8)=std::move(t16);}
{V t17=get(e->slot(0,0),lit68);e->slot(0,9)=std::move(t17);}
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t18=V(!truth(e->get("ac")));return !truth(t18)?V(!truth(get(e->get("ac"),lit69))):t18;})())){return Args{V()};
}
{Args t19=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit69),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t19,0);e->slot(0,1)=arg(t19,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t20=V(!truth(e->slot(0,0)));return !truth(t20)?V(!truth(get(e->slot(0,0),lit70))):t20;})())){return Args{V()};
}
{Args t21=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit70),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t21,0);e->slot(0,3)=arg(t21,1);}
if(truth(e->slot(0,2))){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t23=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t24=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(1.0)}));refs[0].put(std::move(t24));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,2)))};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t25=add(([&](){V t26=get(e->slot(1,2),lit62);return !truth(t26)?V(0.0):t26;})(),([&](){V t27=e->slot(0,0);return !truth(t27)?V(0.0):t27;})());refs[0].put(std::move(t25));}
if(truth(ge(get(e->slot(1,2),lit62),get(get(e->slot(1,1),lit1),lit22)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t28=V(0.0);refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t29=V(true);refs[0].put(std::move(t29));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t30=V(false);refs[0].put(std::move(t30));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t31=V(false);refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t32=V(false);refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t33=V(false);refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t34=V(false);refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t35=V(false);refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t36=V(false);refs[0].put(std::move(t36));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t37=V(false);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t38=V(false);refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t39=V(false);refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t40=V(false);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t41=V(false);refs[0].put(std::move(t41));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t42=([&](){V t43=first(call(e->slot(1,6),Args{lit71}));return !truth(t43)?first(call(e->slot(1,6),Args{lit72})):t43;})();e->slot(0,1)=std::move(t42);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t44=V(true);refs[0].put(std::move(t44));}
return call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)});
}
return call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit73,V(0.0)})),V(0.0)})),V(0.0),V(1.0)});
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t45=([&](){V t46=first(call(e->slot(1,6),Args{lit74}));return !truth(t46)?first(call(e->slot(1,6),Args{lit75})):t46;})();e->slot(0,1)=std::move(t45);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,3),Args{e->slot(0,1),V(0.0)});
}
return call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit35,V(0.0)})),V(0.0)});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t47=([&](){V t48=([&](){V t49=([&](){V t50=first(call(e->slot(1,6),Args{concat(lit76,e->slot(0,1))}));return !truth(t50)?first(call(e->slot(1,6),Args{concat(lit77,e->slot(0,1))})):t50;})();return !truth(t49)?first(call(e->slot(1,6),Args{concat(lit78,e->slot(0,1))})):t49;})();return !truth(t48)?first(call(e->slot(1,6),Args{concat(lit79,e->slot(0,1))})):t48;})();e->slot(0,2)=std::move(t47);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t51=V(true);refs[0].put(std::move(t51));}
}else if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,0,2)};V t52=first(call(e->slot(1,9),Args{e->slot(0,0),lit80,V(0.0)}));refs[0].put(std::move(t52));}
}

return call(e->slot(1,5),call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t53=([&](){V t54=([&](){V t55=([&](){V t56=first(call(e->slot(1,6),Args{concat(lit81,e->slot(0,1))}));return !truth(t56)?first(call(e->slot(1,6),Args{concat(lit82,e->slot(0,1))})):t56;})();return !truth(t55)?first(call(e->slot(1,6),Args{concat(lit83,e->slot(0,1))})):t55;})();return !truth(t54)?first(call(e->slot(1,6),Args{concat(lit84,e->slot(0,1))})):t54;})();e->slot(0,2)=std::move(t53);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t57=V(true);refs[0].put(std::move(t57));}
return call(e->slot(1,3),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit11)});
}
if(truth(e->slot(0,0))){return call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit26,get(get(e->slot(1,1),lit1),lit11)})),get(get(e->slot(1,1),lit1),lit11)});
}
return Args{get(get(e->slot(1,1),lit1),lit11)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);{V t58=([&](){V t59=first(call(e->slot(1,6),Args{concat(lit85,e->slot(0,0))}));return !truth(t59)?first(call(e->slot(1,6),Args{concat(lit86,e->slot(0,0))})):t59;})();e->slot(0,1)=std::move(t58);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t60=V(true);refs[0].put(std::move(t60));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit28),e->slot(0,0))};V t61=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.3),V(1.2)}));refs[0].put(std::move(t61));}
{V t62=([&](){V t63=([&](){V t64=first(call(e->slot(1,6),Args{concat(lit87,e->slot(0,0))}));return !truth(t64)?first(call(e->slot(1,6),Args{concat(lit88,e->slot(0,0))})):t64;})();return !truth(t63)?first(call(e->slot(1,6),Args{concat(lit89,e->slot(0,0))})):t63;})();e->slot(0,2)=std::move(t62);}
{V t65=([&](){V t66=([&](){V t67=first(call(e->slot(1,6),Args{concat(lit90,e->slot(0,0))}));return !truth(t67)?first(call(e->slot(1,6),Args{concat(lit91,e->slot(0,0))})):t67;})();return !truth(t66)?first(call(e->slot(1,6),Args{concat(lit92,e->slot(0,0))})):t66;})();e->slot(0,3)=std::move(t65);}
if(truth(([&](){V t68=eq(e->slot(0,2),V());return truth(t68)?ne(e->slot(0,3),V()):t68;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t69=sub(V(1.0),first(call(e->slot(1,3),Args{e->slot(0,3),V(1.0)})));refs[0].put(std::move(t69));}
}
{V t70=([&](){V t71=first(call(e->slot(1,6),Args{concat(lit93,e->slot(0,0))}));return !truth(t71)?first(call(e->slot(1,6),Args{concat(lit94,e->slot(0,0))})):t71;})();e->slot(0,4)=std::move(t70);}
if(truth(([&](){V t72=([&](){V t73=ne(e->slot(0,2),V());return !truth(t73)?ne(e->slot(0,3),V()):t73;})();return !truth(t72)?ne(e->slot(0,4),V()):t72;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t74=V(true);refs[0].put(std::move(t74));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit29),e->slot(0,0))};V t75=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit30),e->slot(0,0))};V t76=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t76));}
{V t77=([&](){V t78=first(call(e->slot(1,6),Args{concat(lit95,e->slot(0,0))}));return !truth(t78)?first(call(e->slot(1,6),Args{concat(lit96,e->slot(0,0))})):t78;})();e->slot(0,5)=std::move(t77);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t79=V(true);refs[0].put(std::move(t79));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit32),e->slot(0,0))};V t80=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t80));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t81=add(([&](){V t82=get(e->slot(1,2),lit61);return !truth(t82)?V(0.0):t82;})(),([&](){V t83=e->slot(0,0);return !truth(t83)?V(0.0):t83;})());refs[0].put(std::move(t81));}
if(truth(lt(get(e->slot(1,2),lit61),get(get(e->slot(1,1),lit1),lit21)))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t84=V(0.0);refs[0].put(std::move(t84));}
{V t85=([&](){V t86=([&](){V t87=first(call(e->slot(1,6),Args{lit97}));return !truth(t87)?first(call(e->slot(1,6),Args{lit98})):t87;})();return !truth(t86)?first(call(e->slot(1,6),Args{lit99})):t86;})();e->slot(0,1)=std::move(t85);}
{V t88=([&](){V t89=([&](){V t90=first(call(e->slot(1,6),Args{lit100}));return !truth(t90)?first(call(e->slot(1,6),Args{lit101})):t90;})();return !truth(t89)?first(call(e->slot(1,6),Args{lit102})):t89;})();e->slot(0,2)=std::move(t88);}
{V t91=([&](){V t92=([&](){V t93=first(call(e->slot(1,6),Args{lit103}));return !truth(t93)?first(call(e->slot(1,6),Args{lit104})):t93;})();return !truth(t92)?first(call(e->slot(1,6),Args{lit105})):t92;})();e->slot(0,3)=std::move(t91);}
{V t94=([&](){V t95=([&](){V t96=first(call(e->slot(1,6),Args{lit106}));return !truth(t96)?first(call(e->slot(1,6),Args{lit107})):t96;})();return !truth(t95)?first(call(e->slot(1,6),Args{lit108})):t95;})();e->slot(0,4)=std::move(t94);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t97=([&](){V t98=([&](){V t99=([&](){V t100=ne(e->slot(0,1),V());return !truth(t100)?ne(e->slot(0,2),V()):t100;})();return !truth(t99)?ne(e->slot(0,3),V()):t99;})();return !truth(t98)?ne(e->slot(0,4),V()):t98;})();refs[0].put(std::move(t97));}
{V t101=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),([&](){V t102=get(e->slot(1,2),lit40);return !truth(t102)?V(0.5):t102;})()})),V(0.25),V(0.75)}));e->slot(0,5)=std::move(t101);}
{V t103=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),([&](){V t104=get(e->slot(1,2),lit41);return !truth(t104)?V(0.5):t104;})()})),V(0.25),V(0.75)}));e->slot(0,6)=std::move(t103);}
{V t105=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,7)=std::move(t105);}
{V t106=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,8)=std::move(t106);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t107=e->slot(0,5);refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t108=e->slot(0,6);refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit31),V(0.0))};V t109=first(call(e->slot(1,4),Args{mul(mul(e->slot(0,5),e->slot(0,7)),V(2.0)),V(0.4),V(1.6)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit31),V(1.0))};V t110=first(call(e->slot(1,4),Args{mul(mul(e->slot(0,5),e->slot(0,8)),V(2.0)),V(0.4),V(1.6)}));refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit31),V(2.0))};V t111=first(call(e->slot(1,4),Args{mul(mul(e->slot(0,6),e->slot(0,7)),V(2.0)),V(0.4),V(1.6)}));refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit31),V(3.0))};V t112=first(call(e->slot(1,4),Args{mul(mul(e->slot(0,6),e->slot(0,8)),V(2.0)),V(0.4),V(1.6)}));refs[0].put(std::move(t112));}
{V t113=([&](){V t114=([&](){V t115=first(call(e->slot(1,6),Args{lit109}));return !truth(t115)?first(call(e->slot(1,6),Args{lit110})):t115;})();return !truth(t114)?first(call(e->slot(1,6),Args{lit111})):t114;})();e->slot(0,9)=std::move(t113);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t116=ne(e->slot(0,9),V());refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t117=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t117));}
{V t118=([&](){V t119=first(call(e->slot(1,6),Args{lit112}));return !truth(t119)?first(call(e->slot(1,6),Args{lit113})):t119;})();e->slot(0,10)=std::move(t118);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t120=ne(e->slot(0,10),V());refs[0].put(std::move(t120));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t121=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,10),V(0.0)})),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t121));}
{V t122=([&](){V t123=([&](){V t124=([&](){V t125=first(call(e->slot(1,6),Args{lit114}));return !truth(t125)?first(call(e->slot(1,6),Args{lit115})):t125;})();return !truth(t124)?first(call(e->slot(1,6),Args{lit116})):t124;})();return !truth(t123)?first(call(e->slot(1,6),Args{lit117})):t123;})();e->slot(0,11)=std::move(t122);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t126=ne(e->slot(0,11),V());refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t127=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t127));}
{V t128=([&](){V t129=([&](){V t130=first(call(e->slot(1,6),Args{lit118}));return !truth(t130)?first(call(e->slot(1,6),Args{lit119})):t130;})();return !truth(t129)?first(call(e->slot(1,6),Args{lit120})):t129;})();e->slot(0,12)=std::move(t128);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t131=ne(e->slot(0,12),V());refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t132=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t132));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);{V t133=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t133);}
{V t134=([&](){V t135=([&](){V t136=([&](){V t137=eq(e->slot(0,0),V(0.0));return !truth(t137)?eq(e->slot(0,0),V(2.0)):t137;})();return truth(t136)?V(-num(V(1.0))):t136;})();return !truth(t135)?V(1.0):t135;})();e->slot(0,2)=std::move(t134);}
{V t138=lt(e->slot(0,0),V(2.0));e->slot(0,3)=std::move(t138);}
{V t139=([&](){V t140=([&](){V t141=e->slot(0,3);return truth(t141)?get(e->slot(1,2),lit40):t141;})();return !truth(t140)?get(e->slot(1,2),lit41):t140;})();e->slot(0,4)=std::move(t139);}
{V t142=mul(first(call(get(e->get("math"),lit121),Args{sub(V(1.0),([&](){V t143=get(get(e->slot(1,2),lit31),e->slot(0,0));return !truth(t143)?V(1.0):t143;})()),V(0.0)})),get(e->slot(0,1),lit13));e->slot(0,5)=std::move(t142);}
{V t144=add(mul(first(call(get(e->get("math"),lit121),Args{mul(get(e->slot(1,2),lit36),e->slot(0,2)),V(0.0)})),get(e->slot(0,1),lit14)),mul(first(call(get(e->get("math"),lit121),Args{mul(mul(get(e->slot(1,2),lit37),V(0.4)),e->slot(0,2)),V(0.0)})),get(e->slot(0,1),lit15)));e->slot(0,6)=std::move(t144);}
{V t145=mul(first(call(get(e->get("math"),lit121),Args{sub(V(0.5),first(call(e->slot(1,3),Args{e->slot(0,4),V(0.5)}))),V(0.0)})),get(e->slot(0,1),lit19));e->slot(0,7)=std::move(t145);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit33),e->slot(0,0))};V t146=first(call(e->slot(1,4),Args{add(add(add(add(add(e->slot(0,5),e->slot(0,6)),e->slot(0,7)),mul(([&](){V t147=get(e->slot(1,2),lit38);return !truth(t147)?V(0.0):t147;})(),get(e->slot(0,1),lit16))),mul(([&](){V t148=get(get(e->slot(1,2),lit32),e->slot(0,0));return !truth(t148)?V(0.0):t148;})(),get(e->slot(0,1),lit17))),mul(([&](){V t149=get(e->slot(1,2),lit39);return !truth(t149)?V(0.0):t149;})(),get(e->slot(0,1),lit18))),V(0.0),get(e->slot(0,1),lit20)}));refs[0].put(std::move(t146));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t150=get(e->slot(1,1),lit1);e->slot(0,2)=std::move(t150);}
{V t151=first(call(e->slot(1,4),Args{divv(([&](){V t152=get(get(e->slot(1,2),lit26),e->slot(0,0));return !truth(t152)?get(e->slot(0,2),lit11):t152;})(),first(call(get(e->get("math"),lit121),Args{get(e->slot(0,2),lit11),V(1.0)}))),V(0.0),V(2.5)}));e->slot(0,3)=std::move(t151);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit27),e->slot(0,0))};V t153=e->slot(0,3);refs[0].put(std::move(t153));}
{V t154=sub(sub(sub(sub(sub(get(e->slot(0,2),lit2),mul(sub(V(1.0),get(get(e->slot(1,2),lit28),e->slot(0,0))),get(e->slot(0,2),lit7))),mul(get(get(e->slot(1,2),lit29),e->slot(0,0)),get(e->slot(0,2),lit8))),mul(first(call(get(e->get("math"),lit121),Args{sub(V(1.0),e->slot(0,3)),V(0.0)})),get(e->slot(0,2),lit9))),mul(get(get(e->slot(1,2),lit30),e->slot(0,0)),get(e->slot(0,2),lit10))),get(get(e->slot(1,2),lit33),e->slot(0,0)));e->slot(0,4)=std::move(t154);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t155=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.05),get(e->slot(0,2),lit2)}));refs[0].put(std::move(t155));}
{V t156=add(get(e->slot(0,2),lit3),mul(sub(V(1.0),get(get(e->slot(1,2),lit28),e->slot(0,0))),get(e->slot(0,2),lit12)));e->slot(0,5)=std::move(t156);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t157=first(call(e->slot(1,4),Args{e->slot(0,5),get(e->slot(0,2),lit3),V(0.16)}));refs[0].put(std::move(t157));}
{V t158=([&](){V t159=get(get(e->slot(1,2),lit23),e->slot(0,0));return !truth(t159)?V(0.0):t159;})();e->slot(0,6)=std::move(t158);}
if(truth(lt(get(e->slot(1,2),lit34),get(e->slot(0,2),lit6)))){{std::array<Ref,1> refs{Ref(e,0,6)};V t160=V(0.0);refs[0].put(std::move(t160));}
}else if(truth(gt(e->slot(0,1),e->slot(0,4)))){{std::array<Ref,1> refs{Ref(e,0,6)};V t161=V(1.0);refs[0].put(std::move(t161));}
}else if(truth(lt(e->slot(0,1),e->slot(0,5)))){{std::array<Ref,1> refs{Ref(e,0,6)};V t162=V(0.0);refs[0].put(std::move(t162));}
}


return Args{e->slot(0,6)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,8),Args{concat(lit122,e->slot(0,0)),get(get(e->slot(1,2),lit23),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit123,e->slot(0,0)),get(get(e->slot(1,2),lit25),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit124,e->slot(0,0)),get(get(e->slot(1,2),lit24),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit125,e->slot(0,0)),get(get(e->slot(1,2),lit26),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit126,e->slot(0,0)),get(get(e->slot(1,2),lit27),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit127,e->slot(0,0)),get(get(e->slot(1,2),lit33),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit128,e->slot(0,0)),get(get(e->slot(1,2),lit31),e->slot(0,0))});
call(e->slot(1,8),Args{concat(lit129,e->slot(0,0)),get(get(e->slot(1,2),lit32),e->slot(0,0))});
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,8),Args{lit130,get(e->slot(1,2),lit46)});
call(e->slot(1,8),Args{lit131,get(e->slot(1,2),lit48)});
call(e->slot(1,8),Args{lit132,([&](){V t163=([&](){V t164=get(e->slot(1,2),lit49);return truth(t164)?V(1.0):t164;})();return !truth(t163)?V(0.0):t163;})()});
call(e->slot(1,8),Args{lit133,get(e->slot(1,2),lit34)});
call(e->slot(1,8),Args{lit134,get(e->slot(1,2),lit35)});
call(e->slot(1,8),Args{lit135,get(e->slot(1,2),lit42)});
call(e->slot(1,8),Args{lit136,get(e->slot(1,2),lit43)});
call(e->slot(1,8),Args{lit137,get(e->slot(1,2),lit44)});
call(e->slot(1,8),Args{lit138,get(e->slot(1,2),lit45)});
if(truth(V(!truth(get(e->slot(1,2),lit63))))){return Args{};
}
call(e->slot(1,8),Args{lit139,([&](){V t165=([&](){V t166=get(e->slot(1,2),lit50);return truth(t166)?V(1.0):t166;})();return !truth(t165)?V(0.0):t165;})()});
call(e->slot(1,8),Args{lit140,([&](){V t167=([&](){V t168=get(e->slot(1,2),lit51);return truth(t168)?V(1.0):t168;})();return !truth(t167)?V(0.0):t167;})()});
call(e->slot(1,8),Args{lit141,([&](){V t169=([&](){V t170=get(e->slot(1,2),lit52);return truth(t170)?V(1.0):t170;})();return !truth(t169)?V(0.0):t169;})()});
call(e->slot(1,8),Args{lit142,([&](){V t171=([&](){V t172=get(e->slot(1,2),lit53);return truth(t172)?V(1.0):t172;})();return !truth(t171)?V(0.0):t171;})()});
call(e->slot(1,8),Args{lit143,([&](){V t173=([&](){V t174=get(e->slot(1,2),lit54);return truth(t174)?V(1.0):t174;})();return !truth(t173)?V(0.0):t173;})()});
call(e->slot(1,8),Args{lit144,([&](){V t175=([&](){V t176=get(e->slot(1,2),lit55);return truth(t176)?V(1.0):t176;})();return !truth(t175)?V(0.0):t175;})()});
call(e->slot(1,8),Args{lit145,([&](){V t177=([&](){V t178=get(e->slot(1,2),lit56);return truth(t178)?V(1.0):t178;})();return !truth(t177)?V(0.0):t177;})()});
call(e->slot(1,8),Args{lit146,([&](){V t179=([&](){V t180=get(e->slot(1,2),lit57);return truth(t180)?V(1.0):t180;})();return !truth(t179)?V(0.0):t179;})()});
call(e->slot(1,8),Args{lit147,([&](){V t181=([&](){V t182=get(e->slot(1,2),lit58);return truth(t182)?V(1.0):t182;})();return !truth(t181)?V(0.0):t181;})()});
call(e->slot(1,8),Args{lit148,([&](){V t183=([&](){V t184=get(e->slot(1,2),lit59);return truth(t184)?V(1.0):t184;})();return !truth(t183)?V(0.0):t183;})()});
call(e->slot(1,8),Args{lit149,([&](){V t185=([&](){V t186=get(e->slot(1,2),lit60);return truth(t186)?V(1.0):t186;})();return !truth(t185)?V(0.0):t185;})()});
call(e->slot(1,8),Args{lit150,get(e->slot(1,2),lit36)});
call(e->slot(1,8),Args{lit151,get(e->slot(1,2),lit37)});
call(e->slot(1,8),Args{lit152,get(e->slot(1,2),lit38)});
call(e->slot(1,8),Args{lit153,get(e->slot(1,2),lit39)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t187=num(V(0.0)),t188=num(V(3.0)),t189=num(V(1.0));for(double t190=t187;(t189>0?t190<=t188:t190>=t188);t190+=t189){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t190);call(e->slot(2,23),Args{e->slot(0,0)});
}}
return Args{};});
Ref(e->slot(0,1),lit154).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t191=lit47;refs[0].put(std::move(t191));}
call(e->slot(1,25),Args{});
call(e->slot(1,24),Args{});
return Args{};}));
Ref(e->slot(0,1),lit155).put(native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t192=add(([&](){V t193=get(e->slot(1,2),lit48);return !truth(t193)?V(0.0):t193;})(),V(1.0));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t194=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t194));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t195=lit156;refs[0].put(std::move(t195));}
call(e->slot(1,24),Args{});
return Args{};
}
call(e->slot(1,13),Args{e->slot(0,0)});
call(e->slot(1,14),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t196=([&](){V t197=e->slot(0,1);return !truth(t197)?first(call(e->slot(1,10),Args{})):t197;})();refs[0].put(std::move(t196));}
if(truth(([&](){V t198=V(!truth(e->slot(0,1)));return !truth(t198)?V(!truth(get(e->slot(0,1),lit70))):t198;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t199=lit157;refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t200=V(false);refs[0].put(std::move(t200));}
call(e->slot(1,24),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t201=lit158;refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t202=V(true);refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit35)};V t203=first(call(e->slot(1,16),Args{e->slot(0,1)}));refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit34)};V t204=first(call(e->slot(1,15),Args{e->slot(0,1)}));refs[0].put(std::move(t204));}
call(e->slot(1,20),Args{e->slot(0,0)});
{V t205=divv(e->slot(0,0),add(get(get(e->slot(1,1),lit1),lit4),e->slot(0,0)));e->slot(0,3)=std::move(t205);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t206=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.0)}));refs[0].put(std::move(t206));}
{V t207=V(0.0);e->slot(0,4)=std::move(t207);}
{V t208=V(0.0);e->slot(0,5)=std::move(t208);}
{V t209=V(0.0);e->slot(0,6)=std::move(t209);}
{V t210=V(0.0);e->slot(0,7)=std::move(t210);}
{double t211=num(V(0.0)),t212=num(V(3.0)),t213=num(V(1.0));for(double t214=t211;(t213>0?t214<=t212:t214>=t212);t214+=t213){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t214);{V t215=first(call(e->slot(2,11),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t215);}
if(truth(([&](){V t216=lt(get(e->slot(2,2),lit35),get(get(e->slot(2,1),lit1),lit5));return !truth(t216)?V(!truth(e->slot(0,1))):t216;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit23),e->slot(0,0))};V t217=first(call(e->slot(2,12),Args{get(get(e->slot(2,2),lit23),e->slot(0,0)),V(0.0),e->slot(1,3)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit24),e->slot(0,0))};V t218=V(0.0);refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit25),e->slot(0,0))};V t219=V(0.0);refs[0].put(std::move(t219));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit26),e->slot(0,0))};V t220=V(0.0);refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit27),e->slot(0,0))};V t221=V(0.0);refs[0].put(std::move(t221));}
}
}else{auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t222=first(call(e->slot(3,17),Args{e->slot(1,1),e->slot(1,0)}));e->slot(0,0)=std::move(t222);}
{V t223=first(call(e->slot(3,18),Args{e->slot(1,1),e->slot(1,0)}));e->slot(0,1)=std::move(t223);}
{std::array<Ref,1> refs{Ref(get(e->slot(3,2),lit24),e->slot(1,0))};V t224=e->slot(0,0);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(get(e->slot(3,2),lit26),e->slot(1,0))};V t225=e->slot(0,1);refs[0].put(std::move(t225));}
call(e->slot(3,19),Args{e->slot(1,0)});
call(e->slot(3,21),Args{e->slot(1,0)});
{V t226=first(call(e->slot(3,22),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,2)=std::move(t226);}
{std::array<Ref,1> refs{Ref(get(e->slot(3,2),lit25),e->slot(1,0))};V t227=e->slot(0,2);refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(get(e->slot(3,2),lit23),e->slot(1,0))};V t228=first(call(e->slot(3,12),Args{get(get(e->slot(3,2),lit23),e->slot(1,0)),e->slot(0,2),e->slot(2,3)}));refs[0].put(std::move(t228));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit23),e->slot(0,0))};V t229=first(call(e->slot(2,4),Args{get(get(e->slot(2,2),lit23),e->slot(0,0)),V(0.0),V(1.0)}));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t230=add(e->slot(1,4),get(get(e->slot(2,2),lit23),e->slot(0,0)));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t231=add(e->slot(1,5),get(get(e->slot(2,2),lit24),e->slot(0,0)));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t232=add(e->slot(1,6),get(get(e->slot(2,2),lit33),e->slot(0,0)));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t233=first(call(get(e->get("math"),lit121),Args{e->slot(1,7),get(get(e->slot(2,2),lit23),e->slot(0,0))}));refs[0].put(std::move(t233));}
call(e->slot(2,23),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t234=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t235=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t236=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t237=e->slot(0,7);refs[0].put(std::move(t237));}
call(e->slot(1,24),Args{});
return Args{};}));
Ref(e->slot(0,1),lit159).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t238=get(get(e->slot(1,2),lit23),e->slot(0,0));return !truth(t238)?V(0.0):t238;})()};
return Args{};}));
Ref(e->slot(0,1),lit160).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t239=get(e->slot(1,2),lit42);return !truth(t239)?V(0.0):t239;})()};
return Args{};}));
Ref(e->slot(0,1),lit161).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t240=([&](){V t241=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t241)?V(0.0):t241;})();e->slot(0,0)=std::move(t240);}
return call(get(e->get("string"),lit162),Args{lit163,e->slot(0,0),([&](){V t242=get(get(e->slot(2,2),lit23),e->slot(0,0));return !truth(t242)?V(0.0):t242;})(),([&](){V t243=get(get(e->slot(2,2),lit25),e->slot(0,0));return !truth(t243)?V(0.0):t243;})(),([&](){V t244=get(get(e->slot(2,2),lit24),e->slot(0,0));return !truth(t244)?V(0.0):t244;})(),([&](){V t245=get(get(e->slot(2,2),lit26),e->slot(0,0));return !truth(t245)?V(0.0):t245;})(),([&](){V t246=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t246)?V(0.0):t246;})(),([&](){V t247=get(get(e->slot(2,2),lit28),e->slot(0,0));return !truth(t247)?V(1.0):t247;})()});
}
return call(get(e->get("string"),lit162),Args{concat(lit164,concat(lit165,concat(lit166,concat(lit167,lit168)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit46)})),([&](){V t248=get(e->slot(1,2),lit48);return !truth(t248)?V(0.0):t248;})(),([&](){V t249=([&](){V t250=get(e->slot(1,2),lit49);return truth(t250)?lit169:t250;})();return !truth(t249)?lit170:t249;})(),([&](){V t251=get(get(e->slot(1,2),lit23),V(0.0));return !truth(t251)?V(0.0):t251;})(),([&](){V t252=get(get(e->slot(1,2),lit23),V(1.0));return !truth(t252)?V(0.0):t252;})(),([&](){V t253=get(get(e->slot(1,2),lit23),V(2.0));return !truth(t253)?V(0.0):t253;})(),([&](){V t254=get(get(e->slot(1,2),lit23),V(3.0));return !truth(t254)?V(0.0):t254;})(),([&](){V t255=get(e->slot(1,2),lit42);return !truth(t255)?V(0.0):t255;})(),([&](){V t256=get(e->slot(1,2),lit43);return !truth(t256)?V(0.0):t256;})(),([&](){V t257=get(get(e->slot(1,2),lit24),V(0.0));return !truth(t257)?V(0.0):t257;})(),([&](){V t258=get(get(e->slot(1,2),lit24),V(1.0));return !truth(t258)?V(0.0):t258;})(),([&](){V t259=get(get(e->slot(1,2),lit24),V(2.0));return !truth(t259)?V(0.0):t259;})(),([&](){V t260=get(get(e->slot(1,2),lit24),V(3.0));return !truth(t260)?V(0.0):t260;})(),([&](){V t261=get(e->slot(1,2),lit34);return !truth(t261)?V(0.0):t261;})(),([&](){V t262=get(e->slot(1,2),lit35);return !truth(t262)?V(0.0):t262;})(),([&](){V t263=get(get(e->slot(1,2),lit33),V(0.0));return !truth(t263)?V(0.0):t263;})(),([&](){V t264=get(get(e->slot(1,2),lit33),V(1.0));return !truth(t264)?V(0.0):t264;})(),([&](){V t265=get(get(e->slot(1,2),lit33),V(2.0));return !truth(t265)?V(0.0):t265;})(),([&](){V t266=get(get(e->slot(1,2),lit33),V(3.0));return !truth(t266)?V(0.0):t266;})(),([&](){V t267=get(e->slot(1,2),lit45);return !truth(t267)?V(0.0):t267;})(),([&](){V t268=([&](){V t269=get(e->slot(1,2),lit50);return truth(t269)?lit169:t269;})();return !truth(t268)?lit170:t268;})(),([&](){V t270=([&](){V t271=get(e->slot(1,2),lit51);return truth(t271)?lit169:t271;})();return !truth(t270)?lit170:t270;})(),([&](){V t272=([&](){V t273=get(e->slot(1,2),lit52);return truth(t273)?lit169:t273;})();return !truth(t272)?lit170:t272;})(),([&](){V t274=([&](){V t275=get(e->slot(1,2),lit53);return truth(t275)?lit169:t275;})();return !truth(t274)?lit170:t274;})(),([&](){V t276=([&](){V t277=get(e->slot(1,2),lit54);return truth(t277)?lit169:t277;})();return !truth(t276)?lit170:t276;})(),([&](){V t278=([&](){V t279=get(e->slot(1,2),lit55);return truth(t279)?lit169:t279;})();return !truth(t278)?lit170:t278;})(),([&](){V t280=([&](){V t281=get(e->slot(1,2),lit56);return truth(t281)?lit169:t281;})();return !truth(t280)?lit170:t280;})(),([&](){V t282=([&](){V t283=get(e->slot(1,2),lit57);return truth(t283)?lit169:t283;})();return !truth(t282)?lit170:t282;})(),([&](){V t284=([&](){V t285=get(e->slot(1,2),lit58);return truth(t285)?lit169:t285;})();return !truth(t284)?lit170:t284;})(),([&](){V t286=([&](){V t287=get(e->slot(1,2),lit59);return truth(t287)?lit169:t287;})();return !truth(t286)?lit170:t286;})(),([&](){V t288=([&](){V t289=get(e->slot(1,2),lit60);return truth(t289)?lit169:t289;})();return !truth(t288)?lit170:t288;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

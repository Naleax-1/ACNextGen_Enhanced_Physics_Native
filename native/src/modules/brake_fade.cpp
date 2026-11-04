// Generated native C++ from pinned brake_fade.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("normalMu");
static const V lit3("temperatureInputContract");
static const V lit4("original");
static const V lit5("fadeStart");
static const V lit6("fadeEnd");
static const V lit7("minMu");
static const V lit8("recoveryTau");
static const V lit9("minTau");
static const V lit10("contactLossFadeGain");
static const V lit11("lockFadeGain");
static const V lit12("vehicleConditionFadeGain");
static const V lit13("rootHeatFadeGain");
static const V lit14("chassisEnergyFadeGain");
static const V lit15("suspensionStressFadeGain");
static const V lit16("thermalStressFadeGain");
static const V lit17("brakeInputFadeGain");
static const V lit18("coolingRecoveryGain");
static const V lit19("maxRootFadeAdd");
static const V lit20("globalReadInterval");
static const V lit21("debugStoreInterval");
static const V lit22("mu");
static const V lit23("targetMu");
static const V lit24("temp");
static const V lit25("fade");
static const V lit26("contactLoss");
static const V lit27("lock");
static const V lit28("rootHeat");
static const V lit29("rootFadeAdd");
static const V lit30("avgMu");
static const V lit31("minMuNow");
static const V lit32("avgFade");
static const V lit33("avgRootAdd");
static const V lit34("avgTemp");
static const V lit35("vehicleCondition");
static const V lit36("chassisEnergy");
static const V lit37("suspensionStress");
static const V lit38("thermalStress");
static const V lit39("brakeInput");
static const V lit40("cooling");
static const V lit41("brakeSystemLinked");
static const V lit42("lockLinked");
static const V lit43("tireLinked");
static const V lit44("conditionLinked");
static const V lit45("rootHeatLinked");
static const V lit46("chassisLinked");
static const V lit47("suspensionLinked");
static const V lit48("thermalLinked");
static const V lit49("brakeInputLinked");
static const V lit50("coolingLinked");
static const V lit51("status");
static const V lit52("INIT");
static const V lit53("updateCount");
static const V lit54("globalReadTimer");
static const V lit55("debugStoreTimer");
static const V lit56("debugStoreNow");
static const V lit57("state");
static const V lit58("debug");
static const V lit59("safeLoadRaw");
static const V lit60("safeStore");
static const V lit61("max");
static const V lit62("current_wheel_brake_temperature_v1");
static const V lit63("Invalid brake temperature input contract");
static const V lit64("safeField");
static const V lit65("wheels");
static const V lit66("brakeTemperature");
static const V lit67("number");
static const V lit68("abs");
static const V lit69("huge");
static const V lit70("Current wheel brake temperature unavailable");
static const V lit71("temperatureSource");
static const V lit72("CURRENT_WHEEL_BRAKE_TEMPERATURE");
static const V lit73("BRAKE_SYSTEM_MODEL");
static const V lit74("ngp_brake_disc_temp_");
static const V lit75("ngp_brake_temp_");
static const V lit76("ngp_tire_contact_loss_");
static const V lit77("ngp_tcr_contact_loss_");
static const V lit78("ngp_brake_lock_");
static const V lit79("ngp_brake_root_heat_");
static const V lit80("ngp_condition_brake");
static const V lit81("ngp_vehicle_brake_condition");
static const V lit82("ngp_chassis_energy");
static const V lit83("ngp_chassis_body_energy");
static const V lit84("ngp_weight_suspension_stress");
static const V lit85("ngp_chassis_flex_suspension_stress");
static const V lit86("ngp_body_suspension_stress");
static const V lit87("ngp_brake_root_heat_avg");
static const V lit88("ngp_virtual_thermal_stress");
static const V lit89("ngp_chassis_roll_thermal_stress");
static const V lit90("ngp_brake_input_smoothed");
static const V lit91("ngp_brake_input");
static const V lit92("ngp_brake_cooling");
static const V lit93("ngp_brake_mu_");
static const V lit94("ngp_brake_fade_");
static const V lit95("ngp_brake_target_mu_");
static const V lit96("ngp_brake_fade_temp_");
static const V lit97("ngp_brake_fade_root_add_");
static const V lit98("ngp_brake_fade_root_heat_");
static const V lit99("ngp_brake_fade_status");
static const V lit100("UNKNOWN");
static const V lit101("ngp_brake_fade_update_count");
static const V lit102("ngp_brake_mu_avg");
static const V lit103("ngp_brake_mu_min");
static const V lit104("ngp_brake_fade_avg");
static const V lit105("ngp_brake_fade_root_add_avg");
static const V lit106("ngp_brake_fade_temp_avg");
static const V lit107("ngp_brake_fade_brake_system_linked");
static const V lit108("ngp_brake_fade_lock_linked");
static const V lit109("ngp_brake_fade_tire_linked");
static const V lit110("ngp_brake_fade_condition_linked");
static const V lit111("ngp_brake_fade_root_heat_linked");
static const V lit112("ngp_brake_fade_chassis_linked");
static const V lit113("ngp_brake_fade_suspension_linked");
static const V lit114("ngp_brake_fade_thermal_linked");
static const V lit115("ngp_brake_fade_input_linked");
static const V lit116("ngp_brake_fade_cooling_linked");
static const V lit117("ngp_brake_fade_vehicle_condition");
static const V lit118("ngp_brake_fade_chassis_energy");
static const V lit119("ngp_brake_fade_suspension_stress");
static const V lit120("ngp_brake_fade_thermal_stress");
static const V lit121("ngp_brake_fade_input");
static const V lit122("ngp_brake_fade_cooling");
static const V lit123("min");
static const V lit124("init");
static const V lit125("update");
static const V lit126("BAD DT");
static const V lit127("RUNNING");
static const V lit128("getMu");
static const V lit129("getFade");
static const V lit130("getTargetMu");
static const V lit131("debugStr");
static const V lit132("format");
static const V lit133("Status %s / W%d Mu %.2f Target %.2f Fade %.2f Temp %.0f / Lock %.2f Root %.2f");
static const V lit134("Status %s / Count %.0f\n");
static const V lit135("Mu %.2f %.2f %.2f %.2f / Avg %.2f Min %.2f Fade %.2f Temp %.0f\n");
static const V lit136("RootAdd %.3f / Links Brake:%s Lock:%s Tire:%s Cond:%s Root:%s Chassis:%s Susp:%s Thermal:%s Input:%s Cool:%s");
static const V lit137("OK");
static const V lit138("NIL");
V load_brake_fade(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(20);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(1.0));set(z,lit3,lit4);set(z,lit5,V(350.0));set(z,lit6,V(750.0));set(z,lit7,V(0.55));set(z,lit8,V(3.0));set(z,lit9,V(0.05));set(z,lit10,V(0.08));set(z,lit11,V(0.06));set(z,lit12,V(0.08));set(z,lit13,V(0.08));set(z,lit14,V(0.05));set(z,lit15,V(0.05));set(z,lit16,V(0.06));set(z,lit17,V(0.04));set(z,lit18,V(0.06));set(z,lit19,V(0.2));set(z,lit20,V(0.05));set(z,lit21,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit22,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit23,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit24,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit25,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit26,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit27,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit28,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit29,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit30,V(1.0));set(z,lit31,V(1.0));set(z,lit32,V(0.0));set(z,lit33,V(0.0));set(z,lit34,V(25.0));set(z,lit35,V(0.0));set(z,lit36,V(0.0));set(z,lit37,V(0.0));set(z,lit38,V(0.0));set(z,lit39,V(0.0));set(z,lit40,V(0.0));set(z,lit41,V(false));set(z,lit42,V(false));set(z,lit43,V(false));set(z,lit44,V(false));set(z,lit45,V(false));set(z,lit46,V(false));set(z,lit47,V(false));set(z,lit48,V(false));set(z,lit49,V(false));set(z,lit50,V(false));set(z,lit51,lit52);set(z,lit53,V(0.0));set(z,lit54,V(999.0));set(z,lit55,V(999.0));set(z,lit56,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit57)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit58)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
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
{V t11=get(e->slot(0,0),lit59);e->slot(0,5)=std::move(t11);}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t12=first(call(e->slot(1,5),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t12);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t13=e->slot(0,1);return !truth(t13)?V(0.0):t13;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t14=e->slot(0,1);return !truth(t14)?V(0.0):t14;})()});
return Args{};});
{V t15=get(e->slot(0,0),lit60);e->slot(0,7)=std::move(t15);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t16=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t17=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t18=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t19=first(call(get(e->get("math"),lit61),Args{first(call(e->slot(1,3),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit9)})),get(get(e->slot(1,1),lit1),lit9)}));refs[0].put(std::move(t19));}
{V t20=divv(e->slot(0,2),add(e->slot(0,3),e->slot(0,2)));e->slot(0,4)=std::move(t20);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t21=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t21));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t23=add(([&](){V t24=get(e->slot(1,2),lit54);return !truth(t24)?V(999.0):t24;})(),e->slot(0,0));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t25=add(([&](){V t26=get(e->slot(1,2),lit55);return !truth(t26)?V(999.0):t26;})(),e->slot(0,0));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t27=V(false);refs[0].put(std::move(t27));}
if(truth(ge(get(e->slot(1,2),lit55),get(get(e->slot(1,1),lit1),lit21)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t28=V(0.0);refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t29=V(true);refs[0].put(std::move(t29));}
}
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t30=V(false);refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t31=V(false);refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t32=V(false);refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t33=V(false);refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t34=V(false);refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t35=V(false);refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t36=V(false);refs[0].put(std::move(t36));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t37=V(false);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t38=V(false);refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t39=V(false);refs[0].put(std::move(t39));}
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t40=get(get(e->slot(1,1),lit1),lit3);e->slot(0,2)=std::move(t40);}
if(truth(([&](){V t41=ne(e->slot(0,2),lit4);return truth(t41)?ne(e->slot(0,2),lit62):t41;})())){call(e->get("error"),Args{lit63});
}
if(truth(eq(e->slot(0,2),lit62))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t42=first(call(get(e->slot(2,0),lit64),Args{e->slot(1,1),lit65,V()}));e->slot(0,0)=std::move(t42);}
{V t43=first(call(get(e->slot(2,0),lit64),Args{e->slot(0,0),e->slot(1,0),V()}));e->slot(0,1)=std::move(t43);}
{V t44=first(call(get(e->slot(2,0),lit64),Args{e->slot(0,1),lit66,V()}));e->slot(0,2)=std::move(t44);}
if(truth(([&](){V t45=([&](){V t46=([&](){V t47=ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit67);return !truth(t47)?ne(e->slot(0,2),e->slot(0,2)):t47;})();return !truth(t46)?eq(first(call(get(e->get("math"),lit68),Args{e->slot(0,2)})),get(e->get("math"),lit69)):t46;})();return !truth(t45)?lt(e->slot(0,2),V(-num(V(273.15)))):t45;})())){call(e->get("error"),Args{lit70});
}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit71)};V t48=lit72;refs[0].put(std::move(t48));}
return Args{e->slot(0,2)};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t49=lit73;refs[0].put(std::move(t49));}
{V t50=([&](){V t51=first(call(e->slot(1,5),Args{concat(lit74,e->slot(0,0))}));return !truth(t51)?first(call(e->slot(1,5),Args{concat(lit75,e->slot(0,0))})):t51;})();e->slot(0,3)=std::move(t50);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t52=V(true);refs[0].put(std::move(t52));}
}
return call(e->slot(1,3),Args{e->slot(0,3),V(25.0)});
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t53=([&](){V t54=first(call(e->slot(1,5),Args{concat(lit76,e->slot(0,0))}));return !truth(t54)?first(call(e->slot(1,5),Args{concat(lit77,e->slot(0,0))})):t54;})();e->slot(0,1)=std::move(t53);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t55=V(true);refs[0].put(std::move(t55));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit26),e->slot(0,0))};V t56=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t56));}
{V t57=first(call(e->slot(1,5),Args{concat(lit78,e->slot(0,0))}));e->slot(0,2)=std::move(t57);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t58=V(true);refs[0].put(std::move(t58));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit27),e->slot(0,0))};V t59=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t59));}
{V t60=first(call(e->slot(1,5),Args{concat(lit79,e->slot(0,0))}));e->slot(0,3)=std::move(t60);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t61=V(true);refs[0].put(std::move(t61));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit28),e->slot(0,0))};V t62=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t62));}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;{V t63=([&](){V t64=first(call(e->slot(1,5),Args{lit80}));return !truth(t64)?first(call(e->slot(1,5),Args{lit81})):t64;})();e->slot(0,0)=std::move(t63);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t65=ne(e->slot(0,0),V());refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit35)};V t66=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t66));}
{V t67=([&](){V t68=first(call(e->slot(1,5),Args{lit82}));return !truth(t68)?first(call(e->slot(1,5),Args{lit83})):t68;})();e->slot(0,1)=std::move(t67);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t69=ne(e->slot(0,1),V());refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t70=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t70));}
{V t71=([&](){V t72=([&](){V t73=first(call(e->slot(1,5),Args{lit84}));return !truth(t73)?first(call(e->slot(1,5),Args{lit85})):t73;})();return !truth(t72)?first(call(e->slot(1,5),Args{lit86})):t72;})();e->slot(0,2)=std::move(t71);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t74=ne(e->slot(0,2),V());refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t75=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t75));}
{V t76=([&](){V t77=([&](){V t78=first(call(e->slot(1,5),Args{lit87}));return !truth(t78)?first(call(e->slot(1,5),Args{lit88})):t78;})();return !truth(t77)?first(call(e->slot(1,5),Args{lit89})):t77;})();e->slot(0,3)=std::move(t76);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t79=ne(e->slot(0,3),V());refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t80=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t80));}
{V t81=([&](){V t82=first(call(e->slot(1,5),Args{lit90}));return !truth(t82)?first(call(e->slot(1,5),Args{lit91})):t82;})();e->slot(0,4)=std::move(t81);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t83=ne(e->slot(0,4),V());refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t84=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t84));}
{V t85=first(call(e->slot(1,5),Args{lit92}));e->slot(0,5)=std::move(t85);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t86=ne(e->slot(0,5),V());refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t87=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(2.0)}));refs[0].put(std::move(t87));}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t88=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t88);}
if(truth(le(e->slot(0,0),get(e->slot(0,1),lit5)))){return Args{V(0.0)};
}
{V t89=first(call(get(e->get("math"),lit61),Args{sub(get(e->slot(0,1),lit6),get(e->slot(0,1),lit5)),V(1.0)}));e->slot(0,2)=std::move(t89);}
return call(e->slot(1,4),Args{divv(sub(e->slot(0,0),get(e->slot(0,1),lit5)),e->slot(0,2)),V(0.0),V(1.0)});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{V t90=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t90);}
{V t91=first(call(e->slot(1,14),Args{([&](){V t92=get(get(e->slot(1,2),lit24),e->slot(0,0));return !truth(t92)?V(25.0):t92;})()}));e->slot(0,2)=std::move(t91);}
{V t93=add(add(add(add(mul(get(get(e->slot(1,2),lit28),e->slot(0,0)),get(e->slot(0,1),lit13)),mul(get(e->slot(1,2),lit36),get(e->slot(0,1),lit14))),mul(get(e->slot(1,2),lit37),get(e->slot(0,1),lit15))),mul(get(e->slot(1,2),lit38),get(e->slot(0,1),lit16))),mul(get(e->slot(1,2),lit39),get(e->slot(0,1),lit17)));e->slot(0,3)=std::move(t93);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t94=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),get(e->slot(0,1),lit19)}));refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit29),e->slot(0,0))};V t95=e->slot(0,3);refs[0].put(std::move(t95));}
{V t96=add(add(add(add(e->slot(0,2),mul(get(get(e->slot(1,2),lit26),e->slot(0,0)),get(e->slot(0,1),lit10))),mul(get(get(e->slot(1,2),lit27),e->slot(0,0)),get(e->slot(0,1),lit11))),mul(get(e->slot(1,2),lit35),get(e->slot(0,1),lit12))),e->slot(0,3));e->slot(0,4)=std::move(t96);}
return call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)});
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t97=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t97);}
{V t98=first(call(e->slot(1,15),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t98);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit25),e->slot(0,0))};V t99=e->slot(0,2);refs[0].put(std::move(t99));}
return call(e->slot(1,4),Args{sub(get(e->slot(0,1),lit2),mul(e->slot(0,2),sub(get(e->slot(0,1),lit2),get(e->slot(0,1),lit7)))),get(e->slot(0,1),lit7),get(e->slot(0,1),lit2)});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,7),Args{concat(lit93,e->slot(0,0)),([&](){V t100=get(get(e->slot(1,2),lit22),e->slot(0,0));return !truth(t100)?V(1.0):t100;})()});
call(e->slot(1,7),Args{concat(lit94,e->slot(0,0)),([&](){V t101=get(get(e->slot(1,2),lit25),e->slot(0,0));return !truth(t101)?V(0.0):t101;})()});
call(e->slot(1,7),Args{concat(lit95,e->slot(0,0)),([&](){V t102=get(get(e->slot(1,2),lit23),e->slot(0,0));return !truth(t102)?V(1.0):t102;})()});
call(e->slot(1,7),Args{concat(lit96,e->slot(0,0)),([&](){V t103=get(get(e->slot(1,2),lit24),e->slot(0,0));return !truth(t103)?V(25.0):t103;})()});
call(e->slot(1,7),Args{concat(lit97,e->slot(0,0)),([&](){V t104=get(get(e->slot(1,2),lit29),e->slot(0,0));return !truth(t104)?V(0.0):t104;})()});
call(e->slot(1,7),Args{concat(lit98,e->slot(0,0)),([&](){V t105=get(get(e->slot(1,2),lit28),e->slot(0,0));return !truth(t105)?V(0.0):t105;})()});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,7),Args{lit99,([&](){V t106=get(e->slot(1,2),lit51);return !truth(t106)?lit100:t106;})()});
call(e->slot(1,7),Args{lit101,([&](){V t107=get(e->slot(1,2),lit53);return !truth(t107)?V(0.0):t107;})()});
call(e->slot(1,7),Args{lit102,([&](){V t108=get(e->slot(1,2),lit30);return !truth(t108)?V(1.0):t108;})()});
call(e->slot(1,7),Args{lit103,([&](){V t109=get(e->slot(1,2),lit31);return !truth(t109)?V(1.0):t109;})()});
call(e->slot(1,7),Args{lit104,([&](){V t110=get(e->slot(1,2),lit32);return !truth(t110)?V(0.0):t110;})()});
call(e->slot(1,7),Args{lit105,([&](){V t111=get(e->slot(1,2),lit33);return !truth(t111)?V(0.0):t111;})()});
call(e->slot(1,7),Args{lit106,([&](){V t112=get(e->slot(1,2),lit34);return !truth(t112)?V(25.0):t112;})()});
if(truth(V(!truth(get(e->slot(1,2),lit56))))){return Args{};
}
call(e->slot(1,7),Args{lit107,([&](){V t113=([&](){V t114=get(e->slot(1,2),lit41);return truth(t114)?V(1.0):t114;})();return !truth(t113)?V(0.0):t113;})()});
call(e->slot(1,7),Args{lit108,([&](){V t115=([&](){V t116=get(e->slot(1,2),lit42);return truth(t116)?V(1.0):t116;})();return !truth(t115)?V(0.0):t115;})()});
call(e->slot(1,7),Args{lit109,([&](){V t117=([&](){V t118=get(e->slot(1,2),lit43);return truth(t118)?V(1.0):t118;})();return !truth(t117)?V(0.0):t117;})()});
call(e->slot(1,7),Args{lit110,([&](){V t119=([&](){V t120=get(e->slot(1,2),lit44);return truth(t120)?V(1.0):t120;})();return !truth(t119)?V(0.0):t119;})()});
call(e->slot(1,7),Args{lit111,([&](){V t121=([&](){V t122=get(e->slot(1,2),lit45);return truth(t122)?V(1.0):t122;})();return !truth(t121)?V(0.0):t121;})()});
call(e->slot(1,7),Args{lit112,([&](){V t123=([&](){V t124=get(e->slot(1,2),lit46);return truth(t124)?V(1.0):t124;})();return !truth(t123)?V(0.0):t123;})()});
call(e->slot(1,7),Args{lit113,([&](){V t125=([&](){V t126=get(e->slot(1,2),lit47);return truth(t126)?V(1.0):t126;})();return !truth(t125)?V(0.0):t125;})()});
call(e->slot(1,7),Args{lit114,([&](){V t127=([&](){V t128=get(e->slot(1,2),lit48);return truth(t128)?V(1.0):t128;})();return !truth(t127)?V(0.0):t127;})()});
call(e->slot(1,7),Args{lit115,([&](){V t129=([&](){V t130=get(e->slot(1,2),lit49);return truth(t130)?V(1.0):t130;})();return !truth(t129)?V(0.0):t129;})()});
call(e->slot(1,7),Args{lit116,([&](){V t131=([&](){V t132=get(e->slot(1,2),lit50);return truth(t132)?V(1.0):t132;})();return !truth(t131)?V(0.0):t131;})()});
call(e->slot(1,7),Args{lit117,([&](){V t133=get(e->slot(1,2),lit35);return !truth(t133)?V(0.0):t133;})()});
call(e->slot(1,7),Args{lit118,([&](){V t134=get(e->slot(1,2),lit36);return !truth(t134)?V(0.0):t134;})()});
call(e->slot(1,7),Args{lit119,([&](){V t135=get(e->slot(1,2),lit37);return !truth(t135)?V(0.0):t135;})()});
call(e->slot(1,7),Args{lit120,([&](){V t136=get(e->slot(1,2),lit38);return !truth(t136)?V(0.0):t136;})()});
call(e->slot(1,7),Args{lit121,([&](){V t137=get(e->slot(1,2),lit39);return !truth(t137)?V(0.0):t137;})()});
call(e->slot(1,7),Args{lit122,([&](){V t138=get(e->slot(1,2),lit40);return !truth(t138)?V(0.0):t138;})()});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t139=V(0.0);e->slot(0,0)=std::move(t139);}
{V t140=V(0.0);e->slot(0,1)=std::move(t140);}
{V t141=V(0.0);e->slot(0,2)=std::move(t141);}
{V t142=V(0.0);e->slot(0,3)=std::move(t142);}
{V t143=V(1.0);e->slot(0,4)=std::move(t143);}
{double t144=num(V(0.0)),t145=num(V(3.0)),t146=num(V(1.0));for(double t147=t144;(t146>0?t147<=t145:t147>=t145);t147+=t146){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t147);{std::array<Ref,1> refs{Ref(e,1,0)};V t148=add(e->slot(1,0),([&](){V t149=get(get(e->slot(2,2),lit22),e->slot(0,0));return !truth(t149)?V(1.0):t149;})());refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t150=add(e->slot(1,1),([&](){V t151=get(get(e->slot(2,2),lit25),e->slot(0,0));return !truth(t151)?V(0.0):t151;})());refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t152=add(e->slot(1,2),([&](){V t153=get(get(e->slot(2,2),lit29),e->slot(0,0));return !truth(t153)?V(0.0):t153;})());refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t154=add(e->slot(1,3),([&](){V t155=get(get(e->slot(2,2),lit24),e->slot(0,0));return !truth(t155)?V(25.0):t155;})());refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t156=first(call(get(e->get("math"),lit123),Args{e->slot(1,4),([&](){V t157=get(get(e->slot(2,2),lit22),e->slot(0,0));return !truth(t157)?V(1.0):t157;})()}));refs[0].put(std::move(t156));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit30)};V t158=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t159=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t160=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit34)};V t161=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit31)};V t162=e->slot(0,4);refs[0].put(std::move(t162));}
return Args{};});
Ref(e->slot(0,1),lit124).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t163=lit52;refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t164=V(0.0);refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t165=V(999.0);refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t166=V(999.0);refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t167=V(true);refs[0].put(std::move(t167));}
call(e->slot(1,19),Args{});
{double t168=num(V(0.0)),t169=num(V(3.0)),t170=num(V(1.0));for(double t171=t168;(t170>0?t171<=t169:t171>=t169);t171+=t170){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t171);call(e->slot(2,17),Args{e->slot(0,0)});
}}
call(e->slot(1,18),Args{});
return Args{};}));
Ref(e->slot(0,1),lit125).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t172=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t173=add(([&](){V t174=get(e->slot(1,2),lit53);return !truth(t174)?V(0.0):t174;})(),V(1.0));refs[0].put(std::move(t173));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t175=lit126;refs[0].put(std::move(t175));}
call(e->slot(1,18),Args{});
return Args{};
}
call(e->slot(1,9),Args{e->slot(0,0)});
call(e->slot(1,10),Args{});
if(truth(ge(get(e->slot(1,2),lit54),get(get(e->slot(1,1),lit1),lit20)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t176=V(0.0);refs[0].put(std::move(t176));}
call(e->slot(1,13),Args{});
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t177=lit127;refs[0].put(std::move(t177));}
{V t178=divv(get(get(e->slot(1,1),lit1),lit8),add(V(1.0),mul(([&](){V t179=get(e->slot(1,2),lit40);return !truth(t179)?V(0.0):t179;})(),get(get(e->slot(1,1),lit1),lit18))));e->slot(0,3)=std::move(t178);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t180=first(call(get(e->get("math"),lit61),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit9)}));refs[0].put(std::move(t180));}
{double t181=num(V(0.0)),t182=num(V(3.0)),t183=num(V(1.0));for(double t184=t181;(t183>0?t184<=t182:t184>=t182);t184+=t183){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t184);call(e->slot(2,12),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit24),e->slot(0,0))};V t185=first(call(e->slot(2,11),Args{e->slot(0,0),e->slot(1,1)}));refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit23),e->slot(0,0))};V t186=first(call(e->slot(2,16),Args{e->slot(0,0)}));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit22),e->slot(0,0))};V t187=first(call(e->slot(2,8),Args{get(get(e->slot(2,2),lit22),e->slot(0,0)),get(get(e->slot(2,2),lit23),e->slot(0,0)),e->slot(1,0),e->slot(1,3)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit22),e->slot(0,0))};V t188=first(call(e->slot(2,4),Args{get(get(e->slot(2,2),lit22),e->slot(0,0)),get(get(e->slot(2,1),lit1),lit7),get(get(e->slot(2,1),lit1),lit2)}));refs[0].put(std::move(t188));}
call(e->slot(2,17),Args{e->slot(0,0)});
}}
call(e->slot(1,19),Args{});
call(e->slot(1,18),Args{});
return Args{};}));
Ref(e->slot(0,1),lit128).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t189=get(get(e->slot(1,2),lit22),e->slot(0,0));return !truth(t189)?V(1.0):t189;})()};
return Args{};}));
Ref(e->slot(0,1),lit129).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t190=get(get(e->slot(1,2),lit25),e->slot(0,0));return !truth(t190)?V(0.0):t190;})()};
return Args{};}));
Ref(e->slot(0,1),lit130).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t191=get(get(e->slot(1,2),lit23),e->slot(0,0));return !truth(t191)?V(1.0):t191;})()};
return Args{};}));
Ref(e->slot(0,1),lit131).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t192=([&](){V t193=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t193)?V(0.0):t193;})();refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t194=first(call(get(e->get("math"),lit61),joined(Args{V(0.0)},call(get(e->get("math"),lit123),Args{V(3.0),e->slot(0,0)}))));refs[0].put(std::move(t194));}
return call(get(e->get("string"),lit132),Args{lit133,first(call(e->get("tostring"),Args{get(e->slot(1,2),lit51)})),e->slot(0,0),([&](){V t195=get(get(e->slot(1,2),lit22),e->slot(0,0));return !truth(t195)?V(1.0):t195;})(),([&](){V t196=get(get(e->slot(1,2),lit23),e->slot(0,0));return !truth(t196)?V(1.0):t196;})(),([&](){V t197=get(get(e->slot(1,2),lit25),e->slot(0,0));return !truth(t197)?V(0.0):t197;})(),([&](){V t198=get(get(e->slot(1,2),lit24),e->slot(0,0));return !truth(t198)?V(25.0):t198;})(),([&](){V t199=get(get(e->slot(1,2),lit27),e->slot(0,0));return !truth(t199)?V(0.0):t199;})(),([&](){V t200=get(get(e->slot(1,2),lit29),e->slot(0,0));return !truth(t200)?V(0.0):t200;})()});
}
return call(get(e->get("string"),lit132),Args{concat(lit134,concat(lit135,lit136)),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit51)})),([&](){V t201=get(e->slot(1,2),lit53);return !truth(t201)?V(0.0):t201;})(),([&](){V t202=get(get(e->slot(1,2),lit22),V(0.0));return !truth(t202)?V(1.0):t202;})(),([&](){V t203=get(get(e->slot(1,2),lit22),V(1.0));return !truth(t203)?V(1.0):t203;})(),([&](){V t204=get(get(e->slot(1,2),lit22),V(2.0));return !truth(t204)?V(1.0):t204;})(),([&](){V t205=get(get(e->slot(1,2),lit22),V(3.0));return !truth(t205)?V(1.0):t205;})(),([&](){V t206=get(e->slot(1,2),lit30);return !truth(t206)?V(1.0):t206;})(),([&](){V t207=get(e->slot(1,2),lit31);return !truth(t207)?V(1.0):t207;})(),([&](){V t208=get(e->slot(1,2),lit32);return !truth(t208)?V(0.0):t208;})(),([&](){V t209=get(e->slot(1,2),lit34);return !truth(t209)?V(25.0):t209;})(),([&](){V t210=get(e->slot(1,2),lit33);return !truth(t210)?V(0.0):t210;})(),([&](){V t211=([&](){V t212=get(e->slot(1,2),lit41);return truth(t212)?lit137:t212;})();return !truth(t211)?lit138:t211;})(),([&](){V t213=([&](){V t214=get(e->slot(1,2),lit42);return truth(t214)?lit137:t214;})();return !truth(t213)?lit138:t213;})(),([&](){V t215=([&](){V t216=get(e->slot(1,2),lit43);return truth(t216)?lit137:t216;})();return !truth(t215)?lit138:t215;})(),([&](){V t217=([&](){V t218=get(e->slot(1,2),lit44);return truth(t218)?lit137:t218;})();return !truth(t217)?lit138:t217;})(),([&](){V t219=([&](){V t220=get(e->slot(1,2),lit45);return truth(t220)?lit137:t220;})();return !truth(t219)?lit138:t219;})(),([&](){V t221=([&](){V t222=get(e->slot(1,2),lit46);return truth(t222)?lit137:t222;})();return !truth(t221)?lit138:t221;})(),([&](){V t223=([&](){V t224=get(e->slot(1,2),lit47);return truth(t224)?lit137:t224;})();return !truth(t223)?lit138:t223;})(),([&](){V t225=([&](){V t226=get(e->slot(1,2),lit48);return truth(t226)?lit137:t226;})();return !truth(t225)?lit138:t225;})(),([&](){V t227=([&](){V t228=get(e->slot(1,2),lit49);return truth(t228)?lit137:t228;})();return !truth(t227)?lit138:t227;})(),([&](){V t229=([&](){V t230=get(e->slot(1,2),lit50);return truth(t230)?lit137:t230;})();return !truth(t229)?lit138:t229;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

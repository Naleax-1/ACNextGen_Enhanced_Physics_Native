// Generated native C++ from pinned brake_system.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("ambient");
static const V lit3("heatScale");
static const V lit4("coolBase");
static const V lit5("coolSpeed");
static const V lit6("maxTemp");
static const V lit7("frontBias");
static const V lit8("rearBias");
static const V lit9("brakeTau");
static const V lit10("rootHeatGain");
static const V lit11("lockHeatGain");
static const V lit12("contactLossHeatGain");
static const V lit13("contactLossCoolingGain");
static const V lit14("loadRef");
static const V lit15("maxRootHeat");
static const V lit16("debugStoreInterval");
static const V lit17("discTemp");
static const V lit18("rootHeat");
static const V lit19("lock");
static const V lit20("contactLoss");
static const V lit21("load");
static const V lit22("heat");
static const V lit23("cool");
static const V lit24("brakeInput");
static const V lit25("brakeInputSmoothed");
static const V lit26("speedKmh");
static const V lit27("cooling");
static const V lit28("avgTemp");
static const V lit29("maxTempNow");
static const V lit30("rootHeatAvg");
static const V lit31("avgHeat");
static const V lit32("avgCool");
static const V lit33("status");
static const V lit34("INIT");
static const V lit35("updateCount");
static const V lit36("wheelsValid");
static const V lit37("lockLinked");
static const V lit38("tireLinked");
static const V lit39("loadLinked");
static const V lit40("debugStoreTimer");
static const V lit41("debugStoreNow");
static const V lit42("state");
static const V lit43("debug");
static const V lit44("safeLoadRaw");
static const V lit45("safeStore");
static const V lit46("safeField");
static const V lit47("max");
static const V lit48("getCar");
static const V lit49("wheels");
static const V lit50("ngp_wheel_load_");
static const V lit51("ngp_load_wheel_");
static const V lit52("ngp_dlt_load_");
static const V lit53("ngp_sprung_load_");
static const V lit54("ngp_brake_lock_");
static const V lit55("ngp_tire_contact_loss_");
static const V lit56("ngp_tcr_contact_loss_");
static const V lit57("ngp_contact_quality_");
static const V lit58("ngp_tc_contact_");
static const V lit59("ngp_tire_contact_");
static const V lit60("ngp_brake_temp_");
static const V lit61("ngp_brake_disc_temp_");
static const V lit62("ngp_brake_root_heat_");
static const V lit63("ngp_brake_heat_");
static const V lit64("ngp_brake_cool_");
static const V lit65("ngp_brake_load_");
static const V lit66("ngp_brake_contact_loss_");
static const V lit67("ngp_brake_lock_input_");
static const V lit68("ngp_brake_input");
static const V lit69("ngp_brake_input_smoothed");
static const V lit70("ngp_brake_speed_kmh");
static const V lit71("ngp_brake_cooling");
static const V lit72("ngp_brake_avg_temp");
static const V lit73("ngp_brake_temp_avg");
static const V lit74("ngp_brake_max_temp");
static const V lit75("ngp_brake_temp_max");
static const V lit76("ngp_brake_root_heat_avg");
static const V lit77("ngp_brake_status");
static const V lit78("ngp_brake_system_status");
static const V lit79("ngp_brake_system_update_count");
static const V lit80("ngp_brake_system_wheels_valid");
static const V lit81("ngp_brake_system_lock_linked");
static const V lit82("ngp_brake_system_tire_linked");
static const V lit83("ngp_brake_system_load_linked");
static const V lit84("ngp_brake_heat_avg");
static const V lit85("ngp_brake_cool_avg");
static const V lit86("init");
static const V lit87("update");
static const V lit88("BAD DT");
static const V lit89("NO CAR");
static const V lit90("RUNNING");
static const V lit91("brake");
static const V lit92("getTemp");
static const V lit93("getRootHeat");
static const V lit94("debugStr");
static const V lit95("format");
static const V lit96("W%d Temp %.1f / Heat %.3f / Cool %.3f / Load %.0f / Lock %.2f / Root %.3f / ContactLoss %.2f");
static const V lit97("Status %s / Count %.0f / Wheels %s\n");
static const V lit98("Brake %.2f Smooth %.2f / Speed %.1f / Cooling %.3f\n");
static const V lit99("Temp %.1f %.1f %.1f %.1f / Avg %.1f Max %.1f\n");
static const V lit100("RootHeat %.3f / Links Lock:%s Tire:%s Load:%s");
static const V lit101("OK");
static const V lit102("NIL");
V load_brake_system(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(20);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(25.0));set(z,lit3,V(0.08));set(z,lit4,V(0.015));set(z,lit5,V(0.002));set(z,lit6,V(900.0));set(z,lit7,V(1.08));set(z,lit8,V(0.92));set(z,lit9,V(0.04));set(z,lit10,V(0.1));set(z,lit11,V(0.08));set(z,lit12,V(0.05));set(z,lit13,V(0.06));set(z,lit14,V(3500.0));set(z,lit15,V(0.35));set(z,lit16,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit17,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit18,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit19,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit20,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit21,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit22,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit23,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit24,V(0.0));set(z,lit25,V(0.0));set(z,lit26,V(0.0));set(z,lit27,V(0.0));set(z,lit28,V(25.0));set(z,lit29,V(25.0));set(z,lit30,V(0.0));set(z,lit31,V(0.0));set(z,lit32,V(0.0));set(z,lit33,lit34);set(z,lit35,V(0.0));set(z,lit36,V(false));set(z,lit37,V(false));set(z,lit38,V(false));set(z,lit39,V(false));set(z,lit40,V(999.0));set(z,lit41,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit42)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit43)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
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
{V t11=get(e->slot(0,0),lit44);e->slot(0,5)=std::move(t11);}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t12=first(call(e->slot(1,5),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t12);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t13=e->slot(0,1);return !truth(t13)?V(0.0):t13;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t14=e->slot(0,1);return !truth(t14)?V(0.0):t14;})()});
return Args{};});
{V t15=get(e->slot(0,0),lit45);e->slot(0,7)=std::move(t15);}
{V t16=get(e->slot(0,0),lit46);e->slot(0,8)=std::move(t16);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t17=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t18=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t19=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t19));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t20=first(call(get(e->get("math"),lit47),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.001)})),V(0.0001)}));refs[0].put(std::move(t20));}
{V t21=divv(e->slot(0,2),add(e->slot(0,3),e->slot(0,2)));e->slot(0,4)=std::move(t21);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t22=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t22));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t23=add(([&](){V t24=get(e->slot(1,2),lit40);return !truth(t24)?V(0.0):t24;})(),first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t23));}
if(truth(ge(get(e->slot(1,2),lit40),get(get(e->slot(1,1),lit1),lit16)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t25=V(0.0);refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t26=V(true);refs[0].put(std::move(t26));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t27=V(false);refs[0].put(std::move(t27));}
}
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,0);if(truth(([&](){V t28=e->get("ac");return truth(t28)?get(e->get("ac"),lit48):t28;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t29=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit48),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t29,0);e->slot(0,1)=arg(t29,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
}
return Args{V()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t30=V(!truth(e->slot(0,0)));return !truth(t30)?V(!truth(get(e->slot(0,0),lit49))):t30;})())){return Args{V()};
}
{Args t31=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit49),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t31,0);e->slot(0,3)=arg(t31,1);}
if(truth(e->slot(0,2))){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t32=([&](){V t33=([&](){V t34=([&](){V t35=first(call(e->slot(1,5),Args{concat(lit50,e->slot(0,1))}));return !truth(t35)?first(call(e->slot(1,5),Args{concat(lit51,e->slot(0,1))})):t35;})();return !truth(t34)?first(call(e->slot(1,5),Args{concat(lit52,e->slot(0,1))})):t34;})();return !truth(t33)?first(call(e->slot(1,5),Args{concat(lit53,e->slot(0,1))})):t33;})();e->slot(0,2)=std::move(t32);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t36=V(true);refs[0].put(std::move(t36));}
return call(get(e->get("math"),lit47),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(0.0)});
}
if(truth(e->slot(0,0))){return call(get(e->get("math"),lit47),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,0),lit21,V(0.0)})),V(0.0)})),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t37=first(call(e->slot(1,5),Args{concat(lit54,e->slot(0,0))}));e->slot(0,1)=std::move(t37);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t38=V(true);refs[0].put(std::move(t38));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit19),e->slot(0,0))};V t39=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t39));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t40=([&](){V t41=first(call(e->slot(1,5),Args{concat(lit55,e->slot(0,0))}));return !truth(t41)?first(call(e->slot(1,5),Args{concat(lit56,e->slot(0,0))})):t41;})();e->slot(0,1)=std::move(t40);}
if(truth(eq(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t42=([&](){V t43=([&](){V t44=first(call(e->slot(2,5),Args{concat(lit57,e->slot(1,0))}));return !truth(t44)?first(call(e->slot(2,5),Args{concat(lit58,e->slot(1,0))})):t44;})();return !truth(t43)?first(call(e->slot(2,5),Args{concat(lit59,e->slot(1,0))})):t43;})();e->slot(0,0)=std::move(t42);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t45=sub(V(1.0),first(call(e->slot(2,3),Args{e->slot(0,0),V(1.0)})));refs[0].put(std::move(t45));}
}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t46=V(true);refs[0].put(std::move(t46));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit20),e->slot(0,0))};V t47=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t47));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(le(e->slot(0,0),V(1.0)))){return Args{get(get(e->slot(1,1),lit1),lit7)};
}
return Args{get(get(e->slot(1,1),lit1),lit8)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t48=first(call(e->slot(1,16),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t48);}
{V t49=mul(first(call(get(e->get("math"),lit47),Args{sub(e->slot(0,1),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit10));e->slot(0,2)=std::move(t49);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit18),e->slot(0,0))};V t50=first(call(e->slot(1,4),Args{add(add(e->slot(0,2),mul(get(get(e->slot(1,2),lit19),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit11))),mul(get(get(e->slot(1,2),lit20),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit12))),V(0.0),get(get(e->slot(1,1),lit1),lit15)}));refs[0].put(std::move(t50));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,7),Args{concat(lit60,e->slot(0,0)),get(get(e->slot(1,2),lit17),e->slot(0,0))});
call(e->slot(1,7),Args{concat(lit61,e->slot(0,0)),get(get(e->slot(1,2),lit17),e->slot(0,0))});
call(e->slot(1,7),Args{concat(lit62,e->slot(0,0)),get(get(e->slot(1,2),lit18),e->slot(0,0))});
if(truth(get(e->slot(1,2),lit41))){call(e->slot(1,7),Args{concat(lit63,e->slot(0,0)),get(get(e->slot(1,2),lit22),e->slot(0,0))});
call(e->slot(1,7),Args{concat(lit64,e->slot(0,0)),get(get(e->slot(1,2),lit23),e->slot(0,0))});
call(e->slot(1,7),Args{concat(lit65,e->slot(0,0)),get(get(e->slot(1,2),lit21),e->slot(0,0))});
call(e->slot(1,7),Args{concat(lit66,e->slot(0,0)),get(get(e->slot(1,2),lit20),e->slot(0,0))});
call(e->slot(1,7),Args{concat(lit67,e->slot(0,0)),get(get(e->slot(1,2),lit19),e->slot(0,0))});
}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,7),Args{lit68,get(e->slot(1,2),lit24)});
call(e->slot(1,7),Args{lit69,get(e->slot(1,2),lit25)});
call(e->slot(1,7),Args{lit70,get(e->slot(1,2),lit26)});
call(e->slot(1,7),Args{lit71,get(e->slot(1,2),lit27)});
call(e->slot(1,7),Args{lit72,get(e->slot(1,2),lit28)});
call(e->slot(1,7),Args{lit73,get(e->slot(1,2),lit28)});
call(e->slot(1,7),Args{lit74,get(e->slot(1,2),lit29)});
call(e->slot(1,7),Args{lit75,get(e->slot(1,2),lit29)});
call(e->slot(1,7),Args{lit76,get(e->slot(1,2),lit30)});
call(e->slot(1,7),Args{lit77,get(e->slot(1,2),lit33)});
call(e->slot(1,7),Args{lit78,get(e->slot(1,2),lit33)});
call(e->slot(1,7),Args{lit79,get(e->slot(1,2),lit35)});
call(e->slot(1,7),Args{lit80,([&](){V t51=([&](){V t52=get(e->slot(1,2),lit36);return truth(t52)?V(1.0):t52;})();return !truth(t51)?V(0.0):t51;})()});
if(truth(get(e->slot(1,2),lit41))){call(e->slot(1,7),Args{lit81,([&](){V t53=([&](){V t54=get(e->slot(1,2),lit37);return truth(t54)?V(1.0):t54;})();return !truth(t53)?V(0.0):t53;})()});
call(e->slot(1,7),Args{lit82,([&](){V t55=([&](){V t56=get(e->slot(1,2),lit38);return truth(t56)?V(1.0):t56;})();return !truth(t55)?V(0.0):t55;})()});
call(e->slot(1,7),Args{lit83,([&](){V t57=([&](){V t58=get(e->slot(1,2),lit39);return truth(t58)?V(1.0):t58;})();return !truth(t57)?V(0.0):t57;})()});
call(e->slot(1,7),Args{lit84,get(e->slot(1,2),lit31)});
call(e->slot(1,7),Args{lit85,get(e->slot(1,2),lit32)});
}
return Args{};});
Ref(e->slot(0,1),lit86).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t59=lit34;refs[0].put(std::move(t59));}
{double t60=num(V(0.0)),t61=num(V(3.0)),t62=num(V(1.0));for(double t63=t60;(t62>0?t63<=t61:t63>=t61);t63+=t62){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t63);call(e->slot(2,18),Args{e->slot(0,0)});
}}
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit87).put(native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit35)};V t64=add(([&](){V t65=get(e->slot(1,2),lit35);return !truth(t65)?V(0.0):t65;})(),V(1.0));refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t66=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t66));}
call(e->slot(1,10),Args{e->slot(0,0)});
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t67=lit88;refs[0].put(std::move(t67));}
call(e->slot(1,19),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t68=([&](){V t69=e->slot(0,1);return !truth(t69)?first(call(e->slot(1,11),Args{})):t69;})();refs[0].put(std::move(t68));}
if(truth(([&](){V t70=V(!truth(e->slot(0,1)));return !truth(t70)?V(!truth(get(e->slot(0,1),lit49))):t70;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t71=lit89;refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t72=V(false);refs[0].put(std::move(t72));}
call(e->slot(1,19),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t73=lit90;refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t74=V(true);refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t75=V(false);refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t76=V(false);refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t77=V(false);refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t78=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,1),lit91,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit25)};V t79=first(call(e->slot(1,9),Args{get(e->slot(1,2),lit25),get(e->slot(1,2),lit24),e->slot(0,0),get(get(e->slot(1,1),lit1),lit9)}));refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t80=first(call(get(e->get("math"),lit47),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,1),lit26,V(0.0)})),V(0.0)})),V(0.0)}));refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t81=first(call(get(e->get("math"),lit47),Args{add(get(get(e->slot(1,1),lit1),lit4),mul(get(e->slot(1,2),lit26),get(get(e->slot(1,1),lit1),lit5))),V(0.0)}));refs[0].put(std::move(t81));}
{V t82=V(0.0);e->slot(0,3)=std::move(t82);}
{V t83=V(0.0);e->slot(0,4)=std::move(t83);}
{V t84=V(0.0);e->slot(0,5)=std::move(t84);}
{V t85=V(0.0);e->slot(0,6)=std::move(t85);}
{V t86=get(get(e->slot(1,1),lit1),lit2);e->slot(0,7)=std::move(t86);}
{double t87=num(V(0.0)),t88=num(V(3.0)),t89=num(V(1.0));for(double t90=t87;(t89>0?t90<=t88:t90>=t88);t90+=t89){auto parent=e;Env storage(parent,false,7);auto e=&storage;e->slot(0,0)=V(t90);{V t91=first(call(e->slot(2,12),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t91);}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit21),e->slot(0,0))};V t92=first(call(e->slot(2,13),Args{e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t92));}
call(e->slot(2,14),Args{e->slot(0,0)});
call(e->slot(2,15),Args{e->slot(0,0)});
call(e->slot(2,17),Args{e->slot(0,0)});
{V t93=first(call(e->slot(2,4),Args{divv(get(get(e->slot(2,2),lit21),e->slot(0,0)),first(call(get(e->get("math"),lit47),Args{get(get(e->slot(2,1),lit1),lit14),V(1.0)}))),V(0.0),V(2.0)}));e->slot(0,2)=std::move(t93);}
{V t94=first(call(e->slot(2,16),Args{e->slot(0,0)}));e->slot(0,3)=std::move(t94);}
{V t95=mul(mul(mul(mul(mul(mul(get(e->slot(2,2),lit25),e->slot(0,2)),get(get(e->slot(2,1),lit1),lit14)),get(get(e->slot(2,1),lit1),lit3)),e->slot(0,3)),add(V(1.0),get(get(e->slot(2,2),lit18),e->slot(0,0)))),e->slot(1,0));e->slot(0,4)=std::move(t95);}
{V t96=first(call(get(e->get("math"),lit47),Args{mul(get(e->slot(2,2),lit27),sub(V(1.0),mul(get(get(e->slot(2,2),lit20),e->slot(0,0)),get(get(e->slot(2,1),lit1),lit13)))),V(0.0)}));e->slot(0,5)=std::move(t96);}
{V t97=mul(mul(sub(get(get(e->slot(2,2),lit17),e->slot(0,0)),get(get(e->slot(2,1),lit1),lit2)),e->slot(0,5)),e->slot(1,0));e->slot(0,6)=std::move(t97);}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit17),e->slot(0,0))};V t98=first(call(e->slot(2,4),Args{sub(add(get(get(e->slot(2,2),lit17),e->slot(0,0)),e->slot(0,4)),e->slot(0,6)),get(get(e->slot(2,1),lit1),lit2),get(get(e->slot(2,1),lit1),lit6)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit22),e->slot(0,0))};V t99=e->slot(0,4);refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit23),e->slot(0,0))};V t100=e->slot(0,6);refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t101=add(e->slot(1,3),get(get(e->slot(2,2),lit17),e->slot(0,0)));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t102=add(e->slot(1,4),get(get(e->slot(2,2),lit18),e->slot(0,0)));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t103=add(e->slot(1,5),e->slot(0,4));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t104=add(e->slot(1,6),e->slot(0,6));refs[0].put(std::move(t104));}
if(truth(gt(get(get(e->slot(2,2),lit17),e->slot(0,0)),e->slot(1,7)))){{std::array<Ref,1> refs{Ref(e,1,7)};V t105=get(get(e->slot(2,2),lit17),e->slot(0,0));refs[0].put(std::move(t105));}
}
call(e->slot(2,18),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit28)};V t106=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t106));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit29)};V t107=e->slot(0,7);refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit30)};V t108=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit31)};V t109=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t110=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t110));}
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit92).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t111=get(get(e->slot(1,2),lit17),e->slot(0,0));return !truth(t111)?get(get(e->slot(1,1),lit1),lit2):t111;})()};
return Args{};}));
Ref(e->slot(0,1),lit93).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t112=get(get(e->slot(1,2),lit18),e->slot(0,0));return !truth(t112)?V(0.0):t112;})()};
return Args{};}));
Ref(e->slot(0,1),lit94).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t113=first(call(e->slot(2,4),Args{e->slot(1,0),V(0.0),V(3.0)}));e->slot(0,0)=std::move(t113);}
return call(get(e->get("string"),lit95),Args{lit96,e->slot(0,0),([&](){V t114=get(get(e->slot(2,2),lit17),e->slot(0,0));return !truth(t114)?get(get(e->slot(2,1),lit1),lit2):t114;})(),([&](){V t115=get(get(e->slot(2,2),lit22),e->slot(0,0));return !truth(t115)?V(0.0):t115;})(),([&](){V t116=get(get(e->slot(2,2),lit23),e->slot(0,0));return !truth(t116)?V(0.0):t116;})(),([&](){V t117=get(get(e->slot(2,2),lit21),e->slot(0,0));return !truth(t117)?V(0.0):t117;})(),([&](){V t118=get(get(e->slot(2,2),lit19),e->slot(0,0));return !truth(t118)?V(0.0):t118;})(),([&](){V t119=get(get(e->slot(2,2),lit18),e->slot(0,0));return !truth(t119)?V(0.0):t119;})(),([&](){V t120=get(get(e->slot(2,2),lit20),e->slot(0,0));return !truth(t120)?V(0.0):t120;})()});
}
return call(get(e->get("string"),lit95),Args{concat(lit97,concat(lit98,concat(lit99,lit100))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit33)})),([&](){V t121=get(e->slot(1,2),lit35);return !truth(t121)?V(0.0):t121;})(),([&](){V t122=([&](){V t123=get(e->slot(1,2),lit36);return truth(t123)?lit101:t123;})();return !truth(t122)?lit102:t122;})(),([&](){V t124=get(e->slot(1,2),lit24);return !truth(t124)?V(0.0):t124;})(),([&](){V t125=get(e->slot(1,2),lit25);return !truth(t125)?V(0.0):t125;})(),([&](){V t126=get(e->slot(1,2),lit26);return !truth(t126)?V(0.0):t126;})(),([&](){V t127=get(e->slot(1,2),lit27);return !truth(t127)?V(0.0):t127;})(),([&](){V t128=get(get(e->slot(1,2),lit17),V(0.0));return !truth(t128)?get(get(e->slot(1,1),lit1),lit2):t128;})(),([&](){V t129=get(get(e->slot(1,2),lit17),V(1.0));return !truth(t129)?get(get(e->slot(1,1),lit1),lit2):t129;})(),([&](){V t130=get(get(e->slot(1,2),lit17),V(2.0));return !truth(t130)?get(get(e->slot(1,1),lit1),lit2):t130;})(),([&](){V t131=get(get(e->slot(1,2),lit17),V(3.0));return !truth(t131)?get(get(e->slot(1,1),lit1),lit2):t131;})(),([&](){V t132=get(e->slot(1,2),lit28);return !truth(t132)?get(get(e->slot(1,1),lit1),lit2):t132;})(),([&](){V t133=get(e->slot(1,2),lit29);return !truth(t133)?get(get(e->slot(1,1),lit1),lit2):t133;})(),([&](){V t134=get(e->slot(1,2),lit30);return !truth(t134)?V(0.0):t134;})(),([&](){V t135=([&](){V t136=get(e->slot(1,2),lit37);return truth(t136)?lit101:t136;})();return !truth(t135)?lit102:t135;})(),([&](){V t137=([&](){V t138=get(e->slot(1,2),lit38);return truth(t138)?lit101:t138;})();return !truth(t137)?lit102:t137;})(),([&](){V t139=([&](){V t140=get(e->slot(1,2),lit39);return truth(t140)?lit101:t140;})();return !truth(t139)?lit102:t139;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

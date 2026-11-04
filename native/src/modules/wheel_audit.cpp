// Generated native C++ from pinned wheel_audit.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("status");
static const V lit6("INIT");
static const V lit7("updateCount");
static const V lit8("carValid");
static const V lit9("wheelsValid");
static const V lit10("wheelExists");
static const V lit11("wheel");
static const V lit12("available");
static const V lit13("load");
static const V lit14("normalLoad");
static const V lit15("wheelLoad");
static const V lit16("slipRatio");
static const V lit17("slipAngle");
static const V lit18("angularSpeed");
static const V lit19("suspensionTravel");
static const V lit20("suspensionTravelM");
static const V lit21("suspensionLength");
static const V lit22("travel");
static const V lit23("damperTravel");
static const V lit24("suspensionPosition");
static const V lit25("surfaceGrip");
static const V lit26("tyreRadius");
static const V lit27("tireRadius");
static const V lit28("tyreWidth");
static const V lit29("tireWidth");
static const V lit30("tyrePressure");
static const V lit31("tirePressure");
static const V lit32("brakeTemperature");
static const V lit33("discTemperature");
static const V lit34("tyreCoreTemperature");
static const V lit35("tireCoreTemperature");
static const V lit36("tyreTemperature");
static const V lit37("tireTemperature");
static const V lit38("state");
static const V lit39("debug");
static const V lit40("safeStore");
static const V lit41("text");
static const V lit42("safeField");
static const V lit43("NIL");
static const V lit44("format");
static const V lit45("wheels");
static const V lit46("loadK");
static const V lit47("ngp_wheel_audit_exists_");
static const V lit48("ngp_wheel_audit_load_");
static const V lit49("ngp_wheel_audit_normal_load_");
static const V lit50("ngp_wheel_audit_wheel_load_");
static const V lit51("ngp_wheel_audit_slip_ratio_");
static const V lit52("ngp_wheel_audit_slip_angle_");
static const V lit53("ngp_wheel_audit_angular_speed_");
static const V lit54("ngp_wheel_audit_suspension_travel_");
static const V lit55("ngp_wheel_audit_suspension_length_");
static const V lit56("ngp_wheel_audit_surface_grip_");
static const V lit57("ngp_wheel_audit_tyre_pressure_");
static const V lit58("ngp_wheel_audit_status");
static const V lit59("UNKNOWN");
static const V lit60("ngp_wheel_audit_update_count");
static const V lit61("ngp_wheel_audit_car_valid");
static const V lit62("ngp_wheel_audit_wheels_valid");
static const V lit63("update");
static const V lit64("BAD DT");
static const V lit65("getCar");
static const V lit66("NO CAR");
static const V lit67("NO WHEELS");
static const V lit68("RUNNING");
static const V lit69("draw");
static const V lit70("Wheel audit: car NIL");
static const V lit71("Wheel audit: wheels NIL");
static const V lit72("=== WHEEL AUDIT ===");
static const V lit73("Status %s / Count %.0f");
static const V lit74(" NIL");
static const V lit75("%s load %s nLoad %s wLoad %s");
static const V lit76("%.0f");
static const V lit77("   slipR %s slipA %s omega %s");
static const V lit78("%.4f");
static const V lit79("%.2f");
static const V lit80("   suspTravel %s suspTravelM %s suspLength %s");
static const V lit81("   travel %s damper %s suspPos %s");
static const V lit82("   grip %s radius %s/%s width %s/%s pressure %s/%s");
static const V lit83("%.3f");
static const V lit84("   brakeT %s discT %s tyreT %s/%s");
static const V lit85("%.1f");
static const V lit86("debugStr");
static const V lit87("Status %s / Count %.0f / Wheels %s");
static const V lit88("OK");
static const V lit89("%s L:%s NL:%s SR:%s SA:%s W:%s");
static const V lit90("concat");
static const V lit91("\n");
V load_wheel_audit(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(16);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,lit5,lit6);set(z,lit7,V(0.0));set(z,lit8,V(false));set(z,lit9,V(false));set(z,lit10,([&](){V z=table();set(z,V(0.0),V(false));set(z,V(1.0),V(false));set(z,V(2.0),V(false));set(z,V(3.0),V(false));return z;})());set(z,lit11,([&](){V z=table();return z;})());set(z,lit12,([&](){V z=table();return z;})());return z;})();e->slot(0,3)=std::move(t4);}
{double t5=num(V(0.0)),t6=num(V(3.0)),t7=num(V(1.0));for(double t8=t5;(t7>0?t8<=t6:t8>=t6);t8+=t7){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t8);{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit11),e->slot(0,0))};V t9=([&](){V z=table();set(z,lit13,V());set(z,lit14,V());set(z,lit15,V());set(z,lit16,V());set(z,lit17,V());set(z,lit18,V());set(z,lit19,V());set(z,lit20,V());set(z,lit21,V());set(z,lit22,V());set(z,lit23,V());set(z,lit24,V());set(z,lit25,V());set(z,lit26,V());set(z,lit27,V());set(z,lit28,V());set(z,lit29,V());set(z,lit30,V());set(z,lit31,V());set(z,lit32,V());set(z,lit33,V());set(z,lit34,V());set(z,lit35,V());set(z,lit36,V());set(z,lit37,V());return z;})();refs[0].put(std::move(t9));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit12),e->slot(0,0))};V t10=([&](){V z=table();return z;})();refs[0].put(std::move(t10));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit38)};V t11=e->slot(0,3);refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit39)};V t12=e->slot(0,3);refs[0].put(std::move(t12));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(([&](){V t14=eq(e->slot(0,2),V());return !truth(t14)?ne(e->slot(0,2),e->slot(0,2)):t14;})())){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return Args{e->slot(0,2)};
return Args{};});
{V t16=get(e->slot(0,0),lit40);e->slot(0,5)=std::move(t16);}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(([&](){V t17=e->get("ui");return truth(t17)?get(e->get("ui"),lit41):t17;})())){call(get(e->get("ui"),lit41),call(e->get("tostring"),Args{e->slot(0,0)}));
}
return Args{};});
{V t18=get(e->slot(0,0),lit42);e->slot(0,7)=std::move(t18);}
e->slot(0,8)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V(false)};
}
{Args t19=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,0),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t19,0);e->slot(0,3)=arg(t19,1);}
return Args{([&](){V t20=e->slot(0,2);return truth(t20)?ne(e->slot(0,3),V()):t20;})()};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(eq(e->slot(0,0),V()))){return Args{lit43};
}
return call(get(e->get("string"),lit44),joined(Args{e->slot(0,1)},call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})));
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t21=first(call(e->slot(1,7),Args{e->slot(0,0),lit45,V()}));e->slot(0,2)=std::move(t21);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t22=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t22,0);e->slot(0,4)=arg(t22,1);}
if(truth(V(!truth(e->slot(0,3))))){return Args{V()};
}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t23=get(get(e->slot(1,3),lit11),e->slot(0,1));e->slot(0,2)=std::move(t23);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit13)};V t24=first(call(e->slot(1,7),Args{e->slot(0,0),lit13,V()}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit14)};V t25=first(call(e->slot(1,7),Args{e->slot(0,0),lit46,V()}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit15)};V t26=V();refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit16)};V t27=first(call(e->slot(1,7),Args{e->slot(0,0),lit16,V()}));refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit17)};V t28=first(call(e->slot(1,7),Args{e->slot(0,0),lit17,V()}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit18)};V t29=first(call(e->slot(1,7),Args{e->slot(0,0),lit18,V()}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit19)};V t30=first(call(e->slot(1,7),Args{e->slot(0,0),lit19,V()}));refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit20)};V t31=V();refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit21)};V t32=V();refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit22)};V t33=V();refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit23)};V t34=V();refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit24)};V t35=V();refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit25)};V t36=first(call(e->slot(1,7),Args{e->slot(0,0),lit25,V()}));refs[0].put(std::move(t36));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit26)};V t37=first(call(e->slot(1,7),Args{e->slot(0,0),lit26,V()}));refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit27)};V t38=get(e->slot(0,2),lit26);refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit28)};V t39=first(call(e->slot(1,7),Args{e->slot(0,0),lit28,V()}));refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit29)};V t40=get(e->slot(0,2),lit28);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit30)};V t41=first(call(e->slot(1,7),Args{e->slot(0,0),lit30,V()}));refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit31)};V t42=get(e->slot(0,2),lit30);refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit32)};V t43=first(call(e->slot(1,7),Args{e->slot(0,0),lit32,V()}));refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit33)};V t44=first(call(e->slot(1,7),Args{e->slot(0,0),lit33,V()}));refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit34)};V t45=first(call(e->slot(1,7),Args{e->slot(0,0),lit34,V()}));refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit35)};V t46=get(e->slot(0,2),lit34);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit36)};V t47=get(e->slot(0,2),lit34);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit37)};V t48=get(e->slot(0,2),lit34);refs[0].put(std::move(t48));}
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t49=get(get(e->slot(1,3),lit12),e->slot(0,1));e->slot(0,2)=std::move(t49);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit13)};V t50=first(call(e->slot(1,8),Args{e->slot(0,0),lit13}));refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit14)};V t51=first(call(e->slot(1,8),Args{e->slot(0,0),lit46}));refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit15)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit16)};V t53=first(call(e->slot(1,8),Args{e->slot(0,0),lit16}));refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit17)};V t54=first(call(e->slot(1,8),Args{e->slot(0,0),lit17}));refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit18)};V t55=first(call(e->slot(1,8),Args{e->slot(0,0),lit18}));refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit19)};V t56=first(call(e->slot(1,8),Args{e->slot(0,0),lit19}));refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit20)};V t57=V(false);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit21)};V t58=V(false);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit22)};V t59=V(false);refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit23)};V t60=V(false);refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit24)};V t61=V(false);refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit25)};V t62=first(call(e->slot(1,8),Args{e->slot(0,0),lit25}));refs[0].put(std::move(t62));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit26)};V t63=first(call(e->slot(1,8),Args{e->slot(0,0),lit26}));refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit27)};V t64=get(e->slot(0,2),lit26);refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit28)};V t65=first(call(e->slot(1,8),Args{e->slot(0,0),lit28}));refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit29)};V t66=get(e->slot(0,2),lit28);refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit30)};V t67=first(call(e->slot(1,8),Args{e->slot(0,0),lit30}));refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit31)};V t68=get(e->slot(0,2),lit30);refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit32)};V t69=first(call(e->slot(1,8),Args{e->slot(0,0),lit32}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit33)};V t70=first(call(e->slot(1,8),Args{e->slot(0,0),lit33}));refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit34)};V t71=first(call(e->slot(1,8),Args{e->slot(0,0),lit34}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit35)};V t72=get(e->slot(0,2),lit34);refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit36)};V t73=get(e->slot(0,2),lit34);refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit37)};V t74=get(e->slot(0,2),lit34);refs[0].put(std::move(t74));}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t75=get(get(e->slot(1,3),lit11),e->slot(0,0));e->slot(0,1)=std::move(t75);}
call(e->slot(1,5),Args{concat(lit47,e->slot(0,0)),([&](){V t76=([&](){V t77=get(get(e->slot(1,3),lit10),e->slot(0,0));return truth(t77)?V(1.0):t77;})();return !truth(t76)?V(0.0):t76;})()});
call(e->slot(1,5),joined(Args{concat(lit48,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit13),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit49,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit14),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit50,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit15),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit51,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit16),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit52,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit17),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit53,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit18),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit54,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit19),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit55,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit21),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit56,e->slot(0,0))},call(e->slot(1,4),Args{get(e->slot(0,1),lit25),V(0.0)})));
call(e->slot(1,5),joined(Args{concat(lit57,e->slot(0,0))},call(e->slot(1,4),Args{([&](){V t78=get(e->slot(0,1),lit30);return !truth(t78)?get(e->slot(0,1),lit31):t78;})(),V(0.0)})));
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,5),Args{lit58,([&](){V t79=get(e->slot(1,3),lit5);return !truth(t79)?lit59:t79;})()});
call(e->slot(1,5),Args{lit60,([&](){V t80=get(e->slot(1,3),lit7);return !truth(t80)?V(0.0):t80;})()});
call(e->slot(1,5),Args{lit61,([&](){V t81=([&](){V t82=get(e->slot(1,3),lit8);return truth(t82)?V(1.0):t82;})();return !truth(t81)?V(0.0):t81;})()});
call(e->slot(1,5),Args{lit62,([&](){V t83=([&](){V t84=get(e->slot(1,3),lit9);return truth(t84)?V(1.0):t84;})();return !truth(t83)?V(0.0):t83;})()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t85=num(V(0.0)),t86=num(V(3.0)),t87=num(V(1.0));for(double t88=t85;(t87>0?t88<=t86:t88>=t86);t88+=t87){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t88);call(e->slot(2,13),Args{e->slot(0,0)});
}}
call(e->slot(1,14),Args{});
return Args{};});
Ref(e->slot(0,1),lit63).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit7)};V t89=add(get(e->slot(1,3),lit7),V(1.0));refs[0].put(std::move(t89));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t90=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t90));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit5)};V t91=lit64;refs[0].put(std::move(t91));}
call(e->slot(1,15),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t92=([&](){V t93=e->slot(0,1);return !truth(t93)?first(call(get(e->get("ac"),lit65),Args{V(0.0)})):t93;})();refs[0].put(std::move(t92));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit5)};V t94=lit66;refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit8)};V t95=V(false);refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit9)};V t96=V(false);refs[0].put(std::move(t96));}
call(e->slot(1,15),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit8)};V t97=V(true);refs[0].put(std::move(t97));}
{V t98=first(call(e->slot(1,7),Args{e->slot(0,1),lit45,V()}));e->slot(0,2)=std::move(t98);}
if(truth(V(!truth(e->slot(0,2))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit5)};V t99=lit67;refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit9)};V t100=V(false);refs[0].put(std::move(t100));}
call(e->slot(1,15),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit9)};V t101=V(true);refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit5)};V t102=lit68;refs[0].put(std::move(t102));}
{double t103=num(V(0.0)),t104=num(V(3.0)),t105=num(V(1.0));for(double t106=t103;(t105>0?t106<=t104:t106>=t104);t106+=t105){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t106);{V t107=first(call(e->slot(2,10),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t107);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit10),e->slot(0,0))};V t108=V(true);refs[0].put(std::move(t108));}
call(e->slot(2,11),Args{e->slot(0,1),e->slot(0,0)});
call(e->slot(2,12),Args{e->slot(0,1),e->slot(0,0)});
}else{call(e->get("clearWheel"),Args{e->slot(0,0)});
}
}}
call(e->slot(1,15),Args{});
return Args{};}));
Ref(e->slot(0,1),lit69).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t109=([&](){V t110=e->slot(0,0);return !truth(t110)?first(call(get(e->get("ac"),lit65),Args{V(0.0)})):t110;})();refs[0].put(std::move(t109));}
call(get(e->slot(1,1),lit63),Args{V(0.016),e->slot(0,0)});
if(truth(V(!truth(e->slot(0,0))))){call(e->slot(1,6),Args{lit70});
return Args{};
}
{V t111=first(call(e->slot(1,7),Args{e->slot(0,0),lit45,V()}));e->slot(0,1)=std::move(t111);}
if(truth(V(!truth(e->slot(0,1))))){call(e->slot(1,6),Args{lit71});
return Args{};
}
call(e->slot(1,6),Args{lit72});
call(e->slot(1,6),call(get(e->get("string"),lit44),Args{lit73,first(call(e->get("tostring"),Args{get(e->slot(1,3),lit5)})),([&](){V t112=get(e->slot(1,3),lit7);return !truth(t112)?V(0.0):t112;})()}));
{double t113=num(V(0.0)),t114=num(V(3.0)),t115=num(V(1.0));for(double t116=t113;(t115>0?t116<=t114:t116>=t114);t116+=t115){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t116);{V t117=([&](){V t118=get(e->slot(2,2),e->slot(0,0));return !truth(t118)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t118;})();e->slot(0,1)=std::move(t117);}
{V t119=get(get(e->slot(2,3),lit11),e->slot(0,0));e->slot(0,2)=std::move(t119);}
if(truth(V(!truth(get(get(e->slot(2,3),lit10),e->slot(0,0)))))){call(e->slot(2,6),Args{concat(e->slot(0,1),lit74)});
}else{call(e->slot(2,6),call(get(e->get("string"),lit44),joined(Args{lit75,e->slot(0,1),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit13),lit76})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit14),lit76}))},call(e->slot(2,9),Args{get(e->slot(0,2),lit15),lit76}))));
call(e->slot(2,6),call(get(e->get("string"),lit44),joined(Args{lit77,first(call(e->slot(2,9),Args{get(e->slot(0,2),lit16),lit78})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit17),lit78}))},call(e->slot(2,9),Args{get(e->slot(0,2),lit18),lit79}))));
call(e->slot(2,6),call(get(e->get("string"),lit44),joined(Args{lit80,first(call(e->slot(2,9),Args{get(e->slot(0,2),lit19),lit78})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit20),lit78}))},call(e->slot(2,9),Args{get(e->slot(0,2),lit21),lit78}))));
call(e->slot(2,6),call(get(e->get("string"),lit44),joined(Args{lit81,first(call(e->slot(2,9),Args{get(e->slot(0,2),lit22),lit78})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit23),lit78}))},call(e->slot(2,9),Args{get(e->slot(0,2),lit24),lit78}))));
call(e->slot(2,6),call(get(e->get("string"),lit44),joined(Args{lit82,first(call(e->slot(2,9),Args{get(e->slot(0,2),lit25),lit83})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit26),lit83})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit27),lit83})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit28),lit83})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit29),lit83})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit30),lit79}))},call(e->slot(2,9),Args{get(e->slot(0,2),lit31),lit79}))));
call(e->slot(2,6),call(get(e->get("string"),lit44),joined(Args{lit84,first(call(e->slot(2,9),Args{get(e->slot(0,2),lit32),lit85})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit33),lit85})),first(call(e->slot(2,9),Args{([&](){V t120=get(e->slot(0,2),lit34);return !truth(t120)?get(e->slot(0,2),lit36):t120;})(),lit85}))},call(e->slot(2,9),Args{([&](){V t121=get(e->slot(0,2),lit35);return !truth(t121)?get(e->slot(0,2),lit37):t121;})(),lit85}))));
}
}}
return Args{};}));
Ref(e->slot(0,1),lit86).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t122=([&](){V t123=e->slot(0,0);return !truth(t123)?first(call(get(e->get("ac"),lit65),Args{V(0.0)})):t123;})();refs[0].put(std::move(t122));}
if(truth(e->slot(0,0))){call(get(e->slot(1,1),lit63),Args{V(0.016),e->slot(0,0)});
}
if(truth(V(!truth(e->slot(0,0))))){return Args{lit70};
}
if(truth(V(!truth(get(e->slot(1,3),lit9))))){return Args{lit71};
}
{V t124=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t124);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),add(length(e->slot(0,1)),V(1.0)))};V t125=first(call(get(e->get("string"),lit44),Args{lit87,first(call(e->get("tostring"),Args{get(e->slot(1,3),lit5)})),([&](){V t126=get(e->slot(1,3),lit7);return !truth(t126)?V(0.0):t126;})(),([&](){V t127=([&](){V t128=get(e->slot(1,3),lit9);return truth(t128)?lit88:t128;})();return !truth(t127)?lit43:t127;})()}));refs[0].put(std::move(t125));}
{double t129=num(V(0.0)),t130=num(V(3.0)),t131=num(V(1.0));for(double t132=t129;(t131>0?t132<=t130:t132>=t130);t132+=t131){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t132);{V t133=([&](){V t134=get(e->slot(2,2),e->slot(0,0));return !truth(t134)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t134;})();e->slot(0,1)=std::move(t133);}
{V t135=get(get(e->slot(2,3),lit11),e->slot(0,0));e->slot(0,2)=std::move(t135);}
if(truth(get(get(e->slot(2,3),lit10),e->slot(0,0)))){{std::array<Ref,1> refs{Ref(e->slot(1,1),add(length(e->slot(1,1)),V(1.0)))};V t136=first(call(get(e->get("string"),lit44),joined(Args{lit89,e->slot(0,1),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit13),lit76})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit14),lit76})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit16),lit83})),first(call(e->slot(2,9),Args{get(e->slot(0,2),lit17),lit83}))},call(e->slot(2,9),Args{get(e->slot(0,2),lit18),lit79}))));refs[0].put(std::move(t136));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,1),add(length(e->slot(1,1)),V(1.0)))};V t137=concat(e->slot(0,1),lit74);refs[0].put(std::move(t137));}
}
}}
return call(get(e->get("table"),lit90),Args{e->slot(0,1),lit91});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

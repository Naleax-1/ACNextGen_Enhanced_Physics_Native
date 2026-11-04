// Generated native C++ from pinned arm_compliance.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("lateralFlex");
static const V lit3("brakeFlex");
static const V lit4("driveFlex");
static const V lit5("loadCamberGain");
static const V lit6("loadToeGain");
static const V lit7("contactCamberGain");
static const V lit8("contactToeGain");
static const V lit9("suspInputCamberGain");
static const V lit10("suspInputToeGain");
static const V lit11("bodyReadInterval");
static const V lit12("bodyFlexComplianceGain");
static const V lit13("bodyTorsionComplianceGain");
static const V lit14("bodyBendingComplianceGain");
static const V lit15("bodyStiffComplianceLoss");
static const V lit16("minBodyComplianceScale");
static const V lit17("maxBodyComplianceScale");
static const V lit18("tau");
static const V lit19("flexEnergyTauGain");
static const V lit20("flexReleaseTauLoss");
static const V lit21("minTauScale");
static const V lit22("maxTauScale");
static const V lit23("maxCamber");
static const V lit24("maxToe");
static const V lit25("maxLoadNorm");
static const V lit26("debugStoreInterval");
static const V lit27("camber");
static const V lit28("toe");
static const V lit29("targetCamber");
static const V lit30("targetToe");
static const V lit31("load");
static const V lit32("loadNorm");
static const V lit33("contact");
static const V lit34("contactLoss");
static const V lit35("suspInput");
static const V lit36("lateralAccel");
static const V lit37("brake");
static const V lit38("gas");
static const V lit39("bodySteer");
static const V lit40("flexEnergy");
static const V lit41("flexRelease");
static const V lit42("bodyRigidity");
static const V lit43("bodyFlexFactor");
static const V lit44("bodyTorsionFactor");
static const V lit45("bodyBendingFactor");
static const V lit46("bodyDampingFactor");
static const V lit47("bodyComplianceScale");
static const V lit48("bodyLinked");
static const V lit49("bodyReadTimer");
static const V lit50("tauScale");
static const V lit51("status");
static const V lit52("INIT");
static const V lit53("updateCount");
static const V lit54("wheelsValid");
static const V lit55("debugStoreTimer");
static const V lit56("debugStoreNow");
static const V lit57("state");
static const V lit58("debug");
static const V lit59("safeField");
static const V lit60("safeLoadRaw");
static const V lit61("safeStore");
static const V lit62("getCar");
static const V lit63("wheels");
static const V lit64("max");
static const V lit65("acceleration");
static const V lit66("x");
static const V lit67("ngp_body_steer");
static const V lit68("ngp_chassis_flex_energy");
static const V lit69("ngp_flex_energy");
static const V lit70("ngp_chassis_flex_release");
static const V lit71("ngp_flex_release");
static const V lit72("ngp_body_rigidity");
static const V lit73("ngp_body_flex_factor");
static const V lit74("ngp_body_torsion_factor");
static const V lit75("ngp_body_bending_factor");
static const V lit76("ngp_body_damping_factor");
static const V lit77("ngp_body_rigidity_update_count");
static const V lit78("ngp_wheel_load_");
static const V lit79("ngp_dlt_load_");
static const V lit80("ngp_wheel_load_norm_");
static const V lit81("ngp_tc_contact_");
static const V lit82("ngp_tire_contact_");
static const V lit83("ngp_susp_contact_input_");
static const V lit84("ngp_sci_road_input_");
static const V lit85("ngp_arm_camber_");
static const V lit86("ngp_arm_toe_");
static const V lit87("ngp_control_arm_camber_");
static const V lit88("ngp_control_arm_toe_");
static const V lit89("ngp_arm_status");
static const V lit90("UNKNOWN");
static const V lit91("ngp_arm_update_count");
static const V lit92("ngp_arm_wheels_valid");
static const V lit93("ngp_arm_body_linked");
static const V lit94("ngp_arm_body_compliance_scale");
static const V lit95("ngp_arm_compliance_status");
static const V lit96("ngp_arm_compliance_update_count");
static const V lit97("ngp_arm_lateral_accel");
static const V lit98("ngp_arm_brake");
static const V lit99("ngp_arm_gas");
static const V lit100("ngp_arm_body_rigidity");
static const V lit101("ngp_arm_body_flex_factor");
static const V lit102("ngp_arm_tau_scale");
static const V lit103("ngp_arm_flex_energy");
static const V lit104("ngp_arm_flex_release");
static const V lit105("ngp_arm_target_camber_");
static const V lit106("ngp_arm_target_toe_");
static const V lit107("ngp_arm_load_");
static const V lit108("ngp_arm_load_norm_");
static const V lit109("ngp_arm_contact_");
static const V lit110("ngp_arm_susp_input_");
static const V lit111("init");
static const V lit112("update");
static const V lit113("BAD DT");
static const V lit114("NO CAR");
static const V lit115("RUNNING");
static const V lit116("NO WHEELS");
static const V lit117("getCamber");
static const V lit118("getToe");
static const V lit119("debugStr");
static const V lit120("format");
static const V lit121("Status %s / Count %.0f / Wheels %s\n");
static const V lit122("%s Camber %.4f Toe %.4f / Load %.0f Norm %.2f\n");
static const V lit123("Target C %.4f T %.4f / Contact %.2f Susp %.2f");
static const V lit124("OK");
static const V lit125("NIL");
static const V lit126("Lat %.3f Brake %.3f Gas %.3f\n");
static const V lit127("BodyLink %s Comp %.2f Tau %.2f\n");
static const V lit128("Camber %.3f %.3f %.3f %.3f\n");
static const V lit129("Toe    %.3f %.3f %.3f %.3f");
static const V lit130("YES");
static const V lit131("NO");
V load_arm_compliance(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(20);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.02));set(z,lit3,V(0.01));set(z,lit4,V(0.008));set(z,lit5,V(4.5e-06));set(z,lit6,V(2.5e-06));set(z,lit7,V(0.01));set(z,lit8,V(0.006));set(z,lit9,V(0.012));set(z,lit10,V(0.006));set(z,lit11,V(0.25));set(z,lit12,V(0.22));set(z,lit13,V(0.14));set(z,lit14,V(0.1));set(z,lit15,V(0.08));set(z,lit16,V(0.86));set(z,lit17,V(1.22));set(z,lit18,V(0.08));set(z,lit19,V(0.2));set(z,lit20,V(0.08));set(z,lit21,V(0.85));set(z,lit22,V(1.25));set(z,lit23,V(0.08));set(z,lit24,V(0.05));set(z,lit25,V(1.75));set(z,lit26,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit27,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit28,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit29,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit30,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit31,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit32,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit33,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit34,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit35,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit36,V(0.0));set(z,lit37,V(0.0));set(z,lit38,V(0.0));set(z,lit39,V(0.0));set(z,lit40,V(0.0));set(z,lit41,V(0.0));set(z,lit42,V(1.0));set(z,lit43,V(1.0));set(z,lit44,V(1.0));set(z,lit45,V(1.0));set(z,lit46,V(1.0));set(z,lit47,V(1.0));set(z,lit48,V(false));set(z,lit49,V(999.0));set(z,lit50,V(1.0));set(z,lit51,lit52);set(z,lit53,V(0.0));set(z,lit54,V(false));set(z,lit55,V(999.0));set(z,lit56,V(true));return z;})();e->slot(0,2)=std::move(t4);}
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
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);return call(e->slot(1,3),Args{first(call(get(e->slot(1,0),lit60),Args{e->slot(0,0)})),e->slot(0,1)});
return Args{};});
{V t12=get(e->slot(0,0),lit61);e->slot(0,7)=std::move(t12);}
e->slot(0,8)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t13=V(!truth(e->get("ac")));return !truth(t13)?V(!truth(get(e->get("ac"),lit62))):t13;})())){return Args{V()};
}
{Args t14=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit62),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t14,0);e->slot(0,1)=arg(t14,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t15=first(call(e->slot(1,5),Args{e->slot(0,0),lit63,V()}));e->slot(0,2)=std::move(t15);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t16=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t16,0);e->slot(0,4)=arg(t16,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t17=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t18=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t19=first(call(get(e->get("math"),lit64),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.001)})),V(0.0001)}));refs[0].put(std::move(t19));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t20=first(call(get(e->get("math"),lit64),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0)}));refs[0].put(std::move(t20));}
{V t21=divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3)));e->slot(0,4)=std::move(t21);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t22=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t22));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t23=add(([&](){V t24=get(e->slot(1,2),lit55);return !truth(t24)?V(0.0):t24;})(),first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t23));}
if(truth(ge(get(e->slot(1,2),lit55),get(get(e->slot(1,1),lit1),lit26)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t25=V(0.0);refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t26=V(true);refs[0].put(std::move(t26));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t27=V(false);refs[0].put(std::move(t27));}
}
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t28=first(call(e->slot(1,5),Args{e->slot(0,0),lit65,V()}));e->slot(0,1)=std::move(t28);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t29=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,1),lit66,V(0.0)})),V(0.0)}));refs[0].put(std::move(t29));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t30=V(0.0);refs[0].put(std::move(t30));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t31=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,0),lit37,V(0.0)})),V(0.0)}));refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t32=first(call(e->slot(1,3),Args{first(call(e->slot(1,5),Args{e->slot(0,0),lit38,V(0.0)})),V(0.0)}));refs[0].put(std::move(t32));}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t33=first(call(e->slot(1,6),Args{lit67,V(0.0)}));refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t34=first(call(e->slot(1,6),joined(Args{lit68},call(e->slot(1,6),Args{lit69,V(0.0)}))));refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t35=first(call(e->slot(1,6),joined(Args{lit70},call(e->slot(1,6),Args{lit71,V(0.0)}))));refs[0].put(std::move(t35));}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t36=add(([&](){V t37=get(e->slot(1,2),lit49);return !truth(t37)?V(999.0):t37;})(),first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t36));}
if(truth(lt(get(e->slot(1,2),lit49),get(get(e->slot(1,1),lit1),lit11)))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t38=V(0.0);refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t39=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{lit72,V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t40=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{lit73,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t41=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{lit74,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t42=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{lit75,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t43=first(call(e->slot(1,4),Args{first(call(e->slot(1,6),Args{lit76,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t44=gt(first(call(e->slot(1,6),Args{lit77,V(0.0)})),V(0.0));refs[0].put(std::move(t44));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;if(truth(V(!truth(get(e->slot(1,2),lit48))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t45=V(1.0);refs[0].put(std::move(t45));}
return Args{};
}
{V t46=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t46);}
{V t47=first(call(e->slot(1,4),Args{([&](){V t48=get(e->slot(1,2),lit43);return !truth(t48)?V(1.0):t48;})(),V(0.25),V(1.8)}));e->slot(0,1)=std::move(t47);}
{V t49=first(call(e->slot(1,4),Args{([&](){V t50=get(e->slot(1,2),lit44);return !truth(t50)?V(1.0):t50;})(),V(0.35),V(2.0)}));e->slot(0,2)=std::move(t49);}
{V t51=first(call(e->slot(1,4),Args{([&](){V t52=get(e->slot(1,2),lit45);return !truth(t52)?V(1.0):t52;})(),V(0.35),V(2.0)}));e->slot(0,3)=std::move(t51);}
{V t53=first(call(e->slot(1,4),Args{([&](){V t54=get(e->slot(1,2),lit42);return !truth(t54)?V(1.0):t54;})(),V(0.2),V(1.35)}));e->slot(0,4)=std::move(t53);}
{V t55=first(call(e->slot(1,4),Args{sub(e->slot(0,1),V(1.0)),V(0.0),V(0.8)}));e->slot(0,5)=std::move(t55);}
{V t56=first(call(e->slot(1,4),Args{sub(e->slot(0,2),V(1.0)),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t56);}
{V t57=first(call(e->slot(1,4),Args{sub(e->slot(0,3),V(1.0)),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t57);}
{V t58=first(call(e->slot(1,4),Args{sub(e->slot(0,4),V(1.0)),V(0.0),V(0.35)}));e->slot(0,8)=std::move(t58);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t59=first(call(e->slot(1,4),Args{sub(add(add(add(V(1.0),mul(e->slot(0,5),get(e->slot(0,0),lit12))),mul(e->slot(0,6),get(e->slot(0,0),lit13))),mul(e->slot(0,7),get(e->slot(0,0),lit14))),mul(e->slot(0,8),get(e->slot(0,0),lit15))),get(e->slot(0,0),lit16),get(e->slot(0,0),lit17)}));refs[0].put(std::move(t59));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t60=first(call(e->slot(1,5),Args{e->slot(0,0),lit63,V()}));e->slot(0,1)=std::move(t60);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t61=ne(e->slot(0,1),V());refs[0].put(std::move(t61));}
{double t62=num(V(0.0)),t63=num(V(3.0)),t64=num(V(1.0));for(double t65=t62;(t64>0?t65<=t63:t65>=t63);t65+=t64){auto parent=e;Env storage(parent,false,4);auto e=&storage;e->slot(0,0)=V(t65);{V t66=first(call(e->slot(2,9),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,1)=std::move(t66);}
{V t67=V(0.0);e->slot(0,2)=std::move(t67);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,0,2)};V t68=first(call(e->slot(2,3),Args{first(call(e->slot(2,5),Args{e->slot(0,1),lit31,V(0.0)})),V(0.0)}));refs[0].put(std::move(t68));}
}
{V t69=first(call(e->slot(2,6),joined(Args{concat(lit78,e->slot(0,0))},call(e->slot(2,6),Args{concat(lit79,e->slot(0,0)),e->slot(0,2)}))));e->slot(0,3)=std::move(t69);}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit31),e->slot(0,0))};V t70=e->slot(0,3);refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit32),e->slot(0,0))};V t71=first(call(e->slot(2,4),Args{first(call(e->slot(2,6),Args{concat(lit80,e->slot(0,0)),divv(e->slot(0,3),V(3200.0))})),V(0.0),get(get(e->slot(2,1),lit1),lit25)}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit33),e->slot(0,0))};V t72=first(call(e->slot(2,4),Args{first(call(e->slot(2,6),joined(Args{concat(lit81,e->slot(0,0))},call(e->slot(2,6),Args{concat(lit82,e->slot(0,0)),V(1.0)})))),V(0.0),V(1.2)}));refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit34),e->slot(0,0))};V t73=first(call(e->slot(2,4),Args{sub(V(1.0),get(get(e->slot(2,2),lit33),e->slot(0,0))),V(0.0),V(1.0)}));refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit35),e->slot(0,0))};V t74=first(call(e->slot(2,6),joined(Args{concat(lit83,e->slot(0,0))},call(e->slot(2,6),Args{concat(lit84,e->slot(0,0)),V(0.0)}))));refs[0].put(std::move(t74));}
}}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t75=first(call(e->slot(1,4),Args{([&](){V t76=get(e->slot(1,2),lit40);return !truth(t76)?V(0.0):t76;})(),V(0.0),V(1.0)}));e->slot(0,0)=std::move(t75);}
{V t77=first(call(e->slot(1,4),Args{([&](){V t78=get(e->slot(1,2),lit41);return !truth(t78)?V(0.0):t78;})(),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t77);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t79=first(call(e->slot(1,4),Args{sub(add(V(1.0),mul(e->slot(0,0),get(get(e->slot(1,1),lit1),lit19))),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit20))),get(get(e->slot(1,1),lit1),lit21),get(get(e->slot(1,1),lit1),lit22)}));refs[0].put(std::move(t79));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,19);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t80=get(e->slot(1,1),lit1);e->slot(0,2)=std::move(t80);}
{V t81=([&](){V t82=([&](){V t83=([&](){V t84=eq(e->slot(0,0),V(0.0));return !truth(t84)?eq(e->slot(0,0),V(2.0)):t84;})();return truth(t83)?V(-num(V(1.0))):t83;})();return !truth(t82)?V(1.0):t82;})();e->slot(0,3)=std::move(t81);}
{V t85=ge(e->slot(0,0),V(2.0));e->slot(0,4)=std::move(t85);}
{V t86=([&](){V t87=([&](){V t88=e->slot(0,4);return truth(t88)?V(1.5):t88;})();return !truth(t87)?V(0.5):t87;})();e->slot(0,5)=std::move(t86);}
{V t89=([&](){V t90=([&](){V t91=e->slot(0,4);return truth(t91)?V(0.65):t91;})();return !truth(t90)?V(1.0):t90;})();e->slot(0,6)=std::move(t89);}
{V t92=first(call(e->slot(1,4),Args{sub(([&](){V t93=get(get(e->slot(1,2),lit32),e->slot(0,0));return !truth(t93)?V(1.0):t93;})(),V(1.0)),V(-num(V(1.0))),V(1.0)}));e->slot(0,7)=std::move(t92);}
{V t94=([&](){V t95=get(get(e->slot(1,2),lit34),e->slot(0,0));return !truth(t95)?V(0.0):t95;})();e->slot(0,8)=std::move(t94);}
{V t96=([&](){V t97=get(get(e->slot(1,2),lit35),e->slot(0,0));return !truth(t97)?V(0.0):t97;})();e->slot(0,9)=std::move(t96);}
{V t98=([&](){V t99=get(e->slot(1,2),lit47);return !truth(t99)?V(1.0):t99;})();e->slot(0,10)=std::move(t98);}
{V t100=mul(add(add(add(mul(mul(mul(get(e->slot(1,2),lit36),e->slot(0,3)),get(e->slot(0,2),lit2)),e->slot(0,6)),mul(mul(mul(e->slot(0,7),e->slot(0,3)),get(e->slot(0,2),lit5)),V(3200.0))),mul(mul(e->slot(0,8),e->slot(0,3)),get(e->slot(0,2),lit7))),mul(mul(e->slot(0,9),e->slot(0,3)),get(e->slot(0,2),lit9))),e->slot(0,10));e->slot(0,11)=std::move(t100);}
{std::array<Ref,1> refs{Ref(e,0,11)};V t101=first(call(e->slot(1,4),Args{e->slot(0,11),V(-num(get(e->slot(0,2),lit23))),get(e->slot(0,2),lit23)}));refs[0].put(std::move(t101));}
{V t102=mul(sub(mul(get(e->slot(1,2),lit37),get(e->slot(0,2),lit3)),mul(get(e->slot(1,2),lit38),get(e->slot(0,2),lit4))),e->slot(0,5));e->slot(0,12)=std::move(t102);}
{V t103=mul(mul(mul(e->slot(0,7),get(e->slot(0,2),lit6)),V(3200.0)),e->slot(0,3));e->slot(0,13)=std::move(t103);}
{V t104=mul(mul(e->slot(0,8),get(e->slot(0,2),lit8)),e->slot(0,3));e->slot(0,14)=std::move(t104);}
{V t105=mul(mul(e->slot(0,9),get(e->slot(0,2),lit10)),e->slot(0,3));e->slot(0,15)=std::move(t105);}
{V t106=mul(mul(get(e->slot(1,2),lit39),V(0.018)),([&](){V t107=([&](){V t108=e->slot(0,4);return truth(t108)?V(-num(V(0.65))):t108;})();return !truth(t107)?V(0.35):t107;})());e->slot(0,16)=std::move(t106);}
{V t109=mul(add(add(add(add(e->slot(0,12),e->slot(0,13)),e->slot(0,14)),e->slot(0,15)),e->slot(0,16)),e->slot(0,10));e->slot(0,17)=std::move(t109);}
{std::array<Ref,1> refs{Ref(e,0,17)};V t110=first(call(e->slot(1,4),Args{e->slot(0,17),V(-num(get(e->slot(0,2),lit24))),get(e->slot(0,2),lit24)}));refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit29),e->slot(0,0))};V t111=e->slot(0,11);refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit30),e->slot(0,0))};V t112=e->slot(0,17);refs[0].put(std::move(t112));}
{V t113=mul(get(e->slot(0,2),lit18),([&](){V t114=get(e->slot(1,2),lit50);return !truth(t114)?V(1.0):t114;})());e->slot(0,18)=std::move(t113);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit27),e->slot(0,0))};V t115=first(call(e->slot(1,10),Args{get(get(e->slot(1,2),lit27),e->slot(0,0)),e->slot(0,11),e->slot(0,18),e->slot(0,1)}));refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit28),e->slot(0,0))};V t116=first(call(e->slot(1,10),Args{get(get(e->slot(1,2),lit28),e->slot(0,0)),e->slot(0,17),e->slot(0,18),e->slot(0,1)}));refs[0].put(std::move(t116));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t117=num(V(0.0)),t118=num(V(3.0)),t119=num(V(1.0));for(double t120=t117;(t119>0?t120<=t118:t120>=t118);t120+=t119){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t120);{V t121=([&](){V t122=get(get(e->slot(2,2),lit27),e->slot(0,0));return !truth(t122)?V(0.0):t122;})();e->slot(0,1)=std::move(t121);}
{V t123=([&](){V t124=get(get(e->slot(2,2),lit28),e->slot(0,0));return !truth(t124)?V(0.0):t124;})();e->slot(0,2)=std::move(t123);}
call(e->slot(2,7),Args{concat(lit85,e->slot(0,0)),e->slot(0,1)});
call(e->slot(2,7),Args{concat(lit86,e->slot(0,0)),e->slot(0,2)});
call(e->slot(2,7),Args{concat(lit87,e->slot(0,0)),e->slot(0,1)});
call(e->slot(2,7),Args{concat(lit88,e->slot(0,0)),e->slot(0,2)});
}}
call(e->slot(1,7),Args{lit89,([&](){V t125=get(e->slot(1,2),lit51);return !truth(t125)?lit90:t125;})()});
call(e->slot(1,7),Args{lit91,([&](){V t126=get(e->slot(1,2),lit53);return !truth(t126)?V(0.0):t126;})()});
call(e->slot(1,7),Args{lit92,([&](){V t127=([&](){V t128=get(e->slot(1,2),lit54);return truth(t128)?V(1.0):t128;})();return !truth(t127)?V(0.0):t127;})()});
call(e->slot(1,7),Args{lit93,([&](){V t129=([&](){V t130=get(e->slot(1,2),lit48);return truth(t130)?V(1.0):t130;})();return !truth(t129)?V(0.0):t129;})()});
call(e->slot(1,7),Args{lit94,([&](){V t131=get(e->slot(1,2),lit47);return !truth(t131)?V(1.0):t131;})()});
call(e->slot(1,7),Args{lit95,([&](){V t132=get(e->slot(1,2),lit51);return !truth(t132)?lit90:t132;})()});
call(e->slot(1,7),Args{lit96,([&](){V t133=get(e->slot(1,2),lit53);return !truth(t133)?V(0.0):t133;})()});
if(truth(V(!truth(get(e->slot(1,2),lit56))))){return Args{};
}
call(e->slot(1,7),Args{lit97,([&](){V t134=get(e->slot(1,2),lit36);return !truth(t134)?V(0.0):t134;})()});
call(e->slot(1,7),Args{lit98,([&](){V t135=get(e->slot(1,2),lit37);return !truth(t135)?V(0.0):t135;})()});
call(e->slot(1,7),Args{lit99,([&](){V t136=get(e->slot(1,2),lit38);return !truth(t136)?V(0.0):t136;})()});
call(e->slot(1,7),Args{lit100,([&](){V t137=get(e->slot(1,2),lit42);return !truth(t137)?V(1.0):t137;})()});
call(e->slot(1,7),Args{lit101,([&](){V t138=get(e->slot(1,2),lit43);return !truth(t138)?V(1.0):t138;})()});
call(e->slot(1,7),Args{lit102,([&](){V t139=get(e->slot(1,2),lit50);return !truth(t139)?V(1.0):t139;})()});
call(e->slot(1,7),Args{lit103,([&](){V t140=get(e->slot(1,2),lit40);return !truth(t140)?V(0.0):t140;})()});
call(e->slot(1,7),Args{lit104,([&](){V t141=get(e->slot(1,2),lit41);return !truth(t141)?V(0.0):t141;})()});
{double t142=num(V(0.0)),t143=num(V(3.0)),t144=num(V(1.0));for(double t145=t142;(t144>0?t145<=t143:t145>=t143);t145+=t144){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t145);call(e->slot(2,7),Args{concat(lit105,e->slot(0,0)),([&](){V t146=get(get(e->slot(2,2),lit29),e->slot(0,0));return !truth(t146)?V(0.0):t146;})()});
call(e->slot(2,7),Args{concat(lit106,e->slot(0,0)),([&](){V t147=get(get(e->slot(2,2),lit30),e->slot(0,0));return !truth(t147)?V(0.0):t147;})()});
call(e->slot(2,7),Args{concat(lit107,e->slot(0,0)),([&](){V t148=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t148)?V(0.0):t148;})()});
call(e->slot(2,7),Args{concat(lit108,e->slot(0,0)),([&](){V t149=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t149)?V(1.0):t149;})()});
call(e->slot(2,7),Args{concat(lit109,e->slot(0,0)),([&](){V t150=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t150)?V(1.0):t150;})()});
call(e->slot(2,7),Args{concat(lit110,e->slot(0,0)),([&](){V t151=get(get(e->slot(2,2),lit35),e->slot(0,0));return !truth(t151)?V(0.0):t151;})()});
}}
return Args{};});
Ref(e->slot(0,1),lit111).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t152=lit52;refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t153=V(true);refs[0].put(std::move(t153));}
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit112).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t154=add(([&](){V t155=get(e->slot(1,2),lit53);return !truth(t155)?V(0.0):t155;})(),V(1.0));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t156=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t156));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t157=lit113;refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t158=V(true);refs[0].put(std::move(t158));}
call(e->slot(1,19),Args{});
return Args{};
}
call(e->slot(1,11),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t159=([&](){V t160=e->slot(0,1);return !truth(t160)?first(call(e->slot(1,8),Args{})):t160;})();refs[0].put(std::move(t159));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t161=lit114;refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t162=V(false);refs[0].put(std::move(t162));}
call(e->slot(1,19),Args{});
return Args{};
}
call(e->slot(1,12),Args{e->slot(0,1)});
call(e->slot(1,13),Args{});
call(e->slot(1,14),Args{e->slot(0,0)});
call(e->slot(1,15),Args{});
call(e->slot(1,16),Args{e->slot(0,1)});
call(e->slot(1,17),Args{});
{double t163=num(V(0.0)),t164=num(V(3.0)),t165=num(V(1.0));for(double t166=t163;(t165>0?t166<=t164:t166>=t164);t166+=t165){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t166);call(e->slot(2,18),Args{e->slot(0,0),e->slot(1,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t167=([&](){V t168=([&](){V t169=get(e->slot(1,2),lit54);return truth(t169)?lit115:t169;})();return !truth(t168)?lit116:t168;})();refs[0].put(std::move(t167));}
call(e->slot(1,19),Args{});
return Args{};}));
Ref(e->slot(0,1),lit117).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t170=get(get(e->slot(1,2),lit27),e->slot(0,0));return !truth(t170)?V(0.0):t170;})()};
return Args{};}));
Ref(e->slot(0,1),lit118).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t171=get(get(e->slot(1,2),lit28),e->slot(0,0));return !truth(t171)?V(0.0):t171;})()};
return Args{};}));
Ref(e->slot(0,1),lit119).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t172=first(call(e->slot(2,4),Args{e->slot(1,0),V(0.0),V(3.0)}));e->slot(0,0)=std::move(t172);}
return call(get(e->get("string"),lit120),Args{concat(lit121,concat(lit122,lit123)),first(call(e->get("tostring"),Args{get(e->slot(2,2),lit51)})),([&](){V t173=get(e->slot(2,2),lit53);return !truth(t173)?V(0.0):t173;})(),([&](){V t174=([&](){V t175=get(e->slot(2,2),lit54);return truth(t175)?lit124:t175;})();return !truth(t174)?lit125:t174;})(),first(call(e->get("tostring"),Args{e->slot(0,0)})),([&](){V t176=get(get(e->slot(2,2),lit27),e->slot(0,0));return !truth(t176)?V(0.0):t176;})(),([&](){V t177=get(get(e->slot(2,2),lit28),e->slot(0,0));return !truth(t177)?V(0.0):t177;})(),([&](){V t178=get(get(e->slot(2,2),lit31),e->slot(0,0));return !truth(t178)?V(0.0):t178;})(),([&](){V t179=get(get(e->slot(2,2),lit32),e->slot(0,0));return !truth(t179)?V(1.0):t179;})(),([&](){V t180=get(get(e->slot(2,2),lit29),e->slot(0,0));return !truth(t180)?V(0.0):t180;})(),([&](){V t181=get(get(e->slot(2,2),lit30),e->slot(0,0));return !truth(t181)?V(0.0):t181;})(),([&](){V t182=get(get(e->slot(2,2),lit33),e->slot(0,0));return !truth(t182)?V(1.0):t182;})(),([&](){V t183=get(get(e->slot(2,2),lit35),e->slot(0,0));return !truth(t183)?V(0.0):t183;})()});
}
return call(get(e->get("string"),lit120),Args{concat(lit121,concat(lit126,concat(lit127,concat(lit128,lit129)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit51)})),([&](){V t184=get(e->slot(1,2),lit53);return !truth(t184)?V(0.0):t184;})(),([&](){V t185=([&](){V t186=get(e->slot(1,2),lit54);return truth(t186)?lit124:t186;})();return !truth(t185)?lit125:t185;})(),([&](){V t187=get(e->slot(1,2),lit36);return !truth(t187)?V(0.0):t187;})(),([&](){V t188=get(e->slot(1,2),lit37);return !truth(t188)?V(0.0):t188;})(),([&](){V t189=get(e->slot(1,2),lit38);return !truth(t189)?V(0.0):t189;})(),([&](){V t190=([&](){V t191=get(e->slot(1,2),lit48);return truth(t191)?lit130:t191;})();return !truth(t190)?lit131:t190;})(),([&](){V t192=get(e->slot(1,2),lit47);return !truth(t192)?V(1.0):t192;})(),([&](){V t193=get(e->slot(1,2),lit50);return !truth(t193)?V(1.0):t193;})(),([&](){V t194=get(get(e->slot(1,2),lit27),V(0.0));return !truth(t194)?V(0.0):t194;})(),([&](){V t195=get(get(e->slot(1,2),lit27),V(1.0));return !truth(t195)?V(0.0):t195;})(),([&](){V t196=get(get(e->slot(1,2),lit27),V(2.0));return !truth(t196)?V(0.0):t196;})(),([&](){V t197=get(get(e->slot(1,2),lit27),V(3.0));return !truth(t197)?V(0.0):t197;})(),([&](){V t198=get(get(e->slot(1,2),lit28),V(0.0));return !truth(t198)?V(0.0):t198;})(),([&](){V t199=get(get(e->slot(1,2),lit28),V(1.0));return !truth(t199)?V(0.0):t199;})(),([&](){V t200=get(get(e->slot(1,2),lit28),V(2.0));return !truth(t200)?V(0.0):t200;})(),([&](){V t201=get(get(e->slot(1,2),lit28),V(3.0));return !truth(t201)?V(0.0):t201;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

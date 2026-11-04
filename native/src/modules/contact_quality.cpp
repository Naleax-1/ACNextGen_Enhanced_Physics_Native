// Generated native C++ from pinned contact_quality.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("loadMin");
static const V lit7("loadGood");
static const V lit8("loadRef");
static const V lit9("overloadStart");
static const V lit10("overloadFull");
static const V lit11("overloadPenalty");
static const V lit12("slipRatioGood");
static const V lit13("slipRatioBad");
static const V lit14("slipAngleGood");
static const V lit15("slipAngleBad");
static const V lit16("combinedSlipGood");
static const V lit17("combinedSlipBad");
static const V lit18("loadDropWarn");
static const V lit19("loadDropBad");
static const V lit20("lowSpeedKmh");
static const V lit21("lowSpeedSlipWeight");
static const V lit22("carcassSupportWeight");
static const V lit23("carcassGripWeight");
static const V lit24("verticalWeight");
static const V lit25("hysteresisWeight");
static const V lit26("delayWeight");
static const V lit27("verticalGood");
static const V lit28("verticalBad");
static const V lit29("hysteresisGood");
static const V lit30("hysteresisBad");
static const V lit31("delayGood");
static const V lit32("delayBad");
static const V lit33("recoveryAssist");
static const V lit34("impactHystThreshold");
static const V lit35("tauRise");
static const V lit36("tauFall");
static const V lit37("tauCarcass");
static const V lit38("minQuality");
static const V lit39("maxQuality");
static const V lit40("noCarReturnTau");
static const V lit41("maxDt");
static const V lit42("debugStoreInterval");
static const V lit43("initialized");
static const V lit44("status");
static const V lit45("INIT");
static const V lit46("updateCount");
static const V lit47("wheelsValid");
static const V lit48("carcassLinked");
static const V lit49("loadLinked");
static const V lit50("tireStateLinked");
static const V lit51("wheelApiLinked");
static const V lit52("speedKmh");
static const V lit53("avgQuality");
static const V lit54("avgRawQuality");
static const V lit55("avgTrust");
static const V lit56("avgLoss");
static const V lit57("minQualityNow");
static const V lit58("maxCombinedSlip");
static const V lit59("debugStoreTimer");
static const V lit60("debugStoreNow");
static const V lit61("quality");
static const V lit62("rawQuality");
static const V lit63("trust");
static const V lit64("loss");
static const V lit65("load");
static const V lit66("prevLoad");
static const V lit67("loadRate");
static const V lit68("slipRatio");
static const V lit69("slipAngle");
static const V lit70("combinedSlip");
static const V lit71("loadScore");
static const V lit72("slipScore");
static const V lit73("stabilityScore");
static const V lit74("carcassSupport");
static const V lit75("carcassGripGate");
static const V lit76("carcassVertical");
static const V lit77("carcassHysteresis");
static const V lit78("carcassDelay");
static const V lit79("carcassRecovery");
static const V lit80("carcassHeatSeed");
static const V lit81("carcassHistoryStress");
static const V lit82("carcassScore");
static const V lit83("verticalScore");
static const V lit84("hysteresisScore");
static const V lit85("delayScore");
static const V lit86("statusId");
static const V lit87("statusText");
static const V lit88("state");
static const V lit89("debug");
static const V lit90("huge");
static const V lit91("abs");
static const V lit92("max");
static const V lit93("safeStore");
static const V lit94("safeLoadRaw");
static const V lit95("safeField");
static const V lit96("getCar");
static const V lit97("wheels");
static const V lit98("length");
static const V lit99("function");
static const V lit100("number");
static const V lit101("x");
static const V lit102("y");
static const V lit103("z");
static const V lit104("sqrt");
static const V lit105("velocity");
static const V lit106("localVelocity");
static const V lit107("loadK");
static const V lit108("ngp_tire_carcass_load_");
static const V lit109("ngp_carcass_load_");
static const V lit110("ngp_tire_state_load_");
static const V lit111("ngp_tire_load_");
static const V lit112("ngp_wheel_load_");
static const V lit113("ngp_load_wheel_");
static const V lit114("ngp_sprung_load_");
static const V lit115("ngp_dlt_load_");
static const V lit116("ngp_contact_patch_load_");
static const V lit117("ngp_tire_carcass_slip_ratio_");
static const V lit118("ngp_carcass_slip_ratio_");
static const V lit119("ngp_tire_slip_ratio_");
static const V lit120("ngp_filtered_slip_ratio_");
static const V lit121("ngp_slip_ratio_");
static const V lit122("slip");
static const V lit123("ngp_contact_slip_ratio_");
static const V lit124("ngp_tire_carcass_slip_angle_");
static const V lit125("ngp_carcass_slip_angle_");
static const V lit126("ngp_tire_slip_angle_");
static const V lit127("ngp_filtered_slip_angle_");
static const V lit128("ngp_slip_angle_");
static const V lit129("ngp_contact_slip_angle_");
static const V lit130("ngp_carcass_support_");
static const V lit131("ngp_tire_carcass_support_");
static const V lit132("ngp_carcass_grip_gate_");
static const V lit133("ngp_tire_carcass_grip_gate_");
static const V lit134("ngp_carcass_vertical_norm_");
static const V lit135("ngp_tire_carcass_vertical_norm_");
static const V lit136("ngp_tire_carcass_crush_");
static const V lit137("ngp_carcass_crush_");
static const V lit138("ngp_carcass_hysteresis_");
static const V lit139("ngp_tire_carcass_hysteresis_");
static const V lit140("ngp_contact_delay_");
static const V lit141("ngp_tire_contact_delay_");
static const V lit142("ngp_carcass_delay_");
static const V lit143("ngp_carcass_recovery_bias_");
static const V lit144("ngp_tire_carcass_recovery_bias_");
static const V lit145("ngp_tire_return_force_");
static const V lit146("ngp_carcass_heat_seed_");
static const V lit147("ngp_tire_carcass_heat_seed_");
static const V lit148("ngp_carcass_history_stress_");
static const V lit149("ngp_tire_carcass_history_stress_");
static const V lit150("linked");
static const V lit151("support");
static const V lit152("gripGate");
static const V lit153("vertical");
static const V lit154("hysteresis");
static const V lit155("delay");
static const V lit156("recovery");
static const V lit157("heatSeed");
static const V lit158("history");
static const V lit159("UNLOADED");
static const V lit160("IMPACT");
static const V lit161("UNSTABLE");
static const V lit162("SATURATED");
static const V lit163("DELAYED");
static const V lit164("SLIPPING");
static const V lit165("WEAK_SUPPORT");
static const V lit166("MARGINAL");
static const V lit167("STABLE");
static const V lit168("ngp_contact_quality_");
static const V lit169("ngp_contact_raw_");
static const V lit170("ngp_contact_trust_");
static const V lit171("ngp_contact_loss_");
static const V lit172("ngp_tire_contact_quality_");
static const V lit173("ngp_tire_contact_trust_");
static const V lit174("ngp_tire_contact_loss_");
static const V lit175("ngp_tcr_quality_");
static const V lit176("ngp_tcr_contact_loss_");
static const V lit177("ngp_contact_load_");
static const V lit178("ngp_contact_load_rate_");
static const V lit179("ngp_contact_combined_slip_");
static const V lit180("ngp_contact_load_score_");
static const V lit181("ngp_contact_slip_score_");
static const V lit182("ngp_contact_stability_score_");
static const V lit183("ngp_contact_carcass_support_");
static const V lit184("ngp_contact_grip_gate_");
static const V lit185("ngp_contact_vertical_norm_");
static const V lit186("ngp_contact_vertical_score_");
static const V lit187("ngp_contact_hysteresis_");
static const V lit188("ngp_contact_hysteresis_score_");
static const V lit189("ngp_contact_quality_delay_");
static const V lit190("ngp_contact_delay_score_");
static const V lit191("ngp_contact_carcass_score_");
static const V lit192("ngp_contact_recovery_bias_");
static const V lit193("ngp_contact_heat_seed_");
static const V lit194("ngp_contact_history_stress_");
static const V lit195("ngp_contact_status_");
static const V lit196("ngp_contact_status_text_");
static const V lit197("UNKNOWN");
static const V lit198("ngp_contact_status_global");
static const V lit199("ngp_contact_quality_status");
static const V lit200("ngp_contact_update_count");
static const V lit201("ngp_contact_quality_update_count");
static const V lit202("ngp_contact_wheels_valid");
static const V lit203("ngp_contact_speed_kmh");
static const V lit204("ngp_contact_carcass_linked");
static const V lit205("ngp_contact_load_linked");
static const V lit206("ngp_contact_tire_state_linked");
static const V lit207("ngp_contact_wheel_api_linked");
static const V lit208("ngp_contact_avg_quality");
static const V lit209("ngp_contact_avg_raw");
static const V lit210("ngp_contact_avg_trust");
static const V lit211("ngp_contact_avg_loss");
static const V lit212("ngp_contact_min_quality");
static const V lit213("ngp_contact_max_combined_slip");
static const V lit214("NO WHEEL");
static const V lit215("min");
static const V lit216("init");
static const V lit217("update");
static const V lit218("NO CAR");
static const V lit219("NO WHEELS");
static const V lit220("RUNNING");
static const V lit221("getQuality");
static const V lit222("getRawQuality");
static const V lit223("getTrust");
static const V lit224("getLoss");
static const V lit225("getStatus");
static const V lit226("getState");
static const V lit227("debugStr");
static const V lit228("format");
static const V lit229("Contact %s | Q %.2f Raw %.2f Trust %.2f Loss %.2f | %s\n");
static const V lit230("Load %.0f LR %.0f | SA %.3f SR %.3f CS %.2f\n");
static const V lit231("Score L %.2f S %.2f Stab %.2f Carc %.2f\n");
static const V lit232("Carc Sup %.2f Gate %.2f V %.2f H %.2f D %.2f | Link %s");
static const V lit233("OK");
static const V lit234("NIL");
static const V lit235("drawDebug");
static const V lit236("text");
static const V lit237("separator");
static const V lit238("=== CONTACT QUALITY V1.1.5 ===");
static const V lit239("Status: %s | Speed: %.1f km/h | AvgQ %.2f | AvgLoss %.2f | Carcass %s");
static const V lit240("%s Q %.2f Trust %.2f Loss %.2f Raw %.2f Load %.0f CS %.2f L %.2f S %.2f C %.2f %s");
V load_contact_quality(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(31);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(120.0));set(z,lit7,V(1400.0));set(z,lit8,V(3000.0));set(z,lit9,V(6500.0));set(z,lit10,V(9500.0));set(z,lit11,V(0.18));set(z,lit12,V(0.045));set(z,lit13,V(0.35));set(z,lit14,V(0.035));set(z,lit15,V(0.22));set(z,lit16,V(0.45));set(z,lit17,V(1.35));set(z,lit18,V(35000.0));set(z,lit19,V(120000.0));set(z,lit20,V(3.0));set(z,lit21,V(0.35));set(z,lit22,V(0.3));set(z,lit23,V(0.26));set(z,lit24,V(0.16));set(z,lit25,V(0.14));set(z,lit26,V(0.16));set(z,lit27,V(0.08));set(z,lit28,V(0.78));set(z,lit29,V(0.08));set(z,lit30,V(0.75));set(z,lit31,V(0.08));set(z,lit32,V(0.7));set(z,lit33,V(0.08));set(z,lit34,V(0.62));set(z,lit35,V(0.095));set(z,lit36,V(0.03));set(z,lit37,V(0.055));set(z,lit38,V(0.0));set(z,lit39,V(1.0));set(z,lit40,V(0.18));set(z,lit41,V(0.05));set(z,lit42,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit43,V(false));set(z,lit44,lit45);set(z,lit46,V(0.0));set(z,lit47,V(false));set(z,lit48,V(false));set(z,lit49,V(false));set(z,lit50,V(false));set(z,lit51,V(false));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(1.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(999.0));set(z,lit60,V(true));set(z,lit61,([&](){V z=table();return z;})());set(z,lit62,([&](){V z=table();return z;})());set(z,lit63,([&](){V z=table();return z;})());set(z,lit64,([&](){V z=table();return z;})());set(z,lit65,([&](){V z=table();return z;})());set(z,lit66,([&](){V z=table();return z;})());set(z,lit67,([&](){V z=table();return z;})());set(z,lit68,([&](){V z=table();return z;})());set(z,lit69,([&](){V z=table();return z;})());set(z,lit70,([&](){V z=table();return z;})());set(z,lit71,([&](){V z=table();return z;})());set(z,lit72,([&](){V z=table();return z;})());set(z,lit73,([&](){V z=table();return z;})());set(z,lit74,([&](){V z=table();return z;})());set(z,lit75,([&](){V z=table();return z;})());set(z,lit76,([&](){V z=table();return z;})());set(z,lit77,([&](){V z=table();return z;})());set(z,lit78,([&](){V z=table();return z;})());set(z,lit79,([&](){V z=table();return z;})());set(z,lit80,([&](){V z=table();return z;})());set(z,lit81,([&](){V z=table();return z;})());set(z,lit82,([&](){V z=table();return z;})());set(z,lit83,([&](){V z=table();return z;})());set(z,lit84,([&](){V z=table();return z;})());set(z,lit85,([&](){V z=table();return z;})());set(z,lit86,([&](){V z=table();return z;})());set(z,lit87,([&](){V z=table();return z;})());return z;})();e->slot(0,3)=std::move(t5);}
{double t6=num(V(0.0)),t7=num(V(3.0)),t8=num(V(1.0));for(double t9=t6;(t8>0?t9<=t7:t9>=t7);t9+=t8){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t9);{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t10=V(0.0);refs[0].put(std::move(t10));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t11=V(0.0);refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t12=V(0.0);refs[0].put(std::move(t12));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t13=V(1.0);refs[0].put(std::move(t13));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t14=V(0.0);refs[0].put(std::move(t14));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t15=V(0.0);refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t16=V(0.0);refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t17=V(0.0);refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t18=V(0.0);refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t19=V(0.0);refs[0].put(std::move(t19));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t20=V(0.0);refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,0))};V t21=V(0.0);refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,0))};V t22=V(0.0);refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t23=V(1.0);refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t24=V(1.0);refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t25=V(0.0);refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit77),e->slot(0,0))};V t26=V(0.0);refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit78),e->slot(0,0))};V t27=V(0.0);refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit79),e->slot(0,0))};V t28=V(0.0);refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t29=V(0.0);refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t30=V(0.0);refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t31=V(1.0);refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit83),e->slot(0,0))};V t32=V(1.0);refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit84),e->slot(0,0))};V t33=V(1.0);refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit85),e->slot(0,0))};V t34=V(1.0);refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit86),e->slot(0,0))};V t35=V(0.0);refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit87),e->slot(0,0))};V t36=lit45;refs[0].put(std::move(t36));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit88)};V t37=e->slot(0,3);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit89)};V t38=e->slot(0,3);refs[0].put(std::move(t38));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t39=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t39);}
if(truth(([&](){V t40=([&](){V t41=([&](){V t42=eq(e->slot(0,2),V());return !truth(t42)?ne(e->slot(0,2),e->slot(0,2)):t42;})();return !truth(t41)?eq(e->slot(0,2),get(e->get("math"),lit90)):t41;})();return !truth(t40)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit90)))):t40;})())){return Args{([&](){V t43=e->slot(0,1);return !truth(t43)?V(0.0):t43;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit91),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t44=first(call(e->slot(1,4),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t44));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t45=([&](){V t46=ge(e->slot(0,2),e->slot(0,1));return truth(t46)?V(1.0):t46;})();return !truth(t45)?V(0.0):t45;})()};
}
{V t47=first(call(e->slot(1,6),Args{divv(sub(first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t47);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t48=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t49=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t50=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t51=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t51));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,6),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit92),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
{V t52=get(e->slot(0,0),lit93);e->slot(0,10)=std::move(t52);}
{V t53=get(e->slot(0,0),lit94);e->slot(0,11)=std::move(t53);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t54=first(call(e->slot(1,11),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t54);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t55=e->slot(0,1);return !truth(t55)?V(0.0):t55;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t56=e->slot(0,1);return !truth(t56)?V(0.0):t56;})()});
return Args{};});
{V t57=get(e->slot(0,0),lit95);e->slot(0,13)=std::move(t57);}
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t58=V(!truth(e->get("ac")));return !truth(t58)?V(!truth(get(e->get("ac"),lit96))):t58;})())){return Args{V()};
}
{Args t59=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit96),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t59,0);e->slot(0,1)=arg(t59,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{Args t60=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,0),lit97)};
return Args{};})});e->slot(0,1)=arg(t60,0);e->slot(0,2)=arg(t60,1);}
if(truth(e->slot(0,1))){return Args{e->slot(0,2)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t61=first(call(e->slot(1,15),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t61);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t62=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t63=get(e->slot(1,2),e->slot(1,1));return !truth(t63)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t63;})()};
return Args{};})});e->slot(0,3)=arg(t62,0);e->slot(0,4)=arg(t62,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t64=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit98)})),lit99))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit98)})),lit100))){return Args{get(e->slot(1,0),lit98)};
}
{V t65=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit101),V(0.0)}));e->slot(0,0)=std::move(t65);}
{V t66=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit102),V(0.0)}));e->slot(0,1)=std::move(t66);}
{V t67=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit103),V(0.0)}));e->slot(0,2)=std::move(t67);}
return call(get(e->get("math"),lit104),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t64,0);e->slot(0,2)=arg(t64,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,4),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t68=first(call(e->slot(1,13),Args{e->slot(0,0),lit52,V()}));e->slot(0,1)=std::move(t68);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,4),Args{e->slot(0,1),V(0.0)});
}
{V t69=V();e->slot(0,2)=std::move(t69);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,4),Args{e->slot(0,2),V(0.0)});
}
{V t70=first(call(e->slot(1,13),Args{e->slot(0,0),lit105,V()}));e->slot(0,3)=std::move(t70);}
if(truth(e->slot(0,3))){return Args{mul(first(call(e->slot(1,17),Args{e->slot(0,3)})),V(3.6))};
}
{V t71=first(call(e->slot(1,13),Args{e->slot(0,0),lit106,V()}));e->slot(0,4)=std::move(t71);}
if(truth(e->slot(0,4))){return Args{mul(first(call(e->slot(1,17),Args{e->slot(0,4)})),V(3.6))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t72=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t72);}
{double t73=num(V(1.0)),t74=num(length(e->slot(0,1))),t75=num(V(1.0));for(double t76=t73;(t75>0?t76<=t74:t76>=t74);t76+=t75){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t76);{V t77=first(call(e->slot(2,11),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t77);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t78=e->slot(1,0);return !truth(t78)?V(0.0):t78;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t79=e->slot(0,0);return !truth(t79)?V(0.0):t79;})(),V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t80=([&](){V t81=([&](){V t82=([&](){V t83=first(call(e->slot(2,13),Args{e->slot(1,0),lit65,V()}));return !truth(t83)?first(call(e->slot(2,13),Args{e->slot(1,0),lit107,V()})):t83;})();return !truth(t82)?V():t82;})();return !truth(t81)?V():t81;})();e->slot(0,0)=std::move(t80);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,3),lit51)};V t84=V(true);refs[0].put(std::move(t84));}
return call(e->slot(2,4),Args{e->slot(0,0),V(0.0)});
}
}
{Args t85=call(e->slot(1,19),Args{get(get(e->slot(1,1),lit5),lit8),concat(lit108,e->slot(0,1)),concat(lit109,e->slot(0,1)),concat(lit110,e->slot(0,1)),concat(lit111,e->slot(0,1)),concat(lit112,e->slot(0,1)),concat(lit113,e->slot(0,1)),concat(lit114,e->slot(0,1))});e->slot(0,2)=arg(t85,0);e->slot(0,3)=arg(t85,1);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit49)};V t86=V(true);refs[0].put(std::move(t86));}
return Args{e->slot(0,2)};
}
{V t87=first(call(e->slot(1,11),Args{concat(lit115,e->slot(0,1))}));e->slot(0,4)=std::move(t87);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit49)};V t88=V(true);refs[0].put(std::move(t88));}
return Args{add(get(get(e->slot(1,1),lit5),lit8),first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})))};
}
{V t89=first(call(e->slot(1,11),Args{concat(lit116,e->slot(0,1))}));e->slot(0,5)=std::move(t89);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit49)};V t90=V(true);refs[0].put(std::move(t90));}
return call(e->slot(1,4),Args{e->slot(0,5),get(get(e->slot(1,1),lit5),lit8)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t91=call(e->slot(1,19),Args{V(0.0),concat(lit117,e->slot(0,1)),concat(lit118,e->slot(0,1)),concat(lit119,e->slot(0,1)),concat(lit120,e->slot(0,1)),concat(lit121,e->slot(0,1))});e->slot(0,2)=arg(t91,0);e->slot(0,3)=arg(t91,1);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit50)};V t92=V(true);refs[0].put(std::move(t92));}
return Args{e->slot(0,2)};
}
if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t93=([&](){V t94=([&](){V t95=first(call(e->slot(2,13),Args{e->slot(1,0),lit68,V()}));return !truth(t95)?V():t95;})();return !truth(t94)?first(call(e->slot(2,13),Args{e->slot(1,0),lit122,V()})):t94;})();e->slot(0,0)=std::move(t93);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,3),lit51)};V t96=V(true);refs[0].put(std::move(t96));}
return call(e->slot(2,4),Args{e->slot(0,0),V(0.0)});
}
}
return call(e->slot(1,12),Args{concat(lit123,e->slot(0,1)),V(0.0)});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t97=call(e->slot(1,19),Args{V(0.0),concat(lit124,e->slot(0,1)),concat(lit125,e->slot(0,1)),concat(lit126,e->slot(0,1)),concat(lit127,e->slot(0,1)),concat(lit128,e->slot(0,1))});e->slot(0,2)=arg(t97,0);e->slot(0,3)=arg(t97,1);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit50)};V t98=V(true);refs[0].put(std::move(t98));}
return Args{e->slot(0,2)};
}
if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t99=([&](){V t100=first(call(e->slot(2,13),Args{e->slot(1,0),lit69,V()}));return !truth(t100)?V():t100;})();e->slot(0,0)=std::move(t99);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,3),lit51)};V t101=V(true);refs[0].put(std::move(t101));}
return call(e->slot(2,4),Args{e->slot(0,0),V(0.0)});
}
}
return call(e->slot(1,12),Args{concat(lit129,e->slot(0,1)),V(0.0)});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t102=V(false);e->slot(0,1)=std::move(t102);}
{V t103=([&](){V t104=first(call(e->slot(1,11),Args{concat(lit130,e->slot(0,0))}));return !truth(t104)?first(call(e->slot(1,11),Args{concat(lit131,e->slot(0,0))})):t104;})();e->slot(0,2)=std::move(t103);}
{V t105=([&](){V t106=first(call(e->slot(1,11),Args{concat(lit132,e->slot(0,0))}));return !truth(t106)?first(call(e->slot(1,11),Args{concat(lit133,e->slot(0,0))})):t106;})();e->slot(0,3)=std::move(t105);}
{V t107=([&](){V t108=([&](){V t109=([&](){V t110=first(call(e->slot(1,11),Args{concat(lit134,e->slot(0,0))}));return !truth(t110)?first(call(e->slot(1,11),Args{concat(lit135,e->slot(0,0))})):t110;})();return !truth(t109)?first(call(e->slot(1,11),Args{concat(lit136,e->slot(0,0))})):t109;})();return !truth(t108)?first(call(e->slot(1,11),Args{concat(lit137,e->slot(0,0))})):t108;})();e->slot(0,4)=std::move(t107);}
{V t111=([&](){V t112=first(call(e->slot(1,11),Args{concat(lit138,e->slot(0,0))}));return !truth(t112)?first(call(e->slot(1,11),Args{concat(lit139,e->slot(0,0))})):t112;})();e->slot(0,5)=std::move(t111);}
{V t113=([&](){V t114=([&](){V t115=first(call(e->slot(1,11),Args{concat(lit140,e->slot(0,0))}));return !truth(t115)?first(call(e->slot(1,11),Args{concat(lit141,e->slot(0,0))})):t115;})();return !truth(t114)?first(call(e->slot(1,11),Args{concat(lit142,e->slot(0,0))})):t114;})();e->slot(0,6)=std::move(t113);}
{V t116=([&](){V t117=([&](){V t118=first(call(e->slot(1,11),Args{concat(lit143,e->slot(0,0))}));return !truth(t118)?first(call(e->slot(1,11),Args{concat(lit144,e->slot(0,0))})):t118;})();return !truth(t117)?first(call(e->slot(1,11),Args{concat(lit145,e->slot(0,0))})):t117;})();e->slot(0,7)=std::move(t116);}
{V t119=([&](){V t120=first(call(e->slot(1,11),Args{concat(lit146,e->slot(0,0))}));return !truth(t120)?first(call(e->slot(1,11),Args{concat(lit147,e->slot(0,0))})):t120;})();e->slot(0,8)=std::move(t119);}
{V t121=([&](){V t122=first(call(e->slot(1,11),Args{concat(lit148,e->slot(0,0))}));return !truth(t122)?first(call(e->slot(1,11),Args{concat(lit149,e->slot(0,0))})):t122;})();e->slot(0,9)=std::move(t121);}
if(truth(([&](){V t123=([&](){V t124=([&](){V t125=([&](){V t126=([&](){V t127=([&](){V t128=([&](){V t129=ne(e->slot(0,2),V());return !truth(t129)?ne(e->slot(0,3),V()):t129;})();return !truth(t128)?ne(e->slot(0,4),V()):t128;})();return !truth(t127)?ne(e->slot(0,5),V()):t127;})();return !truth(t126)?ne(e->slot(0,6),V()):t126;})();return !truth(t125)?ne(e->slot(0,7),V()):t125;})();return !truth(t124)?ne(e->slot(0,8),V()):t124;})();return !truth(t123)?ne(e->slot(0,9),V()):t123;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t130=V(true);refs[0].put(std::move(t130));}
}
return Args{([&](){V z=table();set(z,lit150,e->slot(0,1));set(z,lit151,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)})));set(z,lit152,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)})));set(z,lit153,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.5)})));set(z,lit154,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.5)})));set(z,lit155,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.5)})));set(z,lit156,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.5)})));set(z,lit157,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.5)})));set(z,lit158,first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.5)})));return z;})()};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);e->slot(0,5)=arg(a,5);e->slot(0,6)=arg(a,6);e->slot(0,7)=arg(a,7);if(truth(lt(e->slot(0,0),V(0.15)))){return Args{V(4.0),lit159};
}
if(truth(gt(e->slot(0,7),get(get(e->slot(1,1),lit5),lit34)))){return Args{V(7.0),lit160};
}
if(truth(lt(e->slot(0,2),V(0.35)))){return Args{V(5.0),lit161};
}
if(truth(gt(e->slot(0,3),V(1.2)))){return Args{V(3.0),lit162};
}
if(truth(lt(e->slot(0,6),V(0.45)))){return Args{V(8.0),lit163};
}
if(truth(lt(e->slot(0,1),V(0.45)))){return Args{V(2.0),lit164};
}
if(truth(lt(e->slot(0,5),V(0.55)))){return Args{V(9.0),lit165};
}
if(truth(lt(e->slot(0,4),V(0.7)))){return Args{V(1.0),lit166};
}
return Args{V(6.0),lit167};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit59)};V t131=add(([&](){V t132=get(e->slot(1,3),lit59);return !truth(t132)?V(0.0):t132;})(),([&](){V t133=e->slot(0,0);return !truth(t133)?V(0.0):t133;})());refs[0].put(std::move(t131));}
if(truth(ge(get(e->slot(1,3),lit59),get(get(e->slot(1,1),lit5),lit42)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit59)};V t134=V(0.0);refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit60)};V t135=V(true);refs[0].put(std::move(t135));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit60)};V t136=V(false);refs[0].put(std::move(t136));}
}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,10),Args{concat(lit168,e->slot(0,0)),([&](){V t137=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t137)?V(0.0):t137;})()});
call(e->slot(1,10),Args{concat(lit169,e->slot(0,0)),([&](){V t138=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t138)?V(0.0):t138;})()});
call(e->slot(1,10),Args{concat(lit170,e->slot(0,0)),([&](){V t139=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t139)?V(0.0):t139;})()});
call(e->slot(1,10),Args{concat(lit171,e->slot(0,0)),([&](){V t140=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t140)?V(1.0):t140;})()});
call(e->slot(1,10),Args{concat(lit172,e->slot(0,0)),([&](){V t141=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t141)?V(0.0):t141;})()});
call(e->slot(1,10),Args{concat(lit173,e->slot(0,0)),([&](){V t142=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t142)?V(0.0):t142;})()});
call(e->slot(1,10),Args{concat(lit174,e->slot(0,0)),([&](){V t143=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t143)?V(1.0):t143;})()});
call(e->slot(1,10),Args{concat(lit175,e->slot(0,0)),([&](){V t144=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t144)?V(0.0):t144;})()});
call(e->slot(1,10),Args{concat(lit176,e->slot(0,0)),([&](){V t145=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t145)?V(1.0):t145;})()});
call(e->slot(1,10),Args{concat(lit177,e->slot(0,0)),([&](){V t146=get(get(e->slot(1,3),lit65),e->slot(0,0));return !truth(t146)?V(0.0):t146;})()});
call(e->slot(1,10),Args{concat(lit178,e->slot(0,0)),([&](){V t147=get(get(e->slot(1,3),lit67),e->slot(0,0));return !truth(t147)?V(0.0):t147;})()});
call(e->slot(1,10),Args{concat(lit123,e->slot(0,0)),([&](){V t148=get(get(e->slot(1,3),lit68),e->slot(0,0));return !truth(t148)?V(0.0):t148;})()});
call(e->slot(1,10),Args{concat(lit129,e->slot(0,0)),([&](){V t149=get(get(e->slot(1,3),lit69),e->slot(0,0));return !truth(t149)?V(0.0):t149;})()});
call(e->slot(1,10),Args{concat(lit179,e->slot(0,0)),([&](){V t150=get(get(e->slot(1,3),lit70),e->slot(0,0));return !truth(t150)?V(0.0):t150;})()});
call(e->slot(1,10),Args{concat(lit180,e->slot(0,0)),([&](){V t151=get(get(e->slot(1,3),lit71),e->slot(0,0));return !truth(t151)?V(0.0):t151;})()});
call(e->slot(1,10),Args{concat(lit181,e->slot(0,0)),([&](){V t152=get(get(e->slot(1,3),lit72),e->slot(0,0));return !truth(t152)?V(0.0):t152;})()});
call(e->slot(1,10),Args{concat(lit182,e->slot(0,0)),([&](){V t153=get(get(e->slot(1,3),lit73),e->slot(0,0));return !truth(t153)?V(0.0):t153;})()});
call(e->slot(1,10),Args{concat(lit183,e->slot(0,0)),([&](){V t154=get(get(e->slot(1,3),lit74),e->slot(0,0));return !truth(t154)?V(1.0):t154;})()});
call(e->slot(1,10),Args{concat(lit184,e->slot(0,0)),([&](){V t155=get(get(e->slot(1,3),lit75),e->slot(0,0));return !truth(t155)?V(1.0):t155;})()});
call(e->slot(1,10),Args{concat(lit185,e->slot(0,0)),([&](){V t156=get(get(e->slot(1,3),lit76),e->slot(0,0));return !truth(t156)?V(0.0):t156;})()});
call(e->slot(1,10),Args{concat(lit186,e->slot(0,0)),([&](){V t157=get(get(e->slot(1,3),lit83),e->slot(0,0));return !truth(t157)?V(1.0):t157;})()});
call(e->slot(1,10),Args{concat(lit187,e->slot(0,0)),([&](){V t158=get(get(e->slot(1,3),lit77),e->slot(0,0));return !truth(t158)?V(0.0):t158;})()});
call(e->slot(1,10),Args{concat(lit188,e->slot(0,0)),([&](){V t159=get(get(e->slot(1,3),lit84),e->slot(0,0));return !truth(t159)?V(1.0):t159;})()});
call(e->slot(1,10),Args{concat(lit189,e->slot(0,0)),([&](){V t160=get(get(e->slot(1,3),lit78),e->slot(0,0));return !truth(t160)?V(0.0):t160;})()});
call(e->slot(1,10),Args{concat(lit190,e->slot(0,0)),([&](){V t161=get(get(e->slot(1,3),lit85),e->slot(0,0));return !truth(t161)?V(1.0):t161;})()});
call(e->slot(1,10),Args{concat(lit191,e->slot(0,0)),([&](){V t162=get(get(e->slot(1,3),lit82),e->slot(0,0));return !truth(t162)?V(1.0):t162;})()});
call(e->slot(1,10),Args{concat(lit192,e->slot(0,0)),([&](){V t163=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t163)?V(0.0):t163;})()});
call(e->slot(1,10),Args{concat(lit193,e->slot(0,0)),([&](){V t164=get(get(e->slot(1,3),lit80),e->slot(0,0));return !truth(t164)?V(0.0):t164;})()});
call(e->slot(1,10),Args{concat(lit194,e->slot(0,0)),([&](){V t165=get(get(e->slot(1,3),lit81),e->slot(0,0));return !truth(t165)?V(0.0):t165;})()});
call(e->slot(1,10),Args{concat(lit195,e->slot(0,0)),([&](){V t166=get(get(e->slot(1,3),lit86),e->slot(0,0));return !truth(t166)?V(0.0):t166;})()});
call(e->slot(1,10),Args{concat(lit196,e->slot(0,0)),([&](){V t167=get(get(e->slot(1,3),lit87),e->slot(0,0));return !truth(t167)?lit197:t167;})()});
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit198,([&](){V t168=get(e->slot(1,3),lit44);return !truth(t168)?lit197:t168;})()});
call(e->slot(1,10),Args{lit199,([&](){V t169=get(e->slot(1,3),lit44);return !truth(t169)?lit197:t169;})()});
call(e->slot(1,10),Args{lit200,([&](){V t170=get(e->slot(1,3),lit46);return !truth(t170)?V(0.0):t170;})()});
call(e->slot(1,10),Args{lit201,([&](){V t171=get(e->slot(1,3),lit46);return !truth(t171)?V(0.0):t171;})()});
call(e->slot(1,10),Args{lit202,([&](){V t172=([&](){V t173=get(e->slot(1,3),lit47);return truth(t173)?V(1.0):t173;})();return !truth(t172)?V(0.0):t172;})()});
call(e->slot(1,10),Args{lit203,([&](){V t174=get(e->slot(1,3),lit52);return !truth(t174)?V(0.0):t174;})()});
call(e->slot(1,10),Args{lit204,([&](){V t175=([&](){V t176=get(e->slot(1,3),lit48);return truth(t176)?V(1.0):t176;})();return !truth(t175)?V(0.0):t175;})()});
call(e->slot(1,10),Args{lit205,([&](){V t177=([&](){V t178=get(e->slot(1,3),lit49);return truth(t178)?V(1.0):t178;})();return !truth(t177)?V(0.0):t177;})()});
call(e->slot(1,10),Args{lit206,([&](){V t179=([&](){V t180=get(e->slot(1,3),lit50);return truth(t180)?V(1.0):t180;})();return !truth(t179)?V(0.0):t179;})()});
call(e->slot(1,10),Args{lit207,([&](){V t181=([&](){V t182=get(e->slot(1,3),lit51);return truth(t182)?V(1.0):t182;})();return !truth(t181)?V(0.0):t181;})()});
call(e->slot(1,10),Args{lit208,([&](){V t183=get(e->slot(1,3),lit53);return !truth(t183)?V(0.0):t183;})()});
call(e->slot(1,10),Args{lit209,([&](){V t184=get(e->slot(1,3),lit54);return !truth(t184)?V(0.0):t184;})()});
call(e->slot(1,10),Args{lit210,([&](){V t185=get(e->slot(1,3),lit55);return !truth(t185)?V(0.0):t185;})()});
call(e->slot(1,10),Args{lit211,([&](){V t186=get(e->slot(1,3),lit56);return !truth(t186)?V(1.0):t186;})()});
call(e->slot(1,10),Args{lit212,([&](){V t187=get(e->slot(1,3),lit57);return !truth(t187)?V(0.0):t187;})()});
call(e->slot(1,10),Args{lit213,([&](){V t188=get(e->slot(1,3),lit58);return !truth(t188)?V(0.0):t188;})()});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t189=num(V(0.0)),t190=num(V(3.0)),t191=num(V(1.0));for(double t192=t189;(t191>0?t192<=t190:t192>=t190);t192+=t191){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t192);call(e->slot(2,26),Args{e->slot(0,0)});
}}
call(e->slot(1,27),Args{});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t193=first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit61),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit40),e->slot(0,2)}));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t194=V(0.0);refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t195=V(0.0);refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t196=V(1.0);refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t197=first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit65),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit40),e->slot(0,2)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t198=V(0.0);refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t199=V(0.0);refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t200=V(0.0);refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t201=V(0.0);refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t202=V(0.0);refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,0))};V t203=V(1.0);refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,0))};V t204=V(0.0);refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit86),e->slot(0,0))};V t205=V(0.0);refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit87),e->slot(0,0))};V t206=([&](){V t207=e->slot(0,1);return !truth(t207)?lit214:t207;})();refs[0].put(std::move(t206));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,37);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t208=first(call(e->slot(1,16),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t208);}
{V t209=get(e->slot(1,1),lit5);e->slot(0,4)=std::move(t209);}
if(truth(V(!truth(e->slot(0,3))))){call(e->slot(1,29),Args{e->slot(0,0),lit214,e->slot(0,2)});
call(e->slot(1,26),Args{e->slot(0,0)});
return Args{V(0.0),V(0.0),V(0.0),V(1.0),V(0.0)};
}
{V t210=first(call(get(e->get("math"),lit91),call(e->slot(1,20),Args{e->slot(0,3),e->slot(0,0)})));e->slot(0,5)=std::move(t210);}
{V t211=first(call(e->slot(1,5),call(e->slot(1,21),Args{e->slot(0,3),e->slot(0,0)})));e->slot(0,6)=std::move(t211);}
{V t212=first(call(e->slot(1,5),call(e->slot(1,22),Args{e->slot(0,3),e->slot(0,0)})));e->slot(0,7)=std::move(t212);}
{V t213=([&](){V t214=get(get(e->slot(1,3),lit66),e->slot(0,0));return !truth(t214)?e->slot(0,5):t214;})();e->slot(0,8)=std::move(t213);}
if(truth(([&](){V t215=le(e->slot(0,8),V(0.0));return truth(t215)?gt(e->slot(0,5),V(0.0)):t215;})())){{std::array<Ref,1> refs{Ref(e,0,8)};V t216=e->slot(0,5);refs[0].put(std::move(t216));}
}
{V t217=divv(sub(e->slot(0,5),e->slot(0,8)),first(call(get(e->get("math"),lit92),Args{e->slot(0,2),V(0.001)})));e->slot(0,9)=std::move(t217);}
{V t218=first(call(get(e->get("math"),lit92),Args{V(0.0),V(-num(e->slot(0,9)))}));e->slot(0,10)=std::move(t218);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t219=e->slot(0,5);refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t220=e->slot(0,9);refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t221=e->slot(0,6);refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t222=e->slot(0,7);refs[0].put(std::move(t222));}
{V t223=first(call(e->slot(1,8),Args{get(e->slot(0,4),lit6),get(e->slot(0,4),lit7),e->slot(0,5)}));e->slot(0,11)=std::move(t223);}
{V t224=first(call(e->slot(1,8),Args{get(e->slot(0,4),lit9),get(e->slot(0,4),lit10),e->slot(0,5)}));e->slot(0,12)=std::move(t224);}
{std::array<Ref,1> refs{Ref(e,0,11)};V t225=mul(e->slot(0,11),sub(V(1.0),mul(e->slot(0,12),get(e->slot(0,4),lit11))));refs[0].put(std::move(t225));}
{V t226=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit12),get(e->slot(0,4),lit13),e->slot(0,6)})));e->slot(0,13)=std::move(t226);}
{V t227=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit14),get(e->slot(0,4),lit15),e->slot(0,7)})));e->slot(0,14)=std::move(t227);}
{V t228=divv(e->slot(0,6),first(call(get(e->get("math"),lit92),Args{get(e->slot(0,4),lit13),V(0.001)})));e->slot(0,15)=std::move(t228);}
{V t229=divv(e->slot(0,7),first(call(get(e->get("math"),lit92),Args{get(e->slot(0,4),lit15),V(0.001)})));e->slot(0,16)=std::move(t229);}
{V t230=first(call(get(e->get("math"),lit104),Args{add(mul(e->slot(0,15),e->slot(0,15)),mul(e->slot(0,16),e->slot(0,16)))}));e->slot(0,17)=std::move(t230);}
{V t231=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit16),get(e->slot(0,4),lit17),e->slot(0,17)})));e->slot(0,18)=std::move(t231);}
{V t232=first(call(get(e->get("math"),lit215),Args{e->slot(0,13),e->slot(0,14),e->slot(0,18)}));e->slot(0,19)=std::move(t232);}
if(truth(lt(get(e->slot(1,3),lit52),get(e->slot(0,4),lit20)))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t233=first(call(e->slot(2,6),Args{divv(get(e->slot(2,3),lit52),first(call(get(e->get("math"),lit92),Args{get(e->slot(1,4),lit20),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,0)=std::move(t233);}
{V t234=first(call(e->slot(2,7),Args{get(e->slot(1,4),lit21),V(1.0),e->slot(0,0)}));e->slot(0,1)=std::move(t234);}
{std::array<Ref,1> refs{Ref(e,1,19)};V t235=first(call(e->slot(2,7),Args{V(1.0),e->slot(1,19),e->slot(0,1)}));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e,1,17)};V t236=mul(e->slot(1,17),e->slot(0,1));refs[0].put(std::move(t236));}
}
{V t237=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit18),get(e->slot(0,4),lit19),e->slot(0,10)})));e->slot(0,20)=std::move(t237);}
{V t238=first(call(e->slot(1,23),Args{e->slot(0,0)}));e->slot(0,21)=std::move(t238);}
if(truth(get(e->slot(0,21),lit150))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit48)};V t239=V(true);refs[0].put(std::move(t239));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t240=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit74),e->slot(0,0)),get(e->slot(0,21),lit151),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.2)}));refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t241=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit75),e->slot(0,0)),get(e->slot(0,21),lit152),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.2)}));refs[0].put(std::move(t241));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t242=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit76),e->slot(0,0)),get(e->slot(0,21),lit153),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.5)}));refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit77),e->slot(0,0))};V t243=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit77),e->slot(0,0)),get(e->slot(0,21),lit154),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.5)}));refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit78),e->slot(0,0))};V t244=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit78),e->slot(0,0)),get(e->slot(0,21),lit155),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.5)}));refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit79),e->slot(0,0))};V t245=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit79),e->slot(0,0)),get(e->slot(0,21),lit156),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.5)}));refs[0].put(std::move(t245));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t246=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit80),e->slot(0,0)),get(e->slot(0,21),lit157),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.5)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t247=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,3),lit81),e->slot(0,0)),get(e->slot(0,21),lit158),get(e->slot(0,4),lit37),e->slot(0,2)})),V(0.0),V(1.5)}));refs[0].put(std::move(t247));}
{V t248=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit27),get(e->slot(0,4),lit28),get(get(e->slot(1,3),lit76),e->slot(0,0))})));e->slot(0,22)=std::move(t248);}
{V t249=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit29),get(e->slot(0,4),lit30),get(get(e->slot(1,3),lit77),e->slot(0,0))})));e->slot(0,23)=std::move(t249);}
{V t250=sub(V(1.0),first(call(e->slot(1,8),Args{get(e->slot(0,4),lit31),get(e->slot(0,4),lit32),get(get(e->slot(1,3),lit78),e->slot(0,0))})));e->slot(0,24)=std::move(t250);}
{V t251=first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit74),e->slot(0,0)),V(0.0),V(1.0)}));e->slot(0,25)=std::move(t251);}
{V t252=first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit75),e->slot(0,0)),V(0.0),V(1.0)}));e->slot(0,26)=std::move(t252);}
{V t253=first(call(e->slot(1,6),Args{mul(get(get(e->slot(1,3),lit79),e->slot(0,0)),get(e->slot(0,4),lit33)),V(0.0),get(e->slot(0,4),lit33)}));e->slot(0,27)=std::move(t253);}
{V t254=add(sub(sub(sub(sub(sub(V(1.0),mul(sub(V(1.0),e->slot(0,25)),get(e->slot(0,4),lit22))),mul(sub(V(1.0),e->slot(0,26)),get(e->slot(0,4),lit23))),mul(sub(V(1.0),e->slot(0,22)),get(e->slot(0,4),lit24))),mul(sub(V(1.0),e->slot(0,23)),get(e->slot(0,4),lit25))),mul(sub(V(1.0),e->slot(0,24)),get(e->slot(0,4),lit26))),e->slot(0,27));e->slot(0,28)=std::move(t254);}
{std::array<Ref,1> refs{Ref(e,0,28)};V t255=first(call(e->slot(1,6),Args{e->slot(0,28),V(0.0),V(1.0)}));refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit83),e->slot(0,0))};V t256=e->slot(0,22);refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit84),e->slot(0,0))};V t257=e->slot(0,23);refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit85),e->slot(0,0))};V t258=e->slot(0,24);refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t259=e->slot(0,28);refs[0].put(std::move(t259));}
{V t260=mul(mul(mul(e->slot(0,11),e->slot(0,19)),add(V(0.62),mul(V(0.38),e->slot(0,20)))),e->slot(0,28));e->slot(0,29)=std::move(t260);}
{std::array<Ref,1> refs{Ref(e,0,29)};V t261=first(call(e->slot(1,6),Args{e->slot(0,29),get(e->slot(0,4),lit38),get(e->slot(0,4),lit39)}));refs[0].put(std::move(t261));}
{V t262=([&](){V t263=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t263)?e->slot(0,29):t263;})();e->slot(0,30)=std::move(t262);}
{V t264=([&](){V t265=([&](){V t266=lt(e->slot(0,29),e->slot(0,30));return truth(t266)?get(e->slot(0,4),lit36):t266;})();return !truth(t265)?get(e->slot(0,4),lit35):t265;})();e->slot(0,31)=std::move(t264);}
{V t267=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{e->slot(0,30),e->slot(0,29),e->slot(0,31),e->slot(0,2)})),get(e->slot(0,4),lit38),get(e->slot(0,4),lit39)}));e->slot(0,32)=std::move(t267);}
{V t268=mul(mul(e->slot(0,32),add(V(0.74),mul(V(0.26),e->slot(0,20)))),add(V(0.82),mul(V(0.18),e->slot(0,28))));e->slot(0,33)=std::move(t268);}
{std::array<Ref,1> refs{Ref(e,0,33)};V t269=first(call(e->slot(1,6),Args{e->slot(0,33),V(0.0),V(1.0)}));refs[0].put(std::move(t269));}
{V t270=first(call(e->slot(1,6),Args{sub(V(1.0),first(call(get(e->get("math"),lit215),Args{e->slot(0,32),e->slot(0,33)}))),V(0.0),V(1.0)}));e->slot(0,34)=std::move(t270);}
{Args t271=call(e->slot(1,24),Args{e->slot(0,11),e->slot(0,19),e->slot(0,20),e->slot(0,17),e->slot(0,29),e->slot(0,28),e->slot(0,24),get(get(e->slot(1,3),lit77),e->slot(0,0))});e->slot(0,35)=arg(t271,0);e->slot(0,36)=arg(t271,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t272=e->slot(0,32);refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t273=e->slot(0,29);refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t274=e->slot(0,33);refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t275=e->slot(0,34);refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t276=e->slot(0,17);refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t277=e->slot(0,11);refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,0))};V t278=e->slot(0,19);refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,0))};V t279=e->slot(0,20);refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit86),e->slot(0,0))};V t280=e->slot(0,35);refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit87),e->slot(0,0))};V t281=e->slot(0,36);refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t282=e->slot(0,5);refs[0].put(std::move(t282));}
call(e->slot(1,26),Args{e->slot(0,0)});
return Args{e->slot(0,32),e->slot(0,29),e->slot(0,33),e->slot(0,34),e->slot(0,17)};
return Args{};});
Ref(e->slot(0,1),lit216).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit43)};V t283=V(true);refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit44)};V t284=lit45;refs[0].put(std::move(t284));}
call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit217).put(native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t285=first(call(e->slot(1,6),Args{first(call(e->slot(1,4),Args{e->slot(0,0),divv(V(1.0),V(60.0))})),V(0.0001),get(get(e->slot(1,1),lit5),lit41)}));refs[0].put(std::move(t285));}
call(e->slot(1,25),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit46)};V t286=add(([&](){V t287=get(e->slot(1,3),lit46);return !truth(t287)?V(0.0):t287;})(),V(1.0));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t288=([&](){V t289=e->slot(0,1);return !truth(t289)?first(call(e->slot(1,14),Args{})):t289;})();refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit48)};V t290=V(false);refs[0].put(std::move(t290));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit49)};V t291=V(false);refs[0].put(std::move(t291));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit50)};V t292=V(false);refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit51)};V t293=V(false);refs[0].put(std::move(t293));}
if(truth(V(!truth(e->slot(0,1))))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(2,3),lit44)};V t294=lit218;refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit47)};V t295=V(false);refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit52)};V t296=V(0.0);refs[0].put(std::move(t296));}
{V t297=V(0.0);e->slot(0,0)=std::move(t297);}
{V t298=V(0.0);e->slot(0,1)=std::move(t298);}
{double t299=num(V(0.0)),t300=num(V(3.0)),t301=num(V(1.0));for(double t302=t299;(t301>0?t302<=t300:t302>=t300);t302+=t301){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t302);call(e->slot(3,29),Args{e->slot(0,0),lit218,e->slot(2,0)});
{std::array<Ref,1> refs{Ref(e,1,0)};V t303=add(e->slot(1,0),get(get(e->slot(3,3),lit61),e->slot(0,0)));refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t304=add(e->slot(1,1),get(get(e->slot(3,3),lit64),e->slot(0,0)));refs[0].put(std::move(t304));}
call(e->slot(3,26),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit53)};V t305=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit54)};V t306=V(0.0);refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit55)};V t307=V(0.0);refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit56)};V t308=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t308));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit57)};V t309=V(0.0);refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit58)};V t310=V(0.0);refs[0].put(std::move(t310));}
call(e->slot(2,27),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,15),Args{e->slot(0,1)})))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit44)};V t311=lit219;refs[0].put(std::move(t311));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit47)};V t312=V(false);refs[0].put(std::move(t312));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit52)};V t313=first(call(e->slot(1,18),Args{e->slot(0,1)}));refs[0].put(std::move(t313));}
{double t314=num(V(0.0)),t315=num(V(3.0)),t316=num(V(1.0));for(double t317=t314;(t316>0?t317<=t315:t317>=t315);t317+=t316){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t317);call(e->slot(2,29),Args{e->slot(0,0),lit219,e->slot(1,0)});
call(e->slot(2,26),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit53)};V t318=V(0.0);refs[0].put(std::move(t318));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit54)};V t319=V(0.0);refs[0].put(std::move(t319));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit55)};V t320=V(0.0);refs[0].put(std::move(t320));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit56)};V t321=V(1.0);refs[0].put(std::move(t321));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit57)};V t322=V(0.0);refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit58)};V t323=V(0.0);refs[0].put(std::move(t323));}
call(e->slot(1,27),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit44)};V t324=lit220;refs[0].put(std::move(t324));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit47)};V t325=V(true);refs[0].put(std::move(t325));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit52)};V t326=first(call(e->slot(1,18),Args{e->slot(0,1)}));refs[0].put(std::move(t326));}
{V t327=V(0.0);e->slot(0,3)=std::move(t327);}
{V t328=V(0.0);e->slot(0,4)=std::move(t328);}
{V t329=V(0.0);e->slot(0,5)=std::move(t329);}
{V t330=V(0.0);e->slot(0,6)=std::move(t330);}
{V t331=V(1.0);e->slot(0,7)=std::move(t331);}
{V t332=V(0.0);e->slot(0,8)=std::move(t332);}
{double t333=num(V(0.0)),t334=num(V(3.0)),t335=num(V(1.0));for(double t336=t333;(t335>0?t336<=t334:t336>=t334);t336+=t335){auto parent=e;Env storage(parent,false,6);auto e=&storage;e->slot(0,0)=V(t336);{Args t337=call(e->slot(2,30),Args{e->slot(0,0),e->slot(1,1),e->slot(1,0)});e->slot(0,1)=arg(t337,0);e->slot(0,2)=arg(t337,1);e->slot(0,3)=arg(t337,2);e->slot(0,4)=arg(t337,3);e->slot(0,5)=arg(t337,4);}
{std::array<Ref,1> refs{Ref(e,1,3)};V t338=add(e->slot(1,3),e->slot(0,1));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t339=add(e->slot(1,4),e->slot(0,2));refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t340=add(e->slot(1,5),e->slot(0,3));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t341=add(e->slot(1,6),e->slot(0,4));refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t342=first(call(get(e->get("math"),lit215),Args{e->slot(1,7),e->slot(0,1)}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t343=first(call(get(e->get("math"),lit92),Args{e->slot(1,8),e->slot(0,5)}));refs[0].put(std::move(t343));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit53)};V t344=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit54)};V t345=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t345));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit55)};V t346=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit56)};V t347=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t347));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit57)};V t348=e->slot(0,7);refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit58)};V t349=e->slot(0,8);refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit43)};V t350=V(true);refs[0].put(std::move(t350));}
call(e->slot(1,27),Args{});
return Args{};}));
Ref(e->slot(0,1),lit221).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t351=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t351)?V(0.0):t351;})()};
return Args{};}));
Ref(e->slot(0,1),lit222).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t352=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t352)?V(0.0):t352;})()};
return Args{};}));
Ref(e->slot(0,1),lit223).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t353=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t353)?V(0.0):t353;})()};
return Args{};}));
Ref(e->slot(0,1),lit224).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t354=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t354)?V(1.0):t354;})()};
return Args{};}));
Ref(e->slot(0,1),lit225).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t355=get(get(e->slot(1,3),lit87),e->slot(0,0));return !truth(t355)?lit197:t355;})()};
return Args{};}));
Ref(e->slot(0,1),lit226).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,3)};
return Args{};}));
Ref(e->slot(0,1),lit227).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t356=([&](){V t357=first(call(e->get("tonumber"),Args{([&](){V t358=e->slot(0,0);return !truth(t358)?V(0.0):t358;})()}));return !truth(t357)?V(0.0):t357;})();e->slot(0,1)=std::move(t356);}
return call(get(e->get("string"),lit228),Args{concat(lit229,concat(lit230,concat(lit231,lit232))),([&](){V t359=get(e->slot(1,2),e->slot(0,1));return !truth(t359)?first(call(e->get("tostring"),Args{e->slot(0,1)})):t359;})(),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit61),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit62),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit63),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit64),e->slot(0,1)),V(1.0)})),first(call(e->get("tostring"),Args{([&](){V t360=get(get(e->slot(1,3),lit87),e->slot(0,1));return !truth(t360)?lit197:t360;})()})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit65),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit67),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit69),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit68),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit70),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit71),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit72),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit73),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit82),e->slot(0,1)),V(1.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit74),e->slot(0,1)),V(1.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit75),e->slot(0,1)),V(1.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit76),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit77),e->slot(0,1)),V(0.0)})),first(call(e->slot(1,4),Args{get(get(e->slot(1,3),lit78),e->slot(0,1)),V(0.0)})),([&](){V t361=([&](){V t362=get(e->slot(1,3),lit48);return truth(t362)?lit233:t362;})();return !truth(t361)?lit234:t361;})()});
return Args{};}));
Ref(e->slot(0,1),lit235).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(([&](){V t363=V(!truth(e->get("ui")));return !truth(t363)?V(!truth(get(e->get("ui"),lit236))):t363;})())){return Args{};
}
call(get(e->get("ui"),lit237),Args{});
call(get(e->get("ui"),lit236),Args{lit238});
call(get(e->get("ui"),lit236),call(get(e->get("string"),lit228),Args{lit239,first(call(e->get("tostring"),Args{get(e->slot(1,3),lit44)})),first(call(e->slot(1,4),Args{get(e->slot(1,3),lit52),V(0.0)})),first(call(e->slot(1,4),Args{get(e->slot(1,3),lit53),V(0.0)})),first(call(e->slot(1,4),Args{get(e->slot(1,3),lit56),V(1.0)})),([&](){V t364=([&](){V t365=get(e->slot(1,3),lit48);return truth(t365)?lit233:t365;})();return !truth(t364)?lit234:t364;})()}));
{double t366=num(V(0.0)),t367=num(V(3.0)),t368=num(V(1.0));for(double t369=t366;(t368>0?t369<=t367:t369>=t367);t369+=t368){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t369);call(get(e->get("ui"),lit236),call(get(e->get("string"),lit228),joined(Args{lit240,([&](){V t370=get(e->slot(2,2),e->slot(0,0));return !truth(t370)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t370;})(),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit61),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit63),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit64),e->slot(0,0)),V(1.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit62),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit65),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit70),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit71),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit72),e->slot(0,0)),V(0.0)})),first(call(e->slot(2,4),Args{get(get(e->slot(2,3),lit82),e->slot(0,0)),V(1.0)}))},call(e->get("tostring"),Args{([&](){V t371=get(get(e->slot(2,3),lit87),e->slot(0,0));return !truth(t371)?lit197:t371;})()}))));
}}
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

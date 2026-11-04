// Generated native C++ from pinned progressive_spring.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("baseRateInputContract");
static const V lit7("original");
static const V lit8("baseRate");
static const V lit9("progressiveRate");
static const V lit10("startTravel");
static const V lit11("maxForce");
static const V lit12("tau");
static const V lit13("inputTau");
static const V lit14("forceTau");
static const V lit15("contactRateGain");
static const V lit16("contactScaleGain");
static const V lit17("roadImpulseRateGain");
static const V lit18("contactDropRateLoss");
static const V lit19("travelInputGain");
static const V lit20("impulseTravelGain");
static const V lit21("dropTravelLoss");
static const V lit22("minRateScale");
static const V lit23("maxRateScale");
static const V lit24("minTravel");
static const V lit25("maxTravel");
static const V lit26("bodyFlexRateLoss");
static const V lit27("bodyTorsionRateLoss");
static const V lit28("bodyBendingRateLoss");
static const V lit29("bodyStiffRateGain");
static const V lit30("bodyFlexTravelGain");
static const V lit31("bodyBendingTravelGain");
static const V lit32("bodyFlexTauGain");
static const V lit33("bodyStiffTauGain");
static const V lit34("bodyImpulseSoftening");
static const V lit35("tireHopRateGain");
static const V lit36("loadNormRateGain");
static const V lit37("damageRateLoss");
static const V lit38("preserveInputRateGain");
static const V lit39("damperPreserveRateGain");
static const V lit40("chassisEnergyRateGain");
static const V lit41("weightBiasRateGain");
static const V lit42("damageRuntimeRateLoss");
static const V lit43("maxPreserveRateAdd");
static const V lit44("damperHystRateGain");
static const V lit45("damperVerticalRateGain");
static const V lit46("damperImpactTravelGain");
static const V lit47("loadPathLossRateLoss");
static const V lit48("loadPathDeliveryRateGain");
static const V lit49("minDt");
static const V lit50("maxDt");
static const V lit51("noCarReturnTau");
static const V lit52("noCarForceTau");
static const V lit53("debugStoreInterval");
static const V lit54("force");
static const V lit55("rawForce");
static const V lit56("travel");
static const V lit57("rawTravel");
static const V lit58("effectiveTravel");
static const V lit59("rate");
static const V lit60("rateScale");
static const V lit61("progressiveAmount");
static const V lit62("contactInput");
static const V lit63("contactScale");
static const V lit64("roadImpulse");
static const V lit65("contactDrop");
static const V lit66("hop");
static const V lit67("loadNorm");
static const V lit68("damage");
static const V lit69("preserveInputAdd");
static const V lit70("chassisEnergy");
static const V lit71("damageRuntimeAdd");
static const V lit72("weightBias");
static const V lit73("damperPreserve");
static const V lit74("preserveRateAdd");
static const V lit75("damperHyst");
static const V lit76("damperVertical");
static const V lit77("damperImpact");
static const V lit78("loadPathLoss");
static const V lit79("loadPathDelivery");
static const V lit80("bodyRigidityScale");
static const V lit81("bodyTravelOffset");
static const V lit82("bodyForceTau");
static const V lit83("bodyRigidity");
static const V lit84("bodyFlexFactor");
static const V lit85("bodyTorsionFactor");
static const V lit86("bodyBendingFactor");
static const V lit87("bodyDampingFactor");
static const V lit88("bodyRigidityLinked");
static const V lit89("avgForce");
static const V lit90("avgAbsForce");
static const V lit91("avgRate");
static const V lit92("avgRateScale");
static const V lit93("avgContactInput");
static const V lit94("maxForceLive");
static const V lit95("maxTravelLive");
static const V lit96("avgPreserveRateAdd");
static const V lit97("status");
static const V lit98("INIT");
static const V lit99("updateCount");
static const V lit100("wheelsValid");
static const V lit101("contactLinked");
static const V lit102("bodyLinked");
static const V lit103("tireLinked");
static const V lit104("loadLinked");
static const V lit105("damageLinked");
static const V lit106("preserveLinked");
static const V lit107("chassisLinked");
static const V lit108("damageRuntimeLinked");
static const V lit109("weightLinked");
static const V lit110("damperLinked");
static const V lit111("loadPathLinked");
static const V lit112("debugStoreTimer");
static const V lit113("debugStoreNow");
static const V lit114("state");
static const V lit115("debug");
static const V lit116("huge");
static const V lit117("abs");
static const V lit118("safeLoadRaw");
static const V lit119("safeStore");
static const V lit120("safeField");
static const V lit121("getCar");
static const V lit122("wheels");
static const V lit123("ngp_body_rigidity");
static const V lit124("ngp_body_flex_factor");
static const V lit125("ngp_body_torsion_factor");
static const V lit126("ngp_body_bending_factor");
static const V lit127("ngp_body_damping_factor");
static const V lit128("ngp_body_rigidity_update_count");
static const V lit129("ngp_sci_preserve_input_add");
static const V lit130("ngp_susp_preserve_input_add");
static const V lit131("ngp_preserve_input_add");
static const V lit132("ngp_chassis_energy");
static const V lit133("ngp_chassis_body_energy");
static const V lit134("ngp_chassis_flex_energy");
static const V lit135("ngp_damage_runtime_add");
static const V lit136("ngp_damage_runtime_total");
static const V lit137("ngp_vehicle_condition_total");
static const V lit138("ngp_weight_front_bias");
static const V lit139("ngp_front_bias");
static const V lit140("ngp_weight_rear_bias");
static const V lit141("ngp_rear_bias");
static const V lit142("ngp_weight_left_bias");
static const V lit143("ngp_left_bias");
static const V lit144("ngp_weight_right_bias");
static const V lit145("ngp_right_bias");
static const V lit146("ngp_damper_preserve_coeff_add_");
static const V lit147("ngp_damper_preserve_rate_add_");
static const V lit148("ngp_damper_hyst_preserve_");
static const V lit149("ngp_damper_hyst_");
static const V lit150("ngp_damper_hysteretic_");
static const V lit151("ngp_damper_vertical_");
static const V lit152("ngp_vertical_damping_");
static const V lit153("ngp_damper_hyst_impact_");
static const V lit154("ngp_damper_vertical_pulse_");
static const V lit155("ngp_load_path_loss_");
static const V lit156("ngp_lp_loss_");
static const V lit157("ngp_load_path_tire_delivery_");
static const V lit158("ngp_lp_tire_delivery_");
static const V lit159("suspensionTravel");
static const V lit160("suspensionTravelM");
static const V lit161("suspensionLength");
static const V lit162("damperTravel");
static const V lit163("suspensionPosition");
static const V lit164("springTravel");
static const V lit165("ngp_susp_travel_");
static const V lit166("ngp_damper_travel_");
static const V lit167("ngp_spring_travel_input_");
static const V lit168("ngp_susp_contact_input_");
static const V lit169("ngp_sci_input_");
static const V lit170("ngp_susp_contact_scale_");
static const V lit171("ngp_sci_scale_");
static const V lit172("ngp_susp_road_impulse_");
static const V lit173("ngp_sci_impulse_");
static const V lit174("ngp_impact_root_value");
static const V lit175("ngp_susp_contact_drop_");
static const V lit176("ngp_sci_drop_");
static const V lit177("ngp_contact_loss_");
static const V lit178("ngp_tire_hop_energy_");
static const V lit179("ngp_tire_hop_");
static const V lit180("ngp_tirehop_");
static const V lit181("ngp_wheel_load_norm_");
static const V lit182("ngp_wheel_load_");
static const V lit183("ngp_damage_wheel_");
static const V lit184("ngp_condition_wheel_");
static const V lit185("max");
static const V lit186("car_config_base_rate_v1");
static const V lit187("Invalid spring base rate input contract");
static const V lit188("FRONT");
static const V lit189("REAR");
static const V lit190("getCarConfig");
static const V lit191("SPRING_RATE");
static const V lit192("number");
static const V lit193("Validated spring base rate unavailable");
static const V lit194("referenceBaseRate");
static const V lit195("baseRateSource");
static const V lit196("CAR_CONFIG_DECLARED_SPRING_RATE");
static const V lit197("ngp_progressive_spring_");
static const V lit198("ngp_spring_force_");
static const V lit199("ngp_spring_raw_");
static const V lit200("ngp_spring_rate_");
static const V lit201("ngp_spring_rate_scale_");
static const V lit202("ngp_spring_travel_");
static const V lit203("ngp_spring_effective_travel_");
static const V lit204("ngp_spring_body_scale_");
static const V lit205("ngp_spring_preserve_rate_add_");
static const V lit206("ngp_spring_progressive_amount_");
static const V lit207("ngp_spring_load_norm_");
static const V lit208("ngp_spring_damper_hyst_");
static const V lit209("ngp_spring_vertical_damping_");
static const V lit210("ngp_ps_force_");
static const V lit211("ngp_ps_rate_");
static const V lit212("ngp_ps_scale_");
static const V lit213("ngp_ps_travel_");
static const V lit214("ngp_spring_contact_input_");
static const V lit215("ngp_spring_impulse_");
static const V lit216("ngp_spring_drop_");
static const V lit217("ngp_spring_raw_travel_");
static const V lit218("ngp_spring_contact_scale_");
static const V lit219("ngp_spring_hop_");
static const V lit220("ngp_spring_damage_");
static const V lit221("ngp_spring_body_travel_offset_");
static const V lit222("ngp_spring_body_tau_");
static const V lit223("ngp_progressive_spring_status");
static const V lit224("ngp_progressive_spring_update_count");
static const V lit225("ngp_progressive_spring_wheels_valid");
static const V lit226("ngp_spring_avg_force");
static const V lit227("ngp_spring_avg_abs_force");
static const V lit228("ngp_spring_avg_rate");
static const V lit229("ngp_spring_avg_rate_scale");
static const V lit230("ngp_spring_avg_contact_input");
static const V lit231("ngp_spring_avg_preserve_rate_add");
static const V lit232("ngp_spring_max_force");
static const V lit233("ngp_spring_max_travel");
static const V lit234("ngp_ps_status");
static const V lit235("ngp_ps_count");
static const V lit236("ngp_ps_avg_force");
static const V lit237("ngp_ps_avg_rate");
static const V lit238("ngp_ps_avg_scale");
static const V lit239("ngp_spring_contact_linked");
static const V lit240("ngp_spring_body_linked");
static const V lit241("ngp_spring_tire_linked");
static const V lit242("ngp_spring_load_linked");
static const V lit243("ngp_spring_damage_linked");
static const V lit244("ngp_spring_preserve_linked");
static const V lit245("ngp_spring_chassis_linked");
static const V lit246("ngp_spring_damage_runtime_linked");
static const V lit247("ngp_spring_weight_linked");
static const V lit248("ngp_spring_damper_linked");
static const V lit249("ngp_spring_load_path_linked");
static const V lit250("ngp_spring_body_rigidity");
static const V lit251("ngp_spring_body_flex_factor");
static const V lit252("ngp_spring_chassis_energy");
static const V lit253("ngp_spring_damage_runtime_add");
static const V lit254("init");
static const V lit255("update");
static const V lit256("BAD DT");
static const V lit257("NO CAR");
static const V lit258("NO WHEELS");
static const V lit259("RUNNING");
static const V lit260("getForce");
static const V lit261("getAbsForce");
static const V lit262("getRate");
static const V lit263("getRateScale");
static const V lit264("getTravel");
static const V lit265("getState");
static const V lit266("debugStr");
static const V lit267("format");
static const V lit268("%s Spring %.0f Raw %.0f Rate %.0f Scale %.2f\n");
static const V lit269("Travel %.3f Eff %.3f Prog %.3f Preserve %.3f\n");
static const V lit270("CI %.2f Imp %.2f Drop %.2f Load %.2f Body %.2f");
static const V lit271("Status %s / Count %.0f / Wheels %s\n");
static const V lit272("Spring %.0f %.0f %.0f %.0f / AvgAbs %.0f Max %.0f\n");
static const V lit273("Rate %.0f %.0f %.0f %.0f / Avg %.0f\n");
static const V lit274("RateScale %.2f %.2f %.2f %.2f / Avg %.2f\n");
static const V lit275("Travel %.3f %.3f %.3f %.3f / Max %.3f\n");
static const V lit276("Preserve %.3f Avg %.3f / Chassis %.3f Damage %.3f\n");
static const V lit277("Links Contact:%s Body:%s Tire:%s Load:%s Damage:%s Preserve:%s Chassis:%s Weight:%s Damper:%s LP:%s");
static const V lit278("OK");
static const V lit279("NIL");
V load_progressive_spring(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(29);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,lit7);set(z,lit8,V(30000.0));set(z,lit9,V(90000.0));set(z,lit10,V(0.35));set(z,lit11,V(25000.0));set(z,lit12,V(0.05));set(z,lit13,V(0.06));set(z,lit14,V(0.045));set(z,lit15,V(0.18));set(z,lit16,V(0.16));set(z,lit17,V(0.24));set(z,lit18,V(0.2));set(z,lit19,V(0.035));set(z,lit20,V(0.02));set(z,lit21,V(0.025));set(z,lit22,V(0.7));set(z,lit23,V(1.35));set(z,lit24,V(-num(V(1.0))));set(z,lit25,V(1.0));set(z,lit26,V(0.1));set(z,lit27,V(0.07));set(z,lit28,V(0.08));set(z,lit29,V(0.05));set(z,lit30,V(0.1));set(z,lit31,V(0.08));set(z,lit32,V(0.4));set(z,lit33,V(0.1));set(z,lit34,V(0.1));set(z,lit35,V(0.08));set(z,lit36,V(0.08));set(z,lit37,V(0.12));set(z,lit38,V(0.08));set(z,lit39,V(0.06));set(z,lit40,V(0.05));set(z,lit41,V(0.04));set(z,lit42,V(0.08));set(z,lit43,V(0.2));set(z,lit44,V(0.04));set(z,lit45,V(0.03));set(z,lit46,V(0.012));set(z,lit47,V(0.06));set(z,lit48,V(0.04));set(z,lit49,V(5e-05));set(z,lit50,V(0.05));set(z,lit51,V(0.22));set(z,lit52,V(0.18));set(z,lit53,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit54,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(30000.0));set(z,V(1.0),V(30000.0));set(z,V(2.0),V(30000.0));set(z,V(3.0),V(30000.0));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit78,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit79,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit80,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit81,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit82,([&](){V z=table();set(z,V(0.0),V(0.045));set(z,V(1.0),V(0.045));set(z,V(2.0),V(0.045));set(z,V(3.0),V(0.045));return z;})());set(z,lit83,V(1.0));set(z,lit84,V(1.0));set(z,lit85,V(1.0));set(z,lit86,V(1.0));set(z,lit87,V(1.0));set(z,lit88,V(false));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(1.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,lit98);set(z,lit99,V(0.0));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(false));set(z,lit103,V(false));set(z,lit104,V(false));set(z,lit105,V(false));set(z,lit106,V(false));set(z,lit107,V(false));set(z,lit108,V(false));set(z,lit109,V(false));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(999.0));set(z,lit113,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{double t6=num(V(0.0)),t7=num(V(3.0)),t8=num(V(1.0));for(double t9=t6;(t8>0?t9<=t7:t9>=t7);t9+=t8){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t9);{std::array<Ref,1> refs{Ref(e->slot(1,3),e->slot(0,0))};V t10=([&](){V z=table();set(z,lit54,V(0.0));set(z,lit56,V(0.0));set(z,lit59,get(get(e->slot(1,1),lit5),lit8));set(z,lit60,V(1.0));return z;})();refs[0].put(std::move(t10));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t11=e->slot(0,3);refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t12=e->slot(0,3);refs[0].put(std::move(t12));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(([&](){V t14=([&](){V t15=([&](){V t16=eq(e->slot(0,2),V());return !truth(t16)?ne(e->slot(0,2),e->slot(0,2)):t16;})();return !truth(t15)?eq(e->slot(0,2),get(e->get("math"),lit116)):t15;})();return !truth(t14)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit116)))):t14;})())){return Args{([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,4),Args{e->slot(0,0),([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()}));refs[0].put(std::move(t18));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit117),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t20=get(e->slot(0,0),lit118);e->slot(0,7)=std::move(t20);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t21=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t21);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t23=e->slot(0,1);return !truth(t23)?V(0.0):t23;})()});
return Args{};});
{V t24=get(e->slot(0,0),lit119);e->slot(0,9)=std::move(t24);}
{V t25=get(e->slot(0,0),lit120);e->slot(0,10)=std::move(t25);}
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t26=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t27=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t28=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t29=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t29));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t30=V(!truth(e->get("ac")));return !truth(t30)?V(!truth(get(e->get("ac"),lit121))):t30;})())){return Args{V()};
}
{Args t31=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit121),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t31,0);e->slot(0,1)=arg(t31,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(false)};
}
{Args t32=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,0),lit122)};
return Args{};})});e->slot(0,1)=arg(t32,0);e->slot(0,2)=arg(t32,1);}
return Args{([&](){V t33=e->slot(0,1);return truth(t33)?ne(e->slot(0,2),V()):t33;})()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(first(call(e->slot(1,13),Args{e->slot(0,0)})))))){return Args{V()};
}
{Args t34=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit122),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t34,0);e->slot(0,3)=arg(t34,1);}
if(truth(([&](){V t35=e->slot(0,2);return truth(t35)?ne(e->slot(0,3),V()):t35;})())){return Args{e->slot(0,3)};
}
{std::array<Ref,2> refs{Ref(e,0,2),Ref(e,0,3)};Args t36=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit122),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t36,0));refs[1].put(arg(t36,1));}
if(truth(([&](){V t37=e->slot(0,2);return truth(t37)?ne(e->slot(0,3),V()):t37;})())){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t38=add(([&](){V t39=get(e->slot(1,3),lit112);return !truth(t39)?V(0.0):t39;})(),([&](){V t40=e->slot(0,0);return !truth(t40)?V(0.0):t40;})());refs[0].put(std::move(t38));}
if(truth(ge(get(e->slot(1,3),lit112),get(get(e->slot(1,1),lit5),lit53)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t41=V(0.0);refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t42=V(true);refs[0].put(std::move(t42));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t43=V(false);refs[0].put(std::move(t43));}
}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t44=V(false);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t46=V(false);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t48=V(false);refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t49=V(false);refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t53=V(false);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t54=V(false);refs[0].put(std::move(t54));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;{V t55=first(call(e->slot(1,7),Args{lit123}));e->slot(0,0)=std::move(t55);}
{V t56=first(call(e->slot(1,7),Args{lit124}));e->slot(0,1)=std::move(t56);}
{V t57=first(call(e->slot(1,7),Args{lit125}));e->slot(0,2)=std::move(t57);}
{V t58=first(call(e->slot(1,7),Args{lit126}));e->slot(0,3)=std::move(t58);}
{V t59=first(call(e->slot(1,7),Args{lit127}));e->slot(0,4)=std::move(t59);}
{V t60=first(call(e->slot(1,7),Args{lit128}));e->slot(0,5)=std::move(t60);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t61=([&](){V t62=([&](){V t63=([&](){V t64=([&](){V t65=([&](){V t66=ne(e->slot(0,0),V());return !truth(t66)?ne(e->slot(0,1),V()):t66;})();return !truth(t65)?ne(e->slot(0,2),V()):t65;})();return !truth(t64)?ne(e->slot(0,3),V()):t64;})();return !truth(t63)?ne(e->slot(0,4),V()):t63;})();return !truth(t62)?ne(e->slot(0,5),V()):t62;})();refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit83)};V t67=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit84)};V t68=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit85)};V t69=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t70=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit87)};V t71=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t72=([&](){V t73=gt(first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0));return !truth(t73)?get(e->slot(1,3),lit102):t73;})();refs[0].put(std::move(t72));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;{V t74=first(call(e->slot(1,7),Args{lit129}));e->slot(0,0)=std::move(t74);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t75=first(call(e->slot(1,7),Args{lit130}));refs[0].put(std::move(t75));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t76=first(call(e->slot(1,7),Args{lit131}));refs[0].put(std::move(t76));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t77=ne(e->slot(0,0),V());refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit69)};V t78=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})),V(0.0),V(0.25)}));refs[0].put(std::move(t78));}
{V t79=first(call(e->slot(1,7),Args{lit132}));e->slot(0,1)=std::move(t79);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t80=first(call(e->slot(1,7),Args{lit133}));refs[0].put(std::move(t80));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t81=first(call(e->slot(1,7),Args{lit134}));refs[0].put(std::move(t81));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t82=ne(e->slot(0,1),V());refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit70)};V t83=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t83));}
{V t84=first(call(e->slot(1,7),Args{lit135}));e->slot(0,2)=std::move(t84);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t85=first(call(e->slot(1,7),Args{lit136}));refs[0].put(std::move(t85));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t86=first(call(e->slot(1,7),Args{lit137}));refs[0].put(std::move(t86));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t87=ne(e->slot(0,2),V());refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit71)};V t88=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t88));}
{V t89=first(call(e->slot(1,7),Args{lit138}));e->slot(0,3)=std::move(t89);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t90=first(call(e->slot(1,7),Args{lit139}));refs[0].put(std::move(t90));}
}
{V t91=first(call(e->slot(1,7),Args{lit140}));e->slot(0,4)=std::move(t91);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t92=first(call(e->slot(1,7),Args{lit141}));refs[0].put(std::move(t92));}
}
{V t93=first(call(e->slot(1,7),Args{lit142}));e->slot(0,5)=std::move(t93);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t94=first(call(e->slot(1,7),Args{lit143}));refs[0].put(std::move(t94));}
}
{V t95=first(call(e->slot(1,7),Args{lit144}));e->slot(0,6)=std::move(t95);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t96=first(call(e->slot(1,7),Args{lit145}));refs[0].put(std::move(t96));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t97=([&](){V t98=([&](){V t99=([&](){V t100=ne(e->slot(0,3),V());return !truth(t100)?ne(e->slot(0,4),V()):t100;})();return !truth(t99)?ne(e->slot(0,5),V()):t99;})();return !truth(t98)?ne(e->slot(0,6),V()):t98;})();refs[0].put(std::move(t97));}
{V t101=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,7)=std::move(t101);}
{V t102=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,8)=std::move(t102);}
{V t103=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,9)=std::move(t103);}
{V t104=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,10)=std::move(t104);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),V(0.0))};V t105=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,7),e->slot(0,9)),V(2.0)),V(0.55),V(1.45)}));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),V(1.0))};V t106=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,7),e->slot(0,10)),V(2.0)),V(0.55),V(1.45)}));refs[0].put(std::move(t106));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),V(2.0))};V t107=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,8),e->slot(0,9)),V(2.0)),V(0.55),V(1.45)}));refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),V(3.0))};V t108=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,8),e->slot(0,10)),V(2.0)),V(0.55),V(1.45)}));refs[0].put(std::move(t108));}
{V t109=V(false);e->slot(0,11)=std::move(t109);}
{V t110=V(false);e->slot(0,12)=std::move(t110);}
{double t111=num(V(0.0)),t112=num(V(3.0)),t113=num(V(1.0));for(double t114=t111;(t113>0?t114<=t112:t114>=t112);t114+=t113){auto parent=e;Env storage(parent,false,7);auto e=&storage;e->slot(0,0)=V(t114);{V t115=first(call(e->slot(2,7),Args{concat(lit146,e->slot(0,0))}));e->slot(0,1)=std::move(t115);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t116=first(call(e->slot(2,7),Args{concat(lit147,e->slot(0,0))}));refs[0].put(std::move(t116));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t117=first(call(e->slot(2,7),Args{concat(lit148,e->slot(0,0))}));refs[0].put(std::move(t117));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,11)};V t118=V(true);refs[0].put(std::move(t118));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit73),e->slot(0,0))};V t119=first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(0.25)}));refs[0].put(std::move(t119));}
{V t120=first(call(e->slot(2,7),Args{concat(lit149,e->slot(0,0))}));e->slot(0,2)=std::move(t120);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t121=first(call(e->slot(2,7),Args{concat(lit150,e->slot(0,0))}));refs[0].put(std::move(t121));}
}
{V t122=first(call(e->slot(2,7),Args{concat(lit151,e->slot(0,0))}));e->slot(0,3)=std::move(t122);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t123=first(call(e->slot(2,7),Args{concat(lit152,e->slot(0,0))}));refs[0].put(std::move(t123));}
}
{V t124=first(call(e->slot(2,7),Args{concat(lit153,e->slot(0,0))}));e->slot(0,4)=std::move(t124);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t125=first(call(e->slot(2,7),Args{concat(lit154,e->slot(0,0))}));refs[0].put(std::move(t125));}
}
if(truth(([&](){V t126=([&](){V t127=ne(e->slot(0,2),V());return !truth(t127)?ne(e->slot(0,3),V()):t127;})();return !truth(t126)?ne(e->slot(0,4),V()):t126;})())){{std::array<Ref,1> refs{Ref(e,1,11)};V t128=V(true);refs[0].put(std::move(t128));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit75),e->slot(0,0))};V t129=first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit76),e->slot(0,0))};V t130=first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit77),e->slot(0,0))};V t131=first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t131));}
{V t132=first(call(e->slot(2,7),Args{concat(lit155,e->slot(0,0))}));e->slot(0,5)=std::move(t132);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t133=first(call(e->slot(2,7),Args{concat(lit156,e->slot(0,0))}));refs[0].put(std::move(t133));}
}
{V t134=first(call(e->slot(2,7),Args{concat(lit157,e->slot(0,0))}));e->slot(0,6)=std::move(t134);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t135=first(call(e->slot(2,7),Args{concat(lit158,e->slot(0,0))}));refs[0].put(std::move(t135));}
}
if(truth(([&](){V t136=ne(e->slot(0,5),V());return !truth(t136)?ne(e->slot(0,6),V()):t136;})())){{std::array<Ref,1> refs{Ref(e,1,12)};V t137=V(true);refs[0].put(std::move(t137));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit78),e->slot(0,0))};V t138=first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit79),e->slot(0,0))};V t139=first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t139));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t140=e->slot(0,11);refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t141=e->slot(0,12);refs[0].put(std::move(t141));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t142=([&](){V z=table();set(z,V(1.0),lit159);set(z,V(2.0),lit160);set(z,V(3.0),lit161);set(z,V(4.0),lit56);set(z,V(5.0),lit162);set(z,V(6.0),lit163);set(z,V(7.0),lit164);return z;})();e->slot(0,0)=std::move(t142);}
{Args t143=call(e->get("ipairs"),Args{e->slot(0,0)});V t144=arg(t143,2);while(true){Args t145=call(arg(t143,0),Args{arg(t143,1),t144});t144=arg(t145,0);if(isnil(t144))break;auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=arg(t145,0);e->slot(0,1)=arg(t145,1);{V t146=first(call(e->slot(3,10),Args{e->slot(2,0),e->slot(0,1),V()}));e->slot(0,2)=std::move(t146);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(3,5),Args{first(call(e->slot(3,4),Args{e->slot(0,2),V(0.0)})),get(get(e->slot(3,1),lit5),lit24),get(get(e->slot(3,1),lit5),lit25)});
}
}}
}
{V t147=first(call(e->slot(1,7),Args{concat(lit165,e->slot(0,1))}));e->slot(0,2)=std::move(t147);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t148=first(call(e->slot(1,7),Args{concat(lit166,e->slot(0,1))}));refs[0].put(std::move(t148));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t149=first(call(e->slot(1,7),Args{concat(lit167,e->slot(0,1))}));refs[0].put(std::move(t149));}
}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),get(get(e->slot(1,1),lit5),lit24),get(get(e->slot(1,1),lit5),lit25)});
}
return Args{([&](){V t150=get(get(e->slot(1,3),lit57),e->slot(0,1));return !truth(t150)?V(0.0):t150;})()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);{V t151=first(call(e->slot(1,7),Args{concat(lit168,e->slot(0,0))}));e->slot(0,1)=std::move(t151);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t152=first(call(e->slot(1,7),Args{concat(lit169,e->slot(0,0))}));refs[0].put(std::move(t152));}
}
{V t153=first(call(e->slot(1,7),Args{concat(lit170,e->slot(0,0))}));e->slot(0,2)=std::move(t153);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t154=first(call(e->slot(1,7),Args{concat(lit171,e->slot(0,0))}));refs[0].put(std::move(t154));}
}
{V t155=first(call(e->slot(1,7),Args{concat(lit172,e->slot(0,0))}));e->slot(0,3)=std::move(t155);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t156=first(call(e->slot(1,7),Args{concat(lit173,e->slot(0,0))}));refs[0].put(std::move(t156));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t157=first(call(e->slot(1,7),Args{lit174}));refs[0].put(std::move(t157));}
}
{V t158=first(call(e->slot(1,7),Args{concat(lit175,e->slot(0,0))}));e->slot(0,4)=std::move(t158);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t159=first(call(e->slot(1,7),Args{concat(lit176,e->slot(0,0))}));refs[0].put(std::move(t159));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t160=first(call(e->slot(1,7),Args{concat(lit177,e->slot(0,0))}));refs[0].put(std::move(t160));}
}
if(truth(([&](){V t161=([&](){V t162=([&](){V t163=ne(e->slot(0,1),V());return !truth(t163)?ne(e->slot(0,2),V()):t163;})();return !truth(t162)?ne(e->slot(0,3),V()):t162;})();return !truth(t161)?ne(e->slot(0,4),V()):t161;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t164=V(true);refs[0].put(std::move(t164));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t165=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t166=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.5),V(1.7)}));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t167=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t168=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t168));}
{V t169=first(call(e->slot(1,7),Args{concat(lit178,e->slot(0,0))}));e->slot(0,5)=std::move(t169);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t170=first(call(e->slot(1,7),Args{concat(lit179,e->slot(0,0))}));refs[0].put(std::move(t170));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t171=first(call(e->slot(1,7),Args{concat(lit180,e->slot(0,0))}));refs[0].put(std::move(t171));}
}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t172=V(true);refs[0].put(std::move(t172));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t173=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t173));}
{V t174=first(call(e->slot(1,7),Args{concat(lit181,e->slot(0,0))}));e->slot(0,6)=std::move(t174);}
if(truth(eq(e->slot(0,6),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t175=first(call(e->slot(2,7),Args{concat(lit182,e->slot(1,0))}));e->slot(0,0)=std::move(t175);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,6)};V t176=divv(first(call(e->slot(2,4),Args{e->slot(0,0),V(3000.0)})),V(3500.0));refs[0].put(std::move(t176));}
}
}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t177=V(true);refs[0].put(std::move(t177));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t178=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(1.0)})),V(0.0),V(2.5)}));refs[0].put(std::move(t178));}
{V t179=first(call(e->slot(1,7),Args{concat(lit183,e->slot(0,0))}));e->slot(0,7)=std::move(t179);}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t180=first(call(e->slot(1,7),Args{concat(lit184,e->slot(0,0))}));refs[0].put(std::move(t180));}
}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t181=V(true);refs[0].put(std::move(t181));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t182=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t182));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(V(!truth(get(e->slot(1,3),lit88))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t183=V(1.0);refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t184=V(0.0);refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t185=get(get(e->slot(1,1),lit5),lit14);refs[0].put(std::move(t185));}
return Args{e->slot(0,1),e->slot(0,2),get(get(e->slot(1,1),lit5),lit14)};
}
{V t186=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit84),V(1.0)),V(0.0),V(0.8)}));e->slot(0,3)=std::move(t186);}
{V t187=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit83),V(1.0)),V(0.0),V(0.35)}));e->slot(0,4)=std::move(t187);}
{V t188=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit85),V(1.0)),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t188);}
{V t189=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit86),V(1.0)),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t189);}
{V t190=([&](){V t191=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t191)?V(0.0):t191;})();e->slot(0,7)=std::move(t190);}
{V t192=add(sub(sub(sub(sub(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit5),lit26))),mul(e->slot(0,5),get(get(e->slot(1,1),lit5),lit27))),mul(e->slot(0,6),get(get(e->slot(1,1),lit5),lit28))),mul(mul(e->slot(0,7),e->slot(0,3)),get(get(e->slot(1,1),lit5),lit34))),mul(e->slot(0,4),get(get(e->slot(1,1),lit5),lit29)));e->slot(0,8)=std::move(t192);}
{V t193=add(add(mul(e->slot(0,3),get(get(e->slot(1,1),lit5),lit30)),mul(e->slot(0,6),get(get(e->slot(1,1),lit5),lit31))),mul(e->slot(0,7),get(get(e->slot(1,1),lit5),lit20)));e->slot(0,9)=std::move(t193);}
{V t194=divv(divv(mul(get(get(e->slot(1,1),lit5),lit14),add(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit5),lit32)))),add(V(1.0),mul(e->slot(0,4),get(get(e->slot(1,1),lit5),lit33)))),first(call(get(e->get("math"),lit185),Args{get(e->slot(1,3),lit87),V(0.5)})));e->slot(0,10)=std::move(t194);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t195=first(call(e->slot(1,5),Args{e->slot(0,8),V(0.86),V(1.1)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t196=first(call(e->slot(1,5),Args{e->slot(0,9),V(-num(V(0.2))),V(0.25)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t197=first(call(e->slot(1,5),Args{e->slot(0,10),V(0.02),V(0.08)}));refs[0].put(std::move(t197));}
return Args{mul(e->slot(0,1),get(get(e->slot(1,3),lit80),e->slot(0,0))),add(e->slot(0,2),get(get(e->slot(1,3),lit81),e->slot(0,0))),get(get(e->slot(1,3),lit82),e->slot(0,0))};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);{V t198=get(get(e->slot(1,1),lit5),lit6);e->slot(0,1)=std::move(t198);}
if(truth(eq(e->slot(0,1),lit7))){return Args{get(get(e->slot(1,1),lit5),lit8)};
}
if(truth(ne(e->slot(0,1),lit186))){call(e->get("error"),Args{lit187});
}
{V t199=([&](){V t200=([&](){V t201=lt(e->slot(0,0),V(2.0));return truth(t201)?lit188:t201;})();return !truth(t200)?lit189:t200;})();e->slot(0,2)=std::move(t199);}
{Args t202=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit190),Args{V(0.0),e->slot(1,2),lit191,V()});
return Args{};})});e->slot(0,3)=arg(t202,0);e->slot(0,4)=arg(t202,1);}
if(truth(([&](){V t203=([&](){V t204=([&](){V t205=([&](){V t206=V(!truth(e->slot(0,3)));return !truth(t206)?ne(first(call(e->get("type"),Args{e->slot(0,4)})),lit192):t206;})();return !truth(t205)?ne(e->slot(0,4),e->slot(0,4)):t205;})();return !truth(t204)?eq(first(call(get(e->get("math"),lit117),Args{e->slot(0,4)})),get(e->get("math"),lit116)):t204;})();return !truth(t203)?le(e->slot(0,4),V(0.0)):t203;})())){call(e->get("error"),Args{lit193});
}
if(truth(V(!truth(get(e->slot(1,3),lit194))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit194)};V t207=([&](){V z=table();return z;})();refs[0].put(std::move(t207));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit194),e->slot(0,0))};V t208=e->slot(0,4);refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit195)};V t209=lit196;refs[0].put(std::move(t209));}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t210=first(call(e->slot(1,14),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t210);}
{V t211=first(call(e->slot(1,19),Args{e->slot(0,3),e->slot(0,0)}));e->slot(0,4)=std::move(t211);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t212=e->slot(0,4);refs[0].put(std::move(t212));}
call(e->slot(1,20),Args{e->slot(0,0)});
{V t213=add(sub(add(add(e->slot(0,4),mul(get(get(e->slot(1,3),lit62),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit19))),mul(get(get(e->slot(1,3),lit64),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit20))),mul(get(get(e->slot(1,3),lit65),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit21))),mul(get(get(e->slot(1,3),lit77),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit46)));e->slot(0,5)=std::move(t213);}
{V t214=add(sub(add(add(sub(add(add(add(add(sub(add(add(sub(add(add(add(V(1.0),mul(get(get(e->slot(1,3),lit62),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit15))),mul(sub(get(get(e->slot(1,3),lit63),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit5),lit16))),mul(get(get(e->slot(1,3),lit64),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit17))),mul(get(get(e->slot(1,3),lit65),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit18))),mul(get(get(e->slot(1,3),lit66),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit35))),mul(first(call(get(e->get("math"),lit185),Args{sub(get(get(e->slot(1,3),lit67),e->slot(0,0)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit36))),mul(get(get(e->slot(1,3),lit68),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit37))),mul(get(e->slot(1,3),lit69),get(get(e->slot(1,1),lit5),lit38))),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit39))),mul(get(e->slot(1,3),lit70),get(get(e->slot(1,1),lit5),lit40))),mul(first(call(get(e->get("math"),lit185),Args{sub(get(get(e->slot(1,3),lit72),e->slot(0,0)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit41))),mul(get(e->slot(1,3),lit71),get(get(e->slot(1,1),lit5),lit42))),mul(get(get(e->slot(1,3),lit75),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit44))),mul(get(get(e->slot(1,3),lit76),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit45))),mul(get(get(e->slot(1,3),lit78),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit47))),mul(first(call(get(e->get("math"),lit185),Args{sub(get(get(e->slot(1,3),lit79),e->slot(0,0)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit48)));e->slot(0,6)=std::move(t214);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t215=first(call(e->slot(1,5),Args{add(add(add(mul(get(e->slot(1,3),lit69),get(get(e->slot(1,1),lit5),lit38)),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit39))),mul(get(e->slot(1,3),lit70),get(get(e->slot(1,1),lit5),lit40))),mul(get(get(e->slot(1,3),lit75),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit44))),V(0.0),get(get(e->slot(1,1),lit5),lit43)}));refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t216=first(call(e->slot(1,5),Args{e->slot(0,6),get(get(e->slot(1,1),lit5),lit22),get(get(e->slot(1,1),lit5),lit23)}));refs[0].put(std::move(t216));}
{Args t217=call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,6),e->slot(0,5)});e->slot(0,7)=arg(t217,0);e->slot(0,8)=arg(t217,1);e->slot(0,9)=arg(t217,2);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t218=first(call(e->slot(1,5),Args{e->slot(0,7),mul(get(get(e->slot(1,1),lit5),lit22),V(0.85)),mul(get(get(e->slot(1,1),lit5),lit23),V(1.08))}));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t219=first(call(e->slot(1,5),Args{e->slot(0,8),get(get(e->slot(1,1),lit5),lit24),get(get(e->slot(1,1),lit5),lit25)}));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t220=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit56),e->slot(0,0)),get(get(e->slot(1,3),lit58),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit13),e->slot(0,2)}));refs[0].put(std::move(t220));}
{V t221=first(call(get(e->get("math"),lit185),Args{sub(get(get(e->slot(1,3),lit56),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit10)),V(0.0)}));e->slot(0,10)=std::move(t221);}
{V t222=add(first(call(e->slot(1,22),Args{e->slot(0,0)})),mul(e->slot(0,10),get(get(e->slot(1,1),lit5),lit9)));e->slot(0,11)=std::move(t222);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t223=first(call(get(e->get("math"),lit185),Args{V(0.0),mul(e->slot(0,11),get(get(e->slot(1,3),lit60),e->slot(0,0)))}));refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t224=e->slot(0,10);refs[0].put(std::move(t224));}
{V t225=first(call(e->slot(1,5),Args{mul(get(get(e->slot(1,3),lit59),e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))),V(-num(get(get(e->slot(1,1),lit5),lit11))),get(get(e->slot(1,1),lit5),lit11)}));e->slot(0,12)=std::move(t225);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t226=e->slot(0,12);refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t227=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit54),e->slot(0,0)),e->slot(0,12),e->slot(0,9),e->slot(0,2)}));refs[0].put(std::move(t227));}
{V t228=get(e->slot(1,3),e->slot(0,0));e->slot(0,13)=std::move(t228);}
if(truth(e->slot(0,13))){{std::array<Ref,1> refs{Ref(e->slot(0,13),lit54)};V t229=get(get(e->slot(1,3),lit54),e->slot(0,0));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(0,13),lit56)};V t230=get(get(e->slot(1,3),lit56),e->slot(0,0));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(0,13),lit59)};V t231=get(get(e->slot(1,3),lit59),e->slot(0,0));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(0,13),lit60)};V t232=get(get(e->slot(1,3),lit60),e->slot(0,0));refs[0].put(std::move(t232));}
}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t233=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit57),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t234=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit56),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t235=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit58),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t236=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit55),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit52),e->slot(0,1)}));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t237=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit54),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit52),e->slot(0,1)}));refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t238=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit59),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit8),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t239=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit60),e->slot(0,0)),V(1.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t239));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t240=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit61),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t241=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit74),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t241));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t242=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit62),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t243=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit64),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t244=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit65),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t245=first(call(e->slot(1,11),Args{get(get(e->slot(1,3),lit67),e->slot(0,0)),V(1.0),get(get(e->slot(1,1),lit5),lit51),e->slot(0,1)}));refs[0].put(std::move(t245));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;{V t246=V(0.0);e->slot(0,0)=std::move(t246);}
{V t247=V(0.0);e->slot(0,1)=std::move(t247);}
{V t248=V(0.0);e->slot(0,2)=std::move(t248);}
{V t249=V(0.0);e->slot(0,3)=std::move(t249);}
{V t250=V(0.0);e->slot(0,4)=std::move(t250);}
{V t251=V(0.0);e->slot(0,5)=std::move(t251);}
{V t252=V(0.0);e->slot(0,6)=std::move(t252);}
{V t253=V(0.0);e->slot(0,7)=std::move(t253);}
{double t254=num(V(0.0)),t255=num(V(3.0)),t256=num(V(1.0));for(double t257=t254;(t256>0?t257<=t255:t257>=t255);t257+=t256){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t257);{std::array<Ref,1> refs{Ref(e,1,0)};V t258=add(e->slot(1,0),([&](){V t259=get(get(e->slot(2,3),lit54),e->slot(0,0));return !truth(t259)?V(0.0):t259;})());refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t260=add(e->slot(1,1),first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit54),e->slot(0,0))})));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t261=add(e->slot(1,2),([&](){V t262=get(get(e->slot(2,3),lit59),e->slot(0,0));return !truth(t262)?get(get(e->slot(2,1),lit5),lit8):t262;})());refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t263=add(e->slot(1,3),([&](){V t264=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t264)?V(1.0):t264;})());refs[0].put(std::move(t263));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t265=add(e->slot(1,4),([&](){V t266=get(get(e->slot(2,3),lit62),e->slot(0,0));return !truth(t266)?V(0.0):t266;})());refs[0].put(std::move(t265));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t267=add(e->slot(1,5),([&](){V t268=get(get(e->slot(2,3),lit74),e->slot(0,0));return !truth(t268)?V(0.0):t268;})());refs[0].put(std::move(t267));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t269=first(call(get(e->get("math"),lit185),joined(Args{e->slot(1,6)},call(e->slot(2,6),Args{get(get(e->slot(2,3),lit54),e->slot(0,0))}))));refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t270=first(call(get(e->get("math"),lit185),joined(Args{e->slot(1,7)},call(e->slot(2,6),Args{get(get(e->slot(2,3),lit56),e->slot(0,0))}))));refs[0].put(std::move(t270));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t271=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit90)};V t272=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t273=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t274=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t275=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t276=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t277=e->slot(0,6);refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t278=e->slot(0,7);refs[0].put(std::move(t278));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,9),Args{concat(lit197,e->slot(0,0)),get(get(e->slot(1,3),lit54),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit198,e->slot(0,0)),get(get(e->slot(1,3),lit54),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit199,e->slot(0,0)),get(get(e->slot(1,3),lit55),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit200,e->slot(0,0)),get(get(e->slot(1,3),lit59),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit201,e->slot(0,0)),get(get(e->slot(1,3),lit60),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit202,e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit203,e->slot(0,0)),get(get(e->slot(1,3),lit58),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit204,e->slot(0,0)),get(get(e->slot(1,3),lit80),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit205,e->slot(0,0)),get(get(e->slot(1,3),lit74),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit206,e->slot(0,0)),get(get(e->slot(1,3),lit61),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit207,e->slot(0,0)),get(get(e->slot(1,3),lit67),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit208,e->slot(0,0)),get(get(e->slot(1,3),lit75),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit209,e->slot(0,0)),get(get(e->slot(1,3),lit76),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit210,e->slot(0,0)),get(get(e->slot(1,3),lit54),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit211,e->slot(0,0)),get(get(e->slot(1,3),lit59),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit212,e->slot(0,0)),get(get(e->slot(1,3),lit60),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit213,e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))});
if(truth(V(!truth(get(e->slot(1,3),lit113))))){return Args{};
}
call(e->slot(1,9),Args{concat(lit214,e->slot(0,0)),get(get(e->slot(1,3),lit62),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit215,e->slot(0,0)),get(get(e->slot(1,3),lit64),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit216,e->slot(0,0)),get(get(e->slot(1,3),lit65),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit217,e->slot(0,0)),get(get(e->slot(1,3),lit57),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit218,e->slot(0,0)),get(get(e->slot(1,3),lit63),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit219,e->slot(0,0)),get(get(e->slot(1,3),lit66),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit220,e->slot(0,0)),get(get(e->slot(1,3),lit68),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit221,e->slot(0,0)),get(get(e->slot(1,3),lit81),e->slot(0,0))});
call(e->slot(1,9),Args{concat(lit222,e->slot(0,0)),get(get(e->slot(1,3),lit82),e->slot(0,0))});
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,9),Args{lit223,get(e->slot(1,3),lit97)});
call(e->slot(1,9),Args{lit224,get(e->slot(1,3),lit99)});
call(e->slot(1,9),Args{lit225,([&](){V t279=([&](){V t280=get(e->slot(1,3),lit100);return truth(t280)?V(1.0):t280;})();return !truth(t279)?V(0.0):t279;})()});
call(e->slot(1,9),Args{lit226,get(e->slot(1,3),lit89)});
call(e->slot(1,9),Args{lit227,get(e->slot(1,3),lit90)});
call(e->slot(1,9),Args{lit228,get(e->slot(1,3),lit91)});
call(e->slot(1,9),Args{lit229,get(e->slot(1,3),lit92)});
call(e->slot(1,9),Args{lit230,get(e->slot(1,3),lit93)});
call(e->slot(1,9),Args{lit231,get(e->slot(1,3),lit96)});
call(e->slot(1,9),Args{lit232,get(e->slot(1,3),lit94)});
call(e->slot(1,9),Args{lit233,get(e->slot(1,3),lit95)});
call(e->slot(1,9),Args{lit234,get(e->slot(1,3),lit97)});
call(e->slot(1,9),Args{lit235,get(e->slot(1,3),lit99)});
call(e->slot(1,9),Args{lit236,get(e->slot(1,3),lit90)});
call(e->slot(1,9),Args{lit237,get(e->slot(1,3),lit91)});
call(e->slot(1,9),Args{lit238,get(e->slot(1,3),lit92)});
if(truth(V(!truth(get(e->slot(1,3),lit113))))){return Args{};
}
call(e->slot(1,9),Args{lit239,([&](){V t281=([&](){V t282=get(e->slot(1,3),lit101);return truth(t282)?V(1.0):t282;})();return !truth(t281)?V(0.0):t281;})()});
call(e->slot(1,9),Args{lit240,([&](){V t283=([&](){V t284=get(e->slot(1,3),lit102);return truth(t284)?V(1.0):t284;})();return !truth(t283)?V(0.0):t283;})()});
call(e->slot(1,9),Args{lit241,([&](){V t285=([&](){V t286=get(e->slot(1,3),lit103);return truth(t286)?V(1.0):t286;})();return !truth(t285)?V(0.0):t285;})()});
call(e->slot(1,9),Args{lit242,([&](){V t287=([&](){V t288=get(e->slot(1,3),lit104);return truth(t288)?V(1.0):t288;})();return !truth(t287)?V(0.0):t287;})()});
call(e->slot(1,9),Args{lit243,([&](){V t289=([&](){V t290=get(e->slot(1,3),lit105);return truth(t290)?V(1.0):t290;})();return !truth(t289)?V(0.0):t289;})()});
call(e->slot(1,9),Args{lit244,([&](){V t291=([&](){V t292=get(e->slot(1,3),lit106);return truth(t292)?V(1.0):t292;})();return !truth(t291)?V(0.0):t291;})()});
call(e->slot(1,9),Args{lit245,([&](){V t293=([&](){V t294=get(e->slot(1,3),lit107);return truth(t294)?V(1.0):t294;})();return !truth(t293)?V(0.0):t293;})()});
call(e->slot(1,9),Args{lit246,([&](){V t295=([&](){V t296=get(e->slot(1,3),lit108);return truth(t296)?V(1.0):t296;})();return !truth(t295)?V(0.0):t295;})()});
call(e->slot(1,9),Args{lit247,([&](){V t297=([&](){V t298=get(e->slot(1,3),lit109);return truth(t298)?V(1.0):t298;})();return !truth(t297)?V(0.0):t297;})()});
call(e->slot(1,9),Args{lit248,([&](){V t299=([&](){V t300=get(e->slot(1,3),lit110);return truth(t300)?V(1.0):t300;})();return !truth(t299)?V(0.0):t299;})()});
call(e->slot(1,9),Args{lit249,([&](){V t301=([&](){V t302=get(e->slot(1,3),lit111);return truth(t302)?V(1.0):t302;})();return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,9),Args{lit250,get(e->slot(1,3),lit83)});
call(e->slot(1,9),Args{lit251,get(e->slot(1,3),lit84)});
call(e->slot(1,9),Args{lit252,get(e->slot(1,3),lit70)});
call(e->slot(1,9),Args{lit253,get(e->slot(1,3),lit71)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t303=num(V(0.0)),t304=num(V(3.0)),t305=num(V(1.0));for(double t306=t303;(t305>0?t306<=t304:t306>=t304);t306+=t305){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t306);call(e->slot(2,26),Args{e->slot(0,0)});
}}
call(e->slot(1,27),Args{});
return Args{};});
Ref(e->slot(0,1),lit254).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t307=lit98;refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t308=([&](){V t309=get(e->slot(1,3),lit99);return !truth(t309)?V(0.0):t309;})();refs[0].put(std::move(t308));}
call(e->slot(1,17),Args{});
call(e->slot(1,18),Args{});
call(e->slot(1,25),Args{});
call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit255).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t310=add(([&](){V t311=get(e->slot(1,3),lit99);return !truth(t311)?V(0.0):t311;})(),V(1.0));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t312=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t312));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t313=lit256;refs[0].put(std::move(t313));}
call(e->slot(1,25),Args{});
call(e->slot(1,28),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t314=first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit5),lit49),get(get(e->slot(1,1),lit5),lit50)}));refs[0].put(std::move(t314));}
call(e->slot(1,15),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t315=first(call(e->slot(1,12),Args{}));refs[0].put(std::move(t315));}
}
call(e->slot(1,16),Args{});
call(e->slot(1,17),Args{});
call(e->slot(1,18),Args{});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t316=lit257;refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t317=V(false);refs[0].put(std::move(t317));}
{double t318=num(V(0.0)),t319=num(V(3.0)),t320=num(V(1.0));for(double t321=t318;(t320>0?t321<=t319:t321>=t319);t321+=t320){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t321);call(e->slot(2,24),Args{e->slot(0,0),e->slot(1,0)});
}}
call(e->slot(1,25),Args{});
call(e->slot(1,28),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,13),Args{e->slot(0,1)})))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t322=lit258;refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t323=V(false);refs[0].put(std::move(t323));}
{double t324=num(V(0.0)),t325=num(V(3.0)),t326=num(V(1.0));for(double t327=t324;(t326>0?t327<=t325:t327>=t325);t327+=t326){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t327);call(e->slot(2,24),Args{e->slot(0,0),e->slot(1,0)});
}}
call(e->slot(1,25),Args{});
call(e->slot(1,28),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t328=lit259;refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t329=V(true);refs[0].put(std::move(t329));}
{double t330=num(V(0.0)),t331=num(V(3.0)),t332=num(V(1.0));for(double t333=t330;(t332>0?t333<=t331:t333>=t331);t333+=t332){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t333);call(e->slot(2,23),Args{e->slot(0,0),e->slot(1,1),e->slot(1,0)});
}}
call(e->slot(1,25),Args{});
call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit260).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t334=get(e->slot(1,3),lit89);return !truth(t334)?V(0.0):t334;})()};
}
return Args{([&](){V t335=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t335)?V(0.0):t335;})()};
return Args{};}));
Ref(e->slot(0,1),lit261).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t336=get(e->slot(1,3),lit90);return !truth(t336)?V(0.0):t336;})()};
}
return call(e->slot(1,6),Args{get(get(e->slot(1,3),lit54),e->slot(0,0))});
return Args{};}));
Ref(e->slot(0,1),lit262).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t337=get(e->slot(1,3),lit91);return !truth(t337)?get(get(e->slot(1,1),lit5),lit8):t337;})()};
}
return Args{([&](){V t338=get(get(e->slot(1,3),lit59),e->slot(0,0));return !truth(t338)?get(get(e->slot(1,1),lit5),lit8):t338;})()};
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t339=get(e->slot(1,3),lit92);return !truth(t339)?V(1.0):t339;})()};
}
return Args{([&](){V t340=get(get(e->slot(1,3),lit60),e->slot(0,0));return !truth(t340)?V(1.0):t340;})()};
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t341=get(e->slot(1,3),lit95);return !truth(t341)?V(0.0):t341;})()};
}
return Args{([&](){V t342=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t342)?V(0.0):t342;})()};
return Args{};}));
Ref(e->slot(0,1),lit265).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){return Args{([&](){V z=table();set(z,lit54,([&](){V t343=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t343)?V(0.0):t343;})());set(z,lit55,([&](){V t344=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t344)?V(0.0):t344;})());set(z,lit56,([&](){V t345=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t345)?V(0.0):t345;})());set(z,lit57,([&](){V t346=get(get(e->slot(1,3),lit57),e->slot(0,0));return !truth(t346)?V(0.0):t346;})());set(z,lit58,([&](){V t347=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t347)?V(0.0):t347;})());set(z,lit59,([&](){V t348=get(get(e->slot(1,3),lit59),e->slot(0,0));return !truth(t348)?get(get(e->slot(1,1),lit5),lit8):t348;})());set(z,lit60,([&](){V t349=get(get(e->slot(1,3),lit60),e->slot(0,0));return !truth(t349)?V(1.0):t349;})());set(z,lit61,([&](){V t350=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t350)?V(0.0):t350;})());set(z,lit74,([&](){V t351=get(get(e->slot(1,3),lit74),e->slot(0,0));return !truth(t351)?V(0.0):t351;})());return z;})()};
}
return Args{e->slot(1,3)};
return Args{};}));
Ref(e->slot(0,1),lit266).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t352=([&](){V t353=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t353)?V(0.0):t353;})();e->slot(0,0)=std::move(t352);}
return call(get(e->get("string"),lit267),Args{concat(lit268,concat(lit269,lit270)),first(call(e->get("tostring"),Args{([&](){V t354=get(e->slot(2,2),e->slot(0,0));return !truth(t354)?e->slot(0,0):t354;})()})),([&](){V t355=get(get(e->slot(2,3),lit54),e->slot(0,0));return !truth(t355)?V(0.0):t355;})(),([&](){V t356=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t356)?V(0.0):t356;})(),([&](){V t357=get(get(e->slot(2,3),lit59),e->slot(0,0));return !truth(t357)?V(0.0):t357;})(),([&](){V t358=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t358)?V(1.0):t358;})(),([&](){V t359=get(get(e->slot(2,3),lit56),e->slot(0,0));return !truth(t359)?V(0.0):t359;})(),([&](){V t360=get(get(e->slot(2,3),lit58),e->slot(0,0));return !truth(t360)?V(0.0):t360;})(),([&](){V t361=get(get(e->slot(2,3),lit61),e->slot(0,0));return !truth(t361)?V(0.0):t361;})(),([&](){V t362=get(get(e->slot(2,3),lit74),e->slot(0,0));return !truth(t362)?V(0.0):t362;})(),([&](){V t363=get(get(e->slot(2,3),lit62),e->slot(0,0));return !truth(t363)?V(0.0):t363;})(),([&](){V t364=get(get(e->slot(2,3),lit64),e->slot(0,0));return !truth(t364)?V(0.0):t364;})(),([&](){V t365=get(get(e->slot(2,3),lit65),e->slot(0,0));return !truth(t365)?V(0.0):t365;})(),([&](){V t366=get(get(e->slot(2,3),lit67),e->slot(0,0));return !truth(t366)?V(1.0):t366;})(),([&](){V t367=get(get(e->slot(2,3),lit80),e->slot(0,0));return !truth(t367)?V(1.0):t367;})()});
}
return call(get(e->get("string"),lit267),Args{concat(lit271,concat(lit272,concat(lit273,concat(lit274,concat(lit275,concat(lit276,lit277)))))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit97)})),([&](){V t368=get(e->slot(1,3),lit99);return !truth(t368)?V(0.0):t368;})(),([&](){V t369=([&](){V t370=get(e->slot(1,3),lit100);return truth(t370)?lit278:t370;})();return !truth(t369)?lit279:t369;})(),([&](){V t371=get(get(e->slot(1,3),lit54),V(0.0));return !truth(t371)?V(0.0):t371;})(),([&](){V t372=get(get(e->slot(1,3),lit54),V(1.0));return !truth(t372)?V(0.0):t372;})(),([&](){V t373=get(get(e->slot(1,3),lit54),V(2.0));return !truth(t373)?V(0.0):t373;})(),([&](){V t374=get(get(e->slot(1,3),lit54),V(3.0));return !truth(t374)?V(0.0):t374;})(),([&](){V t375=get(e->slot(1,3),lit90);return !truth(t375)?V(0.0):t375;})(),([&](){V t376=get(e->slot(1,3),lit94);return !truth(t376)?V(0.0):t376;})(),([&](){V t377=get(get(e->slot(1,3),lit59),V(0.0));return !truth(t377)?V(0.0):t377;})(),([&](){V t378=get(get(e->slot(1,3),lit59),V(1.0));return !truth(t378)?V(0.0):t378;})(),([&](){V t379=get(get(e->slot(1,3),lit59),V(2.0));return !truth(t379)?V(0.0):t379;})(),([&](){V t380=get(get(e->slot(1,3),lit59),V(3.0));return !truth(t380)?V(0.0):t380;})(),([&](){V t381=get(e->slot(1,3),lit91);return !truth(t381)?V(0.0):t381;})(),([&](){V t382=get(get(e->slot(1,3),lit60),V(0.0));return !truth(t382)?V(1.0):t382;})(),([&](){V t383=get(get(e->slot(1,3),lit60),V(1.0));return !truth(t383)?V(1.0):t383;})(),([&](){V t384=get(get(e->slot(1,3),lit60),V(2.0));return !truth(t384)?V(1.0):t384;})(),([&](){V t385=get(get(e->slot(1,3),lit60),V(3.0));return !truth(t385)?V(1.0):t385;})(),([&](){V t386=get(e->slot(1,3),lit92);return !truth(t386)?V(1.0):t386;})(),([&](){V t387=get(get(e->slot(1,3),lit56),V(0.0));return !truth(t387)?V(0.0):t387;})(),([&](){V t388=get(get(e->slot(1,3),lit56),V(1.0));return !truth(t388)?V(0.0):t388;})(),([&](){V t389=get(get(e->slot(1,3),lit56),V(2.0));return !truth(t389)?V(0.0):t389;})(),([&](){V t390=get(get(e->slot(1,3),lit56),V(3.0));return !truth(t390)?V(0.0):t390;})(),([&](){V t391=get(e->slot(1,3),lit95);return !truth(t391)?V(0.0):t391;})(),([&](){V t392=get(e->slot(1,3),lit69);return !truth(t392)?V(0.0):t392;})(),([&](){V t393=get(e->slot(1,3),lit96);return !truth(t393)?V(0.0):t393;})(),([&](){V t394=get(e->slot(1,3),lit70);return !truth(t394)?V(0.0):t394;})(),([&](){V t395=get(e->slot(1,3),lit71);return !truth(t395)?V(0.0):t395;})(),([&](){V t396=([&](){V t397=get(e->slot(1,3),lit101);return truth(t397)?lit278:t397;})();return !truth(t396)?lit279:t396;})(),([&](){V t398=([&](){V t399=get(e->slot(1,3),lit102);return truth(t399)?lit278:t399;})();return !truth(t398)?lit279:t398;})(),([&](){V t400=([&](){V t401=get(e->slot(1,3),lit103);return truth(t401)?lit278:t401;})();return !truth(t400)?lit279:t400;})(),([&](){V t402=([&](){V t403=get(e->slot(1,3),lit104);return truth(t403)?lit278:t403;})();return !truth(t402)?lit279:t402;})(),([&](){V t404=([&](){V t405=get(e->slot(1,3),lit105);return truth(t405)?lit278:t405;})();return !truth(t404)?lit279:t404;})(),([&](){V t406=([&](){V t407=get(e->slot(1,3),lit106);return truth(t407)?lit278:t407;})();return !truth(t406)?lit279:t406;})(),([&](){V t408=([&](){V t409=get(e->slot(1,3),lit107);return truth(t409)?lit278:t409;})();return !truth(t408)?lit279:t408;})(),([&](){V t410=([&](){V t411=get(e->slot(1,3),lit109);return truth(t411)?lit278:t411;})();return !truth(t410)?lit279:t410;})(),([&](){V t412=([&](){V t413=get(e->slot(1,3),lit110);return truth(t413)?lit278:t413;})();return !truth(t412)?lit279:t412;})(),([&](){V t414=([&](){V t415=get(e->slot(1,3),lit111);return truth(t415)?lit278:t415;})();return !truth(t414)?lit279:t414;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

// Generated native C++ from pinned suspension.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("travelPublicationContract");
static const V lit3("original");
static const V lit4("damperScale");
static const V lit5("maxForce");
static const V lit6("minSuspSpeed");
static const V lit7("slowBumpScale");
static const V lit8("fastBumpScale");
static const V lit9("reboundScale");
static const V lit10("bumpThreshold");
static const V lit11("rollBarScale");
static const V lit12("frontARB");
static const V lit13("rearARB");
static const V lit14("arbTau");
static const V lit15("camberScale");
static const V lit16("toeScale");
static const V lit17("armFlexScale");
static const V lit18("bushTau");
static const V lit19("casterAngle");
static const V lit20("casterTrail");
static const V lit21("casterScale");
static const V lit22("casterTau");
static const V lit23("springRate");
static const V lit24("springLimit");
static const V lit25("tireHopGain");
static const V lit26("loadBiasGain");
static const V lit27("externalDamperGain");
static const V lit28("externalSpringGain");
static const V lit29("contactForceGain");
static const V lit30("impulseForceGain");
static const V lit31("contactDropLoss");
static const V lit32("damperScaleInfluence");
static const V lit33("springScaleInfluence");
static const V lit34("integratedForceTau");
static const V lit35("minIntegratedScale");
static const V lit36("maxIntegratedScale");
static const V lit37("tireRoadInputGain");
static const V lit38("tireRoadImpulseGain");
static const V lit39("tireSlipEnergyGain");
static const V lit40("tireCombinedSlipGain");
static const V lit41("tireRoadForceGain");
static const V lit42("tireLatLongForceReference");
static const V lit43("tireRoadInputTau");
static const V lit44("minTireRoadInput");
static const V lit45("maxTireRoadInput");
static const V lit46("bodyRigidityInfluence");
static const V lit47("bodyFlexForceLoss");
static const V lit48("bodyTorsionForceLoss");
static const V lit49("bodyBendingForceLoss");
static const V lit50("bodyFlexTauGain");
static const V lit51("bodySoftContactGain");
static const V lit52("bodyStiffSharpGain");
static const V lit53("minBodyRigidityScale");
static const V lit54("maxBodyRigidityScale");
static const V lit55("loadRef");
static const V lit56("noCarDecayTau");
static const V lit57("minDt");
static const V lit58("maxDt");
static const V lit59("maxSuspSpeed");
static const V lit60("debugExportInterval");
static const V lit61("front");
static const V lit62("rear");
static const V lit63("force");
static const V lit64("suspTravel");
static const V lit65("suspSpeed");
static const V lit66("damperForce");
static const V lit67("springForce");
static const V lit68("camber");
static const V lit69("toe");
static const V lit70("caster");
static const V lit71("arbForce");
static const V lit72("casterTotal");
static const V lit73("wheelLoad");
static const V lit74("loadFront");
static const V lit75("loadRear");
static const V lit76("loadLeft");
static const V lit77("loadRight");
static const V lit78("armCamber");
static const V lit79("armToe");
static const V lit80("tireHop");
static const V lit81("externalDamper");
static const V lit82("externalSpring");
static const V lit83("contactInput");
static const V lit84("contactImpulse");
static const V lit85("contactDrop");
static const V lit86("tireRoadInput");
static const V lit87("tireRoadImpulse");
static const V lit88("tireCombinedSlip");
static const V lit89("tireSlipEnergy");
static const V lit90("tireForceMagnitude");
static const V lit91("roadImpact");
static const V lit92("roadShock");
static const V lit93("loadPathLoss");
static const V lit94("integratedScale");
static const V lit95("integratedForce");
static const V lit96("bodyRigidityScale");
static const V lit97("bodyRigidity");
static const V lit98("bodyFlexFactor");
static const V lit99("bodyTorsionFactor");
static const V lit100("bodyBendingFactor");
static const V lit101("bodyDampingFactor");
static const V lit102("avgForce");
static const V lit103("avgAbsForce");
static const V lit104("avgIntegratedScale");
static const V lit105("avgTireRoadInput");
static const V lit106("avgTireSlipEnergy");
static const V lit107("maxAbsForce");
static const V lit108("loadLinked");
static const V lit109("armLinked");
static const V lit110("hopLinked");
static const V lit111("externalLinked");
static const V lit112("contactLinked");
static const V lit113("tireForceLinked");
static const V lit114("bodyRigidityLinked");
static const V lit115("roadInputLinked");
static const V lit116("loadPathLinked");
static const V lit117("wheelsValid");
static const V lit118("status");
static const V lit119("INIT");
static const V lit120("updateCount");
static const V lit121("debugExportTimer");
static const V lit122("debugExportNow");
static const V lit123("bodyReadTimer");
static const V lit124("state");
static const V lit125("debug");
static const V lit126("huge");
static const V lit127("abs");
static const V lit128("max");
static const V lit129("safeStore");
static const V lit130("safeLoadRaw");
static const V lit131("safeField");
static const V lit132("getCar");
static const V lit133("wheels");
static const V lit134("suspensionTravel");
static const V lit135("suspensionTravelM");
static const V lit136("suspensionLength");
static const V lit137("travel");
static const V lit138("damperTravel");
static const V lit139("suspensionPosition");
static const V lit140("getExtendedSuspensionTravel");
static const V lit141("number");
static const V lit142("ngp_body_rigidity");
static const V lit143("ngp_body_rigidity_update_count");
static const V lit144("ngp_body_flex_factor");
static const V lit145("ngp_body_torsion_factor");
static const V lit146("ngp_body_bending_factor");
static const V lit147("ngp_body_damping_factor");
static const V lit148("ngp_load_front");
static const V lit149("ngp_front_bias");
static const V lit150("ngp_hub_weight_front");
static const V lit151("ngp_load_rear");
static const V lit152("ngp_rear_bias");
static const V lit153("ngp_hub_weight_rear");
static const V lit154("ngp_load_left");
static const V lit155("ngp_left_bias");
static const V lit156("ngp_hub_weight_left");
static const V lit157("ngp_load_right");
static const V lit158("ngp_right_bias");
static const V lit159("ngp_hub_weight_right");
static const V lit160("ngp_wheel_load_");
static const V lit161("ngp_load_wheel_");
static const V lit162("ngp_hub_load_");
static const V lit163("ngp_contact_load_");
static const V lit164("ngp_load_path_load_");
static const V lit165("ngp_dlt_load_");
static const V lit166("ngp_control_arm_camber_");
static const V lit167("ngp_ca_camber_");
static const V lit168("ngp_arm_camber_");
static const V lit169("ngp_arm_compliance_camber_");
static const V lit170("ngp_control_arm_toe_");
static const V lit171("ngp_ca_toe_");
static const V lit172("ngp_arm_toe_");
static const V lit173("ngp_arm_compliance_toe_");
static const V lit174("ngp_tire_hop_energy_");
static const V lit175("ngp_tire_hop_");
static const V lit176("ngp_tirehop_");
static const V lit177("ngp_hub_hop_");
static const V lit178("ngp_tire_force_road_input_");
static const V lit179("ngp_tf_road_input_");
static const V lit180("ngp_road_input_vertical_");
static const V lit181("ngp_rii_impact_");
static const V lit182("ngp_road_impact_");
static const V lit183("ngp_tire_force_combined_");
static const V lit184("ngp_tf_combined_");
static const V lit185("ngp_tire_force_lat_");
static const V lit186("ngp_tf_lat_");
static const V lit187("ngp_lat_");
static const V lit188("ngp_hub_force_lat_");
static const V lit189("ngp_tire_force_long_");
static const V lit190("ngp_tf_long_");
static const V lit191("ngp_long_");
static const V lit192("ngp_hub_force_long_");
static const V lit193("ngp_tire_force_combined_slip_");
static const V lit194("ngp_tdyn_combined_slip_");
static const V lit195("ngp_contact_combined_slip_");
static const V lit196("ngp_slip_recovery_slip_");
static const V lit197("ngp_tire_force_slip_energy_");
static const V lit198("ngp_tdyn_slip_energy_");
static const V lit199("ngp_slip_slide_memory_");
static const V lit200("ngp_rii_surface_limit_");
static const V lit201("ngp_rii_shock_");
static const V lit202("ngp_road_shock_");
static const V lit203("ngp_impact_wheel_");
static const V lit204("sqrt");
static const V lit205("ngp_load_path_loss_");
static const V lit206("ngp_lp_loss_");
static const V lit207("ngp_rii_path_loss_");
static const V lit208("steer");
static const V lit209("ngp_caster_aligning_torque");
static const V lit210("rad");
static const V lit211("ngp_damper_");
static const V lit212("ngp_damper_force_");
static const V lit213("ngp_damper_hyst_force_");
static const V lit214("ngp_damper_vertical_force_");
static const V lit215("ngp_progressive_spring_");
static const V lit216("ngp_spring_force_");
static const V lit217("ngp_damper_coeff_scale_");
static const V lit218("ngp_damper_hyst_coeff_");
static const V lit219("ngp_spring_rate_scale_");
static const V lit220("ngp_susp_contact_input_");
static const V lit221("ngp_sci_input_");
static const V lit222("ngp_contact_quality_input_");
static const V lit223("ngp_susp_road_impulse_");
static const V lit224("ngp_sci_impulse_");
static const V lit225("ngp_damper_vertical_pulse_");
static const V lit226("ngp_susp_contact_drop_");
static const V lit227("ngp_sci_drop_");
static const V lit228("ngp_contact_loss_");
static const V lit229("per_update_travel_v1");
static const V lit230("Invalid suspension travel publication contract");
static const V lit231("ngp_susp_travel_");
static const V lit232("ngp_susp_");
static const V lit233("ngp_susp_int_force_");
static const V lit234("ngp_susp_integrated_force_");
static const V lit235("ngp_susp_int_scale_");
static const V lit236("ngp_susp_integrated_scale_");
static const V lit237("ngp_camber_");
static const V lit238("ngp_toe_");
static const V lit239("ngp_caster_");
static const V lit240("ngp_su_force_");
static const V lit241("ngp_su_scale_");
static const V lit242("ngp_su_travel_");
static const V lit243("ngp_su_speed_");
static const V lit244("ngp_susp_speed_");
static const V lit245("ngp_susp_damper_");
static const V lit246("ngp_susp_spring_");
static const V lit247("ngp_susp_int_damper_");
static const V lit248("ngp_susp_int_spring_");
static const V lit249("ngp_susp_int_contact_");
static const V lit250("ngp_susp_int_impulse_");
static const V lit251("ngp_susp_int_drop_");
static const V lit252("ngp_susp_tire_road_input_");
static const V lit253("ngp_susp_tire_road_impulse_");
static const V lit254("ngp_susp_tire_combined_slip_");
static const V lit255("ngp_susp_tire_slip_energy_");
static const V lit256("ngp_susp_tire_force_mag_");
static const V lit257("ngp_susp_body_rigidity_scale_");
static const V lit258("ngp_susp_road_shock_");
static const V lit259("ngp_susp_load_path_loss_");
static const V lit260("ngp_roll_front");
static const V lit261("ngp_roll_rear");
static const V lit262("ngp_suspension_status");
static const V lit263("UNKNOWN");
static const V lit264("ngp_suspension_update_count");
static const V lit265("ngp_suspension_wheels_valid");
static const V lit266("ngp_su_status");
static const V lit267("ngp_su_update_count");
static const V lit268("ngp_su_avg_force");
static const V lit269("ngp_su_avg_abs_force");
static const V lit270("ngp_su_avg_scale");
static const V lit271("ngp_su_max_abs_force");
static const V lit272("ngp_caster_total");
static const V lit273("ngp_suspension_initialized");
static const V lit274("ngp_suspension_load_linked");
static const V lit275("ngp_suspension_arm_linked");
static const V lit276("ngp_suspension_control_arm_linked");
static const V lit277("ngp_suspension_hop_linked");
static const V lit278("ngp_suspension_tire_force_linked");
static const V lit279("ngp_suspension_external_linked");
static const V lit280("ngp_suspension_contact_linked");
static const V lit281("ngp_suspension_body_linked");
static const V lit282("ngp_suspension_road_input_linked");
static const V lit283("ngp_suspension_load_path_linked");
static const V lit284("ngp_susp_avg_tire_road_input");
static const V lit285("ngp_susp_avg_tire_slip_energy");
static const V lit286("ngp_susp_load_front");
static const V lit287("ngp_susp_load_rear");
static const V lit288("ngp_susp_load_left");
static const V lit289("ngp_susp_load_right");
static const V lit290("init");
static const V lit291("update");
static const V lit292("NO CAR");
static const V lit293("NO WHEELS");
static const V lit294("INITIALIZED");
static const V lit295("RUNNING");
static const V lit296("getForce");
static const V lit297("getTravel");
static const V lit298("getSpeed");
static const V lit299("getCamber");
static const V lit300("getToe");
static const V lit301("getCaster");
static const V lit302("getIntegratedScale");
static const V lit303("getState");
static const V lit304("debugStr");
static const V lit305("format");
static const V lit306("F %+.0f Scale %.2f Damp %+.0f Spring %+.0f Contact %.2f Imp %.2f Drop %.2f\n");
static const V lit307("Road %.2f RImp %.2f CSlip %.2f SE %.2f / Travel %.4f Speed %.4f Cam %.3f Toe %.3f");
static const V lit308("Status %s / Count %.0f / Wheels %s\n");
static const V lit309("Force FL:%+.0f FR:%+.0f RL:%+.0f RR:%+.0f / AvgAbs %.0f\n");
static const V lit310("Scale %.2f %.2f %.2f %.2f / Avg %.2f\n");
static const V lit311("Contact %.2f %.2f %.2f %.2f\n");
static const V lit312("Road %.2f %.2f %.2f %.2f / SE %.2f %.2f %.2f %.2f\n");
static const V lit313("Damp %.0f %.0f %.0f %.0f / Spring %.0f %.0f %.0f %.0f\n");
static const V lit314("ARB F:%+.0f R:%+.0f / Links LT:%s AC:%s Hop:%s TF:%s RBI:%s RII:%s LP:%s");
static const V lit315("OK");
static const V lit316("NIL");
V load_suspension(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(49);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=V(4.0);e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t4=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(600.0));set(z,lit5,V(1200.0));set(z,lit6,V(0.002));set(z,lit7,V(600.0));set(z,lit8,V(1200.0));set(z,lit9,V(900.0));set(z,lit10,V(0.15));set(z,lit11,V(250.0));set(z,lit12,V(3000.0));set(z,lit13,V(3000.0));set(z,lit14,V(0.08));set(z,lit15,V(80.0));set(z,lit16,V(120.0));set(z,lit17,V(0.0008));set(z,lit18,V(0.08));set(z,lit19,V(6.5));set(z,lit20,V(0.035));set(z,lit21,V(1.2));set(z,lit22,V(0.06));set(z,lit23,([&](){V z=table();set(z,V(0.0),V(35000.0));set(z,V(1.0),V(35000.0));set(z,V(2.0),V(45000.0));set(z,V(3.0),V(45000.0));return z;})());set(z,lit24,V(8000.0));set(z,lit25,V(0.15));set(z,lit26,V(120.0));set(z,lit27,V(0.055));set(z,lit28,V(0.032));set(z,lit29,V(0.12));set(z,lit30,V(0.1));set(z,lit31,V(0.1));set(z,lit32,V(0.08));set(z,lit33,V(0.06));set(z,lit34,V(0.045));set(z,lit35,V(0.82));set(z,lit36,V(1.22));set(z,lit37,V(0.14));set(z,lit38,V(0.08));set(z,lit39,V(0.08));set(z,lit40,V(0.06));set(z,lit41,V(72.0));set(z,lit42,V(2200.0));set(z,lit43,V(0.04));set(z,lit44,V(0.0));set(z,lit45,V(1.5));set(z,lit46,V(0.16));set(z,lit47,V(0.1));set(z,lit48,V(0.08));set(z,lit49,V(0.08));set(z,lit50,V(0.45));set(z,lit51,V(0.08));set(z,lit52,V(0.06));set(z,lit53,V(0.86));set(z,lit54,V(1.1));set(z,lit55,V(3000.0));set(z,lit56,V(0.18));set(z,lit57,V(5e-05));set(z,lit58,V(0.05));set(z,lit59,V(12.0));set(z,lit60,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})();e->slot(0,3)=std::move(t5);}
{V t6=V(false);e->slot(0,4)=std::move(t6);}
{V t7=([&](){V z=table();set(z,lit61,V(0.0));set(z,lit62,V(0.0));return z;})();e->slot(0,5)=std::move(t7);}
{V t8=([&](){V z=table();set(z,lit63,V(0.0));return z;})();e->slot(0,6)=std::move(t8);}
{V t9=([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})();e->slot(0,7)=std::move(t9);}
{V t10=([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})();e->slot(0,8)=std::move(t10);}
{V t11=([&](){V z=table();set(z,lit64,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,lit61,V(0.0));set(z,lit62,V(0.0));return z;})());set(z,lit72,V(0.0));set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,V(0.5));set(z,lit75,V(0.5));set(z,lit76,V(0.5));set(z,lit77,V(0.5));set(z,lit78,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit79,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit80,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit81,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit82,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit83,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit84,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit85,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit86,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit87,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit88,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit89,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit90,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit91,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit92,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit93,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit94,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit95,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit96,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit97,V(1.0));set(z,lit98,V(1.0));set(z,lit99,V(1.0));set(z,lit100,V(1.0));set(z,lit101,V(1.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(1.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(false));set(z,lit109,V(false));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(false));set(z,lit113,V(false));set(z,lit114,V(false));set(z,lit115,V(false));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,lit119);set(z,lit120,V(0.0));set(z,lit121,V(999.0));set(z,lit122,V(true));set(z,lit123,V(999.0));return z;})();e->slot(0,9)=std::move(t11);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t12=e->slot(0,9);refs[0].put(std::move(t12));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t13=e->slot(0,9);refs[0].put(std::move(t13));}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(([&](){V t15=([&](){V t16=([&](){V t17=eq(e->slot(0,2),V());return !truth(t17)?ne(e->slot(0,2),e->slot(0,2)):t17;})();return !truth(t16)?eq(e->slot(0,2),get(e->get("math"),lit126)):t16;})();return !truth(t15)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit126)))):t15;})())){return Args{([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t19=first(call(e->slot(1,10),Args{e->slot(0,0),([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()}));refs[0].put(std::move(t19));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit127),call(e->slot(1,10),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t21=first(call(e->slot(1,10),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t22=first(call(e->slot(1,10),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t23=first(call(e->slot(1,10),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t24=first(call(e->slot(1,10),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t24));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,11),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit128),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
{V t25=get(e->slot(0,0),lit129);e->slot(0,14)=std::move(t25);}
{V t26=get(e->slot(0,0),lit130);e->slot(0,15)=std::move(t26);}
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t27=first(call(e->slot(1,15),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t27);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t28=e->slot(0,1);return !truth(t28)?V(0.0):t28;})()};
}
return call(e->slot(1,10),Args{e->slot(0,2),([&](){V t29=e->slot(0,1);return !truth(t29)?V(0.0):t29;})()});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t30=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t30);}
{double t31=num(V(1.0)),t32=num(length(e->slot(0,1))),t33=num(V(1.0));for(double t34=t31;(t33>0?t34<=t32:t34>=t32);t34+=t33){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t34);{V t35=first(call(e->slot(2,15),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t35);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,10),Args{e->slot(0,1),([&](){V t36=e->slot(1,0);return !truth(t36)?V(0.0):t36;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
if(truth(eq(e->slot(0,0),V()))){return Args{V(),V()};
}
return Args{e->slot(0,0),V()};
return Args{};});
{V t37=get(e->slot(0,0),lit131);e->slot(0,18)=std::move(t37);}
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t38=V(!truth(e->get("ac")));return !truth(t38)?V(!truth(get(e->get("ac"),lit132))):t38;})())){return Args{V()};
}
{Args t39=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit132),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t39,0);e->slot(0,1)=arg(t39,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,18),Args{e->slot(0,0),lit133,V()});
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t40=first(call(e->slot(1,20),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t40);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t41=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t41,0);e->slot(0,4)=arg(t41,1);}
if(truth(([&](){V t42=e->slot(0,3);return truth(t42)?e->slot(0,4):t42;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t43=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t43,0));refs[1].put(arg(t43,1));}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,9),lit121)};V t44=add(([&](){V t45=get(e->slot(1,9),lit121);return !truth(t45)?V(0.0):t45;})(),([&](){V t46=e->slot(0,0);return !truth(t46)?V(0.0):t46;})());refs[0].put(std::move(t44));}
if(truth(ge(get(e->slot(1,9),lit121),([&](){V t47=get(get(e->slot(1,1),lit1),lit60);return !truth(t47)?V(0.25):t47;})()))){{std::array<Ref,1> refs{Ref(e->slot(1,9),lit121)};V t48=V(0.0);refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit122)};V t49=V(true);refs[0].put(std::move(t49));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,9),lit122)};V t50=V(false);refs[0].put(std::move(t50));}
}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t51=([&](){V z=table();set(z,V(1.0),lit134);set(z,V(2.0),lit135);set(z,V(3.0),lit136);set(z,V(4.0),lit137);set(z,V(5.0),lit138);set(z,V(6.0),lit139);return z;})();e->slot(0,0)=std::move(t51);}
{double t52=num(V(1.0)),t53=num(length(e->slot(0,0))),t54=num(V(1.0));for(double t55=t52;(t54>0?t55<=t53:t55>=t53);t55+=t54){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t55);{V t56=first(call(e->slot(3,18),Args{e->slot(2,0),get(e->slot(1,0),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t56);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(3,10),Args{e->slot(0,1),([&](){V t57=e->slot(2,1);return !truth(t57)?V(0.0):t57;})()});
}
}}
}
return Args{([&](){V t58=e->slot(0,1);return !truth(t58)?V(0.0):t58;})()};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t59=first(call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,2)=std::move(t59);}
{V t60=first(call(e->slot(1,23),Args{e->slot(0,2),V()}));e->slot(0,3)=std::move(t60);}
if(truth(ne(e->slot(0,3),V()))){return Args{e->slot(0,3)};
}
if(truth(([&](){V t61=e->get("physics");return truth(t61)?get(e->get("physics"),lit140):t61;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t62=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("physics"),lit140),Args{V(0.0),e->slot(2,1)});
return Args{};})});e->slot(0,0)=arg(t62,0);e->slot(0,1)=arg(t62,1);}
if(truth(([&](){V t63=e->slot(0,0);return truth(t63)?eq(first(call(e->get("type"),Args{e->slot(0,1)})),lit141):t63;})())){return Args{e->slot(0,1)};
}
}
return Args{([&](){V t64=get(e->slot(1,3),e->slot(0,1));return !truth(t64)?V(0.0):t64;})()};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t65=num(V(0.0)),t66=num(V(3.0)),t67=num(V(1.0));for(double t68=t65;(t67>0?t68<=t66:t68>=t66);t68+=t67){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t68);{std::array<Ref,1> refs{Ref(e->slot(2,3),e->slot(0,0))};V t69=first(call(e->slot(2,24),Args{e->slot(1,0),e->slot(0,0)}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit64),e->slot(0,0))};V t70=get(e->slot(2,3),e->slot(0,0));refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit65),e->slot(0,0))};V t71=V(0.0);refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit95),e->slot(0,0))};V t72=([&](){V t73=get(get(e->slot(2,9),lit63),e->slot(0,0));return !truth(t73)?V(0.0):t73;})();refs[0].put(std::move(t72));}
}}
{std::array<Ref,1> refs{Ref(e,1,4)};V t74=V(true);refs[0].put(std::move(t74));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,9),lit123)};V t75=add(([&](){V t76=get(e->slot(1,9),lit123);return !truth(t76)?V(999.0):t76;})(),([&](){V t77=e->slot(0,0);return !truth(t77)?V(0.0):t77;})());refs[0].put(std::move(t75));}
if(truth(([&](){V t78=get(e->slot(1,9),lit114);return truth(t78)?lt(get(e->slot(1,9),lit123),V(0.25)):t78;})())){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit123)};V t79=V(0.0);refs[0].put(std::move(t79));}
{V t80=first(call(e->slot(1,15),Args{lit142}));e->slot(0,1)=std::move(t80);}
{V t81=first(call(e->slot(1,15),Args{lit143}));e->slot(0,2)=std::move(t81);}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit114)};V t82=([&](){V t83=ne(e->slot(0,1),V());return !truth(t83)?gt(first(call(e->slot(1,10),Args{e->slot(0,2),V(0.0)})),V(0.0)):t83;})();refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit97)};V t84=first(call(e->slot(1,11),Args{first(call(e->slot(1,10),Args{e->slot(0,1),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit98)};V t85=first(call(e->slot(1,11),Args{first(call(e->slot(1,16),Args{lit144,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit99)};V t86=first(call(e->slot(1,11),Args{first(call(e->slot(1,16),Args{lit145,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit100)};V t87=first(call(e->slot(1,11),Args{first(call(e->slot(1,16),Args{lit146,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit101)};V t88=first(call(e->slot(1,11),Args{first(call(e->slot(1,16),Args{lit147,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t88));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;{Args t89=call(e->slot(1,17),Args{V(0.5),lit148,lit149,lit150});e->slot(0,0)=arg(t89,0);e->slot(0,1)=arg(t89,1);}
{Args t90=call(e->slot(1,17),Args{V(0.5),lit151,lit152,lit153});e->slot(0,2)=arg(t90,0);e->slot(0,3)=arg(t90,1);}
{Args t91=call(e->slot(1,17),Args{V(0.5),lit154,lit155,lit156});e->slot(0,4)=arg(t91,0);e->slot(0,5)=arg(t91,1);}
{Args t92=call(e->slot(1,17),Args{V(0.5),lit157,lit158,lit159});e->slot(0,6)=arg(t92,0);e->slot(0,7)=arg(t92,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit74)};V t93=first(call(e->slot(1,11),Args{e->slot(0,0),V(0.0),V(1.0)}));refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit75)};V t94=first(call(e->slot(1,11),Args{e->slot(0,2),V(0.0),V(1.0)}));refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit76)};V t95=first(call(e->slot(1,11),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit77)};V t96=first(call(e->slot(1,11),Args{e->slot(0,6),V(0.0),V(1.0)}));refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit108)};V t97=([&](){V t98=([&](){V t99=([&](){V t100=ne(e->slot(0,1),V());return !truth(t100)?ne(e->slot(0,3),V()):t100;})();return !truth(t99)?ne(e->slot(0,5),V()):t99;})();return !truth(t98)?ne(e->slot(0,7),V()):t98;})();refs[0].put(std::move(t97));}
{double t101=num(V(0.0)),t102=num(V(3.0)),t103=num(V(1.0));for(double t104=t101;(t103>0?t104<=t102:t104>=t102);t104+=t103){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t104);{Args t105=call(e->slot(2,17),Args{V(),concat(lit160,e->slot(0,0)),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0)),concat(lit163,e->slot(0,0)),concat(lit164,e->slot(0,0))});e->slot(0,1)=arg(t105,0);e->slot(0,2)=arg(t105,1);}
if(truth(eq(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t106=first(call(e->slot(3,15),Args{concat(lit165,e->slot(1,0))}));e->slot(0,0)=std::move(t106);}
if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t107=first(call(e->slot(4,10),Args{e->slot(1,0),V(0.0)}));e->slot(0,0)=std::move(t107);}
if(truth(lt(first(call(get(e->get("math"),lit127),Args{e->slot(0,0)})),V(1800.0)))){{std::array<Ref,1> refs{Ref(e,2,1)};V t108=add(get(get(e->slot(4,1),lit1),lit55),e->slot(0,0));refs[0].put(std::move(t108));}
}else{{std::array<Ref,1> refs{Ref(e,2,1)};V t109=e->slot(0,0);refs[0].put(std::move(t109));}
}
{std::array<Ref,1> refs{Ref(e,2,2)};V t110=concat(lit165,e->slot(2,0));refs[0].put(std::move(t110));}
}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,9),lit108)};V t111=V(true);refs[0].put(std::move(t111));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit73),e->slot(0,0))};V t112=first(call(e->slot(2,11),Args{first(call(e->slot(2,10),Args{e->slot(0,1),get(get(e->slot(2,1),lit1),lit55)})),V(0.0),V(12000.0)}));refs[0].put(std::move(t112));}
}}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t113=V(false);e->slot(0,0)=std::move(t113);}
{double t114=num(V(0.0)),t115=num(V(3.0)),t116=num(V(1.0));for(double t117=t114;(t116>0?t117<=t115:t117>=t115);t117+=t116){auto parent=e;Env storage(parent,false,5);auto e=&storage;e->slot(0,0)=V(t117);{Args t118=call(e->slot(2,17),Args{V(0.0),concat(lit166,e->slot(0,0)),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0)),concat(lit169,e->slot(0,0))});e->slot(0,1)=arg(t118,0);e->slot(0,2)=arg(t118,1);}
{Args t119=call(e->slot(2,17),Args{V(0.0),concat(lit170,e->slot(0,0)),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0)),concat(lit173,e->slot(0,0))});e->slot(0,3)=arg(t119,0);e->slot(0,4)=arg(t119,1);}
if(truth(([&](){V t120=e->slot(0,2);return !truth(t120)?e->slot(0,4):t120;})())){{std::array<Ref,1> refs{Ref(e,1,0)};V t121=V(true);refs[0].put(std::move(t121));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit78),e->slot(0,0))};V t122=e->slot(0,1);refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit79),e->slot(0,0))};V t123=e->slot(0,3);refs[0].put(std::move(t123));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit109)};V t124=e->slot(0,0);refs[0].put(std::move(t124));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t125=V(false);e->slot(0,0)=std::move(t125);}
{double t126=num(V(0.0)),t127=num(V(3.0)),t128=num(V(1.0));for(double t129=t126;(t128>0?t129<=t127:t129>=t127);t129+=t128){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t129);{Args t130=call(e->slot(2,17),Args{V(0.0),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0))});e->slot(0,1)=arg(t130,0);e->slot(0,2)=arg(t130,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e,1,0)};V t131=V(true);refs[0].put(std::move(t131));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit80),e->slot(0,0))};V t132=first(call(e->slot(2,11),Args{e->slot(0,1),V(0.0),V(1.2)}));refs[0].put(std::move(t132));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit110)};V t133=e->slot(0,0);refs[0].put(std::move(t133));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t134=V(false);e->slot(0,1)=std::move(t134);}
{V t135=V(0.0);e->slot(0,2)=std::move(t135);}
{V t136=V(0.0);e->slot(0,3)=std::move(t136);}
{double t137=num(V(0.0)),t138=num(V(3.0)),t139=num(V(1.0));for(double t140=t137;(t139>0?t140<=t138:t140>=t138);t140+=t139){auto parent=e;Env storage(parent,false,20);auto e=&storage;e->slot(0,0)=V(t140);{Args t141=call(e->slot(2,17),Args{V(),concat(lit178,e->slot(0,0)),concat(lit179,e->slot(0,0)),concat(lit180,e->slot(0,0)),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0))});e->slot(0,1)=arg(t141,0);e->slot(0,2)=arg(t141,1);}
{Args t142=call(e->slot(2,17),Args{V(),concat(lit183,e->slot(0,0)),concat(lit184,e->slot(0,0))});e->slot(0,3)=arg(t142,0);e->slot(0,4)=arg(t142,1);}
{Args t143=call(e->slot(2,17),Args{V(),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0)),concat(lit188,e->slot(0,0))});e->slot(0,5)=arg(t143,0);e->slot(0,6)=arg(t143,1);}
{Args t144=call(e->slot(2,17),Args{V(),concat(lit189,e->slot(0,0)),concat(lit190,e->slot(0,0)),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0))});e->slot(0,7)=arg(t144,0);e->slot(0,8)=arg(t144,1);}
{Args t145=call(e->slot(2,17),Args{V(0.0),concat(lit193,e->slot(0,0)),concat(lit194,e->slot(0,0)),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0))});e->slot(0,9)=arg(t145,0);e->slot(0,10)=arg(t145,1);}
{Args t146=call(e->slot(2,17),Args{V(0.0),concat(lit197,e->slot(0,0)),concat(lit198,e->slot(0,0)),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0))});e->slot(0,11)=arg(t146,0);e->slot(0,12)=arg(t146,1);}
{Args t147=call(e->slot(2,17),Args{V(0.0),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0)),concat(lit203,e->slot(0,0))});e->slot(0,13)=arg(t147,0);e->slot(0,14)=arg(t147,1);}
if(truth(([&](){V t148=([&](){V t149=([&](){V t150=([&](){V t151=([&](){V t152=([&](){V t153=e->slot(0,2);return !truth(t153)?e->slot(0,4):t153;})();return !truth(t152)?e->slot(0,6):t152;})();return !truth(t151)?e->slot(0,8):t151;})();return !truth(t150)?e->slot(0,10):t150;})();return !truth(t149)?e->slot(0,12):t149;})();return !truth(t148)?e->slot(0,14):t148;})())){{std::array<Ref,1> refs{Ref(e,1,1)};V t154=V(true);refs[0].put(std::move(t154));}
}
{std::array<Ref,1> refs{Ref(e,0,5)};V t155=first(call(e->slot(2,10),Args{e->slot(0,5),V(0.0)}));refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e,0,7)};V t156=first(call(e->slot(2,10),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t156));}
{V t157=first(call(get(e->get("math"),lit204),Args{add(mul(e->slot(0,5),e->slot(0,5)),mul(e->slot(0,7),e->slot(0,7)))}));e->slot(0,15)=std::move(t157);}
{V t158=first(call(e->slot(2,10),Args{e->slot(0,3),e->slot(0,15)}));e->slot(0,16)=std::move(t158);}
{V t159=divv(e->slot(0,16),first(call(get(e->get("math"),lit128),Args{get(get(e->slot(2,1),lit1),lit42),V(1.0)})));e->slot(0,17)=std::move(t159);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t160=first(call(e->slot(2,11),Args{add(first(call(e->slot(2,10),Args{e->slot(0,1),e->slot(0,17)})),mul(e->slot(0,13),V(0.16))),get(get(e->slot(2,1),lit1),lit44),get(get(e->slot(2,1),lit1),lit45)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e,0,9)};V t161=first(call(e->slot(2,11),Args{e->slot(0,9),V(0.0),V(2.5)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e,0,11)};V t162=first(call(e->slot(2,11),Args{e->slot(0,11),V(0.0),V(1.2)}));refs[0].put(std::move(t162));}
{V t163=([&](){V t164=get(get(e->slot(2,9),lit86),e->slot(0,0));return !truth(t164)?V(0.0):t164;})();e->slot(0,18)=std::move(t163);}
{V t165=first(call(e->slot(2,13),Args{e->slot(0,18),e->slot(0,1),get(get(e->slot(2,1),lit1),lit43),e->slot(1,0)}));e->slot(0,19)=std::move(t165);}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit87),e->slot(0,0))};V t166=first(call(e->slot(2,11),Args{first(call(e->slot(2,12),Args{sub(e->slot(0,1),e->slot(0,18))})),V(0.0),V(1.0)}));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit86),e->slot(0,0))};V t167=e->slot(0,19);refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit88),e->slot(0,0))};V t168=e->slot(0,9);refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit89),e->slot(0,0))};V t169=e->slot(0,11);refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit90),e->slot(0,0))};V t170=e->slot(0,16);refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit92),e->slot(0,0))};V t171=e->slot(0,13);refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t172=add(e->slot(1,2),e->slot(0,19));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t173=add(e->slot(1,3),e->slot(0,11));refs[0].put(std::move(t173));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit113)};V t174=e->slot(0,1);refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit105)};V t175=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit106)};V t176=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t176));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t177=V(false);e->slot(0,0)=std::move(t177);}
{V t178=V(false);e->slot(0,1)=std::move(t178);}
{double t179=num(V(0.0)),t180=num(V(3.0)),t181=num(V(1.0));for(double t182=t179;(t181>0?t182<=t180:t182>=t180);t182+=t181){auto parent=e;Env storage(parent,false,7);auto e=&storage;e->slot(0,0)=V(t182);{Args t183=call(e->slot(2,17),Args{V(0.0),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0))});e->slot(0,1)=arg(t183,0);e->slot(0,2)=arg(t183,1);}
{Args t184=call(e->slot(2,17),Args{V(0.0),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0))});e->slot(0,3)=arg(t184,0);e->slot(0,4)=arg(t184,1);}
{Args t185=call(e->slot(2,17),Args{V(0.0),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0)),concat(lit207,e->slot(0,0))});e->slot(0,5)=arg(t185,0);e->slot(0,6)=arg(t185,1);}
if(truth(([&](){V t186=e->slot(0,2);return !truth(t186)?e->slot(0,4):t186;})())){{std::array<Ref,1> refs{Ref(e,1,0)};V t187=V(true);refs[0].put(std::move(t187));}
}
if(truth(e->slot(0,6))){{std::array<Ref,1> refs{Ref(e,1,1)};V t188=V(true);refs[0].put(std::move(t188));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit91),e->slot(0,0))};V t189=first(call(e->slot(2,11),Args{e->slot(0,1),V(0.0),V(1.2)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit92),e->slot(0,0))};V t190=first(call(get(e->get("math"),lit128),joined(Args{([&](){V t191=get(get(e->slot(2,9),lit92),e->slot(0,0));return !truth(t191)?V(0.0):t191;})()},call(e->slot(2,11),Args{e->slot(0,3),V(0.0),V(1.2)}))));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit93),e->slot(0,0))};V t192=first(call(e->slot(2,11),Args{e->slot(0,5),V(0.0),V(1.2)}));refs[0].put(std::move(t192));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit115)};V t193=e->slot(0,0);refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit116)};V t194=e->slot(0,1);refs[0].put(std::move(t194));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,27),Args{});
call(e->slot(1,28),Args{});
call(e->slot(1,29),Args{});
call(e->slot(1,30),Args{e->slot(0,0)});
call(e->slot(1,31),Args{});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t195=first(call(e->slot(1,12),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t195);}
if(truth(lt(e->slot(0,1),get(get(e->slot(1,1),lit1),lit6)))){return Args{V(0.0)};
}
if(truth(gt(e->slot(0,0),V(0.0)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t196=([&](){V t197=([&](){V t198=lt(e->slot(1,1),get(get(e->slot(2,1),lit1),lit10));return truth(t198)?get(get(e->slot(2,1),lit1),lit7):t198;})();return !truth(t197)?get(get(e->slot(2,1),lit1),lit8):t197;})();e->slot(0,0)=std::move(t196);}
return Args{mul(V(-num(e->slot(1,0))),e->slot(0,0))};
}
return Args{mul(V(-num(e->slot(0,0))),get(get(e->slot(1,1),lit1),lit9))};
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t199=([&](){V t200=get(get(get(e->slot(1,1),lit1),lit23),e->slot(0,0));return !truth(t200)?V(35000.0):t200;})();e->slot(0,2)=std::move(t199);}
return call(e->slot(1,11),Args{mul(V(-num(e->slot(0,1))),e->slot(0,2)),V(-num(get(get(e->slot(1,1),lit1),lit24))),get(get(e->slot(1,1),lit1),lit24)});
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);return Args{add(e->slot(0,1),mul(([&](){V t201=get(get(e->slot(1,9),lit80),e->slot(0,0));return !truth(t201)?V(0.0):t201;})(),get(get(e->slot(1,1),lit1),lit25)))};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t202=V(0.0);e->slot(0,2)=std::move(t202);}
if(truth(lt(e->slot(0,0),V(2.0)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t203=sub(first(call(e->slot(1,10),Args{get(e->slot(1,9),lit74),V(0.5)})),V(0.5));refs[0].put(std::move(t203));}
}else{{std::array<Ref,1> refs{Ref(e,0,2)};V t204=sub(first(call(e->slot(1,10),Args{get(e->slot(1,9),lit75),V(0.5)})),V(0.5));refs[0].put(std::move(t204));}
}
return Args{sub(e->slot(0,1),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit26)))};
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t205=e->slot(1,8);e->slot(0,2)=std::move(t205);}
{double t206=num(V(0.0)),t207=num(V(3.0)),t208=num(V(1.0));for(double t209=t206;(t208>0?t209<=t207:t209>=t207);t209+=t208){auto parent=e;Env storage(parent,false,5);auto e=&storage;e->slot(0,0)=V(t209);{V t210=divv(sub(get(e->slot(1,0),e->slot(0,0)),([&](){V t211=get(e->slot(2,3),e->slot(0,0));return !truth(t211)?get(e->slot(1,0),e->slot(0,0)):t211;})()),first(call(get(e->get("math"),lit128),Args{e->slot(1,1),V(0.001)})));e->slot(0,1)=std::move(t210);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t212=first(call(e->slot(2,11),Args{e->slot(0,1),V(-num(get(get(e->slot(2,1),lit1),lit59))),get(get(e->slot(2,1),lit1),lit59)}));refs[0].put(std::move(t212));}
{V t213=first(call(e->slot(2,33),Args{e->slot(0,1)}));e->slot(0,2)=std::move(t213);}
{V t214=first(call(e->slot(2,34),Args{e->slot(0,0),get(e->slot(1,0),e->slot(0,0))}));e->slot(0,3)=std::move(t214);}
{V t215=add(e->slot(0,2),e->slot(0,3));e->slot(0,4)=std::move(t215);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t216=first(call(e->slot(2,35),Args{e->slot(0,0),e->slot(0,4)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t217=first(call(e->slot(2,36),Args{e->slot(0,0),e->slot(0,4)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t218=first(call(e->slot(2,11),Args{e->slot(0,4),V(-num(get(get(e->slot(2,1),lit1),lit5))),get(get(e->slot(2,1),lit1),lit5)}));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit64),e->slot(0,0))};V t219=get(e->slot(1,0),e->slot(0,0));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit65),e->slot(0,0))};V t220=e->slot(0,1);refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit66),e->slot(0,0))};V t221=e->slot(0,2);refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit67),e->slot(0,0))};V t222=e->slot(0,3);refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit63),e->slot(0,0))};V t223=e->slot(0,4);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),e->slot(0,0))};V t224=e->slot(0,4);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),e->slot(0,0))};V t225=get(e->slot(1,0),e->slot(0,0));refs[0].put(std::move(t225));}
}}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t226=sub(([&](){V t227=get(e->slot(0,0),V(0.0));return !truth(t227)?V(0.0):t227;})(),([&](){V t228=get(e->slot(0,0),V(1.0));return !truth(t228)?V(0.0):t228;})());e->slot(0,3)=std::move(t226);}
{V t229=sub(([&](){V t230=get(e->slot(0,0),V(2.0));return !truth(t230)?V(0.0):t230;})(),([&](){V t231=get(e->slot(0,0),V(3.0));return !truth(t231)?V(0.0):t231;})());e->slot(0,4)=std::move(t229);}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit61)};V t232=first(call(e->slot(1,13),Args{get(e->slot(1,5),lit61),e->slot(0,3),get(get(e->slot(1,1),lit1),lit14),e->slot(0,2)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit62)};V t233=first(call(e->slot(1,13),Args{get(e->slot(1,5),lit62),e->slot(0,4),get(get(e->slot(1,1),lit1),lit14),e->slot(0,2)}));refs[0].put(std::move(t233));}
{V t234=mul(get(e->slot(1,5),lit61),get(get(e->slot(1,1),lit1),lit12));e->slot(0,5)=std::move(t234);}
{V t235=mul(get(e->slot(1,5),lit62),get(get(e->slot(1,1),lit1),lit13));e->slot(0,6)=std::move(t235);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit71),lit61)};V t236=e->slot(0,5);refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit71),lit62)};V t237=e->slot(0,6);refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),V(0.0))};V t238=sub(([&](){V t239=get(e->slot(0,1),V(0.0));return !truth(t239)?V(0.0):t239;})(),e->slot(0,5));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),V(1.0))};V t240=add(([&](){V t241=get(e->slot(0,1),V(1.0));return !truth(t241)?V(0.0):t241;})(),e->slot(0,5));refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),V(2.0))};V t242=sub(([&](){V t243=get(e->slot(0,1),V(2.0));return !truth(t243)?V(0.0):t243;})(),e->slot(0,6));refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),V(3.0))};V t244=add(([&](){V t245=get(e->slot(0,1),V(3.0));return !truth(t245)?V(0.0):t245;})(),e->slot(0,6));refs[0].put(std::move(t244));}
return Args{e->slot(0,5),e->slot(0,6)};
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t246=first(call(e->slot(1,10),Args{first(call(e->slot(1,18),Args{e->slot(0,0),lit208,V(0.0)})),V(0.0)}));e->slot(0,2)=std::move(t246);}
{V t247=mul(first(call(e->slot(1,16),Args{lit209,V(0.0)})),V(0.001));e->slot(0,3)=std::move(t247);}
{V t248=add(mul(mul(first(call(get(e->get("math"),lit210),Args{get(get(e->slot(1,1),lit1),lit19)})),e->slot(0,2)),get(get(e->slot(1,1),lit1),lit20)),e->slot(0,3));e->slot(0,4)=std::move(t248);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit63)};V t249=first(call(e->slot(1,13),Args{get(e->slot(1,6),lit63),e->slot(0,4),get(get(e->slot(1,1),lit1),lit22),e->slot(0,1)}));refs[0].put(std::move(t249));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit72)};V t250=get(e->slot(1,6),lit63);refs[0].put(std::move(t250));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t251=add(mul(mul(V(-num(e->slot(0,1))),V(0.01)),get(get(e->slot(1,1),lit1),lit15)),([&](){V t252=get(get(e->slot(1,9),lit78),e->slot(0,0));return !truth(t252)?V(0.0):t252;})());e->slot(0,2)=std::move(t251);}
{V t253=add(mul(mul(e->slot(0,1),V(0.005)),get(get(e->slot(1,1),lit1),lit16)),([&](){V t254=get(get(e->slot(1,9),lit79),e->slot(0,0));return !truth(t254)?V(0.0):t254;})());e->slot(0,3)=std::move(t253);}
{V t255=([&](){V t256=([&](){V t257=lt(e->slot(0,0),V(2.0));return truth(t257)?mul(get(e->slot(1,6),lit63),get(get(e->slot(1,1),lit1),lit21)):t257;})();return !truth(t256)?V(0.0):t256;})();e->slot(0,4)=std::move(t255);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit68),e->slot(0,0))};V t258=e->slot(0,2);refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit69),e->slot(0,0))};V t259=e->slot(0,3);refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit70),e->slot(0,0))};V t260=e->slot(0,4);refs[0].put(std::move(t260));}
return Args{e->slot(0,2),e->slot(0,3),e->slot(0,4)};
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,28);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t261=get(e->slot(1,1),lit1);e->slot(0,3)=std::move(t261);}
{Args t262=call(e->slot(1,17),Args{V(0.0),concat(lit211,e->slot(0,0)),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit214,e->slot(0,0))});e->slot(0,4)=arg(t262,0);e->slot(0,5)=arg(t262,1);}
{Args t263=call(e->slot(1,17),Args{V(0.0),concat(lit215,e->slot(0,0)),concat(lit216,e->slot(0,0))});e->slot(0,6)=arg(t263,0);e->slot(0,7)=arg(t263,1);}
{V t264=first(call(e->slot(1,17),Args{V(1.0),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0))}));e->slot(0,8)=std::move(t264);}
{V t265=first(call(e->slot(1,17),Args{V(1.0),concat(lit219,e->slot(0,0))}));e->slot(0,9)=std::move(t265);}
{Args t266=call(e->slot(1,17),Args{V(0.0),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0))});e->slot(0,10)=arg(t266,0);e->slot(0,11)=arg(t266,1);}
{Args t267=call(e->slot(1,17),Args{V(0.0),concat(lit223,e->slot(0,0)),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0)),concat(lit203,e->slot(0,0))});e->slot(0,12)=arg(t267,0);e->slot(0,13)=arg(t267,1);}
{Args t268=call(e->slot(1,17),Args{V(0.0),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0)),concat(lit228,e->slot(0,0))});e->slot(0,14)=arg(t268,0);e->slot(0,15)=arg(t268,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit111)};V t269=([&](){V t270=ne(e->slot(0,5),V());return !truth(t270)?ne(e->slot(0,7),V()):t270;})();refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit112)};V t271=([&](){V t272=([&](){V t273=ne(e->slot(0,11),V());return !truth(t273)?ne(e->slot(0,13),V()):t273;})();return !truth(t272)?ne(e->slot(0,15),V()):t272;})();refs[0].put(std::move(t271));}
{V t274=first(call(e->slot(1,11),Args{([&](){V t275=get(get(e->slot(1,9),lit86),e->slot(0,0));return !truth(t275)?V(0.0):t275;})(),get(e->slot(0,3),lit44),get(e->slot(0,3),lit45)}));e->slot(0,16)=std::move(t274);}
{V t276=first(call(e->slot(1,11),Args{([&](){V t277=get(get(e->slot(1,9),lit87),e->slot(0,0));return !truth(t277)?V(0.0):t277;})(),V(0.0),V(1.0)}));e->slot(0,17)=std::move(t276);}
{V t278=first(call(e->slot(1,11),Args{([&](){V t279=get(get(e->slot(1,9),lit88),e->slot(0,0));return !truth(t279)?V(0.0):t279;})(),V(0.0),V(2.5)}));e->slot(0,18)=std::move(t278);}
{V t280=first(call(e->slot(1,11),Args{([&](){V t281=get(get(e->slot(1,9),lit89),e->slot(0,0));return !truth(t281)?V(0.0):t281;})(),V(0.0),V(1.2)}));e->slot(0,19)=std::move(t280);}
{V t282=first(call(e->slot(1,11),Args{([&](){V t283=get(get(e->slot(1,9),lit92),e->slot(0,0));return !truth(t283)?V(0.0):t283;})(),V(0.0),V(1.2)}));e->slot(0,20)=std::move(t282);}
{V t284=first(call(e->slot(1,11),Args{([&](){V t285=get(get(e->slot(1,9),lit93),e->slot(0,0));return !truth(t285)?V(0.0):t285;})(),V(0.0),V(1.2)}));e->slot(0,21)=std::move(t284);}
{std::array<Ref,1> refs{Ref(e,0,10)};V t286=first(call(e->slot(1,11),Args{add(add(e->slot(0,10),mul(e->slot(0,16),get(e->slot(0,3),lit37))),mul(e->slot(0,20),V(0.08))),V(0.0),V(1.5)}));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(e,0,12)};V t287=first(call(e->slot(1,11),Args{add(add(add(e->slot(0,12),mul(e->slot(0,17),get(e->slot(0,3),lit38))),mul(e->slot(0,19),V(0.04))),mul(e->slot(0,20),V(0.05))),V(0.0),V(1.5)}));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e,0,14)};V t288=first(call(e->slot(1,11),Args{add(e->slot(0,14),mul(e->slot(0,21),V(0.08))),V(0.0),V(1.0)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(e,0,8)};V t289=first(call(e->slot(1,11),Args{e->slot(0,8),V(0.5),V(1.6)}));refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(e,0,9)};V t290=first(call(e->slot(1,11),Args{e->slot(0,9),V(0.5),V(1.6)}));refs[0].put(std::move(t290));}
{V t291=mul(e->slot(0,16),get(e->slot(0,3),lit41));e->slot(0,22)=std::move(t291);}
{V t292=add(add(mul(e->slot(0,4),get(e->slot(0,3),lit27)),mul(e->slot(0,6),get(e->slot(0,3),lit28))),e->slot(0,22));e->slot(0,23)=std::move(t292);}
{V t293=first(call(get(e->get("math"),lit128),Args{sub(e->slot(0,18),V(1.0)),V(0.0)}));e->slot(0,24)=std::move(t293);}
{V t294=add(add(sub(sub(add(add(add(sub(add(add(V(1.0),mul(e->slot(0,10),get(e->slot(0,3),lit29))),mul(e->slot(0,12),get(e->slot(0,3),lit30))),mul(e->slot(0,14),get(e->slot(0,3),lit31))),mul(e->slot(0,16),get(e->slot(0,3),lit37))),mul(e->slot(0,17),get(e->slot(0,3),lit38))),mul(e->slot(0,24),get(e->slot(0,3),lit40))),mul(e->slot(0,19),get(e->slot(0,3),lit39))),mul(e->slot(0,21),V(0.04))),mul(sub(e->slot(0,8),V(1.0)),get(e->slot(0,3),lit32))),mul(sub(e->slot(0,9),V(1.0)),get(e->slot(0,3),lit33)));e->slot(0,25)=std::move(t294);}
{std::array<Ref,1> refs{Ref(e,0,25)};V t295=first(call(e->slot(1,11),Args{e->slot(0,25),get(e->slot(0,3),lit35),get(e->slot(0,3),lit36)}));refs[0].put(std::move(t295));}
{V t296=first(call(e->slot(1,11),Args{mul(add(e->slot(0,1),e->slot(0,23)),e->slot(0,25)),V(-num(get(e->slot(0,3),lit5))),get(e->slot(0,3),lit5)}));e->slot(0,26)=std::move(t296);}
{V t297=first(call(e->slot(1,13),Args{([&](){V t298=get(get(e->slot(1,9),lit95),e->slot(0,0));return !truth(t298)?e->slot(0,1):t298;})(),e->slot(0,26),get(e->slot(0,3),lit34),e->slot(0,2)}));e->slot(0,27)=std::move(t297);}
{std::array<Ref,1> refs{Ref(e,0,27)};V t299=first(call(e->slot(1,11),Args{e->slot(0,27),V(-num(get(e->slot(0,3),lit5))),get(e->slot(0,3),lit5)}));refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit81),e->slot(0,0))};V t300=e->slot(0,4);refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit82),e->slot(0,0))};V t301=e->slot(0,6);refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit83),e->slot(0,0))};V t302=e->slot(0,10);refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit84),e->slot(0,0))};V t303=e->slot(0,12);refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit85),e->slot(0,0))};V t304=e->slot(0,14);refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit94),e->slot(0,0))};V t305=e->slot(0,25);refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit95),e->slot(0,0))};V t306=e->slot(0,27);refs[0].put(std::move(t306));}
return Args{e->slot(0,27)};
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(V(!truth(get(e->slot(1,9),lit114))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit96),e->slot(0,0))};V t307=first(call(e->slot(1,13),Args{([&](){V t308=get(get(e->slot(1,9),lit96),e->slot(0,0));return !truth(t308)?V(1.0):t308;})(),V(1.0),get(get(e->slot(1,1),lit1),lit34),e->slot(0,2)}));refs[0].put(std::move(t307));}
return Args{e->slot(0,1)};
}
{V t309=first(call(e->slot(1,11),Args{([&](){V t310=get(e->slot(1,9),lit98);return !truth(t310)?V(1.0):t310;})(),V(0.25),V(1.8)}));e->slot(0,3)=std::move(t309);}
{V t311=first(call(e->slot(1,11),Args{([&](){V t312=get(e->slot(1,9),lit99);return !truth(t312)?V(1.0):t312;})(),V(0.35),V(2.0)}));e->slot(0,4)=std::move(t311);}
{V t313=first(call(e->slot(1,11),Args{([&](){V t314=get(e->slot(1,9),lit100);return !truth(t314)?V(1.0):t314;})(),V(0.35),V(2.0)}));e->slot(0,5)=std::move(t313);}
{V t315=first(call(e->slot(1,11),Args{([&](){V t316=get(e->slot(1,9),lit97);return !truth(t316)?V(1.0):t316;})(),V(0.2),V(1.35)}));e->slot(0,6)=std::move(t315);}
{V t317=([&](){V t318=([&](){V t319=([&](){V t320=eq(e->slot(0,0),V(0.0));return !truth(t320)?eq(e->slot(0,0),V(1.0)):t320;})();return truth(t319)?e->slot(0,5):t319;})();return !truth(t318)?e->slot(0,4):t318;})();e->slot(0,7)=std::move(t317);}
{V t321=first(call(e->slot(1,11),Args{sub(e->slot(0,3),V(1.0)),V(0.0),V(0.8)}));e->slot(0,8)=std::move(t321);}
{V t322=first(call(e->slot(1,11),Args{sub(e->slot(0,6),V(1.0)),V(0.0),V(0.35)}));e->slot(0,9)=std::move(t322);}
{V t323=add(add(mul(e->slot(0,8),get(get(e->slot(1,1),lit1),lit47)),mul(first(call(get(e->get("math"),lit128),Args{sub(e->slot(0,4),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit48))),mul(first(call(get(e->get("math"),lit128),Args{sub(e->slot(0,5),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit49)));e->slot(0,10)=std::move(t323);}
{V t324=add(sub(V(1.0),mul(e->slot(0,10),e->slot(0,7))),mul(e->slot(0,9),get(get(e->slot(1,1),lit1),lit52)));e->slot(0,11)=std::move(t324);}
{std::array<Ref,1> refs{Ref(e,0,11)};V t325=first(call(e->slot(1,11),Args{e->slot(0,11),get(get(e->slot(1,1),lit1),lit53),get(get(e->slot(1,1),lit1),lit54)}));refs[0].put(std::move(t325));}
{V t326=mul(get(get(e->slot(1,1),lit1),lit34),add(V(1.0),mul(e->slot(0,8),get(get(e->slot(1,1),lit1),lit50))));e->slot(0,12)=std::move(t326);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit96),e->slot(0,0))};V t327=first(call(e->slot(1,13),Args{([&](){V t328=get(get(e->slot(1,9),lit96),e->slot(0,0));return !truth(t328)?V(1.0):t328;})(),e->slot(0,11),e->slot(0,12),e->slot(0,2)}));refs[0].put(std::move(t327));}
return Args{mul(e->slot(0,1),([&](){V t329=get(get(e->slot(1,9),lit96),e->slot(0,0));return !truth(t329)?V(1.0):t329;})())};
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit65),e->slot(0,0))};V t330=first(call(e->slot(1,13),Args{([&](){V t331=get(get(e->slot(1,9),lit65),e->slot(0,0));return !truth(t331)?V(0.0):t331;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t330));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit66),e->slot(0,0))};V t332=first(call(e->slot(1,13),Args{([&](){V t333=get(get(e->slot(1,9),lit66),e->slot(0,0));return !truth(t333)?V(0.0):t333;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t332));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit63),e->slot(0,0))};V t334=first(call(e->slot(1,13),Args{([&](){V t335=get(get(e->slot(1,9),lit63),e->slot(0,0));return !truth(t335)?V(0.0):t335;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit67),e->slot(0,0))};V t336=first(call(e->slot(1,13),Args{([&](){V t337=get(get(e->slot(1,9),lit67),e->slot(0,0));return !truth(t337)?V(0.0):t337;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit95),e->slot(0,0))};V t338=first(call(e->slot(1,13),Args{([&](){V t339=get(get(e->slot(1,9),lit95),e->slot(0,0));return !truth(t339)?V(0.0):t339;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit94),e->slot(0,0))};V t340=first(call(e->slot(1,13),Args{([&](){V t341=get(get(e->slot(1,9),lit94),e->slot(0,0));return !truth(t341)?V(1.0):t341;})(),V(1.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit96),e->slot(0,0))};V t342=first(call(e->slot(1,13),Args{([&](){V t343=get(get(e->slot(1,9),lit96),e->slot(0,0));return !truth(t343)?V(1.0):t343;})(),V(1.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit83),e->slot(0,0))};V t344=first(call(e->slot(1,13),Args{([&](){V t345=get(get(e->slot(1,9),lit83),e->slot(0,0));return !truth(t345)?V(0.0):t345;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit84),e->slot(0,0))};V t346=first(call(e->slot(1,13),Args{([&](){V t347=get(get(e->slot(1,9),lit84),e->slot(0,0));return !truth(t347)?V(0.0):t347;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit85),e->slot(0,0))};V t348=first(call(e->slot(1,13),Args{([&](){V t349=get(get(e->slot(1,9),lit85),e->slot(0,0));return !truth(t349)?V(0.0):t349;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit86),e->slot(0,0))};V t350=first(call(e->slot(1,13),Args{([&](){V t351=get(get(e->slot(1,9),lit86),e->slot(0,0));return !truth(t351)?V(0.0):t351;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit87),e->slot(0,0))};V t352=first(call(e->slot(1,13),Args{([&](){V t353=get(get(e->slot(1,9),lit87),e->slot(0,0));return !truth(t353)?V(0.0):t353;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit88),e->slot(0,0))};V t354=first(call(e->slot(1,13),Args{([&](){V t355=get(get(e->slot(1,9),lit88),e->slot(0,0));return !truth(t355)?V(0.0):t355;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit89),e->slot(0,0))};V t356=first(call(e->slot(1,13),Args{([&](){V t357=get(get(e->slot(1,9),lit89),e->slot(0,0));return !truth(t357)?V(0.0):t357;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,1)}));refs[0].put(std::move(t356));}
return Args{};});
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t358=V(0.0);e->slot(0,0)=std::move(t358);}
{V t359=V(0.0);e->slot(0,1)=std::move(t359);}
{V t360=V(0.0);e->slot(0,2)=std::move(t360);}
{V t361=V(0.0);e->slot(0,3)=std::move(t361);}
{double t362=num(V(0.0)),t363=num(V(3.0)),t364=num(V(1.0));for(double t365=t362;(t364>0?t365<=t363:t365>=t363);t365+=t364){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t365);{V t366=([&](){V t367=get(get(e->slot(2,9),lit63),e->slot(0,0));return !truth(t367)?V(0.0):t367;})();e->slot(0,1)=std::move(t366);}
{std::array<Ref,1> refs{Ref(e,1,0)};V t368=add(e->slot(1,0),e->slot(0,1));refs[0].put(std::move(t368));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t369=add(e->slot(1,1),first(call(e->slot(2,12),Args{e->slot(0,1)})));refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t370=add(e->slot(1,2),([&](){V t371=get(get(e->slot(2,9),lit94),e->slot(0,0));return !truth(t371)?V(1.0):t371;})());refs[0].put(std::move(t370));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t372=first(call(get(e->get("math"),lit128),joined(Args{e->slot(1,3)},call(e->slot(2,12),Args{e->slot(0,1)}))));refs[0].put(std::move(t372));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit102)};V t373=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit103)};V t374=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit104)};V t375=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit107)};V t376=e->slot(0,3);refs[0].put(std::move(t376));}
return Args{};});
e->slot(0,45)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t377=get(get(e->slot(1,1),lit1),lit2);e->slot(0,5)=std::move(t377);}
if(truth(([&](){V t378=ne(e->slot(0,5),lit3);return truth(t378)?ne(e->slot(0,5),lit229):t378;})())){call(e->get("error"),Args{lit230});
}
if(truth(eq(e->slot(0,5),lit229))){call(e->slot(1,14),Args{concat(lit231,e->slot(0,0)),([&](){V t379=get(get(e->slot(1,9),lit64),e->slot(0,0));return !truth(t379)?V(0.0):t379;})()});
}
call(e->slot(1,14),Args{concat(lit232,e->slot(0,0)),e->slot(0,1)});
call(e->slot(1,14),Args{concat(lit233,e->slot(0,0)),([&](){V t380=([&](){V t381=get(get(e->slot(1,9),lit95),e->slot(0,0));return !truth(t381)?e->slot(0,1):t381;})();return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,14),Args{concat(lit234,e->slot(0,0)),([&](){V t382=([&](){V t383=get(get(e->slot(1,9),lit95),e->slot(0,0));return !truth(t383)?e->slot(0,1):t383;})();return !truth(t382)?V(0.0):t382;})()});
call(e->slot(1,14),Args{concat(lit235,e->slot(0,0)),([&](){V t384=get(get(e->slot(1,9),lit94),e->slot(0,0));return !truth(t384)?V(1.0):t384;})()});
call(e->slot(1,14),Args{concat(lit236,e->slot(0,0)),([&](){V t385=get(get(e->slot(1,9),lit94),e->slot(0,0));return !truth(t385)?V(1.0):t385;})()});
call(e->slot(1,14),Args{concat(lit237,e->slot(0,0)),e->slot(0,2)});
call(e->slot(1,14),Args{concat(lit238,e->slot(0,0)),e->slot(0,3)});
call(e->slot(1,14),Args{concat(lit239,e->slot(0,0)),e->slot(0,4)});
call(e->slot(1,14),Args{concat(lit240,e->slot(0,0)),e->slot(0,1)});
call(e->slot(1,14),Args{concat(lit241,e->slot(0,0)),([&](){V t386=get(get(e->slot(1,9),lit94),e->slot(0,0));return !truth(t386)?V(1.0):t386;})()});
call(e->slot(1,14),Args{concat(lit242,e->slot(0,0)),([&](){V t387=get(get(e->slot(1,9),lit64),e->slot(0,0));return !truth(t387)?V(0.0):t387;})()});
call(e->slot(1,14),Args{concat(lit243,e->slot(0,0)),([&](){V t388=get(get(e->slot(1,9),lit65),e->slot(0,0));return !truth(t388)?V(0.0):t388;})()});
if(truth(V(!truth(get(e->slot(1,9),lit122))))){return Args{};
}
call(e->slot(1,14),Args{concat(lit231,e->slot(0,0)),([&](){V t389=get(get(e->slot(1,9),lit64),e->slot(0,0));return !truth(t389)?V(0.0):t389;})()});
call(e->slot(1,14),Args{concat(lit244,e->slot(0,0)),([&](){V t390=get(get(e->slot(1,9),lit65),e->slot(0,0));return !truth(t390)?V(0.0):t390;})()});
call(e->slot(1,14),Args{concat(lit245,e->slot(0,0)),([&](){V t391=get(get(e->slot(1,9),lit66),e->slot(0,0));return !truth(t391)?V(0.0):t391;})()});
call(e->slot(1,14),Args{concat(lit246,e->slot(0,0)),([&](){V t392=get(get(e->slot(1,9),lit67),e->slot(0,0));return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,14),Args{concat(lit247,e->slot(0,0)),([&](){V t393=get(get(e->slot(1,9),lit81),e->slot(0,0));return !truth(t393)?V(0.0):t393;})()});
call(e->slot(1,14),Args{concat(lit248,e->slot(0,0)),([&](){V t394=get(get(e->slot(1,9),lit82),e->slot(0,0));return !truth(t394)?V(0.0):t394;})()});
call(e->slot(1,14),Args{concat(lit249,e->slot(0,0)),([&](){V t395=get(get(e->slot(1,9),lit83),e->slot(0,0));return !truth(t395)?V(0.0):t395;})()});
call(e->slot(1,14),Args{concat(lit250,e->slot(0,0)),([&](){V t396=get(get(e->slot(1,9),lit84),e->slot(0,0));return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,14),Args{concat(lit251,e->slot(0,0)),([&](){V t397=get(get(e->slot(1,9),lit85),e->slot(0,0));return !truth(t397)?V(0.0):t397;})()});
call(e->slot(1,14),Args{concat(lit252,e->slot(0,0)),([&](){V t398=get(get(e->slot(1,9),lit86),e->slot(0,0));return !truth(t398)?V(0.0):t398;})()});
call(e->slot(1,14),Args{concat(lit253,e->slot(0,0)),([&](){V t399=get(get(e->slot(1,9),lit87),e->slot(0,0));return !truth(t399)?V(0.0):t399;})()});
call(e->slot(1,14),Args{concat(lit254,e->slot(0,0)),([&](){V t400=get(get(e->slot(1,9),lit88),e->slot(0,0));return !truth(t400)?V(0.0):t400;})()});
call(e->slot(1,14),Args{concat(lit255,e->slot(0,0)),([&](){V t401=get(get(e->slot(1,9),lit89),e->slot(0,0));return !truth(t401)?V(0.0):t401;})()});
call(e->slot(1,14),Args{concat(lit256,e->slot(0,0)),([&](){V t402=get(get(e->slot(1,9),lit90),e->slot(0,0));return !truth(t402)?V(0.0):t402;})()});
call(e->slot(1,14),Args{concat(lit257,e->slot(0,0)),([&](){V t403=get(get(e->slot(1,9),lit96),e->slot(0,0));return !truth(t403)?V(1.0):t403;})()});
call(e->slot(1,14),Args{concat(lit258,e->slot(0,0)),([&](){V t404=get(get(e->slot(1,9),lit92),e->slot(0,0));return !truth(t404)?V(0.0):t404;})()});
call(e->slot(1,14),Args{concat(lit259,e->slot(0,0)),([&](){V t405=get(get(e->slot(1,9),lit93),e->slot(0,0));return !truth(t405)?V(0.0):t405;})()});
return Args{};});
e->slot(0,46)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,14),Args{lit260,([&](){V t406=e->slot(0,0);return !truth(t406)?V(0.0):t406;})()});
call(e->slot(1,14),Args{lit261,([&](){V t407=e->slot(0,1);return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,14),Args{lit262,([&](){V t408=get(e->slot(1,9),lit118);return !truth(t408)?lit263:t408;})()});
call(e->slot(1,14),Args{lit264,([&](){V t409=get(e->slot(1,9),lit120);return !truth(t409)?V(0.0):t409;})()});
call(e->slot(1,14),Args{lit265,([&](){V t410=([&](){V t411=get(e->slot(1,9),lit117);return truth(t411)?V(1.0):t411;})();return !truth(t410)?V(0.0):t410;})()});
call(e->slot(1,14),Args{lit266,([&](){V t412=get(e->slot(1,9),lit118);return !truth(t412)?lit263:t412;})()});
call(e->slot(1,14),Args{lit267,([&](){V t413=get(e->slot(1,9),lit120);return !truth(t413)?V(0.0):t413;})()});
call(e->slot(1,14),Args{lit268,([&](){V t414=get(e->slot(1,9),lit102);return !truth(t414)?V(0.0):t414;})()});
call(e->slot(1,14),Args{lit269,([&](){V t415=get(e->slot(1,9),lit103);return !truth(t415)?V(0.0):t415;})()});
call(e->slot(1,14),Args{lit270,([&](){V t416=get(e->slot(1,9),lit104);return !truth(t416)?V(1.0):t416;})()});
call(e->slot(1,14),Args{lit271,([&](){V t417=get(e->slot(1,9),lit107);return !truth(t417)?V(0.0):t417;})()});
if(truth(V(!truth(get(e->slot(1,9),lit122))))){return Args{};
}
call(e->slot(1,14),Args{lit272,([&](){V t418=get(e->slot(1,9),lit72);return !truth(t418)?V(0.0):t418;})()});
call(e->slot(1,14),Args{lit273,([&](){V t419=([&](){V t420=e->slot(1,4);return truth(t420)?V(1.0):t420;})();return !truth(t419)?V(0.0):t419;})()});
call(e->slot(1,14),Args{lit274,([&](){V t421=([&](){V t422=get(e->slot(1,9),lit108);return truth(t422)?V(1.0):t422;})();return !truth(t421)?V(0.0):t421;})()});
call(e->slot(1,14),Args{lit275,([&](){V t423=([&](){V t424=get(e->slot(1,9),lit109);return truth(t424)?V(1.0):t424;})();return !truth(t423)?V(0.0):t423;})()});
call(e->slot(1,14),Args{lit276,([&](){V t425=([&](){V t426=get(e->slot(1,9),lit109);return truth(t426)?V(1.0):t426;})();return !truth(t425)?V(0.0):t425;})()});
call(e->slot(1,14),Args{lit277,([&](){V t427=([&](){V t428=get(e->slot(1,9),lit110);return truth(t428)?V(1.0):t428;})();return !truth(t427)?V(0.0):t427;})()});
call(e->slot(1,14),Args{lit278,([&](){V t429=([&](){V t430=get(e->slot(1,9),lit113);return truth(t430)?V(1.0):t430;})();return !truth(t429)?V(0.0):t429;})()});
call(e->slot(1,14),Args{lit279,([&](){V t431=([&](){V t432=get(e->slot(1,9),lit111);return truth(t432)?V(1.0):t432;})();return !truth(t431)?V(0.0):t431;})()});
call(e->slot(1,14),Args{lit280,([&](){V t433=([&](){V t434=get(e->slot(1,9),lit112);return truth(t434)?V(1.0):t434;})();return !truth(t433)?V(0.0):t433;})()});
call(e->slot(1,14),Args{lit281,([&](){V t435=([&](){V t436=get(e->slot(1,9),lit114);return truth(t436)?V(1.0):t436;})();return !truth(t435)?V(0.0):t435;})()});
call(e->slot(1,14),Args{lit282,([&](){V t437=([&](){V t438=get(e->slot(1,9),lit115);return truth(t438)?V(1.0):t438;})();return !truth(t437)?V(0.0):t437;})()});
call(e->slot(1,14),Args{lit283,([&](){V t439=([&](){V t440=get(e->slot(1,9),lit116);return truth(t440)?V(1.0):t440;})();return !truth(t439)?V(0.0):t439;})()});
call(e->slot(1,14),Args{lit284,([&](){V t441=get(e->slot(1,9),lit105);return !truth(t441)?V(0.0):t441;})()});
call(e->slot(1,14),Args{lit285,([&](){V t442=get(e->slot(1,9),lit106);return !truth(t442)?V(0.0):t442;})()});
call(e->slot(1,14),Args{lit286,([&](){V t443=get(e->slot(1,9),lit74);return !truth(t443)?V(0.5):t443;})()});
call(e->slot(1,14),Args{lit287,([&](){V t444=get(e->slot(1,9),lit75);return !truth(t444)?V(0.5):t444;})()});
call(e->slot(1,14),Args{lit288,([&](){V t445=get(e->slot(1,9),lit76);return !truth(t445)?V(0.5):t445;})()});
call(e->slot(1,14),Args{lit289,([&](){V t446=get(e->slot(1,9),lit77);return !truth(t446)?V(0.5):t446;})()});
return Args{};});
e->slot(0,47)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t447=num(V(0.0)),t448=num(V(3.0)),t449=num(V(1.0));for(double t450=t447;(t449>0?t450<=t448:t450>=t448);t450+=t449){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t450);call(e->slot(2,45),Args{e->slot(0,0),([&](){V t451=get(get(e->slot(2,9),lit63),e->slot(0,0));return !truth(t451)?V(0.0):t451;})(),([&](){V t452=get(get(e->slot(2,9),lit68),e->slot(0,0));return !truth(t452)?V(0.0):t452;})(),([&](){V t453=get(get(e->slot(2,9),lit69),e->slot(0,0));return !truth(t453)?V(0.0):t453;})(),([&](){V t454=get(get(e->slot(2,9),lit70),e->slot(0,0));return !truth(t454)?V(0.0):t454;})()});
}}
call(e->slot(1,46),Args{([&](){V t455=get(get(e->slot(1,9),lit71),lit61);return !truth(t455)?V(0.0):t455;})(),([&](){V t456=get(get(e->slot(1,9),lit71),lit62);return !truth(t456)?V(0.0):t456;})()});
return Args{};});
e->slot(0,48)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t457=num(V(0.0)),t458=num(V(3.0)),t459=num(V(1.0));for(double t460=t457;(t459>0?t460<=t458:t460>=t458);t460+=t459){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t460);call(e->slot(2,43),Args{e->slot(0,0),e->slot(1,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit61)};V t461=first(call(e->slot(1,13),Args{get(e->slot(1,5),lit61),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,0)}));refs[0].put(std::move(t461));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit62)};V t462=first(call(e->slot(1,13),Args{get(e->slot(1,5),lit62),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,0)}));refs[0].put(std::move(t462));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit71),lit61)};V t463=first(call(e->slot(1,13),Args{([&](){V t464=get(get(e->slot(1,9),lit71),lit61);return !truth(t464)?V(0.0):t464;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,0)}));refs[0].put(std::move(t463));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,9),lit71),lit62)};V t465=first(call(e->slot(1,13),Args{([&](){V t466=get(get(e->slot(1,9),lit71),lit62);return !truth(t466)?V(0.0):t466;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,0)}));refs[0].put(std::move(t465));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit72)};V t467=first(call(e->slot(1,13),Args{([&](){V t468=get(e->slot(1,9),lit72);return !truth(t468)?V(0.0):t468;})(),V(0.0),get(get(e->slot(1,1),lit1),lit56),e->slot(0,0)}));refs[0].put(std::move(t467));}
call(e->slot(1,44),Args{});
return Args{};});
Ref(e->slot(0,1),lit290).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(e->slot(0,0))){call(e->slot(1,25),Args{e->slot(0,0)});
}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit118)};V t469=lit119;refs[0].put(std::move(t469));}
call(e->slot(1,47),Args{});
return Args{};}));
Ref(e->slot(0,1),lit291).put(native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,9),lit120)};V t470=add(([&](){V t471=get(e->slot(1,9),lit120);return !truth(t471)?V(0.0):t471;})(),V(1.0));refs[0].put(std::move(t470));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t472=first(call(e->slot(1,11),Args{first(call(e->slot(1,10),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit57),get(get(e->slot(1,1),lit1),lit58)}));refs[0].put(std::move(t472));}
call(e->slot(1,22),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t473=([&](){V t474=e->slot(0,1);return !truth(t474)?first(call(e->slot(1,19),Args{})):t474;})();refs[0].put(std::move(t473));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,9),lit118)};V t475=lit292;refs[0].put(std::move(t475));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit117)};V t476=V(false);refs[0].put(std::move(t476));}
call(e->slot(1,48),Args{e->slot(0,0)});
call(e->slot(1,47),Args{});
return Args{};
}
{V t477=first(call(e->slot(1,20),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t477);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e->slot(1,9),lit118)};V t478=lit293;refs[0].put(std::move(t478));}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit117)};V t479=V(false);refs[0].put(std::move(t479));}
call(e->slot(1,48),Args{e->slot(0,0)});
call(e->slot(1,47),Args{});
return Args{};
}
call(e->slot(1,26),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit117)};V t480=V(true);refs[0].put(std::move(t480));}
if(truth(V(!truth(e->slot(1,4))))){call(e->slot(1,25),Args{e->slot(0,1)});
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit118)};V t481=lit294;refs[0].put(std::move(t481));}
call(e->slot(1,44),Args{});
call(e->slot(1,47),Args{});
return Args{};
}
{double t482=num(V(0.0)),t483=num(V(3.0)),t484=num(V(1.0));for(double t485=t482;(t484>0?t485<=t483:t485>=t483);t485+=t484){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t485);{std::array<Ref,1> refs{Ref(e->slot(2,7),e->slot(0,0))};V t486=first(call(e->slot(2,24),Args{e->slot(1,1),e->slot(0,0)}));refs[0].put(std::move(t486));}
}}
call(e->slot(1,32),Args{e->slot(0,0)});
{V t487=first(call(e->slot(1,37),Args{e->slot(1,7),e->slot(0,0)}));e->slot(0,4)=std::move(t487);}
{Args t488=call(e->slot(1,38),Args{e->slot(1,7),e->slot(0,4),e->slot(0,0)});e->slot(0,5)=arg(t488,0);e->slot(0,6)=arg(t488,1);}
call(e->slot(1,39),Args{e->slot(0,1),e->slot(0,0)});
{double t489=num(V(0.0)),t490=num(V(3.0)),t491=num(V(1.0));for(double t492=t489;(t491>0?t492<=t490:t492>=t490);t492+=t491){auto parent=e;Env storage(parent,false,7);auto e=&storage;e->slot(0,0)=V(t492);{Args t493=call(e->slot(2,40),Args{e->slot(0,0),get(e->slot(2,7),e->slot(0,0))});e->slot(0,1)=arg(t493,0);e->slot(0,2)=arg(t493,1);e->slot(0,3)=arg(t493,2);}
{V t494=first(call(e->slot(2,11),Args{([&](){V t495=get(e->slot(1,4),e->slot(0,0));return !truth(t495)?V(0.0):t495;})(),V(-num(get(get(e->slot(2,1),lit1),lit5))),get(get(e->slot(2,1),lit1),lit5)}));e->slot(0,4)=std::move(t494);}
{V t496=first(call(e->slot(2,41),Args{e->slot(0,0),e->slot(0,4),e->slot(1,0)}));e->slot(0,5)=std::move(t496);}
{V t497=first(call(e->slot(2,42),Args{e->slot(0,0),e->slot(0,5),e->slot(1,0)}));e->slot(0,6)=std::move(t497);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t498=first(call(e->slot(2,11),Args{e->slot(0,6),V(-num(get(get(e->slot(2,1),lit1),lit5))),get(get(e->slot(2,1),lit1),lit5)}));refs[0].put(std::move(t498));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,9),lit63),e->slot(0,0))};V t499=e->slot(0,6);refs[0].put(std::move(t499));}
call(e->slot(2,45),Args{e->slot(0,0),e->slot(0,6),e->slot(0,1),e->slot(0,2),e->slot(0,3)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,9),lit118)};V t500=lit295;refs[0].put(std::move(t500));}
call(e->slot(1,44),Args{});
call(e->slot(1,46),Args{e->slot(0,5),e->slot(0,6)});
return Args{};}));
Ref(e->slot(0,1),lit296).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t501=get(get(e->slot(1,9),lit63),e->slot(0,0));return !truth(t501)?V(0.0):t501;})()};
return Args{};}));
Ref(e->slot(0,1),lit297).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t502=get(get(e->slot(1,9),lit64),e->slot(0,0));return !truth(t502)?V(0.0):t502;})()};
return Args{};}));
Ref(e->slot(0,1),lit298).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t503=get(get(e->slot(1,9),lit65),e->slot(0,0));return !truth(t503)?V(0.0):t503;})()};
return Args{};}));
Ref(e->slot(0,1),lit299).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t504=get(get(e->slot(1,9),lit68),e->slot(0,0));return !truth(t504)?V(0.0):t504;})()};
return Args{};}));
Ref(e->slot(0,1),lit300).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t505=get(get(e->slot(1,9),lit69),e->slot(0,0));return !truth(t505)?V(0.0):t505;})()};
return Args{};}));
Ref(e->slot(0,1),lit301).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t506=get(get(e->slot(1,9),lit70),e->slot(0,0));return !truth(t506)?V(0.0):t506;})()};
return Args{};}));
Ref(e->slot(0,1),lit302).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t507=get(get(e->slot(1,9),lit94),e->slot(0,0));return !truth(t507)?V(1.0):t507;})()};
return Args{};}));
Ref(e->slot(0,1),lit303).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,9)};
return Args{};}));
Ref(e->slot(0,1),lit304).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t508=([&](){V t509=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t509)?V(0.0):t509;})();e->slot(0,0)=std::move(t508);}
return call(get(e->get("string"),lit305),Args{concat(lit306,lit307),([&](){V t510=get(get(e->slot(2,9),lit63),e->slot(0,0));return !truth(t510)?V(0.0):t510;})(),([&](){V t511=get(get(e->slot(2,9),lit94),e->slot(0,0));return !truth(t511)?V(1.0):t511;})(),([&](){V t512=get(get(e->slot(2,9),lit81),e->slot(0,0));return !truth(t512)?V(0.0):t512;})(),([&](){V t513=get(get(e->slot(2,9),lit82),e->slot(0,0));return !truth(t513)?V(0.0):t513;})(),([&](){V t514=get(get(e->slot(2,9),lit83),e->slot(0,0));return !truth(t514)?V(0.0):t514;})(),([&](){V t515=get(get(e->slot(2,9),lit84),e->slot(0,0));return !truth(t515)?V(0.0):t515;})(),([&](){V t516=get(get(e->slot(2,9),lit85),e->slot(0,0));return !truth(t516)?V(0.0):t516;})(),([&](){V t517=get(get(e->slot(2,9),lit86),e->slot(0,0));return !truth(t517)?V(0.0):t517;})(),([&](){V t518=get(get(e->slot(2,9),lit87),e->slot(0,0));return !truth(t518)?V(0.0):t518;})(),([&](){V t519=get(get(e->slot(2,9),lit88),e->slot(0,0));return !truth(t519)?V(0.0):t519;})(),([&](){V t520=get(get(e->slot(2,9),lit89),e->slot(0,0));return !truth(t520)?V(0.0):t520;})(),([&](){V t521=get(get(e->slot(2,9),lit64),e->slot(0,0));return !truth(t521)?V(0.0):t521;})(),([&](){V t522=get(get(e->slot(2,9),lit65),e->slot(0,0));return !truth(t522)?V(0.0):t522;})(),([&](){V t523=get(get(e->slot(2,9),lit68),e->slot(0,0));return !truth(t523)?V(0.0):t523;})(),([&](){V t524=get(get(e->slot(2,9),lit69),e->slot(0,0));return !truth(t524)?V(0.0):t524;})()});
}
return call(get(e->get("string"),lit305),Args{concat(lit308,concat(lit309,concat(lit310,concat(lit311,concat(lit312,concat(lit313,lit314)))))),first(call(e->get("tostring"),Args{get(e->slot(1,9),lit118)})),([&](){V t525=get(e->slot(1,9),lit120);return !truth(t525)?V(0.0):t525;})(),([&](){V t526=([&](){V t527=get(e->slot(1,9),lit117);return truth(t527)?lit315:t527;})();return !truth(t526)?lit316:t526;})(),([&](){V t528=get(get(e->slot(1,9),lit63),V(0.0));return !truth(t528)?V(0.0):t528;})(),([&](){V t529=get(get(e->slot(1,9),lit63),V(1.0));return !truth(t529)?V(0.0):t529;})(),([&](){V t530=get(get(e->slot(1,9),lit63),V(2.0));return !truth(t530)?V(0.0):t530;})(),([&](){V t531=get(get(e->slot(1,9),lit63),V(3.0));return !truth(t531)?V(0.0):t531;})(),([&](){V t532=get(e->slot(1,9),lit103);return !truth(t532)?V(0.0):t532;})(),([&](){V t533=get(get(e->slot(1,9),lit94),V(0.0));return !truth(t533)?V(1.0):t533;})(),([&](){V t534=get(get(e->slot(1,9),lit94),V(1.0));return !truth(t534)?V(1.0):t534;})(),([&](){V t535=get(get(e->slot(1,9),lit94),V(2.0));return !truth(t535)?V(1.0):t535;})(),([&](){V t536=get(get(e->slot(1,9),lit94),V(3.0));return !truth(t536)?V(1.0):t536;})(),([&](){V t537=get(e->slot(1,9),lit104);return !truth(t537)?V(1.0):t537;})(),([&](){V t538=get(get(e->slot(1,9),lit83),V(0.0));return !truth(t538)?V(0.0):t538;})(),([&](){V t539=get(get(e->slot(1,9),lit83),V(1.0));return !truth(t539)?V(0.0):t539;})(),([&](){V t540=get(get(e->slot(1,9),lit83),V(2.0));return !truth(t540)?V(0.0):t540;})(),([&](){V t541=get(get(e->slot(1,9),lit83),V(3.0));return !truth(t541)?V(0.0):t541;})(),([&](){V t542=get(get(e->slot(1,9),lit86),V(0.0));return !truth(t542)?V(0.0):t542;})(),([&](){V t543=get(get(e->slot(1,9),lit86),V(1.0));return !truth(t543)?V(0.0):t543;})(),([&](){V t544=get(get(e->slot(1,9),lit86),V(2.0));return !truth(t544)?V(0.0):t544;})(),([&](){V t545=get(get(e->slot(1,9),lit86),V(3.0));return !truth(t545)?V(0.0):t545;})(),([&](){V t546=get(get(e->slot(1,9),lit89),V(0.0));return !truth(t546)?V(0.0):t546;})(),([&](){V t547=get(get(e->slot(1,9),lit89),V(1.0));return !truth(t547)?V(0.0):t547;})(),([&](){V t548=get(get(e->slot(1,9),lit89),V(2.0));return !truth(t548)?V(0.0):t548;})(),([&](){V t549=get(get(e->slot(1,9),lit89),V(3.0));return !truth(t549)?V(0.0):t549;})(),([&](){V t550=get(get(e->slot(1,9),lit81),V(0.0));return !truth(t550)?V(0.0):t550;})(),([&](){V t551=get(get(e->slot(1,9),lit81),V(1.0));return !truth(t551)?V(0.0):t551;})(),([&](){V t552=get(get(e->slot(1,9),lit81),V(2.0));return !truth(t552)?V(0.0):t552;})(),([&](){V t553=get(get(e->slot(1,9),lit81),V(3.0));return !truth(t553)?V(0.0):t553;})(),([&](){V t554=get(get(e->slot(1,9),lit82),V(0.0));return !truth(t554)?V(0.0):t554;})(),([&](){V t555=get(get(e->slot(1,9),lit82),V(1.0));return !truth(t555)?V(0.0):t555;})(),([&](){V t556=get(get(e->slot(1,9),lit82),V(2.0));return !truth(t556)?V(0.0):t556;})(),([&](){V t557=get(get(e->slot(1,9),lit82),V(3.0));return !truth(t557)?V(0.0):t557;})(),([&](){V t558=get(get(e->slot(1,9),lit71),lit61);return !truth(t558)?V(0.0):t558;})(),([&](){V t559=get(get(e->slot(1,9),lit71),lit62);return !truth(t559)?V(0.0):t559;})(),([&](){V t560=([&](){V t561=get(e->slot(1,9),lit108);return truth(t561)?lit315:t561;})();return !truth(t560)?lit316:t560;})(),([&](){V t562=([&](){V t563=get(e->slot(1,9),lit109);return truth(t563)?lit315:t563;})();return !truth(t562)?lit316:t562;})(),([&](){V t564=([&](){V t565=get(e->slot(1,9),lit110);return truth(t565)?lit315:t565;})();return !truth(t564)?lit316:t564;})(),([&](){V t566=([&](){V t567=get(e->slot(1,9),lit113);return truth(t567)?lit315:t567;})();return !truth(t566)?lit316:t566;})(),([&](){V t568=([&](){V t569=get(e->slot(1,9),lit114);return truth(t569)?lit315:t569;})();return !truth(t568)?lit316:t568;})(),([&](){V t570=([&](){V t571=get(e->slot(1,9),lit115);return truth(t571)?lit315:t571;})();return !truth(t570)?lit316:t570;})(),([&](){V t572=([&](){V t573=get(e->slot(1,9),lit116);return truth(t573)?lit315:t573;})();return !truth(t572)?lit316:t572;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

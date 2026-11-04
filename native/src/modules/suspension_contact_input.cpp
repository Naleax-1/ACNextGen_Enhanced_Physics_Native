// Generated native C++ from pinned suspension_contact_input.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("inputTau");
static const V lit7("reboundTau");
static const V lit8("energyInputGain");
static const V lit9("lossInputGain");
static const V lit10("qualityGain");
static const V lit11("hopInputGain");
static const V lit12("hopLoadGain");
static const V lit13("memoryInputGain");
static const V lit14("tireLimitInputGain");
static const V lit15("loadNormInputGain");
static const V lit16("damperFeedbackGain");
static const V lit17("springFeedbackGain");
static const V lit18("minSuspScale");
static const V lit19("maxSuspScale");
static const V lit20("minRoadInput");
static const V lit21("maxRoadInput");
static const V lit22("frontGain");
static const V lit23("rearGain");
static const V lit24("contactDropGain");
static const V lit25("impulseGain");
static const V lit26("impulseDecayTau");
static const V lit27("bodyFlexInputGain");
static const V lit28("bodyStiffInputLoss");
static const V lit29("damageInputGain");
static const V lit30("brakeLockInputGain");
static const V lit31("brakeThermalInputGain");
static const V lit32("chassisEnergyInputGain");
static const V lit33("chassisFlexInputGain");
static const V lit34("weightBiasInputGain");
static const V lit35("damageRuntimeInputGain");
static const V lit36("roadImpactInputGain");
static const V lit37("roadShockInputGain");
static const V lit38("roadTextureInputGain");
static const V lit39("roadUnloadDropGain");
static const V lit40("roadBottomingInputGain");
static const V lit41("roadSurfaceLimitGain");
static const V lit42("loadPathLossGain");
static const V lit43("loadPathForceLeakGain");
static const V lit44("loadPathVerticalFlowGain");
static const V lit45("loadPathDelayGain");
static const V lit46("loadPathBodyAbsorbGain");
static const V lit47("tireDeliveryLossGain");
static const V lit48("bodyHeaveGain");
static const V lit49("bodyPitchRollGain");
static const V lit50("maxPreserveInputAdd");
static const V lit51("loadReference");
static const V lit52("minDt");
static const V lit53("maxDt");
static const V lit54("debugStoreInterval");
static const V lit55("contact");
static const V lit56("quality");
static const V lit57("trust");
static const V lit58("loss");
static const V lit59("energy");
static const V lit60("roadInput");
static const V lit61("suspScale");
static const V lit62("contactDrop");
static const V lit63("impulse");
static const V lit64("hop");
static const V lit65("hopLoad");
static const V lit66("memory");
static const V lit67("tireLimit");
static const V lit68("load");
static const V lit69("loadNorm");
static const V lit70("damperFeedback");
static const V lit71("springFeedback");
static const V lit72("roadImpact");
static const V lit73("roadShock");
static const V lit74("roadTexture");
static const V lit75("roadUnload");
static const V lit76("roadBottoming");
static const V lit77("roadSurfaceLimit");
static const V lit78("loadPathLoss");
static const V lit79("loadPathForceLeak");
static const V lit80("loadPathVerticalFlow");
static const V lit81("loadPathDelay");
static const V lit82("loadPathBodyAbsorb");
static const V lit83("tireDelivery");
static const V lit84("frontInput");
static const V lit85("rearInput");
static const V lit86("leftInput");
static const V lit87("rightInput");
static const V lit88("avgRoadInput");
static const V lit89("avgSuspScale");
static const V lit90("avgImpulse");
static const V lit91("avgDrop");
static const V lit92("maxImpulse");
static const V lit93("maxDrop");
static const V lit94("bodyRigidity");
static const V lit95("bodyFlexFactor");
static const V lit96("bodyHeave");
static const V lit97("bodyPitch");
static const V lit98("bodyRoll");
static const V lit99("vehicleDamage");
static const V lit100("brakeLockAvg");
static const V lit101("brakeThermalStress");
static const V lit102("chassisEnergy");
static const V lit103("chassisFlexEnergy");
static const V lit104("weightBiasStress");
static const V lit105("damageRuntimeAdd");
static const V lit106("preserveInputAdd");
static const V lit107("status");
static const V lit108("INIT");
static const V lit109("updateCount");
static const V lit110("contactLinked");
static const V lit111("hopLinked");
static const V lit112("memoryLinked");
static const V lit113("loadLinked");
static const V lit114("bodyLinked");
static const V lit115("damageLinked");
static const V lit116("feedbackLinked");
static const V lit117("brakeLinked");
static const V lit118("thermalLinked");
static const V lit119("chassisLinked");
static const V lit120("weightLinked");
static const V lit121("damageRuntimeLinked");
static const V lit122("roadInputLinked");
static const V lit123("loadPathLinked");
static const V lit124("carLinked");
static const V lit125("wheelLinked");
static const V lit126("debugStoreTimer");
static const V lit127("debugStoreNow");
static const V lit128("state");
static const V lit129("debug");
static const V lit130("huge");
static const V lit131("abs");
static const V lit132("safeLoadRaw");
static const V lit133("safeStore");
static const V lit134("safeField");
static const V lit135("getCar");
static const V lit136("wheels");
static const V lit137("ngp_body_rigidity");
static const V lit138("ngp_body_flex_factor");
static const V lit139("ngp_rbi_body_rigidity");
static const V lit140("ngp_rbi_body_flex_factor");
static const V lit141("ngp_body_heave_input");
static const V lit142("ngp_road_body_heave");
static const V lit143("ngp_body_pitch_input");
static const V lit144("ngp_road_body_pitch");
static const V lit145("ngp_body_roll_input");
static const V lit146("ngp_road_body_roll");
static const V lit147("ngp_condition_total");
static const V lit148("ngp_vehicle_condition_total");
static const V lit149("ngp_damage_chassis");
static const V lit150("ngp_brake_lock_");
static const V lit151("ngp_brake_root_heat_avg");
static const V lit152("ngp_virtual_thermal_stress");
static const V lit153("ngp_brake_temp_avg");
static const V lit154("ngp_chassis_energy");
static const V lit155("ngp_chassis_body_energy");
static const V lit156("ngp_body_energy");
static const V lit157("ngp_chassis_flex_energy");
static const V lit158("ngp_flex_energy");
static const V lit159("ngp_weight_front_bias");
static const V lit160("ngp_weight_rear_bias");
static const V lit161("ngp_weight_left_bias");
static const V lit162("ngp_weight_right_bias");
static const V lit163("ngp_damage_runtime_add");
static const V lit164("ngp_damage_event_runtime_add");
static const V lit165("ngp_wheel_load_");
static const V lit166("ngp_load_wheel_");
static const V lit167("ngp_contact_load_");
static const V lit168("ngp_load_path_load_");
static const V lit169("ngp_hub_load_");
static const V lit170("ngp_dlt_load_");
static const V lit171("loadK");
static const V lit172("ngp_tc_contact_");
static const V lit173("ngp_contact_quality_");
static const V lit174("ngp_tire_contact_quality_");
static const V lit175("ngp_tcr_quality_");
static const V lit176("ngp_sci_quality_");
static const V lit177("ngp_contact_trust_");
static const V lit178("ngp_recovery_trust_");
static const V lit179("ngp_carcass_grip_gate_");
static const V lit180("ngp_contact_loss_");
static const V lit181("ngp_tire_contact_loss_");
static const V lit182("ngp_tcr_contact_loss_");
static const V lit183("ngp_contact_patch_loss_");
static const V lit184("ngp_tcr_energy_push_");
static const V lit185("ngp_tc_energy_");
static const V lit186("ngp_tire_slip_energy_");
static const V lit187("ngp_tdyn_slip_energy_");
static const V lit188("ngp_slip_recovery_slip_");
static const V lit189("min");
static const V lit190("ngp_tire_hop_energy_");
static const V lit191("ngp_tire_hop_");
static const V lit192("ngp_tirehop_energy_");
static const V lit193("ngp_rii_hop_");
static const V lit194("ngp_hop_risk_");
static const V lit195("ngp_tire_hop_loadpulse_");
static const V lit196("ngp_tirehop_");
static const V lit197("ngp_impact_load_pulse_");
static const V lit198("ngp_tire_memory_");
static const V lit199("ngp_tyrememory_");
static const V lit200("ngp_rubber_memory_");
static const V lit201("ngp_slide_memory_");
static const V lit202("ngp_slip_slide_memory_");
static const V lit203("ngp_tire_limit_");
static const V lit204("ngp_road_surface_limit_");
static const V lit205("ngp_rii_surface_limit_");
static const V lit206("ngp_slip_snap_risk_");
static const V lit207("ngp_snap_risk_");
static const V lit208("ngp_damper_force_");
static const V lit209("ngp_damper_");
static const V lit210("ngp_damper_hyst_force_");
static const V lit211("ngp_susp_damper_");
static const V lit212("ngp_spring_force_");
static const V lit213("ngp_progressive_spring_");
static const V lit214("ngp_spring_raw_");
static const V lit215("ngp_susp_spring_");
static const V lit216("ngp_rii_impact_");
static const V lit217("ngp_road_impact_");
static const V lit218("ngp_impact_value_");
static const V lit219("ngp_rii_shock_");
static const V lit220("ngp_road_shock_");
static const V lit221("ngp_road_input_shock_");
static const V lit222("ngp_rii_texture_");
static const V lit223("ngp_road_texture_");
static const V lit224("ngp_rii_unload_");
static const V lit225("ngp_unload_event_");
static const V lit226("ngp_rii_bottoming_");
static const V lit227("ngp_bottoming_risk_");
static const V lit228("ngp_load_path_loss_");
static const V lit229("ngp_lp_loss_");
static const V lit230("ngp_road_path_loss_");
static const V lit231("ngp_load_path_force_leak_");
static const V lit232("ngp_lp_force_leak_");
static const V lit233("ngp_road_force_leak_");
static const V lit234("ngp_load_path_vertical_flow_");
static const V lit235("ngp_lp_vertical_flow_");
static const V lit236("ngp_road_vertical_flow_");
static const V lit237("ngp_load_path_delay_");
static const V lit238("ngp_lp_delay_");
static const V lit239("ngp_load_path_body_absorb_");
static const V lit240("ngp_road_body_absorb_");
static const V lit241("ngp_load_path_tire_delivery_");
static const V lit242("ngp_road_tire_delivery_");
static const V lit243("ngp_lp_tire_delivery_");
static const V lit244("ngp_wheel_load_norm_");
static const V lit245("ngp_brake_load_norm_");
static const V lit246("ngp_load_path_load_norm_");
static const V lit247("ngp_lp_load_norm_");
static const V lit248("max");
static const V lit249("ngp_susp_contact_input_");
static const V lit250("ngp_susp_contact_scale_");
static const V lit251("ngp_susp_road_impulse_");
static const V lit252("ngp_susp_contact_drop_");
static const V lit253("ngp_sci_input_");
static const V lit254("ngp_sci_scale_");
static const V lit255("ngp_sci_impulse_");
static const V lit256("ngp_sci_drop_");
static const V lit257("ngp_sci_road_input_");
static const V lit258("ngp_sci_susp_scale_");
static const V lit259("ngp_sci_contact_");
static const V lit260("ngp_sci_trust_");
static const V lit261("ngp_sci_loss_");
static const V lit262("ngp_sci_energy_");
static const V lit263("ngp_sci_hop_");
static const V lit264("ngp_sci_memory_");
static const V lit265("ngp_sci_load_");
static const V lit266("ngp_sci_load_norm_");
static const V lit267("ngp_sci_road_impact_");
static const V lit268("ngp_sci_road_shock_");
static const V lit269("ngp_sci_load_path_loss_");
static const V lit270("ngp_sci_tire_delivery_");
static const V lit271("ngp_susp_contact_input_front");
static const V lit272("ngp_susp_contact_input_rear");
static const V lit273("ngp_susp_contact_input_left");
static const V lit274("ngp_susp_contact_input_right");
static const V lit275("ngp_susp_contact_input_avg");
static const V lit276("ngp_susp_contact_scale_avg");
static const V lit277("ngp_sci_status");
static const V lit278("ngp_sci_update_count");
static const V lit279("ngp_sci_preserve_input_add");
static const V lit280("ngp_sci_avg_input");
static const V lit281("ngp_sci_avg_scale");
static const V lit282("ngp_sci_avg_impulse");
static const V lit283("ngp_sci_avg_drop");
static const V lit284("ngp_sci_max_input");
static const V lit285("ngp_sci_max_impulse");
static const V lit286("ngp_sci_max_drop");
static const V lit287("ngp_sci_contact_linked");
static const V lit288("ngp_sci_hop_linked");
static const V lit289("ngp_sci_memory_linked");
static const V lit290("ngp_sci_load_linked");
static const V lit291("ngp_sci_body_linked");
static const V lit292("ngp_sci_damage_linked");
static const V lit293("ngp_sci_feedback_linked");
static const V lit294("ngp_sci_brake_linked");
static const V lit295("ngp_sci_thermal_linked");
static const V lit296("ngp_sci_chassis_linked");
static const V lit297("ngp_sci_weight_linked");
static const V lit298("ngp_sci_damage_runtime_linked");
static const V lit299("ngp_sci_road_input_linked");
static const V lit300("ngp_sci_load_path_linked");
static const V lit301("ngp_sci_car_linked");
static const V lit302("ngp_sci_wheel_linked");
static const V lit303("init");
static const V lit304("update");
static const V lit305("RUNNING");
static const V lit306("STORE ONLY");
static const V lit307("getInput");
static const V lit308("getScale");
static const V lit309("getImpulse");
static const V lit310("getDrop");
static const V lit311("getState");
static const V lit312("input");
static const V lit313("scale");
static const V lit314("drop");
static const V lit315("debugStr");
static const V lit316("format");
static const V lit317("%s Input %.3f Scale %.2f Imp %.3f Drop %.3f / CQ %.2f Loss %.2f LoadN %.2f");
static const V lit318("Status %s / Count %.0f\n");
static const V lit319("Input %.3f %.3f %.3f %.3f / Avg %.3f Max %.3f / Preserve %.3f\n");
static const V lit320("Scale %.2f %.2f %.2f %.2f / Avg %.2f\n");
static const V lit321("Impulse %.3f %.3f %.3f %.3f / Drop %.3f %.3f %.3f %.3f\n");
static const V lit322("Links Contact:%s Hop:%s Mem:%s Load:%s Body:%s Damage:%s Brake:%s Therm:%s Chassis:%s Weight:%s Road:%s LP:%s");
static const V lit323("OK");
static const V lit324("NIL");
V load_suspension_contact_input(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(32);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(0.055));set(z,lit7,V(0.12));set(z,lit8,V(0.52));set(z,lit9,V(0.34));set(z,lit10,V(0.24));set(z,lit11,V(0.28));set(z,lit12,V(0.00012));set(z,lit13,V(0.08));set(z,lit14,V(0.08));set(z,lit15,V(0.1));set(z,lit16,V(3.5e-05));set(z,lit17,V(2e-05));set(z,lit18,V(0.7));set(z,lit19,V(1.35));set(z,lit20,V(0.0));set(z,lit21,V(1.0));set(z,lit22,V(0.95));set(z,lit23,V(1.1));set(z,lit24,V(0.45));set(z,lit25,V(0.42));set(z,lit26,V(0.18));set(z,lit27,V(0.06));set(z,lit28,V(0.04));set(z,lit29,V(0.08));set(z,lit30,V(0.05));set(z,lit31,V(0.04));set(z,lit32,V(0.06));set(z,lit33,V(0.06));set(z,lit34,V(0.04));set(z,lit35,V(0.06));set(z,lit36,V(0.1));set(z,lit37,V(0.09));set(z,lit38,V(0.05));set(z,lit39,V(0.16));set(z,lit40,V(0.08));set(z,lit41,V(0.07));set(z,lit42,V(0.1));set(z,lit43,V(0.08));set(z,lit44,V(0.07));set(z,lit45,V(0.05));set(z,lit46,V(0.04));set(z,lit47,V(0.08));set(z,lit48,V(0.04));set(z,lit49,V(0.025));set(z,lit50,V(0.25));set(z,lit51,V(3000.0));set(z,lit52,V(5e-05));set(z,lit53,V(0.05));set(z,lit54,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit55,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit78,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit79,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit80,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit81,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit82,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit83,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(1.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit21,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(1.0));set(z,lit95,V(1.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,lit108);set(z,lit109,V(0.0));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(false));set(z,lit113,V(false));set(z,lit114,V(false));set(z,lit115,V(false));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,V(false));set(z,lit121,V(false));set(z,lit122,V(false));set(z,lit123,V(false));set(z,lit124,V(false));set(z,lit125,V(false));set(z,lit126,V(999.0));set(z,lit127,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit130)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit130)))):t9;})())){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t13=first(call(e->slot(1,4),Args{e->slot(0,0),([&](){V t14=e->slot(0,1);return !truth(t14)?V(0.0):t14;})()}));refs[0].put(std::move(t13));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit131),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t15=get(e->slot(0,0),lit132);e->slot(0,7)=std::move(t15);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t16=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t16);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t19=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t19);}
{double t20=num(V(1.0)),t21=num(length(e->slot(0,1))),t22=num(V(1.0));for(double t23=t20;(t22>0?t23<=t21:t23>=t21);t23+=t22){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t23);{V t24=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t24);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t25=e->slot(1,0);return !truth(t25)?V(0.0):t25;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
{V t26=get(e->slot(0,0),lit133);e->slot(0,10)=std::move(t26);}
{V t27=get(e->slot(0,0),lit134);e->slot(0,11)=std::move(t27);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t28=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t29=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t30=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t31=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t31));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit126)};V t32=add(([&](){V t33=get(e->slot(1,3),lit126);return !truth(t33)?V(0.0):t33;})(),([&](){V t34=e->slot(0,0);return !truth(t34)?V(0.0):t34;})());refs[0].put(std::move(t32));}
if(truth(ge(get(e->slot(1,3),lit126),get(get(e->slot(1,1),lit5),lit54)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit126)};V t35=V(0.0);refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit127)};V t36=V(true);refs[0].put(std::move(t36));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit127)};V t37=V(false);refs[0].put(std::move(t37));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t38=V(!truth(e->get("ac")));return !truth(t38)?V(!truth(get(e->get("ac"),lit135))):t38;})())){return Args{V()};
}
{Args t39=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit135),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t39,0);e->slot(0,1)=arg(t39,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t40=first(call(e->slot(1,11),Args{e->slot(0,0),lit136,V()}));e->slot(0,2)=std::move(t40);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t41=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t41,0);e->slot(0,4)=arg(t41,1);}
if(truth(([&](){V t42=e->slot(0,3);return truth(t42)?ne(e->slot(0,4),V()):t42;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t43=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t43,0));refs[1].put(arg(t43,1));}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(le(e->slot(0,0),V(1.0)))){return Args{get(get(e->slot(1,1),lit5),lit22)};
}
return Args{get(get(e->slot(1,1),lit5),lit23)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t44=V(false);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t46=V(false);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t48=V(false);refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit115)};V t49=V(false);refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit117)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit118)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit119)};V t53=V(false);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit120)};V t54=V(false);refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit121)};V t55=V(false);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit122)};V t56=V(false);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit123)};V t57=V(false);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit124)};V t58=V(false);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit125)};V t59=V(false);refs[0].put(std::move(t59));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t60=first(call(e->slot(1,7),Args{lit137}));e->slot(0,0)=std::move(t60);}
{V t61=first(call(e->slot(1,7),Args{lit138}));e->slot(0,1)=std::move(t61);}
{V t62=first(call(e->slot(1,7),Args{lit139}));e->slot(0,2)=std::move(t62);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t63=([&](){V t64=([&](){V t65=ne(e->slot(0,0),V());return !truth(t65)?ne(e->slot(0,1),V()):t65;})();return !truth(t64)?ne(e->slot(0,2),V()):t64;})();refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t66=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),joined(Args{e->slot(0,0)},call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})))),V(0.2),V(1.35)}));refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t67=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),joined(Args{e->slot(0,1)},call(e->slot(1,8),Args{lit140,V(1.0)})))),V(0.25),V(1.8)}));refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t68=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),joined(Args{lit141},call(e->slot(1,8),Args{lit142,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t69=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),joined(Args{lit143},call(e->slot(1,8),Args{lit144,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t70=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),joined(Args{lit145},call(e->slot(1,8),Args{lit146,V(0.0)})))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t70));}
if(truth(([&](){V t71=([&](){V t72=ne(get(e->slot(1,3),lit96),V(0.0));return !truth(t72)?ne(get(e->slot(1,3),lit97),V(0.0)):t72;})();return !truth(t71)?ne(get(e->slot(1,3),lit98),V(0.0)):t71;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t73=V(true);refs[0].put(std::move(t73));}
}
{V t74=([&](){V t75=([&](){V t76=first(call(e->slot(1,7),Args{lit147}));return !truth(t76)?first(call(e->slot(1,7),Args{lit148})):t76;})();return !truth(t75)?first(call(e->slot(1,7),Args{lit149})):t75;})();e->slot(0,3)=std::move(t74);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit115)};V t77=ne(e->slot(0,3),V());refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t78=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t78));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;{V t79=V(0.0);e->slot(0,0)=std::move(t79);}
{V t80=V(false);e->slot(0,1)=std::move(t80);}
{double t81=num(V(0.0)),t82=num(V(3.0)),t83=num(V(1.0));for(double t84=t81;(t83>0?t84<=t82:t84>=t82);t84+=t83){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t84);{V t85=first(call(e->slot(2,7),Args{concat(lit150,e->slot(0,0))}));e->slot(0,1)=std::move(t85);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t86=V(true);refs[0].put(std::move(t86));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t87=add(e->slot(1,0),first(call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t87));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t88=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit117)};V t89=e->slot(0,1);refs[0].put(std::move(t89));}
{V t90=([&](){V t91=([&](){V t92=first(call(e->slot(1,7),Args{lit151}));return !truth(t92)?first(call(e->slot(1,7),Args{lit152})):t92;})();return !truth(t91)?first(call(e->slot(1,7),Args{lit153})):t91;})();e->slot(0,2)=std::move(t90);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit118)};V t93=ne(e->slot(0,2),V());refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t94=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t94));}
{V t95=([&](){V t96=([&](){V t97=first(call(e->slot(1,7),Args{lit154}));return !truth(t97)?first(call(e->slot(1,7),Args{lit155})):t97;})();return !truth(t96)?first(call(e->slot(1,7),Args{lit156})):t96;})();e->slot(0,3)=std::move(t95);}
{V t98=([&](){V t99=first(call(e->slot(1,7),Args{lit157}));return !truth(t99)?first(call(e->slot(1,7),Args{lit158})):t99;})();e->slot(0,4)=std::move(t98);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit119)};V t100=([&](){V t101=ne(e->slot(0,3),V());return !truth(t101)?ne(e->slot(0,4),V()):t101;})();refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t102=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t103=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t103));}
{V t104=first(call(e->slot(1,7),Args{lit159}));e->slot(0,5)=std::move(t104);}
{V t105=first(call(e->slot(1,7),Args{lit160}));e->slot(0,6)=std::move(t105);}
{V t106=first(call(e->slot(1,7),Args{lit161}));e->slot(0,7)=std::move(t106);}
{V t107=first(call(e->slot(1,7),Args{lit162}));e->slot(0,8)=std::move(t107);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit120)};V t108=([&](){V t109=([&](){V t110=([&](){V t111=ne(e->slot(0,5),V());return !truth(t111)?ne(e->slot(0,6),V()):t111;})();return !truth(t110)?ne(e->slot(0,7),V()):t110;})();return !truth(t109)?ne(e->slot(0,8),V()):t109;})();refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t112=first(call(e->slot(1,5),Args{add(first(call(e->slot(1,6),Args{sub(first(call(e->slot(1,4),Args{e->slot(0,5),V(0.5)})),first(call(e->slot(1,4),Args{e->slot(0,6),V(0.5)})))})),first(call(e->slot(1,6),Args{sub(first(call(e->slot(1,4),Args{e->slot(0,7),V(0.5)})),first(call(e->slot(1,4),Args{e->slot(0,8),V(0.5)})))}))),V(0.0),V(1.0)}));refs[0].put(std::move(t112));}
{V t113=([&](){V t114=first(call(e->slot(1,7),Args{lit163}));return !truth(t114)?first(call(e->slot(1,7),Args{lit164})):t114;})();e->slot(0,9)=std::move(t113);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit121)};V t115=ne(e->slot(0,9),V());refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t116=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t117=first(call(e->slot(1,5),Args{add(add(add(add(add(mul(get(e->slot(1,3),lit100),get(get(e->slot(1,1),lit5),lit30)),mul(get(e->slot(1,3),lit101),get(get(e->slot(1,1),lit5),lit31))),mul(get(e->slot(1,3),lit102),get(get(e->slot(1,1),lit5),lit32))),mul(get(e->slot(1,3),lit103),get(get(e->slot(1,1),lit5),lit33))),mul(get(e->slot(1,3),lit104),get(get(e->slot(1,1),lit5),lit34))),mul(get(e->slot(1,3),lit105),get(get(e->slot(1,1),lit5),lit35))),V(0.0),get(get(e->slot(1,1),lit5),lit50)}));refs[0].put(std::move(t117));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t118=call(e->slot(1,9),Args{V(),concat(lit165,e->slot(0,0)),concat(lit166,e->slot(0,0)),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0)),concat(lit169,e->slot(0,0))});e->slot(0,2)=arg(t118,0);e->slot(0,3)=arg(t118,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t119=V(true);refs[0].put(std::move(t119));}
return call(e->slot(1,5),Args{([&](){V t120=e->slot(0,2);return !truth(t120)?V(0.0):t120;})(),V(0.0),V(12000.0)});
}
{V t121=first(call(e->slot(1,7),Args{concat(lit170,e->slot(0,0))}));e->slot(0,4)=std::move(t121);}
if(truth(ne(e->slot(0,4),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(2,3),lit113)};V t122=V(true);refs[0].put(std::move(t122));}
{V t123=first(call(e->slot(2,4),Args{e->slot(1,4),V(0.0)}));e->slot(0,0)=std::move(t123);}
if(truth(gt(e->slot(0,0),V(1500.0)))){return call(e->slot(2,5),Args{e->slot(0,0),V(0.0),V(12000.0)});
}
return call(e->slot(2,5),Args{add(get(get(e->slot(2,1),lit5),lit51),e->slot(0,0)),V(0.0),V(12000.0)});
}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t124=([&](){V t125=([&](){V t126=([&](){V t127=([&](){V t128=first(call(e->slot(2,11),Args{e->slot(1,1),lit68,V()}));return !truth(t128)?first(call(e->slot(2,11),Args{e->slot(1,1),lit171,V()})):t128;})();return !truth(t127)?V():t127;})();return !truth(t126)?V():t126;})();return !truth(t125)?V():t125;})();e->slot(0,0)=std::move(t124);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,3),lit125)};V t129=V(true);refs[0].put(std::move(t129));}
return call(e->slot(2,5),Args{first(call(e->slot(2,4),Args{e->slot(0,0),get(get(e->slot(2,1),lit5),lit51)})),V(0.0),V(12000.0)});
}
}
return Args{get(get(e->slot(1,1),lit5),lit51)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t130=call(e->slot(1,9),Args{V(),concat(lit172,e->slot(0,0)),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0))});e->slot(0,1)=arg(t130,0);e->slot(0,2)=arg(t130,1);}
{Args t131=call(e->slot(1,9),Args{V(),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0))});e->slot(0,3)=arg(t131,0);e->slot(0,4)=arg(t131,1);}
{Args t132=call(e->slot(1,9),Args{V(),concat(lit177,e->slot(0,0)),concat(lit178,e->slot(0,0)),concat(lit179,e->slot(0,0))});e->slot(0,5)=arg(t132,0);e->slot(0,6)=arg(t132,1);}
{Args t133=call(e->slot(1,9),Args{V(),concat(lit180,e->slot(0,0)),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0))});e->slot(0,7)=arg(t133,0);e->slot(0,8)=arg(t133,1);}
{Args t134=call(e->slot(1,9),Args{V(),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0)),concat(lit188,e->slot(0,0))});e->slot(0,9)=arg(t134,0);e->slot(0,10)=arg(t134,1);}
if(truth(([&](){V t135=([&](){V t136=([&](){V t137=([&](){V t138=e->slot(0,2);return !truth(t138)?e->slot(0,4):t138;})();return !truth(t137)?e->slot(0,6):t137;})();return !truth(t136)?e->slot(0,8):t136;})();return !truth(t135)?e->slot(0,10):t135;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t139=V(true);refs[0].put(std::move(t139));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t140=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t141=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),get(get(e->slot(1,3),lit55),e->slot(0,0))})),V(0.0),V(1.2)}));refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t142=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),get(get(e->slot(1,3),lit56),e->slot(0,0))})),V(0.0),V(1.2)}));refs[0].put(std::move(t142));}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t143=sub(V(1.0),first(call(get(e->get("math"),lit189),Args{get(get(e->slot(1,3),lit55),e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0)),get(get(e->slot(1,3),lit57),e->slot(0,0))})));refs[0].put(std::move(t143));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t144=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t144));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t145=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t145));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t146=call(e->slot(1,9),Args{V(),concat(lit190,e->slot(0,0)),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0)),concat(lit193,e->slot(0,0)),concat(lit194,e->slot(0,0))});e->slot(0,1)=arg(t146,0);e->slot(0,2)=arg(t146,1);}
{Args t147=call(e->slot(1,9),Args{V(),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0)),concat(lit197,e->slot(0,0))});e->slot(0,3)=arg(t147,0);e->slot(0,4)=arg(t147,1);}
if(truth(([&](){V t148=e->slot(0,2);return !truth(t148)?e->slot(0,4):t148;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t149=V(true);refs[0].put(std::move(t149));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t150=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t151=first(call(e->slot(1,6),call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})));refs[0].put(std::move(t151));}
{Args t152=call(e->slot(1,9),Args{V(),concat(lit198,e->slot(0,0)),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0)),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0))});e->slot(0,5)=arg(t152,0);e->slot(0,6)=arg(t152,1);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t153=V(true);refs[0].put(std::move(t153));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t154=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t154));}
{Args t155=call(e->slot(1,9),Args{V(),concat(lit203,e->slot(0,0)),concat(lit204,e->slot(0,0)),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0)),concat(lit207,e->slot(0,0))});e->slot(0,7)=arg(t155,0);e->slot(0,8)=arg(t155,1);}
if(truth(ne(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit122)};V t156=V(true);refs[0].put(std::move(t156));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t157=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(2.0)}));refs[0].put(std::move(t157));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t158=call(e->slot(1,9),Args{V(),concat(lit208,e->slot(0,0)),concat(lit209,e->slot(0,0)),concat(lit210,e->slot(0,0)),concat(lit211,e->slot(0,0))});e->slot(0,1)=arg(t158,0);e->slot(0,2)=arg(t158,1);}
{Args t159=call(e->slot(1,9),Args{V(),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit214,e->slot(0,0)),concat(lit215,e->slot(0,0))});e->slot(0,3)=arg(t159,0);e->slot(0,4)=arg(t159,1);}
if(truth(([&](){V t160=e->slot(0,2);return !truth(t160)?e->slot(0,4):t160;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t161=V(true);refs[0].put(std::move(t161));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t162=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t163=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t163));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t164=call(e->slot(1,9),Args{V(),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0))});e->slot(0,1)=arg(t164,0);e->slot(0,2)=arg(t164,1);}
{Args t165=call(e->slot(1,9),Args{V(),concat(lit219,e->slot(0,0)),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0))});e->slot(0,3)=arg(t165,0);e->slot(0,4)=arg(t165,1);}
{Args t166=call(e->slot(1,9),Args{V(),concat(lit222,e->slot(0,0)),concat(lit223,e->slot(0,0))});e->slot(0,5)=arg(t166,0);e->slot(0,6)=arg(t166,1);}
{Args t167=call(e->slot(1,9),Args{V(),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0))});e->slot(0,7)=arg(t167,0);e->slot(0,8)=arg(t167,1);}
{Args t168=call(e->slot(1,9),Args{V(),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0))});e->slot(0,9)=arg(t168,0);e->slot(0,10)=arg(t168,1);}
{Args t169=call(e->slot(1,9),Args{V(),concat(lit205,e->slot(0,0)),concat(lit204,e->slot(0,0))});e->slot(0,11)=arg(t169,0);e->slot(0,12)=arg(t169,1);}
if(truth(([&](){V t170=([&](){V t171=([&](){V t172=([&](){V t173=([&](){V t174=e->slot(0,2);return !truth(t174)?e->slot(0,4):t174;})();return !truth(t173)?e->slot(0,6):t173;})();return !truth(t172)?e->slot(0,8):t172;})();return !truth(t171)?e->slot(0,10):t171;})();return !truth(t170)?e->slot(0,12):t170;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit122)};V t175=V(true);refs[0].put(std::move(t175));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,0))};V t176=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,0))};V t177=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t178=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t179=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t180=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit77),e->slot(0,0))};V t181=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t181));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t182=call(e->slot(1,9),Args{V(),concat(lit228,e->slot(0,0)),concat(lit229,e->slot(0,0)),concat(lit230,e->slot(0,0))});e->slot(0,1)=arg(t182,0);e->slot(0,2)=arg(t182,1);}
{Args t183=call(e->slot(1,9),Args{V(),concat(lit231,e->slot(0,0)),concat(lit232,e->slot(0,0)),concat(lit233,e->slot(0,0))});e->slot(0,3)=arg(t183,0);e->slot(0,4)=arg(t183,1);}
{Args t184=call(e->slot(1,9),Args{V(),concat(lit234,e->slot(0,0)),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0))});e->slot(0,5)=arg(t184,0);e->slot(0,6)=arg(t184,1);}
{Args t185=call(e->slot(1,9),Args{V(),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0))});e->slot(0,7)=arg(t185,0);e->slot(0,8)=arg(t185,1);}
{Args t186=call(e->slot(1,9),Args{V(),concat(lit239,e->slot(0,0)),concat(lit240,e->slot(0,0))});e->slot(0,9)=arg(t186,0);e->slot(0,10)=arg(t186,1);}
{Args t187=call(e->slot(1,9),Args{V(),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0)),concat(lit243,e->slot(0,0))});e->slot(0,11)=arg(t187,0);e->slot(0,12)=arg(t187,1);}
if(truth(([&](){V t188=([&](){V t189=([&](){V t190=([&](){V t191=([&](){V t192=e->slot(0,2);return !truth(t192)?e->slot(0,4):t192;})();return !truth(t191)?e->slot(0,6):t191;})();return !truth(t190)?e->slot(0,8):t190;})();return !truth(t189)?e->slot(0,10):t189;})();return !truth(t188)?e->slot(0,12):t188;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit123)};V t193=V(true);refs[0].put(std::move(t193));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit78),e->slot(0,0))};V t194=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit79),e->slot(0,0))};V t195=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t196=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t197=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t198=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit83),e->slot(0,0))};V t199=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,11),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t199));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t200=first(call(e->slot(1,20),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t200));}
{Args t201=call(e->slot(1,9),Args{V(),concat(lit244,e->slot(0,0)),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0)),concat(lit247,e->slot(0,0))});e->slot(0,2)=arg(t201,0);e->slot(0,3)=arg(t201,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t202=V(true);refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t203=first(call(e->slot(1,5),Args{([&](){V t204=e->slot(0,2);return !truth(t204)?V(1.0):t204;})(),V(0.0),V(2.5)}));refs[0].put(std::move(t203));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t205=first(call(e->slot(1,5),Args{divv(get(get(e->slot(1,3),lit68),e->slot(0,0)),first(call(get(e->get("math"),lit248),Args{get(get(e->slot(1,1),lit5),lit51),V(1.0)}))),V(0.0),V(2.5)}));refs[0].put(std::move(t205));}
}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t206=first(call(e->slot(1,15),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t206);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit125)};V t207=V(true);refs[0].put(std::move(t207));}
}
call(e->slot(1,21),Args{e->slot(0,0)});
call(e->slot(1,22),Args{e->slot(0,0)});
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,24),Args{e->slot(0,0)});
call(e->slot(1,25),Args{e->slot(0,0)});
call(e->slot(1,26),Args{e->slot(0,0),e->slot(0,3)});
{V t208=sub(mul(first(call(get(e->get("math"),lit248),Args{sub(get(e->slot(1,3),lit95),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit27)),mul(first(call(get(e->get("math"),lit248),Args{sub(get(e->slot(1,3),lit94),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit28)));e->slot(0,4)=std::move(t208);}
{V t209=add(mul(first(call(e->slot(1,6),Args{get(e->slot(1,3),lit96)})),get(get(e->slot(1,1),lit5),lit48)),mul(add(first(call(e->slot(1,6),Args{get(e->slot(1,3),lit97)})),first(call(e->slot(1,6),Args{get(e->slot(1,3),lit98)}))),get(get(e->slot(1,1),lit5),lit49)));e->slot(0,5)=std::move(t209);}
{V t210=first(call(e->slot(1,5),Args{sub(V(1.0),first(call(get(e->get("math"),lit189),Args{get(get(e->slot(1,3),lit83),e->slot(0,0)),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t210);}
{V t211=first(call(e->slot(1,5),Args{add(add(mul(get(get(e->slot(1,3),lit58),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit24)),mul(get(get(e->slot(1,3),lit75),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit39))),mul(e->slot(0,6),V(0.1))),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t211);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t212=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit62),e->slot(0,0)),e->slot(0,7),get(get(e->slot(1,1),lit5),lit6),e->slot(0,2)}));refs[0].put(std::move(t212));}
{V t213=first(call(e->slot(1,5),Args{add(add(add(add(mul(add(add(mul(get(get(e->slot(1,3),lit59),e->slot(0,0)),V(0.6)),mul(get(get(e->slot(1,3),lit58),e->slot(0,0)),V(0.28))),mul(get(get(e->slot(1,3),lit64),e->slot(0,0)),V(0.12))),get(get(e->slot(1,1),lit5),lit25)),mul(get(get(e->slot(1,3),lit65),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit12))),mul(get(get(e->slot(1,3),lit72),e->slot(0,0)),V(0.16))),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),V(0.14))),mul(get(get(e->slot(1,3),lit80),e->slot(0,0)),V(0.08))),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t213);}
{V t214=([&](){V t215=([&](){V t216=gt(e->slot(0,8),get(get(e->slot(1,3),lit63),e->slot(0,0)));return truth(t216)?get(get(e->slot(1,1),lit5),lit6):t216;})();return !truth(t215)?get(get(e->slot(1,1),lit5),lit26):t215;})();e->slot(0,9)=std::move(t214);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t217=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit63),e->slot(0,0)),e->slot(0,8),e->slot(0,9),e->slot(0,2)}));refs[0].put(std::move(t217));}
{V t218=first(call(e->slot(1,5),Args{add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(mul(get(get(e->slot(1,3),lit59),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit8)),mul(get(get(e->slot(1,3),lit58),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit9))),mul(sub(V(1.0),first(call(e->slot(1,5),Args{get(get(e->slot(1,3),lit56),e->slot(0,0)),V(0.0),V(1.0)}))),get(get(e->slot(1,1),lit5),lit10))),mul(get(get(e->slot(1,3),lit64),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit11))),mul(get(get(e->slot(1,3),lit66),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit13))),mul(get(get(e->slot(1,3),lit67),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit14))),mul(first(call(get(e->get("math"),lit248),Args{sub(get(get(e->slot(1,3),lit69),e->slot(0,0)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit15))),mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit70),e->slot(0,0))})),get(get(e->slot(1,1),lit5),lit16))),mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit71),e->slot(0,0))})),get(get(e->slot(1,1),lit5),lit17))),mul(get(get(e->slot(1,3),lit72),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit36))),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit37))),mul(get(get(e->slot(1,3),lit74),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit38))),mul(get(get(e->slot(1,3),lit76),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit40))),mul(get(get(e->slot(1,3),lit77),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit41))),mul(get(get(e->slot(1,3),lit78),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit42))),mul(get(get(e->slot(1,3),lit79),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit43))),mul(get(get(e->slot(1,3),lit80),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit44))),mul(get(get(e->slot(1,3),lit81),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit45))),mul(get(get(e->slot(1,3),lit82),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit46))),mul(e->slot(0,6),get(get(e->slot(1,1),lit5),lit47))),e->slot(0,4)),e->slot(0,5)),mul(get(e->slot(1,3),lit99),get(get(e->slot(1,1),lit5),lit29))),get(e->slot(1,3),lit106)),get(get(e->slot(1,1),lit5),lit20),get(get(e->slot(1,1),lit5),lit21)}));e->slot(0,10)=std::move(t218);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t219=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit60),e->slot(0,0)),mul(e->slot(0,10),first(call(e->slot(1,16),Args{e->slot(0,0)}))),get(get(e->slot(1,1),lit5),lit6),e->slot(0,2)}));refs[0].put(std::move(t219));}
{V t220=first(call(e->slot(1,5),Args{sub(add(add(V(1.0),mul(get(get(e->slot(1,3),lit60),e->slot(0,0)),V(0.25))),mul(get(get(e->slot(1,3),lit63),e->slot(0,0)),V(0.06))),mul(get(get(e->slot(1,3),lit62),e->slot(0,0)),V(0.18))),get(get(e->slot(1,1),lit5),lit18),get(get(e->slot(1,1),lit5),lit19)}));e->slot(0,11)=std::move(t220);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t221=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit61),e->slot(0,0)),e->slot(0,11),get(get(e->slot(1,1),lit5),lit7),e->slot(0,2)}));refs[0].put(std::move(t221));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit84)};V t222=mul(add(get(get(e->slot(1,3),lit60),V(0.0)),get(get(e->slot(1,3),lit60),V(1.0))),V(0.5));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit85)};V t223=mul(add(get(get(e->slot(1,3),lit60),V(2.0)),get(get(e->slot(1,3),lit60),V(3.0))),V(0.5));refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t224=mul(add(get(get(e->slot(1,3),lit60),V(0.0)),get(get(e->slot(1,3),lit60),V(2.0))),V(0.5));refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit87)};V t225=mul(add(get(get(e->slot(1,3),lit60),V(1.0)),get(get(e->slot(1,3),lit60),V(3.0))),V(0.5));refs[0].put(std::move(t225));}
{V t226=V(0.0);e->slot(0,0)=std::move(t226);}
{V t227=V(0.0);e->slot(0,1)=std::move(t227);}
{V t228=V(0.0);e->slot(0,2)=std::move(t228);}
{V t229=V(0.0);e->slot(0,3)=std::move(t229);}
{V t230=V(0.0);e->slot(0,4)=std::move(t230);}
{V t231=V(0.0);e->slot(0,5)=std::move(t231);}
{V t232=V(0.0);e->slot(0,6)=std::move(t232);}
{double t233=num(V(0.0)),t234=num(V(3.0)),t235=num(V(1.0));for(double t236=t233;(t235>0?t236<=t234:t236>=t234);t236+=t235){auto parent=e;Env storage(parent,false,4);auto e=&storage;e->slot(0,0)=V(t236);{V t237=([&](){V t238=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t238)?V(0.0):t238;})();e->slot(0,1)=std::move(t237);}
{V t239=([&](){V t240=get(get(e->slot(2,3),lit63),e->slot(0,0));return !truth(t240)?V(0.0):t240;})();e->slot(0,2)=std::move(t239);}
{V t241=([&](){V t242=get(get(e->slot(2,3),lit62),e->slot(0,0));return !truth(t242)?V(0.0):t242;})();e->slot(0,3)=std::move(t241);}
{std::array<Ref,1> refs{Ref(e,1,0)};V t243=add(e->slot(1,0),e->slot(0,1));refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t244=add(e->slot(1,1),([&](){V t245=get(get(e->slot(2,3),lit61),e->slot(0,0));return !truth(t245)?V(1.0):t245;})());refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t246=add(e->slot(1,2),e->slot(0,2));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t247=add(e->slot(1,3),e->slot(0,3));refs[0].put(std::move(t247));}
if(truth(gt(e->slot(0,1),e->slot(1,4)))){{std::array<Ref,1> refs{Ref(e,1,4)};V t248=e->slot(0,1);refs[0].put(std::move(t248));}
}
if(truth(gt(e->slot(0,2),e->slot(1,5)))){{std::array<Ref,1> refs{Ref(e,1,5)};V t249=e->slot(0,2);refs[0].put(std::move(t249));}
}
if(truth(gt(e->slot(0,3),e->slot(1,6)))){{std::array<Ref,1> refs{Ref(e,1,6)};V t250=e->slot(0,3);refs[0].put(std::move(t250));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t251=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t252=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t252));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit90)};V t253=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t254=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit21)};V t255=e->slot(0,4);refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t256=e->slot(0,5);refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t257=e->slot(0,6);refs[0].put(std::move(t257));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,10),Args{concat(lit249,e->slot(0,0)),get(get(e->slot(1,3),lit60),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit250,e->slot(0,0)),get(get(e->slot(1,3),lit61),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit251,e->slot(0,0)),get(get(e->slot(1,3),lit63),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit252,e->slot(0,0)),get(get(e->slot(1,3),lit62),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit253,e->slot(0,0)),get(get(e->slot(1,3),lit60),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit254,e->slot(0,0)),get(get(e->slot(1,3),lit61),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit255,e->slot(0,0)),get(get(e->slot(1,3),lit63),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit256,e->slot(0,0)),get(get(e->slot(1,3),lit62),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit257,e->slot(0,0)),get(get(e->slot(1,3),lit60),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit258,e->slot(0,0)),get(get(e->slot(1,3),lit61),e->slot(0,0))});
if(truth(V(!truth(get(e->slot(1,3),lit127))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit259,e->slot(0,0)),get(get(e->slot(1,3),lit55),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit176,e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit260,e->slot(0,0)),get(get(e->slot(1,3),lit57),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit261,e->slot(0,0)),get(get(e->slot(1,3),lit58),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit262,e->slot(0,0)),get(get(e->slot(1,3),lit59),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit263,e->slot(0,0)),get(get(e->slot(1,3),lit64),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit264,e->slot(0,0)),get(get(e->slot(1,3),lit66),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit265,e->slot(0,0)),get(get(e->slot(1,3),lit68),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit266,e->slot(0,0)),get(get(e->slot(1,3),lit69),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit267,e->slot(0,0)),get(get(e->slot(1,3),lit72),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit268,e->slot(0,0)),get(get(e->slot(1,3),lit73),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit269,e->slot(0,0)),get(get(e->slot(1,3),lit78),e->slot(0,0))});
call(e->slot(1,10),Args{concat(lit270,e->slot(0,0)),get(get(e->slot(1,3),lit83),e->slot(0,0))});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit271,get(e->slot(1,3),lit84)});
call(e->slot(1,10),Args{lit272,get(e->slot(1,3),lit85)});
call(e->slot(1,10),Args{lit273,get(e->slot(1,3),lit86)});
call(e->slot(1,10),Args{lit274,get(e->slot(1,3),lit87)});
call(e->slot(1,10),Args{lit275,get(e->slot(1,3),lit88)});
call(e->slot(1,10),Args{lit276,get(e->slot(1,3),lit89)});
call(e->slot(1,10),Args{lit277,get(e->slot(1,3),lit107)});
call(e->slot(1,10),Args{lit278,get(e->slot(1,3),lit109)});
call(e->slot(1,10),Args{lit279,get(e->slot(1,3),lit106)});
call(e->slot(1,10),Args{lit280,get(e->slot(1,3),lit88)});
call(e->slot(1,10),Args{lit281,get(e->slot(1,3),lit89)});
call(e->slot(1,10),Args{lit282,get(e->slot(1,3),lit90)});
call(e->slot(1,10),Args{lit283,get(e->slot(1,3),lit91)});
call(e->slot(1,10),Args{lit284,get(e->slot(1,3),lit21)});
call(e->slot(1,10),Args{lit285,get(e->slot(1,3),lit92)});
call(e->slot(1,10),Args{lit286,get(e->slot(1,3),lit93)});
if(truth(V(!truth(get(e->slot(1,3),lit127))))){return Args{};
}
call(e->slot(1,10),Args{lit287,([&](){V t258=([&](){V t259=get(e->slot(1,3),lit110);return truth(t259)?V(1.0):t259;})();return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,10),Args{lit288,([&](){V t260=([&](){V t261=get(e->slot(1,3),lit111);return truth(t261)?V(1.0):t261;})();return !truth(t260)?V(0.0):t260;})()});
call(e->slot(1,10),Args{lit289,([&](){V t262=([&](){V t263=get(e->slot(1,3),lit112);return truth(t263)?V(1.0):t263;})();return !truth(t262)?V(0.0):t262;})()});
call(e->slot(1,10),Args{lit290,([&](){V t264=([&](){V t265=get(e->slot(1,3),lit113);return truth(t265)?V(1.0):t265;})();return !truth(t264)?V(0.0):t264;})()});
call(e->slot(1,10),Args{lit291,([&](){V t266=([&](){V t267=get(e->slot(1,3),lit114);return truth(t267)?V(1.0):t267;})();return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,10),Args{lit292,([&](){V t268=([&](){V t269=get(e->slot(1,3),lit115);return truth(t269)?V(1.0):t269;})();return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,10),Args{lit293,([&](){V t270=([&](){V t271=get(e->slot(1,3),lit116);return truth(t271)?V(1.0):t271;})();return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,10),Args{lit294,([&](){V t272=([&](){V t273=get(e->slot(1,3),lit117);return truth(t273)?V(1.0):t273;})();return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,10),Args{lit295,([&](){V t274=([&](){V t275=get(e->slot(1,3),lit118);return truth(t275)?V(1.0):t275;})();return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,10),Args{lit296,([&](){V t276=([&](){V t277=get(e->slot(1,3),lit119);return truth(t277)?V(1.0):t277;})();return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,10),Args{lit297,([&](){V t278=([&](){V t279=get(e->slot(1,3),lit120);return truth(t279)?V(1.0):t279;})();return !truth(t278)?V(0.0):t278;})()});
call(e->slot(1,10),Args{lit298,([&](){V t280=([&](){V t281=get(e->slot(1,3),lit121);return truth(t281)?V(1.0):t281;})();return !truth(t280)?V(0.0):t280;})()});
call(e->slot(1,10),Args{lit299,([&](){V t282=([&](){V t283=get(e->slot(1,3),lit122);return truth(t283)?V(1.0):t283;})();return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,10),Args{lit300,([&](){V t284=([&](){V t285=get(e->slot(1,3),lit123);return truth(t285)?V(1.0):t285;})();return !truth(t284)?V(0.0):t284;})()});
call(e->slot(1,10),Args{lit301,([&](){V t286=([&](){V t287=get(e->slot(1,3),lit124);return truth(t287)?V(1.0):t287;})();return !truth(t286)?V(0.0):t286;})()});
call(e->slot(1,10),Args{lit302,([&](){V t288=([&](){V t289=get(e->slot(1,3),lit125);return truth(t289)?V(1.0):t289;})();return !truth(t288)?V(0.0):t288;})()});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t290=num(V(0.0)),t291=num(V(3.0)),t292=num(V(1.0));for(double t293=t290;(t292>0?t293<=t291:t293>=t291);t293+=t292){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t293);call(e->slot(2,29),Args{e->slot(0,0)});
}}
call(e->slot(1,30),Args{});
return Args{};});
Ref(e->slot(0,1),lit303).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t294=lit108;refs[0].put(std::move(t294));}
call(e->slot(1,28),Args{});
call(e->slot(1,31),Args{});
return Args{};}));
Ref(e->slot(0,1),lit304).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t295=add(([&](){V t296=get(e->slot(1,3),lit109);return !truth(t296)?V(0.0):t296;})(),V(1.0));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t297=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit5),lit52),get(get(e->slot(1,1),lit5),lit53)}));refs[0].put(std::move(t297));}
call(e->slot(1,13),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t298=first(call(e->slot(1,14),Args{}));refs[0].put(std::move(t298));}
}
call(e->slot(1,17),Args{});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit124)};V t299=ne(e->slot(0,1),V());refs[0].put(std::move(t299));}
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
{double t300=num(V(0.0)),t301=num(V(3.0)),t302=num(V(1.0));for(double t303=t300;(t302>0?t303<=t301:t303>=t301);t303+=t302){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t303);call(e->slot(2,27),Args{e->slot(0,0),e->slot(1,1),e->slot(1,0)});
call(e->slot(2,29),Args{e->slot(0,0)});
}}
call(e->slot(1,28),Args{});
if(truth(get(e->slot(1,3),lit124))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t304=([&](){V t305=([&](){V t306=get(e->slot(1,3),lit125);return truth(t306)?lit305:t306;})();return !truth(t305)?lit306:t305;})();refs[0].put(std::move(t304));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t307=lit306;refs[0].put(std::move(t307));}
}
call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit307).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t308=get(get(e->slot(1,3),lit60),e->slot(0,0));return !truth(t308)?V(0.0):t308;})()};
return Args{};}));
Ref(e->slot(0,1),lit308).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t309=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t309)?V(1.0):t309;})()};
return Args{};}));
Ref(e->slot(0,1),lit309).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t310=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t310)?V(0.0):t310;})()};
return Args{};}));
Ref(e->slot(0,1),lit310).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t311=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t311)?V(0.0):t311;})()};
return Args{};}));
Ref(e->slot(0,1),lit311).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,3)};
}
return Args{([&](){V z=table();set(z,lit312,([&](){V t312=get(get(e->slot(1,3),lit60),e->slot(0,0));return !truth(t312)?V(0.0):t312;})());set(z,lit313,([&](){V t313=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t313)?V(1.0):t313;})());set(z,lit63,([&](){V t314=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t314)?V(0.0):t314;})());set(z,lit314,([&](){V t315=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t315)?V(0.0):t315;})());set(z,lit55,([&](){V t316=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t316)?V(1.0):t316;})());set(z,lit56,([&](){V t317=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t317)?V(1.0):t317;})());set(z,lit58,([&](){V t318=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t318)?V(0.0):t318;})());set(z,lit68,([&](){V t319=get(get(e->slot(1,3),lit68),e->slot(0,0));return !truth(t319)?V(0.0):t319;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit315).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t320=([&](){V t321=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t321)?V(0.0):t321;})();e->slot(0,0)=std::move(t320);}
return call(get(e->get("string"),lit316),Args{lit317,first(call(e->get("tostring"),Args{([&](){V t322=get(e->slot(2,2),e->slot(0,0));return !truth(t322)?e->slot(0,0):t322;})()})),([&](){V t323=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t323)?V(0.0):t323;})(),([&](){V t324=get(get(e->slot(2,3),lit61),e->slot(0,0));return !truth(t324)?V(1.0):t324;})(),([&](){V t325=get(get(e->slot(2,3),lit63),e->slot(0,0));return !truth(t325)?V(0.0):t325;})(),([&](){V t326=get(get(e->slot(2,3),lit62),e->slot(0,0));return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(get(e->slot(2,3),lit56),e->slot(0,0));return !truth(t327)?V(1.0):t327;})(),([&](){V t328=get(get(e->slot(2,3),lit58),e->slot(0,0));return !truth(t328)?V(0.0):t328;})(),([&](){V t329=get(get(e->slot(2,3),lit69),e->slot(0,0));return !truth(t329)?V(1.0):t329;})()});
}
return call(get(e->get("string"),lit316),Args{concat(lit318,concat(lit319,concat(lit320,concat(lit321,lit322)))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit107)})),([&](){V t330=get(e->slot(1,3),lit109);return !truth(t330)?V(0.0):t330;})(),([&](){V t331=get(get(e->slot(1,3),lit60),V(0.0));return !truth(t331)?V(0.0):t331;})(),([&](){V t332=get(get(e->slot(1,3),lit60),V(1.0));return !truth(t332)?V(0.0):t332;})(),([&](){V t333=get(get(e->slot(1,3),lit60),V(2.0));return !truth(t333)?V(0.0):t333;})(),([&](){V t334=get(get(e->slot(1,3),lit60),V(3.0));return !truth(t334)?V(0.0):t334;})(),([&](){V t335=get(e->slot(1,3),lit88);return !truth(t335)?V(0.0):t335;})(),([&](){V t336=get(e->slot(1,3),lit21);return !truth(t336)?V(0.0):t336;})(),([&](){V t337=get(e->slot(1,3),lit106);return !truth(t337)?V(0.0):t337;})(),([&](){V t338=get(get(e->slot(1,3),lit61),V(0.0));return !truth(t338)?V(1.0):t338;})(),([&](){V t339=get(get(e->slot(1,3),lit61),V(1.0));return !truth(t339)?V(1.0):t339;})(),([&](){V t340=get(get(e->slot(1,3),lit61),V(2.0));return !truth(t340)?V(1.0):t340;})(),([&](){V t341=get(get(e->slot(1,3),lit61),V(3.0));return !truth(t341)?V(1.0):t341;})(),([&](){V t342=get(e->slot(1,3),lit89);return !truth(t342)?V(1.0):t342;})(),([&](){V t343=get(get(e->slot(1,3),lit63),V(0.0));return !truth(t343)?V(0.0):t343;})(),([&](){V t344=get(get(e->slot(1,3),lit63),V(1.0));return !truth(t344)?V(0.0):t344;})(),([&](){V t345=get(get(e->slot(1,3),lit63),V(2.0));return !truth(t345)?V(0.0):t345;})(),([&](){V t346=get(get(e->slot(1,3),lit63),V(3.0));return !truth(t346)?V(0.0):t346;})(),([&](){V t347=get(get(e->slot(1,3),lit62),V(0.0));return !truth(t347)?V(0.0):t347;})(),([&](){V t348=get(get(e->slot(1,3),lit62),V(1.0));return !truth(t348)?V(0.0):t348;})(),([&](){V t349=get(get(e->slot(1,3),lit62),V(2.0));return !truth(t349)?V(0.0):t349;})(),([&](){V t350=get(get(e->slot(1,3),lit62),V(3.0));return !truth(t350)?V(0.0):t350;})(),([&](){V t351=([&](){V t352=get(e->slot(1,3),lit110);return truth(t352)?lit323:t352;})();return !truth(t351)?lit324:t351;})(),([&](){V t353=([&](){V t354=get(e->slot(1,3),lit111);return truth(t354)?lit323:t354;})();return !truth(t353)?lit324:t353;})(),([&](){V t355=([&](){V t356=get(e->slot(1,3),lit112);return truth(t356)?lit323:t356;})();return !truth(t355)?lit324:t355;})(),([&](){V t357=([&](){V t358=get(e->slot(1,3),lit113);return truth(t358)?lit323:t358;})();return !truth(t357)?lit324:t357;})(),([&](){V t359=([&](){V t360=get(e->slot(1,3),lit114);return truth(t360)?lit323:t360;})();return !truth(t359)?lit324:t359;})(),([&](){V t361=([&](){V t362=get(e->slot(1,3),lit115);return truth(t362)?lit323:t362;})();return !truth(t361)?lit324:t361;})(),([&](){V t363=([&](){V t364=get(e->slot(1,3),lit117);return truth(t364)?lit323:t364;})();return !truth(t363)?lit324:t363;})(),([&](){V t365=([&](){V t366=get(e->slot(1,3),lit118);return truth(t366)?lit323:t366;})();return !truth(t365)?lit324:t365;})(),([&](){V t367=([&](){V t368=get(e->slot(1,3),lit119);return truth(t368)?lit323:t368;})();return !truth(t367)?lit324:t367;})(),([&](){V t369=([&](){V t370=get(e->slot(1,3),lit120);return truth(t370)?lit323:t370;})();return !truth(t369)?lit324:t369;})(),([&](){V t371=([&](){V t372=get(e->slot(1,3),lit122);return truth(t372)?lit323:t372;})();return !truth(t371)?lit324:t371;})(),([&](){V t373=([&](){V t374=get(e->slot(1,3),lit123);return truth(t374)?lit323:t374;})();return !truth(t373)?lit324:t373;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

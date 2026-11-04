// Generated native C++ from pinned damper_model.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("coefficientInputContract");
static const V lit3("original");
static const V lit4("brakeTemperatureInputContract");
static const V lit5("lowSpeedBump");
static const V lit6("lowSpeedRebound");
static const V lit7("highSpeedBump");
static const V lit8("highSpeedRebound");
static const V lit9("transition");
static const V lit10("maxForce");
static const V lit11("contactInputGain");
static const V lit12("contactScaleGain");
static const V lit13("roadImpulseGain");
static const V lit14("contactDropGain");
static const V lit15("forceTau");
static const V lit16("inputTau");
static const V lit17("minCoeffScale");
static const V lit18("maxCoeffScale");
static const V lit19("minTravel");
static const V lit20("maxTravel");
static const V lit21("bodyFlexCoeffLoss");
static const V lit22("bodyTorsionCoeffLoss");
static const V lit23("bodyBendingCoeffLoss");
static const V lit24("bodyStiffCoeffGain");
static const V lit25("bodyFlexTauGain");
static const V lit26("bodyStiffTauGain");
static const V lit27("bodyImpulseSoftening");
static const V lit28("tireHopCoeffGain");
static const V lit29("damageCoeffLoss");
static const V lit30("brakeHeatCoeffLoss");
static const V lit31("preserveInputCoeffGain");
static const V lit32("chassisFlexCoeffGain");
static const V lit33("damageRuntimeCoeffLoss");
static const V lit34("weightBiasCoeffGain");
static const V lit35("maxPreserveCoeffAdd");
static const V lit36("tireRoadCoeffGain");
static const V lit37("tireRoadImpulseCoeffGain");
static const V lit38("tireCombinedSlipCoeffGain");
static const V lit39("tireSlipEnergyCoeffLoss");
static const V lit40("suspIntegratedForceGain");
static const V lit41("tireForceReference");
static const V lit42("suspForceReference");
static const V lit43("tireRoadInputTau");
static const V lit44("minTireRoadInput");
static const V lit45("maxTireRoadInput");
static const V lit46("noCarReturnTau");
static const V lit47("minDt");
static const V lit48("maxDt");
static const V lit49("debugStoreInterval");
static const V lit50("FL");
static const V lit51("FR");
static const V lit52("RL");
static const V lit53("RR");
static const V lit54("force");
static const V lit55("rawForce");
static const V lit56("velocity");
static const V lit57("prevTravel");
static const V lit58("travel");
static const V lit59("initialized");
static const V lit60("contactInput");
static const V lit61("contactScale");
static const V lit62("roadImpulse");
static const V lit63("contactDrop");
static const V lit64("coeffScale");
static const V lit65("bodyRigidityScale");
static const V lit66("bodyForceTau");
static const V lit67("hop");
static const V lit68("damage");
static const V lit69("brakeTemp");
static const V lit70("preserveInputAdd");
static const V lit71("chassisFlexEnergy");
static const V lit72("damageRuntimeAdd");
static const V lit73("weightBias");
static const V lit74("preserveCoeffAdd");
static const V lit75("tireRoadInput");
static const V lit76("tireRoadImpulse");
static const V lit77("tireCombinedSlip");
static const V lit78("tireSlipEnergy");
static const V lit79("tireForceMag");
static const V lit80("suspIntegratedForce");
static const V lit81("suspIntegratedScale");
static const V lit82("suspForceFeed");
static const V lit83("hystImpact");
static const V lit84("hystRoadMemory");
static const V lit85("hystVerticalPulse");
static const V lit86("bodyRigidity");
static const V lit87("bodyFlexFactor");
static const V lit88("bodyTorsionFactor");
static const V lit89("bodyBendingFactor");
static const V lit90("bodyDampingFactor");
static const V lit91("bodyRigidityLinked");
static const V lit92("mode");
static const V lit93("INIT");
static const V lit94("avgForce");
static const V lit95("avgAbsForce");
static const V lit96("avgContactInput");
static const V lit97("avgCoeffScale");
static const V lit98("avgTireRoadInput");
static const V lit99("avgTireSlipEnergy");
static const V lit100("avgSuspForceFeed");
static const V lit101("avgVelocity");
static const V lit102("maxAbsForce");
static const V lit103("status");
static const V lit104("updateCount");
static const V lit105("wheelsValid");
static const V lit106("contactLinked");
static const V lit107("bodyLinked");
static const V lit108("tireLinked");
static const V lit109("damageLinked");
static const V lit110("brakeLinked");
static const V lit111("preserveLinked");
static const V lit112("chassisLinked");
static const V lit113("damageRuntimeLinked");
static const V lit114("weightLinked");
static const V lit115("tireForceLinked");
static const V lit116("suspensionLinked");
static const V lit117("hystLinked");
static const V lit118("travelLinked");
static const V lit119("debugStoreTimer");
static const V lit120("debugStoreNow");
static const V lit121("state");
static const V lit122("debug");
static const V lit123("huge");
static const V lit124("safeLoadRaw");
static const V lit125("safeStore");
static const V lit126("safeField");
static const V lit127("getCar");
static const V lit128("wheels");
static const V lit129("ngp_body_rigidity");
static const V lit130("ngp_body_flex_factor");
static const V lit131("ngp_body_torsion_factor");
static const V lit132("ngp_body_damping_factor");
static const V lit133("ngp_body_rigidity_update_count");
static const V lit134("ngp_body_bending_factor");
static const V lit135("ngp_sci_preserve_input_add");
static const V lit136("ngp_susp_contact_preserve_add");
static const V lit137("ngp_contact_preserve_add");
static const V lit138("ngp_chassis_flex_energy");
static const V lit139("ngp_flex_energy");
static const V lit140("ngp_chassis_energy");
static const V lit141("ngp_damage_runtime_add");
static const V lit142("ngp_condition_total");
static const V lit143("ngp_vehicle_condition_total");
static const V lit144("ngp_weight_front_bias");
static const V lit145("ngp_load_front_ratio");
static const V lit146("ngp_load_front");
static const V lit147("ngp_weight_rear_bias");
static const V lit148("ngp_load_rear_ratio");
static const V lit149("ngp_load_rear");
static const V lit150("ngp_weight_left_bias");
static const V lit151("ngp_load_left_ratio");
static const V lit152("ngp_load_left");
static const V lit153("ngp_weight_right_bias");
static const V lit154("ngp_load_right_ratio");
static const V lit155("ngp_load_right");
static const V lit156("max");
static const V lit157("ngp_susp_damper_travel_");
static const V lit158("ngp_susp_travel_");
static const V lit159("ngp_wheel_travel_");
static const V lit160("ngp_suspension_travel_");
static const V lit161("damperTravel");
static const V lit162("suspensionTravel");
static const V lit163("suspensionTravelM");
static const V lit164("suspensionLength");
static const V lit165("suspensionPosition");
static const V lit166("ngp_susp_contact_input_");
static const V lit167("ngp_sci_input_");
static const V lit168("ngp_susp_contact_scale_");
static const V lit169("ngp_sci_scale_");
static const V lit170("ngp_susp_road_impulse_");
static const V lit171("ngp_sci_impulse_");
static const V lit172("ngp_susp_contact_drop_");
static const V lit173("ngp_sci_drop_");
static const V lit174("ngp_contact_quality_");
static const V lit175("ngp_tire_contact_quality_");
static const V lit176("ngp_tcr_quality_");
static const V lit177("ngp_contact_trust_");
static const V lit178("ngp_contact_loss_");
static const V lit179("ngp_tire_contact_loss_");
static const V lit180("ngp_tcr_contact_loss_");
static const V lit181("min");
static const V lit182("ngp_tire_force_road_input_");
static const V lit183("ngp_tf_road_input_");
static const V lit184("ngp_road_input_");
static const V lit185("ngp_tire_force_combined_");
static const V lit186("ngp_tf_combined_");
static const V lit187("ngp_tire_force_lat_");
static const V lit188("ngp_tf_lat_");
static const V lit189("ngp_tire_force_long_");
static const V lit190("ngp_tf_long_");
static const V lit191("ngp_tire_force_combined_slip_");
static const V lit192("ngp_tdyn_combined_slip_");
static const V lit193("ngp_tire_dynamics_combined_slip_");
static const V lit194("ngp_contact_combined_slip_");
static const V lit195("ngp_tire_force_slip_energy_");
static const V lit196("ngp_tdyn_slip_energy_");
static const V lit197("ngp_tire_dynamics_slip_energy_");
static const V lit198("sqrt");
static const V lit199("ngp_susp_int_force_");
static const V lit200("ngp_susp_integrated_force_");
static const V lit201("ngp_susp_");
static const V lit202("ngp_susp_int_scale_");
static const V lit203("ngp_susp_integrated_scale_");
static const V lit204("ngp_tire_hop_energy_");
static const V lit205("ngp_tire_hop_");
static const V lit206("ngp_damage_wheel_");
static const V lit207("current_wheel_brake_temperature_v1");
static const V lit208("brakeTemperature");
static const V lit209("number");
static const V lit210("abs");
static const V lit211("Current damper wheel brake temperature unavailable");
static const V lit212("brakeTemperatureSource");
static const V lit213("CURRENT_WHEEL_BRAKE_TEMPERATURE");
static const V lit214("ngp_brake_temp_");
static const V lit215("ngp_brake_disc_temp_");
static const V lit216("Invalid damper brake temperature input contract");
static const V lit217("ngp_damper_hyst_impact_");
static const V lit218("ngp_damper_road_memory_");
static const V lit219("ngp_damper_vertical_pulse_");
static const V lit220("car_config_declared_blend_v1");
static const V lit221("Invalid damper coefficient input contract");
static const V lit222("FRONT");
static const V lit223("REAR");
static const V lit224("DAMP_BUMP");
static const V lit225("DAMP_FAST_BUMP");
static const V lit226("DAMP_REBOUND");
static const V lit227("DAMP_FAST_REBOUND");
static const V lit228("DAMP_FAST_BUMPTHRESHOLD");
static const V lit229("DAMP_FAST_REBOUNDTHRESHOLD");
static const V lit230("getCarConfig");
static const V lit231("Validated damper coefficient unavailable");
static const V lit232("referenceCoefficients");
static const V lit233("coefficientSource");
static const V lit234("CAR_CONFIG_DECLARED_DAMPER");
static const V lit235("NO WHEEL");
static const V lit236("HIGH BUMP");
static const V lit237("LOW BUMP");
static const V lit238("HIGH REBOUND");
static const V lit239("LOW REBOUND");
static const V lit240("ngp_damper_");
static const V lit241("ngp_damper_force_");
static const V lit242("ngp_damper_raw_");
static const V lit243("ngp_damper_velocity_");
static const V lit244("ngp_damper_travel_");
static const V lit245("ngp_damper_coeff_scale_");
static const V lit246("ngp_damper_body_scale_");
static const V lit247("ngp_damper_preserve_coeff_add_");
static const V lit248("ngp_damper_tire_road_input_");
static const V lit249("ngp_damper_susp_force_feed_");
static const V lit250("ngp_susp_external_damper_");
static const V lit251("ngp_damper_model_force_");
static const V lit252("ngp_damper_model_velocity_");
static const V lit253("ngp_damper_contact_input_");
static const V lit254("ngp_damper_road_impulse_");
static const V lit255("ngp_damper_contact_drop_");
static const V lit256("ngp_damper_tire_road_impulse_");
static const V lit257("ngp_damper_tire_combined_slip_");
static const V lit258("ngp_damper_tire_slip_energy_");
static const V lit259("ngp_damper_tire_force_mag_");
static const V lit260("ngp_damper_susp_integrated_force_");
static const V lit261("ngp_damper_susp_integrated_scale_");
static const V lit262("ngp_damper_hyst_impact_input_");
static const V lit263("ngp_damper_hyst_pulse_input_");
static const V lit264("ngp_damper_mode_");
static const V lit265("UNKNOWN");
static const V lit266("ngp_damper_status");
static const V lit267("ngp_damper_update_count");
static const V lit268("ngp_damper_wheels_valid");
static const V lit269("ngp_damper_avg_force");
static const V lit270("ngp_damper_avg_abs_force");
static const V lit271("ngp_damper_avg_contact_input");
static const V lit272("ngp_damper_avg_coeff_scale");
static const V lit273("ngp_damper_avg_tire_road_input");
static const V lit274("ngp_damper_avg_tire_slip_energy");
static const V lit275("ngp_damper_avg_susp_force_feed");
static const V lit276("ngp_damper_avg_velocity");
static const V lit277("ngp_damper_max_abs_force");
static const V lit278("ngp_damper_contact_linked");
static const V lit279("ngp_damper_body_linked");
static const V lit280("ngp_damper_tire_linked");
static const V lit281("ngp_damper_damage_linked");
static const V lit282("ngp_damper_brake_linked");
static const V lit283("ngp_damper_preserve_linked");
static const V lit284("ngp_damper_chassis_linked");
static const V lit285("ngp_damper_damage_runtime_linked");
static const V lit286("ngp_damper_weight_linked");
static const V lit287("ngp_damper_tire_force_linked");
static const V lit288("ngp_damper_suspension_linked");
static const V lit289("ngp_damper_hyst_linked");
static const V lit290("ngp_damper_travel_linked");
static const V lit291("NO CAR");
static const V lit292("init");
static const V lit293("update");
static const V lit294("NO WHEELS");
static const V lit295("RUNNING");
static const V lit296("NO WHEEL DATA");
static const V lit297("getForce");
static const V lit298("getRawForce");
static const V lit299("getVelocity");
static const V lit300("getCoeffScale");
static const V lit301("getMode");
static const V lit302("getState");
static const V lit303("debugStr");
static const V lit304("floor");
static const V lit305("format");
static const V lit306("%s Force %.0f Raw %.0f Vel %+.4f Travel %.4f\nCoeff %.2f Body %.2f Mode %s\nContact %.2f Road %.2f Drop %.2f TireRoad %.2f SuspFeed %.2f");
static const V lit307("Status %s / Count %.0f / Wheels %s\n");
static const V lit308("Force %.0f %.0f %.0f %.0f AvgAbs %.0f Max %.0f\n");
static const V lit309("Coeff %.2f %.2f %.2f %.2f Preserve %.3f\n");
static const V lit310("TireRoad %.2f %.2f %.2f %.2f SlipE %.2f\n");
static const V lit311("SuspFeed %.2f %.2f %.2f %.2f\n");
static const V lit312("Links Contact:%s Body:%s Tire:%s Susp:%s Damage:%s Brake:%s Preserve:%s Chassis:%s Weight:%s Hyst:%s");
static const V lit313("OK");
static const V lit314("NIL");
V load_damper_model(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(32);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,lit3);set(z,lit5,V(2500.0));set(z,lit6,V(3500.0));set(z,lit7,V(7000.0));set(z,lit8,V(9000.0));set(z,lit9,V(0.15));set(z,lit10,V(12000.0));set(z,lit11,V(0.22));set(z,lit12,V(0.18));set(z,lit13,V(0.3));set(z,lit14,V(0.2));set(z,lit15,V(0.035));set(z,lit16,V(0.05));set(z,lit17,V(0.7));set(z,lit18,V(1.35));set(z,lit19,V(-num(V(1.0))));set(z,lit20,V(1.0));set(z,lit21,V(0.1));set(z,lit22,V(0.08));set(z,lit23,V(0.06));set(z,lit24,V(0.06));set(z,lit25,V(0.45));set(z,lit26,V(0.12));set(z,lit27,V(0.16));set(z,lit28,V(0.08));set(z,lit29,V(0.1));set(z,lit30,V(0.05));set(z,lit31,V(0.1));set(z,lit32,V(0.06));set(z,lit33,V(0.08));set(z,lit34,V(0.05));set(z,lit35,V(0.2));set(z,lit36,V(0.14));set(z,lit37,V(0.1));set(z,lit38,V(0.04));set(z,lit39,V(0.06));set(z,lit40,V(0.055));set(z,lit41,V(2500.0));set(z,lit42,V(1200.0));set(z,lit43,V(0.04));set(z,lit44,V(0.0));set(z,lit45,V(1.5));set(z,lit46,V(0.18));set(z,lit47,V(5e-05));set(z,lit48,V(0.05));set(z,lit49,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit50);set(z,V(1.0),lit51);set(z,V(2.0),lit52);set(z,V(3.0),lit53);return z;})();e->slot(0,2)=std::move(t4);}
{V t5=([&](){V z=table();set(z,lit54,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(false));set(z,V(1.0),V(false));set(z,V(2.0),V(false));set(z,V(3.0),V(false));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.035));set(z,V(1.0),V(0.035));set(z,V(2.0),V(0.035));set(z,V(3.0),V(0.035));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit78,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit79,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit80,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit81,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit82,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit83,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit84,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit85,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit86,V(1.0));set(z,lit87,V(1.0));set(z,lit88,V(1.0));set(z,lit89,V(1.0));set(z,lit90,V(1.0));set(z,lit91,V(false));set(z,lit92,([&](){V z=table();set(z,V(0.0),lit93);set(z,V(1.0),lit93);set(z,V(2.0),lit93);set(z,V(3.0),lit93);return z;})());set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(1.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,lit93);set(z,lit104,V(0.0));set(z,lit105,V(false));set(z,lit106,V(false));set(z,lit107,V(false));set(z,lit108,V(false));set(z,lit109,V(false));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(false));set(z,lit113,V(false));set(z,lit114,V(false));set(z,lit115,V(false));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(999.0));set(z,lit120,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit121)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit122)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit123)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit123)))):t9;})())){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
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
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t15=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t15));}
return Args{([&](){V t16=([&](){V t17=lt(e->slot(0,0),V(0.0));return truth(t17)?V(-num(e->slot(0,0))):t17;})();return !truth(t16)?e->slot(0,0):t16;})()};
return Args{};});
{V t18=get(e->slot(0,0),lit124);e->slot(0,7)=std::move(t18);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t19=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t19);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t22=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t22);}
{double t23=num(V(1.0)),t24=num(length(e->slot(0,1))),t25=num(V(1.0));for(double t26=t23;(t25>0?t26<=t24:t26>=t24);t26+=t25){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t26);{V t27=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t27);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t28=e->slot(1,0);return !truth(t28)?V(0.0):t28;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t29=e->slot(0,0);return !truth(t29)?V(0.0):t29;})(),V()};
return Args{};});
{V t30=get(e->slot(0,0),lit125);e->slot(0,10)=std::move(t30);}
{V t31=get(e->slot(0,0),lit126);e->slot(0,11)=std::move(t31);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t32=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t33=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t34=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t35=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t35));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit119)};V t36=add(([&](){V t37=get(e->slot(1,3),lit119);return !truth(t37)?V(0.0):t37;})(),([&](){V t38=e->slot(0,0);return !truth(t38)?V(0.0):t38;})());refs[0].put(std::move(t36));}
if(truth(ge(get(e->slot(1,3),lit119),get(get(e->slot(1,1),lit1),lit49)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit119)};V t39=V(0.0);refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit120)};V t40=V(true);refs[0].put(std::move(t40));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit120)};V t41=V(false);refs[0].put(std::move(t41));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t42=V(!truth(e->get("ac")));return !truth(t42)?V(!truth(get(e->get("ac"),lit127))):t42;})())){return Args{V()};
}
{Args t43=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit127),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t43,0);e->slot(0,1)=arg(t43,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,7);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t44=first(call(e->slot(1,11),Args{e->slot(0,0),lit128,V()}));e->slot(0,2)=std::move(t44);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t45=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t45,0);e->slot(0,4)=arg(t45,1);}
if(truth(([&](){V t46=e->slot(0,3);return truth(t46)?e->slot(0,4):t46;})())){return Args{e->slot(0,4)};
}
{Args t47=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});e->slot(0,5)=arg(t47,0);e->slot(0,6)=arg(t47,1);}
if(truth(([&](){V t48=e->slot(0,5);return truth(t48)?e->slot(0,6):t48;})())){return Args{e->slot(0,6)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t49=V(false);refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t53=V(false);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t54=V(false);refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t55=V(false);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t56=V(false);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t57=V(false);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit115)};V t58=V(false);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t59=V(false);refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit117)};V t60=V(false);refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit118)};V t61=V(false);refs[0].put(std::move(t61));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t62=first(call(e->slot(1,7),Args{lit129}));e->slot(0,0)=std::move(t62);}
{V t63=first(call(e->slot(1,7),Args{lit130}));e->slot(0,1)=std::move(t63);}
{V t64=first(call(e->slot(1,7),Args{lit131}));e->slot(0,2)=std::move(t64);}
{V t65=first(call(e->slot(1,7),Args{lit132}));e->slot(0,3)=std::move(t65);}
{V t66=first(call(e->slot(1,7),Args{lit133}));e->slot(0,4)=std::move(t66);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t67=([&](){V t68=([&](){V t69=([&](){V t70=([&](){V t71=ne(e->slot(0,0),V());return !truth(t71)?ne(e->slot(0,1),V()):t71;})();return !truth(t70)?ne(e->slot(0,2),V()):t70;})();return !truth(t69)?ne(e->slot(0,3),V()):t69;})();return !truth(t68)?ne(e->slot(0,4),V()):t68;})();refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t72=([&](){V t73=gt(first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0));return !truth(t73)?get(e->slot(1,3),lit107):t73;})();refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t74=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit87)};V t75=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t76=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t77=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{lit134,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit90)};V t78=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t78));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;{V t79=([&](){V t80=([&](){V t81=first(call(e->slot(1,7),Args{lit135}));return !truth(t81)?first(call(e->slot(1,7),Args{lit136})):t81;})();return !truth(t80)?first(call(e->slot(1,7),Args{lit137})):t80;})();e->slot(0,0)=std::move(t79);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t82=ne(e->slot(0,0),V());refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit70)};V t83=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})),V(0.0),V(0.25)}));refs[0].put(std::move(t83));}
{V t84=([&](){V t85=([&](){V t86=first(call(e->slot(1,7),Args{lit138}));return !truth(t86)?first(call(e->slot(1,7),Args{lit139})):t86;})();return !truth(t85)?first(call(e->slot(1,7),Args{lit140})):t85;})();e->slot(0,1)=std::move(t84);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit112)};V t87=ne(e->slot(0,1),V());refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit71)};V t88=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t88));}
{V t89=([&](){V t90=([&](){V t91=first(call(e->slot(1,7),Args{lit141}));return !truth(t91)?first(call(e->slot(1,7),Args{lit142})):t91;})();return !truth(t90)?first(call(e->slot(1,7),Args{lit143})):t90;})();e->slot(0,2)=std::move(t89);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit113)};V t92=ne(e->slot(0,2),V());refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit72)};V t93=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t93));}
{V t94=([&](){V t95=([&](){V t96=first(call(e->slot(1,7),Args{lit144}));return !truth(t96)?first(call(e->slot(1,7),Args{lit145})):t96;})();return !truth(t95)?first(call(e->slot(1,7),Args{lit146})):t95;})();e->slot(0,3)=std::move(t94);}
{V t97=([&](){V t98=([&](){V t99=first(call(e->slot(1,7),Args{lit147}));return !truth(t99)?first(call(e->slot(1,7),Args{lit148})):t99;})();return !truth(t98)?first(call(e->slot(1,7),Args{lit149})):t98;})();e->slot(0,4)=std::move(t97);}
{V t100=([&](){V t101=([&](){V t102=first(call(e->slot(1,7),Args{lit150}));return !truth(t102)?first(call(e->slot(1,7),Args{lit151})):t102;})();return !truth(t101)?first(call(e->slot(1,7),Args{lit152})):t101;})();e->slot(0,5)=std::move(t100);}
{V t103=([&](){V t104=([&](){V t105=first(call(e->slot(1,7),Args{lit153}));return !truth(t105)?first(call(e->slot(1,7),Args{lit154})):t105;})();return !truth(t104)?first(call(e->slot(1,7),Args{lit155})):t104;})();e->slot(0,6)=std::move(t103);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit114)};V t106=([&](){V t107=([&](){V t108=([&](){V t109=ne(e->slot(0,3),V());return !truth(t109)?ne(e->slot(0,4),V()):t109;})();return !truth(t108)?ne(e->slot(0,5),V()):t108;})();return !truth(t107)?ne(e->slot(0,6),V()):t107;})();refs[0].put(std::move(t106));}
{V t110=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,7)=std::move(t110);}
{V t111=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,8)=std::move(t111);}
{V t112=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,9)=std::move(t112);}
{V t113=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.5)})),V(0.25),V(0.75)}));e->slot(0,10)=std::move(t113);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),V(0.0))};V t114=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,7),e->slot(0,9)),V(2.0)),V(0.5),V(1.5)}));refs[0].put(std::move(t114));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),V(1.0))};V t115=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,7),e->slot(0,10)),V(2.0)),V(0.5),V(1.5)}));refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),V(2.0))};V t116=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,8),e->slot(0,9)),V(2.0)),V(0.5),V(1.5)}));refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),V(3.0))};V t117=first(call(e->slot(1,5),Args{mul(mul(e->slot(0,8),e->slot(0,10)),V(2.0)),V(0.5),V(1.5)}));refs[0].put(std::move(t117));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(V(!truth(get(e->slot(1,3),lit91))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t118=V(1.0);refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t119=get(get(e->slot(1,1),lit1),lit15);refs[0].put(std::move(t119));}
return Args{e->slot(0,1),get(get(e->slot(1,1),lit1),lit15)};
}
{V t120=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit87),V(1.0)),V(0.0),V(0.8)}));e->slot(0,3)=std::move(t120);}
{V t121=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit86),V(1.0)),V(0.0),V(0.35)}));e->slot(0,4)=std::move(t121);}
{V t122=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit88),V(1.0)),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t122);}
{V t123=first(call(e->slot(1,5),Args{sub(get(e->slot(1,3),lit89),V(1.0)),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t123);}
{V t124=first(call(get(e->get("math"),lit156),Args{get(e->slot(1,3),lit90),V(0.5)}));e->slot(0,7)=std::move(t124);}
{V t125=add(sub(sub(sub(sub(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit1),lit21))),mul(e->slot(0,5),get(get(e->slot(1,1),lit1),lit22))),mul(e->slot(0,6),get(get(e->slot(1,1),lit1),lit23))),mul(mul(first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0),V(1.0)})),e->slot(0,3)),get(get(e->slot(1,1),lit1),lit27))),mul(e->slot(0,4),get(get(e->slot(1,1),lit1),lit24)));e->slot(0,8)=std::move(t125);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t126=first(call(e->slot(1,5),Args{e->slot(0,8),V(0.84),V(1.12)}));refs[0].put(std::move(t126));}
{V t127=divv(divv(mul(get(get(e->slot(1,1),lit1),lit15),add(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit1),lit25)))),add(V(1.0),mul(e->slot(0,4),get(get(e->slot(1,1),lit1),lit26)))),e->slot(0,7));e->slot(0,9)=std::move(t127);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t128=e->slot(0,8);refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t129=first(call(e->slot(1,5),Args{e->slot(0,9),V(0.02),V(0.08)}));refs[0].put(std::move(t129));}
return Args{mul(e->slot(0,1),e->slot(0,8)),get(get(e->slot(1,3),lit66),e->slot(0,0))};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t130=call(e->slot(1,9),Args{V(0.0),concat(lit157,e->slot(0,1)),concat(lit158,e->slot(0,1)),concat(lit159,e->slot(0,1)),concat(lit160,e->slot(0,1))});e->slot(0,2)=arg(t130,0);e->slot(0,3)=arg(t130,1);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit118)};V t131=V(true);refs[0].put(std::move(t131));}
return call(e->slot(1,5),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit19),get(get(e->slot(1,1),lit1),lit20)});
}
if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t132=([&](){V z=table();set(z,V(1.0),lit161);set(z,V(2.0),lit162);set(z,V(3.0),lit163);set(z,V(4.0),lit164);set(z,V(5.0),lit58);set(z,V(6.0),lit165);return z;})();e->slot(0,0)=std::move(t132);}
{double t133=num(V(1.0)),t134=num(length(e->slot(0,0))),t135=num(V(1.0));for(double t136=t133;(t135>0?t136<=t134:t136>=t134);t136+=t135){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t136);{V t137=first(call(e->slot(3,11),Args{e->slot(2,0),get(e->slot(1,0),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t137);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(3,5),Args{first(call(e->slot(3,4),Args{e->slot(0,1),([&](){V t138=get(get(e->slot(3,3),lit57),e->slot(2,1));return !truth(t138)?V(0.0):t138;})()})),get(get(e->slot(3,1),lit1),lit19),get(get(e->slot(3,1),lit1),lit20)});
}
}}
}
return Args{([&](){V t139=get(get(e->slot(1,3),lit57),e->slot(0,1));return !truth(t139)?V(0.0):t139;})()};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t140=([&](){V t141=first(call(e->slot(1,7),Args{concat(lit166,e->slot(0,0))}));return !truth(t141)?first(call(e->slot(1,7),Args{concat(lit167,e->slot(0,0))})):t141;})();e->slot(0,1)=std::move(t140);}
{V t142=([&](){V t143=first(call(e->slot(1,7),Args{concat(lit168,e->slot(0,0))}));return !truth(t143)?first(call(e->slot(1,7),Args{concat(lit169,e->slot(0,0))})):t143;})();e->slot(0,2)=std::move(t142);}
{V t144=([&](){V t145=first(call(e->slot(1,7),Args{concat(lit170,e->slot(0,0))}));return !truth(t145)?first(call(e->slot(1,7),Args{concat(lit171,e->slot(0,0))})):t145;})();e->slot(0,3)=std::move(t144);}
{V t146=([&](){V t147=first(call(e->slot(1,7),Args{concat(lit172,e->slot(0,0))}));return !truth(t147)?first(call(e->slot(1,7),Args{concat(lit173,e->slot(0,0))})):t147;})();e->slot(0,4)=std::move(t146);}
{V t148=([&](){V t149=([&](){V t150=first(call(e->slot(1,7),Args{concat(lit174,e->slot(0,0))}));return !truth(t150)?first(call(e->slot(1,7),Args{concat(lit175,e->slot(0,0))})):t150;})();return !truth(t149)?first(call(e->slot(1,7),Args{concat(lit176,e->slot(0,0))})):t149;})();e->slot(0,5)=std::move(t148);}
{V t151=first(call(e->slot(1,7),Args{concat(lit177,e->slot(0,0))}));e->slot(0,6)=std::move(t151);}
{V t152=([&](){V t153=([&](){V t154=first(call(e->slot(1,7),Args{concat(lit178,e->slot(0,0))}));return !truth(t154)?first(call(e->slot(1,7),Args{concat(lit179,e->slot(0,0))})):t154;})();return !truth(t153)?first(call(e->slot(1,7),Args{concat(lit180,e->slot(0,0))})):t153;})();e->slot(0,7)=std::move(t152);}
if(truth(([&](){V t155=([&](){V t156=([&](){V t157=([&](){V t158=([&](){V t159=([&](){V t160=ne(e->slot(0,1),V());return !truth(t160)?ne(e->slot(0,2),V()):t160;})();return !truth(t159)?ne(e->slot(0,3),V()):t159;})();return !truth(t158)?ne(e->slot(0,4),V()):t158;})();return !truth(t157)?ne(e->slot(0,5),V()):t157;})();return !truth(t156)?ne(e->slot(0,6),V()):t156;})();return !truth(t155)?ne(e->slot(0,7),V()):t155;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t161=V(true);refs[0].put(std::move(t161));}
}
{V t162=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),sub(V(1.0),first(call(get(e->get("math"),lit181),joined(Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(1.0)}))},call(e->slot(1,4),joined(Args{e->slot(0,6)},call(e->slot(1,4),Args{e->slot(0,5),V(1.0)})))))))})),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t162);}
{V t163=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(1.0)})),V(0.0),V(1.2)}));e->slot(0,9)=std::move(t163);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t164=first(call(e->slot(1,5),Args{first(call(get(e->get("math"),lit156),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),mul(e->slot(0,8),V(0.6))})),V(0.0),V(1.5)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t165=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),add(V(0.8),mul(e->slot(0,9),V(0.2)))})),V(0.5),V(1.7)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t166=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t167=first(call(e->slot(1,5),Args{first(call(get(e->get("math"),lit156),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),e->slot(0,8)})),V(0.0),V(1.0)}));refs[0].put(std::move(t167));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t168=([&](){V t169=([&](){V t170=first(call(e->slot(1,7),Args{concat(lit182,e->slot(0,0))}));return !truth(t170)?first(call(e->slot(1,7),Args{concat(lit183,e->slot(0,0))})):t170;})();return !truth(t169)?first(call(e->slot(1,7),Args{concat(lit184,e->slot(0,0))})):t169;})();e->slot(0,2)=std::move(t168);}
{V t171=([&](){V t172=first(call(e->slot(1,7),Args{concat(lit185,e->slot(0,0))}));return !truth(t172)?first(call(e->slot(1,7),Args{concat(lit186,e->slot(0,0))})):t172;})();e->slot(0,3)=std::move(t171);}
{V t173=([&](){V t174=first(call(e->slot(1,7),Args{concat(lit187,e->slot(0,0))}));return !truth(t174)?first(call(e->slot(1,7),Args{concat(lit188,e->slot(0,0))})):t174;})();e->slot(0,4)=std::move(t173);}
{V t175=([&](){V t176=first(call(e->slot(1,7),Args{concat(lit189,e->slot(0,0))}));return !truth(t176)?first(call(e->slot(1,7),Args{concat(lit190,e->slot(0,0))})):t176;})();e->slot(0,5)=std::move(t175);}
{V t177=([&](){V t178=([&](){V t179=([&](){V t180=first(call(e->slot(1,7),Args{concat(lit191,e->slot(0,0))}));return !truth(t180)?first(call(e->slot(1,7),Args{concat(lit192,e->slot(0,0))})):t180;})();return !truth(t179)?first(call(e->slot(1,7),Args{concat(lit193,e->slot(0,0))})):t179;})();return !truth(t178)?first(call(e->slot(1,7),Args{concat(lit194,e->slot(0,0))})):t178;})();e->slot(0,6)=std::move(t177);}
{V t181=([&](){V t182=([&](){V t183=first(call(e->slot(1,7),Args{concat(lit195,e->slot(0,0))}));return !truth(t183)?first(call(e->slot(1,7),Args{concat(lit196,e->slot(0,0))})):t183;})();return !truth(t182)?first(call(e->slot(1,7),Args{concat(lit197,e->slot(0,0))})):t182;})();e->slot(0,7)=std::move(t181);}
if(truth(([&](){V t184=([&](){V t185=([&](){V t186=([&](){V t187=([&](){V t188=ne(e->slot(0,2),V());return !truth(t188)?ne(e->slot(0,3),V()):t188;})();return !truth(t187)?ne(e->slot(0,4),V()):t187;})();return !truth(t186)?ne(e->slot(0,5),V()):t186;})();return !truth(t185)?ne(e->slot(0,6),V()):t185;})();return !truth(t184)?ne(e->slot(0,7),V()):t184;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit115)};V t189=V(true);refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t190=V(true);refs[0].put(std::move(t190));}
}
{V t191=first(call(get(e->get("math"),lit156),joined(Args{first(call(e->slot(1,6),Args{e->slot(0,3)}))},call(get(e->get("math"),lit198),Args{add(mul(first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)}))),mul(first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)}))))}))));e->slot(0,8)=std::move(t191);}
{V t192=first(call(get(e->get("math"),lit156),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),divv(e->slot(0,8),first(call(get(e->get("math"),lit156),Args{get(get(e->slot(1,1),lit1),lit41),V(1.0)})))}));e->slot(0,9)=std::move(t192);}
{std::array<Ref,1> refs{Ref(e,0,9)};V t193=first(call(e->slot(1,5),Args{e->slot(0,9),get(get(e->slot(1,1),lit1),lit44),get(get(e->slot(1,1),lit1),lit45)}));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t194=first(call(e->slot(1,12),Args{([&](){V t195=get(get(e->slot(1,3),lit75),e->slot(0,0));return !truth(t195)?V(0.0):t195;})(),e->slot(0,9),get(get(e->slot(1,1),lit1),lit43),e->slot(0,1)}));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t196=first(call(e->slot(1,5),Args{first(call(get(e->get("math"),lit156),Args{([&](){V t197=get(get(e->slot(1,3),lit75),e->slot(0,0));return !truth(t197)?V(0.0):t197;})(),([&](){V t198=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t198)?V(0.0):t198;})()})),V(0.0),V(1.5)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit77),e->slot(0,0))};V t199=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(3.0)}));refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit78),e->slot(0,0))};V t200=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit79),e->slot(0,0))};V t201=e->slot(0,8);refs[0].put(std::move(t201));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t202=([&](){V t203=([&](){V t204=first(call(e->slot(1,7),Args{concat(lit199,e->slot(0,0))}));return !truth(t204)?first(call(e->slot(1,7),Args{concat(lit200,e->slot(0,0))})):t204;})();return !truth(t203)?first(call(e->slot(1,7),Args{concat(lit201,e->slot(0,0))})):t203;})();e->slot(0,1)=std::move(t202);}
{V t205=([&](){V t206=first(call(e->slot(1,7),Args{concat(lit202,e->slot(0,0))}));return !truth(t206)?first(call(e->slot(1,7),Args{concat(lit203,e->slot(0,0))})):t206;})();e->slot(0,2)=std::move(t205);}
if(truth(([&](){V t207=ne(e->slot(0,1),V());return !truth(t207)?ne(e->slot(0,2),V()):t207;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit116)};V t208=V(true);refs[0].put(std::move(t208));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit80),e->slot(0,0))};V t209=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit81),e->slot(0,0))};V t210=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.5),V(1.7)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit82),e->slot(0,0))};V t211=first(call(e->slot(1,5),Args{divv(([&](){V t212=get(get(e->slot(1,3),lit80),e->slot(0,0));return !truth(t212)?V(0.0):t212;})(),first(call(get(e->get("math"),lit156),Args{get(get(e->slot(1,1),lit1),lit42),V(1.0)}))),V(-num(V(1.5))),V(1.5)}));refs[0].put(std::move(t211));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t213=([&](){V t214=first(call(e->slot(1,7),Args{concat(lit204,e->slot(0,0))}));return !truth(t214)?first(call(e->slot(1,7),Args{concat(lit205,e->slot(0,0))})):t214;})();e->slot(0,2)=std::move(t213);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t215=V(true);refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t216=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t216));}
{V t217=first(call(e->slot(1,7),Args{concat(lit206,e->slot(0,0))}));e->slot(0,3)=std::move(t217);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t218=V(true);refs[0].put(std::move(t218));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t219=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t219));}
{V t220=get(get(e->slot(1,1),lit1),lit4);e->slot(0,4)=std::move(t220);}
if(truth(eq(e->slot(0,4),lit207))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t221=first(call(e->slot(2,11),Args{e->slot(1,1),lit208,V()}));e->slot(0,0)=std::move(t221);}
if(truth(([&](){V t222=([&](){V t223=([&](){V t224=ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit209);return !truth(t224)?ne(e->slot(0,0),e->slot(0,0)):t224;})();return !truth(t223)?eq(first(call(get(e->get("math"),lit210),Args{e->slot(0,0)})),get(e->get("math"),lit123)):t223;})();return !truth(t222)?lt(e->slot(0,0),V(-num(V(273.15)))):t222;})())){call(e->get("error"),Args{lit211});
}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit110)};V t225=V(true);refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit69),e->slot(1,0))};V t226=e->slot(0,0);refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(2,3),lit212)};V t227=lit213;refs[0].put(std::move(t227));}
}else if(truth(eq(e->slot(0,4),lit3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t228=([&](){V t229=first(call(e->slot(2,7),Args{concat(lit214,e->slot(1,0))}));return !truth(t229)?first(call(e->slot(2,7),Args{concat(lit215,e->slot(1,0))})):t229;})();e->slot(0,0)=std::move(t228);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,3),lit110)};V t230=V(true);refs[0].put(std::move(t230));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit69),e->slot(1,0))};V t231=first(call(e->slot(2,4),Args{e->slot(0,0),V(25.0)}));refs[0].put(std::move(t231));}
}else{call(e->get("error"),Args{lit216});
}

{V t232=first(call(e->slot(1,7),Args{concat(lit217,e->slot(0,0))}));e->slot(0,5)=std::move(t232);}
{V t233=first(call(e->slot(1,7),Args{concat(lit218,e->slot(0,0))}));e->slot(0,6)=std::move(t233);}
{V t234=first(call(e->slot(1,7),Args{concat(lit219,e->slot(0,0))}));e->slot(0,7)=std::move(t234);}
if(truth(([&](){V t235=([&](){V t236=ne(e->slot(0,5),V());return !truth(t236)?ne(e->slot(0,6),V()):t236;})();return !truth(t235)?ne(e->slot(0,7),V()):t235;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit117)};V t237=V(true);refs[0].put(std::move(t237));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit83),e->slot(0,0))};V t238=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit84),e->slot(0,0))};V t239=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t239));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit85),e->slot(0,0))};V t240=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t240));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);call(e->slot(1,21),Args{e->slot(0,0)});
call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,24),Args{e->slot(0,0),e->slot(0,2)});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);{V t241=get(get(e->slot(1,1),lit1),lit2);e->slot(0,1)=std::move(t241);}
if(truth(eq(e->slot(0,1),lit3))){return Args{get(get(e->slot(1,1),lit1),lit5),get(get(e->slot(1,1),lit1),lit7),get(get(e->slot(1,1),lit1),lit6),get(get(e->slot(1,1),lit1),lit8),get(get(e->slot(1,1),lit1),lit9),get(get(e->slot(1,1),lit1),lit9)};
}
if(truth(ne(e->slot(0,1),lit220))){call(e->get("error"),Args{lit221});
}
{V t242=([&](){V t243=([&](){V t244=lt(e->slot(0,0),V(2.0));return truth(t244)?lit222:t244;})();return !truth(t243)?lit223:t243;})();e->slot(0,2)=std::move(t242);}
{V t245=([&](){V z=table();return z;})();e->slot(0,3)=std::move(t245);}
{Args t246=call(e->get("ipairs"),Args{([&](){V z=table();set(z,V(1.0),lit224);set(z,V(2.0),lit225);set(z,V(3.0),lit226);set(z,V(4.0),lit227);set(z,V(5.0),lit228);set(z,V(6.0),lit229);return z;})()});V t247=arg(t246,2);while(true){Args t248=call(arg(t246,0),Args{arg(t246,1),t247});t247=arg(t248,0);if(isnil(t247))break;auto parent=e;auto e=std::make_shared<Env>(parent,false,4);e->slot(0,0)=arg(t248,0);e->slot(0,1)=arg(t248,1);{Args t249=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit230),Args{V(0.0),e->slot(2,2),e->slot(1,1),V()});
return Args{};})});e->slot(0,2)=arg(t249,0);e->slot(0,3)=arg(t249,1);}
if(truth(([&](){V t250=([&](){V t251=([&](){V t252=([&](){V t253=V(!truth(e->slot(0,2)));return !truth(t253)?ne(first(call(e->get("type"),Args{e->slot(0,3)})),lit209):t253;})();return !truth(t252)?ne(e->slot(0,3),e->slot(0,3)):t252;})();return !truth(t251)?eq(first(call(get(e->get("math"),lit210),Args{e->slot(0,3)})),get(e->get("math"),lit123)):t251;})();return !truth(t250)?lt(e->slot(0,3),V(0.0)):t250;})())){call(e->get("error"),Args{lit231});
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),e->slot(0,1))};V t254=e->slot(0,3);refs[0].put(std::move(t254));}
}}
if(truth(V(!truth(get(e->slot(1,3),lit232))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit232)};V t255=([&](){V z=table();return z;})();refs[0].put(std::move(t255));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit232),e->slot(0,0))};V t256=e->slot(0,3);refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit233)};V t257=lit234;refs[0].put(std::move(t257));}
return Args{get(e->slot(0,3),lit224),get(e->slot(0,3),lit225),get(e->slot(0,3),lit226),get(e->slot(0,3),lit227),get(e->slot(0,3),lit228),get(e->slot(0,3),lit229)};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,20);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t258=first(call(e->slot(1,15),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t258);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t259=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit56),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit1),lit46),e->slot(0,2)}));refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t260=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit54),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit1),lit46),e->slot(0,2)}));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t261=V(0.0);refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit92),e->slot(0,0))};V t262=lit235;refs[0].put(std::move(t262));}
return Args{V(false)};
}
{V t263=first(call(e->slot(1,20),Args{e->slot(0,3),e->slot(0,0)}));e->slot(0,4)=std::move(t263);}
{V t264=V(0.0);e->slot(0,5)=std::move(t264);}
if(truth(get(get(e->slot(1,3),lit59),e->slot(0,0)))){{std::array<Ref,1> refs{Ref(e,0,5)};V t265=divv(sub(e->slot(0,4),([&](){V t266=get(get(e->slot(1,3),lit57),e->slot(0,0));return !truth(t266)?e->slot(0,4):t266;})()),first(call(get(e->get("math"),lit156),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit47)})));refs[0].put(std::move(t265));}
}else{{std::array<Ref,1> refs{Ref(e,0,5)};V t267=V(0.0);refs[0].put(std::move(t267));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t268=V(true);refs[0].put(std::move(t268));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t269=e->slot(0,4);refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t270=e->slot(0,4);refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t271=e->slot(0,5);refs[0].put(std::move(t271));}
call(e->slot(1,25),Args{e->slot(0,0),e->slot(0,2),e->slot(0,3)});
{V t272=first(call(e->slot(1,6),Args{e->slot(0,5)}));e->slot(0,6)=std::move(t272);}
{Args t273=call(e->slot(1,26),Args{e->slot(0,0)});e->slot(0,7)=arg(t273,0);e->slot(0,8)=arg(t273,1);e->slot(0,9)=arg(t273,2);e->slot(0,10)=arg(t273,3);e->slot(0,11)=arg(t273,4);e->slot(0,12)=arg(t273,5);}
{V t274=([&](){V t275=([&](){V t276=ge(e->slot(0,5),V(0.0));return truth(t276)?e->slot(0,11):t276;})();return !truth(t275)?e->slot(0,12):t275;})();e->slot(0,13)=std::move(t274);}
{V t277=first(call(e->slot(1,5),Args{divv(e->slot(0,6),first(call(get(e->get("math"),lit156),Args{e->slot(0,13),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,14)=std::move(t277);}
{Args t278=Args{};e->slot(0,15)=arg(t278,0);}
if(truth(ge(e->slot(0,5),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,15)};V t279=add(mul(e->slot(0,7),sub(V(1.0),e->slot(0,14))),mul(e->slot(0,8),e->slot(0,14)));refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit92),e->slot(0,0))};V t280=([&](){V t281=([&](){V t282=gt(e->slot(0,14),V(0.5));return truth(t282)?lit236:t282;})();return !truth(t281)?lit237:t281;})();refs[0].put(std::move(t280));}
}else{{std::array<Ref,1> refs{Ref(e,0,15)};V t283=add(mul(e->slot(0,9),sub(V(1.0),e->slot(0,14))),mul(e->slot(0,10),e->slot(0,14)));refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit92),e->slot(0,0))};V t284=([&](){V t285=([&](){V t286=gt(e->slot(0,14),V(0.5));return truth(t286)?lit238:t286;})();return !truth(t285)?lit239:t285;})();refs[0].put(std::move(t284));}
}
{V t287=sub(add(add(add(sub(sub(sub(add(add(add(add(add(sub(add(add(add(add(add(add(V(1.0),mul(get(get(e->slot(1,3),lit60),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit11))),mul(sub(get(get(e->slot(1,3),lit61),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit12))),mul(get(get(e->slot(1,3),lit62),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit13))),mul(get(get(e->slot(1,3),lit75),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit36))),mul(get(get(e->slot(1,3),lit76),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit37))),mul(get(get(e->slot(1,3),lit77),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit38))),mul(get(get(e->slot(1,3),lit78),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit39))),mul(first(call(get(e->get("math"),lit156),Args{sub(get(get(e->slot(1,3),lit81),e->slot(0,0)),V(1.0)),V(0.0)})),V(0.08))),mul(get(get(e->slot(1,3),lit67),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit28))),mul(get(get(e->slot(1,3),lit83),e->slot(0,0)),V(0.04))),mul(get(get(e->slot(1,3),lit85),e->slot(0,0)),V(0.05))),mul(get(get(e->slot(1,3),lit84),e->slot(0,0)),V(0.03))),mul(get(get(e->slot(1,3),lit63),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit14))),mul(get(get(e->slot(1,3),lit68),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit29))),mul(divv(first(call(get(e->get("math"),lit156),Args{sub(get(get(e->slot(1,3),lit69),e->slot(0,0)),V(500.0)),V(0.0)})),V(400.0)),get(get(e->slot(1,1),lit1),lit30))),mul(get(e->slot(1,3),lit70),get(get(e->slot(1,1),lit1),lit31))),mul(get(e->slot(1,3),lit71),get(get(e->slot(1,1),lit1),lit32))),mul(first(call(get(e->get("math"),lit156),Args{sub(get(get(e->slot(1,3),lit73),e->slot(0,0)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit34))),mul(get(e->slot(1,3),lit72),get(get(e->slot(1,1),lit1),lit33)));e->slot(0,16)=std::move(t287);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t288=first(call(e->slot(1,5),Args{add(add(mul(get(e->slot(1,3),lit70),get(get(e->slot(1,1),lit1),lit31)),mul(get(e->slot(1,3),lit71),get(get(e->slot(1,1),lit1),lit32))),mul(first(call(get(e->get("math"),lit156),Args{sub(get(get(e->slot(1,3),lit73),e->slot(0,0)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit34))),V(0.0),get(get(e->slot(1,1),lit1),lit35)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(e,0,16)};V t289=first(call(e->slot(1,5),Args{e->slot(0,16),get(get(e->slot(1,1),lit1),lit17),get(get(e->slot(1,1),lit1),lit18)}));refs[0].put(std::move(t289));}
{Args t290=call(e->slot(1,19),joined(Args{e->slot(0,0),mul(e->slot(0,15),e->slot(0,16))},call(get(e->get("math"),lit156),Args{get(get(e->slot(1,3),lit62),e->slot(0,0)),get(get(e->slot(1,3),lit85),e->slot(0,0))})));e->slot(0,17)=arg(t290,0);e->slot(0,18)=arg(t290,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t291=first(call(e->slot(1,5),Args{mul(e->slot(0,16),get(get(e->slot(1,3),lit65),e->slot(0,0))),mul(get(get(e->slot(1,1),lit1),lit17),V(0.8)),mul(get(get(e->slot(1,1),lit1),lit18),V(1.2))}));refs[0].put(std::move(t291));}
{V t292=add(mul(e->slot(0,17),e->slot(0,5)),mul(get(get(e->slot(1,3),lit80),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit40)));e->slot(0,19)=std::move(t292);}
{std::array<Ref,1> refs{Ref(e,0,19)};V t293=first(call(e->slot(1,5),Args{e->slot(0,19),V(-num(get(get(e->slot(1,1),lit1),lit10))),get(get(e->slot(1,1),lit1),lit10)}));refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t294=e->slot(0,19);refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t295=first(call(e->slot(1,12),Args{get(get(e->slot(1,3),lit54),e->slot(0,0)),e->slot(0,19),e->slot(0,18),e->slot(0,2)}));refs[0].put(std::move(t295));}
return Args{V(true)};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,10),Args{concat(lit240,e->slot(0,0)),([&](){V t296=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,10),Args{concat(lit241,e->slot(0,0)),([&](){V t297=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t297)?V(0.0):t297;})()});
call(e->slot(1,10),Args{concat(lit242,e->slot(0,0)),([&](){V t298=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,10),Args{concat(lit243,e->slot(0,0)),([&](){V t299=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t299)?V(0.0):t299;})()});
call(e->slot(1,10),Args{concat(lit244,e->slot(0,0)),([&](){V t300=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,10),Args{concat(lit245,e->slot(0,0)),([&](){V t301=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t301)?V(1.0):t301;})()});
call(e->slot(1,10),Args{concat(lit246,e->slot(0,0)),([&](){V t302=get(get(e->slot(1,3),lit65),e->slot(0,0));return !truth(t302)?V(1.0):t302;})()});
call(e->slot(1,10),Args{concat(lit247,e->slot(0,0)),([&](){V t303=get(get(e->slot(1,3),lit74),e->slot(0,0));return !truth(t303)?V(0.0):t303;})()});
call(e->slot(1,10),Args{concat(lit248,e->slot(0,0)),([&](){V t304=get(get(e->slot(1,3),lit75),e->slot(0,0));return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,10),Args{concat(lit249,e->slot(0,0)),([&](){V t305=get(get(e->slot(1,3),lit82),e->slot(0,0));return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,10),Args{concat(lit250,e->slot(0,0)),([&](){V t306=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,10),Args{concat(lit251,e->slot(0,0)),([&](){V t307=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t307)?V(0.0):t307;})()});
call(e->slot(1,10),Args{concat(lit252,e->slot(0,0)),([&](){V t308=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t308)?V(0.0):t308;})()});
if(truth(V(!truth(get(e->slot(1,3),lit120))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit253,e->slot(0,0)),([&](){V t309=get(get(e->slot(1,3),lit60),e->slot(0,0));return !truth(t309)?V(0.0):t309;})()});
call(e->slot(1,10),Args{concat(lit254,e->slot(0,0)),([&](){V t310=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,10),Args{concat(lit255,e->slot(0,0)),([&](){V t311=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,10),Args{concat(lit256,e->slot(0,0)),([&](){V t312=get(get(e->slot(1,3),lit76),e->slot(0,0));return !truth(t312)?V(0.0):t312;})()});
call(e->slot(1,10),Args{concat(lit257,e->slot(0,0)),([&](){V t313=get(get(e->slot(1,3),lit77),e->slot(0,0));return !truth(t313)?V(0.0):t313;})()});
call(e->slot(1,10),Args{concat(lit258,e->slot(0,0)),([&](){V t314=get(get(e->slot(1,3),lit78),e->slot(0,0));return !truth(t314)?V(0.0):t314;})()});
call(e->slot(1,10),Args{concat(lit259,e->slot(0,0)),([&](){V t315=get(get(e->slot(1,3),lit79),e->slot(0,0));return !truth(t315)?V(0.0):t315;})()});
call(e->slot(1,10),Args{concat(lit260,e->slot(0,0)),([&](){V t316=get(get(e->slot(1,3),lit80),e->slot(0,0));return !truth(t316)?V(0.0):t316;})()});
call(e->slot(1,10),Args{concat(lit261,e->slot(0,0)),([&](){V t317=get(get(e->slot(1,3),lit81),e->slot(0,0));return !truth(t317)?V(1.0):t317;})()});
call(e->slot(1,10),Args{concat(lit262,e->slot(0,0)),([&](){V t318=get(get(e->slot(1,3),lit83),e->slot(0,0));return !truth(t318)?V(0.0):t318;})()});
call(e->slot(1,10),Args{concat(lit263,e->slot(0,0)),([&](){V t319=get(get(e->slot(1,3),lit85),e->slot(0,0));return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,10),Args{concat(lit264,e->slot(0,0)),([&](){V t320=get(get(e->slot(1,3),lit92),e->slot(0,0));return !truth(t320)?lit265:t320;})()});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit266,([&](){V t321=get(e->slot(1,3),lit103);return !truth(t321)?lit265:t321;})()});
call(e->slot(1,10),Args{lit267,([&](){V t322=get(e->slot(1,3),lit104);return !truth(t322)?V(0.0):t322;})()});
call(e->slot(1,10),Args{lit268,([&](){V t323=([&](){V t324=get(e->slot(1,3),lit105);return truth(t324)?V(1.0):t324;})();return !truth(t323)?V(0.0):t323;})()});
call(e->slot(1,10),Args{lit269,([&](){V t325=get(e->slot(1,3),lit94);return !truth(t325)?V(0.0):t325;})()});
call(e->slot(1,10),Args{lit270,([&](){V t326=get(e->slot(1,3),lit95);return !truth(t326)?V(0.0):t326;})()});
call(e->slot(1,10),Args{lit271,([&](){V t327=get(e->slot(1,3),lit96);return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,10),Args{lit272,([&](){V t328=get(e->slot(1,3),lit97);return !truth(t328)?V(1.0):t328;})()});
call(e->slot(1,10),Args{lit273,([&](){V t329=get(e->slot(1,3),lit98);return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,10),Args{lit274,([&](){V t330=get(e->slot(1,3),lit99);return !truth(t330)?V(0.0):t330;})()});
call(e->slot(1,10),Args{lit275,([&](){V t331=get(e->slot(1,3),lit100);return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,10),Args{lit276,([&](){V t332=get(e->slot(1,3),lit101);return !truth(t332)?V(0.0):t332;})()});
call(e->slot(1,10),Args{lit277,([&](){V t333=get(e->slot(1,3),lit102);return !truth(t333)?V(0.0):t333;})()});
if(truth(V(!truth(get(e->slot(1,3),lit120))))){return Args{};
}
call(e->slot(1,10),Args{lit278,([&](){V t334=([&](){V t335=get(e->slot(1,3),lit106);return truth(t335)?V(1.0):t335;})();return !truth(t334)?V(0.0):t334;})()});
call(e->slot(1,10),Args{lit279,([&](){V t336=([&](){V t337=get(e->slot(1,3),lit107);return truth(t337)?V(1.0):t337;})();return !truth(t336)?V(0.0):t336;})()});
call(e->slot(1,10),Args{lit280,([&](){V t338=([&](){V t339=get(e->slot(1,3),lit108);return truth(t339)?V(1.0):t339;})();return !truth(t338)?V(0.0):t338;})()});
call(e->slot(1,10),Args{lit281,([&](){V t340=([&](){V t341=get(e->slot(1,3),lit109);return truth(t341)?V(1.0):t341;})();return !truth(t340)?V(0.0):t340;})()});
call(e->slot(1,10),Args{lit282,([&](){V t342=([&](){V t343=get(e->slot(1,3),lit110);return truth(t343)?V(1.0):t343;})();return !truth(t342)?V(0.0):t342;})()});
call(e->slot(1,10),Args{lit283,([&](){V t344=([&](){V t345=get(e->slot(1,3),lit111);return truth(t345)?V(1.0):t345;})();return !truth(t344)?V(0.0):t344;})()});
call(e->slot(1,10),Args{lit284,([&](){V t346=([&](){V t347=get(e->slot(1,3),lit112);return truth(t347)?V(1.0):t347;})();return !truth(t346)?V(0.0):t346;})()});
call(e->slot(1,10),Args{lit285,([&](){V t348=([&](){V t349=get(e->slot(1,3),lit113);return truth(t349)?V(1.0):t349;})();return !truth(t348)?V(0.0):t348;})()});
call(e->slot(1,10),Args{lit286,([&](){V t350=([&](){V t351=get(e->slot(1,3),lit114);return truth(t351)?V(1.0):t351;})();return !truth(t350)?V(0.0):t350;})()});
call(e->slot(1,10),Args{lit287,([&](){V t352=([&](){V t353=get(e->slot(1,3),lit115);return truth(t353)?V(1.0):t353;})();return !truth(t352)?V(0.0):t352;})()});
call(e->slot(1,10),Args{lit288,([&](){V t354=([&](){V t355=get(e->slot(1,3),lit116);return truth(t355)?V(1.0):t355;})();return !truth(t354)?V(0.0):t354;})()});
call(e->slot(1,10),Args{lit289,([&](){V t356=([&](){V t357=get(e->slot(1,3),lit117);return truth(t357)?V(1.0):t357;})();return !truth(t356)?V(0.0):t356;})()});
call(e->slot(1,10),Args{lit290,([&](){V t358=([&](){V t359=get(e->slot(1,3),lit118);return truth(t359)?V(1.0):t359;})();return !truth(t358)?V(0.0):t358;})()});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t360=num(V(0.0)),t361=num(V(3.0)),t362=num(V(1.0));for(double t363=t360;(t362>0?t363<=t361:t363>=t361);t363+=t362){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t363);call(e->slot(2,28),Args{e->slot(0,0)});
}}
call(e->slot(1,29),Args{});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t364=num(V(0.0)),t365=num(V(3.0)),t366=num(V(1.0));for(double t367=t364;(t366>0?t367<=t365:t367>=t365);t367+=t366){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t367);{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit54),e->slot(0,0))};V t368=first(call(e->slot(2,12),Args{get(get(e->slot(2,3),lit54),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit46),e->slot(1,0)}));refs[0].put(std::move(t368));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit55),e->slot(0,0))};V t369=V(0.0);refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit56),e->slot(0,0))};V t370=first(call(e->slot(2,12),Args{get(get(e->slot(2,3),lit56),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit46),e->slot(1,0)}));refs[0].put(std::move(t370));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit60),e->slot(0,0))};V t371=first(call(e->slot(2,12),Args{get(get(e->slot(2,3),lit60),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit46),e->slot(1,0)}));refs[0].put(std::move(t371));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit62),e->slot(0,0))};V t372=first(call(e->slot(2,12),Args{get(get(e->slot(2,3),lit62),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit46),e->slot(1,0)}));refs[0].put(std::move(t372));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit63),e->slot(0,0))};V t373=first(call(e->slot(2,12),Args{get(get(e->slot(2,3),lit63),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit46),e->slot(1,0)}));refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit64),e->slot(0,0))};V t374=first(call(e->slot(2,12),Args{get(get(e->slot(2,3),lit64),e->slot(0,0)),V(1.0),get(get(e->slot(2,1),lit1),lit46),e->slot(1,0)}));refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit92),e->slot(0,0))};V t375=lit291;refs[0].put(std::move(t375));}
call(e->slot(2,28),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t376=mul(add(add(add(get(get(e->slot(1,3),lit54),V(0.0)),get(get(e->slot(1,3),lit54),V(1.0))),get(get(e->slot(1,3),lit54),V(2.0))),get(get(e->slot(1,3),lit54),V(3.0))),V(0.25));refs[0].put(std::move(t376));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t377=mul(add(add(add(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit54),V(0.0))})),first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit54),V(1.0))}))),first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit54),V(2.0))}))),first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit54),V(3.0))}))),V(0.25));refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t378=V(0.0);refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t379=mul(add(add(add(get(get(e->slot(1,3),lit64),V(0.0)),get(get(e->slot(1,3),lit64),V(1.0))),get(get(e->slot(1,3),lit64),V(2.0))),get(get(e->slot(1,3),lit64),V(3.0))),V(0.25));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t380=V(0.0);refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t381=V(0.0);refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t382=V(0.0);refs[0].put(std::move(t382));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t383=V(0.0);refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t384=V(0.0);refs[0].put(std::move(t384));}
return Args{};});
Ref(e->slot(0,1),lit292).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t385=lit93;refs[0].put(std::move(t385));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t386=V(false);refs[0].put(std::move(t386));}
call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit293).put(native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t387=add(([&](){V t388=get(e->slot(1,3),lit104);return !truth(t388)?V(0.0):t388;})(),V(1.0));refs[0].put(std::move(t387));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t389=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit47),get(get(e->slot(1,1),lit1),lit48)}));refs[0].put(std::move(t389));}
call(e->slot(1,13),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t390=([&](){V t391=e->slot(0,1);return !truth(t391)?first(call(e->slot(1,14),Args{})):t391;})();refs[0].put(std::move(t390));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t392=lit291;refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t393=V(false);refs[0].put(std::move(t393));}
call(e->slot(1,16),Args{});
call(e->slot(1,31),Args{e->slot(0,0)});
call(e->slot(1,29),Args{});
return Args{};
}
{V t394=first(call(e->slot(1,11),Args{e->slot(0,1),lit128,V()}));e->slot(0,3)=std::move(t394);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t395=lit294;refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t396=V(false);refs[0].put(std::move(t396));}
call(e->slot(1,16),Args{});
call(e->slot(1,31),Args{e->slot(0,0)});
call(e->slot(1,29),Args{});
return Args{};
}
call(e->slot(1,16),Args{});
call(e->slot(1,17),Args{});
call(e->slot(1,18),Args{});
{V t397=V(0.0);e->slot(0,4)=std::move(t397);}
{V t398=V(0.0);e->slot(0,5)=std::move(t398);}
{V t399=V(0.0);e->slot(0,6)=std::move(t399);}
{V t400=V(0.0);e->slot(0,7)=std::move(t400);}
{V t401=V(0.0);e->slot(0,8)=std::move(t401);}
{V t402=V(0.0);e->slot(0,9)=std::move(t402);}
{V t403=V(0.0);e->slot(0,10)=std::move(t403);}
{V t404=V(0.0);e->slot(0,11)=std::move(t404);}
{V t405=V(0.0);e->slot(0,12)=std::move(t405);}
{V t406=V(0.0);e->slot(0,13)=std::move(t406);}
{double t407=num(V(0.0)),t408=num(V(3.0)),t409=num(V(1.0));for(double t410=t407;(t409>0?t410<=t408:t410>=t408);t410+=t409){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t410);{V t411=first(call(e->slot(2,27),Args{e->slot(0,0),e->slot(1,1),e->slot(1,0)}));e->slot(0,1)=std::move(t411);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,1,4)};V t412=add(e->slot(1,4),V(1.0));refs[0].put(std::move(t412));}
}
{std::array<Ref,1> refs{Ref(e,1,5)};V t413=add(e->slot(1,5),([&](){V t414=get(get(e->slot(2,3),lit54),e->slot(0,0));return !truth(t414)?V(0.0):t414;})());refs[0].put(std::move(t413));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t415=add(e->slot(1,6),first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit54),e->slot(0,0))})));refs[0].put(std::move(t415));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t416=add(e->slot(1,7),([&](){V t417=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t417)?V(0.0):t417;})());refs[0].put(std::move(t416));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t418=add(e->slot(1,8),([&](){V t419=get(get(e->slot(2,3),lit64),e->slot(0,0));return !truth(t419)?V(1.0):t419;})());refs[0].put(std::move(t418));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t420=add(e->slot(1,9),([&](){V t421=get(get(e->slot(2,3),lit75),e->slot(0,0));return !truth(t421)?V(0.0):t421;})());refs[0].put(std::move(t420));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t422=add(e->slot(1,10),([&](){V t423=get(get(e->slot(2,3),lit78),e->slot(0,0));return !truth(t423)?V(0.0):t423;})());refs[0].put(std::move(t422));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t424=add(e->slot(1,11),first(call(e->slot(2,6),Args{([&](){V t425=get(get(e->slot(2,3),lit82),e->slot(0,0));return !truth(t425)?V(0.0):t425;})()})));refs[0].put(std::move(t424));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t426=add(e->slot(1,12),([&](){V t427=get(get(e->slot(2,3),lit56),e->slot(0,0));return !truth(t427)?V(0.0):t427;})());refs[0].put(std::move(t426));}
{std::array<Ref,1> refs{Ref(e,1,13)};V t428=first(call(get(e->get("math"),lit156),joined(Args{e->slot(1,13)},call(e->slot(2,6),Args{get(get(e->slot(2,3),lit54),e->slot(0,0))}))));refs[0].put(std::move(t428));}
call(e->slot(2,28),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t429=gt(e->slot(0,4),V(0.0));refs[0].put(std::move(t429));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t430=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t431=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t431));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t432=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t433=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t433));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t434=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t435=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t435));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t436=mul(e->slot(0,11),V(0.25));refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t437=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t437));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t438=e->slot(0,13);refs[0].put(std::move(t438));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t439=([&](){V t440=([&](){V t441=get(e->slot(1,3),lit105);return truth(t441)?lit295:t441;})();return !truth(t440)?lit296:t440;})();refs[0].put(std::move(t439));}
call(e->slot(1,29),Args{});
return Args{};}));
Ref(e->slot(0,1),lit297).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t442=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t442)?V(0.0):t442;})()};
return Args{};}));
Ref(e->slot(0,1),lit298).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t443=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t443)?V(0.0):t443;})()};
return Args{};}));
Ref(e->slot(0,1),lit299).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t444=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t444)?V(0.0):t444;})()};
return Args{};}));
Ref(e->slot(0,1),lit300).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t445=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t445)?V(1.0):t445;})()};
return Args{};}));
Ref(e->slot(0,1),lit301).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t446=get(get(e->slot(1,3),lit92),e->slot(0,0));return !truth(t446)?lit265:t446;})()};
return Args{};}));
Ref(e->slot(0,1),lit302).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,3)};
}
return Args{([&](){V z=table();set(z,lit54,([&](){V t447=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t447)?V(0.0):t447;})());set(z,lit55,([&](){V t448=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t448)?V(0.0):t448;})());set(z,lit56,([&](){V t449=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t449)?V(0.0):t449;})());set(z,lit58,([&](){V t450=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t450)?V(0.0):t450;})());set(z,lit64,([&](){V t451=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t451)?V(1.0):t451;})());set(z,lit92,([&](){V t452=get(get(e->slot(1,3),lit92),e->slot(0,0));return !truth(t452)?lit265:t452;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit303).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t453=first(call(get(e->get("math"),lit304),call(e->slot(2,5),Args{e->slot(1,0),V(0.0),V(3.0)})));e->slot(0,0)=std::move(t453);}
return call(get(e->get("string"),lit305),Args{lit306,([&](){V t454=get(e->slot(2,2),e->slot(0,0));return !truth(t454)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t454;})(),([&](){V t455=get(get(e->slot(2,3),lit54),e->slot(0,0));return !truth(t455)?V(0.0):t455;})(),([&](){V t456=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t456)?V(0.0):t456;})(),([&](){V t457=get(get(e->slot(2,3),lit56),e->slot(0,0));return !truth(t457)?V(0.0):t457;})(),([&](){V t458=get(get(e->slot(2,3),lit58),e->slot(0,0));return !truth(t458)?V(0.0):t458;})(),([&](){V t459=get(get(e->slot(2,3),lit64),e->slot(0,0));return !truth(t459)?V(1.0):t459;})(),([&](){V t460=get(get(e->slot(2,3),lit65),e->slot(0,0));return !truth(t460)?V(1.0):t460;})(),first(call(e->get("tostring"),Args{([&](){V t461=get(get(e->slot(2,3),lit92),e->slot(0,0));return !truth(t461)?lit265:t461;})()})),([&](){V t462=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t462)?V(0.0):t462;})(),([&](){V t463=get(get(e->slot(2,3),lit62),e->slot(0,0));return !truth(t463)?V(0.0):t463;})(),([&](){V t464=get(get(e->slot(2,3),lit63),e->slot(0,0));return !truth(t464)?V(0.0):t464;})(),([&](){V t465=get(get(e->slot(2,3),lit75),e->slot(0,0));return !truth(t465)?V(0.0):t465;})(),([&](){V t466=get(get(e->slot(2,3),lit82),e->slot(0,0));return !truth(t466)?V(0.0):t466;})()});
}
return call(get(e->get("string"),lit305),Args{concat(lit307,concat(lit308,concat(lit309,concat(lit310,concat(lit311,lit312))))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit103)})),([&](){V t467=get(e->slot(1,3),lit104);return !truth(t467)?V(0.0):t467;})(),([&](){V t468=([&](){V t469=get(e->slot(1,3),lit105);return truth(t469)?lit313:t469;})();return !truth(t468)?lit314:t468;})(),([&](){V t470=get(get(e->slot(1,3),lit54),V(0.0));return !truth(t470)?V(0.0):t470;})(),([&](){V t471=get(get(e->slot(1,3),lit54),V(1.0));return !truth(t471)?V(0.0):t471;})(),([&](){V t472=get(get(e->slot(1,3),lit54),V(2.0));return !truth(t472)?V(0.0):t472;})(),([&](){V t473=get(get(e->slot(1,3),lit54),V(3.0));return !truth(t473)?V(0.0):t473;})(),([&](){V t474=get(e->slot(1,3),lit95);return !truth(t474)?V(0.0):t474;})(),([&](){V t475=get(e->slot(1,3),lit102);return !truth(t475)?V(0.0):t475;})(),([&](){V t476=get(get(e->slot(1,3),lit64),V(0.0));return !truth(t476)?V(1.0):t476;})(),([&](){V t477=get(get(e->slot(1,3),lit64),V(1.0));return !truth(t477)?V(1.0):t477;})(),([&](){V t478=get(get(e->slot(1,3),lit64),V(2.0));return !truth(t478)?V(1.0):t478;})(),([&](){V t479=get(get(e->slot(1,3),lit64),V(3.0));return !truth(t479)?V(1.0):t479;})(),([&](){V t480=get(e->slot(1,3),lit70);return !truth(t480)?V(0.0):t480;})(),([&](){V t481=get(get(e->slot(1,3),lit75),V(0.0));return !truth(t481)?V(0.0):t481;})(),([&](){V t482=get(get(e->slot(1,3),lit75),V(1.0));return !truth(t482)?V(0.0):t482;})(),([&](){V t483=get(get(e->slot(1,3),lit75),V(2.0));return !truth(t483)?V(0.0):t483;})(),([&](){V t484=get(get(e->slot(1,3),lit75),V(3.0));return !truth(t484)?V(0.0):t484;})(),([&](){V t485=get(e->slot(1,3),lit99);return !truth(t485)?V(0.0):t485;})(),([&](){V t486=get(get(e->slot(1,3),lit82),V(0.0));return !truth(t486)?V(0.0):t486;})(),([&](){V t487=get(get(e->slot(1,3),lit82),V(1.0));return !truth(t487)?V(0.0):t487;})(),([&](){V t488=get(get(e->slot(1,3),lit82),V(2.0));return !truth(t488)?V(0.0):t488;})(),([&](){V t489=get(get(e->slot(1,3),lit82),V(3.0));return !truth(t489)?V(0.0):t489;})(),([&](){V t490=([&](){V t491=get(e->slot(1,3),lit106);return truth(t491)?lit313:t491;})();return !truth(t490)?lit314:t490;})(),([&](){V t492=([&](){V t493=get(e->slot(1,3),lit107);return truth(t493)?lit313:t493;})();return !truth(t492)?lit314:t492;})(),([&](){V t494=([&](){V t495=get(e->slot(1,3),lit115);return truth(t495)?lit313:t495;})();return !truth(t494)?lit314:t494;})(),([&](){V t496=([&](){V t497=get(e->slot(1,3),lit116);return truth(t497)?lit313:t497;})();return !truth(t496)?lit314:t496;})(),([&](){V t498=([&](){V t499=get(e->slot(1,3),lit109);return truth(t499)?lit313:t499;})();return !truth(t498)?lit314:t498;})(),([&](){V t500=([&](){V t501=get(e->slot(1,3),lit110);return truth(t501)?lit313:t501;})();return !truth(t500)?lit314:t500;})(),([&](){V t502=([&](){V t503=get(e->slot(1,3),lit111);return truth(t503)?lit313:t503;})();return !truth(t502)?lit314:t502;})(),([&](){V t504=([&](){V t505=get(e->slot(1,3),lit112);return truth(t505)?lit313:t505;})();return !truth(t504)?lit314:t504;})(),([&](){V t506=([&](){V t507=get(e->slot(1,3),lit114);return truth(t507)?lit313:t507;})();return !truth(t506)?lit314:t506;})(),([&](){V t508=([&](){V t509=get(e->slot(1,3),lit117);return truth(t509)?lit313:t509;})();return !truth(t508)?lit314:t508;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

// Generated native C++ from pinned tire_thermal_brush.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("heatRolling");
static const V lit3("heatFriction");
static const V lit4("condRoad");
static const V lit5("condAir");
static const V lit6("condInternal");
static const V lit7("treadHeatCapacity");
static const V lit8("carcassHeatCapacity");
static const V lit9("treadToCarcassRate");
static const V lit10("carcassToAmbientRate");
static const V lit11("staticFriction");
static const V lit12("slidingMult");
static const V lit13("optimalTemp");
static const V lit14("tempWidth");
static const V lit15("coldMuMin");
static const V lit16("hotMuMin");
static const V lit17("minMu");
static const V lit18("maxMu");
static const V lit19("corneringStiffness");
static const V lit20("loadReference");
static const V lit21("minLoad");
static const V lit22("maxLoad");
static const V lit23("maxSlipAngle");
static const V lit24("maxSlipRatio");
static const V lit25("maxSlipVelocity");
static const V lit26("complianceGripDropGain");
static const V lit27("complianceDelayHeatGain");
static const V lit28("contactLossMuDropGain");
static const V lit29("contactQualityMuGain");
static const V lit30("memoryHeatGain");
static const V lit31("memoryMuDropGain");
static const V lit32("hopHeatGain");
static const V lit33("hopMuDropGain");
static const V lit34("carcassHeatSeedGain");
static const V lit35("carcassHistoryHeatGain");
static const V lit36("carcassHysteresisHeatGain");
static const V lit37("carcassSupportMuGain");
static const V lit38("carcassGripGateMuGain");
static const V lit39("sidewallHeatGain");
static const V lit40("deformationHeatGain");
static const V lit41("bristleHeatGain");
static const V lit42("tireLimitMuDropGain");
static const V lit43("slipEnergyHeatGain");
static const V lit44("combinedSlipHeatGain");
static const V lit45("roadShockHeatGain");
static const V lit46("loadPathLossHeatGain");
static const V lit47("loadPathWorkHeatGain");
static const V lit48("ultraCamberMuInfluence");
static const V lit49("ultraAlphaOffsetScale");
static const V lit50("loadHeatGain");
static const V lit51("lowLoadCoolingGain");
static const V lit52("fyRelaxLossGain");
static const V lit53("tempMin");
static const V lit54("tempMax");
static const V lit55("muTau");
static const V lit56("forceTau");
static const V lit57("heatTau");
static const V lit58("minDt");
static const V lit59("maxDt");
static const V lit60("debugStoreInterval");
static const V lit61("state");
static const V lit62("treadTemp");
static const V lit63("carcassTemp");
static const V lit64("muRaw");
static const V lit65("mu");
static const V lit66("muScale");
static const V lit67("alpha");
static const V lit68("slipRatio");
static const V lit69("slipVelocity");
static const V lit70("load");
static const V lit71("fyRaw");
static const V lit72("fy");
static const V lit73("brushXi");
static const V lit74("sliding");
static const V lit75("qGen");
static const V lit76("qLoss");
static const V lit77("wheels");
static const V lit78("avgTreadTemp");
static const V lit79("avgCarcassTemp");
static const V lit80("avgMuScale");
static const V lit81("avgFyAbs");
static const V lit82("avgSliding");
static const V lit83("maxTreadTemp");
static const V lit84("minMuScale");
static const V lit85("maxSliding");
static const V lit86("activeCount");
static const V lit87("status");
static const V lit88("INIT");
static const V lit89("updateCount");
static const V lit90("wheelsValid");
static const V lit91("tireStateLinked");
static const V lit92("complianceLinked");
static const V lit93("contactLinked");
static const V lit94("memoryLinked");
static const V lit95("hopLinked");
static const V lit96("carcassLinked");
static const V lit97("dynamicsLinked");
static const V lit98("roadLinked");
static const V lit99("loadPathLinked");
static const V lit100("ultraChassisLinked");
static const V lit101("debugStoreTimer");
static const V lit102("debugStoreNow");
static const V lit103("active");
static const V lit104("compliance");
static const V lit105("responseDelay");
static const V lit106("contactLoss");
static const V lit107("contactQuality");
static const V lit108("memory");
static const V lit109("hop");
static const V lit110("carcassSupport");
static const V lit111("carcassGripGate");
static const V lit112("carcassHeatSeed");
static const V lit113("carcassHistoryStress");
static const V lit114("carcassHysteresis");
static const V lit115("sidewallEnergy");
static const V lit116("deformation");
static const V lit117("bristleEnergy");
static const V lit118("tireLimit");
static const V lit119("tireGrip");
static const V lit120("combinedSlip");
static const V lit121("slipEnergy");
static const V lit122("roadShock");
static const V lit123("pathLoss");
static const V lit124("pathWork");
static const V lit125("ucMuCamber");
static const V lit126("ucAlphaOffset");
static const V lit127("debug");
static const V lit128("huge");
static const V lit129("abs");
static const V lit130("safeLoadRaw");
static const V lit131("safeStore");
static const V lit132("safeField");
static const V lit133("getCar");
static const V lit134("ngp_tire_state_speed_ms");
static const V lit135("ngp_vehicle_speed_ms");
static const V lit136("ngp_speed_ms");
static const V lit137("ngp_tire_state_speed_kmh");
static const V lit138("ngp_vehicle_speed_kmh");
static const V lit139("ngp_speed_kmh");
static const V lit140("speedKmh");
static const V lit141("velocity");
static const V lit142("number");
static const V lit143("length");
static const V lit144("localVelocity");
static const V lit145("table");
static const V lit146("x");
static const V lit147("y");
static const V lit148("z");
static const V lit149("sqrt");
static const V lit150("getSim");
static const V lit151("ngp_track_temp");
static const V lit152("ngp_road_temp");
static const V lit153("ngp_surface_temp");
static const V lit154("roadTemperature");
static const V lit155("ngp_ambient_temp");
static const V lit156("ngp_air_temp");
static const V lit157("ambientTemperature");
static const V lit158("ngp_tire_state_load_");
static const V lit159("ngp_tire_load_");
static const V lit160("ngp_tire_carcass_load_");
static const V lit161("ngp_cp_load_");
static const V lit162("ngp_tc_load_");
static const V lit163("ngp_wheel_load_");
static const V lit164("ngp_load_wheel_");
static const V lit165("loadK");
static const V lit166("ngp_dlt_load_");
static const V lit167("ngp_tire_alpha_eff_");
static const V lit168("ngp_tire_effective_slip_angle_");
static const V lit169("ngp_tdyn_effective_slip_angle_");
static const V lit170("ngp_tire_force_effective_slip_angle_");
static const V lit171("ngp_tire_slip_angle_");
static const V lit172("ngp_slip_angle_");
static const V lit173("ngp_filtered_slip_angle_");
static const V lit174("ngp_contact_slip_angle_");
static const V lit175("ngp_tire_carcass_slip_angle_");
static const V lit176("slipAngle");
static const V lit177("ngp_tire_effective_slip_ratio_");
static const V lit178("ngp_tdyn_effective_slip_ratio_");
static const V lit179("ngp_tire_force_effective_slip_ratio_");
static const V lit180("ngp_tire_slip_ratio_");
static const V lit181("ngp_slip_ratio_");
static const V lit182("ngp_filtered_slip_ratio_");
static const V lit183("ngp_contact_slip_ratio_");
static const V lit184("ngp_tire_carcass_slip_ratio_");
static const V lit185("ngp_tire_compliance_");
static const V lit186("ngp_tcomp_compliance_");
static const V lit187("ngp_tire_response_delay");
static const V lit188("ngp_tyre_response_delay");
static const V lit189("ngp_tcomp_response_delay");
static const V lit190("ngp_tire_contact_loss_");
static const V lit191("ngp_tcr_contact_loss_");
static const V lit192("ngp_contact_loss_");
static const V lit193("ngp_tire_contact_quality_");
static const V lit194("ngp_tcr_quality_");
static const V lit195("ngp_contact_quality_");
static const V lit196("ngp_tc_contact_");
static const V lit197("ngp_tire_memory_");
static const V lit198("ngp_tyre_memory_");
static const V lit199("ngp_rubber_memory_");
static const V lit200("ngp_memory_");
static const V lit201("ngp_tire_hop_energy_");
static const V lit202("ngp_tirehop_energy_");
static const V lit203("ngp_thop_energy_");
static const V lit204("ngp_carcass_support_");
static const V lit205("ngp_tire_carcass_support_");
static const V lit206("ngp_carcass_grip_gate_");
static const V lit207("ngp_tire_carcass_grip_gate_");
static const V lit208("ngp_carcass_heat_seed_");
static const V lit209("ngp_tire_carcass_heat_seed_");
static const V lit210("ngp_carcass_history_stress_");
static const V lit211("ngp_tire_carcass_history_stress_");
static const V lit212("ngp_carcass_hysteresis_");
static const V lit213("ngp_tire_carcass_hysteresis_");
static const V lit214("ngp_sidewall_energy_");
static const V lit215("ngp_tire_sidewall_energy_");
static const V lit216("ngp_tire_deformation_");
static const V lit217("ngp_tire_carcass_deformation_");
static const V lit218("ngp_carcass_bristle_lat_");
static const V lit219("ngp_tire_carcass_bristle_lat_");
static const V lit220("ngp_carcass_bristle_long_");
static const V lit221("ngp_tire_carcass_bristle_long_");
static const V lit222("ngp_tire_limit_");
static const V lit223("ngp_tire_force_limit_");
static const V lit224("ngp_tire_grip_");
static const V lit225("ngp_tire_force_grip_");
static const V lit226("ngp_tdyn_combined_slip_");
static const V lit227("ngp_tire_dynamics_combined_slip_");
static const V lit228("ngp_tire_combined_slip_");
static const V lit229("ngp_tdyn_slip_energy_");
static const V lit230("ngp_tire_dynamics_slip_energy_");
static const V lit231("ngp_tire_slip_energy_");
static const V lit232("ngp_rii_shock_");
static const V lit233("ngp_road_shock_");
static const V lit234("ngp_rbi_impact_");
static const V lit235("ngp_load_path_loss_");
static const V lit236("ngp_lp_loss_");
static const V lit237("ngp_load_path_work_");
static const V lit238("ngp_lp_work_");
static const V lit239("ngp_uc_mu_camber_");
static const V lit240("ngp_uchassis_mu_camber_");
static const V lit241("ngp_uc_alpha_offset_");
static const V lit242("ngp_uchassis_alpha_offset_");
static const V lit243("max");
static const V lit244("sin");
static const V lit245("exp");
static const V lit246("tan");
static const V lit247("ngp_rf2_tread_temp_");
static const V lit248("ngp_rf2_carcass_temp_");
static const V lit249("ngp_rf2_mu_");
static const V lit250("ngp_rf2_mu_raw_");
static const V lit251("ngp_rf2_mu_scale_");
static const V lit252("ngp_rf2_fy_");
static const V lit253("ngp_rf2_fy_raw_");
static const V lit254("ngp_rf2_slip_velocity_");
static const V lit255("ngp_rf2_sliding_");
static const V lit256("ngp_rf2_brush_xi_");
static const V lit257("ngp_ttb_tread_temp_");
static const V lit258("ngp_ttb_carcass_temp_");
static const V lit259("ngp_ttb_mu_");
static const V lit260("ngp_ttb_mu_scale_");
static const V lit261("ngp_ttb_fy_");
static const V lit262("ngp_ttb_sliding_");
static const V lit263("ngp_brush_fy_");
static const V lit264("ngp_brush_mu_scale_");
static const V lit265("ngp_brush_sliding_");
static const V lit266("ngp_rf2_q_gen_");
static const V lit267("ngp_rf2_q_loss_");
static const V lit268("ngp_rf2_alpha_");
static const V lit269("ngp_rf2_slip_ratio_");
static const V lit270("ngp_rf2_load_");
static const V lit271("ngp_ttb_q_gen_");
static const V lit272("ngp_ttb_q_loss_");
static const V lit273("ngp_ttb_alpha_");
static const V lit274("ngp_ttb_slip_ratio_");
static const V lit275("ngp_ttb_load_");
static const V lit276("ngp_rf2_tire_status");
static const V lit277("UNKNOWN");
static const V lit278("ngp_rf2_tire_update_count");
static const V lit279("ngp_rf2_tire_wheels_valid");
static const V lit280("ngp_rf2_tire_state_linked");
static const V lit281("ngp_rf2_tire_compliance_linked");
static const V lit282("ngp_rf2_tire_contact_linked");
static const V lit283("ngp_rf2_ultra_chassis_linked");
static const V lit284("ngp_ttb_status");
static const V lit285("ngp_ttb_update_count");
static const V lit286("ngp_ttb_wheels_valid");
static const V lit287("ngp_ttb_avg_tread_temp");
static const V lit288("ngp_ttb_avg_carcass_temp");
static const V lit289("ngp_ttb_avg_mu_scale");
static const V lit290("ngp_ttb_avg_fy_abs");
static const V lit291("ngp_ttb_avg_sliding");
static const V lit292("ngp_ttb_active_count");
static const V lit293("ngp_ttb_max_tread_temp");
static const V lit294("ngp_ttb_min_mu_scale");
static const V lit295("ngp_ttb_max_sliding");
static const V lit296("ngp_ttb_tire_state_linked");
static const V lit297("ngp_ttb_compliance_linked");
static const V lit298("ngp_ttb_contact_linked");
static const V lit299("ngp_ttb_memory_linked");
static const V lit300("ngp_ttb_hop_linked");
static const V lit301("ngp_ttb_carcass_linked");
static const V lit302("ngp_ttb_dynamics_linked");
static const V lit303("ngp_ttb_road_linked");
static const V lit304("ngp_ttb_load_path_linked");
static const V lit305("ngp_ttb_ultra_chassis_linked");
static const V lit306("init");
static const V lit307("min");
static const V lit308("update");
static const V lit309("BAD DT");
static const V lit310("STORE ONLY");
static const V lit311("RUNNING");
static const V lit312("getMuScale");
static const V lit313("getMu");
static const V lit314("getFy");
static const V lit315("getTreadTemp");
static const V lit316("getCarcassTemp");
static const V lit317("getSliding");
static const V lit318("getState");
static const V lit319("debugStr");
static const V lit320("format");
static const V lit321("RF2 Tire %d / Tread %.1f / Carcass %.1f\n");
static const V lit322("Mu %.3f Scale %.3f / Fy %.0f / Slide %.2f\n");
static const V lit323("Alpha %.3f / SR %.3f / Vslip %.2f / Xi %.2f");
static const V lit324("Status %s / Count %.0f / Wheels %s\n");
static const V lit325("Tread %.1f %.1f %.1f %.1f / Avg %.1f\n");
static const V lit326("MuScale %.3f %.3f %.3f %.3f / Avg %.3f\n");
static const V lit327("Fy %.0f %.0f %.0f %.0f / Slide %.2f\n");
static const V lit328("Links TS:%s TC:%s CT:%s MEM:%s HOP:%s CAR:%s TD:%s RD:%s LP:%s UC:%s");
static const V lit329("OK");
static const V lit330("NIL");
V load_tire_thermal_brush(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(33);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.51));set(z,lit3,V(0.0045));set(z,lit4,V(0.0104));set(z,lit5,V(0.00029));set(z,lit6,V(0.01));set(z,lit7,V(50.0));set(z,lit8,V(140.0));set(z,lit9,V(0.018));set(z,lit10,V(0.0015));set(z,lit11,V(1.45));set(z,lit12,V(0.77));set(z,lit13,V(85.0));set(z,lit14,V(40.0));set(z,lit15,V(0.72));set(z,lit16,V(0.58));set(z,lit17,V(0.55));set(z,lit18,V(1.55));set(z,lit19,V(80000.0));set(z,lit20,V(3500.0));set(z,lit21,V(250.0));set(z,lit22,V(9000.0));set(z,lit23,V(0.85));set(z,lit24,V(1.0));set(z,lit25,V(75.0));set(z,lit26,V(0.12));set(z,lit27,V(0.1));set(z,lit28,V(0.2));set(z,lit29,V(0.08));set(z,lit30,V(0.06));set(z,lit31,V(0.05));set(z,lit32,V(0.08));set(z,lit33,V(0.06));set(z,lit34,V(0.18));set(z,lit35,V(0.12));set(z,lit36,V(0.1));set(z,lit37,V(0.06));set(z,lit38,V(0.07));set(z,lit39,V(0.08));set(z,lit40,V(0.05));set(z,lit41,V(0.06));set(z,lit42,V(0.06));set(z,lit43,V(0.1));set(z,lit44,V(0.06));set(z,lit45,V(0.08));set(z,lit46,V(0.08));set(z,lit47,V(0.05));set(z,lit48,V(0.15));set(z,lit49,V(0.6));set(z,lit50,V(0.1));set(z,lit51,V(0.22));set(z,lit52,V(0.12));set(z,lit53,V(-num(V(20.0))));set(z,lit54,V(220.0));set(z,lit55,V(0.06));set(z,lit56,V(0.04));set(z,lit57,V(0.06));set(z,lit58,V(5e-05));set(z,lit59,V(0.03));set(z,lit60,V(0.25));return z;})();refs[0].put(std::move(t3));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit61)};V t4=([&](){V z=table();set(z,lit62,([&](){V z=table();set(z,V(0.0),V(30.0));set(z,V(1.0),V(30.0));set(z,V(2.0),V(30.0));set(z,V(3.0),V(30.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(45.0));set(z,V(1.0),V(45.0));set(z,V(2.0),V(45.0));set(z,V(3.0),V(45.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,([&](){V z=table();return z;})());set(z,lit78,V(30.0));set(z,lit79,V(45.0));set(z,lit80,V(1.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(30.0));set(z,lit84,V(1.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,lit88);set(z,lit89,V(0.0));set(z,lit90,V(false));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(999.0));set(z,lit102,V(true));return z;})();refs[0].put(std::move(t4));}
{double t5=num(V(0.0)),t6=num(V(3.0)),t7=num(V(1.0));for(double t8=t5;(t7>0?t8<=t6:t8>=t6);t8+=t7){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t8);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit77),e->slot(0,0))};V t9=([&](){V z=table();set(z,lit103,V(false));set(z,lit70,get(get(get(e->slot(1,1),lit61),lit70),e->slot(0,0)));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit104,V(1.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(1.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(1.0));set(z,lit111,V(1.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(0.0));set(z,lit119,V(1.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(1.0));set(z,lit126,V(0.0));set(z,lit62,get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0)));set(z,lit63,get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0)));set(z,lit65,get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0)));set(z,lit66,get(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0)));set(z,lit72,V(0.0));set(z,lit74,V(0.0));set(z,lit73,V(1.0));return z;})();refs[0].put(std::move(t9));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),e->slot(0,0))};V t10=get(get(get(e->slot(1,1),lit61),lit77),e->slot(0,0));refs[0].put(std::move(t10));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t11=get(e->slot(0,1),lit61);refs[0].put(std::move(t11));}
e->slot(0,2)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t12=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t12);}
if(truth(([&](){V t13=([&](){V t14=([&](){V t15=eq(e->slot(0,2),V());return !truth(t15)?ne(e->slot(0,2),e->slot(0,2)):t15;})();return !truth(t14)?eq(e->slot(0,2),get(e->get("math"),lit128)):t14;})();return !truth(t13)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit128)))):t13;})())){return Args{([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t17=first(call(e->slot(1,2),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t17));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit129),call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t18));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(V(1.0)))};
}
return Args{V(1.0)};
return Args{};});
{V t19=get(e->slot(0,0),lit130);e->slot(0,6)=std::move(t19);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t20=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t20);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()};
}
return call(e->slot(1,2),Args{e->slot(0,2),([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()});
return Args{};});
{V t23=get(e->slot(0,0),lit131);e->slot(0,8)=std::move(t23);}
{V t24=get(e->slot(0,0),lit132);e->slot(0,9)=std::move(t24);}
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t25=V(!truth(e->get("ac")));return !truth(t25)?V(!truth(get(e->get("ac"),lit133))):t25;})())){return Args{V()};
}
{Args t26=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit133),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t26,0);e->slot(0,1)=arg(t26,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,9),Args{e->slot(0,0),lit77,V()});
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t27=first(call(e->slot(1,11),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t27);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t28=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t28,0);e->slot(0,4)=arg(t28,1);}
if(truth(([&](){V t29=e->slot(0,3);return truth(t29)?ne(e->slot(0,4),V()):t29;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t30=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t30,0));refs[1].put(arg(t30,1));}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t31=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t32=first(call(e->slot(1,2),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t33=first(call(e->slot(1,2),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t34=first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t34));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t35=divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3)));e->slot(0,4)=std::move(t35);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t36=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t36));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit91)};V t37=V(false);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit92)};V t38=V(false);refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit93)};V t39=V(false);refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit94)};V t40=V(false);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit95)};V t41=V(false);refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit96)};V t42=V(false);refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit97)};V t43=V(false);refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit98)};V t44=V(false);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit99)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit100)};V t46=V(false);refs[0].put(std::move(t46));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit101)};V t47=add(([&](){V t48=get(get(e->slot(1,1),lit61),lit101);return !truth(t48)?V(0.0):t48;})(),([&](){V t49=e->slot(0,0);return !truth(t49)?V(0.0):t49;})());refs[0].put(std::move(t47));}
if(truth(ge(get(get(e->slot(1,1),lit61),lit101),get(get(e->slot(1,1),lit1),lit60)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit101)};V t50=V(0.0);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit102)};V t51=V(true);refs[0].put(std::move(t51));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit102)};V t52=V(false);refs[0].put(std::move(t52));}
}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);{V t53=([&](){V t54=([&](){V t55=first(call(e->slot(1,6),Args{lit134}));return !truth(t55)?first(call(e->slot(1,6),Args{lit135})):t55;})();return !truth(t54)?first(call(e->slot(1,6),Args{lit136})):t54;})();e->slot(0,1)=std::move(t53);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,4),Args{e->slot(0,1)});
}
{V t56=([&](){V t57=([&](){V t58=first(call(e->slot(1,6),Args{lit137}));return !truth(t58)?first(call(e->slot(1,6),Args{lit138})):t58;})();return !truth(t57)?first(call(e->slot(1,6),Args{lit139})):t57;})();e->slot(0,2)=std::move(t56);}
if(truth(ne(e->slot(0,2),V()))){return Args{divv(first(call(e->slot(1,4),Args{e->slot(0,2)})),V(3.6))};
}
if(truth(e->slot(0,0))){auto parent=e;auto e=std::make_shared<Env>(parent,false,4);{V t59=first(call(e->slot(2,9),Args{e->slot(1,0),lit140,V()}));e->slot(0,0)=std::move(t59);}
if(truth(ne(e->slot(0,0),V()))){return Args{divv(first(call(e->slot(2,4),Args{e->slot(0,0)})),V(3.6))};
}
{V t60=V();e->slot(0,1)=std::move(t60);}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);{V t61=first(call(e->slot(3,4),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t61);}
if(truth(gt(e->slot(0,0),V(120.0)))){return Args{divv(e->slot(0,0),V(3.6))};
}
return Args{e->slot(0,0)};
}
{V t62=first(call(e->slot(2,9),Args{e->slot(1,0),lit141,V()}));e->slot(0,2)=std::move(t62);}
if(truth(eq(first(call(e->get("type"),Args{e->slot(0,2)})),lit142))){return call(e->slot(2,4),Args{e->slot(0,2)});
}
if(truth(([&](){V t63=e->slot(0,2);return truth(t63)?ne(get(e->slot(0,2),lit143),V()):t63;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t64=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return method(e->slot(2,2),"length",Args{});
return Args{};})});e->slot(0,0)=arg(t64,0);e->slot(0,1)=arg(t64,1);}
if(truth(e->slot(0,0))){return call(e->slot(3,4),Args{e->slot(0,1)});
}
}
{V t65=first(call(e->slot(2,9),Args{e->slot(1,0),lit144,V()}));e->slot(0,3)=std::move(t65);}
if(truth(eq(first(call(e->get("type"),Args{e->slot(0,3)})),lit145))){auto parent=e;auto e=std::make_shared<Env>(parent,false,3);{V t66=first(call(e->slot(3,2),Args{get(e->slot(1,3),lit146),V(0.0)}));e->slot(0,0)=std::move(t66);}
{V t67=first(call(e->slot(3,2),Args{get(e->slot(1,3),lit147),V(0.0)}));e->slot(0,1)=std::move(t67);}
{V t68=first(call(e->slot(3,2),Args{get(e->slot(1,3),lit148),V(0.0)}));e->slot(0,2)=std::move(t68);}
return call(get(e->get("math"),lit149),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
}
}
return Args{V(0.0)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t69=V(!truth(e->get("ac")));return !truth(t69)?V(!truth(get(e->get("ac"),lit150))):t69;})())){return Args{e->slot(0,1)};
}
{Args t70=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit150),Args{});
return Args{};})});e->slot(0,2)=arg(t70,0);e->slot(0,3)=arg(t70,1);}
if(truth(([&](){V t71=([&](){V t72=e->slot(0,2);return truth(t72)?e->slot(0,3):t72;})();return truth(t71)?ne(get(e->slot(0,3),e->slot(0,0)),V()):t71;})())){return call(e->slot(1,2),Args{get(e->slot(0,3),e->slot(0,0)),e->slot(0,1)});
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t73=([&](){V t74=([&](){V t75=first(call(e->slot(1,6),Args{lit151}));return !truth(t75)?first(call(e->slot(1,6),Args{lit152})):t75;})();return !truth(t74)?first(call(e->slot(1,6),Args{lit153})):t74;})();e->slot(0,0)=std::move(t73);}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(1,2),Args{e->slot(0,0),V(30.0)});
}
return call(e->slot(1,17),Args{lit154,V(30.0)});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t76=([&](){V t77=first(call(e->slot(1,6),Args{lit155}));return !truth(t77)?first(call(e->slot(1,6),Args{lit156})):t77;})();e->slot(0,0)=std::move(t76);}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(1,2),Args{e->slot(0,0),V(25.0)});
}
return call(e->slot(1,17),Args{lit157,V(25.0)});
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t78=([&](){V t79=([&](){V t80=([&](){V t81=([&](){V t82=([&](){V t83=([&](){V t84=first(call(e->slot(1,6),Args{concat(lit158,e->slot(0,0))}));return !truth(t84)?first(call(e->slot(1,6),Args{concat(lit159,e->slot(0,0))})):t84;})();return !truth(t83)?first(call(e->slot(1,6),Args{concat(lit160,e->slot(0,0))})):t83;})();return !truth(t82)?first(call(e->slot(1,6),Args{concat(lit161,e->slot(0,0))})):t82;})();return !truth(t81)?first(call(e->slot(1,6),Args{concat(lit162,e->slot(0,0))})):t81;})();return !truth(t80)?first(call(e->slot(1,6),Args{concat(lit163,e->slot(0,0))})):t80;})();return !truth(t79)?first(call(e->slot(1,6),Args{concat(lit164,e->slot(0,0))})):t79;})();e->slot(0,2)=std::move(t78);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit91)};V t85=V(true);refs[0].put(std::move(t85));}
return call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit20)})),get(get(e->slot(1,1),lit1),lit21),get(get(e->slot(1,1),lit1),lit22)});
}
{V t86=([&](){V t87=([&](){V t88=([&](){V t89=([&](){V t90=first(call(e->slot(1,9),Args{e->slot(0,1),lit70,V()}));return !truth(t90)?first(call(e->slot(1,9),Args{e->slot(0,1),lit165,V()})):t90;})();return !truth(t89)?V():t89;})();return !truth(t88)?V():t88;})();return !truth(t87)?V():t87;})();e->slot(0,3)=std::move(t86);}
if(truth(ne(e->slot(0,3),V()))){return call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit20)})),get(get(e->slot(1,1),lit1),lit21),get(get(e->slot(1,1),lit1),lit22)});
}
{V t91=first(call(e->slot(1,6),Args{concat(lit166,e->slot(0,0))}));e->slot(0,4)=std::move(t91);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit91)};V t92=V(true);refs[0].put(std::move(t92));}
return call(e->slot(1,3),Args{add(get(get(e->slot(1,1),lit1),lit20),first(call(e->slot(1,2),Args{e->slot(0,4),V(0.0)}))),get(get(e->slot(1,1),lit1),lit21),get(get(e->slot(1,1),lit1),lit22)});
}
return Args{get(get(e->slot(1,1),lit1),lit20)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t93=([&](){V t94=([&](){V t95=([&](){V t96=([&](){V t97=([&](){V t98=([&](){V t99=([&](){V t100=([&](){V t101=first(call(e->slot(1,6),Args{concat(lit167,e->slot(0,0))}));return !truth(t101)?first(call(e->slot(1,6),Args{concat(lit168,e->slot(0,0))})):t101;})();return !truth(t100)?first(call(e->slot(1,6),Args{concat(lit169,e->slot(0,0))})):t100;})();return !truth(t99)?first(call(e->slot(1,6),Args{concat(lit170,e->slot(0,0))})):t99;})();return !truth(t98)?first(call(e->slot(1,6),Args{concat(lit171,e->slot(0,0))})):t98;})();return !truth(t97)?first(call(e->slot(1,6),Args{concat(lit172,e->slot(0,0))})):t97;})();return !truth(t96)?first(call(e->slot(1,6),Args{concat(lit173,e->slot(0,0))})):t96;})();return !truth(t95)?first(call(e->slot(1,6),Args{concat(lit174,e->slot(0,0))})):t95;})();return !truth(t94)?first(call(e->slot(1,6),Args{concat(lit175,e->slot(0,0))})):t94;})();e->slot(0,2)=std::move(t93);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit91)};V t102=V(true);refs[0].put(std::move(t102));}
return call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,2),V(0.0)})),V(-num(get(get(e->slot(1,1),lit1),lit23))),get(get(e->slot(1,1),lit1),lit23)});
}
{V t103=first(call(e->slot(1,9),Args{e->slot(0,1),lit176,V()}));e->slot(0,3)=std::move(t103);}
if(truth(ne(e->slot(0,3),V()))){return call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0)})),V(-num(get(get(e->slot(1,1),lit1),lit23))),get(get(e->slot(1,1),lit1),lit23)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t104=([&](){V t105=([&](){V t106=([&](){V t107=([&](){V t108=([&](){V t109=([&](){V t110=([&](){V t111=first(call(e->slot(1,6),Args{concat(lit177,e->slot(0,0))}));return !truth(t111)?first(call(e->slot(1,6),Args{concat(lit178,e->slot(0,0))})):t111;})();return !truth(t110)?first(call(e->slot(1,6),Args{concat(lit179,e->slot(0,0))})):t110;})();return !truth(t109)?first(call(e->slot(1,6),Args{concat(lit180,e->slot(0,0))})):t109;})();return !truth(t108)?first(call(e->slot(1,6),Args{concat(lit181,e->slot(0,0))})):t108;})();return !truth(t107)?first(call(e->slot(1,6),Args{concat(lit182,e->slot(0,0))})):t107;})();return !truth(t106)?first(call(e->slot(1,6),Args{concat(lit183,e->slot(0,0))})):t106;})();return !truth(t105)?first(call(e->slot(1,6),Args{concat(lit184,e->slot(0,0))})):t105;})();e->slot(0,2)=std::move(t104);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit91)};V t112=V(true);refs[0].put(std::move(t112));}
return call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,2),V(0.0)})),V(-num(get(get(e->slot(1,1),lit1),lit24))),get(get(e->slot(1,1),lit1),lit24)});
}
{V t113=first(call(e->slot(1,9),Args{e->slot(0,1),lit68,V()}));e->slot(0,3)=std::move(t113);}
if(truth(ne(e->slot(0,3),V()))){return call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0)})),V(-num(get(get(e->slot(1,1),lit1),lit24))),get(get(e->slot(1,1),lit1),lit24)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,25);auto e=&storage;e->slot(0,0)=arg(a,0);{V t114=([&](){V t115=first(call(e->slot(1,6),Args{concat(lit185,e->slot(0,0))}));return !truth(t115)?first(call(e->slot(1,6),Args{concat(lit186,e->slot(0,0))})):t115;})();e->slot(0,1)=std::move(t114);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit92)};V t116=V(true);refs[0].put(std::move(t116));}
}
{V t117=([&](){V t118=([&](){V t119=first(call(e->slot(1,6),Args{lit187}));return !truth(t119)?first(call(e->slot(1,6),Args{lit188})):t119;})();return !truth(t118)?first(call(e->slot(1,6),Args{lit189})):t118;})();e->slot(0,2)=std::move(t117);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit92)};V t120=V(true);refs[0].put(std::move(t120));}
}
{V t121=([&](){V t122=([&](){V t123=first(call(e->slot(1,6),Args{concat(lit190,e->slot(0,0))}));return !truth(t123)?first(call(e->slot(1,6),Args{concat(lit191,e->slot(0,0))})):t123;})();return !truth(t122)?first(call(e->slot(1,6),Args{concat(lit192,e->slot(0,0))})):t122;})();e->slot(0,3)=std::move(t121);}
{V t124=([&](){V t125=([&](){V t126=([&](){V t127=first(call(e->slot(1,6),Args{concat(lit193,e->slot(0,0))}));return !truth(t127)?first(call(e->slot(1,6),Args{concat(lit194,e->slot(0,0))})):t127;})();return !truth(t126)?first(call(e->slot(1,6),Args{concat(lit195,e->slot(0,0))})):t126;})();return !truth(t125)?first(call(e->slot(1,6),Args{concat(lit196,e->slot(0,0))})):t125;})();e->slot(0,4)=std::move(t124);}
if(truth(([&](){V t128=ne(e->slot(0,3),V());return !truth(t128)?ne(e->slot(0,4),V()):t128;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit93)};V t129=V(true);refs[0].put(std::move(t129));}
}
{V t130=([&](){V t131=([&](){V t132=([&](){V t133=first(call(e->slot(1,6),Args{concat(lit197,e->slot(0,0))}));return !truth(t133)?first(call(e->slot(1,6),Args{concat(lit198,e->slot(0,0))})):t133;})();return !truth(t132)?first(call(e->slot(1,6),Args{concat(lit199,e->slot(0,0))})):t132;})();return !truth(t131)?first(call(e->slot(1,6),Args{concat(lit200,e->slot(0,0))})):t131;})();e->slot(0,5)=std::move(t130);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit94)};V t134=V(true);refs[0].put(std::move(t134));}
}
{V t135=([&](){V t136=([&](){V t137=first(call(e->slot(1,6),Args{concat(lit201,e->slot(0,0))}));return !truth(t137)?first(call(e->slot(1,6),Args{concat(lit202,e->slot(0,0))})):t137;})();return !truth(t136)?first(call(e->slot(1,6),Args{concat(lit203,e->slot(0,0))})):t136;})();e->slot(0,6)=std::move(t135);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit95)};V t138=V(true);refs[0].put(std::move(t138));}
}
{V t139=([&](){V t140=first(call(e->slot(1,6),Args{concat(lit204,e->slot(0,0))}));return !truth(t140)?first(call(e->slot(1,6),Args{concat(lit205,e->slot(0,0))})):t140;})();e->slot(0,7)=std::move(t139);}
{V t141=([&](){V t142=first(call(e->slot(1,6),Args{concat(lit206,e->slot(0,0))}));return !truth(t142)?first(call(e->slot(1,6),Args{concat(lit207,e->slot(0,0))})):t142;})();e->slot(0,8)=std::move(t141);}
{V t143=([&](){V t144=first(call(e->slot(1,6),Args{concat(lit208,e->slot(0,0))}));return !truth(t144)?first(call(e->slot(1,6),Args{concat(lit209,e->slot(0,0))})):t144;})();e->slot(0,9)=std::move(t143);}
{V t145=([&](){V t146=first(call(e->slot(1,6),Args{concat(lit210,e->slot(0,0))}));return !truth(t146)?first(call(e->slot(1,6),Args{concat(lit211,e->slot(0,0))})):t146;})();e->slot(0,10)=std::move(t145);}
{V t147=([&](){V t148=first(call(e->slot(1,6),Args{concat(lit212,e->slot(0,0))}));return !truth(t148)?first(call(e->slot(1,6),Args{concat(lit213,e->slot(0,0))})):t148;})();e->slot(0,11)=std::move(t147);}
{V t149=([&](){V t150=first(call(e->slot(1,6),Args{concat(lit214,e->slot(0,0))}));return !truth(t150)?first(call(e->slot(1,6),Args{concat(lit215,e->slot(0,0))})):t150;})();e->slot(0,12)=std::move(t149);}
{V t151=([&](){V t152=first(call(e->slot(1,6),Args{concat(lit216,e->slot(0,0))}));return !truth(t152)?first(call(e->slot(1,6),Args{concat(lit217,e->slot(0,0))})):t152;})();e->slot(0,13)=std::move(t151);}
{V t153=([&](){V t154=first(call(e->slot(1,6),Args{concat(lit218,e->slot(0,0))}));return !truth(t154)?first(call(e->slot(1,6),Args{concat(lit219,e->slot(0,0))})):t154;})();e->slot(0,14)=std::move(t153);}
{V t155=([&](){V t156=first(call(e->slot(1,6),Args{concat(lit220,e->slot(0,0))}));return !truth(t156)?first(call(e->slot(1,6),Args{concat(lit221,e->slot(0,0))})):t156;})();e->slot(0,15)=std::move(t155);}
if(truth(([&](){V t157=([&](){V t158=([&](){V t159=([&](){V t160=([&](){V t161=([&](){V t162=([&](){V t163=([&](){V t164=ne(e->slot(0,7),V());return !truth(t164)?ne(e->slot(0,8),V()):t164;})();return !truth(t163)?ne(e->slot(0,9),V()):t163;})();return !truth(t162)?ne(e->slot(0,10),V()):t162;})();return !truth(t161)?ne(e->slot(0,11),V()):t161;})();return !truth(t160)?ne(e->slot(0,12),V()):t160;})();return !truth(t159)?ne(e->slot(0,13),V()):t159;})();return !truth(t158)?ne(e->slot(0,14),V()):t158;})();return !truth(t157)?ne(e->slot(0,15),V()):t157;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit96)};V t165=V(true);refs[0].put(std::move(t165));}
}
{V t166=([&](){V t167=first(call(e->slot(1,6),Args{concat(lit222,e->slot(0,0))}));return !truth(t167)?first(call(e->slot(1,6),Args{concat(lit223,e->slot(0,0))})):t167;})();e->slot(0,16)=std::move(t166);}
{V t168=([&](){V t169=first(call(e->slot(1,6),Args{concat(lit224,e->slot(0,0))}));return !truth(t169)?first(call(e->slot(1,6),Args{concat(lit225,e->slot(0,0))})):t169;})();e->slot(0,17)=std::move(t168);}
{V t170=([&](){V t171=([&](){V t172=first(call(e->slot(1,6),Args{concat(lit226,e->slot(0,0))}));return !truth(t172)?first(call(e->slot(1,6),Args{concat(lit227,e->slot(0,0))})):t172;})();return !truth(t171)?first(call(e->slot(1,6),Args{concat(lit228,e->slot(0,0))})):t171;})();e->slot(0,18)=std::move(t170);}
{V t173=([&](){V t174=([&](){V t175=first(call(e->slot(1,6),Args{concat(lit229,e->slot(0,0))}));return !truth(t175)?first(call(e->slot(1,6),Args{concat(lit230,e->slot(0,0))})):t175;})();return !truth(t174)?first(call(e->slot(1,6),Args{concat(lit231,e->slot(0,0))})):t174;})();e->slot(0,19)=std::move(t173);}
if(truth(([&](){V t176=([&](){V t177=([&](){V t178=ne(e->slot(0,16),V());return !truth(t178)?ne(e->slot(0,17),V()):t178;})();return !truth(t177)?ne(e->slot(0,18),V()):t177;})();return !truth(t176)?ne(e->slot(0,19),V()):t176;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit97)};V t179=V(true);refs[0].put(std::move(t179));}
}
{V t180=([&](){V t181=([&](){V t182=first(call(e->slot(1,6),Args{concat(lit232,e->slot(0,0))}));return !truth(t182)?first(call(e->slot(1,6),Args{concat(lit233,e->slot(0,0))})):t182;})();return !truth(t181)?first(call(e->slot(1,6),Args{concat(lit234,e->slot(0,0))})):t181;})();e->slot(0,20)=std::move(t180);}
if(truth(ne(e->slot(0,20),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit98)};V t183=V(true);refs[0].put(std::move(t183));}
}
{V t184=([&](){V t185=first(call(e->slot(1,6),Args{concat(lit235,e->slot(0,0))}));return !truth(t185)?first(call(e->slot(1,6),Args{concat(lit236,e->slot(0,0))})):t185;})();e->slot(0,21)=std::move(t184);}
{V t186=([&](){V t187=first(call(e->slot(1,6),Args{concat(lit237,e->slot(0,0))}));return !truth(t187)?first(call(e->slot(1,6),Args{concat(lit238,e->slot(0,0))})):t187;})();e->slot(0,22)=std::move(t186);}
if(truth(([&](){V t188=ne(e->slot(0,21),V());return !truth(t188)?ne(e->slot(0,22),V()):t188;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit99)};V t189=V(true);refs[0].put(std::move(t189));}
}
{V t190=([&](){V t191=first(call(e->slot(1,6),Args{concat(lit239,e->slot(0,0))}));return !truth(t191)?first(call(e->slot(1,6),Args{concat(lit240,e->slot(0,0))})):t191;})();e->slot(0,23)=std::move(t190);}
{V t192=([&](){V t193=first(call(e->slot(1,6),Args{concat(lit241,e->slot(0,0))}));return !truth(t193)?first(call(e->slot(1,6),Args{concat(lit242,e->slot(0,0))})):t193;})();e->slot(0,24)=std::move(t192);}
if(truth(([&](){V t194=ne(e->slot(0,23),V());return !truth(t194)?ne(e->slot(0,24),V()):t194;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit100)};V t195=V(true);refs[0].put(std::move(t195));}
}
return Args{([&](){V z=table();set(z,lit104,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,1),V(1.0)})),V(0.4),V(1.3)})));set(z,lit105,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)})));set(z,lit106,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)})));set(z,lit107,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,4),V(1.0)})),V(0.0),V(1.2)})));set(z,lit108,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})));set(z,lit109,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)})));set(z,lit110,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,7),V(1.0)})),V(0.0),V(1.2)})));set(z,lit111,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,8),V(1.0)})),V(0.0),V(1.2)})));set(z,lit112,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)})));set(z,lit113,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)})));set(z,lit114,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)})));set(z,lit115,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)})));set(z,lit116,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,13),V(0.0)})),V(0.0),V(1.0)})));set(z,lit117,first(call(e->slot(1,3),Args{first(call(get(e->get("math"),lit243),joined(Args{first(call(e->slot(1,2),Args{e->slot(0,14),V(0.0)}))},call(e->slot(1,2),Args{e->slot(0,15),V(0.0)})))),V(0.0),V(1.0)})));set(z,lit118,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,16),V(0.0)})),V(0.0),V(2.0)})));set(z,lit119,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,17),V(1.0)})),V(0.0),V(1.25)})));set(z,lit120,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,18),V(0.0)})),V(0.0),V(3.0)})));set(z,lit121,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,19),V(0.0)})),V(0.0),V(1.5)})));set(z,lit122,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,20),V(0.0)})),V(0.0),V(1.5)})));set(z,lit123,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,21),V(0.0)})),V(0.0),V(1.0)})));set(z,lit124,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,22),V(0.0)})),V(0.0),V(2.0)})));set(z,lit125,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,23),V(1.0)})),V(0.75),V(1.05)})));set(z,lit126,first(call(e->slot(1,3),Args{first(call(e->slot(1,2),Args{e->slot(0,24),V(0.0)})),V(-num(V(0.2))),V(0.2)})));return z;})()};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t196=get(get(get(e->slot(1,1),lit61),lit77),e->slot(0,0));e->slot(0,2)=std::move(t196);}
if(truth(V(!truth(e->slot(0,2))))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit103)};V t197=V(true);refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit70)};V t198=([&](){V t199=get(get(get(e->slot(1,1),lit61),lit70),e->slot(0,0));return !truth(t199)?get(get(e->slot(1,1),lit1),lit20):t199;})();refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit67)};V t200=([&](){V t201=get(get(get(e->slot(1,1),lit61),lit67),e->slot(0,0));return !truth(t201)?V(0.0):t201;})();refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit68)};V t202=([&](){V t203=get(get(get(e->slot(1,1),lit61),lit68),e->slot(0,0));return !truth(t203)?V(0.0):t203;})();refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit69)};V t204=([&](){V t205=get(get(get(e->slot(1,1),lit61),lit69),e->slot(0,0));return !truth(t205)?V(0.0):t205;})();refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit104)};V t206=get(e->slot(0,1),lit104);refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit105)};V t207=get(e->slot(0,1),lit105);refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit106)};V t208=get(e->slot(0,1),lit106);refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit107)};V t209=get(e->slot(0,1),lit107);refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit108)};V t210=get(e->slot(0,1),lit108);refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit109)};V t211=get(e->slot(0,1),lit109);refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit110)};V t212=get(e->slot(0,1),lit110);refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit111)};V t213=get(e->slot(0,1),lit111);refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit112)};V t214=get(e->slot(0,1),lit112);refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit113)};V t215=get(e->slot(0,1),lit113);refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit114)};V t216=get(e->slot(0,1),lit114);refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit115)};V t217=get(e->slot(0,1),lit115);refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit116)};V t218=get(e->slot(0,1),lit116);refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit117)};V t219=get(e->slot(0,1),lit117);refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit118)};V t220=get(e->slot(0,1),lit118);refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit119)};V t221=get(e->slot(0,1),lit119);refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit120)};V t222=get(e->slot(0,1),lit120);refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit121)};V t223=get(e->slot(0,1),lit121);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit122)};V t224=get(e->slot(0,1),lit122);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit123)};V t225=get(e->slot(0,1),lit123);refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit124)};V t226=get(e->slot(0,1),lit124);refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit125)};V t227=get(e->slot(0,1),lit125);refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit126)};V t228=get(e->slot(0,1),lit126);refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit62)};V t229=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit63)};V t230=get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit65)};V t231=get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit66)};V t232=get(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit72)};V t233=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit74)};V t234=get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit73)};V t235=get(get(get(e->slot(1,1),lit61),lit73),e->slot(0,0));refs[0].put(std::move(t235));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,25);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);e->slot(0,5)=arg(a,5);e->slot(0,6)=arg(a,6);e->slot(0,7)=arg(a,7);e->slot(0,8)=arg(a,8);e->slot(0,9)=arg(a,9);{V t236=get(e->slot(1,1),lit1);e->slot(0,10)=std::move(t236);}
{V t237=first(call(get(e->get("math"),lit129),Args{mul(e->slot(0,4),first(call(get(e->get("math"),lit244),Args{e->slot(0,2)})))}));e->slot(0,11)=std::move(t237);}
{V t238=first(call(get(e->get("math"),lit129),Args{mul(mul(e->slot(0,4),e->slot(0,3)),V(0.35))}));e->slot(0,12)=std::move(t238);}
{V t239=first(call(e->slot(1,3),Args{first(call(get(e->get("math"),lit149),Args{add(mul(e->slot(0,11),e->slot(0,11)),mul(e->slot(0,12),e->slot(0,12)))})),V(0.0),get(e->slot(0,10),lit25)}));e->slot(0,13)=std::move(t239);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit69),e->slot(0,0))};V t240=e->slot(0,13);refs[0].put(std::move(t240));}
{V t241=first(call(e->slot(1,3),Args{divv(e->slot(0,1),first(call(get(e->get("math"),lit243),Args{get(e->slot(0,10),lit20),V(1.0)}))),V(0.0),V(2.5)}));e->slot(0,14)=std::move(t241);}
{V t242=add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(V(1.0),mul(get(e->slot(0,8),lit108),get(e->slot(0,10),lit30))),mul(get(e->slot(0,8),lit109),get(e->slot(0,10),lit32))),mul(get(e->slot(0,8),lit105),get(e->slot(0,10),lit27))),mul(get(e->slot(0,8),lit112),get(e->slot(0,10),lit34))),mul(get(e->slot(0,8),lit113),get(e->slot(0,10),lit35))),mul(get(e->slot(0,8),lit114),get(e->slot(0,10),lit36))),mul(get(e->slot(0,8),lit115),get(e->slot(0,10),lit39))),mul(get(e->slot(0,8),lit116),get(e->slot(0,10),lit40))),mul(get(e->slot(0,8),lit117),get(e->slot(0,10),lit41))),mul(get(e->slot(0,8),lit121),get(e->slot(0,10),lit43))),mul(first(call(e->slot(1,3),Args{sub(get(e->slot(0,8),lit120),V(1.0)),V(0.0),V(2.0)})),get(e->slot(0,10),lit44))),mul(get(e->slot(0,8),lit122),get(e->slot(0,10),lit45))),mul(get(e->slot(0,8),lit123),get(e->slot(0,10),lit46))),mul(get(e->slot(0,8),lit124),get(e->slot(0,10),lit47))),mul(first(call(get(e->get("math"),lit243),Args{sub(e->slot(0,14),V(1.0)),V(0.0)})),get(e->slot(0,10),lit50)));e->slot(0,15)=std::move(t242);}
{V t243=mul(add(mul(get(e->slot(0,10),lit3),first(call(get(e->get("math"),lit129),Args{mul(e->slot(0,5),e->slot(0,13))}))),mul(mul(get(e->slot(0,10),lit2),e->slot(0,4)),add(V(0.5),mul(V(0.5),e->slot(0,14))))),e->slot(0,15));e->slot(0,16)=std::move(t243);}
{V t244=([&](){V t245=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));return !truth(t245)?V(30.0):t245;})();e->slot(0,17)=std::move(t244);}
{V t246=([&](){V t247=get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0));return !truth(t247)?V(45.0):t247;})();e->slot(0,18)=std::move(t246);}
{V t248=mul(first(call(get(e->get("math"),lit243),Args{sub(V(1.0),divv(e->slot(0,1),first(call(get(e->get("math"),lit243),Args{mul(get(e->slot(0,10),lit21),V(4.0)),V(1.0)})))),V(0.0)})),get(e->slot(0,10),lit51));e->slot(0,19)=std::move(t248);}
{V t249=add(add(mul(mul(get(e->slot(0,10),lit4),sub(e->slot(0,17),e->slot(0,6))),add(V(0.3),mul(V(0.7),e->slot(0,14)))),mul(mul(mul(get(e->slot(0,10),lit5),e->slot(0,4)),sub(e->slot(0,17),e->slot(0,7))),add(V(1.0),e->slot(0,19)))),mul(get(e->slot(0,10),lit6),sub(e->slot(0,17),e->slot(0,18))));e->slot(0,20)=std::move(t249);}
{V t250=divv(sub(e->slot(0,16),e->slot(0,20)),first(call(get(e->get("math"),lit243),Args{get(e->slot(0,10),lit7),V(1.0)})));e->slot(0,21)=std::move(t250);}
{std::array<Ref,1> refs{Ref(e,0,17)};V t251=add(e->slot(0,17),mul(e->slot(0,21),e->slot(0,9)));refs[0].put(std::move(t251));}
{V t252=mul(get(e->slot(0,10),lit9),sub(e->slot(0,17),e->slot(0,18)));e->slot(0,22)=std::move(t252);}
{V t253=mul(get(e->slot(0,10),lit10),sub(e->slot(0,18),e->slot(0,7)));e->slot(0,23)=std::move(t253);}
{V t254=divv(sub(e->slot(0,22),e->slot(0,23)),first(call(get(e->get("math"),lit243),Args{get(e->slot(0,10),lit8),V(1.0)})));e->slot(0,24)=std::move(t254);}
{std::array<Ref,1> refs{Ref(e,0,18)};V t255=add(e->slot(0,18),mul(e->slot(0,24),e->slot(0,9)));refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0))};V t256=first(call(e->slot(1,13),Args{([&](){V t257=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));return !truth(t257)?e->slot(0,17):t257;})(),first(call(e->slot(1,3),Args{e->slot(0,17),get(e->slot(0,10),lit53),get(e->slot(0,10),lit54)})),get(e->slot(0,10),lit57),e->slot(0,9)}));refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0))};V t258=first(call(e->slot(1,13),Args{([&](){V t259=get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0));return !truth(t259)?e->slot(0,18):t259;})(),first(call(e->slot(1,3),Args{e->slot(0,18),get(e->slot(0,10),lit53),get(e->slot(0,10),lit54)})),mul(get(e->slot(0,10),lit57),V(2.0)),e->slot(0,9)}));refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0))};V t260=first(call(e->slot(1,3),Args{get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0)),get(e->slot(0,10),lit53),get(e->slot(0,10),lit54)}));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0))};V t261=first(call(e->slot(1,3),Args{get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0)),get(e->slot(0,10),lit53),get(e->slot(0,10),lit54)}));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit75),e->slot(0,0))};V t262=e->slot(0,16);refs[0].put(std::move(t262));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit76),e->slot(0,0))};V t263=e->slot(0,20);refs[0].put(std::move(t263));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t264=get(e->slot(1,1),lit1);e->slot(0,3)=std::move(t264);}
{V t265=([&](){V t266=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));return !truth(t266)?V(30.0):t266;})();e->slot(0,4)=std::move(t265);}
{V t267=divv(sub(e->slot(0,4),get(e->slot(0,3),lit13)),first(call(get(e->get("math"),lit243),Args{get(e->slot(0,3),lit14),V(1.0)})));e->slot(0,5)=std::move(t267);}
{V t268=first(call(get(e->get("math"),lit245),Args{mul(V(-num(e->slot(0,5))),e->slot(0,5))}));e->slot(0,6)=std::move(t268);}
{V t269=mul(get(e->slot(0,3),lit11),e->slot(0,6));e->slot(0,7)=std::move(t269);}
if(truth(lt(e->slot(0,4),get(e->slot(0,3),lit13)))){{std::array<Ref,1> refs{Ref(e,0,7)};V t270=first(call(get(e->get("math"),lit243),Args{e->slot(0,7),mul(get(e->slot(0,3),lit11),get(e->slot(0,3),lit15))}));refs[0].put(std::move(t270));}
}
if(truth(gt(e->slot(0,4),get(e->slot(0,3),lit13)))){{std::array<Ref,1> refs{Ref(e,0,7)};V t271=first(call(get(e->get("math"),lit243),Args{e->slot(0,7),mul(get(e->slot(0,3),lit11),get(e->slot(0,3),lit16))}));refs[0].put(std::move(t271));}
}
{V t272=mul(first(call(get(e->get("math"),lit243),Args{sub(V(1.0),get(e->slot(0,1),lit104)),V(0.0)})),get(e->slot(0,3),lit26));e->slot(0,8)=std::move(t272);}
{V t273=mul(get(e->slot(0,1),lit106),get(e->slot(0,3),lit28));e->slot(0,9)=std::move(t273);}
{V t274=mul(first(call(get(e->get("math"),lit243),Args{sub(get(e->slot(0,1),lit107),V(1.0)),V(0.0)})),get(e->slot(0,3),lit29));e->slot(0,10)=std::move(t274);}
{V t275=mul(get(e->slot(0,1),lit108),get(e->slot(0,3),lit31));e->slot(0,11)=std::move(t275);}
{V t276=mul(get(e->slot(0,1),lit109),get(e->slot(0,3),lit33));e->slot(0,12)=std::move(t276);}
{V t277=add(mul(first(call(get(e->get("math"),lit243),Args{sub(get(e->slot(0,1),lit110),V(1.0)),V(0.0)})),get(e->slot(0,3),lit37)),mul(first(call(get(e->get("math"),lit243),Args{sub(get(e->slot(0,1),lit111),V(1.0)),V(0.0)})),get(e->slot(0,3),lit38)));e->slot(0,13)=std::move(t277);}
{V t278=mul(get(e->slot(0,1),lit118),get(e->slot(0,3),lit42));e->slot(0,14)=std::move(t278);}
{V t279=mul(get(e->slot(0,1),lit105),get(e->slot(0,3),lit52));e->slot(0,15)=std::move(t279);}
{std::array<Ref,1> refs{Ref(e,0,7)};V t280=mul(e->slot(0,7),add(add(sub(sub(sub(sub(sub(sub(V(1.0),e->slot(0,8)),e->slot(0,9)),e->slot(0,11)),e->slot(0,12)),e->slot(0,14)),e->slot(0,15)),e->slot(0,10)),e->slot(0,13)));refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e,0,7)};V t281=mul(e->slot(0,7),add(V(0.85),mul(V(0.15),([&](){V t282=get(e->slot(0,1),lit125);return !truth(t282)?V(1.0):t282;})())));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e,0,7)};V t283=mul(e->slot(0,7),add(V(0.92),mul(V(0.08),first(call(e->slot(1,3),Args{get(e->slot(0,1),lit119),V(0.0),V(1.25)})))));refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(e,0,7)};V t284=first(call(e->slot(1,3),Args{e->slot(0,7),get(e->slot(0,3),lit17),get(e->slot(0,3),lit18)}));refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit64),e->slot(0,0))};V t285=e->slot(0,7);refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0))};V t286=first(call(e->slot(1,13),Args{([&](){V t287=get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0));return !truth(t287)?e->slot(0,7):t287;})(),e->slot(0,7),get(e->slot(0,3),lit55),e->slot(0,2)}));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0))};V t288=first(call(e->slot(1,3),Args{get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0)),get(e->slot(0,3),lit17),get(e->slot(0,3),lit18)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0))};V t289=first(call(e->slot(1,3),Args{divv(get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0)),first(call(get(e->get("math"),lit243),Args{get(e->slot(0,3),lit11),V(0.01)}))),V(0.35),V(1.15)}));refs[0].put(std::move(t289));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t290=get(e->slot(1,1),lit1);e->slot(0,4)=std::move(t290);}
{V t291=first(call(get(e->get("math"),lit129),call(e->slot(1,3),Args{e->slot(0,2),V(-num(get(e->slot(0,4),lit23))),get(e->slot(0,4),lit23)})));e->slot(0,5)=std::move(t291);}
{V t292=first(call(e->slot(1,3),Args{([&](){V t293=get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0));return !truth(t293)?V(1.0):t293;})(),get(e->slot(0,4),lit17),get(e->slot(0,4),lit18)}));e->slot(0,6)=std::move(t292);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t294=first(call(e->slot(1,3),Args{e->slot(0,1),get(e->slot(0,4),lit21),get(e->slot(0,4),lit22)}));refs[0].put(std::move(t294));}
{V t295=mul(mul(V(3.0),e->slot(0,6)),first(call(get(e->get("math"),lit243),Args{e->slot(0,1),get(e->slot(0,4),lit21)})));e->slot(0,7)=std::move(t295);}
{V t296=first(call(get(e->get("math"),lit246),Args{e->slot(0,5)}));e->slot(0,8)=std::move(t296);}
{V t297=sub(V(1.0),divv(mul(get(e->slot(0,4),lit19),e->slot(0,8)),first(call(get(e->get("math"),lit243),Args{e->slot(0,7),V(1.0)}))));e->slot(0,9)=std::move(t297);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit73),e->slot(0,0))};V t298=first(call(e->slot(1,3),Args{e->slot(0,9),V(-num(V(2.0))),V(1.0)}));refs[0].put(std::move(t298));}
{V t299=V(0.0);e->slot(0,10)=std::move(t299);}
{V t300=V(0.0);e->slot(0,11)=std::move(t300);}
if(truth(gt(e->slot(0,9),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,10)};V t301=mul(mul(e->slot(0,6),e->slot(0,1)),sub(V(1.0),mul(mul(e->slot(0,9),e->slot(0,9)),e->slot(0,9))));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e,0,11)};V t302=first(call(e->slot(1,3),Args{sub(V(1.0),e->slot(0,9)),V(0.0),V(1.0)}));refs[0].put(std::move(t302));}
}else{{std::array<Ref,1> refs{Ref(e,0,10)};V t303=mul(mul(e->slot(0,6),e->slot(0,1)),get(e->slot(0,4),lit12));refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e,0,11)};V t304=V(1.0);refs[0].put(std::move(t304));}
}
{V t305=mul(e->slot(0,10),first(call(e->slot(1,5),Args{e->slot(0,2)})));e->slot(0,12)=std::move(t305);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit71),e->slot(0,0))};V t306=e->slot(0,12);refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0))};V t307=first(call(e->slot(1,13),Args{([&](){V t308=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));return !truth(t308)?e->slot(0,12):t308;})(),e->slot(0,12),get(e->slot(0,4),lit56),e->slot(0,3)}));refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0))};V t309=first(call(e->slot(1,13),Args{([&](){V t310=get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0));return !truth(t310)?e->slot(0,11):t310;})(),e->slot(0,11),get(e->slot(0,4),lit56),e->slot(0,3)}));refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0))};V t311=first(call(e->slot(1,3),Args{get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0)),mul(V(-num(get(e->slot(0,4),lit22))),get(e->slot(0,4),lit18)),mul(get(e->slot(0,4),lit22),get(e->slot(0,4),lit18))}));refs[0].put(std::move(t311));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0))};V t312=first(call(e->slot(1,3),Args{get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0)),V(0.0),V(1.0)}));refs[0].put(std::move(t312));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,8),Args{concat(lit247,e->slot(0,0)),([&](){V t313=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));return !truth(t313)?V(30.0):t313;})()});
call(e->slot(1,8),Args{concat(lit248,e->slot(0,0)),([&](){V t314=get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0));return !truth(t314)?V(45.0):t314;})()});
call(e->slot(1,8),Args{concat(lit249,e->slot(0,0)),([&](){V t315=get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0));return !truth(t315)?V(1.0):t315;})()});
call(e->slot(1,8),Args{concat(lit250,e->slot(0,0)),([&](){V t316=get(get(get(e->slot(1,1),lit61),lit64),e->slot(0,0));return !truth(t316)?V(1.0):t316;})()});
call(e->slot(1,8),Args{concat(lit251,e->slot(0,0)),([&](){V t317=get(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0));return !truth(t317)?V(1.0):t317;})()});
call(e->slot(1,8),Args{concat(lit252,e->slot(0,0)),([&](){V t318=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));return !truth(t318)?V(0.0):t318;})()});
call(e->slot(1,8),Args{concat(lit253,e->slot(0,0)),([&](){V t319=get(get(get(e->slot(1,1),lit61),lit71),e->slot(0,0));return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,8),Args{concat(lit254,e->slot(0,0)),([&](){V t320=get(get(get(e->slot(1,1),lit61),lit69),e->slot(0,0));return !truth(t320)?V(0.0):t320;})()});
call(e->slot(1,8),Args{concat(lit255,e->slot(0,0)),([&](){V t321=get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0));return !truth(t321)?V(0.0):t321;})()});
call(e->slot(1,8),Args{concat(lit256,e->slot(0,0)),([&](){V t322=get(get(get(e->slot(1,1),lit61),lit73),e->slot(0,0));return !truth(t322)?V(1.0):t322;})()});
call(e->slot(1,8),Args{concat(lit257,e->slot(0,0)),([&](){V t323=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));return !truth(t323)?V(30.0):t323;})()});
call(e->slot(1,8),Args{concat(lit258,e->slot(0,0)),([&](){V t324=get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0));return !truth(t324)?V(45.0):t324;})()});
call(e->slot(1,8),Args{concat(lit259,e->slot(0,0)),([&](){V t325=get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0));return !truth(t325)?V(1.0):t325;})()});
call(e->slot(1,8),Args{concat(lit260,e->slot(0,0)),([&](){V t326=get(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0));return !truth(t326)?V(1.0):t326;})()});
call(e->slot(1,8),Args{concat(lit261,e->slot(0,0)),([&](){V t327=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,8),Args{concat(lit262,e->slot(0,0)),([&](){V t328=get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0));return !truth(t328)?V(0.0):t328;})()});
call(e->slot(1,8),Args{concat(lit263,e->slot(0,0)),([&](){V t329=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,8),Args{concat(lit264,e->slot(0,0)),([&](){V t330=get(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0));return !truth(t330)?V(1.0):t330;})()});
call(e->slot(1,8),Args{concat(lit265,e->slot(0,0)),([&](){V t331=get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0));return !truth(t331)?V(0.0):t331;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit61),lit102))))){return Args{};
}
call(e->slot(1,8),Args{concat(lit266,e->slot(0,0)),([&](){V t332=get(get(get(e->slot(1,1),lit61),lit75),e->slot(0,0));return !truth(t332)?V(0.0):t332;})()});
call(e->slot(1,8),Args{concat(lit267,e->slot(0,0)),([&](){V t333=get(get(get(e->slot(1,1),lit61),lit76),e->slot(0,0));return !truth(t333)?V(0.0):t333;})()});
call(e->slot(1,8),Args{concat(lit268,e->slot(0,0)),([&](){V t334=get(get(get(e->slot(1,1),lit61),lit67),e->slot(0,0));return !truth(t334)?V(0.0):t334;})()});
call(e->slot(1,8),Args{concat(lit269,e->slot(0,0)),([&](){V t335=get(get(get(e->slot(1,1),lit61),lit68),e->slot(0,0));return !truth(t335)?V(0.0):t335;})()});
call(e->slot(1,8),Args{concat(lit270,e->slot(0,0)),([&](){V t336=get(get(get(e->slot(1,1),lit61),lit70),e->slot(0,0));return !truth(t336)?V(0.0):t336;})()});
call(e->slot(1,8),Args{concat(lit271,e->slot(0,0)),([&](){V t337=get(get(get(e->slot(1,1),lit61),lit75),e->slot(0,0));return !truth(t337)?V(0.0):t337;})()});
call(e->slot(1,8),Args{concat(lit272,e->slot(0,0)),([&](){V t338=get(get(get(e->slot(1,1),lit61),lit76),e->slot(0,0));return !truth(t338)?V(0.0):t338;})()});
call(e->slot(1,8),Args{concat(lit273,e->slot(0,0)),([&](){V t339=get(get(get(e->slot(1,1),lit61),lit67),e->slot(0,0));return !truth(t339)?V(0.0):t339;})()});
call(e->slot(1,8),Args{concat(lit274,e->slot(0,0)),([&](){V t340=get(get(get(e->slot(1,1),lit61),lit68),e->slot(0,0));return !truth(t340)?V(0.0):t340;})()});
call(e->slot(1,8),Args{concat(lit275,e->slot(0,0)),([&](){V t341=get(get(get(e->slot(1,1),lit61),lit70),e->slot(0,0));return !truth(t341)?V(0.0):t341;})()});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,8),Args{lit276,([&](){V t342=get(get(e->slot(1,1),lit61),lit87);return !truth(t342)?lit277:t342;})()});
call(e->slot(1,8),Args{lit278,([&](){V t343=get(get(e->slot(1,1),lit61),lit89);return !truth(t343)?V(0.0):t343;})()});
call(e->slot(1,8),Args{lit279,([&](){V t344=([&](){V t345=get(get(e->slot(1,1),lit61),lit90);return truth(t345)?V(1.0):t345;})();return !truth(t344)?V(0.0):t344;})()});
call(e->slot(1,8),Args{lit280,([&](){V t346=([&](){V t347=get(get(e->slot(1,1),lit61),lit91);return truth(t347)?V(1.0):t347;})();return !truth(t346)?V(0.0):t346;})()});
call(e->slot(1,8),Args{lit281,([&](){V t348=([&](){V t349=get(get(e->slot(1,1),lit61),lit92);return truth(t349)?V(1.0):t349;})();return !truth(t348)?V(0.0):t348;})()});
call(e->slot(1,8),Args{lit282,([&](){V t350=([&](){V t351=get(get(e->slot(1,1),lit61),lit93);return truth(t351)?V(1.0):t351;})();return !truth(t350)?V(0.0):t350;})()});
call(e->slot(1,8),Args{lit283,([&](){V t352=([&](){V t353=get(get(e->slot(1,1),lit61),lit100);return truth(t353)?V(1.0):t353;})();return !truth(t352)?V(0.0):t352;})()});
call(e->slot(1,8),Args{lit284,([&](){V t354=get(get(e->slot(1,1),lit61),lit87);return !truth(t354)?lit277:t354;})()});
call(e->slot(1,8),Args{lit285,([&](){V t355=get(get(e->slot(1,1),lit61),lit89);return !truth(t355)?V(0.0):t355;})()});
call(e->slot(1,8),Args{lit286,([&](){V t356=([&](){V t357=get(get(e->slot(1,1),lit61),lit90);return truth(t357)?V(1.0):t357;})();return !truth(t356)?V(0.0):t356;})()});
call(e->slot(1,8),Args{lit287,([&](){V t358=get(get(e->slot(1,1),lit61),lit78);return !truth(t358)?V(30.0):t358;})()});
call(e->slot(1,8),Args{lit288,([&](){V t359=get(get(e->slot(1,1),lit61),lit79);return !truth(t359)?V(45.0):t359;})()});
call(e->slot(1,8),Args{lit289,([&](){V t360=get(get(e->slot(1,1),lit61),lit80);return !truth(t360)?V(1.0):t360;})()});
call(e->slot(1,8),Args{lit290,([&](){V t361=get(get(e->slot(1,1),lit61),lit81);return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,8),Args{lit291,([&](){V t362=get(get(e->slot(1,1),lit61),lit82);return !truth(t362)?V(0.0):t362;})()});
call(e->slot(1,8),Args{lit292,([&](){V t363=get(get(e->slot(1,1),lit61),lit86);return !truth(t363)?V(0.0):t363;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit61),lit102))))){return Args{};
}
call(e->slot(1,8),Args{lit293,([&](){V t364=get(get(e->slot(1,1),lit61),lit83);return !truth(t364)?V(30.0):t364;})()});
call(e->slot(1,8),Args{lit294,([&](){V t365=get(get(e->slot(1,1),lit61),lit84);return !truth(t365)?V(1.0):t365;})()});
call(e->slot(1,8),Args{lit295,([&](){V t366=get(get(e->slot(1,1),lit61),lit85);return !truth(t366)?V(0.0):t366;})()});
call(e->slot(1,8),Args{lit296,([&](){V t367=([&](){V t368=get(get(e->slot(1,1),lit61),lit91);return truth(t368)?V(1.0):t368;})();return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,8),Args{lit297,([&](){V t369=([&](){V t370=get(get(e->slot(1,1),lit61),lit92);return truth(t370)?V(1.0):t370;})();return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,8),Args{lit298,([&](){V t371=([&](){V t372=get(get(e->slot(1,1),lit61),lit93);return truth(t372)?V(1.0):t372;})();return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,8),Args{lit299,([&](){V t373=([&](){V t374=get(get(e->slot(1,1),lit61),lit94);return truth(t374)?V(1.0):t374;})();return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,8),Args{lit300,([&](){V t375=([&](){V t376=get(get(e->slot(1,1),lit61),lit95);return truth(t376)?V(1.0):t376;})();return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,8),Args{lit301,([&](){V t377=([&](){V t378=get(get(e->slot(1,1),lit61),lit96);return truth(t378)?V(1.0):t378;})();return !truth(t377)?V(0.0):t377;})()});
call(e->slot(1,8),Args{lit302,([&](){V t379=([&](){V t380=get(get(e->slot(1,1),lit61),lit97);return truth(t380)?V(1.0):t380;})();return !truth(t379)?V(0.0):t379;})()});
call(e->slot(1,8),Args{lit303,([&](){V t381=([&](){V t382=get(get(e->slot(1,1),lit61),lit98);return truth(t382)?V(1.0):t382;})();return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,8),Args{lit304,([&](){V t383=([&](){V t384=get(get(e->slot(1,1),lit61),lit99);return truth(t384)?V(1.0):t384;})();return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,8),Args{lit305,([&](){V t385=([&](){V t386=get(get(e->slot(1,1),lit61),lit100);return truth(t386)?V(1.0):t386;})();return !truth(t385)?V(0.0):t385;})()});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t387=num(V(0.0)),t388=num(V(3.0)),t389=num(V(1.0));for(double t390=t387;(t389>0?t390<=t388:t390>=t388);t390+=t389){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t390);call(e->slot(2,28),Args{e->slot(0,0)});
}}
call(e->slot(1,29),Args{});
return Args{};});
Ref(e->slot(0,1),lit306).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit87)};V t391=lit88;refs[0].put(std::move(t391));}
call(e->slot(1,30),Args{});
return Args{};}));
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);e->slot(0,5)=arg(a,5);{V t392=first(call(e->slot(1,20),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,6)=std::move(t392);}
{V t393=first(call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,7)=std::move(t393);}
{V t394=first(call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,8)=std::move(t394);}
{V t395=first(call(e->slot(1,23),Args{e->slot(0,0)}));e->slot(0,9)=std::move(t395);}
{std::array<Ref,1> refs{Ref(e,0,7)};V t396=first(call(e->slot(1,3),Args{sub(e->slot(0,7),mul(([&](){V t397=get(e->slot(0,9),lit126);return !truth(t397)?V(0.0):t397;})(),get(get(e->slot(1,1),lit1),lit49))),V(-num(get(get(e->slot(1,1),lit1),lit23))),get(get(e->slot(1,1),lit1),lit23)}));refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit70),e->slot(0,0))};V t398=e->slot(0,6);refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit67),e->slot(0,0))};V t399=e->slot(0,7);refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit61),lit68),e->slot(0,0))};V t400=e->slot(0,8);refs[0].put(std::move(t400));}
call(e->slot(1,25),Args{e->slot(0,0),e->slot(0,6),e->slot(0,7),e->slot(0,8),e->slot(0,2),([&](){V t401=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));return !truth(t401)?V(0.0):t401;})(),e->slot(0,3),e->slot(0,4),e->slot(0,9),e->slot(0,5)});
call(e->slot(1,26),Args{e->slot(0,0),e->slot(0,9),e->slot(0,5)});
call(e->slot(1,27),Args{e->slot(0,0),e->slot(0,6),e->slot(0,7),e->slot(0,5)});
call(e->slot(1,24),Args{e->slot(0,0),e->slot(0,9)});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;{V t402=V(0.0);e->slot(0,0)=std::move(t402);}
{V t403=V(0.0);e->slot(0,1)=std::move(t403);}
{V t404=V(0.0);e->slot(0,2)=std::move(t404);}
{V t405=V(0.0);e->slot(0,3)=std::move(t405);}
{V t406=V(0.0);e->slot(0,4)=std::move(t406);}
{V t407=V(-num(V(9999.0)));e->slot(0,5)=std::move(t407);}
{V t408=V(9999.0);e->slot(0,6)=std::move(t408);}
{V t409=V(0.0);e->slot(0,7)=std::move(t409);}
{V t410=V(0.0);e->slot(0,8)=std::move(t410);}
{double t411=num(V(0.0)),t412=num(V(3.0)),t413=num(V(1.0));for(double t414=t411;(t413>0?t414<=t412:t414>=t412);t414+=t413){auto parent=e;Env storage(parent,false,6);auto e=&storage;e->slot(0,0)=V(t414);{V t415=([&](){V t416=get(get(get(e->slot(2,1),lit61),lit62),e->slot(0,0));return !truth(t416)?V(30.0):t416;})();e->slot(0,1)=std::move(t415);}
{V t417=([&](){V t418=get(get(get(e->slot(2,1),lit61),lit63),e->slot(0,0));return !truth(t418)?V(45.0):t418;})();e->slot(0,2)=std::move(t417);}
{V t419=([&](){V t420=get(get(get(e->slot(2,1),lit61),lit66),e->slot(0,0));return !truth(t420)?V(1.0):t420;})();e->slot(0,3)=std::move(t419);}
{V t421=first(call(e->slot(2,4),Args{([&](){V t422=get(get(get(e->slot(2,1),lit61),lit72),e->slot(0,0));return !truth(t422)?V(0.0):t422;})()}));e->slot(0,4)=std::move(t421);}
{V t423=([&](){V t424=get(get(get(e->slot(2,1),lit61),lit74),e->slot(0,0));return !truth(t424)?V(0.0):t424;})();e->slot(0,5)=std::move(t423);}
{std::array<Ref,1> refs{Ref(e,1,0)};V t425=add(e->slot(1,0),e->slot(0,1));refs[0].put(std::move(t425));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t426=add(e->slot(1,1),e->slot(0,2));refs[0].put(std::move(t426));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t427=add(e->slot(1,2),e->slot(0,3));refs[0].put(std::move(t427));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t428=add(e->slot(1,3),e->slot(0,4));refs[0].put(std::move(t428));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t429=add(e->slot(1,4),e->slot(0,5));refs[0].put(std::move(t429));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t430=first(call(get(e->get("math"),lit243),Args{e->slot(1,5),e->slot(0,1)}));refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t431=first(call(get(e->get("math"),lit307),Args{e->slot(1,6),e->slot(0,3)}));refs[0].put(std::move(t431));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t432=first(call(get(e->get("math"),lit243),Args{e->slot(1,7),e->slot(0,5)}));refs[0].put(std::move(t432));}
if(truth(([&](){V t433=get(get(get(e->slot(2,1),lit61),lit77),e->slot(0,0));return truth(t433)?get(get(get(get(e->slot(2,1),lit61),lit77),e->slot(0,0)),lit103):t433;})())){{std::array<Ref,1> refs{Ref(e,1,8)};V t434=add(e->slot(1,8),V(1.0));refs[0].put(std::move(t434));}
}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit78)};V t435=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t435));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit79)};V t436=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit80)};V t437=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t437));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit81)};V t438=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t438));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit82)};V t439=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t439));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit83)};V t440=e->slot(0,5);refs[0].put(std::move(t440));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit84)};V t441=e->slot(0,6);refs[0].put(std::move(t441));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit85)};V t442=e->slot(0,7);refs[0].put(std::move(t442));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit86)};V t443=e->slot(0,8);refs[0].put(std::move(t443));}
return Args{};});
Ref(e->slot(0,1),lit308).put(native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit89)};V t444=add(([&](){V t445=get(get(e->slot(1,1),lit61),lit89);return !truth(t445)?V(0.0):t445;})(),V(1.0));refs[0].put(std::move(t444));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t446=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t446));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit87)};V t447=lit309;refs[0].put(std::move(t447));}
call(e->slot(1,30),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t448=first(call(e->slot(1,3),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit58),get(get(e->slot(1,1),lit1),lit59)}));refs[0].put(std::move(t448));}
call(e->slot(1,15),Args{e->slot(0,0)});
call(e->slot(1,14),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t449=([&](){V t450=e->slot(0,1);return !truth(t450)?first(call(e->slot(1,10),Args{})):t450;})();refs[0].put(std::move(t449));}
{V t451=first(call(e->slot(1,11),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t451);}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit87)};V t452=lit310;refs[0].put(std::move(t452));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit90)};V t453=V(false);refs[0].put(std::move(t453));}
}else if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit87)};V t454=lit310;refs[0].put(std::move(t454));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit90)};V t455=V(false);refs[0].put(std::move(t455));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit87)};V t456=lit311;refs[0].put(std::move(t456));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit61),lit90)};V t457=V(true);refs[0].put(std::move(t457));}
}

{V t458=first(call(e->slot(1,16),Args{e->slot(0,1)}));e->slot(0,4)=std::move(t458);}
{V t459=first(call(e->slot(1,18),Args{}));e->slot(0,5)=std::move(t459);}
{V t460=first(call(e->slot(1,19),Args{}));e->slot(0,6)=std::move(t460);}
{double t461=num(V(0.0)),t462=num(V(3.0)),t463=num(V(1.0));for(double t464=t461;(t463>0?t464<=t462:t464>=t462);t464+=t463){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t464);{V t465=first(call(e->slot(2,12),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t465);}
call(e->slot(2,31),Args{e->slot(0,0),e->slot(0,1),e->slot(1,4),e->slot(1,5),e->slot(1,6),e->slot(1,0)});
}}
call(e->slot(1,32),Args{});
call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit312).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t466=get(get(get(e->slot(1,1),lit61),lit66),e->slot(0,0));return !truth(t466)?V(1.0):t466;})()};
return Args{};}));
Ref(e->slot(0,1),lit313).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t467=get(get(get(e->slot(1,1),lit61),lit65),e->slot(0,0));return !truth(t467)?V(1.0):t467;})()};
return Args{};}));
Ref(e->slot(0,1),lit314).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t468=get(get(get(e->slot(1,1),lit61),lit72),e->slot(0,0));return !truth(t468)?V(0.0):t468;})()};
return Args{};}));
Ref(e->slot(0,1),lit315).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t469=get(get(get(e->slot(1,1),lit61),lit62),e->slot(0,0));return !truth(t469)?V(30.0):t469;})()};
return Args{};}));
Ref(e->slot(0,1),lit316).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t470=get(get(get(e->slot(1,1),lit61),lit63),e->slot(0,0));return !truth(t470)?V(45.0):t470;})()};
return Args{};}));
Ref(e->slot(0,1),lit317).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t471=get(get(get(e->slot(1,1),lit61),lit74),e->slot(0,0));return !truth(t471)?V(0.0):t471;})()};
return Args{};}));
Ref(e->slot(0,1),lit318).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit61)};
}
return Args{get(get(get(e->slot(1,1),lit61),lit77),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit319).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t472=([&](){V t473=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t473)?V(0.0):t473;})();e->slot(0,0)=std::move(t472);}
return call(get(e->get("string"),lit320),Args{concat(lit321,concat(lit322,lit323)),e->slot(0,0),([&](){V t474=get(get(get(e->slot(2,1),lit61),lit62),e->slot(0,0));return !truth(t474)?V(0.0):t474;})(),([&](){V t475=get(get(get(e->slot(2,1),lit61),lit63),e->slot(0,0));return !truth(t475)?V(0.0):t475;})(),([&](){V t476=get(get(get(e->slot(2,1),lit61),lit65),e->slot(0,0));return !truth(t476)?V(0.0):t476;})(),([&](){V t477=get(get(get(e->slot(2,1),lit61),lit66),e->slot(0,0));return !truth(t477)?V(1.0):t477;})(),([&](){V t478=get(get(get(e->slot(2,1),lit61),lit72),e->slot(0,0));return !truth(t478)?V(0.0):t478;})(),([&](){V t479=get(get(get(e->slot(2,1),lit61),lit74),e->slot(0,0));return !truth(t479)?V(0.0):t479;})(),([&](){V t480=get(get(get(e->slot(2,1),lit61),lit67),e->slot(0,0));return !truth(t480)?V(0.0):t480;})(),([&](){V t481=get(get(get(e->slot(2,1),lit61),lit68),e->slot(0,0));return !truth(t481)?V(0.0):t481;})(),([&](){V t482=get(get(get(e->slot(2,1),lit61),lit69),e->slot(0,0));return !truth(t482)?V(0.0):t482;})(),([&](){V t483=get(get(get(e->slot(2,1),lit61),lit73),e->slot(0,0));return !truth(t483)?V(0.0):t483;})()});
}
return call(get(e->get("string"),lit320),Args{concat(lit324,concat(lit325,concat(lit326,concat(lit327,lit328)))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit61),lit87)})),([&](){V t484=get(get(e->slot(1,1),lit61),lit89);return !truth(t484)?V(0.0):t484;})(),([&](){V t485=([&](){V t486=get(get(e->slot(1,1),lit61),lit90);return truth(t486)?lit329:t486;})();return !truth(t485)?lit330:t485;})(),([&](){V t487=get(get(get(e->slot(1,1),lit61),lit62),V(0.0));return !truth(t487)?V(0.0):t487;})(),([&](){V t488=get(get(get(e->slot(1,1),lit61),lit62),V(1.0));return !truth(t488)?V(0.0):t488;})(),([&](){V t489=get(get(get(e->slot(1,1),lit61),lit62),V(2.0));return !truth(t489)?V(0.0):t489;})(),([&](){V t490=get(get(get(e->slot(1,1),lit61),lit62),V(3.0));return !truth(t490)?V(0.0):t490;})(),([&](){V t491=get(get(e->slot(1,1),lit61),lit78);return !truth(t491)?V(0.0):t491;})(),([&](){V t492=get(get(get(e->slot(1,1),lit61),lit66),V(0.0));return !truth(t492)?V(1.0):t492;})(),([&](){V t493=get(get(get(e->slot(1,1),lit61),lit66),V(1.0));return !truth(t493)?V(1.0):t493;})(),([&](){V t494=get(get(get(e->slot(1,1),lit61),lit66),V(2.0));return !truth(t494)?V(1.0):t494;})(),([&](){V t495=get(get(get(e->slot(1,1),lit61),lit66),V(3.0));return !truth(t495)?V(1.0):t495;})(),([&](){V t496=get(get(e->slot(1,1),lit61),lit80);return !truth(t496)?V(1.0):t496;})(),([&](){V t497=get(get(get(e->slot(1,1),lit61),lit72),V(0.0));return !truth(t497)?V(0.0):t497;})(),([&](){V t498=get(get(get(e->slot(1,1),lit61),lit72),V(1.0));return !truth(t498)?V(0.0):t498;})(),([&](){V t499=get(get(get(e->slot(1,1),lit61),lit72),V(2.0));return !truth(t499)?V(0.0):t499;})(),([&](){V t500=get(get(get(e->slot(1,1),lit61),lit72),V(3.0));return !truth(t500)?V(0.0):t500;})(),([&](){V t501=get(get(e->slot(1,1),lit61),lit82);return !truth(t501)?V(0.0):t501;})(),([&](){V t502=([&](){V t503=get(get(e->slot(1,1),lit61),lit91);return truth(t503)?lit329:t503;})();return !truth(t502)?lit330:t502;})(),([&](){V t504=([&](){V t505=get(get(e->slot(1,1),lit61),lit92);return truth(t505)?lit329:t505;})();return !truth(t504)?lit330:t504;})(),([&](){V t506=([&](){V t507=get(get(e->slot(1,1),lit61),lit93);return truth(t507)?lit329:t507;})();return !truth(t506)?lit330:t506;})(),([&](){V t508=([&](){V t509=get(get(e->slot(1,1),lit61),lit94);return truth(t509)?lit329:t509;})();return !truth(t508)?lit330:t508;})(),([&](){V t510=([&](){V t511=get(get(e->slot(1,1),lit61),lit95);return truth(t511)?lit329:t511;})();return !truth(t510)?lit330:t510;})(),([&](){V t512=([&](){V t513=get(get(e->slot(1,1),lit61),lit96);return truth(t513)?lit329:t513;})();return !truth(t512)?lit330:t512;})(),([&](){V t514=([&](){V t515=get(get(e->slot(1,1),lit61),lit97);return truth(t515)?lit329:t515;})();return !truth(t514)?lit330:t514;})(),([&](){V t516=([&](){V t517=get(get(e->slot(1,1),lit61),lit98);return truth(t517)?lit329:t517;})();return !truth(t516)?lit330:t516;})(),([&](){V t518=([&](){V t519=get(get(e->slot(1,1),lit61),lit99);return truth(t519)?lit329:t519;})();return !truth(t518)?lit330:t518;})(),([&](){V t520=([&](){V t521=get(get(e->slot(1,1),lit61),lit100);return truth(t521)?lit329:t521;})();return !truth(t520)?lit330:t520;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}

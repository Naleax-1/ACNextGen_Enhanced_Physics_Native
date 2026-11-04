#pragma once
#include <stdint.h>
#include "bridge_protocol.h"
#include "enhancement_protocol.h"
#include "spring_protocol.h"
#include "brake_protocol.h"
#include "drive_model_protocol.h"
#include "body_model_protocol.h"
#include "damper_model_protocol.h"
#ifdef _WIN32
#define NGP2_API __declspec(dllexport)
#else
#define NGP2_API
#endif
#ifdef __cplusplus
extern "C" {
#endif
NGP2_API uint32_t ngp2_version(void);
NGP2_API void* ngp2_create(const char* ac_root);
NGP2_API void ngp2_destroy(void*);
NGP2_API uint32_t ngp2_configure(void*,const char* json);
NGP2_API uint32_t ngp2_step(void*,const char* vehicle_json,double dt);
// Same models, no eager full diagnostic serialization. snapshot() remains available.
NGP2_API uint32_t ngp2_step_models(void*,const char* vehicle_json,double dt);
NGP2_API const char* ngp2_observer_snapshot(void*);
NGP2_API const char* ngp2_snapshot(void*);
NGP2_API const char* ngp2_error(void*);
NGP2_API const char* ngp2_profile(void*);
// Slow model interpreter and fast additional-effect path have separate ownership.
NGP2_API uint32_t ngp4_effect_hint(void*,double* spin_risk,double* authority);
NGP2_API uint32_t ngp4_compute_effect(const Ngp4Sensor*,double spin_risk,double authority,
    double model_age_seconds,uint32_t generation,uint32_t enabled,Ngp4Command*);
// Owned module state, not last-writer-wins shared diagnostic keys.
NGP2_API uint32_t ngpe_extract_hints(void*,NgpeHints*);
// Opt-in conservative envelope using owned constitutive lateral output.
NGP2_API uint32_t ngpe_extract_constitutive_hints(void*,NgpeHints*);
// Raw owned spring ratios; units_qualified always remains false here.
NGP2_API uint32_t ngps_extract_model_hints(void*,NgpsModelHints*);
NGP2_API uint32_t ngpb_extract_model_hints(void*,NgpbModelHints*);
NGP2_API uint32_t ngpd_extract_model_hints(void*,NgpdModelHints*);
NGP2_API uint32_t ngpd_extract_model_components(void*,NgpdModelComponents*);
NGP2_API uint32_t ngpbody_extract_model_hints(void*,NgpBodyModelHints*);
NGP2_API uint32_t ngpdamper_extract_model_hints(void*,NgpDamperModelHints*);
NGP2_API uint32_t ngpe_compute(const NgpeSensor*,const NgpeHints*,double model_age_seconds,
    uint32_t generation,uint32_t enabled_channels,NgpeCommand*);
#ifdef __cplusplus
}
#endif

#pragma once
#include <stdint.h>
enum { NGP_DAMPER_MODEL_ABI=1 };
typedef struct NgpDamperModelHints {
    uint32_t abi,valid_mask,units_qualified,reserved;
    double force[4],raw_force[4],model_velocity[4],coefficient_scale[4];
} NgpDamperModelHints;
#ifdef __cplusplus
static_assert(sizeof(NgpDamperModelHints)==144,"Owned damper hints ABI");
#endif

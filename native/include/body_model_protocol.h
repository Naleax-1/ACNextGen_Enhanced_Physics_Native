#pragma once
#include <stdint.h>
enum { NGP_BODY_MODEL_ABI=1 };
typedef struct NgpBodyModelHints {
    uint32_t abi,valid,units_qualified,reserved;
    double normalized[4]; // roll, pitch, heave, yawHint; not radians or Nm
} NgpBodyModelHints;
#ifdef __cplusplus
static_assert(sizeof(NgpBodyModelHints)==48,"Owned body hints ABI");
#endif

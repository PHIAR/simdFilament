#pragma once

#include "simd/types.h"

#define DEFINE_CAST(from_base_type, to_base_type, dimensions) \
    simd_ ## to_base_type ## dimensions SIMD_OVERLOADABLE \
    simd_make_ ## to_base_type ## dimensions (simd_ ## from_base_type ## dimensions v) { \
        return __builtin_convertvector(v, simd_ ## to_base_type ## dimensions); \
    }

#define DEFINE_CASTS_ALL_DIMENSIONS(from_base_type, to_base_type) \
    DEFINE_CAST(from_base_type, to_base_type, 2) \
    DEFINE_CAST(from_base_type, to_base_type, 3) \
    DEFINE_CAST(from_base_type, to_base_type, 4)

#define DEFINE_CASTS_ALL_TO(type) \
    DEFINE_CASTS_ALL_DIMENSIONS(float, type) \
    DEFINE_CASTS_ALL_DIMENSIONS(double, type) \
    DEFINE_CASTS_ALL_DIMENSIONS(int, type)

DEFINE_CASTS_ALL_TO(float)
DEFINE_CASTS_ALL_TO(double)
DEFINE_CASTS_ALL_TO(int)

#undef DEFINE_CAST
#undef DEFINE_CASTS_ALL_DIMENSIONS
#undef DEFINE_CASTS_ALL_TO
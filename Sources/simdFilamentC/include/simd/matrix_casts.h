#pragma once

#include "simd/types.h"
#include "simd/vector_casts.h"

#define DEFINE_CAST(from_base_type, to_base_type, num_columns, dimensions) \
    simd_ ## to_base_type ## num_columns ## x ## dimensions SIMD_OVERLOADABLE \
    simd_make_ ## to_base_type ## num_columns ## x ## dimensions (simd_ ## from_base_type ## num_columns ## x ## dimensions v) { \
        simd_ ## to_base_type ## num_columns ## x ## dimensions out; \
        for (int i = 0; i < num_columns; ++i) { \
            out.columns[i] = simd_make_ ## to_base_type ## dimensions(v.columns[i]); \
        } \
        return out; \
    }

#define DEFINE_CASTS_ALL_DIMENSIONS(from_base_type, to_base_type) \
    DEFINE_CAST(from_base_type, to_base_type, 2, 2) \
    DEFINE_CAST(from_base_type, to_base_type, 2, 3) \
    DEFINE_CAST(from_base_type, to_base_type, 2, 4) \
    DEFINE_CAST(from_base_type, to_base_type, 3, 2) \
    DEFINE_CAST(from_base_type, to_base_type, 3, 3) \
    DEFINE_CAST(from_base_type, to_base_type, 3, 4) \
    DEFINE_CAST(from_base_type, to_base_type, 4, 2) \
    DEFINE_CAST(from_base_type, to_base_type, 4, 3) \
    DEFINE_CAST(from_base_type, to_base_type, 4, 4)

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
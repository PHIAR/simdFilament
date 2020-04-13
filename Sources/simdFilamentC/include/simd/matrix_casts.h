#pragma once

#include "simd/types.h"
#include "simd/vector_casts.h"

#define DEFINE_CAST(from, to, to_column_type, num_columns, swift_args) \
    __attribute__((swift_name("simd_" #to ".init(_:)"))) \
    simd_ ## to SIMD_OVERLOADABLE \
    simd_make_ ## to (simd_ ## from v) { \
        simd_ ## to out; \
        for (int i = 0; i < num_columns; ++i) { \
            out.columns[i] = simd_make_ ## to_column_type(v.columns[i]); \
        } \
        return out; \
    }

#define DEFINE_CAST_WITH_DIMENSIONS(from_base_type, to_base_type, num_columns, dimensions, swift_args) \
    DEFINE_CAST(from_base_type ## num_columns ## x ## dimensions, to_base_type ## num_columns ## x ## dimensions, to_base_type ## dimensions, num_columns, swift_args)

#define DEFINE_CAST_WITH_2_COLUMNS(from_base_type, to_base_type, dimensions) \
    DEFINE_CAST_WITH_DIMENSIONS(from_base_type, to_base_type, 2, dimensions, "_:_:")

#define DEFINE_CAST_WITH_3_COLUMNS(from_base_type, to_base_type, dimensions) \
    DEFINE_CAST_WITH_DIMENSIONS(from_base_type, to_base_type, 3, dimensions, "_:_:_:")

#define DEFINE_CAST_WITH_4_COLUMNS(from_base_type, to_base_type, dimensions) \
    DEFINE_CAST_WITH_DIMENSIONS(from_base_type, to_base_type, 4, dimensions, "_:_:_:_:")

#define DEFINE_CASTS_ALL_DIMENSIONS(from_base_type, to_base_type) \
    DEFINE_CAST_WITH_2_COLUMNS(from_base_type, to_base_type, 2) \
    DEFINE_CAST_WITH_2_COLUMNS(from_base_type, to_base_type, 3) \
    DEFINE_CAST_WITH_2_COLUMNS(from_base_type, to_base_type, 4) \
    DEFINE_CAST_WITH_3_COLUMNS(from_base_type, to_base_type, 2) \
    DEFINE_CAST_WITH_3_COLUMNS(from_base_type, to_base_type, 3) \
    DEFINE_CAST_WITH_3_COLUMNS(from_base_type, to_base_type, 4) \
    DEFINE_CAST_WITH_4_COLUMNS(from_base_type, to_base_type, 2) \
    DEFINE_CAST_WITH_4_COLUMNS(from_base_type, to_base_type, 3) \
    DEFINE_CAST_WITH_4_COLUMNS(from_base_type, to_base_type, 4)

#define DEFINE_CASTS_ALL_TO(type) \
    DEFINE_CASTS_ALL_DIMENSIONS(float, type) \
    DEFINE_CASTS_ALL_DIMENSIONS(double, type) \
    DEFINE_CASTS_ALL_DIMENSIONS(int, type) \
    DEFINE_CASTS_ALL_DIMENSIONS(uint, type)

DEFINE_CASTS_ALL_TO(float)
DEFINE_CASTS_ALL_TO(double)
DEFINE_CASTS_ALL_TO(int)
DEFINE_CASTS_ALL_TO(uint)

#undef DEFINE_CAST
#undef DEFINE_CAST_WITH_DIMENSIONS
#undef DEFINE_CAST_WITH_2_COLUMNS
#undef DEFINE_CAST_WITH_3_COLUMNS
#undef DEFINE_CAST_WITH_4_COLUMNS
#undef DEFINE_CASTS_ALL_DIMENSIONS
#undef DEFINE_CASTS_ALL_TO
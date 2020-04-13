#pragma once

#include "simd/types.h"

#define CONSTRUCT_2_COLUMNS(type, column_type) \
    __attribute__((swift_name("simd_" #type ".init(_:_:)"))) \
    simd_ ## type SIMD_OVERLOADABLE \
    simd_make_ ## type(simd_ ## column_type col0, \
                       simd_ ## column_type col1) \
    { \
        simd_ ## type result = {col0, col1}; \
        return result; \
    } \

#define CONSTRUCT_3_COLUMNS(type, column_type) \
    __attribute__((swift_name("simd_" #type ".init(_:_:_:)"))) \
    simd_ ## type SIMD_OVERLOADABLE \
    simd_make_ ## type(simd_ ## column_type col0, \
                       simd_ ## column_type col1, \
                       simd_ ## column_type col2) \
    { \
        simd_ ## type result = {col0, col1, col2}; \
        return result; \
    } \

#define CONSTRUCT_4_COLUMNS(type, column_type) \
    __attribute__((swift_name("simd_" #type ".init(_:_:_:_:)"))) \
    simd_ ## type SIMD_OVERLOADABLE \
    simd_make_ ## type(simd_ ## column_type col0, \
                       simd_ ## column_type col1, \
                       simd_ ## column_type col2, \
                       simd_ ## column_type col3) \
    { \
        simd_ ## type result = {col0, col1, col2, col3}; \
        return result; \
    } \

#define CONSTRUCT_ALL_COLUMNS(base_type, dims) \
    CONSTRUCT_2_COLUMNS(base_type ## 2x ## dims, base_type ## dims) \
    CONSTRUCT_3_COLUMNS(base_type ## 3x ## dims, base_type ## dims) \
    CONSTRUCT_4_COLUMNS(base_type ## 4x ## dims, base_type ## dims)

#define CONSTRUCT_ALL(base_type) \
    CONSTRUCT_ALL_COLUMNS(base_type, 2) \
    CONSTRUCT_ALL_COLUMNS(base_type, 3) \
    CONSTRUCT_ALL_COLUMNS(base_type, 4)

#ifdef __cplusplus
extern "C"
{
#endif

    CONSTRUCT_ALL(float)
    CONSTRUCT_ALL(double)
    CONSTRUCT_ALL(int)
    CONSTRUCT_ALL(uint)
    CONSTRUCT_ALL(ushort)

#ifdef __cplusplus
}
#endif
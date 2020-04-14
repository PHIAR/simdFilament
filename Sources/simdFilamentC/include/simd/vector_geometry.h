#pragma once

#include "simd/types.h"
#include "simd/vector_math.h"
#include "simd/vector_reduce.h"

#define UNARY_REDUCE_OP(name, base_type, op, dimensions, extra...) \
    base_type SIMD_OVERLOADABLE \
    name(simd_ ## base_type ## dimensions _x \
         ##extra) { \
        return op; \
    }

#define ALL_UNARY_REDUCE_OPS(name, base_type, op, extra...) \
    UNARY_REDUCE_OP(name, base_type, op, 2, ##extra) \
    UNARY_REDUCE_OP(name, base_type, op, 3, ##extra) \
    UNARY_REDUCE_OP(name, base_type, op, 4, ##extra)

#define BINARY_REDUCE_OP(name, base_type, op, dimensions, extra...) \
    base_type SIMD_OVERLOADABLE \
    name(simd_ ## base_type ## dimensions _x, \
         simd_ ## base_type ## dimensions _y, \
         ##extra) { \
        return op; \
    }

#define ALL_BINARY_REDUCE_OPS(name, base_type, op, extra...) \
    BINARY_REDUCE_OP(name, base_type, op, 2, ##extra) \
    BINARY_REDUCE_OP(name, base_type, op, 3, ##extra) \
    BINARY_REDUCE_OP(name, base_type, op, 4, ##extra)

#ifdef __cplusplus
extern "C"
{
#endif

    ALL_BINARY_REDUCE_OPS(simd_dot, float, simd_reduce_sum(_x * _y))
    ALL_BINARY_REDUCE_OPS(simd_dot, double, simd_reduce_sum(_x * _y))

    ALL_UNARY_REDUCE_OPS(simd_length_squared, float, simd_dot(_x, _x))
    ALL_UNARY_REDUCE_OPS(simd_length_squared, double, simd_dot(_x, _x))

    ALL_UNARY_REDUCE_OPS(simd_length, float, sqrtf(simd_length_squared(_x)))
    ALL_UNARY_REDUCE_OPS(simd_length, double, sqrt(simd_length_squared(_x)))

    ALL_UNARY_REDUCE_OPS(simd_norm_one, float, simd_reduce_sum(abs(_x)))
    ALL_UNARY_REDUCE_OPS(simd_norm_one, double, simd_reduce_sum(abs(_x)))

    ALL_UNARY_REDUCE_OPS(simd_norm_inf, float, simd_reduce_max(abs(_x)))
    ALL_UNARY_REDUCE_OPS(simd_norm_inf, double, simd_reduce_max(abs(_x)))

    ALL_BINARY_REDUCE_OPS(simd_distance_squared, float, simd_length_squared(_y - _x))
    ALL_BINARY_REDUCE_OPS(simd_distance_squared, double, simd_length_squared(_y - _x))

    ALL_BINARY_REDUCE_OPS(simd_distance, float, simd_length(_y - _x))
    ALL_BINARY_REDUCE_OPS(simd_distance, double, simd_length(_y - _x))

    simd_float3 SIMD_ATTRIBUTES
    simd_cross2(simd_float2 a, simd_float2 b);

    simd_float3 SIMD_ATTRIBUTES
    simd_cross3(simd_float3 a, simd_float3 b);

    simd_float3 SIMD_OVERLOADABLE
    simd_cross(simd_float2 a, simd_float2 b)
    {
        return simd_cross2(a, b);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_cross(simd_float3 a, simd_float3 b)
    {
        return simd_cross3(a, b);
    }

#ifdef __cplusplus
}
#endif

#undef UNARY_REDUCE_OP
#undef ALL_UNARY_REDUCE_OPS
#undef BINARY_REDUCE_OP
#undef ALL_BINARY_REDUCE_OPS
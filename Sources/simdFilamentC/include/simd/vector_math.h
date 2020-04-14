#pragma once

#include "simd/types.h"

#include <math.h>
#include <stdlib.h>

#define UNARY_OP(name, base_type, op, dimensions, extra...) \
    simd_ ## base_type ## dimensions SIMD_OVERLOADABLE \
    name(simd_ ## base_type ## dimensions v, ##extra) { \
        for (int _i = 0; _i < dimensions; ++_i) { \
            __typeof__(v[_i]) _x = v[_i]; \
            v[_i] = op; \
        } \
        return v; \
    }

#define ALL_UNARY_OPS(name, base_type, op, extra...) \
    UNARY_OP(name, base_type, op, 2, ##extra) \
    UNARY_OP(name, base_type, op, 3, ##extra) \
    UNARY_OP(name, base_type, op, 4, ##extra)

#define BINARY_OP(name, base_type, op, dimensions, extra...) \
    simd_ ## base_type ## dimensions SIMD_OVERLOADABLE \
    name(simd_ ## base_type ## dimensions a, \
         simd_ ## base_type ## dimensions b, \
         ##extra) { \
        for (int _i = 0; _i < dimensions; ++_i) { \
            __typeof__(a[_i]) _x = a[_i]; \
            __typeof__(b[_i]) _y = a[_i]; \
            a[_i] = op; \
        } \
        return a; \
    }

#define ALL_BINARY_OPS(name, base_type, op, extra...) \
    BINARY_OP(name, base_type, op, 2, ##extra) \
    BINARY_OP(name, base_type, op, 3, ##extra) \
    BINARY_OP(name, base_type, op, 4, ##extra)

#ifdef __cplusplus
extern "C"
{
#endif
    ALL_BINARY_OPS(simd_max, float, fmaxf(_x, _y))
    ALL_BINARY_OPS(simd_max, double, fmax(_x, _y))
    ALL_BINARY_OPS(simd_max, int, _x > _y ? _x : _y)
    ALL_BINARY_OPS(simd_max, uint, _x > _y ? _x : _y)
    ALL_BINARY_OPS(simd_max, ushort, _x > _y ? _x : _y)

    ALL_BINARY_OPS(simd_min, float, fminf(_x, _y))
    ALL_BINARY_OPS(simd_min, double, fmin(_x, _y))
    ALL_BINARY_OPS(simd_min, int, _x < _y ? _x : _y)
    ALL_BINARY_OPS(simd_min, uint, _x < _y ? _x : _y)
    ALL_BINARY_OPS(simd_min, ushort, _x < _y ? _x : _y)

    float SIMD_OVERLOADABLE
    simd_clamp(float x, float min, float max)
    {
        return fminf(fmaxf(x, min), max);
    }

    double SIMD_OVERLOADABLE
    simd_clamp(double x, double min, double max)
    {
        return fmin(fmax(x, min), max);
    }

    #define CLAMP(x, min, max) x >= max ? max : x <= min ? min : x

    int SIMD_OVERLOADABLE
    simd_clamp(int x, int min, int max)
    {
        return CLAMP(x, min, max);
    }

    unsigned int SIMD_OVERLOADABLE
    simd_clamp(unsigned int x, unsigned int min, unsigned int max)
    {
        return CLAMP(x, min, max);
    }

    unsigned short SIMD_OVERLOADABLE
    simd_clamp(unsigned short x, unsigned short min, unsigned short max)
    {
        return CLAMP(x, min, max);
    }

    #undef CLAMP

    ALL_UNARY_OPS(simd_clamp, float, simd_clamp(_x, min, max), float min, float max)
    ALL_UNARY_OPS(simd_clamp, double, simd_clamp(_x, min, max), double min, double max)
    ALL_UNARY_OPS(simd_clamp, int, simd_clamp(_x, min, max), int min, int max)
    ALL_UNARY_OPS(simd_clamp, uint, simd_clamp(_x, min, max), unsigned int min, unsigned int max)
    ALL_UNARY_OPS(simd_clamp, ushort, simd_clamp(_x, min, max), unsigned short min, unsigned short max)

    ALL_UNARY_OPS(simd_abs, float, fabs(_x))
    ALL_UNARY_OPS(simd_abs, double, fabs(_x))
    ALL_UNARY_OPS(simd_abs, int, abs(_x))
    ALL_UNARY_OPS(simd_abs, uint, _x)
    ALL_UNARY_OPS(simd_abs, ushort, _x)

    ALL_UNARY_OPS(abs, float, fabs(_x))
    ALL_UNARY_OPS(abs, double, fabs(_x))
    ALL_UNARY_OPS(abs, int, abs(_x))
    ALL_UNARY_OPS(abs, uint, _x)
    ALL_UNARY_OPS(abs, ushort, _x)

    ALL_UNARY_OPS(floor, float, floorf(_x));
    ALL_UNARY_OPS(floor, double, floor(_x));

    ALL_UNARY_OPS(ceil, float, ceilf(_x));
    ALL_UNARY_OPS(ceil, double, ceil(_x));

    ALL_UNARY_OPS(round, float, roundf(_x));
    ALL_UNARY_OPS(round, double, round(_x));

    ALL_UNARY_OPS(trunc, float, truncf(_x));
    ALL_UNARY_OPS(trunc, double, trunc(_x));

    ALL_UNARY_OPS(simd_recip, float, 1.f / _x);
    ALL_UNARY_OPS(simd_recip, double, 1. / _x);

    ALL_UNARY_OPS(simd_sign, float, _x < 0 ? -1 : _x > 0 ? 1 : 0);
    ALL_UNARY_OPS(simd_sign, double, _x < 0 ? -1 : _x > 0 ? 1 : 0);

    ALL_UNARY_OPS(cos, float, cosf(_x))
    ALL_UNARY_OPS(cos, double, cos(_x))

    ALL_UNARY_OPS(acos, float, acosf(_x))
    ALL_UNARY_OPS(acos, double, acos(_x))

    ALL_UNARY_OPS(sin, float, sinf(_x))
    ALL_UNARY_OPS(sin, double, sin(_x))

    ALL_UNARY_OPS(asin, float, asinf(_x))
    ALL_UNARY_OPS(asin, double, asin(_x))

    ALL_UNARY_OPS(tan, float, tanf(_x))
    ALL_UNARY_OPS(tan, double, tan(_x))

    ALL_UNARY_OPS(atan, float, atanf(_x))
    ALL_UNARY_OPS(atan, double, atan(_x))

    ALL_BINARY_OPS(atan2, float, atan2f(_x, _y))
    ALL_BINARY_OPS(atan2, double, atan2(_x, _y))

    ALL_UNARY_OPS(sqrt, float, sqrtf(_x))
    ALL_UNARY_OPS(sqrt, double, sqrt(_x))

    float SIMD_OVERLOADABLE
    simd_rsqrt(float x) {
        return 1.f / sqrtf(x);
    }

    double SIMD_OVERLOADABLE
    simd_rsqrt(double x) {
        return 1. / sqrt(x);
    }

    ALL_UNARY_OPS(simd_rsqrt, float, simd_rsqrt(_x))
    ALL_UNARY_OPS(simd_rsqrt, double, simd_rsqrt(_x))

    float SIMD_OVERLOADABLE
    mix(float a, float b, float t)
    {
        return a + t * (b - a);
    }

    simd_float2 SIMD_OVERLOADABLE
    simd_mix(simd_float2 a, simd_float2 b, simd_float2 t)
    {
        return a + t * (b - a);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_mix(simd_float3 a, simd_float3 b, simd_float3 t)
    {
        return a + t * (b - a);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_mix(simd_float4 a, simd_float4 b, simd_float4 t)
    {
        return a + t * (b - a);
    }

    double SIMD_OVERLOADABLE
    simd_mix(double a, double b, double t)
    {
        return a + t * (b - a);
    }

    simd_double2 SIMD_OVERLOADABLE
    simd_mix(simd_double2 a, simd_double2 b, simd_double2 t)
    {
        return a + t * (b - a);
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_mix(simd_double3 a, simd_double3 b, simd_double3 t)
    {
        return a + t * (b - a);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_mix(simd_double4 a, simd_double4 b, simd_double4 t)
    {
        return a + t * (b - a);
    }
#ifdef __cplusplus
}
#endif

#undef UNARY_OP
#undef ALL_UNARY_OPS
#undef BINARY_OP
#undef ALL_BINARY_OPS
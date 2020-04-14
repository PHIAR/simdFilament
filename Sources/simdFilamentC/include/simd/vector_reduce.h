#pragma once

#include "simd/types.h"

#include <math.h>

#ifdef __cplusplus
extern "C"
{
#endif

    float SIMD_OVERLOADABLE
    simd_reduce_sum(simd_float2 v) {
        return v.x + v.y;
    }

    float SIMD_OVERLOADABLE
    simd_reduce_sum(simd_float3 v) {
        return simd_reduce_sum(v.xy) + v.z;
    }

    float SIMD_OVERLOADABLE
    simd_reduce_sum(simd_float4 v) {
        return simd_reduce_sum(v.xy) + simd_reduce_sum(v.zw);
    }

    double SIMD_OVERLOADABLE
    simd_reduce_sum(simd_double2 v) {
        return v.x + v.y;
    }

    double SIMD_OVERLOADABLE
    simd_reduce_sum(simd_double3 v) {
        return simd_reduce_sum(v.xy) + v.z;
    }

    double SIMD_OVERLOADABLE
    simd_reduce_sum(simd_double4 v) {
        return simd_reduce_sum(v.xy) + simd_reduce_sum(v.zw);
    }

    float SIMD_OVERLOADABLE
    simd_reduce_max(simd_float2 v) {
        return fmaxf(v.x, v.y);
    }

    float SIMD_OVERLOADABLE
    simd_reduce_max(simd_float3 v) {
        return fmaxf(simd_reduce_max(v.xy), v.z);
    }

    float SIMD_OVERLOADABLE
    simd_reduce_max(simd_float4 v) {
        return fmaxf(simd_reduce_max(v.xy), simd_reduce_max(v.zw));
    }

    double SIMD_OVERLOADABLE
    simd_reduce_max(simd_double2 v) {
        return fmax(v.x, v.y);
    }

    double SIMD_OVERLOADABLE
    simd_reduce_max(simd_double3 v) {
        return fmax(simd_reduce_max(v.xy), v.z);
    }

    double SIMD_OVERLOADABLE
    simd_reduce_max(simd_double4 v) {
        return fmax(simd_reduce_max(v.xy), simd_reduce_max(v.zw));
    }

#ifdef __cplusplus
}
#endif
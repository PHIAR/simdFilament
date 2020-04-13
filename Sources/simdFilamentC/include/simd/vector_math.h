#pragma once

#include "simd/types.h"

#include <math.h>

#ifdef __cplusplus
extern "C"
{
#endif

    simd_float2 SIMD_OVERLOADABLE
    simd_abs(simd_float2 a)
    {
        #pragma omp simd
        for (int i = 0; i < 4; ++i) {
            a[i] = fabs(a[i]);
        }

        return a;
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_abs(simd_float3 a)
    {
        #pragma omp simd
        for (int i = 0; i < 4; ++i) {
            a[i] = fabs(a[i]);
        }

        return a;
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_abs(simd_float4 a)
    {
        #pragma omp simd
        for (int i = 0; i < 4; ++i) {
            a[i] = fabs(a[i]);
        }

        return a;
    }

#ifdef __cplusplus
}
#endif
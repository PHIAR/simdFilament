#pragma once

#include "simd/types.h"

#ifdef __cplusplus
extern "C"
{
#endif

    simd_float2 SIMD_ATTRIBUTES
    simd_abs2(simd_float2 v);

    simd_float3 SIMD_ATTRIBUTES
    simd_abs3(simd_float3 v);

    simd_float4 SIMD_ATTRIBUTES
    simd_abs4(simd_float4 v);

    simd_float2 SIMD_OVERLOADABLE
    simd_abs(simd_float2 a)
    {
        return simd_abs2(a);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_abs(simd_float3 a)
    {
        return simd_abs3(a);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_abs(simd_float4 a)
    {
        return simd_abs4(a);
    }

#ifdef __cplusplus
}
#endif
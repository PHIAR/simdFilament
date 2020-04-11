#pragma once

#include "simd_types.h"

#ifdef __cplusplus
extern "C"
{
#endif

    float SIMD_ATTRIBUTES
    simd_dot2(simd_float2 a, simd_float2 b);

    float SIMD_ATTRIBUTES
    simd_dot3(simd_float3 a, simd_float3 b);

    float SIMD_ATTRIBUTES
    simd_dot4(simd_float4 a, simd_float4 b);

    float SIMD_OVERLOADABLE
    simd_dot(simd_float2 a, simd_float2 b)
    {
        return simd_dot2(a, b);
    }

    float SIMD_OVERLOADABLE
    simd_dot(simd_float3 a, simd_float3 b)
    {
        return simd_dot3(a, b);
    }

    float SIMD_OVERLOADABLE
    simd_dot(simd_float4 a, simd_float4 b)
    {
        return simd_dot4(a, b);
    }

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

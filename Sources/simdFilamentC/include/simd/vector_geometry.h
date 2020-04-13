#pragma once

#include "simd/types.h"

#ifdef __cplusplus
extern "C"
{
#endif

    float SIMD_OVERLOADABLE
    simd_dot(simd_float2 a, simd_float2 b)
    {
        simd_float2 elements = a * b;

        return elements.x + elements.y;
    }

    float SIMD_OVERLOADABLE
    simd_dot(simd_float3 a, simd_float3 b)
    {
        simd_float3 elements = a * b;

        return elements.x + elements.y + elements.z;
    }

    float SIMD_OVERLOADABLE
    simd_dot(simd_float4 a, simd_float4 b)
    {
        simd_float4 elements = a * b;

        return (elements.x + elements.y) + (elements.z + elements.w);
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

#pragma once

#include "simd/types.h"

#ifdef __cplusplus
extern "C"
{
#endif

#pragma mark Simple Constructors

    simd_float2 SIMD_OVERLOADABLE
    simd_make_float2(float x, float y)
    {
        simd_float2 result = {x, y};

        return result;
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(float x, float y, float z)
    {
        simd_float3 result = {x, y, z};

        return result;
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, float y, float z, float w)
    {
        simd_float4 result = {x, y, z, w};

        return result;
    }

#pragma mark Partial Constructors

    simd_float2 SIMD_OVERLOADABLE
    simd_make_float2(float x)
    {
        return simd_make_float2(x, 0.f);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(float x)
    {
        return simd_make_float3(x, 0.f, 0.f);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(float x, float y)
    {
        return simd_make_float3(x, y, 0.f);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x)
    {
        return simd_make_float4(x, 0.f, 0.f, 0.f);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, float y)
    {
        return simd_make_float4(x, y, 0.f, 0.f);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, float y, float z)
    {
        return simd_make_float4(x, y, z, 0.f);
    }

#pragma mark Composite Constructors

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(simd_float2 xy)
    {
        return simd_make_float3(xy[0], xy[1]);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(simd_float2 xy, float z)
    {
        return simd_make_float3(xy[0], xy[1], z);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(float x, simd_float2 yz)
    {
        return simd_make_float3(x, yz[0], yz[1]);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(simd_float2 xy)
    {
        return simd_make_float4(xy[0], xy[1]);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(simd_float2 xy, float z)
    {
        return simd_make_float4(xy[0], xy[1], z);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, simd_float2 yz)
    {
        return simd_make_float4(x, yz[0], yz[1]);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(simd_float2 xy, float z, float w)
    {
        return simd_make_float4(xy[0], xy[1], z, w);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, simd_float2 yz, float w)
    {
        return simd_make_float4(x, yz[0], yz[1], w);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, float y, simd_float2 zw)
    {
        return simd_make_float4(x, y, zw[0], zw[1]);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(simd_float2 xy, simd_float2 zw)
    {
        return simd_make_float4(xy[0], xy[1], zw[0], zw[1]);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(simd_float3 xyz, float w)
    {
        return simd_make_float4(xyz[0], xyz[1], xyz[2], w);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float x, simd_float3 yzw)
    {
        return simd_make_float4(x, yzw[0], yzw[1], yzw[2]);
    }

#pragma mark Arrays

    simd_float2 SIMD_OVERLOADABLE
    simd_make_float2(float const *values)
    {
        return simd_make_float2(values[0], values[1]);
    }

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(float const *values)
    {
        return simd_make_float3(values[0], values[1], values[2]);
    }

    simd_float4 SIMD_OVERLOADABLE
    simd_make_float4(float const *values)
    {
        return simd_make_float4(values[0], values[1], values[2], values[3]);
    }

#ifdef __cplusplus
}
#endif
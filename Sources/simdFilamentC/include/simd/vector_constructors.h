#pragma once

#include "simd/types.h"

#pragma mark Float

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

    simd_float2 SIMD_OVERLOADABLE
    simd_make_float2(simd_float3 xyz)
    {
        return simd_make_float2(xyz[0], xyz[1]);
    }

    simd_float2 SIMD_OVERLOADABLE
    simd_make_float2(simd_float4 xyzw)
    {
        return simd_make_float2(xyzw[0], xyzw[1]);
    }

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

    simd_float3 SIMD_OVERLOADABLE
    simd_make_float3(simd_float4 xyzw)
    {
        return xyzw.xyz;
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
    simd_make_float4(simd_float3 xyz)
    {
        return simd_make_float4(xyz, 0);
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

#pragma mark Double

#ifdef __cplusplus
extern "C"
{
#endif

#pragma mark Simple Constructors

    simd_double2 SIMD_OVERLOADABLE
    simd_make_double2(double x, double y)
    {
        simd_double2 result = {x, y};

        return result;
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(double x, double y, double z)
    {
        simd_double3 result = {x, y, z};

        return result;
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, double y, double z, double w)
    {
        simd_double4 result = {x, y, z, w};

        return result;
    }

#pragma mark Partial Constructors

    simd_double2 SIMD_OVERLOADABLE
    simd_make_double2(double x)
    {
        return simd_make_double2(x, 0.f);
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(double x)
    {
        return simd_make_double3(x, 0.f, 0.f);
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(double x, double y)
    {
        return simd_make_double3(x, y, 0.f);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x)
    {
        return simd_make_double4(x, 0.f, 0.f, 0.f);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, double y)
    {
        return simd_make_double4(x, y, 0.f, 0.f);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, double y, double z)
    {
        return simd_make_double4(x, y, z, 0.f);
    }

#pragma mark Composite Constructors

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(simd_double2 xy)
    {
        return simd_make_double3(xy[0], xy[1]);
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(simd_double2 xy, double z)
    {
        return simd_make_double3(xy[0], xy[1], z);
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(double x, simd_double2 yz)
    {
        return simd_make_double3(x, yz[0], yz[1]);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(simd_double2 xy)
    {
        return simd_make_double4(xy[0], xy[1]);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(simd_double2 xy, double z)
    {
        return simd_make_double4(xy[0], xy[1], z);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, simd_double2 yz)
    {
        return simd_make_double4(x, yz[0], yz[1]);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(simd_double2 xy, double z, double w)
    {
        return simd_make_double4(xy[0], xy[1], z, w);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, simd_double2 yz, double w)
    {
        return simd_make_double4(x, yz[0], yz[1], w);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, double y, simd_double2 zw)
    {
        return simd_make_double4(x, y, zw[0], zw[1]);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(simd_double2 xy, simd_double2 zw)
    {
        return simd_make_double4(xy[0], xy[1], zw[0], zw[1]);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(simd_double3 xyz, double w)
    {
        return simd_make_double4(xyz[0], xyz[1], xyz[2], w);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double x, simd_double3 yzw)
    {
        return simd_make_double4(x, yzw[0], yzw[1], yzw[2]);
    }

#pragma mark Arrays

    simd_double2 SIMD_OVERLOADABLE
    simd_make_double2(double const *values)
    {
        return simd_make_double2(values[0], values[1]);
    }

    simd_double3 SIMD_OVERLOADABLE
    simd_make_double3(double const *values)
    {
        return simd_make_double3(values[0], values[1], values[2]);
    }

    simd_double4 SIMD_OVERLOADABLE
    simd_make_double4(double const *values)
    {
        return simd_make_double4(values[0], values[1], values[2], values[3]);
    }

#ifdef __cplusplus
}
#endif

#pragma mark Int

#ifdef __cplusplus
extern "C"
{
#endif

#pragma mark Simple Constructors

    simd_int2 SIMD_OVERLOADABLE
    simd_make_int2(int x, int y)
    {
        simd_int2 result = {x, y};

        return result;
    }

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(int x, int y, int z)
    {
        simd_int3 result = {x, y, z};

        return result;
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, int y, int z, int w)
    {
        simd_int4 result = {x, y, z, w};

        return result;
    }

#pragma mark Partial Constructors

    simd_int2 SIMD_OVERLOADABLE
    simd_make_int2(int x)
    {
        return simd_make_int2(x, 0.f);
    }

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(int x)
    {
        return simd_make_int3(x, 0.f, 0.f);
    }

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(int x, int y)
    {
        return simd_make_int3(x, y, 0.f);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x)
    {
        return simd_make_int4(x, 0.f, 0.f, 0.f);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, int y)
    {
        return simd_make_int4(x, y, 0.f, 0.f);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, int y, int z)
    {
        return simd_make_int4(x, y, z, 0.f);
    }

#pragma mark Composite Constructors

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(simd_int2 xy)
    {
        return simd_make_int3(xy[0], xy[1]);
    }

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(simd_int2 xy, int z)
    {
        return simd_make_int3(xy[0], xy[1], z);
    }

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(int x, simd_int2 yz)
    {
        return simd_make_int3(x, yz[0], yz[1]);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(simd_int2 xy)
    {
        return simd_make_int4(xy[0], xy[1]);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(simd_int2 xy, int z)
    {
        return simd_make_int4(xy[0], xy[1], z);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, simd_int2 yz)
    {
        return simd_make_int4(x, yz[0], yz[1]);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(simd_int2 xy, int z, int w)
    {
        return simd_make_int4(xy[0], xy[1], z, w);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, simd_int2 yz, int w)
    {
        return simd_make_int4(x, yz[0], yz[1], w);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, int y, simd_int2 zw)
    {
        return simd_make_int4(x, y, zw[0], zw[1]);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(simd_int2 xy, simd_int2 zw)
    {
        return simd_make_int4(xy[0], xy[1], zw[0], zw[1]);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(simd_int3 xyz, int w)
    {
        return simd_make_int4(xyz[0], xyz[1], xyz[2], w);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int x, simd_int3 yzw)
    {
        return simd_make_int4(x, yzw[0], yzw[1], yzw[2]);
    }

#pragma mark Arrays

    simd_int2 SIMD_OVERLOADABLE
    simd_make_int2(int const *values)
    {
        return simd_make_int2(values[0], values[1]);
    }

    simd_int3 SIMD_OVERLOADABLE
    simd_make_int3(int const *values)
    {
        return simd_make_int3(values[0], values[1], values[2]);
    }

    simd_int4 SIMD_OVERLOADABLE
    simd_make_int4(int const *values)
    {
        return simd_make_int4(values[0], values[1], values[2], values[3]);
    }

#ifdef __cplusplus
}
#endif

#pragma mark Unsigned Int

#ifdef __cplusplus
extern "C"
{
#endif

#pragma mark Simple Constructors

    simd_uint2 SIMD_OVERLOADABLE
    simd_make_uint2(unsigned int x, unsigned int y)
    {
        simd_uint2 result = {x, y};

        return result;
    }

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(unsigned int x, unsigned int y, unsigned int z)
    {
        simd_uint3 result = {x, y, z};

        return result;
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
    {
        simd_uint4 result = {x, y, z, w};

        return result;
    }

#pragma mark Partial Constructors

    simd_uint2 SIMD_OVERLOADABLE
    simd_make_uint2(unsigned int x)
    {
        return simd_make_uint2(x, 0.f);
    }

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(unsigned int x)
    {
        return simd_make_uint3(x, 0.f, 0.f);
    }

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(unsigned int x, unsigned int y)
    {
        return simd_make_uint3(x, y, 0.f);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x)
    {
        return simd_make_uint4(x, 0.f, 0.f, 0.f);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, unsigned int y)
    {
        return simd_make_uint4(x, y, 0.f, 0.f);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, unsigned int y, unsigned int z)
    {
        return simd_make_uint4(x, y, z, 0.f);
    }

#pragma mark Composite Constructors

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(simd_uint2 xy)
    {
        return simd_make_uint3(xy[0], xy[1]);
    }

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(simd_uint2 xy, unsigned int z)
    {
        return simd_make_uint3(xy[0], xy[1], z);
    }

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(unsigned int x, simd_uint2 yz)
    {
        return simd_make_uint3(x, yz[0], yz[1]);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(simd_uint2 xy)
    {
        return simd_make_uint4(xy[0], xy[1]);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(simd_uint2 xy, unsigned int z)
    {
        return simd_make_uint4(xy[0], xy[1], z);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, simd_uint2 yz)
    {
        return simd_make_uint4(x, yz[0], yz[1]);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(simd_uint2 xy, unsigned int z, unsigned int w)
    {
        return simd_make_uint4(xy[0], xy[1], z, w);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, simd_uint2 yz, unsigned int w)
    {
        return simd_make_uint4(x, yz[0], yz[1], w);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, unsigned int y, simd_uint2 zw)
    {
        return simd_make_uint4(x, y, zw[0], zw[1]);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(simd_uint2 xy, simd_uint2 zw)
    {
        return simd_make_uint4(xy[0], xy[1], zw[0], zw[1]);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(simd_uint3 xyz, unsigned int w)
    {
        return simd_make_uint4(xyz[0], xyz[1], xyz[2], w);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int x, simd_uint3 yzw)
    {
        return simd_make_uint4(x, yzw[0], yzw[1], yzw[2]);
    }

#pragma mark Arrays

    simd_uint2 SIMD_OVERLOADABLE
    simd_make_uint2(unsigned int const *values)
    {
        return simd_make_uint2(values[0], values[1]);
    }

    simd_uint3 SIMD_OVERLOADABLE
    simd_make_uint3(unsigned int const *values)
    {
        return simd_make_uint3(values[0], values[1], values[2]);
    }

    simd_uint4 SIMD_OVERLOADABLE
    simd_make_uint4(unsigned int const *values)
    {
        return simd_make_uint4(values[0], values[1], values[2], values[3]);
    }

#ifdef __cplusplus
}
#endif

#pragma mark Unsigned Short

#ifdef __cplusplus
extern "C"
{
#endif

#pragma mark Simple Constructors

    simd_ushort2 SIMD_OVERLOADABLE
    simd_make_ushort2(unsigned short x, unsigned short y)
    {
        simd_ushort2 result = {x, y};

        return result;
    }

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(unsigned short x, unsigned short y, unsigned short z)
    {
        simd_ushort3 result = {x, y, z};

        return result;
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
    {
        simd_ushort4 result = {x, y, z, w};

        return result;
    }

#pragma mark Partial Constructors

    simd_ushort2 SIMD_OVERLOADABLE
    simd_make_ushort2(unsigned short x)
    {
        return simd_make_ushort2(x, 0.f);
    }

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(unsigned short x)
    {
        return simd_make_ushort3(x, 0.f, 0.f);
    }

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(unsigned short x, unsigned short y)
    {
        return simd_make_ushort3(x, y, 0.f);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x)
    {
        return simd_make_ushort4(x, 0.f, 0.f, 0.f);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, unsigned short y)
    {
        return simd_make_ushort4(x, y, 0.f, 0.f);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, unsigned short y, unsigned short z)
    {
        return simd_make_ushort4(x, y, z, 0.f);
    }

#pragma mark Composite Constructors

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(simd_ushort2 xy)
    {
        return simd_make_ushort3(xy[0], xy[1]);
    }

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(simd_ushort2 xy, unsigned short z)
    {
        return simd_make_ushort3(xy[0], xy[1], z);
    }

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(unsigned short x, simd_ushort2 yz)
    {
        return simd_make_ushort3(x, yz[0], yz[1]);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(simd_ushort2 xy)
    {
        return simd_make_ushort4(xy[0], xy[1]);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(simd_ushort2 xy, unsigned short z)
    {
        return simd_make_ushort4(xy[0], xy[1], z);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, simd_ushort2 yz)
    {
        return simd_make_ushort4(x, yz[0], yz[1]);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(simd_ushort2 xy, unsigned short z, unsigned short w)
    {
        return simd_make_ushort4(xy[0], xy[1], z, w);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, simd_ushort2 yz, unsigned short w)
    {
        return simd_make_ushort4(x, yz[0], yz[1], w);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, unsigned short y, simd_ushort2 zw)
    {
        return simd_make_ushort4(x, y, zw[0], zw[1]);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(simd_ushort2 xy, simd_ushort2 zw)
    {
        return simd_make_ushort4(xy[0], xy[1], zw[0], zw[1]);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(simd_ushort3 xyz, unsigned short w)
    {
        return simd_make_ushort4(xyz[0], xyz[1], xyz[2], w);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short x, simd_ushort3 yzw)
    {
        return simd_make_ushort4(x, yzw[0], yzw[1], yzw[2]);
    }

#pragma mark Arrays

    simd_ushort2 SIMD_OVERLOADABLE
    simd_make_ushort2(unsigned short const *values)
    {
        return simd_make_ushort2(values[0], values[1]);
    }

    simd_ushort3 SIMD_OVERLOADABLE
    simd_make_ushort3(unsigned short const *values)
    {
        return simd_make_ushort3(values[0], values[1], values[2]);
    }

    simd_ushort4 SIMD_OVERLOADABLE
    simd_make_ushort4(unsigned short const *values)
    {
        return simd_make_ushort4(values[0], values[1], values[2], values[3]);
    }

#ifdef __cplusplus
}
#endif
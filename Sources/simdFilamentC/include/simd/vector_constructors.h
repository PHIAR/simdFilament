// GENERATED FILE, DO NOT EDIT DIRECTLY.
// Look for a corresponding gyb file in the Templates directory.

#pragma once

#include "simd/types.h"

#pragma mark Float

#ifdef __cplusplus
extern "C"
{
#endif


// Cast constructors

simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_float2 from)
{
    return from;
    return __builtin_convertvector(from, simd_float2);
}
simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_double2 from)
{
    return __builtin_convertvector(from, simd_float2);
}
simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_int2 from)
{
    return __builtin_convertvector(from, simd_float2);
}
simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_uint2 from)
{
    return __builtin_convertvector(from, simd_float2);
}
simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_ushort2 from)
{
    return __builtin_convertvector(from, simd_float2);
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_float2 from)
{
    return __builtin_convertvector(from, simd_double2);
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_double2 from)
{
    return from;
    return __builtin_convertvector(from, simd_double2);
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_int2 from)
{
    return __builtin_convertvector(from, simd_double2);
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_uint2 from)
{
    return __builtin_convertvector(from, simd_double2);
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_ushort2 from)
{
    return __builtin_convertvector(from, simd_double2);
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_float2 from)
{
    return __builtin_convertvector(from, simd_int2);
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_double2 from)
{
    return __builtin_convertvector(from, simd_int2);
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_int2 from)
{
    return from;
    return __builtin_convertvector(from, simd_int2);
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_uint2 from)
{
    return __builtin_convertvector(from, simd_int2);
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_ushort2 from)
{
    return __builtin_convertvector(from, simd_int2);
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_float2 from)
{
    return __builtin_convertvector(from, simd_uint2);
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_double2 from)
{
    return __builtin_convertvector(from, simd_uint2);
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_int2 from)
{
    return __builtin_convertvector(from, simd_uint2);
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_uint2 from)
{
    return from;
    return __builtin_convertvector(from, simd_uint2);
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_ushort2 from)
{
    return __builtin_convertvector(from, simd_uint2);
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_float2 from)
{
    return __builtin_convertvector(from, simd_ushort2);
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_double2 from)
{
    return __builtin_convertvector(from, simd_ushort2);
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_int2 from)
{
    return __builtin_convertvector(from, simd_ushort2);
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_uint2 from)
{
    return __builtin_convertvector(from, simd_ushort2);
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_ushort2 from)
{
    return from;
    return __builtin_convertvector(from, simd_ushort2);
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_float3 from)
{
    return from;
    return __builtin_convertvector(from, simd_float3);
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_double3 from)
{
    return __builtin_convertvector(from, simd_float3);
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_int3 from)
{
    return __builtin_convertvector(from, simd_float3);
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_uint3 from)
{
    return __builtin_convertvector(from, simd_float3);
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_ushort3 from)
{
    return __builtin_convertvector(from, simd_float3);
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_float3 from)
{
    return __builtin_convertvector(from, simd_double3);
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_double3 from)
{
    return from;
    return __builtin_convertvector(from, simd_double3);
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_int3 from)
{
    return __builtin_convertvector(from, simd_double3);
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_uint3 from)
{
    return __builtin_convertvector(from, simd_double3);
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_ushort3 from)
{
    return __builtin_convertvector(from, simd_double3);
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_float3 from)
{
    return __builtin_convertvector(from, simd_int3);
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_double3 from)
{
    return __builtin_convertvector(from, simd_int3);
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_int3 from)
{
    return from;
    return __builtin_convertvector(from, simd_int3);
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_uint3 from)
{
    return __builtin_convertvector(from, simd_int3);
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_ushort3 from)
{
    return __builtin_convertvector(from, simd_int3);
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_float3 from)
{
    return __builtin_convertvector(from, simd_uint3);
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_double3 from)
{
    return __builtin_convertvector(from, simd_uint3);
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_int3 from)
{
    return __builtin_convertvector(from, simd_uint3);
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_uint3 from)
{
    return from;
    return __builtin_convertvector(from, simd_uint3);
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_ushort3 from)
{
    return __builtin_convertvector(from, simd_uint3);
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_float3 from)
{
    return __builtin_convertvector(from, simd_ushort3);
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_double3 from)
{
    return __builtin_convertvector(from, simd_ushort3);
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_int3 from)
{
    return __builtin_convertvector(from, simd_ushort3);
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_uint3 from)
{
    return __builtin_convertvector(from, simd_ushort3);
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_ushort3 from)
{
    return from;
    return __builtin_convertvector(from, simd_ushort3);
}
simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float4 from)
{
    return from;
    return __builtin_convertvector(from, simd_float4);
}
simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_double4 from)
{
    return __builtin_convertvector(from, simd_float4);
}
simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_int4 from)
{
    return __builtin_convertvector(from, simd_float4);
}
simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_uint4 from)
{
    return __builtin_convertvector(from, simd_float4);
}
simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_ushort4 from)
{
    return __builtin_convertvector(from, simd_float4);
}
simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_float4 from)
{
    return __builtin_convertvector(from, simd_double4);
}
simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double4 from)
{
    return from;
    return __builtin_convertvector(from, simd_double4);
}
simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_int4 from)
{
    return __builtin_convertvector(from, simd_double4);
}
simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_uint4 from)
{
    return __builtin_convertvector(from, simd_double4);
}
simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_ushort4 from)
{
    return __builtin_convertvector(from, simd_double4);
}
simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_float4 from)
{
    return __builtin_convertvector(from, simd_int4);
}
simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_double4 from)
{
    return __builtin_convertvector(from, simd_int4);
}
simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int4 from)
{
    return from;
    return __builtin_convertvector(from, simd_int4);
}
simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_uint4 from)
{
    return __builtin_convertvector(from, simd_int4);
}
simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_ushort4 from)
{
    return __builtin_convertvector(from, simd_int4);
}
simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_float4 from)
{
    return __builtin_convertvector(from, simd_uint4);
}
simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_double4 from)
{
    return __builtin_convertvector(from, simd_uint4);
}
simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_int4 from)
{
    return __builtin_convertvector(from, simd_uint4);
}
simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint4 from)
{
    return from;
    return __builtin_convertvector(from, simd_uint4);
}
simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_ushort4 from)
{
    return __builtin_convertvector(from, simd_uint4);
}
simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_float4 from)
{
    return __builtin_convertvector(from, simd_ushort4);
}
simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_double4 from)
{
    return __builtin_convertvector(from, simd_ushort4);
}
simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_int4 from)
{
    return __builtin_convertvector(from, simd_ushort4);
}
simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_uint4 from)
{
    return __builtin_convertvector(from, simd_ushort4);
}
simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort4 from)
{
    return from;
    return __builtin_convertvector(from, simd_ushort4);
}

// Truncating constructors

simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_float3 from)
{
    simd_float2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_float2 SIMD_OVERLOADABLE
simd_make_float2(simd_float4 from)
{
    simd_float2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_float4 from)
{
    simd_float3 result;
    result.x = from.x;
    result.y = from.y;
    result.z = from.z;
    return result;
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_double3 from)
{
    simd_double2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(simd_double4 from)
{
    simd_double2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_double4 from)
{
    simd_double3 result;
    result.x = from.x;
    result.y = from.y;
    result.z = from.z;
    return result;
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_int3 from)
{
    simd_int2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(simd_int4 from)
{
    simd_int2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_int4 from)
{
    simd_int3 result;
    result.x = from.x;
    result.y = from.y;
    result.z = from.z;
    return result;
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_uint3 from)
{
    simd_uint2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(simd_uint4 from)
{
    simd_uint2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_uint4 from)
{
    simd_uint3 result;
    result.x = from.x;
    result.y = from.y;
    result.z = from.z;
    return result;
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_ushort3 from)
{
    simd_ushort2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(simd_ushort4 from)
{
    simd_ushort2 result;
    result.x = from.x;
    result.y = from.y;
    return result;
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_ushort4 from)
{
    simd_ushort3 result;
    result.x = from.x;
    result.y = from.y;
    result.z = from.z;
    return result;
}

// From arrays

simd_float2 SIMD_OVERLOADABLE
simd_make_float2(float const *array)
{
    simd_float2 result;

    result.x = array[0];
    result.y = array[1];
    return result;
}
simd_float3 SIMD_OVERLOADABLE
simd_make_float3(float const *array)
{
    simd_float3 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    return result;
}
simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float const *array)
{
    simd_float4 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    result.w = array[3];
    return result;
}
simd_double2 SIMD_OVERLOADABLE
simd_make_double2(double const *array)
{
    simd_double2 result;

    result.x = array[0];
    result.y = array[1];
    return result;
}
simd_double3 SIMD_OVERLOADABLE
simd_make_double3(double const *array)
{
    simd_double3 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    return result;
}
simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double const *array)
{
    simd_double4 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    result.w = array[3];
    return result;
}
simd_int2 SIMD_OVERLOADABLE
simd_make_int2(int const *array)
{
    simd_int2 result;

    result.x = array[0];
    result.y = array[1];
    return result;
}
simd_int3 SIMD_OVERLOADABLE
simd_make_int3(int const *array)
{
    simd_int3 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    return result;
}
simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int const *array)
{
    simd_int4 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    result.w = array[3];
    return result;
}
simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(unsigned int const *array)
{
    simd_uint2 result;

    result.x = array[0];
    result.y = array[1];
    return result;
}
simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(unsigned int const *array)
{
    simd_uint3 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    return result;
}
simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int const *array)
{
    simd_uint4 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    result.w = array[3];
    return result;
}
simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(unsigned short const *array)
{
    simd_ushort2 result;

    result.x = array[0];
    result.y = array[1];
    return result;
}
simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(unsigned short const *array)
{
    simd_ushort3 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    return result;
}
simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short const *array)
{
    simd_ushort4 result;

    result.x = array[0];
    result.y = array[1];
    result.z = array[2];
    result.w = array[3];
    return result;
}

// Multiple parameters constructors

simd_float2 SIMD_OVERLOADABLE
simd_make_float2(float x)
{
    simd_float2 result = { x };

    return result;
}

simd_float2 SIMD_OVERLOADABLE
simd_make_float2(float x, float y)
{
    simd_float2 result = { x, y };

    return result;
}

simd_float3 SIMD_OVERLOADABLE
simd_make_float3(float x)
{
    simd_float3 result = { x };

    return result;
}

simd_float3 SIMD_OVERLOADABLE
simd_make_float3(float x, float y)
{
    simd_float3 result = { x, y };

    return result;
}

simd_float3 SIMD_OVERLOADABLE
simd_make_float3(float x, float y, float z)
{
    simd_float3 result = { x, y, z };

    return result;
}

simd_float3 SIMD_OVERLOADABLE
simd_make_float3(float x, simd_float2 yz)
{
    simd_float3 result = { x, yz.x, yz.y };

    return result;
}

simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_float2 xy)
{
    simd_float3 result = { xy.x, xy.y };

    return result;
}

simd_float3 SIMD_OVERLOADABLE
simd_make_float3(simd_float2 xy, float z)
{
    simd_float3 result = { xy.x, xy.y, z };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x)
{
    simd_float4 result = { x };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, float y)
{
    simd_float4 result = { x, y };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, float y, float z)
{
    simd_float4 result = { x, y, z };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, float y, float z, float w)
{
    simd_float4 result = { x, y, z, w };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, float y, simd_float2 zw)
{
    simd_float4 result = { x, y, zw.x, zw.y };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, simd_float2 yz)
{
    simd_float4 result = { x, yz.x, yz.y };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, simd_float2 yz, float w)
{
    simd_float4 result = { x, yz.x, yz.y, w };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(float x, simd_float3 yzw)
{
    simd_float4 result = { x, yzw.x, yzw.y, yzw.z };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float2 xy)
{
    simd_float4 result = { xy.x, xy.y };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float2 xy, float z)
{
    simd_float4 result = { xy.x, xy.y, z };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float2 xy, float z, float w)
{
    simd_float4 result = { xy.x, xy.y, z, w };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float2 xy, simd_float2 zw)
{
    simd_float4 result = { xy.x, xy.y, zw.x, zw.y };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float3 xyz)
{
    simd_float4 result = { xyz.x, xyz.y, xyz.z };

    return result;
}

simd_float4 SIMD_OVERLOADABLE
simd_make_float4(simd_float3 xyz, float w)
{
    simd_float4 result = { xyz.x, xyz.y, xyz.z, w };

    return result;
}

simd_double2 SIMD_OVERLOADABLE
simd_make_double2(double x)
{
    simd_double2 result = { x };

    return result;
}

simd_double2 SIMD_OVERLOADABLE
simd_make_double2(double x, double y)
{
    simd_double2 result = { x, y };

    return result;
}

simd_double3 SIMD_OVERLOADABLE
simd_make_double3(double x)
{
    simd_double3 result = { x };

    return result;
}

simd_double3 SIMD_OVERLOADABLE
simd_make_double3(double x, double y)
{
    simd_double3 result = { x, y };

    return result;
}

simd_double3 SIMD_OVERLOADABLE
simd_make_double3(double x, double y, double z)
{
    simd_double3 result = { x, y, z };

    return result;
}

simd_double3 SIMD_OVERLOADABLE
simd_make_double3(double x, simd_double2 yz)
{
    simd_double3 result = { x, yz.x, yz.y };

    return result;
}

simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_double2 xy)
{
    simd_double3 result = { xy.x, xy.y };

    return result;
}

simd_double3 SIMD_OVERLOADABLE
simd_make_double3(simd_double2 xy, double z)
{
    simd_double3 result = { xy.x, xy.y, z };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x)
{
    simd_double4 result = { x };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, double y)
{
    simd_double4 result = { x, y };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, double y, double z)
{
    simd_double4 result = { x, y, z };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, double y, double z, double w)
{
    simd_double4 result = { x, y, z, w };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, double y, simd_double2 zw)
{
    simd_double4 result = { x, y, zw.x, zw.y };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, simd_double2 yz)
{
    simd_double4 result = { x, yz.x, yz.y };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, simd_double2 yz, double w)
{
    simd_double4 result = { x, yz.x, yz.y, w };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(double x, simd_double3 yzw)
{
    simd_double4 result = { x, yzw.x, yzw.y, yzw.z };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double2 xy)
{
    simd_double4 result = { xy.x, xy.y };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double2 xy, double z)
{
    simd_double4 result = { xy.x, xy.y, z };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double2 xy, double z, double w)
{
    simd_double4 result = { xy.x, xy.y, z, w };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double2 xy, simd_double2 zw)
{
    simd_double4 result = { xy.x, xy.y, zw.x, zw.y };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double3 xyz)
{
    simd_double4 result = { xyz.x, xyz.y, xyz.z };

    return result;
}

simd_double4 SIMD_OVERLOADABLE
simd_make_double4(simd_double3 xyz, double w)
{
    simd_double4 result = { xyz.x, xyz.y, xyz.z, w };

    return result;
}

simd_int2 SIMD_OVERLOADABLE
simd_make_int2(int x)
{
    simd_int2 result = { x };

    return result;
}

simd_int2 SIMD_OVERLOADABLE
simd_make_int2(int x, int y)
{
    simd_int2 result = { x, y };

    return result;
}

simd_int3 SIMD_OVERLOADABLE
simd_make_int3(int x)
{
    simd_int3 result = { x };

    return result;
}

simd_int3 SIMD_OVERLOADABLE
simd_make_int3(int x, int y)
{
    simd_int3 result = { x, y };

    return result;
}

simd_int3 SIMD_OVERLOADABLE
simd_make_int3(int x, int y, int z)
{
    simd_int3 result = { x, y, z };

    return result;
}

simd_int3 SIMD_OVERLOADABLE
simd_make_int3(int x, simd_int2 yz)
{
    simd_int3 result = { x, yz.x, yz.y };

    return result;
}

simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_int2 xy)
{
    simd_int3 result = { xy.x, xy.y };

    return result;
}

simd_int3 SIMD_OVERLOADABLE
simd_make_int3(simd_int2 xy, int z)
{
    simd_int3 result = { xy.x, xy.y, z };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x)
{
    simd_int4 result = { x };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, int y)
{
    simd_int4 result = { x, y };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, int y, int z)
{
    simd_int4 result = { x, y, z };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, int y, int z, int w)
{
    simd_int4 result = { x, y, z, w };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, int y, simd_int2 zw)
{
    simd_int4 result = { x, y, zw.x, zw.y };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, simd_int2 yz)
{
    simd_int4 result = { x, yz.x, yz.y };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, simd_int2 yz, int w)
{
    simd_int4 result = { x, yz.x, yz.y, w };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(int x, simd_int3 yzw)
{
    simd_int4 result = { x, yzw.x, yzw.y, yzw.z };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int2 xy)
{
    simd_int4 result = { xy.x, xy.y };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int2 xy, int z)
{
    simd_int4 result = { xy.x, xy.y, z };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int2 xy, int z, int w)
{
    simd_int4 result = { xy.x, xy.y, z, w };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int2 xy, simd_int2 zw)
{
    simd_int4 result = { xy.x, xy.y, zw.x, zw.y };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int3 xyz)
{
    simd_int4 result = { xyz.x, xyz.y, xyz.z };

    return result;
}

simd_int4 SIMD_OVERLOADABLE
simd_make_int4(simd_int3 xyz, int w)
{
    simd_int4 result = { xyz.x, xyz.y, xyz.z, w };

    return result;
}

simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(unsigned int x)
{
    simd_uint2 result = { x };

    return result;
}

simd_uint2 SIMD_OVERLOADABLE
simd_make_uint2(unsigned int x, unsigned int y)
{
    simd_uint2 result = { x, y };

    return result;
}

simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(unsigned int x)
{
    simd_uint3 result = { x };

    return result;
}

simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(unsigned int x, unsigned int y)
{
    simd_uint3 result = { x, y };

    return result;
}

simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(unsigned int x, unsigned int y, unsigned int z)
{
    simd_uint3 result = { x, y, z };

    return result;
}

simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(unsigned int x, simd_uint2 yz)
{
    simd_uint3 result = { x, yz.x, yz.y };

    return result;
}

simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_uint2 xy)
{
    simd_uint3 result = { xy.x, xy.y };

    return result;
}

simd_uint3 SIMD_OVERLOADABLE
simd_make_uint3(simd_uint2 xy, unsigned int z)
{
    simd_uint3 result = { xy.x, xy.y, z };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x)
{
    simd_uint4 result = { x };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, unsigned int y)
{
    simd_uint4 result = { x, y };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, unsigned int y, unsigned int z)
{
    simd_uint4 result = { x, y, z };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, unsigned int y, unsigned int z, unsigned int w)
{
    simd_uint4 result = { x, y, z, w };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, unsigned int y, simd_uint2 zw)
{
    simd_uint4 result = { x, y, zw.x, zw.y };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, simd_uint2 yz)
{
    simd_uint4 result = { x, yz.x, yz.y };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, simd_uint2 yz, unsigned int w)
{
    simd_uint4 result = { x, yz.x, yz.y, w };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(unsigned int x, simd_uint3 yzw)
{
    simd_uint4 result = { x, yzw.x, yzw.y, yzw.z };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint2 xy)
{
    simd_uint4 result = { xy.x, xy.y };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint2 xy, unsigned int z)
{
    simd_uint4 result = { xy.x, xy.y, z };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint2 xy, unsigned int z, unsigned int w)
{
    simd_uint4 result = { xy.x, xy.y, z, w };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint2 xy, simd_uint2 zw)
{
    simd_uint4 result = { xy.x, xy.y, zw.x, zw.y };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint3 xyz)
{
    simd_uint4 result = { xyz.x, xyz.y, xyz.z };

    return result;
}

simd_uint4 SIMD_OVERLOADABLE
simd_make_uint4(simd_uint3 xyz, unsigned int w)
{
    simd_uint4 result = { xyz.x, xyz.y, xyz.z, w };

    return result;
}

simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(unsigned short x)
{
    simd_ushort2 result = { x };

    return result;
}

simd_ushort2 SIMD_OVERLOADABLE
simd_make_ushort2(unsigned short x, unsigned short y)
{
    simd_ushort2 result = { x, y };

    return result;
}

simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(unsigned short x)
{
    simd_ushort3 result = { x };

    return result;
}

simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(unsigned short x, unsigned short y)
{
    simd_ushort3 result = { x, y };

    return result;
}

simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(unsigned short x, unsigned short y, unsigned short z)
{
    simd_ushort3 result = { x, y, z };

    return result;
}

simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(unsigned short x, simd_ushort2 yz)
{
    simd_ushort3 result = { x, yz.x, yz.y };

    return result;
}

simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_ushort2 xy)
{
    simd_ushort3 result = { xy.x, xy.y };

    return result;
}

simd_ushort3 SIMD_OVERLOADABLE
simd_make_ushort3(simd_ushort2 xy, unsigned short z)
{
    simd_ushort3 result = { xy.x, xy.y, z };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x)
{
    simd_ushort4 result = { x };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, unsigned short y)
{
    simd_ushort4 result = { x, y };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, unsigned short y, unsigned short z)
{
    simd_ushort4 result = { x, y, z };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
{
    simd_ushort4 result = { x, y, z, w };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, unsigned short y, simd_ushort2 zw)
{
    simd_ushort4 result = { x, y, zw.x, zw.y };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, simd_ushort2 yz)
{
    simd_ushort4 result = { x, yz.x, yz.y };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, simd_ushort2 yz, unsigned short w)
{
    simd_ushort4 result = { x, yz.x, yz.y, w };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(unsigned short x, simd_ushort3 yzw)
{
    simd_ushort4 result = { x, yzw.x, yzw.y, yzw.z };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort2 xy)
{
    simd_ushort4 result = { xy.x, xy.y };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort2 xy, unsigned short z)
{
    simd_ushort4 result = { xy.x, xy.y, z };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort2 xy, unsigned short z, unsigned short w)
{
    simd_ushort4 result = { xy.x, xy.y, z, w };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort2 xy, simd_ushort2 zw)
{
    simd_ushort4 result = { xy.x, xy.y, zw.x, zw.y };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort3 xyz)
{
    simd_ushort4 result = { xyz.x, xyz.y, xyz.z };

    return result;
}

simd_ushort4 SIMD_OVERLOADABLE
simd_make_ushort4(simd_ushort3 xyz, unsigned short w)
{
    simd_ushort4 result = { xyz.x, xyz.y, xyz.z, w };

    return result;
}


#ifdef __cplusplus
}
#endif

#pragma once

#include "simd/types.h"

#ifdef __cplusplus
extern "C"
{
#endif

    __attribute__((swift_name("simd_float2x2.init(_:_:)")))
    simd_float2x2 SIMD_OVERLOADABLE
    simd_make_float2x2(simd_float2 col0,
                       simd_float2 col1)
    {
        simd_float2x2 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_float2x3.init(_:_:)")))
    simd_float2x3 SIMD_OVERLOADABLE
    simd_make_float2x3(simd_float3 col0,
                       simd_float3 col1)
    {
        simd_float2x3 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_float2x4.init(_:_:)")))
    simd_float2x4 SIMD_OVERLOADABLE
    simd_make_float4x4(simd_float4 col0,
                       simd_float4 col1)
    {
        simd_float2x4 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_float3x2.init(_:_:_:)")))
    simd_float3x2 SIMD_OVERLOADABLE
    simd_make_float3x2(simd_float2 col0,
                       simd_float2 col1,
                       simd_float2 col2)
    {
        simd_float3x2 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_float3x3.init(_:_:_:)")))
    simd_float3x3 SIMD_OVERLOADABLE
    simd_make_float3x3(simd_float3 col0,
                       simd_float3 col1,
                       simd_float3 col2)
    {
        simd_float3x3 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_float3x4.init(_:_:_:)")))
    simd_float3x4 SIMD_OVERLOADABLE
    simd_make_float3x4(simd_float4 col0,
                       simd_float4 col1,
                       simd_float4 col2)
    {
        simd_float3x4 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_float4x2.init(_:_:_:_:)")))
    simd_float4x2 SIMD_OVERLOADABLE
    simd_make_float4x2(simd_float2 col0,
                       simd_float2 col1,
                       simd_float2 col2,
                       simd_float2 col3)
    {
        simd_float4x2 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_float4x3.init(_:_:_:_:)")))
    simd_float4x3 SIMD_OVERLOADABLE
    simd_make_float4x3(simd_float3 col0,
                       simd_float3 col1,
                       simd_float3 col2,
                       simd_float3 col3)
    {
        simd_float4x3 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_float4x4.init(_:_:_:_:)")))
    simd_float4x4 SIMD_OVERLOADABLE
    simd_make_float4x4(simd_float4 col0,
                       simd_float4 col1,
                       simd_float4 col2,
                       simd_float4 col3)
    {
        simd_float4x4 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_double2x2.init(_:_:)")))
    simd_double2x2 SIMD_OVERLOADABLE
    simd_make_double2x2(simd_double2 col0,
                        simd_double2 col1)
    {
        simd_double2x2 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_double2x3.init(_:_:)")))
    simd_double2x3 SIMD_OVERLOADABLE
    simd_make_double2x3(simd_double3 col0,
                        simd_double3 col1)
    {
        simd_double2x3 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_double2x4.init(_:_:)")))
    simd_double2x4 SIMD_OVERLOADABLE
    simd_make_double4x4(simd_double4 col0,
                        simd_double4 col1)
    {
        simd_double2x4 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_double3x2.init(_:_:_:)")))
    simd_double3x2 SIMD_OVERLOADABLE
    simd_make_double3x2(simd_double2 col0,
                        simd_double2 col1,
                        simd_double2 col2)
    {
        simd_double3x2 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_double3x3.init(_:_:_:)")))
    simd_double3x3 SIMD_OVERLOADABLE
    simd_make_double3x3(simd_double3 col0,
                        simd_double3 col1,
                        simd_double3 col2)
    {
        simd_double3x3 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_double3x4.init(_:_:_:)")))
    simd_double3x4 SIMD_OVERLOADABLE
    simd_make_double3x4(simd_double4 col0,
                        simd_double4 col1,
                        simd_double4 col2)
    {
        simd_double3x4 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_double4x2.init(_:_:_:_:)")))
    simd_double4x2 SIMD_OVERLOADABLE
    simd_make_double4x2(simd_double2 col0,
                        simd_double2 col1,
                        simd_double2 col2,
                        simd_double2 col3)
    {
        simd_double4x2 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_double4x3.init(_:_:_:_:)")))
    simd_double4x3 SIMD_OVERLOADABLE
    simd_make_double4x3(simd_double3 col0,
                        simd_double3 col1,
                        simd_double3 col2,
                        simd_double3 col3)
    {
        simd_double4x3 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_double4x4.init(_:_:_:_:)")))
    simd_double4x4 SIMD_OVERLOADABLE
    simd_make_double4x4(simd_double4 col0,
                        simd_double4 col1,
                        simd_double4 col2,
                        simd_double4 col3)
    {
        simd_double4x4 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_int2x2.init(_:_:)")))
    simd_int2x2 SIMD_OVERLOADABLE
    simd_make_int2x2(simd_int2 col0,
                     simd_int2 col1)
    {
        simd_int2x2 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_int2x3.init(_:_:)")))
    simd_int2x3 SIMD_OVERLOADABLE
    simd_make_int2x3(simd_int3 col0,
                     simd_int3 col1)
    {
        simd_int2x3 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_int2x4.init(_:_:)")))
    simd_int2x4 SIMD_OVERLOADABLE
    simd_make_int4x4(simd_int4 col0,
                     simd_int4 col1)
    {
        simd_int2x4 result = {col0, col1};

        return result;
    }

    __attribute__((swift_name("simd_int3x2.init(_:_:_:)")))
    simd_int3x2 SIMD_OVERLOADABLE
    simd_make_int3x2(simd_int2 col0,
                     simd_int2 col1,
                     simd_int2 col2)
    {
        simd_int3x2 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_int3x3.init(_:_:_:)")))
    simd_int3x3 SIMD_OVERLOADABLE
    simd_make_int3x3(simd_int3 col0,
                     simd_int3 col1,
                     simd_int3 col2)
    {
        simd_int3x3 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_int3x4.init(_:_:_:)")))
    simd_int3x4 SIMD_OVERLOADABLE
    simd_make_int3x4(simd_int4 col0,
                     simd_int4 col1,
                     simd_int4 col2)
    {
        simd_int3x4 result = {col0, col1, col2};

        return result;
    }

    __attribute__((swift_name("simd_int4x2.init(_:_:_:_:)")))
    simd_int4x2 SIMD_OVERLOADABLE
    simd_make_int4x2(simd_int2 col0,
                     simd_int2 col1,
                     simd_int2 col2,
                     simd_int2 col3)
    {
        simd_int4x2 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_int4x3.init(_:_:_:_:)")))
    simd_int4x3 SIMD_OVERLOADABLE
    simd_make_int4x3(simd_int3 col0,
                     simd_int3 col1,
                     simd_int3 col2,
                     simd_int3 col3)
    {
        simd_int4x3 result = {col0, col1, col2, col3};

        return result;
    }

    __attribute__((swift_name("simd_int4x4.init(_:_:_:_:)")))
    simd_int4x4 SIMD_OVERLOADABLE
    simd_make_int4x4(simd_int4 col0,
                     simd_int4 col1,
                     simd_int4 col2,
                     simd_int4 col3)
    {
        simd_int4x4 result = {col0, col1, col2, col3};

        return result;
    }

#ifdef __cplusplus
}
#endif
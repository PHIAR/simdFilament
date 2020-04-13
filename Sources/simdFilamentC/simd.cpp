#include "simd/simd.h"

#include <math/vec2.h>
#include <math/vec3.h>
#include <math/vec4.h>

using namespace filament::math;

#pragma mark Absolute Value

extern "C"
{
    simd_float2
    simd_abs2(simd_float2 v)
    {
        auto const &_v = *reinterpret_cast<float2 const *>(&v);
        auto const &_abs = abs(_v);

        return reinterpret_cast<simd_float2 const &>(_abs);
    }

    simd_float3
    simd_abs3(simd_float3 v)
    {
        auto const &_v = *reinterpret_cast<float3 const *>(&v);
        auto const &_abs = abs(_v);

        return reinterpret_cast<simd_float3 const &>(_abs);
    }

    simd_float4
    simd_abs4(simd_float4 v)
    {
        auto const &_v = *reinterpret_cast<float4 const *>(&v);
        auto const &_abs = abs(_v);

        return reinterpret_cast<simd_float4 const &>(_abs);
    }
}

#pragma mark Dot Product

extern "C"
{
    float
    simd_dot2(simd_float2 a, simd_float2 b)
    {
        auto const &_a = *reinterpret_cast<float2 const *>(&a);
        auto const &_b = *reinterpret_cast<float2 const *>(&b);

        return dot(_a, _b);
    }

    float
    simd_dot3(simd_float3 a, simd_float3 b)
    {
        auto const &_a = *reinterpret_cast<float3 const *>(&a);
        auto const &_b = *reinterpret_cast<float3 const *>(&b);

        return dot(_a, _b);
    }

    float
    simd_dot4(simd_float4 a, simd_float4 b)
    {
        auto const &_a = *reinterpret_cast<float4 const *>(&a);
        auto const &_b = *reinterpret_cast<float4 const *>(&b);

        return dot(_a, _b);
    }
}

#pragma mark Cross Product

extern "C"
{
    simd_float3
    simd_cross2(simd_float2 a, simd_float2 b)
    {
        auto const &_a = *reinterpret_cast <float2 const *> (&a);
        auto const &_b = *reinterpret_cast <float2 const *> (&b);

        return simd_make_float3(0.f, 0.f, cross(_a, _b));
    }

    simd_float3
    simd_cross3(simd_float3 a, simd_float3 b)
    {
        auto const &_a = *reinterpret_cast <float3 const *> (&a);
        auto const &_b = *reinterpret_cast <float3 const *> (&b);
        auto const &result = cross(_a, _b);

        return simd_make_float3(result.x, result.y, result.z);
    }
}
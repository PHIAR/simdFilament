#include "simd/simd.h"

#include <math/vec2.h>
#include <math/vec3.h>
#include <math/vec4.h>

using namespace filament::math;

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
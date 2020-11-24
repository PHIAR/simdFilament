#include "simd/simd.h"

#include <math/vec2.h>
#include <math/vec3.h>
#include <math/vec4.h>
#include <math/mat2.h>
#include <math/mat3.h>
#include <math/mat4.h>

using namespace filament::math;

#pragma mark Cross Product

extern "C"
{
    simd_float2x2 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_float2x2 m)
    {
        auto const &_m = *reinterpret_cast <mat2f const *> (&m);
        auto const &_inverse = inverse(_m);

        return reinterpret_cast <simd_float2x2 const &> (_inverse);
    }

    simd_float3x3 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_float3x3 m)
    {
        // Filament's mat3 is packed while simd_float3x3 has the same layout has simd_float3x4
        // Transform to 4x4 for processing.
        auto m_as4x4 = *reinterpret_cast <simd_float4x4 const *> (&m);

        m_as4x4.columns[0][3] = 0.f;
        m_as4x4.columns[1][3] = 0.f;
        m_as4x4.columns[2][3] = 0.f;
        m_as4x4.columns[3] = simd_make_float4(0.f, 0.f, 0.f, 1.f);

        auto const &_m = *reinterpret_cast <mat4f const *> (&m_as4x4);
        auto const &_inverse = inverse(_m);

        return reinterpret_cast <simd_float3x3 const &> (_inverse);
    }

    simd_float4x4 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_float4x4 m)
    {
        auto const &_m = *reinterpret_cast <mat4f const *> (&m);
        auto const &_inverse = inverse(_m);

        return reinterpret_cast <simd_float4x4 const &> (_inverse);
    }

    simd_double2x2
    simd_inverse(simd_double2x2 m)
    {
        auto const &_m = *reinterpret_cast <mat2 const *> (&m);
        auto const &_inverse = inverse(_m);

        return reinterpret_cast <simd_double2x2 const &> (_inverse);
    }

    simd_double3x3 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_double3x3 m)
    {
        // Filament's mat3 is packed while simd_double3x3 has the same layout has simd_double3x4
        // Transform to 4x4 for processing.
        auto m_as4x4 = *reinterpret_cast <simd_double4x4 const *> (&m);

        m_as4x4.columns[0][3] = 0.;
        m_as4x4.columns[1][3] = 0.;
        m_as4x4.columns[2][3] = 0.;
        m_as4x4.columns[3] = simd_make_double4(0., 0., 0., 1.);

        auto const &_m = *reinterpret_cast <mat3 const *> (&m_as4x4);
        auto const &_inverse = inverse(_m);

        return reinterpret_cast <simd_double3x3 const &> (_inverse);
    }

    simd_double4x4 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_double4x4 m)
    {
        auto const &_m = *reinterpret_cast <mat4 const *> (&m);
        auto const &_inverse = inverse(_m);

        return reinterpret_cast <simd_double4x4 const &> (_inverse);
    }
}

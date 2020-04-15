#include "simd/simd.h"

const simd_float2x2 matrix_identity_float2x2 = simd_make_float2x2(simd_make_float2(1.f, 0.f),
                                                                  simd_make_float2(0.f, 1.f));
const simd_float3x3 matrix_identity_float3x3 = simd_make_float3x3(simd_make_float3(1.f, 0.f, 0.f),
                                                                  simd_make_float3(0.f, 1.f, 0.f),
                                                                  simd_make_float3(0.f, 0.f, 1.f));
const simd_float4x4 matrix_identity_float4x4 = simd_make_float4x4(simd_make_float4(1.f, 0.f, 0.f, 0.f),
                                                                  simd_make_float4(0.f, 1.f, 0.f, 0.f),
                                                                  simd_make_float4(0.f, 0.f, 1.f, 0.f),
                                                                  simd_make_float4(0.f, 0.f, 0.f, 1.f));

const simd_double2x2 matrix_identity_double2x2 = simd_make_double2x2(simd_make_double2(1.f, 0.f),
                                                                     simd_make_double2(0.f, 1.f));
const simd_double3x3 matrix_identity_double3x3 = simd_make_double3x3(simd_make_double3(1.f, 0.f, 0.f),
                                                                     simd_make_double3(0.f, 1.f, 0.f),
                                                                     simd_make_double3(0.f, 0.f, 1.f));
const simd_double4x4 matrix_identity_double4x4 = simd_make_double4x4(simd_make_double4(1.f, 0.f, 0.f, 0.f),
                                                                     simd_make_double4(0.f, 1.f, 0.f, 0.f),
                                                                     simd_make_double4(0.f, 0.f, 1.f, 0.f),
                                                                     simd_make_double4(0.f, 0.f, 0.f, 1.f));
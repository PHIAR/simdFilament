#pragma once

#define SIMD_ATTRIBUTES __attribute__((always_inline))
#define SIMD_OVERLOADABLE static inline SIMD_ATTRIBUTES __attribute__((overloadable))

typedef __attribute__((ext_vector_type(2))) float simd_float2;
typedef __attribute__((ext_vector_type(3))) float simd_float3;
typedef __attribute__((ext_vector_type(4))) float simd_float4;

typedef struct { simd_float2 columns[2]; } simd_float2x2;
typedef struct { simd_float2 columns[3]; } simd_float3x2;
typedef struct { simd_float2 columns[4]; } simd_float4x2;

typedef struct { simd_float3 columns[2]; } simd_float2x3;
typedef struct { simd_float3 columns[3]; } simd_float3x3;
typedef struct { simd_float3 columns[4]; } simd_float4x3;

typedef struct { simd_float4 columns[2]; } simd_float2x4;
typedef struct { simd_float4 columns[3]; } simd_float3x4;
typedef struct { simd_float4 columns[4]; } simd_float4x4;

typedef struct { simd_float4 vector; } simd_quatf;
#pragma once

#define SIMD_ATTRIBUTES __attribute__((always_inline, const))
#define SIMD_OVERLOADABLE static inline SIMD_ATTRIBUTES __attribute__((overloadable))

#pragma mark Float

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

#pragma mark Double

typedef __attribute__((ext_vector_type(2))) double simd_double2;
typedef __attribute__((ext_vector_type(3))) double simd_double3;
typedef __attribute__((ext_vector_type(4))) double simd_double4;

typedef struct { simd_double2 columns[2]; } simd_double2x2;
typedef struct { simd_double2 columns[3]; } simd_double3x2;
typedef struct { simd_double2 columns[4]; } simd_double4x2;

typedef struct { simd_double3 columns[2]; } simd_double2x3;
typedef struct { simd_double3 columns[3]; } simd_double3x3;
typedef struct { simd_double3 columns[4]; } simd_double4x3;

typedef struct { simd_double4 columns[2]; } simd_double2x4;
typedef struct { simd_double4 columns[3]; } simd_double3x4;
typedef struct { simd_double4 columns[4]; } simd_double4x4;

typedef struct { simd_double4 vector; } simd_quatd;

#pragma mark Int

typedef __attribute__((ext_vector_type(2))) int simd_int2;
typedef __attribute__((ext_vector_type(3))) int simd_int3;
typedef __attribute__((ext_vector_type(4))) int simd_int4;

typedef struct { simd_int2 columns[2]; } simd_int2x2;
typedef struct { simd_int2 columns[3]; } simd_int3x2;
typedef struct { simd_int2 columns[4]; } simd_int4x2;

typedef struct { simd_int3 columns[2]; } simd_int2x3;
typedef struct { simd_int3 columns[3]; } simd_int3x3;
typedef struct { simd_int3 columns[4]; } simd_int4x3;

typedef struct { simd_int4 columns[2]; } simd_int2x4;
typedef struct { simd_int4 columns[3]; } simd_int3x4;
typedef struct { simd_int4 columns[4]; } simd_int4x4;
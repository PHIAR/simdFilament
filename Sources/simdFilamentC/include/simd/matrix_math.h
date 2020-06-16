#pragma once

#include "simd/types.h"
#include "simd/vector_math.h"
#include "simd/vector_geometry.h"

#define MAT_UNARY_OPS(base_type, rows, cols) \
    SWIFT_NAME("getter:simd_" #base_type #cols "x" #rows ".transpose(self:)") \
    simd_ ## base_type ## rows ## x ## cols SIMD_OVERLOADABLE \
    simd_transpose(simd_ ## base_type ## cols ## x ## rows m) \
    { \
        simd_ ## base_type ## rows ## x ## cols out; \
        for (int col = 0; col < cols; ++col) { \
            for (int row = 0; row < rows; ++row) { \
                out.columns[row][col] = m.columns[col][row]; \
            } \
        } \
        return out; \
    }

#define MAT_UNARY_OPS_ALL_COLS(base_type, rows) \
    MAT_UNARY_OPS(base_type, rows, 2) \
    MAT_UNARY_OPS(base_type, rows, 3) \
    MAT_UNARY_OPS(base_type, rows, 4)

#define MAT_UNARY_OPS_ALL_DIMS(base_type) \
    MAT_UNARY_OPS_ALL_COLS(base_type, 2) \
    MAT_UNARY_OPS_ALL_COLS(base_type, 3) \
    MAT_UNARY_OPS_ALL_COLS(base_type, 4)

#define MAT_BINARY_OPS(base_type, rows, cols) \
    simd_ ## base_type ## cols ## x ## rows SIMD_OVERLOADABLE \
    simd_add(simd_ ## base_type ## cols ## x ## rows a, \
             simd_ ## base_type ## cols ## x ## rows b) \
    { \
        simd_ ## base_type ## cols ## x ## rows out; \
        for (int i = 0; i < cols; ++i) { \
            out.columns[i] = a.columns[i] + b.columns[i]; \
        } \
        return out; \
    } \
    simd_ ## base_type ## cols ## x ## rows SIMD_OVERLOADABLE \
    simd_sub(simd_ ## base_type ## cols ## x ## rows a, \
             simd_ ## base_type ## cols ## x ## rows b) \
    { \
        simd_ ## base_type ## cols ## x ## rows out; \
        for (int i = 0; i < cols; ++i) { \
            out.columns[i] = a.columns[i] - b.columns[i]; \
        } \
        return out; \
    } \
    simd_bool SIMD_OVERLOADABLE \
    simd_almost_equal_elements(simd_ ## base_type ## cols ## x ## rows a, \
                               simd_ ## base_type ## cols ## x ## rows b, \
                               base_type tol) \
    { \
        for (int i = 0; i < cols; ++i) { \
            if (simd_norm_inf(a.columns[i] - b.columns[i]) > tol) return 0; \
        } \
        return 1; \
    }

#define MAT_BINARY_OPS_ALL_COLS(base_type, rows) \
    MAT_BINARY_OPS(base_type, rows, 2) \
    MAT_BINARY_OPS(base_type, rows, 3) \
    MAT_BINARY_OPS(base_type, rows, 4)

#define MAT_BINARY_OPS_ALL_DIMS(base_type) \
    MAT_BINARY_OPS_ALL_COLS(base_type, 2) \
    MAT_BINARY_OPS_ALL_COLS(base_type, 3) \
    MAT_BINARY_OPS_ALL_COLS(base_type, 4)

#define MAT_SCALAR_PRODS(base_type, rows ,cols) \
    simd_ ## base_type ## cols ## x ## rows SIMD_OVERLOADABLE \
    simd_mul(base_type s, \
             simd_ ## base_type ## cols ## x ## rows m) \
    { \
        simd_ ## base_type ## cols ## x ## rows out; \
        for (int i = 0; i < cols; ++i) { \
            out.columns[i] = s * m.columns[i]; \
        } \
        return out; \
    } \
    simd_ ## base_type ## cols ## x ## rows SIMD_OVERLOADABLE \
    simd_mul(simd_ ## base_type ## cols ## x ## rows m, \
             base_type s) \
    { \
        simd_ ## base_type ## cols ## x ## rows out; \
        for (int i = 0; i < cols; ++i) { \
            out.columns[i] = s * m.columns[i]; \
        } \
        return out; \
    }

#define MAT_SCALAR_PRODS_ALL_COLS(base_type, rows) \
    MAT_SCALAR_PRODS(base_type, rows, 2) \
    MAT_SCALAR_PRODS(base_type, rows, 3) \
    MAT_SCALAR_PRODS(base_type, rows, 4)

#define MAT_SCALAR_PRODS_ALL_DIMS(base_type) \
    MAT_SCALAR_PRODS_ALL_COLS(base_type, 2) \
    MAT_SCALAR_PRODS_ALL_COLS(base_type, 3) \
    MAT_SCALAR_PRODS_ALL_COLS(base_type, 4)

#define MAT_VEC_PRODS(base_type, rows ,cols) \
    simd_ ## base_type ## cols SIMD_OVERLOADABLE \
    simd_mul(simd_ ## base_type ## rows v, \
             simd_ ## base_type ## cols ## x ## rows m) \
    { \
        simd_ ## base_type ## cols out; \
        for (int i = 0; i < cols; ++i) { \
            out[i] = simd_dot(v, m.columns[i]); \
        } \
        return out; \
    } \
    simd_ ## base_type ## rows SIMD_OVERLOADABLE \
    simd_mul(simd_ ## base_type ## cols ## x ## rows m, \
             simd_ ## base_type ## cols v) \
    { \
        simd_ ## base_type ## rows out = v[0] * m.columns[0]; \
        for (int i = 1; i < cols; ++i) { \
            out += v[i] * m.columns[i]; \
        } \
        return out; \
    }

#define MAT_VEC_PRODS_ALL_COLS(base_type, rows) \
    MAT_VEC_PRODS(base_type, rows, 2) \
    MAT_VEC_PRODS(base_type, rows, 3) \
    MAT_VEC_PRODS(base_type, rows, 4)

#define MAT_VEC_PRODS_ALL_DIMS(base_type) \
    MAT_VEC_PRODS_ALL_COLS(base_type, 2) \
    MAT_VEC_PRODS_ALL_COLS(base_type, 3) \
    MAT_VEC_PRODS_ALL_COLS(base_type, 4)

#define MAT_PROD(base_type, left_dims, mid_dims, right_dims) \
    simd_ ## base_type ## right_dims ## x ## left_dims SIMD_OVERLOADABLE \
    simd_mul(simd_ ## base_type ## mid_dims ## x ## left_dims a, \
             simd_ ## base_type ## right_dims ## x ## mid_dims b) { \
        simd_ ## base_type ## right_dims ## x ## left_dims out; \
        for (int col = 0; col < right_dims; ++col) { \
            out.columns[col] = simd_mul(a, b.columns[col]); \
        } \
        return out; \
    }

#define MAT_PRODS_ALL_MID_DIMS(base_type, left_dims, right_dims) \
    MAT_PROD(base_type, left_dims, 2, right_dims) \
    MAT_PROD(base_type, left_dims, 3, right_dims) \
    MAT_PROD(base_type, left_dims, 4, right_dims)

#define MAT_PRODS_ALL_MID_RIGHT_DIMS(base_type, left_dims) \
    MAT_PRODS_ALL_MID_DIMS(base_type, left_dims, 2) \
    MAT_PRODS_ALL_MID_DIMS(base_type, left_dims, 3) \
    MAT_PRODS_ALL_MID_DIMS(base_type, left_dims, 4)

#define MAT_PRODS_ALL_DIMS(base_type) \
    MAT_PRODS_ALL_MID_RIGHT_DIMS(base_type, 2) \
    MAT_PRODS_ALL_MID_RIGHT_DIMS(base_type, 3) \
    MAT_PRODS_ALL_MID_RIGHT_DIMS(base_type, 4)

#ifdef __cplusplus
extern "C"
{
#endif

    MAT_UNARY_OPS_ALL_DIMS(float)
    MAT_UNARY_OPS_ALL_DIMS(double)
    MAT_UNARY_OPS_ALL_DIMS(int)
    MAT_UNARY_OPS_ALL_DIMS(uint)

    MAT_BINARY_OPS_ALL_DIMS(float)
    MAT_BINARY_OPS_ALL_DIMS(double)

    MAT_SCALAR_PRODS_ALL_DIMS(float)
    MAT_SCALAR_PRODS_ALL_DIMS(double)

    MAT_VEC_PRODS_ALL_DIMS(float)
    MAT_VEC_PRODS_ALL_DIMS(double)

    MAT_PRODS_ALL_DIMS(float)
    MAT_PRODS_ALL_DIMS(double)

    SWIFT_NAME("getter:simd_float2x2.inverse(self:)")
    simd_float2x2 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_float2x2 m);

    SWIFT_NAME("getter:simd_float3x3.inverse(self:)")
    simd_float3x3 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_float3x3 m);

    SWIFT_NAME("getter:simd_float4x4.inverse(self:)")
    simd_float4x4 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_float4x4 m);

    SWIFT_NAME("getter:simd_double2x2.inverse(self:)")
    simd_double2x2 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_double2x2 m);

    SWIFT_NAME("getter:simd_double3x3.inverse(self:)")
    simd_double3x3 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_double3x3 m);

    SWIFT_NAME("getter:simd_double4x4.inverse(self:)")
    simd_double4x4 SIMD_OVERLOADABLE_NOINLINE
    simd_inverse(simd_double4x4 m);

#ifdef __cplusplus
}
#endif

#undef MAT_UNARY_OPS
#undef MAT_UNARY_OPS_ALL_COLS
#undef MAT_UNARY_OPS_ALL_DIMS
#undef MAT_BINARY_OPS
#undef MAT_BINARY_OPS_ALL_COLS
#undef MAT_BINARY_OPS_ALL_DIMS
#undef MAT_VEC_PRODS
#undef MAT_VEC_PRODS_ALL_COLS
#undef MAT_VEC_PRODS_ALL_DIMS
#undef MAT_PROD
#undef MAT_PRODS_ALL_MID_DIMS
#undef MAT_PRODS_ALL_MID_RIGHT_DIMS
#undef MAT_PRODS_ALL_DIMS

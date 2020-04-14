#pragma once

#include "simd/types.h"
#include "simd/vector_math.h"

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

    MAT_VEC_PRODS_ALL_DIMS(float)
    MAT_VEC_PRODS_ALL_DIMS(double)

    MAT_PRODS_ALL_DIMS(float)
    MAT_PRODS_ALL_DIMS(double)

#ifdef __cplusplus
}
#endif

#undef MAT_VEC_PRODS
#undef MAT_VEC_PRODS_ALL_COLS
#undef MAT_VEC_PRODS_ALL_DIMS
#undef MAT_PROD
#undef MAT_PRODS_ALL_MID_DIMS
#undef MAT_PRODS_ALL_MID_RIGHT_DIMS
#undef MAT_PRODS_ALL_DIMS
//
// Created by Jim Zin on 9/28/20.
//

#pragma once

#include <jni.h>
#include <simd/simd.h>
#include <cstdlib>

template<typename SIMDType>
static inline SIMDType
simd_from_array(JNIEnv *env, jfloatArray array, jsize start = 0) {
    SIMDType out;

    env->GetFloatArrayRegion(array, start, sizeof(SIMDType) / sizeof(float),
                             reinterpret_cast<jfloat *>(&out));
    return out;
}

template<typename SIMDType>
static inline void
simd_to_array(SIMDType simd, JNIEnv *env, jfloatArray array, jsize start = 0) {
    env->SetFloatArrayRegion(array, start, sizeof(SIMDType) / sizeof(float),
                             reinterpret_cast<jfloat *>(&simd));
}

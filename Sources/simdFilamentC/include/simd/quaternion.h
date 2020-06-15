#pragma once

#include "simd/types.h"
#include "simd/vector_constructors.h"
#include "simd/vector_geometry.h"

#ifdef __cplusplus
extern "C"
{
#endif

__attribute__((swift_name("simd_quatf.init(ix:iy:iz:r:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(float ix, float iy, float iz, float r)
{
    return (simd_quatf) { .vector = { ix, iy, iz, r } };
}

__attribute__((swift_name("simd_quatf.init(_:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(const float *xyzr)
{
    return (simd_quatf) { .vector = simd_make_float4(xyzr) };
}

__attribute__((swift_name("simd_quatf.init(_:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float4 xyzr)
{
    return (simd_quatf) { .vector = xyzr };
}

__attribute__((swift_name("simd_quatf.init(angle:axis:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(float angle, simd_float3 axis);

__attribute__((swift_name("simd_quatf.init(_:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float4x4 transform);

__attribute__((swift_name("simd_quatf.init(_:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float3x3 transform);

__attribute__((swift_name("simd_quatf.init(from:to:)")))
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float3 from, simd_float3 to);

__attribute__((swift_name("getter:simd_quatf.normalized(self:)")))
simd_quatf SIMD_OVERLOADABLE
simd_normalize(simd_quatf q)
{
    return simd_quaternion(simd_normalize(q.vector));
}

float SIMD_OVERLOADABLE
simd_length(simd_quatf q)
{
    return simd_length(q.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_add(simd_quatf q, simd_quatf r) {
    return simd_quaternion(q.vector - r.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_sub(simd_quatf q, simd_quatf r) {
    return simd_quaternion(q.vector - r.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_mul(simd_quatf q, float a) {
    return simd_quaternion(a * q.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_mul(float a, simd_quatf q) {
    return simd_mul(q, a);
}

simd_quatf SIMD_OVERLOADABLE
simd_mul(simd_quatf q, simd_quatf r)
{
    simd_float4 _q = q.vector;
    simd_float4 _r = r.vector;

    return simd_quaternion(_q.w * _r.x + _q.x * _r.w + _q.y * _r.z - _q.z * _r.y,
                           _q.w * _r.y - _q.x * _r.z + _q.y * _r.w + _q.z * _r.x,
                           _q.w * _r.z + _q.x * _r.y - _q.y * _r.x + _q.z * _r.w,
                           _q.w * _r.w - _q.x * _r.x - _q.y * _r.y - _q.z * _r.z);
}

__attribute__((swift_name("simd_quatd.init(ix:iy:iz:r:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(double ix, double iy, double iz, double r)
{
    return (simd_quatd) { .vector = { ix, iy, iz, r } };
}

__attribute__((swift_name("simd_quatd.init(_:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(const double *xyzr)
{
    return (simd_quatd) { .vector = simd_make_double4(xyzr) };
}

__attribute__((swift_name("simd_quatd.init(_:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double4 xyzr)
{
    return (simd_quatd) { .vector = xyzr };
}

__attribute__((swift_name("simd_quatd.init(angle:axis:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(double angle, simd_double3 axis);

__attribute__((swift_name("simd_quatd.init(_:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double4x4 transform);

__attribute__((swift_name("simd_quatd.init(_:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double3x3 transform);

__attribute__((swift_name("simd_quatd.init(from:to:)")))
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double3 from, simd_double3 to);

__attribute__((swift_name("getter:simd_quatd.normalized(self:)")))
simd_quatd SIMD_OVERLOADABLE
simd_normalize(simd_quatd q)
{
    return simd_quaternion(simd_normalize(q.vector));
}

double SIMD_OVERLOADABLE
simd_length(simd_quatd q)
{
    return simd_length(q.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_add(simd_quatd q, simd_quatd r) {
    return simd_quaternion(q.vector - r.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_sub(simd_quatd q, simd_quatd r) {
    return simd_quaternion(q.vector - r.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_mul(simd_quatd q, double a) {
    return simd_quaternion(a * q.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_mul(double a, simd_quatd q) {
    return simd_mul(q, a);
}

simd_quatd SIMD_OVERLOADABLE
simd_mul(simd_quatd q, simd_quatd r)
{
    simd_double4 _q = q.vector;
    simd_double4 _r = r.vector;

    return simd_quaternion(_q.w * _r.x + _q.x * _r.w + _q.y * _r.z - _q.z * _r.y,
                           _q.w * _r.y - _q.x * _r.z + _q.y * _r.w + _q.z * _r.x,
                           _q.w * _r.z + _q.x * _r.y - _q.y * _r.x + _q.z * _r.w,
                           _q.w * _r.w - _q.x * _r.x - _q.y * _r.y - _q.z * _r.z);
}


#ifdef __cplusplus
} // extern "C"
#endif

// GENERATED FILE, DO NOT EDIT DIRECTLY.
// Look for a corresponding gyb file in the Templates directory.

#pragma once

#include "simd/types.h"
#include "simd/vector_constructors.h"
#include "simd/vector_geometry.h"

#include <assert.h>

#ifdef __cplusplus
extern "C"
{
#endif

SWIFT_NAME("simd_quatf.init(ix:iy:iz:r:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(float ix, float iy, float iz, float r)
{
    return (simd_quatf) { .vector = { ix, iy, iz, r } };
}

SWIFT_NAME("simd_quatf.init(_:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(const float *xyzr)
{
    return (simd_quatf) { .vector = simd_make_float4(xyzr) };
}

SWIFT_NAME("simd_quatf.init(_:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float4 xyzr)
{
    return (simd_quatf) { .vector = xyzr };
}

// https://www.euclideanspace.com/maths/geometry/rotations/conversions/angleToQuaternion/index.htm
SWIFT_NAME("simd_quatf.init(angle:axis:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(float angle, simd_float3 axis)
{
    float half_angle = 0.5f * angle;
    float s = sin(half_angle);
    simd_float3 imag = s * axis;
    float real = cos(half_angle);

    return simd_quaternion(simd_make_float4(imag, real));
}

SWIFT_NAME("simd_quatf.init(_:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float3x3 transform) {
    // https://www.euclideanspace.com/maths/geometry/rotations/conversions/matrixToQuaternion/

    simd_float4 diag = simd_make_float4(
        transform.columns[0][0],
        transform.columns[1][1],
        transform.columns[2][2]
    );

    simd_float4 vector = 0.5f * simd_make_float4(
        sqrt(fmax(0.0f, 1.0f + diag[0] - diag[1] - diag[2])),
        sqrt(fmax(0.0f, 1.0f - diag[0] + diag[1] - diag[2])),
        sqrt(fmax(0.0f, 1.0f - diag[0] - diag[1] + diag[2])),
        sqrt(fmax(0.0f, 1.0f + diag[0] + diag[1] + diag[2]))
    );

    vector.x = copysign(vector.x, transform.columns[1][2] - transform.columns[2][1]);
    vector.y = copysign(vector.y, transform.columns[2][0] - transform.columns[0][2]);
    vector.z = copysign(vector.z, transform.columns[0][1] - transform.columns[1][0]);

    return simd_quaternion(vector);
}

SWIFT_NAME("simd_quatf.init(_:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float4x4 transform)
{
    return simd_quaternion(*(simd_float3x3*) &transform);
}

SWIFT_NAME("simd_quatf.init(from:to:)")
simd_quatf SIMD_OVERLOADABLE
simd_quaternion(simd_float3 from, simd_float3 to)
{
    // https://stackoverflow.com/a/11741520/260433
    // The input vectors must have the same length for accurate computation
    // of the halfway vector. This is not checked in release mode to match
    // the behavior of Apple's SIMD (which never check).
#ifndef NDEBUG
    float length_squared_from = simd_length_squared(from);
    float length_squared_to = simd_length_squared(to);
    float relative_difference = 2.f * fabs(length_squared_from - length_squared_to) / (length_squared_from + length_squared_to);
    assert(relative_difference < 0.01 && "Vectors must have the same length");
#endif

    simd_float3 half = simd_normalize(from + to);
    
    if (simd_length_squared(half) == 0.f) {
        simd_float3 abs_from = simd_abs(from);
        simd_float3 axis;

        if (abs_from.x <= abs_from.y && abs_from.x <= abs_from.z) {
            axis = simd_make_float3(1.f, 0.f, 0.f);
        } else if (abs_from.y <= abs_from.z) {
            axis = simd_make_float3(0.f, 1.f, 0.f);
        } else {
            axis = simd_make_float3(0.f, 0.f, 1.f);
        }

        return simd_quaternion(simd_make_float4(simd_normalize(simd_cross(abs_from, axis)),
                                                  0.f));
    }

    return simd_quaternion(simd_make_float4(simd_cross(from, half),
                                              simd_dot(from, half)));
}

SWIFT_NAME("getter:simd_quatf.real(self:)")
float SIMD_OVERLOADABLE
simd_real(simd_quatf q)
{
    return q.vector.w;
}

SWIFT_NAME("getter:simd_quatf.imag(self:)")
simd_float3 SIMD_OVERLOADABLE
simd_imag(simd_quatf q)
{
    return q.vector.xyz;
}

SWIFT_NAME("getter:simd_quatf.normalized(self:)")
simd_quatf SIMD_OVERLOADABLE
simd_normalize(simd_quatf q)
{
    return simd_quaternion(simd_normalize(q.vector));
}

SWIFT_NAME("getter:simd_quatf.length(self:)")
float SIMD_OVERLOADABLE
simd_length(simd_quatf q)
{
    return simd_length(q.vector);
}

float SIMD_OVERLOADABLE
simd_length_squared(simd_quatf q)
{
    return simd_length_squared(q.vector);
}

SWIFT_NAME("getter:simd_quatf.angle(self:)")
float SIMD_OVERLOADABLE
simd_angle(simd_quatf q)
{
    return 2.f * acos(q.vector.w);
}

SWIFT_NAME("getter:simd_quatf.axis(self:)")
simd_float3 SIMD_OVERLOADABLE
simd_axis(simd_quatf q)
{
    return simd_normalize(q.vector.xyz);
}

simd_quatf SIMD_OVERLOADABLE
simd_add(simd_quatf q, simd_quatf r)
{
    return simd_quaternion(q.vector - r.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_sub(simd_quatf q, simd_quatf r)
{
    return simd_quaternion(q.vector - r.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_mul(simd_quatf q, float a)
{
    return simd_quaternion(a * q.vector);
}

simd_quatf SIMD_OVERLOADABLE
simd_mul(float a, simd_quatf q)
{
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

simd_quatf SIMD_OVERLOADABLE
simd_div(simd_quatf q, float a)
{
    return simd_quaternion(q.vector / a);
}

simd_quatf SIMD_OVERLOADABLE
simd_div(float a, simd_quatf q)
{
    return simd_quaternion(a / q.vector);
}

SWIFT_NAME("getter:simd_quatf.conjugate(self:)")
simd_quatf SIMD_OVERLOADABLE
simd_conjugate(simd_quatf q)
{
    q.vector.xyz *= -1.f;
    return q;
}

SWIFT_NAME("getter:simd_quatf.inverse(self:)")
simd_quatf SIMD_OVERLOADABLE
simd_inverse(simd_quatf q)
{
    return simd_div(simd_conjugate(q), simd_length_squared(q));
}

simd_quatf SIMD_OVERLOADABLE
simd_div(simd_quatf q, simd_quatf r)
{
    return simd_mul(q, simd_inverse(r));
}

simd_float3 SIMD_OVERLOADABLE
simd_act(simd_quatf q, simd_float3 v)
{
    // https://en.wikipedia.org/wiki/Quaternions_and_spatial_rotation#Using_quaternion_as_rotations
    simd_quatf v_quat = simd_quaternion(simd_make_float4(v));

    return simd_imag(simd_mul(simd_mul(q, v_quat),
                              simd_inverse(q)));
}

simd_quatf SIMD_OVERLOADABLE
simd_slerp(simd_quatf q, simd_quatf r, float t)
{
    static const float eps = 0.001;

    // https://www.euclideanspace.com/maths/algebra/realNormedAlgebra/quaternions/slerp/index.htm
    float cosHalfAngle = simd_dot(q.vector, r.vector);

    if (cosHalfAngle < 0.f) {
        cosHalfAngle = -cosHalfAngle;
        r = simd_quaternion(-r.vector);
    }

    if (cosHalfAngle >= 1.0f) {
        return q;
    }

    float halfAngle = acos(cosHalfAngle);
    float sinHalfAngle = sqrt(1.0f - cosHalfAngle * cosHalfAngle);

    if (fabs(sinHalfAngle) < eps) {
        return simd_quaternion(simd_mix(q.vector, r.vector, simd_make_float4(t, t, t, t)));
    }

    float wq = sin((1.f - t) * halfAngle) / sinHalfAngle;
    float wr = sin(t * halfAngle) / sinHalfAngle;

    return simd_quaternion(wq * q.vector + wr * r.vector);
}
SWIFT_NAME("simd_quatd.init(ix:iy:iz:r:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(double ix, double iy, double iz, double r)
{
    return (simd_quatd) { .vector = { ix, iy, iz, r } };
}

SWIFT_NAME("simd_quatd.init(_:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(const double *xyzr)
{
    return (simd_quatd) { .vector = simd_make_double4(xyzr) };
}

SWIFT_NAME("simd_quatd.init(_:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double4 xyzr)
{
    return (simd_quatd) { .vector = xyzr };
}

// https://www.euclideanspace.com/maths/geometry/rotations/conversions/angleToQuaternion/index.htm
SWIFT_NAME("simd_quatd.init(angle:axis:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(double angle, simd_double3 axis)
{
    double half_angle = 0.5f * angle;
    double s = sin(half_angle);
    simd_double3 imag = s * axis;
    double real = cos(half_angle);

    return simd_quaternion(simd_make_double4(imag, real));
}

SWIFT_NAME("simd_quatd.init(_:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double3x3 transform) {
    // https://www.euclideanspace.com/maths/geometry/rotations/conversions/matrixToQuaternion/

    simd_double4 diag = simd_make_double4(
        transform.columns[0][0],
        transform.columns[1][1],
        transform.columns[2][2]
    );

    simd_double4 vector = 0.5f * simd_make_double4(
        sqrt(fmax(0.0f, 1.0f + diag[0] - diag[1] - diag[2])),
        sqrt(fmax(0.0f, 1.0f - diag[0] + diag[1] - diag[2])),
        sqrt(fmax(0.0f, 1.0f - diag[0] - diag[1] + diag[2])),
        sqrt(fmax(0.0f, 1.0f + diag[0] + diag[1] + diag[2]))
    );

    vector.x = copysign(vector.x, transform.columns[1][2] - transform.columns[2][1]);
    vector.y = copysign(vector.y, transform.columns[2][0] - transform.columns[0][2]);
    vector.z = copysign(vector.z, transform.columns[0][1] - transform.columns[1][0]);

    return simd_quaternion(vector);
}

SWIFT_NAME("simd_quatd.init(_:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double4x4 transform)
{
    return simd_quaternion(*(simd_double3x3*) &transform);
}

SWIFT_NAME("simd_quatd.init(from:to:)")
simd_quatd SIMD_OVERLOADABLE
simd_quaternion(simd_double3 from, simd_double3 to)
{
    // https://stackoverflow.com/a/11741520/260433
    // The input vectors must have the same length for accurate computation
    // of the halfway vector. This is not checked in release mode to match
    // the behavior of Apple's SIMD (which never check).
#ifndef NDEBUG
    double length_squared_from = simd_length_squared(from);
    double length_squared_to = simd_length_squared(to);
    double relative_difference = 2.f * fabs(length_squared_from - length_squared_to) / (length_squared_from + length_squared_to);
    assert(relative_difference < 0.01 && "Vectors must have the same length");
#endif

    simd_double3 half = simd_normalize(from + to);
    
    if (simd_length_squared(half) == 0.f) {
        simd_double3 abs_from = simd_abs(from);
        simd_double3 axis;

        if (abs_from.x <= abs_from.y && abs_from.x <= abs_from.z) {
            axis = simd_make_double3(1.f, 0.f, 0.f);
        } else if (abs_from.y <= abs_from.z) {
            axis = simd_make_double3(0.f, 1.f, 0.f);
        } else {
            axis = simd_make_double3(0.f, 0.f, 1.f);
        }

        return simd_quaternion(simd_make_double4(simd_normalize(simd_cross(abs_from, axis)),
                                                  0.f));
    }

    return simd_quaternion(simd_make_double4(simd_cross(from, half),
                                              simd_dot(from, half)));
}

SWIFT_NAME("getter:simd_quatd.real(self:)")
double SIMD_OVERLOADABLE
simd_real(simd_quatd q)
{
    return q.vector.w;
}

SWIFT_NAME("getter:simd_quatd.imag(self:)")
simd_double3 SIMD_OVERLOADABLE
simd_imag(simd_quatd q)
{
    return q.vector.xyz;
}

SWIFT_NAME("getter:simd_quatd.normalized(self:)")
simd_quatd SIMD_OVERLOADABLE
simd_normalize(simd_quatd q)
{
    return simd_quaternion(simd_normalize(q.vector));
}

SWIFT_NAME("getter:simd_quatd.length(self:)")
double SIMD_OVERLOADABLE
simd_length(simd_quatd q)
{
    return simd_length(q.vector);
}

double SIMD_OVERLOADABLE
simd_length_squared(simd_quatd q)
{
    return simd_length_squared(q.vector);
}

SWIFT_NAME("getter:simd_quatd.angle(self:)")
double SIMD_OVERLOADABLE
simd_angle(simd_quatd q)
{
    return 2.f * acos(q.vector.w);
}

SWIFT_NAME("getter:simd_quatd.axis(self:)")
simd_double3 SIMD_OVERLOADABLE
simd_axis(simd_quatd q)
{
    return simd_normalize(q.vector.xyz);
}

simd_quatd SIMD_OVERLOADABLE
simd_add(simd_quatd q, simd_quatd r)
{
    return simd_quaternion(q.vector - r.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_sub(simd_quatd q, simd_quatd r)
{
    return simd_quaternion(q.vector - r.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_mul(simd_quatd q, double a)
{
    return simd_quaternion(a * q.vector);
}

simd_quatd SIMD_OVERLOADABLE
simd_mul(double a, simd_quatd q)
{
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

simd_quatd SIMD_OVERLOADABLE
simd_div(simd_quatd q, double a)
{
    return simd_quaternion(q.vector / a);
}

simd_quatd SIMD_OVERLOADABLE
simd_div(double a, simd_quatd q)
{
    return simd_quaternion(a / q.vector);
}

SWIFT_NAME("getter:simd_quatd.conjugate(self:)")
simd_quatd SIMD_OVERLOADABLE
simd_conjugate(simd_quatd q)
{
    q.vector.xyz *= -1.f;
    return q;
}

SWIFT_NAME("getter:simd_quatd.inverse(self:)")
simd_quatd SIMD_OVERLOADABLE
simd_inverse(simd_quatd q)
{
    return simd_div(simd_conjugate(q), simd_length_squared(q));
}

simd_quatd SIMD_OVERLOADABLE
simd_div(simd_quatd q, simd_quatd r)
{
    return simd_mul(q, simd_inverse(r));
}

simd_double3 SIMD_OVERLOADABLE
simd_act(simd_quatd q, simd_double3 v)
{
    // https://en.wikipedia.org/wiki/Quaternions_and_spatial_rotation#Using_quaternion_as_rotations
    simd_quatd v_quat = simd_quaternion(simd_make_double4(v));

    return simd_imag(simd_mul(simd_mul(q, v_quat),
                              simd_inverse(q)));
}

simd_quatd SIMD_OVERLOADABLE
simd_slerp(simd_quatd q, simd_quatd r, double t)
{
    static const double eps = 0.001;

    // https://www.euclideanspace.com/maths/algebra/realNormedAlgebra/quaternions/slerp/index.htm
    double cosHalfAngle = simd_dot(q.vector, r.vector);

    if (cosHalfAngle < 0.f) {
        cosHalfAngle = -cosHalfAngle;
        r = simd_quaternion(-r.vector);
    }

    if (cosHalfAngle >= 1.0f) {
        return q;
    }

    double halfAngle = acos(cosHalfAngle);
    double sinHalfAngle = sqrt(1.0f - cosHalfAngle * cosHalfAngle);

    if (fabs(sinHalfAngle) < eps) {
        return simd_quaternion(simd_mix(q.vector, r.vector, simd_make_double4(t, t, t, t)));
    }

    double wq = sin((1.f - t) * halfAngle) / sinHalfAngle;
    double wr = sin(t * halfAngle) / sinHalfAngle;

    return simd_quaternion(wq * q.vector + wr * r.vector);
}

#ifdef __cplusplus
} // extern "C"
#endif

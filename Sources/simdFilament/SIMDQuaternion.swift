import simdFilamentC
import Foundation

public protocol SIMDQuaternion {
    associatedtype Scalar: SIMDScalar & FloatingPoint
    typealias Vector = SIMD4 <Scalar>

    var vector: Vector { get }

    init(ix: Scalar, iy: Scalar, iz: Scalar, r: Scalar)
    init(_ vector: Vector)

    static func + (lhs: Self, rhs: Self) -> Self
    static func - (lhs: Self, rhs: Self) -> Self
    static func * (lhs: Self, rhs: Self) -> Self
    static func * (lhs: Self, rhs: SIMD3 <Scalar>) -> SIMD3 <Scalar>
    static func * (lhs: Self, rhs: Scalar) -> Self
    static func * (lhs: Scalar, rhs: Self) -> Self
    static func / (lhs: Self, rhs: Self) -> Self
    static func / (lhs: Self, rhs: Scalar) -> Self
    static func / (lhs: Scalar, rhs: Self) -> Self
}

public extension SIMDQuaternion {
    static func == (lhs: Self,
                    rhs: Self) -> Bool {
        return lhs.vector == rhs.vector
    }

    static func + (lhs: Self,
                   rhs: Self) -> Self {
        return Self(lhs.vector + rhs.vector)
    }

    static func - (lhs: Self,
                   rhs: Self) -> Self {
        return Self(lhs.vector - rhs.vector)
    }

    static func * (lhs: Self,
                   rhs: Scalar) -> Self {
        return Self(lhs.vector * rhs)
    }

    static func * (lhs: Scalar,
                   rhs: Self) -> Self {
        return rhs * lhs
    }

    static func / (lhs: Self,
                   rhs: Scalar) -> Self {
        return Self(lhs.vector / rhs)
    }

    static func / (lhs: Scalar,
                   rhs: Self) -> Self {
        return Self(lhs / rhs.vector)
    }

    init(real: Scalar,
         imag: SIMD3 <Scalar>) {
        self = Self(Vector(imag, real))
    }

    func act(_ vector: SIMD3 <Scalar>) -> SIMD3 <Scalar> {
        return self * vector
    }
}

extension simd_quatf: SIMDQuaternion, Equatable {
    public static func * (lhs: Self,
                          rhs: SIMD3 <Scalar>) -> SIMD3 <Scalar> {
        return simd_act(lhs, rhs)
    }

    public static func * (lhs: Self,
                          rhs: Self) -> Self {
        return simd_mul(lhs, rhs)
    }

    public static func / (lhs: Self,
                          rhs: Self) -> Self {
        return simd_div(lhs, rhs)
    }
}

extension simd_quatd: SIMDQuaternion, Equatable {
    public static func * (lhs: Self,
                          rhs: SIMD3 <Scalar>) -> SIMD3 <Scalar> {
        return simd_act(lhs, rhs)
    }

    public static func * (lhs: Self,
                          rhs: Self) -> Self {
        return simd_mul(lhs, rhs)
    }

    public static func / (lhs: Self,
                          rhs: Self) -> Self {
        return simd_div(lhs, rhs)
    }
}

public extension simd_quatf {
    init(_ rotationMatrix: simd_float3x3) {
        preconditionFailure()
    }

    init(_ rotationMatrix: simd_float4x4) {
        preconditionFailure()
    }
}

public func simd_slerp(_ q0: simd_quatf,
                       _ q1: simd_quatf,
                       _ t: Float) -> simd_quatf {
    preconditionFailure()
}

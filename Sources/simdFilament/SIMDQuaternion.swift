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
    static func * (lhs: Self, rhs: Scalar) -> Self
    static func * (lhs: Scalar, rhs: Self) -> Self
}

public extension SIMDQuaternion {
    static func == (lhs: Self,
                    rhs: Self) -> Bool {
        return lhs.vector == rhs.vector
    }

    init(real: Scalar,
         imag: SIMD3 <Scalar>) {
        self = Self(Vector(imag, real))
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
}

extension simd_quatf: SIMDQuaternion, Equatable {
    public static func * (lhs: Self,
                          rhs: Self) -> Self {
        return simd_mul(lhs, rhs)
    }
}

extension simd_quatd: SIMDQuaternion, Equatable {
    public static func * (lhs: Self,
                          rhs: Self) -> Self {
        return simd_mul(lhs, rhs)
    }
}

public extension simd_quatf {
    init(_ rotationMatrix: simd_float3x3) {
        preconditionFailure()
    }

    init(_ rotationMatrix: simd_float4x4) {
        preconditionFailure()
    }

    init(from: SIMD3 <Float>,
         to: SIMD3 <Float>) {
        preconditionFailure()
    }
}

extension simd_quatf {
    public static func / (lhs: simd_quatf,
                          rhs: simd_quatf) -> simd_quatf {
        preconditionFailure()
    }

    public static func / (lhs: simd_quatf,
                          rhs: Float) -> simd_quatf {
        preconditionFailure()
    }
}

extension simd_quatf {
    public var inverse: simd_quatf {
        preconditionFailure()
    }

    public func act(_ vector: SIMD3 <Float>) -> SIMD3 <Float> {
        preconditionFailure()
    }
}

extension simd_quatf: RangeReplaceableCollection {
    public typealias Element = Float
    public typealias Index = Int

    public var startIndex: Int { 0 }
    public var endIndex: Int { 4 }

    public subscript(bounds: Self.Index) -> Self.Element {
        preconditionFailure()
    }

    public func append <S: Sequence> (contentsOf newElements: S) where Element == S.Element {
        preconditionFailure()
    }

    public func index(after i: Int) -> Int {
        return i + 1
    }
}

public func simd_quaternion(_ from: simd_float3,
                            _ to: simd_float3) -> simd_quatf {
    preconditionFailure()
}

public func simd_slerp(_ q0: simd_quatf,
                       _ q1: simd_quatf,
                       _ t: Float) -> simd_quatf {
    preconditionFailure()
}

import simdFilamentC
import Foundation

public extension simd_quatd {
    init(angle: Double,
         axis: simd_double3) {
        preconditionFailure()
    }

    init(ix: Double,
         iy: Double,
         iz: Double,
         r: Double) {
        preconditionFailure()
    }
}

extension simd_quatd: Equatable {
    public static func == (lhs: simd_quatd,
                           rhs: simd_quatd) -> Bool {
        preconditionFailure()
    }
}

extension simd_quatd {
    public static func * (lhs: simd_quatd,
                          rhs: simd_quatd) -> simd_quatd {
        preconditionFailure()
    }
}

public extension simd_quatf {
    init(_ rotationMatrix: simd_float3x3) {
        preconditionFailure()
    }

    init(_ rotationMatrix: simd_float4x4) {
        preconditionFailure()
    }

    init(angle: Float,
         axis: simd_float3) {
        preconditionFailure()
    }

    init(ix: Float,
         iy: Float,
         iz: Float,
         r: Float) {
        preconditionFailure()
    }
}

extension simd_quatf: Equatable {
    public static func == (lhs: simd_quatf,
                           rhs: simd_quatf) -> Bool {
        preconditionFailure()
    }
}

extension simd_quatf {
    public static func * (lhs: simd_quatf,
                          rhs: simd_quatf) -> simd_quatf {
        preconditionFailure()
    }

    public static func / (lhs: simd_quatf,
                          rhs: simd_quatf) -> simd_quatf {
        preconditionFailure()
    }

    public static func / (lhs: simd_quatf,
                          rhs: Float) -> simd_quatf {
        preconditionFailure()
    }
}

public func simd_angle(_ q: simd_quatf) -> Float {
    preconditionFailure()
}
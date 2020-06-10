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

    init(from: SIMD3 <Float>,
         to: SIMD3 <Float>) {
        preconditionFailure()
    }

    init(ix: Float,
         iy: Float,
         iz: Float,
         r: Float) {
        preconditionFailure()
    }

    init(real: Float,
         imag: SIMD3 <Float>) {
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

extension simd_quatf {
    public var angle: Float {
        return simd_angle(self)
    }

    public var axis: SIMD3 <Float> {
        preconditionFailure()
    }

    public var inverse: simd_quatf {
        preconditionFailure()
    }

    public var normalized: simd_quatf {
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

public func simd_angle(_ q: simd_quatf) -> Float {
    preconditionFailure()
}

public protocol SIMDMatrix {
    associatedtype Column: SIMD
    static var columnCount: Int { get }
    static var rowCount: Int { get }

    subscript(index: Int) -> Column { get set }
}

public extension SIMDMatrix {
    typealias Scalar = Column.Scalar

    static var rowCount: Int { Self.Column.scalarCount }

    static func == (lhs: Self, rhs: Self) -> Bool {
        for i in 0..<self.columnCount {
            guard lhs[i] == rhs[i] else {
                return false
            }
        }

        return true
    }

    init <U> (_ columns: [SIMD4 <U>]) {
        preconditionFailure()
    }

    init <U> (_ scalar: U) {
        preconditionFailure()
    }

    init <U> (rows: [SIMD4 <U>]) {
        preconditionFailure()
    }

    init(_ quaternion: simd_quatf) {
        preconditionFailure()
    }

    subscript(column: Int, row: Int) -> Column.Scalar {
        get { self[column][row] }
        set { self[column][row] = newValue }
    }
}

extension simd_double3x3 {
    public static func * (lhs: simd_double3x3,
                          rhs: simd_double3x3) -> simd_double3x3 {
        preconditionFailure()
    }
}

extension simd_float3x3 {
    public static func * (lhs: simd_float3x3,
                          rhs: simd_float4x3) -> simd_float4x3 {
        preconditionFailure()
    }
}

extension simd_float4x3 {
    public static func * (lhs: simd_float4x3,
                          rhs: simd_float4x4) -> simd_float4x3 {
        preconditionFailure()
    }
}

extension simd_float4x4 {
    public static func * (lhs: simd_float4x4,
                          rhs: simd_float4x4) -> simd_float4x4 {
        preconditionFailure()
    }
}

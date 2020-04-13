@_exported import simdFilamentC

public protocol SIMDMatrix {
    associatedtype Column
    static var columnCount: Int { get }

    subscript(index: Int) -> Column { get set }
}

public extension SIMDMatrix where Column: SIMD {
    static func == (lhs: Self, rhs: Self) -> Bool {
        for i in 0..<self.columnCount {
            guard lhs[i] == rhs[i] else {
                return false
            }
        }

        return true
    }
}

extension simd_float2x2: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_float2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float3x2: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_float2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float4x2: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_float2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float2x3: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_float3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float3x3: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_float3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float4x3: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_float3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float2x4: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_float4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float3x4: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_float4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_float4x4: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_float4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double2x2: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_double2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double3x2: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_double2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double4x2: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_double2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double2x3: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_double3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double3x3: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_double3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double4x3: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_double3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double2x4: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_double4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double3x4: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_double4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_double4x4: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_double4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int2x2: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_int2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int3x2: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_int2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int4x2: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_int2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int2x3: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_int3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int3x3: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_int3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int4x3: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_int3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int2x4: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_int4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int3x4: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_int4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_int4x4: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_int4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint2x2: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_uint2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint3x2: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_uint2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint4x2: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_uint2 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint2x3: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_uint3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint3x3: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_uint3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint4x3: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_uint3 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint2x4: SIMDMatrix, Equatable {
    public static let columnCount = 2

    public subscript(index: Int) -> simd_uint4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint3x4: SIMDMatrix, Equatable {
    public static let columnCount = 3

    public subscript(index: Int) -> simd_uint4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

extension simd_uint4x4: SIMDMatrix, Equatable {
    public static let columnCount = 4

    public subscript(index: Int) -> simd_uint4 {
        get {
            get(index: index,
                in: self.columns)
        }

        set {
            set(index: index,
                in: &self.columns,
                value: newValue)
        }
    }
}

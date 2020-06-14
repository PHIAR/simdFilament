import simdFilamentC

public extension simd_float2x2 {
    init(_ columns: [simd_float2]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_float2x2(columns: asTuple)
    }
}

public extension simd_float2x3 {
    init(_ columns: [simd_float3]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_float2x3(columns: asTuple)
    }
}

public extension simd_float2x4 {
    init(_ columns: [simd_float4]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_float2x4(columns: asTuple)
    }
}

public extension simd_float3x2 {
    init(_ columns: [simd_float2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_float3x2(columns: asTuple)
    }
}

public extension simd_float3x3 {
    init(_ columns: [simd_float3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_float3x3(columns: asTuple)
    }
}

public extension simd_float3x4 {
    init(_ columns: [simd_float4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_float3x4(columns: asTuple)
    }
}

public extension simd_float4x2 {
    init(_ columns: [simd_float2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_float4x2(columns: asTuple)
    }
}

public extension simd_float4x3 {
    init(_ columns: [simd_float3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_float4x3(columns: asTuple)
    }
}

public extension simd_float4x4 {
    init(_ columns: [simd_float4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_float4x4(columns: asTuple)
    }
}

public extension simd_double2x2 {
    init(_ columns: [simd_double2]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_double2x2(columns: asTuple)
    }
}

public extension simd_double2x3 {
    init(_ columns: [simd_double3]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_double2x3(columns: asTuple)
    }
}

public extension simd_double2x4 {
    init(_ columns: [simd_double4]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_double2x4(columns: asTuple)
    }
}

public extension simd_double3x2 {
    init(_ columns: [simd_double2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_double3x2(columns: asTuple)
    }
}

public extension simd_double3x3 {
    init(_ columns: [simd_double3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_double3x3(columns: asTuple)
    }
}

public extension simd_double3x4 {
    init(_ columns: [simd_double4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_double3x4(columns: asTuple)
    }
}

public extension simd_double4x2 {
    init(_ columns: [simd_double2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_double4x2(columns: asTuple)
    }
}

public extension simd_double4x3 {
    init(_ columns: [simd_double3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_double4x3(columns: asTuple)
    }
}

public extension simd_double4x4 {
    init(_ columns: [simd_double4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_double4x4(columns: asTuple)
    }
}

public extension simd_int2x2 {
    init(_ columns: [simd_int2]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_int2x2(columns: asTuple)
    }
}

public extension simd_int2x3 {
    init(_ columns: [simd_int3]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_int2x3(columns: asTuple)
    }
}

public extension simd_int2x4 {
    init(_ columns: [simd_int4]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_int2x4(columns: asTuple)
    }
}

public extension simd_int3x2 {
    init(_ columns: [simd_int2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_int3x2(columns: asTuple)
    }
}

public extension simd_int3x3 {
    init(_ columns: [simd_int3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_int3x3(columns: asTuple)
    }
}

public extension simd_int3x4 {
    init(_ columns: [simd_int4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_int3x4(columns: asTuple)
    }
}

public extension simd_int4x2 {
    init(_ columns: [simd_int2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_int4x2(columns: asTuple)
    }
}

public extension simd_int4x3 {
    init(_ columns: [simd_int3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_int4x3(columns: asTuple)
    }
}

public extension simd_int4x4 {
    init(_ columns: [simd_int4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_int4x4(columns: asTuple)
    }
}

public extension simd_uint2x2 {
    init(_ columns: [simd_uint2]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_uint2x2(columns: asTuple)
    }
}

public extension simd_uint2x3 {
    init(_ columns: [simd_uint3]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_uint2x3(columns: asTuple)
    }
}

public extension simd_uint2x4 {
    init(_ columns: [simd_uint4]) {
        let asTuple = (
            columns[0],
            columns[1]
        )

        self = simd_uint2x4(columns: asTuple)
    }
}

public extension simd_uint3x2 {
    init(_ columns: [simd_uint2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_uint3x2(columns: asTuple)
    }
}

public extension simd_uint3x3 {
    init(_ columns: [simd_uint3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_uint3x3(columns: asTuple)
    }
}

public extension simd_uint3x4 {
    init(_ columns: [simd_uint4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2]
        )

        self = simd_uint3x4(columns: asTuple)
    }
}

public extension simd_uint4x2 {
    init(_ columns: [simd_uint2]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_uint4x2(columns: asTuple)
    }
}

public extension simd_uint4x3 {
    init(_ columns: [simd_uint3]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_uint4x3(columns: asTuple)
    }
}

public extension simd_uint4x4 {
    init(_ columns: [simd_uint4]) {
        let asTuple = (
            columns[0],
            columns[1],
            columns[2],
            columns[3]
        )

        self = simd_uint4x4(columns: asTuple)
    }
}


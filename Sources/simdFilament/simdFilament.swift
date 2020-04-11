@_exported import simdFilamentC

private func get <T> (index: Int,
                      in tuple: (T, T)) -> T {
    switch index {
    case 0:
        return tuple.0
    case 1:
        return tuple.1
    default:
        preconditionFailure("Out of bounds index: \(index)")
    }
}

private func get <T> (index: Int,
                      in tuple: (T, T, T)) -> T {
    switch index {
    case 0:
        return tuple.0
    case 1:
        return tuple.1
    case 2:
        return tuple.2
    default:
        preconditionFailure("Out of bounds index: \(index)")
    }
}

private func get <T> (index: Int,
                      in tuple: (T, T, T, T)) -> T {
    switch index {
    case 0:
        return tuple.0
    case 1:
        return tuple.1
    case 2:
        return tuple.2
    case 3:
        return tuple.3
    default:
        preconditionFailure("Out of bounds index: \(index)")
    }
}

public extension simd_float2x2 {
    subscript(index: Int) -> simd_float2 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float2x3 {
    subscript(index: Int) -> simd_float3 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float2x4 {
    subscript(index: Int) -> simd_float4 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float3x2 {
    subscript(index: Int) -> simd_float2 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float3x3 {
    subscript(index: Int) -> simd_float3 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float3x4 {
    subscript(index: Int) -> simd_float4 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float4x2 {
    subscript(index: Int) -> simd_float2 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float4x3 {
    subscript(index: Int) -> simd_float3 {
        return get(index: index,
                   in: self.columns)
    }
}

public extension simd_float4x4 {
    subscript(index: Int) -> simd_float4 {
        return get(index: index,
                   in: self.columns)
    }
}
internal func get <T> (index: Int,
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

internal func get <T> (index: Int,
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

internal func get <T> (index: Int,
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

internal func set <T> (index: Int,
                      in tuple: inout (T, T),
                      value: T) {
    switch index {
    case 0:
        tuple.0 = value
    case 1:
        tuple.1 = value
    default:
        preconditionFailure("Out of bounds index: \(index)")
    }
}

internal func set <T> (index: Int,
                      in tuple: inout (T, T, T),
                      value: T) {
    switch index {
    case 0:
        tuple.0 = value
    case 1:
        tuple.1 = value
    case 2:
        tuple.2 = value
    default:
        preconditionFailure("Out of bounds index: \(index)")
    }
}

internal func set <T> (index: Int,
                      in tuple: inout (T, T, T, T),
                      value: T) {
    switch index {
    case 0:
        tuple.0 = value
    case 1:
        tuple.1 = value
    case 2:
        tuple.2 = value
    case 3:
        tuple.3 = value
    default:
        preconditionFailure("Out of bounds index: \(index)")
    }
}

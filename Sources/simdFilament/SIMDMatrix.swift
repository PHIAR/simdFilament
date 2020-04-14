public protocol SIMDMatrix {
    associatedtype Column
    static var columnCount: Int { get }
    static var rowCount: Int { get }

    subscript(index: Int) -> Column { get set }
}

public extension SIMDMatrix where Column: SIMD {
    static var rowCount: Int { Self.Column.scalarCount }

    static func == (lhs: Self, rhs: Self) -> Bool {
        for i in 0..<self.columnCount {
            guard lhs[i] == rhs[i] else {
                return false
            }
        }

        return true
    }
}
public protocol SIMDMatrix {
    associatedtype Column: SIMD
    associatedtype Transpose: SIMDMatrix
    static var columnCount: Int { get }
    static var rowCount: Int { get }

    var transpose: Transpose { get }

    init(_ columns: [Column])

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

    init (rows: [Transpose.Column]) {
        self = Transpose.init(rows).transpose as! Self
    }

    init(_ quaternion: simd_quatf) {
        preconditionFailure()
    }

    subscript(column: Int, row: Int) -> Column.Scalar {
        get { self[column][row] }
        set { self[column][row] = newValue }
    }
}

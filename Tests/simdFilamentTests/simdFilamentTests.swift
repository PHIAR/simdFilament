import simdFilament
import XCTest

internal class simdFilamentTests: XCTestCase {
    internal static var allTests = [
        ("testConstruct2", testConstruct2),
        ("testConstruct3", testConstruct3),
        ("testConstruct4", testConstruct4),
        ("testConstruct4x4", testConstruct4x4),
        ("testDot", testDot),
        ("testCross", testCross),
    ]

    private static let accuracy = Float(1e-3)

    internal func testConstruct2() {
        let values: [Float] = [1.0, 2.0]
        let vec1 = simd_make_float2(values)
        let vec2 = simd_float2(values)
        let vec3 = simd_float2(values[0], values[1])

        XCTAssertEqual(vec1, vec2)
        XCTAssertEqual(vec1, vec3)
    }

    internal func testConstruct3() {
        let values: [Float] = [1.0, 2.0, 3.0]
        let vec1 = simd_make_float3(values)
        let vec2 = simd_float3(values)
        let vec3 = simd_float3(values[0], values[1], values[2])
        let vec4 = simd_make_float3(simd_float2(values[0], values[1]), values[2])
        let vec5 = simd_make_float3(values[0], simd_float2(values[1], values[2]))

        XCTAssertEqual(vec1, vec2)
        XCTAssertEqual(vec1, vec3)
        XCTAssertEqual(vec1, vec4)
        XCTAssertEqual(vec1, vec5)
    }

    internal func testConstruct4() {
        let values: [Float] = [1.0, 2.0, 3.0, 4.0]
        let vec1 = simd_make_float4(values)
        let vec2 = simd_float4(values)
        let vec3 = simd_float4(values[0], values[1], values[2], values[3])
        let vec4 = simd_make_float4(simd_float2(values[0], values[1]), simd_float2(values[2], values[3]))
        let vec5 = simd_make_float4(values[0], simd_float3(values[1], values[2], values[3]))

        XCTAssertEqual(vec1, vec2)
        XCTAssertEqual(vec1, vec3)
        XCTAssertEqual(vec1, vec4)
        XCTAssertEqual(vec1, vec5)
    }

    internal func testConstruct4x4() {
        let column = simd_float4(1.0, 1.0, 1.0, 1.0)
        let a = simd_float4x4(column, 2.0 * column, 3.0 * column, 4.0 * column)

        for i in 0..<4 {
            XCTAssertEqual(a[i], Float(i + 1) * column)
            XCTAssertEqual(a[i], Float(i + 1) * column)
        }
    }

    internal func testCast() {
        let columns = [
            simd_float3(1.0, 2.1, 3.0),
            simd_float3(4.0, 5.0, 6.8),
        ]
        let matFloat = simd_float2x3(columns[0],
                                     columns[1])
        let matInt = simd_int2x3(matFloat)
        let expected = simd_int2x3(simd_int3(1, 2, 3),
                                   simd_int3(4, 5, 6))

        XCTAssertEqual(matInt, expected)
    }

    internal func testAbs() {
        let v4 = simd_float4(-1.0, 2.0, -3.0, 4.0)
        let abs4 = simd_abs(v4)

        XCTAssertEqual(abs4, simd_float4(1.0, 2.0, 3.0, 4.0))
    }

    internal func testDot() {
        let a = simd_float2(1.0, 2.0)
        let b = simd_float2(2.0, 3.0)

        let dot = simd_dot(a, b)

        XCTAssertEqual(dot,
                       Float(1.0 * 2.0 + 2.0 * 3.0),
                       accuracy: simdFilamentTests.accuracy)
    }

    internal func testCross() {
        let a = simd_float3(1.0, 2.0, 3.0)
        let b = simd_float3(4.0, 5.0, 6.0)

        let cross = simd_cross(a, b)
        let expected = simd_float3(a.y * b.z - a.z * b.y,
                                   a.z * b.x - a.x * b.z,
                                   a.x * b.y - a.y * b.x)

        XCTAssertEqual(cross, expected)
    }

    internal func testDistance() {
        let a = simd_float3(1.0, 2.0, 3.0)
        let b = simd_float3(2.0, 1.0, 3.0)
        let distance = simd_distance(a, b)
        let expected = Float(sqrt(2.0))

        XCTAssertEqual(distance,
                       expected,
                       accuracy: simdFilamentTests.accuracy)
    }
}
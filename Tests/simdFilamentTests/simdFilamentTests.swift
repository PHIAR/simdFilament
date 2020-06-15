import simdFilament
import XCTest

internal class simdFilamentTests: XCTestCase {
    internal static var allTests = [
        ("testConstruct2", testConstruct2),
        ("testConstruct3", testConstruct3),
        ("testConstruct4", testConstruct4),
        ("testConstruct4x4", testConstruct4x4),
        ("testCast", testCast),
        ("testAbs", testAbs),
        ("testClamp", testClamp),
        ("testMix", testMix),
        ("testSign", testSign),
        ("testTrig", testTrig),
        ("testDot", testDot),
        ("testCross", testCross),
        ("testDistance", testDistance),
        ("testNormalize", testNormalize),
        ("testProject", testProject),
        ("testMatrixVectorProduct", testMatrixVectorProduct),
        ("testMatrixMatrixProduct", testMatrixMatrixProduct),
        ("testTranspose", testTranspose),
        ("testAlmostEqual", testAlmostEqual),
        ("testInverse", testInverse),
        ("testQuaternion", testQuaternion),
        ("testQuaternionFromVectors", testQuaternionFromVectors),
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
        let columnsArray = (1...4).map { Float($0) * column }

        let fromArray = simd_float4x4(columnsArray)

        for i in 0..<4 {
            XCTAssertEqual(fromArray[i], Float(i + 1) * column)
            XCTAssertEqual(fromArray[i], Float(i + 1) * column)
        }

        let fromArguments = simd_float4x4(columnsArray[0],
                                          columnsArray[1],
                                          columnsArray[2],
                                          columnsArray[3])

        for i in 0..<4 {
            XCTAssertEqual(fromArguments[i], Float(i + 1) * column)
            XCTAssertEqual(fromArguments[i], Float(i + 1) * column)
        }

        let asTuple = (columnsArray[0], columnsArray[1], columnsArray[2], columnsArray[3])
        let fromTuple = simd_float4x4(columns: asTuple)

        for i in 0..<4 {
            XCTAssertEqual(fromTuple[i], Float(i + 1) * column)
            XCTAssertEqual(fromTuple[i], Float(i + 1) * column)
        }

        let asRowsArray = (0..<4).map {
            simd_float4(columnsArray[0][$0],
                        columnsArray[1][$0],
                        columnsArray[2][$0],
                        columnsArray[3][$0])
        }
        let fromRows = simd_float4x4(rows: asRowsArray)

        for i in 0..<4 {
            XCTAssertEqual(fromRows[i], Float(i + 1) * column)
            XCTAssertEqual(fromRows[i], Float(i + 1) * column)
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
        XCTAssertEqual(simd_uint2x3(matFloat),
                       simd_uint2x3(matInt))
    }

    internal func testAbs() {
        let v4 = simd_float4(-1.0, 2.0, -3.0, 4.0)
        let abs4 = simd_abs(v4)

        XCTAssertEqual(abs4, simd_float4(1.0, 2.0, 3.0, 4.0))
    }

    internal func testClamp() {
        let vec = simd_float4(-1.0, 2.0, -3.0, 4.0)
        let clamped = simd_clamp(vec, -0.5, 3.0)

        XCTAssertEqual(clamped, simd_float4(-0.5, 2.0, -0.5, 3.0))
    }

    internal func testMix() {
        let a = simd_float4(1.0, 2.0, 3.0, 4.0)
        let b = simd_float4(5.0, 6.0, 7.0, 8.0)
        let t = simd_float4(0.0, 1.0, 0.5, 0.5)
        let mix = simd_mix(a, b, t)
        let expected = simd_float4(1.0, 6.0, 5.0, 6.0)

        XCTAssertEqual(mix, expected)
    }

    internal func testSign() {
        let vec = simd_float4(-1.0, 2.0, .nan, 0.0)
        let abs4 = simd_sign(vec)

        XCTAssertEqual(abs4, simd_float4(-1.0, 1.0, 0.0, 0.0))
    }

    internal func testTrig() {
        let vec = simd_float2(0.0, 0.5 * .pi)
        let cosVec = cos(vec)
        let expected = simd_float2(1.0, 0.0)

        XCTAssertEqual(cosVec[0], expected[0], accuracy: simdFilamentTests.accuracy)
        XCTAssertEqual(cosVec[1], expected[1], accuracy: simdFilamentTests.accuracy)
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
        let a = simd_float4(0.0, 2.0, 3.0, 1.0)
        let b = simd_float4(0.0, 1.0, 3.0, 2.0)
        let distance = simd_distance(a, b)
        let expected = Float(sqrt(2.0))

        XCTAssertEqual(distance,
                       expected,
                       accuracy: simdFilamentTests.accuracy)

        let distanceSquared = simd_distance_squared(a, b)
        let expectedSquared = expected * expected

        XCTAssertEqual(distanceSquared,
                       expectedSquared,
                       accuracy: simdFilamentTests.accuracy)

    }

    internal func testNormalize() {
        let vec = simd_float3(1.0, 2.0, 3.0)
        let normalized = simd_normalize(vec)

        XCTAssertEqual(simd_length(normalized),
                       1.0,
                       accuracy: simdFilamentTests.accuracy)
        XCTAssertEqual(simd_dot(vec, normalized),
                       simd_length(vec),
                       accuracy: simdFilamentTests.accuracy)
    }

    internal func testProject() {
        let vec1 = simd_float2(1.0, 2.0)
        let vec2 = simd_float2(3.0, 4.0)
        let vec1Proj2 = simd_project(vec1, vec2)

        XCTAssertEqual(simd_cross(vec1Proj2, vec2).z,
                       0.0,
                       accuracy: simdFilamentTests.accuracy)
        XCTAssertEqual(simd_dot(vec1 - vec1Proj2, vec2),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)
    }

    internal func testMatrixVectorProduct() {
        let mat = simd_float2x2(simd_float2(1.0, 2.0),
                                simd_float2(3.0, 4.0))
        let vec = simd_float2(1.0, 2.0)
        let prod = simd_mul(mat, vec)
        let prodTranspose = simd_mul(vec, mat)

        XCTAssertEqual(prod, simd_float2(7.0, 10.0))
        XCTAssertEqual(prodTranspose, simd_float2(5.0, 11.0))
    }

    internal func testMatrixMatrixProduct() {
        let mat1 = simd_float4x2(simd_float2(1.0, 2.0),
                                 simd_float2(3.0, 4.0),
                                 simd_float2(5.0, 6.0),
                                 simd_float2(7.0, 8.0))
        let mat2 = simd_float2x3(simd_float3(1.0, 2.0, 3.0),
                                 simd_float3(4.0, 5.0, 6.0))
        let expected = simd_float4x3(simd_float3(9.0, 12.0, 15.0),
                                     simd_float3(19.0, 26.0, 33.0),
                                     simd_float3(29.0, 40.0, 51.0),
                                     simd_float3(39.0, 54.0, 69.0))
        let prod = simd_mul(mat2, mat1)

        XCTAssertEqual(prod, expected)

        let prodOperator = mat2 * mat1

        XCTAssertEqual(prodOperator, expected)
    }

    internal func testTranspose() {
        let mat = simd_float4x2(simd_float2(1.0, 2.0),
                                simd_float2(3.0, 4.0),
                                simd_float2(5.0, 6.0),
                                simd_float2(7.0, 8.0))
        let transposed = mat.transpose
        let expected = simd_float2x4(simd_float4(1.0, 3.0, 5.0, 7.0),
                                     simd_float4(2.0, 4.0, 6.0, 8.0))

        XCTAssertEqual(transposed, expected)
    }

    internal func testAlmostEqual() {
        let mat = simd_float3x3(simd_float3(1.0, 2.0, 3.0),
                                simd_float3(4.0, 5.0, 6.0),
                                simd_float3(7.0, 8.0, 9.0))
        var test = mat

        XCTAssertTrue(simd_almost_equal_elements(mat, test, 0.0))

        test[1, 2] = mat[1, 2] + 0.1
        XCTAssertTrue(simd_almost_equal_elements(mat, test, 0.1))

        test[1, 2] = mat[1, 2] + 1.0
        XCTAssertFalse(simd_almost_equal_elements(mat, test, 0.1))
    }

    internal func testInverse() {
        let mat = simd_float3x3(simd_float3(1.0, 4.0, 0.0),
                                simd_float3(2.0, 5.0, 0.0),
                                simd_float3(3.0, 6.0, 1.0))
        let inverse = mat.inverse

        XCTAssertTrue(simd_almost_equal_elements(simd_mul(mat, inverse),
                                                 matrix_identity_float3x3,
                                                 simdFilamentTests.accuracy))
    }

    internal func testQuaternion() {
        let q = simd_quatf(ix: 1.0, iy: 2.0, iz: 3.0, r: 4.0)
        let normalized = q.normalized
        let expectedNormalized = simd_quatf(ix: 1.825742e-01,
                                            iy: 3.651483e-01,
                                            iz: 5.477225e-01,
                                            r: 7.302967e-01)

        XCTAssertEqual(simd_norm_inf(normalized.vector - expectedNormalized.vector),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)

        let conjugate = q.conjugate
        let expectedConjugate = simd_quatf(ix: -1.0, iy: -2.0, iz: -3.0, r: 4.0)

        XCTAssertEqual(simd_norm_inf(conjugate.vector - expectedConjugate.vector),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)

        let inverse = q.inverse
        let expectedInverse = simd_quatf(ix: -0.0333333,
                                         iy: -0.0666667,
                                         iz: -0.1,
                                         r: 0.133333)

        XCTAssertEqual(simd_norm_inf(inverse.vector - expectedInverse.vector),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)
        XCTAssertEqual((inverse * q).length,
                       1.0,
                       accuracy: simdFilamentTests.accuracy)
        XCTAssertEqual((q * inverse).length,
                       1.0,
                       accuracy: simdFilamentTests.accuracy)

        let angle = normalized.angle
        let axis = normalized.axis
        let expectedAngle = Float(1.504080)
        let expectedAxis = simd_float3(0.267261, 0.534522, 0.801784)

        XCTAssertEqual(angle,
                       expectedAngle,
                       accuracy: simdFilamentTests.accuracy)
        XCTAssertEqual(simd_norm_inf(axis - expectedAxis),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)

        let reconstructed = simd_quatf(angle: angle, axis: axis)

        XCTAssertEqual(simd_norm_inf(reconstructed.vector - normalized.vector),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)

        let r = simd_quatf(simd_float4(6.0, 7.0, 5.0, 8.0))
        let product = q * r
        // https://www.wolframalpha.com/input/?i=%284+%2B+i+%2B+2j+%2B+3k%29+*+%284+%2B+2i+%2B+3j+%2B+k%29
        let expectedProduct = simd_quatf(simd_float4(21, 57, 39, -3))

        XCTAssertEqual(simd_norm_inf(product.vector - expectedProduct.vector),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)

        let t = Float(0.2)
        let slerp = simd_slerp(q.normalized, r.normalized, t)
        let delta = (r.normalized / q.normalized)
        let scaledDelta = simd_quatf(angle: t * delta.angle, axis: delta.axis)
        let expectedSlerp = scaledDelta * q.normalized

        XCTAssertEqual(simd_norm_inf(slerp.vector - expectedSlerp.vector),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)
    }

    internal func testQuaternionFromVectors() {
        let from = simd_normalize(simd_float3(1.0, 2.0, 3.0))
        let to = simd_normalize(simd_float3(-4.0, 5.0, -6.0))
        let q = simd_quatf(from: from, to: to)
        let transformed = q * from

        XCTAssertEqual(simd_norm_inf(to - transformed),
                       0.0,
                       accuracy: simdFilamentTests.accuracy)
    }
}

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "prime.hpp"
// Testing few prime identification
TEST_CASE("Testing  Pime Identification", "[Prime Identification]") {
    REQUIRE(isPrimeHalf(5) == true);
    REQUIRE(isPrimeSqrt(5) == true);
    REQUIRE(isPrimeHalf(61) == true);
    REQUIRE(isPrimeSqrt(61) == true);
    REQUIRE(isPrimeHalf(97) == true);
    REQUIRE(isPrimeSqrt(97) == true);
}
//Testing composite numbers
TEST_CASE("Testing Composite Identification", "[Composite Identification]") {
    REQUIRE(isPrimeHalf(6) == false);
    REQUIRE(isPrimeSqrt(6) == false);
    REQUIRE(isPrimeHalf(51) == false);
    REQUIRE(isPrimeSqrt(51) == false);
    REQUIRE(isPrimeHalf(3721) == false);
    REQUIRE(isPrimeSqrt(3721) == false);
}
// test for few range of prime numbers if both methods are consistent​
TEST_CASE("Testing Functions are Consistent over Range", "[Consistency]") {
    for (int i = 2; i < 100; i++){
        REQUIRE(isPrimeHalf(i) == isPrimeSqrt(i));
    }
}
// // Testing mod operation counts
// TEST_CASE("Testing Modulo Operation counts", "[Mod Op Counts]") {
//     REQUIRE(countModOps(isPrimeHalf, 2, 10) == 9);
//     REQUIRE(countModOps(isPrimeSqrt, 2, 10) == 8);
//     REQUIRE(countModOps(isPrimeHalf, 11, 20) == 31);
//     REQUIRE(countModOps(isPrimeSqrt, 11, 20) == 17);
//     REQUIRE(countModOps(isPrimeHalf, 21, 30) == 36);
//     REQUIRE(countModOps(isPrimeSqrt, 21, 30) == 20);
// }
// test edge cases
TEST_CASE("Testing Edge Cases", "[Edge Cases]") {
    REQUIRE(isPrimeHalf(2131131137) == true);
    REQUIRE(isPrimeSqrt(2131131137) == true);
    REQUIRE(isPrimeHalf(INT_MAX) == true);
    REQUIRE(isPrimeSqrt(INT_MAX) == true);
    REQUIRE(isPrimeHalf(2) == true);
    REQUIRE(isPrimeSqrt(2) == true);
    REQUIRE(isPrimeHalf(3) == true);
    REQUIRE(isPrimeSqrt(3) == true);
    REQUIRE(isPrimeHalf(4) == false);
    REQUIRE(isPrimeSqrt(4) == false);
    REQUIRE(isPrimeHalf(5) == true);
    REQUIRE(isPrimeSqrt(5) == true);
}

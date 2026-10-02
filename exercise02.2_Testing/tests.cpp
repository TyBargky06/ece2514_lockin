#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "code.h"

TEST_CASE("Valid Test 1", "[convertLength]"){
        REQUIRE_THAT(convertLength(1.0, 'i'),                     // Call the function with 1 inch
        Catch::Matchers::WithinAbs(2.54, 0.01));              // Answer should be within 0.01 of 2.54
}

TEST_CASE("Valid Test 2", "[convertLength]")                  // Test 2: another inches to centimeters test
{
    REQUIRE_THAT(convertLength(10.0, 'i'),                    // Call the function with 10 inches
        Catch::Matchers::WithinAbs(25.40, 0.01));             // 10 inches should equal 25.40 centimeters
}


TEST_CASE("Valid Test 3", "[convertLength]")                  // Test 3: check centimeters to inches
{
    REQUIRE_THAT(convertLength(2.54, 'c'),                    // Call the function with 2.54 centimeters
        Catch::Matchers::WithinAbs(1.0, 0.01));               // 2.54 centimeters should equal 1 inch
}


TEST_CASE("Valid Test 4", "[convertLength]")                  // Test 4: another centimeters to inches test
{
    REQUIRE_THAT(convertLength(25.4, 'c'),                    // Call the function with 25.4 centimeters
        Catch::Matchers::WithinAbs(10.0, 0.01));              // 25.4 centimeters should equal 10 inches
}


TEST_CASE("Invalid Test 1", "[convertLength]")                // Test 5: negative length with a valid inch unit
{
    REQUIRE(convertLength(-5.0, 'i') == -1.0);                // Negative length should return -1.0
}


TEST_CASE("Invalid Test 2", "[convertLength]")                // Test 6: negative length with a valid centimeter unit
{
    REQUIRE(convertLength(-10.0, 'c') == -1.0);               // Negative length should return -1.0
}


TEST_CASE("Invalid Test 3", "[convertLength]")                // Test 7: positive length with an invalid unit
{
    REQUIRE(convertLength(5.0, 'x') == -0.1);                 // Invalid unit should return -0.1
}


TEST_CASE("Invalid Test 4", "[convertLength]")                // Test 8: check that uppercase I is rejected
{
    REQUIRE(convertLength(5.0, 'I') == -0.1);                 // Capital I is invalid because units are case-sensitive
}


TEST_CASE("Invalid Test 5", "[convertLength]")                // Test 9: check that uppercase C is rejected
{
    REQUIRE(convertLength(5.0, 'C') == -0.1);                 // Capital C is invalid because units are case-sensitive
}


TEST_CASE("Invalid Test 6", "[convertLength]")                // Test 10: both arguments are invalid
{
    REQUIRE(convertLength(-5.0, 'x') == -1.1);                // Negative length + invalid unit should return -1.1
}

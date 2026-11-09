#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "functions.h"

TEST_CASE("Reverse Array", "[reverseArray]") {

    SECTION("Array with One Element") {
        int arr[] = { 1 };
        reverseArray(arr, 1);
        int expected[] = { 1 };
        REQUIRE(arr[0] == expected[0]);
    }

    SECTION("Array with Even Number of Elements") {
        int arr[] = { 1, 2, 3, 4 };
        reverseArray(arr, 4);
        int expected[] = { 4, 3, 2, 1 };
        REQUIRE(arr[0] == expected[0]);
        REQUIRE(arr[1] == expected[1]);
        REQUIRE(arr[2] == expected[2]);
        REQUIRE(arr[3] == expected[3]);
    }

    SECTION("Array with Odd Number of Elements") {
        int arr[] = { 1, 2, 3};
        reverseArray(arr, 3);
        int expected[] = { 3, 2, 1 };
        REQUIRE(arr[0] == expected[0]);
        REQUIRE(arr[1] == expected[1]);
        REQUIRE(arr[2] == expected[2]);
    }
}
TEST_CASE("Array Sum", "[arraySum]") {
    SECTION("Array with One Element") {
        int arr[] = { 5 };
        REQUIRE(arraySum(arr, 1) == 5);
    }
    SECTION("Array with Multiple Elements") {
        int arr[] = { 1, 2, 3, 4 };
        REQUIRE(arraySum(arr, 4) == 10);
    }
}

TEST_CASE("Element Wise Multiplication", "[elementWiseMultiplication]") {
    SECTION("Arrays with One Element") {
        int arr1[] = { 3 };
        int arr2[] = { 4 };
        int result[1];
        elementWiseMultiplication(arr1, arr2, result, 1);
        REQUIRE(result[0] == 12);
    }
    SECTION("Arrays with Multiple Elements") {
        int arr1[] = { 1, 2, 3 };
        int arr2[] = { 4, 5, 6 };
        int result[3];
        elementWiseMultiplication(arr1, arr2, result, 3);
        int expected[] = { 4, 10, 18 };
        REQUIRE(result[0] == expected[0]);
        REQUIRE(result[1] == expected[1]);
        REQUIRE(result[2] == expected[2]);
    }
}
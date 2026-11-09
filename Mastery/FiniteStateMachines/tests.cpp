#include <catch2/catch_test_macros.hpp>
#include <vector>
#include "functions.h"
 
TEST_CASE("coinChange for valid input 63") {
    std::vector<int> return_change = coinChange(63);
    REQUIRE((return_change[0] == 2 && return_change[1] == 1 && return_change[2] == 0 && return_change[3] == 3));
}
 
TEST_CASE("coinChange for valid input 99") {
    std::vector<int> return_change = coinChange(99);
    REQUIRE((return_change[0] == 3 && return_change[1] == 2 && return_change[2] == 0 && return_change[3] == 4));
}
 
TEST_CASE("coinChange for valid input 1") {
    std::vector<int> return_change = coinChange(1);
    REQUIRE((return_change[0] == 0 && return_change[1] == 0 && return_change[2] == 0 && return_change[3] == 1));
}
 
TEST_CASE("coinChange for invalid input zero") {
    std::vector<int> return_change = coinChange(0);
    REQUIRE((return_change[0] == -1 && return_change[1] == -1 && return_change[2] == -1 && return_change[3] == -1));
}
 
TEST_CASE("coinChange for invalid input negative") {
    std::vector<int> return_change = coinChange(-10);
    REQUIRE((return_change[0] == -1 && return_change[1] == -1 && return_change[2] == -1 && return_change[3] == -1));
}
 
TEST_CASE("coinChange for invalid input 100 or larger") {
    std::vector<int> return_change = coinChange(100);
    REQUIRE((return_change[0] == -1 && return_change[1] == -1 && return_change[2] == -1 && return_change[3] == -1));
    return_change = coinChange(150);
    REQUIRE((return_change[0] == -1 && return_change[1] == -1 && return_change[2] == -1 && return_change[3] == -1));
}
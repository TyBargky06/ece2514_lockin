

#include <catch2/catch_test_macros.hpp>
#include "code.h"
TEST_CASE("User's paper beats computer's rock", "[playRockPaperScissors]")
{
     REQUIRE(playRockPaperScissors('r', 'p') == 1);     // 'r' = computer chose rock, 'p' = user chose paper. Paper beats rock, so the user should win -> we expect the function to return 1, and REQUIRE checks exactly that.t.

} 
TEST_CASE("Computer's rock beats user's scissors", "[playRockPaperScissors]")
{
    REQUIRE(playRockPaperScissors('r', 's') == 2);     // 'r' = computer chose rock, 's' = user chose scissors. // Rock beats scissors, so the computer should win -> we expect the function to return 2, and REQUIRE checks exactly that.

}
TEST_CASE("Computer's paper beats user's rock", "[playRockPaperScissors]")
{
    REQUIRE(playRockPaperScissors('p', 'r') == 2);     // 'p' = computer chose paper, 'r' = user chose rock. // Paper covers rock, so the computer should win -> expect 2.

}

TEST_CASE("User's scissors beats computer's paper", "[playRockPaperScissors]")
{
    REQUIRE(playRockPaperScissors('p', 's') == 1);     // 'p' = computer chose paper, 's' = user chose scissors. // Scissors cut paper, so the user should win -> expect 1.

}

TEST_CASE("User's rock beats computer's scissors", "[playRockPaperScissors]")
{
    REQUIRE(playRockPaperScissors('s', 'r') == 1);     // 's' = computer chose scissors, 'r' = user chose rock. Rock smashes scissors, so the user should win -> expect 1.
}

TEST_CASE("Computer's scissors beats user's paper", "[playRockPaperScissors]")
{
    REQUIRE(playRockPaperScissors('s', 'p') == 2); // 's' = computer chose scissors, 'p' = user chose paper. // Scissors cut paper, so the computer should win -> expect 2.

}

TEST_CASE("Same choice on both sides is a draw", "[playRockPaperScissors]")
{
    REQUIRE(playRockPaperScissors('r', 'r') == 0);     // 'r' and 'r' -> identical choices -> the draw branch should fire and return 0. Any of 'p','p' or 's','s' would exercise the exact same line of code, so testing just one tie case is enough for branch coverage purposes.

}
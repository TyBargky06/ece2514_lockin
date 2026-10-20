#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "functions.h"

TEST_CASE("testing the max() function", "[5 point]")
{
    {
    INFO("This test checks the max() function with positive arguments");
    CHECK(max(2,5) == 5);
    }

    {
    INFO("This test checks the max() function with negative arguments");
    CHECK(max(-2,-5) == -2);
    }
}


// UNCOMMENT TEST CASES AS YOU IMPLEMENT FUNCTIONS


TEST_CASE("testing the factorial() function", "[5 point]")
{
    {
    INFO("This test checks 0 factorial");
    CHECK(factorial(0) == 1);
    }

    {
    INFO("This test checks the factorial() function with positive arguments");
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(5) == 120);
    }
}


TEST_CASE("testing the isEven() function", "[5 point]")
{
    {
    INFO("This test checks the isEven() function");
    CHECK(!isEven(1));
    CHECK(!isEven(-1));
    CHECK(isEven(2));
    CHECK(isEven(0));
    }
}


TEST_CASE("testing the average() function", "[5 point]")
{
    {
    INFO("This test checks the average() function");
    CHECK_THAT(average(3,4), Catch::Matchers::WithinAbs(3.5, 0.01));
    CHECK_THAT(average(3,5), Catch::Matchers::WithinAbs(4, 0.01));
    CHECK_THAT(average(-3,4), Catch::Matchers::WithinAbs(0.5, 0.01));
    }
}

TEST_CASE("testing the isPrime() function", "[5 point]")
{
    {
    INFO("This test checks the isPrime() function");
    CHECK(isPrime(2));
    CHECK(isPrime(3));
    CHECK(!isPrime(4));
    CHECK(isPrime(5));
    CHECK(isPrime(2027));
    CHECK(!isPrime(2027*2029)); //This talks about me eating pizza 
    }
}

TEST_CASE("testing the gcd() function", "[5 point]")
{
    {
    INFO("This test checks the gcd() function");
    CHECK(gcd(10,15) == 5);
    CHECK(gcd(11,19) == 1);
    CHECK(gcd(42,35) == 7);
    CHECK(gcd(15,15) == 15);
    }
}

TEST_CASE("testing the lcm() function", "[5 point]")
{
    {
    INFO("This test checks the lcm() function");
    CHECK(lcm(10,15) == 30);
    CHECK(lcm(11,19) == 209);
    CHECK(lcm(42,35) == 210);
    CHECK(lcm(15,15) == 15);
    }
}

TEST_CASE("testing the sumOfDigits() function", "[5 point]")
{
    {
    INFO("This test checks the sumOfDigits() function");
    CHECK(sumOfDigits(0) == 0);
    CHECK(sumOfDigits(1) == 1);
    CHECK(sumOfDigits(12) == 3);
    CHECK(sumOfDigits(123) == 6);
    CHECK(sumOfDigits(1234) == 10);
    }
}

TEST_CASE("testing the reverseNumber() function", "[5 point]")
{
    {
    INFO("This test checks the reverseNumber() function");
    CHECK(reverseNumber(0) == 0);
    CHECK(reverseNumber(1) == 1);
    CHECK(reverseNumber(-1) == -1);
    CHECK(reverseNumber(12) == 21);
    CHECK(reverseNumber(-12) == -21);
    CHECK(reverseNumber(123) == 321);
    CHECK(reverseNumber(-123) == -321);
    CHECK(reverseNumber(1234) == 4321);
    }
}

TEST_CASE("testing the countDigits() function", "[5 point]")
{
    {
    INFO("This test checks the countDigits() function");
    CHECK(countDigits(0) == 1);
    CHECK(countDigits(1) == 1);
    CHECK(countDigits(-1) == 1);
    CHECK(countDigits(12) == 2);
    CHECK(countDigits(-12) == 2);
    CHECK(countDigits(123) == 3);
    CHECK(countDigits(-123) == 3);
    CHECK(countDigits(1234) == 4);
    }
}

TEST_CASE("testing the isArmstrong() function", "[10 point]")
{
    {
    INFO("This test checks the isArmstrong() function");
    CHECK(isArmstrong(5));
    CHECK(!isArmstrong(10));
    CHECK(isArmstrong(153));
    CHECK(isArmstrong(370));
    CHECK(isArmstrong(371));
    CHECK(isArmstrong(407));
    CHECK(!isArmstrong(372));
    }
}

TEST_CASE("testing the fibonacci() function", "[10 point]")
{
    {
    INFO("This test checks the fibonacci() function");
    CHECK(fibonacci(1) == 1);
    CHECK(fibonacci(2) == 1);
    CHECK(fibonacci(3) == 2);
    CHECK(fibonacci(4) == 3);
    CHECK(fibonacci(5) == 5);
    CHECK(fibonacci(6) == 8);
    CHECK(fibonacci(7) == 13);
    }
}

TEST_CASE("testing the numberOfDivisors() function", "[10 point]")
{
    {
    INFO("This test checks the numberOfDivisors() function");
    CHECK(numberOfDivisors(1) == 0);
    CHECK(numberOfDivisors(2) == 1);
    CHECK(numberOfDivisors(3) == 1);
    CHECK(numberOfDivisors(4) == 2);
    CHECK(numberOfDivisors(20) == 5);
    CHECK(numberOfDivisors(19) == 1);
    }
}
TEST_CASE("testing the isPerfect() function", "[10 point]")
{
    {
    INFO("This test checks the isPerfect() function");
    CHECK(!isPerfect(1));
    CHECK(!isPerfect(2));
    CHECK(isPerfect(6));
    CHECK(!isPerfect(20));
    CHECK(isPerfect(28));
    }
}

TEST_CASE("testing the isPalindrome() function", "[10 point]")
{
    {
    INFO("This test checks the isPalindrome() function");
    CHECK(isPalindrome(1));
    CHECK(isPalindrome(11));
    CHECK(isPalindrome(151));
    CHECK(isPalindrome(12321));
    CHECK(!isPalindrome(122));
    CHECK(isPalindrome(1221));
    }
}
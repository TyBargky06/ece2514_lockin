#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "functions.h"

// UNCOMMENT TEST CASES BELOW AS YOU COMPLETE EACH FUNCTION IN functions.cpp


TEST_CASE("testing encrypt() and decrypt() functions", "[20 points]") {
    {
        INFO("Empty string stays empty");
        CHECK(encrypt("") == "");
        CHECK(decrypt("") == "");
    }

    {
        INFO("full lowercase alphabet is reversed");
        CHECK(encrypt("abcdefghijklmnopqrstuvwxyz") == "zyxwvutsrqponmlkjihgfedcba");
        CHECK(decrypt("zyxwvutsrqponmlkjihgfedcba") == "abcdefghijklmnopqrstuvwxyz");
    }

    {
        INFO("non-letter characters remain unchanged and spaces/punctuation preserved");
        CHECK(encrypt("hello world!") == "svool dliow!");
        CHECK(decrypt("svool dliow!") == "hello world!");
    }

    {
        INFO("round-trip: decrypt(encrypt(s)) == s");
        std::string s = "abc xyz, 123!";
        CHECK(decrypt(encrypt(s)) == s);
    }
}




TEST_CASE("testing approximateMachineEpsilon()", "[20 point]") {
    {
        INFO("returned value is positive and at most 1 for typical delta in (0,1)");
        double e = approximateMachineEpsilon(1.0, 0.5);
        CHECK(e > 0.0);
        CHECK(e <= 1.0);
    }

    {
        INFO("epsilon is the first geometric step that becomes too small to change x");
        double x = 5.0;
        double delta = 0.5;
        double eps = approximateMachineEpsilon(x, delta);

        // by definition the returned eps should no longer change x
        CHECK(x + delta * eps == x);
        // but the previous step (eps / delta) should still change x
        CHECK(x + delta*(eps / delta) != x);
       
        x = 1.0;
        delta = 0.9;
        eps = approximateMachineEpsilon(x, delta);

        // by definition the returned eps should no longer change x
        CHECK(x + delta * eps == x);
        // but the previous step (eps / delta) should still change x
        CHECK(x + delta*(eps / delta) != x);
    }

}


TEST_CASE("testing isAmicable()", "[20 point]") {
    {
        INFO("classic amicable pair 220 & 284 should be amicable");
        CHECK(isAmicable(220, 284));
        CHECK(isAmicable(284, 220));
    }

    {
        INFO("another known amicable pair 1184 & 1210");
        CHECK(isAmicable(1184, 1210));
        CHECK(isAmicable(1210, 1184));
    }

    {
        INFO("non-amicable numbers return false");
        CHECK(!isAmicable(1234, 1678));
    }

    {
        INFO("perfect numbers (equal inputs) are not considered amicable");
        CHECK(!isAmicable(6, 6));
    }

    {
        INFO("edge cases: zero and negatives are not amicable");
        CHECK(!isAmicable(0, 0));
        CHECK(!isAmicable(-1, -1));
    }
}




// TEST_CASE("testing convertToPigLatin()", "[20 point]") {
//     {
//         INFO("words that start with a vowel get 'way' appended");
//         CHECK(convertToPigLatin("elephant") == "elephantway");
//         CHECK(convertToPigLatin("apple") == "appleway");
//     }

//     {
//         INFO("words that start with consonant clusters move cluster and add 'ay'");
//         CHECK(convertToPigLatin("tradition") == "aditiontray");
//         CHECK(convertToPigLatin("string") == "ingstray");
//     }

//     {
//         INFO("single-letter and no-vowel cases");
//         CHECK(convertToPigLatin("a") == "away");
//         CHECK(convertToPigLatin("x") == "xay");
//         CHECK(convertToPigLatin("") == "");
//     }

//     {
//         INFO("additional single-word edge cases");
//         CHECK(convertToPigLatin("rhythm") == "rhythmay");          // no standard vowel
//         CHECK(convertToPigLatin("c++") == "c++ay");               // non-alpha characters treated as part of word
//         CHECK(convertToPigLatin("yellow") == "ellowyay");         // 'y' is NOT a vowel here
//         CHECK(convertToPigLatin("glove") == "oveglay");          // multi-letter consonant cluster
//         CHECK(convertToPigLatin("aerate") == "aerateway");       // vowel start with consecutive vowels
//     }
// }

// TEST_CASE("testing findDistinctPowers()", "[20 point]") {
//     {
//         INFO("small ranges");
//         CHECK(findDistinctPowers(2) == 1);
//         CHECK(findDistinctPowers(3) == 4);
//         CHECK(findDistinctPowers(4) == 8);
//         CHECK(findDistinctPowers(5) == 15);
//         CHECK(findDistinctPowers(6) == 23);
//         CHECK(findDistinctPowers(10) == 69);
//     }
// }


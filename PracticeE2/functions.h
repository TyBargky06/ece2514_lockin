#ifndef FUNCTIONS_H // Include this header only once per source file.
#define FUNCTIONS_H // Mark this header as included.

#include <string> // Provide std::string.
#include <vector> // Provide std::vector.

// Problem 1: Counting Halvings.
// Topics: integers, while loops, counters, integer division.
// Given a positive integer, count divisions by 2 until it becomes 0.
// Count the final division from 1 to 0.
// Example: 8 -> 4 -> 2 -> 1 -> 0; return 4.
int countHalvings(int number); // Declare a function that returns the division count.

// Problem 2: Leap Year.
// Topics: Boolean expressions, remainder, conditions.
// Return true if the year is divisible by 4, except century years must also be divisible by 400.
// Examples: 2024 -> true; 1900 -> false; 2000 -> true.
bool isLeapYear(int year); // Declare a function that returns whether the year is a leap year.

// Problem 3: Is Sorted.
// Topics: vectors, indexing, loops, comparisons, const references.
// Return true only when every number is strictly greater than the previous number.
// Empty vectors return false; equal neighboring numbers return false.
// Examples: {1, 3, 5} -> true; {1, 1, 5} -> false.
bool isSorted(const std::vector<int>& values); // Read the original vector without copying or changing it.

// Problem 4: Convert to Letter.
// Topics: characters, conditions, input validation.
// Convert a score from 0 through 100 to A, B, C, D, or F.
// A: 90–100; B: 80–89; C: 70–79; D: 60–69; F: 0–59.
// Return 'I' for a score below 0 or above 100.
char convertToLetter(int score); // Declare a function that returns one character.

// Problem 5: Repeat String.
// Topics: strings, concatenation, for loops.
// Return a new string containing the input string repeated the requested number of times.
// Zero or negative repetitions return an empty string.
// Example: "Hi", 3 -> "HiHiHi".
std::string repeatString(std::string text, int times); // Declare a function that returns a new string.

// Problem 6: Compare Numbers.
// Topics: conditions, subtraction, addition.
// If the first integer is greater than the second, return first minus second.
// Otherwise, return their sum.
// Examples: 8, 3 -> 5; 3, 8 -> 11.
int compareNumbers(int first, int second); // Declare a function that returns the calculated integer.

// Problem 7: Increment Numbers.
// Topics: vectors, references, range-based loops, in-place changes.
// Increase every integer in the original vector by 1.
// Example: {2, -1, 5} becomes {3, 0, 6}.
void incrementNumbers(std::vector<int>& values); // Change the original vector and return no value.

// Problem 8: Remove Consecutive Duplicates.
// Topics: strings, indexing, loops, adjacent comparisons.
// Return a new string with each consecutive run of equal characters reduced to one character.
// Nonconsecutive repeated characters remain.
// Example: "aaabbbaccc" -> "abac".
std::string removeConsecutiveDuplicates(std::string text); // Declare a function that returns the modified copy.

#endif // End the header guard.
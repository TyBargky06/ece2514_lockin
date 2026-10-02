#include <iostream> // Provide std::cout for terminal output.
#include "functions.h" // Make all eight function declarations available to main.

int main() { // Start program execution.
    std::cout << std::boolalpha; // Print Boolean results as true/false instead of 1/0.

    // Problem 1: Counting Halvings.
    int startingNumber = 8; // Store the number that will be repeatedly halved.
    int halvings = countHalvings(startingNumber); // Call the function and store its return value.
    std::cout << "Halvings of 8: " << halvings << '\n'; // Print 4.
    std::cout << "Original number: " << startingNumber << '\n'; // Print 8 because the function received a copy.

    // Problem 2: Leap Year.
    std::cout << "2024 leap year: " << isLeapYear(2024) << '\n'; // Print true for a normal leap year.
    std::cout << "1900 leap year: " << isLeapYear(1900) << '\n'; // Print false for this century year.
    std::cout << "2000 leap year: " << isLeapYear(2000) << '\n'; // Print true because 2000 is divisible by 400.

    // Problem 3: Is Sorted.
    std::vector<int> increasing = {1, 3, 5}; // Create a strictly increasing vector.
    std::vector<int> repeated = {1, 1, 5}; // Create a vector with equal neighboring values.
    std::vector<int> emptyValues = {}; // Create an empty vector.
    std::cout << "{1, 3, 5} sorted: " << isSorted(increasing) << '\n'; // Print true.
    std::cout << "{1, 1, 5} sorted: " << isSorted(repeated) << '\n'; // Print false.
    std::cout << "Empty vector sorted: " << isSorted(emptyValues) << '\n'; // Print false.

    // Problem 4: Convert to Letter.
    std::cout << "Score 95: " << convertToLetter(95) << '\n'; // Print A.
    std::cout << "Score 82: " << convertToLetter(82) << '\n'; // Print B.
    std::cout << "Score 74: " << convertToLetter(74) << '\n'; // Print C.
    std::cout << "Score 60: " << convertToLetter(60) << '\n'; // Print D.
    std::cout << "Score 59: " << convertToLetter(59) << '\n'; // Print F.
    std::cout << "Score 101: " << convertToLetter(101) << '\n'; // Print I.

    // Problem 5: Repeat String.
    std::string originalText = "Hi"; // Store the string to repeat.
    std::string repeatedText = repeatString(originalText, 3); // Store the new repeated string.
    std::cout << "Repeated text: " << repeatedText << '\n'; // Print HiHiHi.
    std::cout << "Zero repeats: [" << repeatString(originalText, 0) << "]\n"; // Print empty brackets.

    // Problem 6: Compare Numbers.
    std::cout << "Compare 8 and 3: " << compareNumbers(8, 3) << '\n'; // Print 5 because 8 is greater than 3.
    std::cout << "Compare 3 and 8: " << compareNumbers(3, 8) << '\n'; // Print 11 because 3 is not greater than 8.
    std::cout << "Compare 4 and 4: " << compareNumbers(4, 4) << '\n'; // Print 8 because equal numbers use addition.

    // Problem 7: Increment Numbers.
    std::vector<int> numbers = {2, -1, 5}; // Create the vector that will be changed.
    incrementNumbers(numbers); // Modify numbers directly; this function returns no value.
    std::cout << "Incremented vector: "; // Print a label before the vector elements.
    for (int number : numbers) { // Visit each updated element for printing.
        std::cout << number << ' '; // Print the current element followed by a space.
    } // End the printing loop.
    std::cout << '\n'; // Move to the next output line after printing 3 0 6.

    // Problem 8: Remove Consecutive Duplicates.
    std::string duplicates = "aaabbbaccc"; // Store a string containing consecutive duplicate characters.
    std::string cleaned = removeConsecutiveDuplicates(duplicates); // Store the returned string.
    std::cout << "Without consecutive duplicates: " << cleaned << '\n'; // Print abac.
    std::cout << "Original string: " << duplicates << '\n'; // Print aaabbbaccc because the original was not changed.
    std::cout << "Empty input: [" << removeConsecutiveDuplicates("") << "]\n"; // Print empty brackets.

    return 0; // End the program successfully.
} // End main.


// g++ -std=c++17 main.cpp functions.cpp -o main.exe
// .\main.exe
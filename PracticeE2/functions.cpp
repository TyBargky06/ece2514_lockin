#include "functions.h" // Load the declarations and required string/vector headers.

int countHalvings(int number) { // Define the function that counts divisions by 2.
    int count = 0; // Start with zero divisions performed.
    while (number > 0) { // Continue while the number has not reached zero.
        number = number / 2; // Divide by 2; integer division discards the fractional part.
        count++; // Count this division, including the final division to zero.
    } // End the loop.
    return count; // Send the number of divisions back to the caller.
} // End countHalvings.

bool isLeapYear(int year) { // Define the function that checks the leap-year rules.
    if (year % 400 == 0) { // Check whether the year is divisible by 400.
        return true; // A year divisible by 400 is a leap year.
    } // End the divisible-by-400 check.
    if (year % 100 == 0) { // Check for a century year not handled above.
        return false; // A century year not divisible by 400 is not a leap year.
    } // End the century-year check.
    return year % 4 == 0; // Other years are leap years exactly when divisible by 4.
} // End isLeapYear.

bool isSorted(const std::vector<int>& values) { // Define the strictly increasing vector check.
    if (values.empty()) { // Check whether the vector contains no elements.
        return false; // The problem requires false for an empty vector.
    } // End the empty-vector check.
    for (std::size_t i = 1; i < values.size(); i++) { // Start at the second element and visit the remaining elements.
        if (values[i] <= values[i - 1]) { // Compare the current element with its immediate predecessor.
            return false; // Equal or decreasing values violate strictly increasing order.
        } // End the neighboring-element check.
    } // End the loop.
    return true; // All comparisons passed; a one-element vector also reaches this return.
} // End isSorted.

char convertToLetter(int score) { // Define the function that converts a score to a letter.
    if (score < 0 || score > 100) { // Check whether the score is outside the valid range.
        return 'I'; // Return the invalid-score marker.
    } // End the validation check.
    if (score >= 90) { // Check the highest grade range first.
        return 'A'; // Return A for scores from 90 through 100.
    } // End the A check.
    if (score >= 80) { // Scores of 90 or higher already returned, so this checks 80 through 89.
        return 'B'; // Return B.
    } // End the B check.
    if (score >= 70) { // Scores of 80 or higher already returned, so this checks 70 through 79.
        return 'C'; // Return C.
    } // End the C check.
    if (score >= 60) { // Scores of 70 or higher already returned, so this checks 60 through 69.
        return 'D'; // Return D.
    } // End the D check.
    return 'F'; // Any remaining valid score is below 60.
} // End convertToLetter.

std::string repeatString(std::string text, int times) { // Define the function that repeats the input string.
    std::string result = ""; // Start with an empty output string.
    for (int i = 0; i < times; i++) { // Run once per repetition; nonpositive times cause zero iterations.
        result += text; // Append one complete copy of text to the output.
    } // End the repetition loop.
    return result; // Return the completed string.
} // End repeatString.

int compareNumbers(int first, int second) { // Define the calculation using two integers.
    if (first > second) { // Check whether the first number is greater.
        return first - second; // Return the difference when the condition is true.
    } // End the comparison check.
    return first + second; // Return the sum when the first number is smaller or equal.
} // End compareNumbers.

void incrementNumbers(std::vector<int>& values) { // Define the function that changes the caller's vector.
    for (int& number : values) { // Make number a reference to each actual vector element.
        number++; // Increase the current element in the original vector by 1.
    } // End the loop.
} // End incrementNumbers; void functions do not need to return a value.

std::string removeConsecutiveDuplicates(std::string text) { // Define the function that collapses adjacent duplicates.
    if (text.empty()) { // Check for an empty input before accessing the first character.
        return ""; // Return an empty string for an empty input.
    } // End the empty-string check.
    std::string result = ""; // Start with an empty output string.
    result += text[0]; // Keep the first character of the input.
    for (std::size_t i = 1; i < text.size(); i++) { // Visit each character after the first.
        if (text[i] != text[i - 1]) { // Check whether this character differs from the preceding input character.
            result += text[i]; // Keep the character because it starts a new run.
        } // End the character comparison.
    } // End the loop.
    return result; // Return the string with consecutive duplicates removed.
} // End removeConsecutiveDuplicates.
#include "functions.h"                        // Includes our function declarations
#include <string>                             // Gives us access to std::string

bool validBase(int base) {                    // Function that checks whether a base is valid
    if(base < 2 || base > 10) {               // Check if the base is outside the allowed range
        return false;                         // Return false because the base is invalid
    }                                         // End the if statement

    return true;                              // Return true because the base is valid
}                                             // End validBase()


bool validNumber(std::string input, int base) { // Function that checks every digit in the input
    if(input.empty()) {                       // Check if the user entered an empty string
        return false;                         // An empty number is invalid
    }                                         // End the if statement

    for(std::size_t i = 0; i < input.size(); ++i) { // Go through every character in the string
        if(input[i] < '0' || input[i] > '9') { // Check if the character is not a digit
            return false;                     // Return false because the character is invalid
        }                                     // End the if statement

        int digit = input[i] - '0';           // Convert the character digit into an integer

        if(digit >= base) {                   // Check if this digit is too large for the given base
            return false;                     // Return false because the digit cannot exist in this base
        }                                     // End the if statement
    }                                         // End the for loop

    return true;                              // Every digit passed the checks
}                                             // End validNumber()


int toDecimal(std::string input, int base) {  // Function that converts the input number to decimal
    int decimal = 0;                          // Start the decimal value at zero

    for(std::size_t i = 0; i < input.size(); ++i) { // Go through each digit from left to right
        int digit = input[i] - '0';           // Convert the current character into an integer
        decimal = decimal * base + digit;     // Shift the old value one place and add the new digit
    }                                         // End the for loop

    return decimal;                           // Return the completed decimal value
}                                             // End toDecimal()


std::string fromDecimal(int number, int base) { // Function that converts decimal into another base
    if(number == 0) {                         // Check the special case where the number is zero
        return "0";                           // Zero is represented as "0" in every allowed base
    }                                         // End the if statement

    std::string result = "";                  // Create an empty string for the converted number

    while(number > 0) {                       // Keep converting until nothing remains
        int remainder = number % base;        // Find the next digit using the remainder
        char digit = static_cast<char>(remainder + '0'); // Convert the integer digit into a character
        result = digit + result;              // Put the new digit at the front of the result
        number = number / base;               // Remove the digit that we just processed
    }                                         // End the while loop

    return result;                            // Return the converted string
}                                             // End fromDecimal()


std::string convertBase(std::string input, int inputBase, int outputBase) { // Full conversion function
    if(!validBase(inputBase)) {               // Check whether the input base is valid
        return "Error";                       // Return an error if the input base is invalid
    }                                         // End the if statement

    if(!validBase(outputBase)) {              // Check whether the output base is valid
        return "Error";                       // Return an error if the output base is invalid
    }                                         // End the if statement

    if(!validNumber(input, inputBase)) {      // Check whether the input number matches its base
        return "Error";                       // Return an error if one of the digits is invalid
    }                                         // End the if statement

    int decimal = toDecimal(input, inputBase);// First convert the input number into decimal
    std::string result = fromDecimal(decimal, outputBase); // Then convert decimal into the output base

    return result;                            // Return the final converted number
}                                             // End convertBase()
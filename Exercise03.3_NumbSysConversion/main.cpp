#include <iostream>                           // Gives us std::cout and std::cin
#include <string>                             // Gives us std::string
#include "functions.h"                        // Gives main access to our functions

int main() {                                  // Start of the program
    std::string input;                        // Stores the number entered by the user
    int inputBase;                            // Stores the base of the input number
    int outputBase;                           // Stores the base we want to convert to

    std::cout << "Enter the number: ";        // Ask the user for the number
    std::cin >> input;                        // Read the number as a string

    std::cout << "Enter the input base: ";    // Ask the user for the original base
    std::cin >> inputBase;                    // Store the original base

    std::cout << "Enter the output base: ";   // Ask the user for the desired base
    std::cin >> outputBase;                   // Store the desired base

    std::string result = convertBase(input, inputBase, outputBase); // Perform the conversion

    if(result == "Error") {                   // Check whether something was invalid
        std::cout << "Error: invalid input." << std::endl; // Print the required error message
    }                                         // End the if statement
    else {                                    // Run this when the conversion was successful
        std::cout << "Converted number: " << result << std::endl; // Display the answer
    }                                         // End the else statement

    return 0;                                 // End the program successfully
}                                             // End main()
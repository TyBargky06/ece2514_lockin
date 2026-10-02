#ifndef FUNCTIONS_H                           // Start the header guard
#define FUNCTIONS_H                           // Define the header guard

#include <string>                             // Gives us access to std::string

bool validBase(int base);                     // Checks whether a base is between 2 and 10
bool validNumber(std::string input, int base);// Checks whether every digit is valid for the input base
int toDecimal(std::string input, int base);   // Converts the input string from its base to decimal
std::string fromDecimal(int number, int base);// Converts a decimal number to the output base
std::string convertBase(std::string input, int inputBase, int outputBase); // Performs the full conversion

#endif                                        // End the header guard
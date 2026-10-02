#ifndef FUNCTIONS_H // Prevents this header file from being included multiple times
#define FUNCTIONS_H // Defines the header guard 
#include <string> // Lets us use the std::string type
#include <vector> // Lets us use the std::vector type

void toLowerCase(std::string& str); // Declares a function to convert a string to lowercase/ Function that changes a string to all lowercase letters
bool isDuplicate(const std::vector<std::string>& dictionary, const std::string& word); // Declares a function to check if a string is a duplicate in a vector/ already in dictionary 
std::vector<std::string> createDictionary(); // Creates and returns a dictionary vector of strings 
#endif // FUNCTIONS_H // Ends the header guard
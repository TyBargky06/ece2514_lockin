#include <iostream>  // Gives us std::cout and std::cin
#include "functions.h" // Gives main.cpp access to createDictionary()

// TO DO

int main()
{
    std::vector<std::string> dictionary = createDictionary(); // Creates the dictionary and stores it in the returned vector 
    for(const std::string& word : dictionary) { // Goes through every word stored in the dictionary 
        std::cout<<word<<'\n'; //prints the current word
    }
    return 0;
}
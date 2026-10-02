#include "functions.h" // Includes the header file for the functions being implemented & gives this file access to the function declared in functions.h
#include <cctype> // Gives us std::tolowerCase() and other character handling functions
#include <iostream> //Gives us std::cout and std::cin

void toLowerCase(std::string& str) { // Receives the original string by reference to modify it 
    for(char& letter : str) //Goes through every character in the string one at a time 
    {
        letter = std::tolower(letter); // Converts the current character to lowercase
    }
}
bool isDuplicate(const std::vector<std::string>& dictionary, const std::string& word) { // Checks whether word is already in dictionary
    for(const std::string& currentWord : dictionary){  // Goes through every word currently stored in the dictionary
        if (currentWord == word) { // Checks whether the current dictionary word matches the new word 
            return true; // The word is a duplicate and matches an existing word in the dictionary (Found)
        }
    }
    return false; // The word is not a duplicate (Not Found)

}

std::vector<std::string> createDictionary() { // Creates and returns a dictionary vector of strings
    std::vector<std::string> dictionary; // Creates an empty vector that will store our words 
    std::string word; // Stores each word as it is read from input/ each word entered by the user
    std::cout << "Enter words separarted by spaces. Enter . to stop: " ; //Prompts the user 
    
    while(std::cin >> word){ //Countinues reading one word at a time
        if(word=="."){ // Checks the user entered the stopping symbol 
            break; // Immediately exit the loop when the stopping symbol is encountered
        }
        toLowerCase(word); // Converts the word to lowercase before adding it to the dictionary
        if(!isDuplicate(dictionary, word)){ // Adds the word only if it is NOT already in the dictionary
            dictionary.push_back(word); // Adds the word to the dictionary if it's not a duplicate
        }

}
    return dictionary;// Sends the completed vector back to whoever called this funcion 
}
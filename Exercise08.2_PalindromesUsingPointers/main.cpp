
#include "functions.h"
#include <iostream> 



int main(){


    const char word[] = "racecar";
    int size = sizeof(word) - 1; 

    const char word1[] = "tesla";
    int size1 = sizeof(word1) - 1; 

    //Array Function
    std::cout << std::boolalpha<< isPalindromeWArrays(word, size) << std::endl;
    std::cout << std::boolalpha<< isPalindromeWArrays(word1, size1) << std::endl;
    //Pointer Function 
    std::cout << std::boolalpha << isPalindromeWPointers(word, word + size - 1) << std::endl;
    std::cout << std::boolalpha << isPalindromeWPointers(word1, word1 + size1 - 1) << std::endl;


    //std::boolalpha allows me to convert 0 -> false and 1 -> true when printing 


    return 0; 
}
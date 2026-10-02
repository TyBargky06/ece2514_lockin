#include "functions.h"                                                              // Includes the function declarations

int findOdd(const std::vector<int>& vec) { // Finds the number occurring an odd number of times
    int result = 0;  // Stores the XOR result

    for(int number : vec) {   // Goes through every number in the vector
        result = result ^ number; // Equal pairs cancel each other using XOR
    }

    return result; // Returns the number occurring an odd number of times
}

std::vector<int> vectorUnion(const std::vector<int>& a, const std::vector<int>& b) { // Finds the union of the two vectors
    std::vector<int> result = a;                                                    // Starts the result with all values from vector a

    for(int numberB : b) {  // Goes through every number in vector b
        bool found = false;  // Assumes the number is not already in the result

        for(int numberResult : result) { // Goes through every number currently in the result
            if(numberB == numberResult) {     // Checks if the number is already present
                found = true;  // Records that the number was found
            }
        }

        if(!found) {    // Checks if the number was not found
            result.push_back(numberB);  // Adds the new number to the result
        }
    }

    return result;                                                                  
}

std::vector<int> vectorIntersection(const std::vector<int>& a, const std::vector<int>& b) { // Finds the intersection of the two vectors
    std::vector<int> result;   // Creates an empty result vector

    for(int numberA : a) {   // Goes through every number in vector a
        for(int numberB : b) {     // Goes through every number in vector b
            if(numberA == numberB) {  // Checks if the two numbers match
                result.push_back(numberA);  // Adds the matching number to the result
            }
        }
    }

    return result;                                                            
}
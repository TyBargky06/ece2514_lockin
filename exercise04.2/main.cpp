#include "functions.h"                                                              // Gives main access to our functions
#include <iostream>                                                                 // Lets us print things with cout
#include <vector>                                                                   // Lets us create vectors

int main() {                                   
    std::vector<int> vec = {1, 2, 3, 2, 3, 1, 3};  // Example vector from problem 1

    std::cout << "Odd: " << findOdd(vec) << std::endl;  // Calls findOdd and prints the answer

    std::vector<int> a = {1, 2, 3};   // First vector for the union
    std::vector<int> b = {5, 2, 7};     // Second vector for the union
    std::vector<int> unionResult = vectorUnion(a, b); // Calls the union function and saves the result

    std::cout << "Union: "; // Prints a label for the union
    for(int number : unionResult) {   // Goes through each number returned by the function
        std::cout<<number<< " "; // Prints each number in the union
    }
    std::cout << std::endl; // Moves to the next line

    std::vector<int> c = {5, 6, 2, 1, 4};  // First vector for the intersection
    std::vector<int> d = {7, 9, 4, 2};  // Second vector for the intersection
    std::vector<int> intersectionResult = vectorIntersection(c, d); // Calls intersection and saves the result

    std::cout << "Intersection: ";  // Prints a label for the intersection
    for(int number : intersectionResult) {    // Goes through each matching number
        std::cout << number << " ";  // Prints each number in the intersection
    }
    std::cout << std::endl;   // Moves to the next line

    return 0;               
}                                                        
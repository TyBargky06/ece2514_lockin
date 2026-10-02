#include <iostream> // Allows us to print the results using std::cout
#include "functions.h" // Includes the function declarations and gives main.cpp access to them 

// TO DO

int main()
{
    
    bool productCheck = isOneProuductOfOthers(2, 3, 6); // Example usage of the function
    std::cout << productCheck << '\n'; //Prints the result of the product check (boolean)
    
    double eulerNumber = calculateEulerNumber(10); // Example usage of the function to calculate Euler number with 10 terms
    std::cout << eulerNumber << '\n'; // Prints the calculated Euler number
    
    int powerResult = power(2, 3); // Example usage of the power function
    std::cout << powerResult << '\n'; // Prints the result of 2 raised to the power of 3, which is 8

    return 0;
}
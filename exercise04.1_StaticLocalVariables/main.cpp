#include <iostream>
#include "functions.h"


// TO DO

int main()
{
    std::cout << getCallCount() << '\n';  // First call should print 1
    std::cout << getCallCount() << '\n';  // Second call should print 2
    std::cout << getCallCount() << '\n';  // Third call should print 3

    std::cout << generateID() << '\n';     // Should print 100
    std::cout << generateID() << '\n';     // Should print 101
    std::cout << generateID() << '\n';     // Should print 102

    std::cout << trackMax(5) << '\n';      // Largest seen is 5
    std::cout << trackMax(12) << '\n';     // Largest seen is now 12
    std::cout << trackMax(7) << '\n';      // Largest is still 12
    
    return 0;
}
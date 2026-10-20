// You can use this file to call your functions for basic testing.
// You don't need to make changes in this file.

#include <iostream>
#include <vector>
#include "functions.h"
#include <string>
#include <cctype>

int main()
{
    //1) Min in vector 
    std::vector<int> numbers = {5, 2, 4};
    std::cout << min(numbers) << std::endl;
    //2) Convert to digits to string 
    std::cout << convertDigits(7) << std::endl;
    std::cout << convertDigits(70) << std::endl;

    return 0;
}

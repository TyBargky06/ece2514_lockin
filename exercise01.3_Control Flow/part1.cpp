#include <iostream>


int main()
{
    // Reads 3 integers and checks whether one is the product of the other two. 
    int a, b, c; // stores the three integers entered by the user
    std::cout << "Enter three integers: "; //Displace the input prompt; 
    std::cin >> a >> b >> c; // reads in the 3 integers entered by the user
    int first = b * c; 
    int second = a * c; 
    int third = a * b;
    //int nextline = '\n';
    if (a == first){ // Checks if a is the product of b and c
        std::cout << a << " is the product of " << b << " and " << c << '\n';
    }
    else if (b == second){ // Checks if b is the product of a and c
        std::cout << b << " is the product of " << a << " and " << c << '\n';
    }
    else if (c == third){ // checks if c is the product of a and b 
        std::cout << c << " is the product of " << a << " and " << b << '\n';
    }
    else {
        std::cout << "None of the integers is the product of the other two.\n";
    }

    return 0;
}
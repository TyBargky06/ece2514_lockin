#include <iostream>          // Gives us std::cin and std::cout
#include <iomanip>          // Needed/Provides the std::setprecision() manipulator for writing the sum


int main()
{
    int n; //stores the largest denominator entered by the user
    double factorial = 1.0; //stores the current factorial of n
    double e = 1.0; //starts the eulers approximation at 1 
    std::cout << "Enter the largest denominator for the Euler number approximation series: "; // asks the user to input the largest denominator
    std::cin >> n; // reads the largest denominator from the user
    for(int i = 1;i<=n;i++){
        factorial *= i; // updates the factorial of i and calculates it from the pervious factorial 
        e += 1.0 / factorial; // adds the current term to the approximation of e (1/n!) to the sum)
    }
    std::cout << std::setprecision(15); // Sets the output precision to 15 significant digits
    std::cout << "Approximation of e: " << e << '\n'; // prints the approximation of e


    return 0;
}
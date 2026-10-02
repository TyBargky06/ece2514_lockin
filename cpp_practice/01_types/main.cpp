#include <iostream>   // Gives us std::cout so we can display information in the terminal.
#include <string>   // Gives us the std::string type for handling text.

int main() // Defines main(); execution of our program starts here.
{  
    int age = 30;                                    // Creates an integer variable named age and initializes it with the whole number 30.
    double voltage = 3.5;                            // Creates a double variable named voltage and stores the decimal number 3.5.
    char grade = 'A';                                // Creates a char variable named grade and stores the single character 'A'.
    bool circuitOn = true;                           // Creates a bool variable named circuitOn and stores the Boolean value true.
    std::string major = "Electrical Engineering";    // Creates a string named major and stores a sequence of characters and Uses the string type named string from the C++ standard namespace.

    std::cout << age << '\n';                        // Displays the value stored in age, then moves to a new line.
    std::cout << voltage << '\n';                    // Displays the value stored in voltage, then moves to a new line.
    std::cout << grade << '\n';                      // Displays the character stored in grade, then moves to a new line.
    std::cout << circuitOn << '\n';                  // Displays the Boolean value stored in circuitOn, then moves to a new line and Prints the Boolean numerically, so true normally appears as 1.
    std::cout << major << '\n';                      // Displays the text stored in major, then moves to a new line
    //'\n' means a newline character, which moves the cursor to the next line in the terminal.

    


    return 0; // Ends the program successfully and returns 0 to the operating system.
}
#include <iostream>                                  // Gives us std::cout so we can display values in the terminal.

int main()                                           // Defines main(); execution of the program begins here.
{                                                    // Opens the main function.

    int voltage = 5;                                 // Creates a normal integer variable named voltage with an initial value of 5.
    const int maxVoltage = 12;                       // Creates a constant integer named maxVoltage whose value cannot be changed after initialization.

    std::cout << "Voltage: " << voltage << '\n';     // Displays the current value stored in voltage.
    std::cout << "Maximum: " << maxVoltage << '\n';  // Displays the constant value stored in maxVoltage.

    voltage = 9;                                     // Changes voltage from 5 to 9; this is allowed because voltage is not const.

    std::cout << "New voltage: " << voltage << '\n'; // Displays the new value of voltage.

    return 0;                                        // Ends the program successfully.
}                                                    // Closes the main function.

/*KEY POINTS */
// Constants are declared with the `const` keyword and their value cannot be changed after initialization.
// Attempting to change the value of a constant after initialization will result in a compilation error.
/* KEY POINTS ABOUT LITERALS

A literal is a fixed value written directly into the source code.
Unlike a variable or named constant, a literal does NOT have a name.

Examples:

int age = 30;                       // 30 is an integer literal.
double voltage = 3.5;               // 3.5 is a floating-point literal.
char grade = 'A';                   // 'A' is a character literal.
bool circuitOn = true;              // true is a Boolean literal.
std::string name = "Akil";          // "Akil" is a string literal.

COMMON LITERAL TYPES:

30              -> Integer literal
3.5             -> Floating-point literal
'A'             -> Character literal
"Hello"         -> String literal
true / false    -> Boolean literals

IMPORTANT:
'A' and "A" are NOT the same thing.

'A'             -> char (single character, uses single quotes)
"A"             -> string literal (text, uses double quotes)

VARIABLE vs CONSTANT vs LITERAL:

int x = 5;                          // x is a variable; 5 is an integer literal.
const int y = 10;                   // y is a named constant; 10 is an integer literal.

x = 20;                             // Allowed: x is a normal variable.
y = 20;                             // ERROR: y is const and cannot be reassigned.

MEMORY RULE:

Variable       = named value that CAN change.
Named Constant = named value that CANNOT change after initialization.
Literal        = fixed value written directly in the source code.
const          = keyword used to prevent a variable from being changed after initialization.
int x = 5;
    ↑   ↑
variable literal

const int y = 10;
          ↑   ↑
 named constant
              ↑
            literal
*/





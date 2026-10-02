#include <iostream>                                      // Gives us std::cout so we can display our values.
#include <string>                                        // Gives us std::string for storing text.

int main()                                               // Defines main(); execution of the program begins here.
{                                                        // Opens the main function.

    auto wholeNumber = 10;                               // Compiler sees integer literal 10, so wholeNumber is deduced as int.
    auto decimalNumber = 5.0;                            // Compiler sees floating-point literal 5.0, so decimalNumber is deduced as double.
    auto letter = 'A';                                   // Compiler sees character literal 'A', so letter is deduced as char.
    auto circuitOn = true;                               // Compiler sees Boolean literal true, so circuitOn is deduced as bool.
    auto name = std::string("Akil");                     // Compiler sees a std::string object, so name is deduced as std::string.

    std::cout << wholeNumber << '\n';                    // Displays the int value 10.
    std::cout << decimalNumber << '\n';                  // Displays the double value 5.0.
    std::cout << letter << '\n';                         // Displays the char value A.
    std::cout << circuitOn << '\n';                      // Displays the bool value true as 1 by default.
    std::cout << name << '\n';                           // Displays the string Akil.

    return 0;                                            // Ends the program successfully.
}                                                        // Closes the main function.

/*
TYPE DEDUCTION IN C++

The auto keyword allows the compiler to deduce the type of a variable based on the value assigned to it.
This can make code more readable and maintainable, especially when the type is obvious from the initialization.

Examples:
- auto wholeNumber = 10;          // wholeNumber is deduced as int.
- auto decimalNumber = 5.0;       // decimalNumber is deduced as double.
- auto letter = 'A';              // letter is deduced as char.
- auto circuitOn = true;          // circuitOn is deduced as bool.
- auto name = std::string("Akil"); // name is deduced as std::string.

Example: 

auto x = 5;             // Compiler deduces x as int.
Conceptually, the compiler looks at the initializer and determines the appropriate type for the variable.
auto x = 5;
     ↓
Compiler: "5 is an int."
     ↓
x has type int

| Code                             | Initializer/Expression | Deduced Type  |
| -------------------------------- | ---------------------- | ------------- |
| `auto x = 5;`                    | `5`                    | `int`         |
| `auto x = 5.0;`                  | `5.0`                  | `double`      |
| `auto x = 'A';`                  | `'A'`                  | `char`        |
| `auto x = true;`                 | `true`                 | `bool`        |
| `auto x = std::string("Hello");` | `std::string` object   | `std::string` |
| `auto x = 2 + 3;`                | `int + int`            | `int`         |
| `auto x = 2.0 + 3.0;`            | `double + double`      | `double`      |
| `auto x;`                        | Nothing                | ❌ **ERROR**   |

*/

/*
KEY POINTS: TYPE DEDUCTION

1. Type deduction allows the compiler to determine a variable's type
   from its initializer.

2. The `auto` keyword tells C++ to deduce the variable's type.

3. `auto` does NOT mean the variable has no type.
   The compiler determines a real type at compile time.

4. Examples:
   auto x = 5;                         // x becomes int.
   auto y = 5.0;                       // y becomes double.
   auto letter = 'A';                  // letter becomes char.
   auto power = true;                  // power becomes bool.
   auto name = std::string("Akil");    // name becomes std::string.

5. `auto` requires an initializer:
   auto x = 5;                         // VALID: compiler can deduce int.
   auto x;                             // ERROR: compiler cannot determine the type.

MEMORY RULE:

auto = "Compiler, determine the type for me from this initializer."

The variable still has a specific type after deduction.
*/











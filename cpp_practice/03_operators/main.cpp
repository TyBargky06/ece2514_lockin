#include <iostream>                                  // Gives us std::cout so we can display our results.

int main()                                           // Defines main(); execution of the program begins here.
{                                                    // Opens the main function.

    int x = 10;                                      // Creates integer x and initializes it to 10.
    int y = 3;                                       // Creates integer y and initializes it to 3.

    std::cout << "Addition: " << x + y << '\n';      // Adds x and y, then displays the result.
    std::cout << "Subtraction: " << x - y << '\n';   // Subtracts y from x, then displays the result.
    std::cout << "Multiplication: " << x * y << '\n';// Multiplies x by y, then displays the result.
    std::cout << "Division: " << x / y << '\n';      // Divides integer x by integer y using integer division.
    std::cout << "Remainder: " << x % y << '\n';     // Calculates the remainder left after x is divided by y and x % y    // Calculates the remainder from integer division.

    return 0;                                        // Ends the program successfully.
}                                                    // Closes the main function.

/*
| Expression   | Types             |       Result |
| ------------ | ----------------- | -----------: |
| `10 / 3`     | `int / int`       |          `3` |
| `10.0 / 3`   | `double / int`    | `3.33333...` |
| `10 / 3.0`   | `int / double`    | `3.33333...` |
| `10.0 / 3.0` | `double / double` | `3.33333...` |

10 % 3    // Evaluates to 1 because 1 remains after dividing 10 by 3.

| Expression | Division        | Remainder | `%` Result |
| ---------- | --------------- | --------: | ---------: |
| `10 % 3`   | `10 = 3(3) + 1` |       `1` |        `1` |
| `8 % 2`    | `8 = 2(4) + 0`  |       `0` |        `0` |
| `17 % 5`   | `17 = 5(3) + 2` |       `2` |        `2` |
| `21 % 4`   | `21 = 4(5) + 1` |       `1` |        `1` |


TO check to see if a number is even or odd, you can use the remainder operator. For example, `x % 2 == 0` checks if `x` is even
number % 2 == 0    // Checks whether dividing number by 2 leaves no remainder.

TYPE SAFTEY and CONVERSIONS
x / double(y)

*/
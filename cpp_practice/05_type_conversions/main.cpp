#include <iostream>                                      // Gives us std::cout for displaying results.

int main()                                               // Defines main(); program execution begins here.
{                                                        // Opens the main function.
    //A) Implicit Conversion 
    int wholeNumber = 10;                                // Creates an int containing the integer value 10.
    double decimalNumber = wholeNumber;                  // Implicitly converts the int value 10 into a double value.
    std::cout << wholeNumber << '\n';                    // Displays the original integer value.
    std::cout << decimalNumber << '\n';                  // Displays the value after implicit conversion to double

    //B) Narrowing Conversion
     double voltage = 12.87;                              // Creates a double containing a fractional value.
    int wholeVoltage = voltage;                          // Implicitly converts double to int and discards the fractional portion.
    std::cout << "Original: " << voltage << '\n';        // Displays the original double value.
    std::cout << "Converted: " << wholeVoltage << '\n';   // Displays the integer produced by the narrowing conversion.

    //C) Explicit Conversion
    double decNumber = 12.87;                                      // Creates a double variable containing the decimal value 12.87.
    int explicitConversion = static_cast<int>(decNumber);          // Explicitly converts the double value 12.87 to an int; the decimal portion is discarded.
    std::cout << "Original double: " << decNumber << '\n';         // Displays the original double value: 12.87.
    std::cout << "Converted int: " << explicitConversion << '\n';     // Displays the converted integer value: 12.

    //D) Static Cast for Widening Conversion
    double volt = 12.87;                                             // Creates a double containing the value 12.87.
    int wholeVolt = static_cast<int>(volt);                       // Explicitly converts voltage from double to int; fractional data is discarded.
    std::cout << "Double Volt:  " << volt << '\n';                         // Displays the original double value.
    std::cout << "Integer Volt: " << wholeVolt << '\n';                   // Displays the explicitly converted integer value.
    
    //E) Character - Integer Conversion
    char letter = 'A';                                        // Creates a char containing the character A.

    int characterCode = static_cast<int>(letter);             // Explicitly converts the character's stored numeric value to int.

    std::cout << "Character: " << letter << '\n';             // Displays the character A.
    std::cout << "Numeric value: " << characterCode << '\n';  // Displays the numeric character code associated with A.

    return 0;                                            // Ends the program successfully.
}                                                        // Closes the main function.

/*
TYPE CONVERSIONS IN C++

C++ allows you to convert values from one data type to another.
There are two main types of type conversions:

1. Implicit Conversion (Automatic):
   The compiler automatically converts one type to another when needed.
   Example: int to double, int to float, etc.
   This is safe when converting from a smaller type to a larger type.

2. Explicit Conversion (Cast):
   The programmer explicitly requests a conversion using a cast operator.
   Example: static_cast<double>(wholeNumber)
   This is used when you want to control the conversion or convert between unrelated types.
*/
/*
Widening Conversion:
int → double
int x = 5;            // Stores the integer 5.
double y = x;         // Implicitly converts the value of x from int to double.

Narrowing Conversion:
double → int
double a = 5.9;          // Stores the floating-point value 5.9.
int b = a;               // Explicitly converts the value of a from double to int, truncating the decimal part.
double x = 5.9;       // Stores the floating-point value 5.9.
int y = x;            // Converts 5.9 to int; the fractional portion is lost.

| Conversion     | Category                        | Example    | Possible issue                                         |
| -------------- | ------------------------------- | ---------- | ------------------------------------------------------ |
| `int → double` | Widening                        | `5 → 5.0`  | Usually no meaningful loss for ordinary small integers |
| `char → int`   | Widening in your course example | `'A' → 65` | Numeric character code                                 |
| `double → int` | **Narrowing**                   | `5.9 → 5`  | Fraction lost                                          |
| `int → char`   | **Narrowing**                   | `65 → 'A'` | Value/range concerns                                   |


| Concept                 | Who requests conversion? | Example               | Key Point                    |
| ----------------------- | ------------------------ | --------------------- | ---------------------------- |
| **Implicit conversion** | Compiler                 | `double x = 5;`       | Automatic                    |
| **Explicit conversion** | Programmer               | `static_cast<int>(x)` | Intentional                  |
| **Widening**            | Either                   | `int → double`        | Generally safer direction    |
| **Narrowing**           | Either                   | `double → int`        | May lose information         |
| `double → int`          | —                        | `12.87 → 12`          | Fraction discarded           |
| `char → int`            | —                        | `'A' → 65`            | Gets numeric character value |
| `static_cast<T>(x)`     | Programmer               | `static_cast<int>(x)` | Convert `x` to type `T`      |


double x = 12.87;                       // x is declared as double.
int y = static_cast<int>(x);            // Converts x's VALUE for this expression and stores the resulting int in y.

IMPLICIT = compiler converts automatically.

EXPLICIT = you tell the compiler to convert.

WIDENING = generally moving to a representation with greater capability/range.

NARROWING = information may be lost.

static_cast<NEW_TYPE>(value)
            ↑
       type I want


static_cast<NEW_TYPE>(value)    // Explicitly converts value to NEW_TYPE.
static_cast<double>(x)    // Convert x → double.
static_cast<int>(x)       // Convert x → int.
static_cast<char>(x)      // Convert x → char.
*/
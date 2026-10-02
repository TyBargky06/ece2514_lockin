#include <iostream>                                         // Provides std::cout and std::cin for terminal output and input.

int main()                                                  // Defines main(); execution of the program begins here.
{                                                           // Opens the main function.

    // =====================================================
    // 1. RELATIONAL OPERATIONS
    // =====================================================

    int relationalA = 10;                                   // Creates the first integer used for relational comparisons.
    int relationalB = 5;                                    // Creates the second integer used for relational comparisons.

    std::cout << "\n--- RELATIONAL OPERATIONS ---\n";        // Displays a heading for the relational-operations section.

    std::cout << (relationalA < relationalB) << '\n';        // Checks whether A is less than B; result is false (0).
    std::cout << (relationalA <= relationalB) << '\n';       // Checks whether A is less than or equal to B; result is false (0).
    std::cout << (relationalA > relationalB) << '\n';        // Checks whether A is greater than B; result is true (1).
    std::cout << (relationalA >= relationalB) << '\n';       // Checks whether A is greater than or equal to B; result is true (1).
    std::cout << (relationalA == relationalB) << '\n';       // Checks whether A and B have equal values; result is false (0).
    std::cout << (relationalA != relationalB) << '\n';       // Checks whether A and B have different values; result is true (1).

    bool relationalAnd = (relationalA > 0) && (relationalB > 0); // AND is true only when BOTH conditions are true.
    bool relationalOr = (relationalA > 20) || (relationalB > 0); // OR is true when AT LEAST ONE condition is true.
    bool relationalNot = !(relationalA > relationalB);            // NOT reverses the Boolean result of the condition.

    std::cout << "AND: " << relationalAnd << '\n';          // Displays the result of the logical AND operation.
    std::cout << "OR: " << relationalOr << '\n';            // Displays the result of the logical OR operation.
    std::cout << "NOT: " << relationalNot << '\n';          // Displays the result after logical NOT reverses the condition.


    // =====================================================
    // 2. IF-STATEMENT
    // =====================================================

    int temperature = 0;                                    // Creates a separate integer for the if-statement example.

    std::cout << "\n--- IF STATEMENT ---\n";                 // Displays a heading for the if-statement section.
    std::cout << "Enter the temperature: ";                  // Prompts the user to enter a temperature.
    std::cin >> temperature;                                 // Reads the user's integer input into temperature.

    if (temperature > 80)                                    // Tests whether temperature is greater than 80.
    {                                                        // Opens the block executed when the condition is true.
        std::cout << "It is hot.\n";                         // Executes only when temperature is greater than 80.
    }                                                        // Closes the first if block.
    else if (temperature >= 60)                              // Runs this test only if the first condition was false.
    {                                                        // Opens the else-if block.
        std::cout << "The temperature is comfortable.\n";    // Executes when temperature is between 60 and 80 inclusive.
    }                                                        // Closes the else-if block.
    else                                                     // Executes when all previous conditions were false.
    {                                                        // Opens the else block.
        std::cout << "It is cold.\n";                        // Executes when temperature is below 60.
    }                                                        // Closes the else block.


    // =====================================================
    // 3. SWITCH-STATEMENT
    // =====================================================

    int menuChoice = 0;                                      // Creates a separate integer used by the switch statement.

    std::cout << "\n--- SWITCH STATEMENT ---\n";             // Displays a heading for the switch-statement section.
    std::cout << "Choose 1, 2, or 3: ";                      // Prompts the user to select a menu option.
    std::cin >> menuChoice;                                  // Stores the user's menu selection in menuChoice.

    switch (menuChoice)                                      // Compares menuChoice against the case values below.
    {                                                        // Opens the switch statement.

        case 1:                                              // Executes when menuChoice equals 1.
            std::cout << "You selected option 1.\n";         // Displays the result for case 1.
            break;                                           // Exits the switch so execution does not continue into the next case.

        case 2:                                              // Executes when menuChoice equals 2.
            std::cout << "You selected option 2.\n";         // Displays the result for case 2.
            break;                                           // Exits the switch statement.

        case 3:                                              // Executes when menuChoice equals 3.
            std::cout << "You selected option 3.\n";         // Displays the result for case 3.
            break;                                           // Exits the switch statement.

        default:                                             // Executes when none of the listed cases match.
            std::cout << "Invalid selection.\n";             // Tells the user their selection was not 1, 2, or 3.
            break;                                           // Exits the switch statement.
    }                                                        // Closes the switch statement.


    // =====================================================
    // 4. WHILE-STATEMENT
    // =====================================================

    int whileCounter = 1;                                    // Creates the while-loop counter and initializes it to 1.

    std::cout << "\n--- WHILE STATEMENT ---\n";              // Displays a heading for the while-loop section.

    while (whileCounter <= 5)                                // Continues looping as long as whileCounter is 5 or less.
    {                                                        // Opens the while-loop body.
        std::cout << whileCounter << ' ';                    // Displays the current value of whileCounter.
        ++whileCounter;                                      // Increases whileCounter by 1 after each iteration.
    }                                                        // Returns to the condition and checks it again.

    std::cout << '\n';                                       // Moves terminal output to a new line after the loop finishes.


    // =====================================================
    // 5. FOR-STATEMENT
    // =====================================================

    std::cout << "\n--- FOR STATEMENT ---\n";                // Displays a heading for the for-loop section.

    for (int forCounter = 1; forCounter <= 10; ++forCounter) // Initializes counter; checks condition; increments after each iteration.
    {                                                        // Opens the for-loop body.
        std::cout << forCounter << ' ';                      // Displays the current value of forCounter.
    }                                                        // Ends the iteration and performs ++forCounter.

    std::cout << '\n';                                       // Moves output to a new line after the for loop finishes.

    return 0;                                                // Ends the program and reports successful execution.
}                                                            // Closes the main function.
#include <iostream>                                      // Gives us std::cout for output and std::cin for input.
#include <string>                                        // Gives us std::string so we can store text.

int main()                                               // Defines main(); program execution begins here.
{                                                        // Opens the main function.

    std::string firstName;                               // Creates an empty string variable that will eventually hold the user's name.

    std::cout << "Enter your first name: ";              // Displays a message asking the user to enter their first name.

    //std::cin >> firstName;                               // Reads keyboard input and stores the entered text inside firstName. reads till the first whitespace.
    std::getline(std::cin, firstName);                       // Reads the entire line of input, including spaces, and stores it in firstName.

    std::cout << "Hello, " << firstName << "!\n";        // Displays "Hello," followed by the value stored inside firstName.

    return 0;                                            // Ends the program successfully.
}                                                        // Closes the main function.

//OUTPUT
// std::cout << firstName;    // Sends firstName OUT to the terminal. cout << firstName
  //   ←  (This is a comment explaining the direction of data flow)

  //INPUT
  // std::cin >> firstName;    // Reads input from the keyboard and stores it in firstName. cin >> firstName
  //   →  (This is a comment explaining the direction of data flow) 

  /*
  INPUT                         OUTPUT

std::cin  >>  variable       std::cout  <<  variable

          →                              ←

     INTO variable                 INTO cout
  
  
  
  */


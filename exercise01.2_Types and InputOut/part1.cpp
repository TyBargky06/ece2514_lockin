#include <iostream>                                  // Lets us use std::cout and std::cin for output and input
#include <string>                                    // Lets us use the std::string data type

int main() {                                         // Main function where the program begins
    std::string first_name;                          // Creates a string variable to store the person's first name
    std::string friend_name;                         // Creates a string variable to store another friend's name
    int age;                                         // Creates an integer variable to store the person's age

    std::cout << "Enter the first name of the person you want to write to: "; // Ask the user for the person's name
    std::cin >> first_name;                          // Store the name entered by the user in first_name

    std::cout << "How old are they? ";               // Ask the user for the person's age
    std::cin >> age;                                 // Store the age entered by the user in age

    std::cout << "What is the name of another friend? "; // Ask the user for another friend's name
    std::cin >> friend_name;                         // Store the friend's name in friend_name

    std::cout << "\nDear " << first_name << ",\n";   // Start the letter and print the person's name
    std::cout << "\tHow have you been? I hope everything is going well.\n"; // Print the first sentence with a tab
    std::cout << "School has been keeping me pretty busy lately.\n"; // Print another sentence in the letter
    std::cout << "Hopefully we can catch up sometime soon.\n"; // Print another sentence in the letter

    std::cout << "Have you seen " << friend_name << " lately?\n"; // Ask about the other friend
    std::cout << "I hear you just had a birthday, and you are " // Begin the birthday sentence
              << age << " years old.\n";                // Print the person's age and finish the sentence

    if(age < 12) {                                   // Check if the person's age is less than 12
        std::cout << "Next year, you will be " << age + 1 << "!\n"; // Print their age for next year
    }                                                // End the age less than 12 condition

    if(age == 17) {                                  // Check if the person is exactly 17 years old
        std::cout << "Next year, you will be able to vote.\n"; // Print the voting message
    }                                                // End the age equal to 17 condition

    if(age > 70) {                                   // Check if the person is older than 70
        std::cout << "Are you retired?\n";           // Print a question asking whether they are retired
    }                                                // End the age greater than 70 condition

    std::cout << "\nYours sincerely,\n\n\n";         // Print the closing of the letter with blank lines
    std::cout << "Ty\n";                             // Print the writer's name

    return 0;                                        // End the program successfully
}                                                    // End the main function
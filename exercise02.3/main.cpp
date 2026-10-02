#include "code.h"                                      // Includes the declarations from our code.h file

#include <iostream>                                    // Lets us use std::cout, std::cin, and std::endl
#include <vector>                                      // Lets us use std::vector
#include <random>                                      // Lets us generate random numbers

char GetRandomChoice() {                               // Function that randomly chooses rock, paper, or scissors
    std::vector<char> choices = {'r', 'p', 's'};       // Store the three possible computer choices

    std::random_device rd;                             // Create a random device used to seed the generator
    std::mt19937 gen(rd());                            // Create and seed the Mersenne Twister random number generator
    std::uniform_int_distribution dist{0, 2};          // Generate random integers from 0 through 2

    return choices[dist(gen)];                         // Use a random index to return 'r', 'p', or 's'
}                                                      // End the GetRandomChoice function

int main() {                                           // Main function where the program begins
    char user_choice;                                  // Create a character variable to store the user's choice

    std::cout << "Enter your choice (r for rock, p for paper, or s for scissors): "; // Ask the user for their choice
    std::cin >> user_choice;                           // Store the user's choice in user_choice

    char computer_choice = GetRandomChoice();          // Call the function and store the computer's random choice

    std::cout << "Computer chose: ";                   // Print a message before displaying the computer's choice

    if(computer_choice == 'r') {                       // Check if the computer chose rock
        std::cout << "rock" << std::endl;              // Print rock
    }                                                  // End the rock condition
    else if(computer_choice == 'p') {                  // Check if the computer chose paper
        std::cout << "paper" << std::endl;             // Print paper
    }                                                  // End the paper condition
    else {                                             // Run this if the computer did not choose rock or paper
        std::cout << "scissors" << std::endl;          // Print scissors
    }                                                  // End the computer choice conditions

    int result = playRockPaperScissors(computer_choice, user_choice); // Call the game function and store the result

    if(result == 0) {                                  // Check if the function returned 0 for a draw
        std::cout << "It's a draw!" << std::endl;      // Tell the user the game ended in a draw
    }                                                  // End the draw condition
    else if(result == 1) {                             // Check if the function returned 1 for a user win
        std::cout << "You win!" << std::endl;          // Tell the user they won
    }                                                  // End the user win condition
    else {                                             // Run this if the result was not a draw or user win
        std::cout << "Computer wins!" << std::endl;    // Tell the user that the computer won
    }                                                  // End the result conditions

    return 0;                                          // End the program successfully
}                                                      // End the main function
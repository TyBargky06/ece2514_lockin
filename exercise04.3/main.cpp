#include <iostream> // Lets us read input and print output.
#include <string>   // Lets us store the message as a string.

int main() {
    std::string message; // Stores the message the user enters.
    std::cin >> message; // Reads the message, which has no spaces.

    int num_cols = 1; // Start by checking whether one column is enough.
    while (num_cols * num_cols < message.size()) {
        num_cols++; // Add columns until the square can hold every character.
    }

    int num_rows = num_cols; // Start with the same number of rows as columns.
    while ((num_rows - 1) * num_cols >= message.size()) {
        num_rows--; // Remove a bottom row if it would be completely empty.
    }

    for (int col = 0; col < num_cols; col++) { // Go through the columns from left to right.
        for (int row = 0; row < num_rows; row++) { // Read down the current column.
            int index = col + row * num_cols; // Find this character's position in the message.

            if (index < message.size()) { // The last row might not fill every column.
                std::cout << message[index]; // Print the character if it exists.
            }
        }

        if (col < num_cols - 1) { // Don't add a space after the final column.
            std::cout << ' '; // Separate the encoded groups.
        }
    }

    std::cout << '\n'; // Finish the output line.
    return 0; // End the program.
}
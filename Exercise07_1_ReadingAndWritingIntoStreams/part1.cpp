#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main(){

    std::string filename; // Stores the file name
    char searchChar; // Character we are searching for
    std::string word; // Stores each word from the file
    int count = 0; // Counts matching words

    std::cout<<"Enter text file name: ";
    std::cin>>filename;

    std::cout<<"Enter the search character: ";
    std::cin>>searchChar;

    std::ifstream file(filename); // Opens the text file

    if(!file.is_open()){ // Checks if the file opened
        std::cout<<"File "<<filename<<" not found"<<std::endl;
        return 1;
    }

    searchChar = std::tolower(static_cast<unsigned char>(searchChar)); // Converts search character to lowercase

    while(file>>word){ // Reads the file one word at a time

        for(int i = 0; i < static_cast<int>(word.size()); i++){ // Checks each character

            char currentChar = std::tolower(static_cast<unsigned char>(word[i])); // Converts to lowercase

            if(currentChar == searchChar){ // Checks for a match
                count++; // Counts the word
                break; // Stops checking this word
            }

        }

    }

    std::cout<<count<<" words contain the character '"<<searchChar<<"'"<<std::endl;

    file.close(); // Closes the file

    return 0;
}
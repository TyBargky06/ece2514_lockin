#include <iostream>
#include <sstream>
#include <string>

int main(){

    std::istringstream input("John 25 180"); // Creates input string stream

    std::string name; // Stores the name
    int age = 0; // Stores the age
    double height = 0.0; // Stores the height

    input>>name>>age>>height; // Extracts the three values

    std::ostringstream output; // Creates output string stream

    output<<"Name: "<<name<<"\n"; // Adds name
    output<<"Age: "<<age<<"\n"; // Adds age
    output<<"Height: "<<height<<" centimeters\n"; // Adds height

    output<<name<<" is "<<age<<" years old and "<<height<<" centimeters tall."; // Combines information

    std::string result = output.str(); // Converts stream into a string

    std::cout<<result<<std::endl; // Displays the result for testing

    return 0;
}
/*
Prompt: 
- Accepts two phone numbers from the user.
- Converts letters into their corresponding telephone keypad numbers.
- Removes characters that aren't letters or numbers.
- Stores both the original and converted phone numbers.
- Displays both versions.
- Compares the converted numbers.
- Determines whether they are identical.
Input → Store → Loop → Convert → Store → Display → Compare

*/


#include "functions.h"

#include <iostream>
#include <string>

int main(){

    // Create two PhoneNum objects
    PhoneNum firstNumber;
    PhoneNum secondNumber;


    // Get the first phone number
    std::cout<<"Give me the first number please: ";
    std::getline(std::cin, firstNumber.vanity);


    // Normalize the first phone number
    setNormalization(firstNumber);


    // Display the first phone number
    displayPhoneNum(firstNumber);


    // Get the second phone number
    std::cout<<"Give me the second number please: ";
    std::getline(std::cin, secondNumber.vanity);


    // Normalize the second phone number
    setNormalization(secondNumber);


    // Display the second phone number
    displayPhoneNum(secondNumber);


    // Compare the two normalized numbers
    if(areTwoPhoneNumSame(firstNumber, secondNumber)){
        std::cout<<"They're the same number!"<<std::endl;
    }
    else{
        std::cout<<"They're NOT the same number!"<<std::endl;
    }

    return 0;
}
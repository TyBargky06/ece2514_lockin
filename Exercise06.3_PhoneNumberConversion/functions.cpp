#include "functions.h"

#include <iostream>
#include <cctype>

// Displays the original and normalized phone numbers
void displayPhoneNum(PhoneNum& phone_num){

    std::cout<<"Number = "<<phone_num.vanity;
    std::cout<<"    <"<<phone_num.normalized<<">"<<std::endl;

}

// Converts one character to its corresponding phone keypad digit
char convertToPhoneNum(char ch){

    ch = static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));

    if(ch >= 'A' && ch <= 'C'){
        return '2';
    }
    else if(ch >= 'D' && ch <= 'F'){
        return '3';
    }
    else if(ch >= 'G' && ch <= 'I'){
        return '4';
    }
    else if(ch >= 'J' && ch <= 'L'){
        return '5';
    }
    else if(ch >= 'M' && ch <= 'O'){
        return '6';
    }
    else if(ch >= 'P' && ch <= 'S'){
        return '7';
    }
    else if(ch >= 'T' && ch <= 'V'){
        return '8';
    }
    else if(ch >= 'W' && ch <= 'Z'){
        return '9';
    }

    return ch;
}

// Converts the entire vanity number into its numeric version
void setNormalization(PhoneNum& phone_num){

    phone_num.normalized = "";
    for(int i = 0; i < static_cast<int>(phone_num.vanity.size()); i++){
            char curr_char = phone_num.vanity[i];
            if(std::isalnum(static_cast<unsigned char>(curr_char))){ //std::isalnum() - Checks whether a character is a letter or number 
                char digit = convertToPhoneNum(curr_char);
                phone_num.normalized.push_back(digit);

        }

    }

}

// Compares two normalized phone numbers
bool areTwoPhoneNumSame(PhoneNum a, PhoneNum b){

    if(a.normalized == b.normalized){
        return true;
    }
    else{
        return false;
    }

}
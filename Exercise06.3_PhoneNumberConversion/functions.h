#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

// Struct to store the original and normalized phone numbers
struct PhoneNum{
    std::string vanity;
    std::string normalized;
};
// Function declarations
void displayPhoneNum(PhoneNum& phone_num);
char convertToPhoneNum(char ch);
void setNormalization(PhoneNum& phone_num);
bool areTwoPhoneNumSame(PhoneNum a, PhoneNum b);

#endif
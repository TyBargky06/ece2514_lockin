#include <iostream>
#include "functions.h"
#include <cmath>

int main(){

//1) Max Value 
std:: cout << max(8,3) << std::endl; 

//2) Factorial
std:: cout << factorial(5) << std::endl;

//3) IsEven 
std:: cout << isEven(5) << std::endl;
std:: cout << isEven(220) << std::endl;
std:: cout << isEven(-5) << std::endl;

//4) Average
std:: cout << average(5,4) << std::endl;

//5) isPrime
std:: cout << isPrime(4) << std::endl;
std:: cout << isPrime(7) << std::endl;

//6) gcd 
std:: cout << gcd(12,8) << std::endl;

//7) lcm 
std:: cout << lcm(6,8) << std::endl;

/**
 * 
 * WRITE CODE
    ↓
g++ main.cpp functions.cpp -o main.exe
    ↓
COMPILE + LINK
    ↓
main.exe gets created
    ↓
.\main.exe
    ↓
RUN
    ↓
8
 * 
 I want to run my code in teh TERMINAL 
 cmake --build build
.\build\main.exe

I want to TEST my functions 
cmake --build build
.\build\tests.exe

MANUAL — NO CMAKE
------------------------------
g++ -std=c++17 main.cpp functions.cpp -o main.exe
.\main.exe


CMAKE — COURSE PROJECT
------------------------------

ONE-TIMEcONFIGURATION:
cmake -S . -B build -G "MinGW Makefiles"

EVERY TIME codeCHANGES:
cmake --build build

RUN / to seeOUTPUT:
.\build\main.exe

toTEST:
.\build\tests.exe
 */


    return 0; 
}
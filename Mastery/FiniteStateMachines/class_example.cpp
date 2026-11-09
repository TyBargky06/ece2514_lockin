//Strings are error prone 

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
//RUN CODE: 
/**
 * g++ -std=c++17 -Wall main.cpp -o dma.exe
 * .\dma.exe
 * 
 */
using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;
using namespace std; //// lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself

// we define enum classes before main or in a header file
enum class States { QUARTERS, DIMES, NICKELS, PENNIES, DONE };


int main(){

    //initialize the initial state
    States state = {States::QUARTERS};  //initial state 
    int change = 63; //class example 
    int quarters = 0; 
    int dimes = 0; 
    int nickels = 0; 
    int pennies = 0; 

    while(state != States::DONE){ // FSM - While loop is always best, and needs a switch statements the inlcudes what happens 
    switch(state) // change depending on the state 
    {
    case States::QUARTERS:
        if (change >= 25) {
            change = change - 25;
            quarters++; //counter 
        } 
        else {
            state = States::DIMES;
        }
        break;

        case States::DIMES:
        if (change >= 10) {
            change = change - 10;
            dimes++; //counter 
        } 
        else {
            state = States::NICKELS;
        }
        break;

        case States::NICKELS:
        if (change >= 5) {
            change = change - 5;
            nickels++; //counter 
        } 
        else {
            state = States::PENNIES;
        }
        break;

        case States::PENNIES:
        if (change >= 1) {
            change = change - 1;
            pennies++; //counter 
        } 
        else {
            state = States::DONE;
        }
            break;
            default:
             break;

    }

}
    cout<< quarters << nickels << dimes<< pennies ; 
    return 0; 
}

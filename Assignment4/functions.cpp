#include "functions.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>


std::string encrypt(const std::string& input){

std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
std::string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
std::string result; 

for(int i = 0; i< input.size();i++){
    char characterInput = static_cast<char>(input[i]);
    if((characterInput >= 'a') && (characterInput <= 'z')){
        for(int j = 0; j < alphabet.size(); j++){
            char letterNormABC = static_cast<char>(alphabet[j]);
            if(characterInput == letterNormABC){
                int positionABC = j; 
                result.push_back(reverseAlphabet[positionABC]);
                break; // found the matching letter
            }
        }
    }
    else{
        result.push_back(characterInput);
    }

}
    return result; 
}

std::string decrypt(const std::string& input){

std::string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

std::string result; 

for(int i = 0; i< input.size();i++){
    char characterInput = static_cast<char>(input[i]);
    if((characterInput >= 'a') && (characterInput <= 'z')){
        for(int j = 0; j < reverseAlphabet.size(); j++){
            char letterReverseABC = static_cast<char>(reverseAlphabet[j]);
            if(characterInput == letterReverseABC){
                int positionABC = j; 
                result.push_back(alphabet[positionABC]);
                break; // found the matching letter
            }
        }
    }
    else{
        result.push_back(characterInput);
    }

}
    return result; 
}

double approximateMachineEpsilon(double x, double delta){

    double epsilon = 1.0; 
    while((x + delta * epsilon) != x){
        epsilon = epsilon * delta; 
    }
    return epsilon;
}

bool isAmicable(int int_1, int int_2){
    if ((int_1==int_2) || (int_1<=0)|| (int_2 <= 0)){

        return 0; 
    }
    int sum1 = 0; 
    int sum2 = 0; 

    for(int i = 1; i < int_1 ; i++){
        int candidate = i; 
        int prop_divisor = int_1 % candidate;
        if(prop_divisor == 0){
            sum1 = sum1 + candidate; 
        }
    }
    for(int i = 1; i < int_2; i++){
        int candidate = i; 
        int prop_divisor = int_2 % candidate;
        if(prop_divisor == 0){
            sum2 = sum2 + candidate; 
        }
    }
    //cross checking them 
    if((sum1 == int_2) && (sum2 == int_1)){
            return 1; 
    }      
    else{
            return 0; 
    }
}
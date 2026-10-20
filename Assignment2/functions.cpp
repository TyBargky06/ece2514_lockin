
#include "functions.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>

int min(const std::vector<int>& vec){

    if(vec.empty()){
        return std::numeric_limits<int>::min();
    }

    int minimum = vec[0];
    for(int i = 0; i < vec.size(); i++){
       int current = vec[i]; 
        if(current < minimum){
            minimum = current; 
        }
    }
    return minimum; 
}
std::string convertDigits(int digit){

    if(digit == 0){
        return "zero";
    }
    else if(digit == 1){
        return "one";
    }
    else if(digit == 2){
        return "two";
    }
    else if(digit == 3){
        return "three";
    }
    else if(digit == 4){
        return "four";
    }
    else if(digit == 5){
        return "five";
    }
    else if(digit == 6){
        return "six";
    }
    else if(digit == 7){
        return "seven";
    }
    else if(digit == 8){
        return "eight";
    }
    else if(digit == 9){
        return "nine";
    }
    else{
        return "error";
    }
}
double calculator(double x, char operation, double y){
    if(operation == '+'){
        return x + y; 
    }
    else if(operation == '-'){
        return x - y; 
    }
    else if(operation == '*'){
        return x * y;
    } 
    else 
        return x/y; 
}
int countWords(const std::string& input){
    if (input.empty()){
        return 0; 
    }
    int count = 1; // Starting with the first word
    for(int i = 0; i < input.size(); i++){
        if(input[i] == ' '){
               count++; 
        }
    }
    return count;
}
bool isPalindrome(const std::string& input){
    //left and right is moving through the indexs of the string 
    int left = 0; //is the first index 
    int right = static_cast<int>(input.size()) - 1; //is the last index 
    while(left < right ){

        int lowerCaseLeft = std::tolower(input[left]);
        int lowerCaseRight = std::tolower(input[right]);
        if(lowerCaseLeft != lowerCaseRight){
            return 0; // 0 = false 
        }
        left++;
        right--;
    }
    return 1; // true 
}

void reverseList(std::vector<int>& vec){
    int left = 0; 
    int right = static_cast<int>(vec.size()) -1; 
    while(left < right){
        int temp = vec[left];
        vec[left] = vec[right];
        vec[right] = temp; 
        left++;
        right--; 
    }
}

void capitalizeSentence(std::string& sentence){
    sentence[0] = static_cast<char>(std::toupper(sentence[0])); // capitalizing the first character of the string at index zero 
    for(int i = 0; i < sentence.size(); i++){ //looping through each character of the string
        char current = sentence[i]; /// current index of the string, tracing the sentence 
        if(current == ' '){ // checking to see if current has a space
            int next = i + 1; // calculate the next position without changing i // i++ changes i by adding 1
            sentence[next] = static_cast<char>(std::toupper(sentence[next])); // capitalizing the next character after the current character 

        }

    }
}
std::vector<std::string> splitString(const std::string& input, char delimiter){
   
    std::vector<std::string> result; //created an empty vector 
    std::string current = "";

    if(input.empty()){
        return result;
    }
    for(int i = 0; i < input.size(); i++){
        char character = input[i];
        if(character != delimiter){
            current += character; //adding character to current 
        }
        else{
             result.push_back(current);
            current = "";
        }
    }
    result.push_back(current); // pushing the final word 
    return result; 
}
// std::vector<std::string> uniqueWords(const std::string& input){

//     std::vector<std::string> result; //created an empty vector 
//     std::string current = "";

//     for(int i = 0; i < input.size(); i++){
//         char character = input[i];
//         if(i< input.size() && std::isalpha(character)){ //checking if character is a letter 
//              char lowercaseCharacter = static_cast<char>(std::tolower(input[i]));
//              current += lowercaseCharacter;
//         }
//         if(character == ' '){ // checking if character is not a letter, we finished a word sapces = word finished
//                 bool found = false;
//                 for(int j = 0; j < result.size(); j++){ //searching the entire vector to see if we found current 
//                     if(result[j] == current){
//                         found = true; 
//                     }
//                 }
//                 if(!found && !current.empty()){
//                     result.push_back(current);
//                 }
//                 current = "";
//         }

//     //Checking the final word
//     bool found = false; 
//     for(int a = 0 ; a <result.size(); a++){
//         if(result[a] ==  current){
//             found = true;
//         }
//     }
//     if(!found && !current.empty()){
//         result.push_back(current);
//     }
   
//     }return result; 
// }
// Takes a constant reference to a string named input.
// const = this function will not change the original string.
// & = passes the original string by reference instead of making a copy.
// Returns a vector<string> containing each unique word exactly once.
std::vector<std::string> uniqueWords(const std::string& input){

    std::vector<std::string> result; // Empty vector that will store all unique words.
    std::string current = "";        // Builds one word at a time as we read the input string.

    // i = 0 starts at the first character.
    // i <= input.size() intentionally allows ONE extra iteration.
    // That extra iteration lets us process the final word without needing another loop afterward.
    // i++ moves to the next character after each iteration.
    for(int i = 0; i <= input.size(); i++){

        // First make sure i is still a valid index.
        // isalpha() checks whether the current character is a letter.
        // We check i < input.size() FIRST so we never access past the end of the string.
        if(i < input.size() && std::isalpha(input[i])){

            // tolower() converts uppercase letters to lowercase.
            // Example: 'T' becomes 't'.
            // tolower() returns an int, so static_cast<char> converts the result back to a char.
            char lowercaseCharacter = static_cast<char>(std::tolower(input[i]));

            // Add the lowercase letter onto the word we are currently building.
            // Example: "" -> "t" -> "th" -> "thi" -> "this".
            current += lowercaseCharacter;
        }

        // A word is finished in TWO situations:
        // 1. i == input.size() means we reached the end of the entire string.
        // 2. input[i] == ' ' means we reached the space between two words.
        // The i < input.size() check prevents accessing input[i] during the extra final iteration.
        if(i == input.size() || (i < input.size() && input[i] == ' ')){

            // Only process current if we actually built a word.
            // This prevents an empty string "" from being added to result.
            if(!current.empty()){

                bool found = false; // Assume current is unique until we find a matching word.

                // j = 0 starts at the first word already stored in result.
                // j < result.size() checks every stored word.
                // j++ moves to the next stored word.
                for(int j = 0; j < result.size(); j++){

                    // Compare the stored word at position j with the word we just built.
                    if(result[j] == current){

                        // A matching word already exists, so current is NOT unique.
                        found = true;
                    }
                }

                // !found means found == false.
                // If no matching word was found, current is unique and should be stored.
                if(!found){

                    // Add the completed unique word to the end of the result vector.
                    result.push_back(current);
                }

                // We are finished with this word.
                // Reset current so we can begin building the next word.
                current = "";
            }
        }
    }

    // Return the vector containing all unique lowercase words.
    return result;
}

int mode(const std::vector<int>& vec){

    int modeNumber = vec[0];
    int highestCount = 0;

    for(int i = 0; i < vec.size(); i++){
        int currentNumber = vec[i];
        int currentCount = 0;
        for(int j = 0; j < vec.size(); j++){
            if(vec[j] == currentNumber){
                currentCount++;
            }
        } 
        if(currentCount > highestCount){
            highestCount = currentCount; 
            modeNumber = currentNumber; 
        } 
     else if((currentCount == highestCount) && (currentNumber < modeNumber)){
        modeNumber = currentNumber; 
     }
        
    }
    return modeNumber; 
}

int playCraps(const std::vector<int>& vec){
    // Validate the entire vector -> look at every number in the vector and make sure it is a legal die
    //Value: 1,2,3,4,5, or 6 
    for(int i = 0; i < vec.size(); i++){
        int curr = vec[i];
        if((curr < 1) || (curr > 6)){
            return -1; 
        }
    }
    if(vec.size() < 2){
        return 2;
    }
    int initialSum = vec[0] + vec[1];
    if((initialSum == 7) || (initialSum == 11)){
        return 0; 
    }
    else if((initialSum == 2) || (initialSum == 3) || (initialSum == 12)){
        return 1; 
    }

    int point = initialSum; //index 0 and 1 is done
    int currPosition = 2;
    while(currPosition + 1 < vec.size()){ // ask wherether two dice remains
            int positionNext = currPosition + 1; 
            int currentSum = vec[currPosition] + vec[positionNext];
            if(currentSum == point){
                return 0; 
            }
            if(currentSum == 7){
                return 1; 
            }
            else{
                currPosition = currPosition + 2; 
            }


    }
    
    return 2; 

}
void printPoly(const std::vector<double>& vec){
    double power = static_cast<double>(vec.size()) - 1; 
    bool firstTerm = true; 
    std::cout << "P(x) = ";
    for(int i = 0 ; i < vec.size(); i++){
        double coefficient = vec[i];
        if(coefficient != 0.0){
            if(!firstTerm){
                std::cout<<" + ";
            }
            if(power > 1){
                
                std::cout<< "("<<coefficient<<")" <<"*x^"<<power;
            }
            else if(power == 1){
                std::cout<<"("<<coefficient<<")" <<"*x";
            }
            else{ // power == 0 
                std::cout<<"("<<coefficient<<")"; 
            }
        } 
        firstTerm = false; 
        power--;
    } 
}
double evalPoly(const std::vector<double>& vec, double x){
    double result = 0; 
    double power = static_cast<double>(vec.size()) - 1; 

    for(int i = 0; i< vec.size(); i++){
        double coefficient = vec[i];
        double term = coefficient * std::pow(x,power);
        result = result + term; 
        power--;
    }
    return result; 
}
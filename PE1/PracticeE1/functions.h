#ifndef FUNCTIONS_H // include this header's contents only once
#define FUNCTIONS_H // mark this header as included

#include <vector> // provides std::vector
#include <string> // provides std::string

int findSecondLargest(const std::vector<int>& values); // read a vector and return its second-largest distinct value
std::vector<int> rotateVector(std::vector<int> values, int positions); // receive a vector copy and return a rotated vector
int longestWord(const std::string& text); // read a string and return its longest word length
void removeVowels(std::string& text); // modify the original string without returning a value

#endif 
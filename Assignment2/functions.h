#include <vector>
#include <limits>
#include <string>
#include <cctype>

int min(const std::vector<int>& vec);
std::string convertDigits(int digit);
double calculator(double x, char operation, double y);
int countWords(const std::string& input);
bool isPalindrome(const std::string& input);
void reverseList(std::vector<int>& vec);
void capitalizeSentence(std::string& sentence);
std::vector<std::string> splitString(const std::string& input, char delimiter);
std::vector<std::string> uniqueWords(const std::string& input);
int mode(const std::vector<int>& vec);
int playCraps(const std::vector<int>& vec);
void printPoly(const std::vector<double>& vec);
double evalPoly(const std::vector<double>& vec, double x);
/**
 * 
double                    → returns the calculated answer
evalPoly                  → function name
const std::vector<double>& vec → polynomial coefficients
double x                  → value being plugged in for x
 * 
 * 
 * 
 */
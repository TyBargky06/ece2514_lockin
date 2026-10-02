#include "functions.h"// Gives this file the function declarations

bool isOneProuductOfOthers(int a, int b, int c){
   
    int x = b*c;
    int y = a*c;
    int z = a*b;
    if(a==x){
        return true;
    }
    else if(b == y){
        return true;
    }
    else if(c == z){
        return true;
    }else{
        return false;
    }
}

double calculateEulerNumber(int n){ // Defines the function and calculates the Euler number based on the number of terms n
    double e = 1.0; //Starts with the k = 0 term, which is 1/0! = 1
    double factorial = 1.0; // Initializes the factorial variable and keeps track 
    for(int k = 1; k <= n; k++){ // Loops from 1 through n to calculate each term of the Euler number series
        factorial *= k; // Updates the factorial for the current term
        e += 1.0 / factorial; // Adds the current term to the sum
    }
    return e; // Returns the calculated Euler number back to the caller 
}

int power(int base, int exponent){ // Defines the function 
    int result = 1; // Starts at 1 because multiplying by 1 does not change the value
    for(int i = 0; i < exponent; i++){ // Loops exponent times to multiply the base by itself
        result *= base; // Multiplies the result by the base in each iteration Same as result = result * base
    }
    
    return result; // Returns the final result of base raised to the power of exponent
}
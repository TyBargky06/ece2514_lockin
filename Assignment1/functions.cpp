#include "functions.h"
#include <cmath>


int max (int x, int y){

    if(x > y ){
        return x;
    }
    else
    return y; 
}

int factorial(int n){
    
    int result = 1; 
    int current = 1; 

    if(n == 0)
    return result; 

    if(n > 0){
        while(current <= n) {
            result = result * current; 
            current++; 
        
        }
    }
    return result; 
}

bool isEven(int n){

    int remainder = n%2; 

    if(remainder == 0)
        return true;
    else
        return false;
}

double average(int x, int y){

    int sum = x + y;
    double avg = sum/2.0;
    return avg; 
}
bool isPrime(int n){

    if(n <= 1){
        return false; 
    }

    int divisor = 2; 
    while(divisor < n){
        
        int remainder = n % divisor;
        if(remainder == 0){
            return false; 
        }
        divisor++;
    }
    return true; 
}

int gcd(int x, int y){

    int greatest = 1; 
    int divisor = 1; 
    while((divisor <= x) && (divisor <= y)){
        if( ((x % divisor == 0) && (y % divisor == 0))){

            greatest = divisor; 

        }
        divisor++; 
    }
    return greatest; 
}

int lcm(int x, int y){

    int multiple; 
    if(x > y){
        multiple = x; 
    }
    else{
        multiple = y;
    } 
    
    while((true)){ // If multple divisinle by x and y
        if(((multiple % x == 0) && (multiple % y== 0))){
            return multiple;
        }
        multiple++;

    }
   
}

int reverseNumber(int n){
    int orginal = n; 
    if(orginal < 0 ){
        n = orginal * -1; 
    }
    int reversed = 0; 
    while(n != 0){
        int digit = n % 10; 
        reversed = (reversed * 10) + digit;
        n = n / 10;
    }
    if( orginal < 0){
            reversed = reversed * -1;
        
    } 
    return reversed; 
    
}

int countDigits(int n){
    
    if(n==0){
        return 1;
    }
    if(n < 0 ){
        n = n * -1;
    }
    int count = 0; 
    while(n != 0 ){
        n = n / 10; 
        count++; 
    }
    return count; 
}

int sumOfDigits(int n){
    if (n == 0){
        n = n * -1;
    }
    int sum = 0; 
    int digit;
    while(n!=0){
        digit = n % 10;
        sum = sum + digit; 
        n = n / 10;
    }

    return sum; 
}

bool isArmstrong(int n){

    int original = n;
    int digits_exponent = countDigits(n);  // number of digits n has 
    int sum = 0; 
    while(n!=0){
        int digit_base = n % 10; // Grab last digit 
        int poweredDigit = static_cast<int>(std::pow(digit_base,digits_exponent)); 
        sum = sum + poweredDigit; // add powered digit
        n = n/10; // Remove last digit 
    }
    if(sum == original){
        return 1;
    }
    return 0; 

    /*
    std::pow()           → calculates the exponent, returns double
    static_cast<int>()   → explicitly converts that result to int
    
    */

}

int fibonacci(int n){

    if(n ==1){
        return 1; 
    }
    if(n == 2){
        return 1;
    }
    int first = 1;
    int second = 1; 
    int position = 3; 
    while(position <= n){
        int next = first + second;
        first = second; 
        second = next;  
        position++; 
    }
    return second; 
}

int numberOfDivisors(int n){
    
    int divisor = 1; 
    int count = 0;
    while(divisor < n){
        if(n % divisor == 0){
            count++;
        }
        divisor++;
    } 
    return count; 
}

bool isPerfect(int n){

    int divisor = 1; 
    int sum = 0; 

    while(divisor < n){
        if( n % divisor == 0){
            sum = sum + divisor; 
        }
        divisor++;
    }
    if(sum == n ){
        return 1; 
    }
    return 0;
}

bool isPalindrome(int n){
    
    int original = n; 
    int reversed = reverseNumber(original);
    if(reversed == original){
        return 1;
    }
    return 0; 
}
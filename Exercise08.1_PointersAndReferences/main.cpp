#include <string>
#include <vector>
#include <random>
#include <chrono>
#include <iostream>



//g++ -std=c++17 main.cpp -o main.exe
//.\main.exe

int main(){

int i = 23; 
int j = 54; 

//Displays the exact values 
std::cout << "i = " << i << std::endl;
std::cout << "j = " << j << std::endl;


//& gets the address of the variable 
std::cout << "address of i = " << (&i) << std::endl;
std::cout << "address of j = " << (&j) << std::endl;

//Dereferencing 
std::cout << "dereferenced address of i = " << (*(&i)) << std::endl;
std::cout << "dereferenced address of j = " << (*(&j)) << std::endl;

//Pointer Declaration 
 int* ptr_to_int = &i;
 ptr_to_int = &j; //Because ptr_to_int is a pointer variable, it can be changed to point another variable of the same type 

std::cout << "ptr_to_int = " << ptr_to_int << std::endl;
std::cout << "dereferenced ptr_to_int = " << (*ptr_to_int) << std::endl;


    return 0; 
}
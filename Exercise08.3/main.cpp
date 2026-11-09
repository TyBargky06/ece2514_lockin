#include <iostream>
#include "functions.h"


void printArray(int* arr, int size){
    for(int i = 0; i < size; i++){ std::cout << *(arr + i) << " "; }
    std::cout << std::endl;
}
/**
 * 
 * 
 * cmake --build build-mingw --target main
    .\build-mingw\main.exe
 * 
 */
int main() {

    
    int a[] = { 1, 2, 3, 4 };
    std::cout << "arraySum {1,2,3,4}: " << arraySum(a, 4) << " (expect 10)" << std::endl;
    int one[] = { 5 };
    std::cout << "arraySum {5}: " << arraySum(one, 1) << " (expect 5)" << std::endl;
    int arr1[] = { 1, 2, 3 };
    int arr2[] = { 4, 5, 6 };
    int result[3];
    elementWiseMultiplication(arr1, arr2, result, 3);
    std::cout << "elementWise {1,2,3}*{4,5,6}: "; printArray(result, 3);
    std::cout << "(expect 4 10 18)" << std::endl;
    int even[] = { 1, 2, 3, 4 };
    reverseArray(even, 4);
    std::cout << "reverse {1,2,3,4}: "; printArray(even, 4);
    std::cout << "(expect 4 3 2 1)" << std::endl;
    int odd[] = { 1, 2, 3 };
    reverseArray(odd, 3);
    std::cout << "reverse {1,2,3}: "; printArray(odd, 3);
    std::cout << "(expect 3 2 1)" << std::endl;
    



    return 0;
}

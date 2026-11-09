#include "functions.h"



int arraySum(int* arr, int size){
    int sum = 0; 
    for(int i = 0; i < size; i++){
        sum = sum + *(arr+i);  // *(arr+i) = value at index i 
    }

    return sum; 
}

void elementWiseMultiplication(int* arr1, int* arr2, int* result , int size){

    for(int i = 0; i < size; i++){
        *(result +i) = (*(arr1 + i)) * (*(arr2 + i)); // same thing as result[i] = arr1[i] * arr2[i]
    }
}


void reverseArray(int* arr, int size){

    int*  last = arr + size - 1; 
    int temp = 0; 
    for(int i = 0; i < size/2; i++){
        temp = *(arr+i);
        *(arr+i) = *(last - i);
        *(last-i) = temp; 
    }

    /**
     * (arr+i)    --> Moves right 
     * (last - i) --> Moves left 
     * 
     * 
     */
}
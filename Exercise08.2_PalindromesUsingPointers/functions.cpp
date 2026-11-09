#include "functions.h"


bool isPalindromeWArrays(const char array[], int size){

 int middle = size/2;
 for(int i = 0; i < middle; i++){
    int left = i; 
    int right = size - 1 - i; 
    if(array[left]!=array[right]){
        return false;
    }
 }
 return true; 
}

bool isPalindromeWPointers(const char* first, const char* last){
        while(first < last ){
            if(*first != *last){
                return false; 
            }
            first++; 
            last--; 
        }
    return true; 
}


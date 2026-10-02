#include "functions.h"

int getCallCount() {
    static int count = 0;  // Created once and keeps its value between calls
    count++;  // Increase the count every time the function is called
    return count;  // Return the current number of calls
}

int generateID() {
    static int id = 100;   // Starting ID is 100 and this is initialized only once
    int currentID = id;  // Save the ID that should be returned this time
    id++;    // Prepare the next unique ID
    return currentID;  // Return the current ID
}

int trackMax(int value) {
    static int maxValue = value;  // First call initializes maxValue with the first value

    if(value > maxValue) {  // Check whether the new value is larger
        maxValue = value;  // Update the maximum if the new value is larger
    }

    return maxValue;  // Return the largest value seen so far
}
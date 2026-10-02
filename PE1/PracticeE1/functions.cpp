#include "functions.h" // include declarations and the string/vector headers

int findSecondLargest(const std::vector<int>& values) { // read the original vector without modifying it
    if (values.empty()) { // check whether the vector has no elements
        return -1; // an empty vector has no second-largest value
    } // end the empty-vector check

    int largest = values[0]; // initialize largest using the first actual element

    for (int number : values) { // visit each value to find the largest
        if (number > largest) { // check whether this value exceeds the saved largest
            largest = number; // save the bigger value
        } // end the comparison
    } // end the first pass

    int secondLargest = 0; // temporary placeholder until a candidate is found
    bool foundSecond = false; // track whether a second distinct value exists

    for (int number : values) { // visit every value again to find second-largest
        if (number < largest) { // consider only values below largest
            if (!foundSecond || number > secondLargest) { // accept the first candidate or a better candidate
                secondLargest = number; // save this candidate
                foundSecond = true; // record that a valid candidate exists
            } // end the candidate update
        } // end the check excluding largest
    } // end the second pass

    if (foundSecond) { // check whether we found a second distinct value
        return secondLargest; // send the answer back to the caller
    } // end the successful-result check

    return -1; // no second distinct value exists
} // end findSecondLargest

std::vector<int> rotateVector(std::vector<int> values, int positions) { // return a rotated vector using a copy of the input
    if (values.empty()) { // check before using the vector size as a divisor
        return {}; // return an empty vector
    } // end the empty-vector check

    int size = static_cast<int>(values.size()); // convert the element count to int for these small practice vectors
    positions %= size; // remove complete rotations, keeping only the remaining movement

    if (positions < 0) { // check whether the remaining rotation is leftward
        positions += size; // convert it to an equivalent rightward rotation
    } // end the negative-rotation adjustment

    std::vector<int> result(size); // create size elements so indexed writes are valid

    for (int i = 0; i < size; i++) { // visit each original index from 0 through size minus 1
        int newIndex = (i + positions) % size; // compute the destination, wrapping around the end
        result[newIndex] = values[i]; // copy the original value into its destination
    } // end the rotation loop

    return result; // send the rotated vector back to the caller
} // end rotateVector

int longestWord(const std::string& text) { // read the original string and return an integer length
    int currentLength = 0; // track the current word's length
    int longestLength = 0; // track the greatest word length seen

    for (char ch : text) { // visit each character in order
        if (ch == ' ') { // check whether this character separates words
            currentLength = 0; // reset the current word count
        } else { // process a non-space character
            currentLength++; // add this character to the current word count

            if (currentLength > longestLength) { // check whether the current word sets a new maximum
                longestLength = currentLength; // save the new maximum length
            } // end the maximum update
        } // end the space-versus-character decision
    } // end the character loop

    return longestLength; // return the longest length, or 0 if no words exist
} // end longestWord

void removeVowels(std::string& text) { // modify the original string through its reference
    std::size_t i = 0; // start at the first character's index

    while (i < text.size()) { // continue while the index is valid in the changing string
        char ch = text[i]; // save the character currently at index i

        bool isVowel = ch == 'a' || ch == 'e' || ch == 'i' || // check lowercase a, e, or i
                       ch == 'o' || ch == 'u' || ch == 'A' || // also check lowercase o, u, or uppercase A
                       ch == 'E' || ch == 'I' || ch == 'O' || // also check uppercase E, I, or O
                       ch == 'U'; // finish the condition by checking uppercase U

        if (isVowel) { // choose removal when any vowel comparison is true
            text.erase(i, 1); // erase one character and keep i because later characters shift left
        } else { // choose advancement when the character is not a vowel
            i++; // move past the character we kept
        } // end the remove-versus-advance decision
    } // end the loop when i reaches the current string size
} // end removeVowels; no return value because the function is void
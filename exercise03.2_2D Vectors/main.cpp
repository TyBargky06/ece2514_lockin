#include <iostream>
#include <vector>
#include "functions.h"
 
int main(){
    std::vector<std::vector<double>> matrix1={{1,2,3},{4,5,6}}; // Create a 2 by 3 rectangular matrix
    std::vector<std::vector<double>> transposed=transposeMatrix(matrix1); // Transpose the rectangular matrix
    std::cout<<"transposeMatrix:"<<std::endl; // Print a heading

    for(int row=0;row<transposed.size();row++){ // Step through each row
        for(int col=0;col<transposed[row].size();col++){ // Step through each column
            std::cout<<transposed[row][col]<<" "; // Print each value
        }
        std::cout<<std::endl; // Move to the next row
    }

    std::vector<std::vector<double>> matrix2={{1,2,3},{4,5,6},{7,8,9}}; // Create a square matrix

    transposeSqMatrix(matrix2); // Transpose the square matrix in place

    std::cout<<"transposeSqMatrix:"<<std::endl; // Print a heading

    for(int row=0;row<matrix2.size();row++){ // Step through each row
        for(int col=0;col<matrix2[row].size();col++){ // Step through each column
            std::cout<<matrix2[row][col]<<" "; // Print each value
        }
        std::cout<<std::endl; // Move to the next row
    }

    return 0; // End the program
}
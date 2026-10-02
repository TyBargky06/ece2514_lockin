#include "functions.h"
#include <iostream>

std::vector<std::vector<double>> transposeMatrix(const std::vector<std::vector<double>>& matrix){ // Transpose a rectangular matrix
    if(matrix.size()==0){ // Check if the matrix is empty
        return {}; // Return an empty vector
    }

    int rows=matrix.size(); // Store the number of rows
    int cols=matrix[0].size(); // Store the number of columns

    for(int row=0;row<rows;row++){ // Step through each row
        if(matrix[row].size()!=cols){ // Check that every row has the same number of columns
            std::cout<<"Error: matrix is not rectangular."<<std::endl; // Print an error message
            return {}; // Return an empty vector
        }
    }

    std::vector<std::vector<double>> result(cols,std::vector<double>(rows)); // Create the transposed matrix

    for(int row=0;row<rows;row++){ // Step through each row
        for(int col=0;col<cols;col++){ // Step through each column
            result[col][row]=matrix[row][col]; // Switch the row and column positions
        }
    }

    return result; // Return the transposed matrix
}

void transposeSqMatrix(std::vector<std::vector<double>>& matrix){ // Transpose a square matrix in place
    int rows=matrix.size(); // Store the number of rows

    for(int row=0;row<rows;row++){ // Step through each row
        if(matrix[row].size()!=rows){ // A square matrix must have the same number of rows and columns
            std::cout<<"Error: matrix is not square."<<std::endl; // Print an error message
            return; // Stop without changing the matrix
        }
    }

    for(int row=0;row<rows;row++){ // Step through each row
        for(int col=row+1;col<rows;col++){ // Step through values above the diagonal
            double temp=matrix[row][col]; // Temporarily store the first value
            matrix[row][col]=matrix[col][row]; // Move the opposite value into this position
            matrix[col][row]=temp; // Move the stored value into the opposite position
        }
    }
}
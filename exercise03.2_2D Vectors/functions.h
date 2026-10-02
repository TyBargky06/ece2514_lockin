#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>

std::vector<std::vector<double>> transposeMatrix(const std::vector<std::vector<double>>& matrix); // Returns the transpose of a rectangular matrix
void transposeSqMatrix(std::vector<std::vector<double>>& matrix); // Transposes a square matrix in place

#endif
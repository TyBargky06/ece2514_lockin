#pragma once

#include <vector>                     // Gives access to std::vector

int findOdd(const std::vector<int>& vec); // Finds the number occurring an odd number of times
std::vector<int> vectorUnion(const std::vector<int>& a, const std::vector<int>& b); // Finds the union of two vectors
std::vector<int> vectorIntersection(const std::vector<int>& a, const std::vector<int>& b); // Finds the intersection of two vectors
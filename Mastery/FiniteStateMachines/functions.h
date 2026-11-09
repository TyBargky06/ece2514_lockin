#pragma once
#include <vector>
 
enum class States { QUARTERS, DIMES, NICKELS, PENNIES, DONE };
 
std::vector<int> coinChange(int change);
 
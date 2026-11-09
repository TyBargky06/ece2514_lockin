#include "functions.h"
 
std::vector<int> coinChange(int change) {
    if (change <= 0 || change >= 100) {
        return {-1, -1, -1, -1};
    }
    States state = States::QUARTERS;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    while (state != States::DONE) {
        switch (state) {
        case States::QUARTERS:
            if (change >= 25) {
                ++quarters;
                change = change - 25;
            } else {
                state = States::DIMES;
            }
            break;
        case States::DIMES:
            if (change >= 10) {
                ++dimes;
                change = change - 10;
            } else {
                state = States::NICKELS;
            }
            break;
        case States::NICKELS:
            if (change >= 5) {
                ++nickels;
                change = change - 5;
            } else {
                state = States::PENNIES;
            }
            break;
        case States::PENNIES:
            if (change >= 1) {
                ++pennies;
                change = change - 1;
            } else {
                state = States::DONE;
            }
            break;
        default:
            break;
        }
    }
    return {quarters, dimes, nickels, pennies};
}

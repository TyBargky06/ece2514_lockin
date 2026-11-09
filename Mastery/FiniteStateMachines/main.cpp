#include <iostream>
#include <vector>
#include "functions.h"
 
int main() {
    int price = 0;
    std::cout << "Enter a price between 0 and 100 cents: ";
    if (!(std::cin >> price)) {
        std::cout << "Invalid input: please enter a whole number.\n";
        return 1;
    }
    int change = 100 - price;
    std::vector<int> return_change = coinChange(change);
    if (return_change[0] == -1) {
        std::cout << "Invalid price: must be between 0 and 100 cents, excluding both.\n";
        return 1;
    }
    std::cout << "Change from a dollar: " << change << " cents\n";
    std::cout << return_change[0] << " quarter(s) " << return_change[1] << " dime(s) "
              << return_change[2] << " nickel(s) " << return_change[3] << " penny(ies)\n";
    return 0;
}
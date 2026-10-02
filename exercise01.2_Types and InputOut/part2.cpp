#include <iostream>


int main()
{
     int penny_count = 0;
    int nickel_count = 0;
    int dime_count = 0;
    int quarter_count = 0;
    int half_dollar_count = 0;
    int dollar_count = 0;

    std::cout << "Enter your number of pennies: ";
    std::cin >> penny_count;

    std::cout << "Enter your number of nickels: ";
    std::cin >> nickel_count;

    std::cout << "Enter your number of dimes: ";
    std::cin >> dime_count;

    std::cout << "Enter your number of quarters: ";
    std::cin >> quarter_count;

    std::cout << "Enter your number of half-dollar coins: ";
    std::cin >> half_dollar_count;

    std::cout << "Enter your number of one-dollar coins: ";
    std::cin >> dollar_count;

    int coin_total = penny_count + nickel_count * 5 + dime_count * 10 + quarter_count * 25 + half_dollar_count * 50
+ dollar_count * 100;

    std::cout << "\nHere is your coin count:\n";
    std::cout << "Pennies: " << penny_count << "\n";
    std::cout << "Nickels: " << nickel_count << "\n";
    std::cout << "Dimes: " << dime_count << "\n";
    std::cout << "Quarters: " << quarter_count << "\n";
    std::cout << "Half-dollar coins: " << half_dollar_count << "\n";
    std::cout << "One-dollar coins: " << dollar_count << "\n";

    std::cout << "Your coins are worth "
              << coin_total << " cents in total.\n";

    return 0;
}
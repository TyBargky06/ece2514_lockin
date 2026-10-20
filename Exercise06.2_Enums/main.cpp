#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <iomanip>
//Design a simple Coffee Shop Menu:
/*
Allowes that user to:
- Select different types of coffee
- Diplay the price for the selected coffee
*/
enum class CoffeeType
{
    americano, //assinged index 0
    espresso, //assinged index 1
    latte,     //assinged index 2
    cappuccino, //assinged index 3
    mocha, //assinged index 4
    small,         // assigned index 5
    medium,        // assigned index 6
    large          // assigned index 7


};

void displayMenu(){

    std::cout<<"Types of Coffee:"<<std::endl;
    std::cout<<"1. Americano"<<std::endl;
    std::cout<<"2. Espresso"<<std::endl;
    std::cout<<"3. Latte"<<std::endl;
    std::cout<<"4. Cappuccino"<<std::endl;
    std::cout<<"5. Mocha"<<std::endl;
}
void displaySizeMenu(){

    std::cout<<"Sizes:"<<std::endl;
    std::cout<<"1. Small"<<std::endl;
    std::cout<<"2. Medium"<<std::endl;
    std::cout<<"3. Large"<<std::endl;
}


void displayPrice(const double& price){
    std::cout << std::fixed << std::setprecision(2) << "$"<<price << std::endl;
 
}

void displayTotalBill(const double& sum){
    std::cout << "Total bill: $" << std::fixed << std::setprecision(2) << sum << std::endl;
    std::cout << "Thank you have a good day" << std::endl;
 
}


double getCoffeePrice(const CoffeeType& coffeetype){

    double price = 0;
    switch(coffeetype){
        case CoffeeType::americano: 
            price = 2.50;
            break;

        case CoffeeType::espresso:
            price = 3.00;
            break;

        case CoffeeType::latte:
            price = 3.50;
            break;

        case CoffeeType::cappuccino:
            price = 3.75;
            break;

        case CoffeeType::mocha:
            price = 4.25;
            break;
    }
    return price; 
}
double getSizePrice(const CoffeeType& size){

    double sizePrice = 0;

    switch(size){

        case CoffeeType::small:
            sizePrice = 0.00;
            break;

        case CoffeeType::medium:
            sizePrice = 0.50;
            break;

        case CoffeeType::large:
            sizePrice = 1.00;
            break;

        default:
            break;
    }

    return sizePrice;
}





int main(){


    std::string anotherChoice = "yes";
    double sum = 0;

   while(anotherChoice == "yes"){

        displayMenu();
        int choice;
        std::cout << "Please enter your selection: ";
        std::cin >> choice;
        choice = choice - 1;
        CoffeeType coffeeChoice = static_cast<CoffeeType>(choice);
        displaySizeMenu();
        int sizeChoice;
        std::cout<<"Please enter your size: ";
        std::cin>>sizeChoice;
        CoffeeType coffeeSize;
        if(sizeChoice == 1){
            coffeeSize = CoffeeType::small;
        }
        else if(sizeChoice == 2){
            coffeeSize = CoffeeType::medium;
        }
        else{
            coffeeSize = CoffeeType::large;
        }
        double price = getCoffeePrice(coffeeChoice);
        double sizePrice = getSizePrice(coffeeSize);
        price = price + sizePrice;
        displayPrice(price);
        sum = sum + price;
        std::cout << "Would you like to make another selection? ";
        std::cin >> anotherChoice;
    }
    
    displayTotalBill(sum);
   
    return 0; 
}
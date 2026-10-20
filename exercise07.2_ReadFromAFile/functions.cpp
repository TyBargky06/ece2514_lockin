#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cmath>
#include "functions.h"


WeeklySales calculateSales(std::ifstream& fin){
    WeeklySales weekly_sales; 
    std::string first_name; 
    std::string last_name; 
    double amount = 0;


    while(!fin.eof()){ //while it is not the end of file; 
        fin >> first_name >> last_name >> amount; 
        weekly_sales.combined = weekly_sales.combined + amount; 
        if(fin.fail()){
            break;
        }
        weekly_sales.combined = weekly_sales.combined + amount; 
        if(amount > weekly_sales.maximum){
            weekly_sales.maximum = amount;
        }
    }
return weekly_sales; 
}
std::vector<SalesPerson> calculatePayments(std::ifstream& fin) {
    std::vector<SalesPerson> salespeople;
    std::vector<double> sales;
    SalesPerson person;
    double amount = 0;
    double maximum = 0;

    while(!fin.eof()) {
        fin >> person.first_name >> person.last_name >> amount;
        if(fin.fail()) {
            break; // Stop if reading fails
        }
        salespeople.push_back(person); // Save the names
        sales.push_back(amount); // Save the matching sales amount
        if(amount > maximum) {
            maximum = amount;
        }
    }

    for(int i = 0; i < salespeople.size(); i++) {
        double payment = sales[i] * 0.10; // Calculate commission
        if(sales[i] == maximum) {
            payment = payment + 200; // Include everyone tied for maximum
        }
        salespeople[i].payment = std::round(payment); // Store rounded dollars
    }

    return salespeople;
}
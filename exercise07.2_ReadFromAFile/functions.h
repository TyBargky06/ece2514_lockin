#pragma once
#include <string>
#include <vector> 
#include <fstream>
struct WeeklySales{
    double combined = 0; //sum of all 
    double maximum = 0; 
};

struct SalesPerson {

    std::string first_name; 
    std::string last_name; 
    int payment = 0; 
};

WeeklySales calculateSales(std::ifstream& fin);

//(std::ifstream& fin) is the stream 
std:: vector<SalesPerson> calculatePayments(std::ifstream& fin);
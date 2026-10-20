
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "functions.h"
#include <iostream>

// draw data strucks 
//draw the solution

//Passing file streams as a reference, file exists on the hard drive 
int main() {

//pull from hard drive to a memory 
// E.i file stream 
//Difference between memory and harddrive -->Hard drive is IO devicces 
//Memory -- Is what the processer dirreclty access 
//Only file once from  harddrive and then always access it from momeery.. harddrive takes to much time 



std::ifstream fin("sales_data.txt"); //pull the files from harddrive to memory 

///ALWAYS DO THIS WHEN READING IN THE FILES or it would nnot run no matter how perfect the code is 
if(!fin) {
    std::cout << "File does not exist.";
    return 1; // Stop if the file did not open
}

WeeklySales weekly_sales = calculateSales(fin); // Create and fill the struct

fin.close();
fin.open("sales_data.txt"); // Start from the beginning for payments

if(!fin) {
    std::cout << "Could not reopen file.";
    return 1;
}

std::vector<SalesPerson> salespeople = calculatePayments(fin);
    std::cout << "Combined weekly sales is $"
              << weekly_sales.combined << std::endl;
    std::cout << "Maximum weekly sales is $"
              << weekly_sales.maximum << std::endl;
    std::cout << "\nSales staff payments are:\n\n";

    for(int i = 0; i < salespeople.size(); i++) {
        std::cout << salespeople[i].first_name << '\t'
        << salespeople[i].last_name << "\t\t"
        << "$" << salespeople[i].payment << std::endl;
    }

return 0;
}

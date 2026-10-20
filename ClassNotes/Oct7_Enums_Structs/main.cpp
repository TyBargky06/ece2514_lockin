
#include <iostream>
#include <vector>
#include "functions.h"
#include <string>
#include <cctype>
//Class notes 
struct EmployeeS
{
  //private: //defualt public but can be made private 
    int id {};
    int age {};
    double wage {};
};

class Employee
{//default private
public: //Means functions can access the the atrricbuts
    int m_id {};
    int m_age {};
    double m_wage {};
    // vectors and strings are classes
    
};

struct Date{
    int year{};
    int month{};
    int day {};
};

struct Car{
    int year{};
    std::string manufacturer; 
    double price{};
    std::vector<Date> maintenance_dates;
};

enum HouseTypes
{
    red,   // assigned 0
    green, // assigned 1
    blue,  // assigned 2
    purple,// assigned 3
    brown, // assigned 4
}; // must end with ;


int main(){
//Cpmtomued struct notes 
//use vector of structs: --> tables , x - axis = sturcts, y - axis = vectors
//Each element of vector should be same data type
Car car{} ; 
car.year = 2014;; 
car.manufacturer = "tesla";
car.price = 1600;

Date date = {2026, 10, 7};
car.maintenance_dates.push_back(date);
 
//accessing structs from vectors
std::cout<<car.maintenance_dates[0].month; 


int numCars{3};
std::vector<Car> fleet(numCars);

fleet[0] = car; 
fleet[1] = {2029, "Lambo", 500000, {}};
/////New notes Classe and Classes but today is for Enums  --> 
//We use enumbs when to give symbolic names to indexes give symbolic names to integrers
//instead of using intergers use symbol name. 
//instead of X = 5, x = green
   EmployeeS jane;
    jane.age = 24;   // Now, access to member variable is not allowed

    Employee john;
    john.m_age = 23; // Now, access to member variable is allowed


    ///Enum notes 
    std::vector<int> house_prices{ 221900, 538000, 180000, 604000, 510000 };
    house_prices[0] = 240000;
    house_prices[green] = 600000; //== to  house_prices[] = 600000;

    HouseTypes my_house = purple;
    std::cout << my_house << '\n';
    house_prices[my_house] = 580000;
    return 0; 
}
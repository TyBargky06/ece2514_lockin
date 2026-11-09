#include <vector>
#include <string>
#include <iostream>

// RUN CODE: 
/**
 * 
 * g++ -std=c++17 main.cpp -o structs.exe  
 * .\structs.exe   
 * 
 */

 // ===== TRAVERSING A VECTOR =====
// First element: v[0]    Last element: v[v.size()-1]
// v.size() returns size_t (an unsigned size type, can't be negative)
// If v.size()==0, v is an empty vector (has no elements)

// ===== OTHER VECTOR OPERATIONS =====
// (full list: https://en.cppreference.com/w/cpp/container/vector)
// v.front()              -> first element of v
// v.back()               -> last element of v
// v.empty()              -> true if v has no elements
// v.clear()              -> removes all elements (size becomes 0)
// v.pop_back()           -> removes the last element
// v.erase(v.begin()+i)   -> removes the element at index i
// v.resize(new_size)     -> changes the number of elements to new_size
// v.push_back(x)         -> adds x to the end   (Java: list.add(x))

// ===== STRING MANIPULATION =====
// Characters are indexed 0 (leftmost) to n-1 (rightmost), n = length
// Read/write one character with [ ]: str[0] = 'H';   (gives a char, like C)
// An empty string cannot be indexed -> error
// Accessing str[n] (one past the end) -> run-time error

// ===== OTHER STRING OPERATIONS =====
// (full list: https://en.cppreference.com/w/cpp/string/basic_string)
// str.front()            -> first character
// str.back()             -> last character
// str.empty()            -> true if str is ""
// str.clear()            -> makes str ""
// str.pop_back()         -> removes the last character
// str.erase(i, 2)        -> removes 2 characters starting at index i
// str.resize(new_size)   -> changes the number of characters to new_size
// str.substr(i, 2)       -> returns 2 characters starting at index i
// str.substr(2)          -> returns everything from index 2 to the end
//                           (Java: substring(start, END) vs C++: substr(start, LENGTH))
// str.find(sub)          -> index of FIRST occurrence of sub
// str.rfind(sub)         -> index of LAST occurrence of sub
// If find/rfind doesn't find it, it returns std::string::npos
//   check with: if (str.find(sub) != std::string::npos) { /* found */ }
//   (Java: indexOf returns -1; C++ returns npos instead)

using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;  // lets me write string instead of std::string
using namespace std; // lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself
// using namespace std brings in EVERYTHING from std (like Java's import java.util.*;)
//   -> with it, the two lines above aren't needed, but they don't hurt
//   -> risk: name collisions if I name something the same as a std name
// NEVER put using in a header (.h) file; always write std:: there
// using only shortens names; I still need #include <vector>, <string>, <iostream>


//Programs can have multiple struct types, multiple enum types, or multiple class types.

//Example 1
struct Employee //Global scope 
{
    string name;
    string title;
    int age{};
    double wage{};
    int id{};
    int managerId{};
    int birthdayYear{};
    int birthdayMonth{};
    int birthdayDay{};
    int hireYear{};
    int hireMonth{};
    int hireDay{};
};


//Example 2
struct Date {
    int year;
    int month;
    int day;
};
struct Car {
    int year;     
    string manufacturer;
    double price;
    vector<Date> maintenance_dates; // A growable list of Dates inside each car, so each car carries its own list of service dates.
};

//Example 3
struct House {
    int price; 
    int bedrooms; 
    int bathrooms; 
    int sqft_living; 
    int sqft_lot; 
    int floors; 
    bool waterfront; 
    int yr_built; 
    double latitude; 
    double longitude;
};

//Example 4
struct Student {
    int id {};
    int age {};
    double grade {};
};
void printStudent(const Student& Student) { // note pass by reference here 
    cout << "ID:   " << Student.id << '\n';
    cout << "Age:  " << Student.age << '\n';
    cout << "Wage: " << Student.grade << '\n';
}
void printInt(int x){
    cout << "integer value: " << x << '\n';
}

//Example 5 
struct Point3d {
    double x { 0.0 };
    double y { 0.0 };
    double z { 0.0 };
};
Point3d getZeroPoint() {
    return Point3d({ 0.0, 0.0, 0.0 }); // return an unnamed Point3d
}





int main(){

    //Example 1: 
    //Case 1: Creates an object of type Employee
    Employee john;
    john.age = 21;
    john.name = "John Doe";
    john.wage = 11.00;

    //Case 2: Creates an object of type Employee
    Employee jane{ "Jane Doe", "ULA", 23, 15.00 };

    //Case 3: Create a vector of Employees
    vector<Employee> employees(2);
    employees[0] = john;
    employees[0].wage = 13.50;

    employees[1] = jane;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Example 2: 
    //Case 1
    Car car{};                                              // {} = all members zeroed: 0, "", 0.0, empty vector
    car.year = 2014;
    car.manufacturer = "toyota";
    car.price = 1600.0;
    //Case 2
    Date date = { 2024, 7, 6 };                             //Brace initialization in declaration order: { year 2024, month 7, day 6}
    car.maintenance_dates.push_back(date);                  // Pushing the date at the end of the car vector 

    int numCars{ 3 };                                        // I can resue this anywhere and Readability tells teh reader what the numbrt means and not just a bare 3 
    vector<Car> fleet(numCars);                             // named variable instead of a bare 3: reusable in loops, change it in one place, self-explaining, vectore of type Car 
    fleet[0] = car;
    fleet[1] = {2024, "lamborghini", 500'000, {}};

    //Displaying Fleet 
    for (int i = 0; i < numCars; i++) {                                   // i = car index; fleet[2] was never assigned, so it stays zeroed
        cout << "Car " << i << ": " << fleet[i].year << " " << fleet[i].manufacturer << " $" << fleet[i].price << "\n";  // << chains output pieces
        cout << "  Maintenance dates: " << fleet[i].maintenance_dates.size() << "\n";  // .size() = number of elements
            for (size_t j = 0; j < fleet[i].maintenance_dates.size(); j++) {  // j = date index inside car i
            cout << "    " << fleet[i].maintenance_dates[j].month << "/" << fleet[i].maintenance_dates[j].day << "/" << fleet[i].maintenance_dates[j].year << "\n";  // fleet[i] = one Car, .maintenance_dates[j] = one Date, then .member
            }
    }
    cout<< "--------------------------------"<< '\n';
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Example 3: 
    int house_price{ 221900 };  //Single integer Value 
    vector<int> house_prices{ 221900, 538000, 180000, 604000, 510000 }; // Multiple integers

    int num_houses = 3;
    vector<House> houses(num_houses);  // whole table; each element = one row = one House struct
    houses[1].sqft_living;             // [1] picks the row (house), .sqft_living picks the column (member)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Example 4: Passsing Structs through functions 
        Student joe { 14, 32, 24.15 };
        Student frank { 15, 28, 18.27 };

    // Print Joe's information
    printStudent(joe);

    std::cout << '\n';  //creats a space between the output in the terminal 

    // Print Frank's information
    printStudent(frank);
    void print(const House& h);   // & = no copy (uses the original), const = read-only; best for structs you only read
    void update(House& h);     // & without const = function CAN change the caller's struct
    void print(House h);          // no & = full copy; changes stay inside the function; slow for big structs    
    std::cout << '\n';  //creats a space between the output in the terminal 


    printInt(2);
    printInt(int(8.5));
    printInt(int {5});
    std::cout << '\n';

    // Print Joe's information
    // construct a temporary Employee to pass to function
    printStudent(Student( {14, 32, 24.15} ));

    std::cout << '\n';

    // Print Frank's information
    printStudent(Student { 15, 28, 18.27 });



    return 0; 
}
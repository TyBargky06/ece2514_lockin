//Strings are error prone 

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
//RUN CODE: 
/**
 * g++ -std=c++17 -Wall main.cpp -o classes_enums.exe
 * .\classes_enums.exe
 * 
 */
using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;
using namespace std; //// lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself

//Class notes 
// enum class makes the scop allows the user to use the same words multiple times like blue in one enum and blue in one enum. like if blue is assignet a value in one enum but blue is assigned another 
enum class HouseTypes // Symbol index like boolean true or false 
{
    red,   // assigned 0
    green, // assigned 1
    blue,  // assigned 2
    purple,// assigned 3
    brown, // assigned 4
    maxHouses, // 5 add this last line to get the total number of houses without habing to check --> keep the total number of houses or elements in the enums 
    //maxHouses, always had the total number of elements in the enumb
}; // must end with ;


enum class Feelings  {
    sad,    // assigned 0
    happy,  // assigned 1
    angry,  // assigned 2
    anxious,// assigned 3
    blue,   // assigned 4
};

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

//Example 2 - They are best used when you have a smallish set of related constants, 
//            and objects only need to hold one of those values at a time. 
enum DaysOfWeek {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
enum CardinalDirections {north, east, south, west};
enum CardSuits {clubs, diamonds, hearts, spades};
enum FileReadResults {success, error_file_open, error_file_read, error_file_parse};
enum ItemType {sword, torch, potion};

//Example 3 - It is possible to explicitly define the value of enumerators. 
//            Any non-defined enumerators are given a value one greater than the previous enumerator
enum Animal
{
    cat = -3,    // values can be negative
    dog,         // -2
    pig,         // -1
    horse = 5,
    giraffe = 5, // shares same value as horse
    chicken,     // 6
};


// enum Feelings  { ---> Unscopped - when unscopped, cant use the same elememtn in more than one enum
//     sad,    // assigned 0
//     happy,  // assigned 1
//     angry,  // assigned 2
//     anxious,// assigned 3
//     //blue,   // assigned 4
// };

// enum class Feelings  { --> Scopped (Always use scopped enumbs)
//     sad,    // assigned 0
//     happy,  // assigned 1
//     angry,  // assigned 2
//     anxious,// assigned 3
//     //blue,   // assigned 4
// };


/**
 * 
 * 
 *  Case 1
 *  enum class HouseTypes { red, green, blue };
    enum class CarColors  { red, green, blue };   // fine, no conflict


    Case 2
    enum HouseTypes { red, green, blue };
    enum CarColors  { red, green, blue };   // error:  red already defined       
 */

int main() {

    vector<int> house_prices{ 221900, 538000, 180000, 604000, 510000 };
    house_prices[0] = 240000;
    HouseTypes fav_color = HouseTypes::green;
    house_prices[static_cast<int>(fav_color)] = 600000;    //  house_prices[green] = 600000; would be an error because the gree is in the scoop but HouseTypes::green allows you to use green 

    HouseTypes my_house = HouseTypes::purple;
    cout << static_cast<int>(my_house) << '\n'; // Prints the assinged number 3 (Index)
    house_prices[static_cast<int>(my_house)] = 580000;
    cout << house_prices[static_cast<int>(my_house)] << '\n'; // Prints the value at the assinged number at index 3
    cout<<" -------------------------"<<'\n';
    //Wrong -->> The Above is correct
    // vector<int> house_prices{ 221900, 538000, 180000, 604000, 510000 };
    // house_prices[0] = 240000;
    // house_prices[green] = 600000;

    // HouseTypes my_house = purple;
    // std::cout << my_house << '\n';
    // house_prices[my_house] = 580000;

    //Example 4
    vector<int> price_of_houses{ 221900, 538000, 180000, 604000, 510000 };


    //purple -> assignment 3
    HouseTypes ty_house{ HouseTypes::purple }; // brace init: my_house = purple (3), lets me use the my_house variable multiple times 
    cout << static_cast<int>(ty_house) << '\n';    // functional cast enum -> int, prints 3    
    cout << int(ty_house) << '\n';                     // functional cast enum -> int, prints 3   
    cout<<" -------------------------"<<'\n';


    HouseTypes nanny_house{ HouseTypes(2) };                    // cast int -> enum: 2 is blue
    vector<int> all_prices(int(HouseTypes::maxHouses));       // ( ) sets SIZE: 5 slots, all 0
     all_prices[int(ty_house)] = 750'000;                      // slot 3 (purple) = 750000
     all_prices[int(nanny_house)] = 500'000;                   // slot 2 (blue) = 500000

    for (int i = 0; i < int( all_prices.size()); i++)   // walk every slot
    std::cout << "House " << i << ": " <<  all_prices[i] << '\n';


    return 0;
}
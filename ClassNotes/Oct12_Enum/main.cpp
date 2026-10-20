//Strings are error prone 

#include <iostream>
#include <vector>
#include "functions.h"
#include <string>
#include <cctype>
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




int main() {


    //Below - Making it clear to the complire which class I am calling blue from 
HouseTypes my_house = HouseTypes::blue; 
Feelings my_feelings = Feelings::blue;

std::vector<int> house_prices(int(HouseTypes::maxHouses)); 
house_prices[(int)HouseTypes::blue] = 30; 

//Below - Are the same, changing the types for HouseTypes to ints 
//int(HouseTypes::maxHouses)
//(int)HouseTypes::blue
//static_cast<int>(HouseTypes::maxHouses))
        
    return 0;
}
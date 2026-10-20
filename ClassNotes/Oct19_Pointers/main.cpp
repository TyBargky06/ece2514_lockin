#include <iostream> 


struct Employee{
    bool isManager{};
    double wage{};
    int id{};
};

enum Color{red, blue, green};

int main (){


//Memory Addresses 
    int number_of_steps = 39;       
    double flying_time = 3.5;       
    bool tap_on = true; 

    std::cout << &number_of_steps << std::endl;    // address of number_of_steps 
    std::cout << &flying_time << std::endl;        // address of flying_time 
    std::cout << &tap_on << std::endl;             // address of tap_on 

    Employee joe {false, 14.80, 5};
    std::cout << sizeof(joe) << std::endl;
    std::cout << &joe << std::endl;
    std::cout << &joe.isManager << std::endl;
    std::cout << &joe.wage << std::endl;
    std::cout << &joe.id << std::endl;

    Color color = blue;
    std::cout << sizeof(color) << std::endl;
    std::cout << &color << std::endl;

 
//Pointers 

    int* ptr_number_of_steps = &number_of_steps;   // define pointer to number_of_steps
    double* ptr_flying_time = &flying_time;        // define pointer to flying_time
    bool* ptr_tap_on = &tap_on;                    // define pointer to tap_on

    std::cout << &ptr_number_of_steps << std::endl;// address of pointer to number_of_steps
    std::cout << &ptr_flying_time << std::endl;    // address of pointer to flying_time
    std::cout << &ptr_tap_on << std::endl;         // address of pointer to tap_on

// Dereferencing Pointers
    std::string name = "John Doe";

    std::string* ptr_name = &name;


    std::cout << *ptr_number_of_steps << std::endl; // contents of ptr_number_of_steps
    std::cout << *ptr_flying_time << std::endl;     // contents of ptr_flying_time
    std::cout << *ptr_name << std::endl;            // contents of ptr_name


//Referencing 
    int number_of_steps { 39 };    // x is a normal integer variable
    int& ref { number_of_steps };  // ref is an alias for variable number_of_steps 
    std::cout << number_of_steps << std::endl;
    std::cout << ref << std::endl;
    ref++;
    std::cout << number_of_steps << std::endl;
    std::cout << ref << std::endl;

    int x = 5;
    int* ptr_x = &x;
    int& ref_x = x;

    ref_x = 6;
    std::cout << x << std::endl;
    std::cout << ref_x << std::endl;
    std::cout << *ptr_x << std::endl;

    *ptr_x = 7;
    std::cout << &x << std::endl;
    std::cout << &ref_x << std::endl;
    std::cout << &(*ptr_x) << std::endl;

    ptr_x = nullptr;











    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //BRO CODE - EXAMPLE
    // pointers = variable that stores a memory address of another variable sometimes it's easier to work with an address
    // & address-of operator 
    // * dereference operator 

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5" };

    std::string *pName = &name; 
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n'; 
    std::cout << *pAge  << '\n';

    //output: Bro 
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

     std::string str{ "Hello, world!" };
    printByValue(str);     // pass str by value, makes a copy of str
    printByReference(str); // pass str by reference, does not make a copy of str
    printByAddress(&str);  // pass str by address, does not make a copy of str




    return 0; 
}

//Pass By Address/Referencing 
void printByValue(std::string val) {
    std::cout << val << '\n';
    val = "Goodbye, world!";
}

void printByReference(std::string& ref) {
    std::cout << ref << '\n'; 
    ref = "Goodbye, world!";
}

void printByAddress(std::string* ptr){
    std::cout << *ptr << '\n'; // this is dangerous! why?
    *ptr = "Goodbye, world";
}
#include <vector>
#include <string>
#include <iostream>
/**
 * Run Code:
 * g++ main.cpp -o pointers.exe
 * .\pointers.exe              

 * 
 * 
 * 
 */
using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;  // lets me write string instead of std::string
using namespace std; // lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself
// using namespace std brings in EVERYTHING from std (like Java's import java.util.*;)
//   -> with it, the two lines above aren't needed, but they don't hurt
//   -> risk: name collisions if I name something the same as a std name
// NEVER put using in a header (.h) file; always write std:: there
// using only shortens names; I still need #include <vector>, <string>, <iostream>


  
// POINTER = a variable whose value is the ADDRESS of another variable
//   Lets you reach a variable you don't have by name
//   (one in another function, or one made with new)
// &  address-of  --> &x gives the address of x
//   An address is just a number; cout PRINTS it in hex by default
// *  dereference --> *p gives the value STORED AT the address p holds
//   Only works on something that holds an address
// Same symbol, two meanings:
//   int* p;      declaration: p is a pointer to int        (same as C)
//   *p           expression:  value at that address         (same as C)
//   int& r = x;  declaration: r is a REFERENCE, alias for x (C++ only)
//   &x           expression:  address of x                  (same as C)
// Memory diagram:
//   A variable's address = address of its FIRST byte
//   Sizes: bool 1 byte, int 4 bytes, double 8 bytes
//   Little-endian: least significant byte first
//   39 = 0x00000027 -> stored 27 00 00 00

//Example 2: 
struct Employee{
    bool isManager{};
    double wage{};
    int id{};
};
enum class Color{
    red, 
    blue, 
    green
};



//Example 7: Pass By Address/References 
// WHEN TO USE PASS-BY-REFERENCE / ADDRESS
//   Passing structs or classes (big -> avoid copying every byte)
//     use const if the function only reads it:
//     void print(const Employee& e)  -> no copy, and e can't be changed
//   The function needs to modify the argument
//     void raise(Employee& e)  -> changes the caller's original
//   Working with C-style arrays (int nums[3])
//     an array is passed as a pointer to its first element anyway
// WHEN NOT TO
//   Fundamental types (int, double, bool, char) that won't be modified
//     -> use pass-by-value: void show(int n)
//     copying 4 or 8 bytes is as cheap as passing an address
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


//Example 8: Return By Reference/Address
// RETURN BY REFERENCE / ADDRESS
//   Return by reference: returns a reference bound to the object
//     -> no copy of the return value is made
//     Employee& getBoss()
//   Return by address: returns a pointer to the object
//     Employee* getBoss()
//   CAVEAT: the returned object must still exist after the function returns
//     BAD:  return a reference/pointer to a LOCAL variable
//           int& bad() { int n = 5; return n; }
//           n is destroyed when bad() ends -> "dangling" reference
//     OK:   return something that outlives the function
//           (a global, a static, an object passed in, or one made with new)
//   Same trap as C: returning a pointer to a local array
string& getProgramNameR(){ // return type is a reference to a string
    static string s_programNameR { "\"Return by reference\"" }; 
    // has static duration, destroyed at end of program
    return s_programNameR;
}
string* getProgramNameA(){ // return type is a pointer to a string
    static string s_programNameA { "\"Return by address\"" }; 
    // has static duration, destroyed at end of program
    return &s_programNameA; // returns the address of the object
}


int main(){

//Example 1: 
    int number_of_steps = 39;       
    double flying_time = 3.5;       
    bool tap_on = true; 

    cout << &number_of_steps << endl;    // address of number_of_steps 
    cout << &flying_time << endl;        // address of flying_time 
    cout << &tap_on << endl;             // address of tap_on 
    cout << "---------------------"<< endl; 
    cout << endl;   

//Example 2:  


    //sizeof --> Counts Bytes not slots
    // sizeof = built-in OPERATOR, not a function (no #include needed)
    //   Same as C (malloc(n * sizeof(int))); Java has no equivalent
    //   Evaluated at COMPILE time -> replaced with a number in bytes
    //   sizeof(type) needs ( ); sizeof var works without ( )
    //   Returns size_t (unsigned integer)  

    // sizeof counts BYTES, not slots/members (members: count them yourself)
//   vector count -> v.size(); array count -> sizeof(arr)/sizeof(arr[0])
// struct Employee {bool, double, int}:
//   members alone = 1 + 8 + 4 = 13 bytes
//   bool @850, 7 pad (851-857) so double starts on a multiple of 8
//   double @858-85f, int @860-863
//   4 pad at end (864-867) so total is a multiple of 8 (for arrays)
//   sizeof(joe) = 13 + 11 padding = 24
//   &joe == &joe.isManager (struct address = first member's address)
// enum class Color {red, blue, green}:
//   stores just a number: red 0, blue 1, green 2
//   underlying type is int by default -> sizeof(color) = 4
 cout << "Example 2"<< endl; 
Employee joe {false, 14.80, 5};
    cout << sizeof(joe) << endl;
    cout << &joe << endl;
    cout << &joe.isManager << endl;
    cout << &joe.wage << endl;
    cout << &joe.id <<endl;


    Color color = Color::blue; //Delecaring what enum object I am calling blue from (Color::blue), the object is Color
    std::cout << sizeof(color) << std::endl;
    std::cout << &color << std::endl;
    cout << "End of Example 2"<< endl; 
    cout << endl;   // allows a space 

//Example 3- Pointers
cout << "Example 3"<< endl;
        // POINTERS
        // A pointer is an object that holds the memory ADDRESS of another variable
        //   int      holds an integer
        //   double   holds a floating point number
        //   bool     holds a boolean value
        //   int*     holds the address of an int
        //   double*  holds the address of a double
        //   bool*    holds the address of a bool
        // Pointer types (int*, double*, bool*, ...) are DISTINCT types
        //   An int* cannot point to a double
        //   (C only warns about this; C++ gives a compile error)   
        int moms_age = 39;       
        double flight = 3.5;       
        bool lockedIn = true; 

     
    cout << &moms_age << endl;    // address of moms_age
    cout << &flight << endl;        // address of flight
    cout << &lockedIn << endl;             // address of lockedIn

    //Defining a pointer 
    int* ptr_moms_age = &moms_age;   // define pointer to moms_age
    double* ptr_flight = &flight;        // define pointer to flight
    bool* ptr_lockedIn = &lockedIn;                    // define pointer to lockedIn
    cout << "---------------------"<< endl; 
    //Address of the pointers 
    cout << &ptr_moms_age <<endl;// address of pointer to moms_age                              
    cout << &ptr_flight << endl;    // address of pointer to flight                            
    cout << &ptr_lockedIn << endl;         // address of pointer to lockedIn                    
    cout << "End of Example 3"<< endl; 
    cout << endl;   // allows a space 


    //Exampe 4: Deference the pointer = Getting the value 
    cout << "Example 4"<< endl;
    int number_of_cars = 39;        
    double grade = 3.5;       
    string name = "John Doe";
    Employee luke {true, 22.50, 7};
    
    int* ptr_number_of_cars = &number_of_cars;
    double* ptr_grade = &grade;
    string* ptr_name = &name;
    Employee* ptr_luke = &luke; 

    //Deferencing part
    *ptr_number_of_cars = 40; // you can assign 40 to int pointed to by ptr_number_of_cars 
    *ptr_grade = 4.5;    // you can assign 4.5 to double pointed to by ptr_grade
    (*ptr_luke).wage = 15; // dereference first, then .wage (parentheses required)
    ptr_luke -> id = 20;  // -> does the dereference and the . in one step

    cout << *ptr_number_of_cars << endl; // contents of ptr_number_of_steps
    cout << *ptr_grade << endl;     // contents of ptr_flying_time
    cout << *ptr_name << endl;            // contents of ptr_name
    cout << "Lukes wage:" << ptr_luke->wage << endl;
    cout << "Lukes id: "<< ptr_luke->id << endl;   // luke's wage and id
    cout << "End of Example 4"<< endl;
    cout << endl;   // allows a space 


    //Example 5: Null pointers 
    // NULL POINTERS
// A big share of serious bugs comes from using uninitialized pointers
//   and out-of-range access
// null = a special value meaning "has no value"
// null pointer = a pointer that is not pointing at anything
// Best practice: if a pointer doesn't get a valid object's address
//   right away, initialize it to a null pointer
//   int* ptr = nullptr;
// nullptr = keyword for the null pointer literal
//   C uses NULL; Java uses null; C++ uses nullptr
// Check before dereferencing:
//   if (ptr != nullptr) { use *ptr }
//   *ptr on a null pointer crashes the program (Java: NullPointerException)
    //int* ptr;             // uninitialized pointer, likely trouble
   // *ptr = 7;             // we have no idea which part of memory this is written
    int* ptr2 = nullptr;  // can use nullptr to initialize a null pointer

    int y { 5 };
    ptr2 = &y;            // ptr now pointing at object x
    ptr2 = nullptr;       // Can assign nullptr to make the pointer a null pointer


    //Example 6: References 
    cout << "Example 6"<< endl;  
    int number_of_sodas { 39 };    // x is a normal integer variable --- Allows to use number_of_sodas multiple times 
    int& ref { number_of_sodas };  // ref is an alias for variable number_of_steps 
    cout << number_of_sodas << endl;
    cout << ref << endl;
    ref++;
    cout << number_of_sodas <<endl;
    cout << ref << endl;
    cout << "---------------------"<< endl; 
    cout << endl;   // allows a space
    
    int x = 5;          // a normal int box holding 5 (the house)
    int* ptr_x = &x;    // a SEPARATE 8-byte box holding x's address (sticky note)
    int& ref_x = x;     // NO new box: a second name for x (nickname)
    // &x   -> & with no type in front = address-of operator (LHS)
    // int& -> & attached to a type   = reference declaration (RHS)
    // x = 10;  *ptr_x = 10;  ref_x = 10;  -> all three change the SAME box
    //   *ptr_x: read the address on the note, go there, change that box
    //   ref_x:  just another name tag on the box, no * needed
    // &x == &ref_x == ptr_x   (all the same address)
    // &ptr_x is different     (where the note itself lives)

    ref_x = 6;
    cout << x << endl;
    cout << ref_x << endl;
    cout << *ptr_x << endl;
    cout << "---------------------"<< endl; 
    cout << endl;   // allows a space

    *ptr_x = 7;
    //Printing Address 
    cout << &x << endl;
    cout << &ref_x << endl;
    cout << &(*ptr_x) << endl;
    ptr_x = nullptr;
    cout << "End of Example 6"<< endl;
    cout << endl;   // allows a space

    //Example 7: Pass By Address/References 
      cout << "Example 7"<< endl; 

    string str{ "Hello, world!" };
    printByValue(str);     // pass str by value, makes a copy of str
    printByReference(str); // pass str by reference, does not make a copy of str
    printByAddress(&str);  // pass str by address, does not make a copy of str

    cout << "End of Example 7"<< endl;
    cout << endl;   // allows a space

    //Example 8: Return By Reference/Address
    cout << "Example 8"<< endl;

    cout << "This program is named " << getProgramNameR() << std::endl; 
    cout << "This program is named " << *getProgramNameA() << std::endl;

    cout << "End of Example 8"<< endl;
    cout << endl;   // allows a space

   

    return 0; 
}


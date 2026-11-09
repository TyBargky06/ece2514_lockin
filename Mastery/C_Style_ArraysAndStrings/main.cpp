#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <array>
/**
 * Run Code:
 * g++ main.cpp -o c_arrays.exe
 * .\c_arrays.exe              

 * 
 * cout << "Example 2"<< endl;
 * cout<<"End of Example 2"<<endl; 
    cout<<endl;
 * 
 */
using std::array; 
using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;  // lets me write string instead of std::string
using namespace std; // lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself
// using namespace std brings in EVERYTHING from std (like Java's import java.util.*;)
//   -> with it, the two lines above aren't needed, but they don't hurt
//   -> risk: name collisions if I name something the same as a std name
// NEVER put using in a header (.h) file; always write std:: there
// using only shortens names; I still need #include <vector>, <string>, <iostream>

// Lecture 08.2 - C-style arrays and strings
// C-STYLE ARRAYS
// (See "Introduction to C-style arrays" page for more details.)
// - C-style arrays are fixed size.
// - C-style arrays are located in the stack. Therefore, faster to access.
// - They do not have member functions accessible with the member selection operator (.).

//Exercise 8.3 
int arraySum(int* arr, int size){
    int sum = 0; 
    for(int i = 0; i < size; i++){
        sum = sum + *(arr+i);  // *(arr+i) = value at index i == arr[i]
    }

    return sum; 
}
void elementWiseMultiplication(int* arr1, int* arr2, int* result , int size){
for(int i = 0; i < size; i++){
        *(result +i) = (*(arr1 + i)) * (*(arr2 + i)); // same thing as result[i] = arr1[i] * arr2[i]
    }
}
void reverseArray(int* arr, int size){
    int*  last = arr + size - 1; 
    int temp = 0; 
    for(int i = 0; i < size/2; i++){
        temp = *(arr+i);
        *(arr+i) = *(last - i);
        *(last-i) = temp; 
    }
    /**
     * (arr+i)    --> Moves right 
     * (last - i) --> Moves left 
     * 
     * 
     */
}
void printArray(int* arr, int size){
    for(int i = 0; i < size; i++){ std::cout << *(arr + i) << " "; }
    std::cout << std::endl;
}


//Exercise 8.2
bool isPalindromeWArrays(const char array[], int size){

 int middle = size/2;
 for(int i = 0; i < middle; i++){
    int left = i; 
    int right = size - 1 - i; 
    if(array[left]!=array[right]){
        return false;
    }
 }
 return true; 
}
bool isPalindromeWPointers(const char* first, const char* last){
        while(first < last ){
            if(*first != *last){
                return false; 
            }
            first++; 
            last--; 
        }
    return true; 
}


//Example 3: 
void sizeArray(double arr[])
{
    cout << sizeof(double*) << endl;  // this prints the size of the array pointer
    arr[3] = 4.1;                           // you can still access the elements 
    cout << arr[3] << endl;       // even though you don't know the size
    arr[4] = 5.0;                           // but it is error-prone
    cout << arr[4] << endl;
}

//Example 7: Pointers to Structs 
struct Employee {
    int id{};
    int age{};
    double wage{};
};


int main(){


    int num_of_values = 4;          // single integer
    int array_1[4];                 // a size-4 array of integers with uninitialized values (empty)
    int array_2[4] {};  // a size-4 array of integers with all values equal to 0
    int array_3[] {1,2,3,4};        // a size-4 array of integers with initialization

    for (auto i = 0; i < num_of_values; i++) { // std::size(array_3) also works
        cout << array_3[i] <<endl;
    }
    cout<<endl; 
    cout<<" or "<< endl; 
    cout<<endl; 
    for (auto i = 0; i < size(array_3); i++) { // std::size(array_3) also works
        cout << array_3[i] <<endl;
    }
    cout << "---------------------"<< endl; 
    cout << endl;  
    
    double array_d[5]{};        // a size-5 array of floating point numbers
    char array_c[5]{};          // a size-5 array of characters


    //Example 2: C-style arrays act like pointers. The value of array_t is an address
    // Address of the array = address of index [0]. The array STARTS at box [0],
    // so array_t by itself is shorthand for &array_t[0] (same as C).
    // array_t      -> 0x24153ff640  where the array starts
    // &array_t[0]  -> 0x24153ff640  same spot
    // &array_t[1]  -> 0x24153ff648  +8 bytes (one double = 8 bytes)
    // Prediction: &array_t[2] -> ...650, &array_t[3] -> ...658 (hex: 648 -> 650, not 656)
    double array_t[] {1.0,2.0,3.0,4.0};    
    cout << "Example 2"<< endl;    
    cout << array_t <<endl;
    cout << &array_t[0] << endl;
    cout << &array_t[1] << endl; 

    double array_z[] {1.0,2.0,3.0,4.0};  
    cout << array_z[-1] << std::endl;
    cout << array_z[4] << std::endl;
    cout<<"End of Example 2"<<endl; 
    cout<<endl; 



    //Example 3: C-Style Array Decay -> Array converts to a pointer when pass through a function
    // DECAY: using an array name turns it into a pointer to its first element.
    // int arr[5] has type int[5] (knows size). After decay: int* (only knows the start address).
    // Happens on: auto ptr = arr;  and when passing an array to a function.
    // void f(double arr[]) really receives double* arr -> passed by ADDRESS, not by value.
    // sizeof(arr) inside the function = 8 (pointer size), NOT 4 doubles * 8 = 32.
    // arr[3] = 4.1 is OK (last real box). arr[4] = 5.0 writes PAST the end -> undefined behavior.
    // That write can overwrite a neighbor variable (often x), so x prints 5 instead of 0.
    // Fix: pass the size as a separate argument, like C: void f(double arr[], int n)
    // Java never has this problem: arrays carry .length everywhere.
    int arr[5]{ 9, 7, 5, 3, 1 }; // our array has elements of type int
    auto ptr = arr;              // evaluation causes arr to decay, 
                                 // type deduction should deduce type int*
    cout << "Example 3"<< endl;
    double y = 0.0;                    // some extra memory allocation to set up the error
    double x = 0.0;                    // assume this is important for your program
    cout << "first: " << x << endl;       // double-check if it is initialized correctly
    double myArray[4]{1.0,2.0,3.0,4.0};// another important object
    sizeArray(myArray);                // function call
    cout << "Second: " << x << endl;       // what happened to this variable after a 
                                       // function call not related to the variable at all
    cout<<"End of Example 3"<<endl; 
    cout<<endl;


    //Example 4- Pointer Arithmetic 
    // POINTER ARITHMETIC
    // Using + and - to move a pointer is called pointer arithmetic.
    // ptr + n moves n ELEMENTS, not n bytes (address changes by n * sizeof(type)).
    // Make sure the result stays inside the array: [0] to [size-1].
    // Best practice: avoid pointer arithmetic if an alternative exists (use array[i]).
    // Most common use: ptr++ moves to the next element, ptr-- moves to the previous one.
     cout << "Example 4"<< endl;
     double array_p[8];        // size-8 double array in the stack
    double* ptr_ap = &array_p[4];// point to array_d[4]; the 5th element of array_d

    ptr_ap += 2;                 // move ptr 2 elements to the right, now points at array_d[6]
    ptr_ap -= 4;                 // move ptr 4 elements to the left, now points at array_d[2]

    ptr_ap += 100;               // insane: ptr points into an array with just 8 elements
    double d = *ptr_ap;          // illegal: probably a bad value we don't have access to
    *ptr_ap = 12.34;             // illegal: probably scrambles some unknown data
    cout<<"End of Example 4"<<endl; 
    cout<<endl;

    //Exmaple 5: C-Style Strings
    // cout << "Example 5"<< endl;
    //  char array_c[] {'s', 't', 'r', 'i', 'n', 'g'};// size-6 array of characters
    // std::cout << array_c << std::endl;            // cout assumes a C-style string. 
    //                                               // But the last character isn't null
    // char my_string[] { "string" };                // C-style string of size 7. 
    //                                               // Prefer this definition
    // std::cout << my_string << std::endl;
    // my_string[0] = 'S';                    // Characters in the object are modifiable
    // std::cout << my_string << std::endl;
    // my_string = "str";                     // But you can't assign a new string to it.
    // const char* str = "string";            // C-style string defined using a pointer.
    // str[0] = 'S';                          // Characters pointed at are not modifiable
    // cout<<"End of Example 5"<<endl; 
    // cout<<endl;
    //Example 5: C-Style Strings
cout << "Example 5" << endl;
char array_8[] {'s','t','r','i','n','g'};   // size-6 array of characters
std::cout << array_8 << std::endl;          // cout assumes a C-style string, but the last char isn't null
char my_string[] { "string" };              // C-style string of size 7. Prefer this definition
std::cout << my_string << std::endl;
my_string[0] = 'S';                         // Characters in the object are modifiable
std::cout << my_string << std::endl;
// my_string = "str";                       // ILLEGAL: can't assign a new string to an array
std::strcpy(my_string, "str");              // legal way: copy into the array (needs #include <cstring>)
std::cout << my_string << std::endl;
const char* str = "string";                 // C-style string defined using a pointer
// str[0] = 'S';                            // ILLEGAL: characters pointed at are read-only
str = "other";                              // legal: the pointer itself can point somewhere else
std::cout << str << std::endl;
cout << "End of Example 5" << endl;
cout << endl;

//Example 6:     STD::ARRAY
cout << "Example 6" << endl;
// STD::ARRAY  (needs #include <array>)
// A C-style array decays to a pointer at the slightest provocation.
// std::array is the standard library array type that does NOT decay to a pointer.
// Unlike vector and string, std::array is not a handle to elements stored elsewhere:
// its elements live right inside the object.
// Simpler and less flexible than vector: fixed size, can't grow.
// Its size isn't stored in memory; the type remembers it (the 8 in array<int,8>).
// It uses only the memory you create it in (stack or static), just like a C-style array.
array<int,8> arryyy { 0,1,2,3,4,5,6,7 };
array<std::string,4> arrayyy { "Hello", " ", "World!" };  // array_s[3] is the empty string ""
cout << "End of Example 6" << endl;
cout << endl;

//Example 7: Pointers to Structs 
cout << "Example 7" << endl;
Employee joe{ 1, 34, 65000.0 };
joe.age++;
joe.wage = 68000.0;

Employee* ptr_joe{ &joe };  //Same as Employee* ptr_joe = &joe;
//std::cout << ptr_joe.id << '\n';    // Compile error
cout << (*ptr_joe).id << endl; // Not great but works 
cout << ptr_joe->id << endl;;   // Better: use -> to select member
cout << ptr_joe -> age<< endl; 
cout << "End of Example 7" << endl;
cout << endl;



//C-stle arrays decays into pointers when being passed thrpugh a function 
//passing an array always access the addrerss of the first index 
//passing c-style arrays into functions it bcomes a pointer 
/**
 * Difference between Array and Vectors 
 * 
 * Arrays constant fixed size, cant change -->> Located in stacks -> 
 * - like vectors can access elements in for-loop-> have to keep track of size seperatly in a (for-loop).
 * - Arrays are double pointers **
 * 
 * 
 * 
 * 
 * Vectors 
 * - have push.back functions and can change the size --> .size()
 * 
 * memory
 * 1. code 
 * 2. stactic and global variables 
 * 3. Heap -> dynamic allocated -> ask for alocation will code is running (Vectors)
 * 4. Stack -> Arrays 
 * 
 * 
 * 
 * 
 * 
 */


    //Exercise 8.3 ///////////////////////////////////////////////////////
    cout << "Exercise 8.3"<< endl;  
    int a[] = { 1, 2, 3, 4 };
    std::cout << "arraySum {1,2,3,4}: " << arraySum(a, 4) << " (expect 10)" << std::endl;
    int one[] = { 5 };
    std::cout << "arraySum {5}: " << arraySum(one, 1) << " (expect 5)" << std::endl;
    int arr1[] = { 1, 2, 3 };
    int arr2[] = { 4, 5, 6 };
    int result[3];
    elementWiseMultiplication(arr1, arr2, result, 3);
    std::cout << "elementWise {1,2,3}*{4,5,6}: "; printArray(result, 3);
    std::cout << "(expect 4 10 18)" << std::endl;
    int even[] = { 1, 2, 3, 4 };
    reverseArray(even, 4);
    std::cout << "reverse {1,2,3,4}: "; printArray(even, 4);
    std::cout << "(expect 4 3 2 1)" << std::endl;
    int odd[] = { 1, 2, 3 };
    reverseArray(odd, 3);
    std::cout << "reverse {1,2,3}: "; printArray(odd, 3);
    std::cout << "(expect 3 2 1)" << std::endl;
    cout<<"End of Exercise 8.3"<<endl; 
    cout<<endl; 

    //Exercise 8.2 ///////////////////////////////////////////////////////
    cout << "Exercise 8.2"<< endl; 
     const char word[] = "racecar";
    int size = sizeof(word) - 1; 

    const char word1[] = "tesla";
    int size1 = sizeof(word1) - 1; 

    //Array Function
    std::cout << std::boolalpha<< isPalindromeWArrays(word, size) << std::endl;
    std::cout << std::boolalpha<< isPalindromeWArrays(word1, size1) << std::endl;
    //Pointer Function 
    std::cout << std::boolalpha << isPalindromeWPointers(word, word + size - 1) << std::endl;
    std::cout << std::boolalpha << isPalindromeWPointers(word1, word1 + size1 - 1) << std::endl;
    //std::boolalpha allows me to convert 0 -> false and 1 -> true when printing 
    cout<<"End of Exercise 8.2"<<endl; 
    cout<<endl; 






    


    return 0; 
}


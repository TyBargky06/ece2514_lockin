//Strings are error prone 

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
//RUN CODE: 
/**
 * g++ -std=c++17 -Wall main.cpp -o dma.exe
 * .\dma.exe
 * 
 */
using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;
using namespace std; //// lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself


//CLASS NOTES ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// new class notes
void printArray(int* ptr, int max_entries) {
    for (int i = 0; i < max_entries; i++) {
        std::cout << ptr[i] << ' '; 
    }
    std::cout << '\n';
}
void push_back(int*& my_array, int& max_entries,  int new_value) { /// pase max_entries as a reference so i can change the element in main 

    //int* my_array is a pointer reference, ->> duplicates the value 
    //int*& my_array  -> gets everything out of the scoop 
    
    int* new_my_array = new int[max_entries + 1]; // request new memory for the new array
                                             // there are two requests rewarded right now.
    for (int i = 0; i < max_entries; i++) {  // copy the first max_entries elements
        new_my_array[i] = my_array[i];       // of the old array to the new array     
    }
    
    new_my_array[max_entries] = new_value;   // assign the new_value to the last element

    delete[] my_array;       // release the old request. Now we have only one active request
                             // note the square brackets, since we are releasing an array
    my_array = new_my_array; // assign the new address to the pointer variable
    max_entries++;           // update the size of the new array
}




//Stack and heaps 

int main(){


    //CLASS NOTES ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"ClassNotes: Dynamic Memory Allocation"<<endl; 
    //Need to know the address -> only know the address, first address is fixed 
    //Processor gives more momemory until you are out of memory 
    cout<< "How many students in class?";
    int num = 0; 
    cin>> num;
    //Indexing something allways dereferencing the array [] 
    //[] means dereferening the array
    vector<double> grades_v(num); //dma is in vectors, vectors is dma
    //Key word -> "new" //new places the address on top of stack 
    double* grades = new double[num]{}; //grades holds the address like C-Style arrays and vectores
    grades[49] = 78; 
    //now need to return the memory requested
    //Memory Leaks - gives more control on the heaps, lets us handle claear and release memory 
    //must always clear memory --> delete release backs to processor 
    delete[] grades; //changing the size by delete the everytime we change the size of the aarry you have to delete and then push_back 
    //change size = push_back and then delete the old one 

    //Delete grades -> memory leak because theres no []
    //Delete[] grades -> no memory leak 

    int* x = new int{};
    delete[] x; 
    //after delete overide with nullptr(always)
    x = nullptr; 

    //with out pointers heaps and dunamic allocations wont work 
    int* y = new int{};
    //to change y or assign why, must dereference 
    *y = 8; 

////////////////////////////////////////////////////////////////////////////////////
   cout<<"Next CLassNotes"<<endl;
   // remember push_back with vectors
    vector<int> my_vec = { 0,1,2,3,4,5,6,7,8,9 };
    my_vec.push_back(10); // Now the length will be 11 , pushing the value 10 at the end of the vector 

    // let's implement push_back function with dynamically allocated C-style arrays
    int max_entries = 10;    // size of the array
    int* my_array = new int[max_entries];  // request new memory

    for (int i = 0; i < max_entries; i++) { // fill up the old array
        my_array[i] = i; 
    }
    
    printArray(my_array, max_entries); // print the elements of the old array
    std::cout << "address of the old array pointer= " << &my_array << std::endl;
    std::cout << "address of the elements of the old array= " << my_array << std::endl;
    
    push_back(my_array, max_entries, 10); // add a new value to the array
    
    printArray(my_array, max_entries);    // print the elements of the new array
    std::cout << "address of the new array pointer= " << &my_array << std::endl;    
    // pointer is at the same address
    std::cout << "address of the elements of the new array   = " << my_array << std::endl;
    // pointing to the new elements

    cout<<"End of CLassNotes"<<endl;
    cout<<endl; 
    //END OF CLASS NOTES ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    return 0; 
}
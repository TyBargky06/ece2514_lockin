#include <vector>
#include <string>
#include <iostream>


using std::vector; // lets me write vector instead of std::vector all the time and repeating myself 
using std::string;

//std::vector 


int main()  {
     
    vector<string> philosophers = {"Kant", "Plato", "Hume", "Kierkegaard"}; // vector of 4 strings

    //philosophers[2] = 2514; // error : trying to assign an int to a string    
    //v[2] = "Hume";          // error : trying to assign a string to an int    
    //bool test = (philosophers == {"Kant", "Plato", "Hume", "Kierkegaard"}); // error : "==" comparison is not supported for std::vector
    
    // We can also define a vector of a given size without specifying the element values.    
    vector<int> vi(6);    // vector of 6 ints initialized to 0    
    vector<string> vs(4); // vector of 4 strings initialized to "" meaning empty 

    // You cannot simply refer to a nonexistent element of a vector:    
    //vi[20000] = 44; // run-time error

    // 1. Traversing A Vector 
    /**
     * 
     * First element = v[0]
     * Last element = v[v.size()-1]
     * 
     */
    vector<int> v = {5, 7, 9, 4, 6, 8}; // vector of 6 ints   
     // we can print the elements of a vector like this
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << '\n';
    }
    std::cout << "--------------------------"<< '\n';
    // or using a for-each loop, for each x in v
    for (int x : v)
    {
        std::cout << x << '\n';
    }
    std::cout << "--------------------------"<< '\n';


    // 2. Growing a Vector 
    //push_back() ---> member function (adds a new element) to a vector
    vector<double> b; // v starts off empty; that is, v has no elements
    b.push_back(2.7); // add an element 2.7 to v at the end (back)
    b.push_back(5.6); // add an element 5.6 to v at the end (back)
    for (size_t i = 0; i < b.size(); ++i)
    {
        std::cout << b[i] << '\n';
    }
     std::cout << "--------------------------"<< '\n';


     // 3. Vector Operations and String Manipulation 
     /**
      * For a given vector v: 
      * 
      * v.front(): accesses the first element of v
        v.back(): accesses the last element of v
        v.empty(): checks whether v is empty
        v.clear(): clears the contents of v
        v.pop_back(): removes the last element of v
        v.erase(v.begin()+i): removes the i-th element of v. 
        v.resize(new_size): changes the number of elements stored in v to new_size.
      * 
      * 
      * For a given string: 
      * 
      * 
      * The characters in a string are indexed from 0 (leftmost character) to n-1 (rightmost character), where n is the length of the string.
        Can read and write individual characters with the index ([ ]) operator.
      * 
      * str.front(): accesses the first character of str
        str.back(): accesses the last character of str
        str.empty(): checks whether str is an empty string
        str.clear(): clears the contents of str
        str.pop_back(): removes the last character of str
        str.erase(i, 2): removes 2 characters starting from the i-th element of str. 
        str.resize(new_size): changes the number of characters stored in str to new_size
        str.substr(i, 2): returns 2 characters starting from the i-th element of str. .
        tr.substr(2): returns the remaining characters of the string, starting from index 2.
      find(substring): finds the first occurrence of the given substring. If found, returns the index. If not found, returns std::string::npos. 
       rfind(substring): finds the last occurrence of the given substring. If found, returns the index. If not found, returns std::string::npos. 
      * 
      * 
      * 
      * 
      * 
      */
    return 0; 
}
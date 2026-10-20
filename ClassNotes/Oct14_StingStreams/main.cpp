
 
#include <vector>
#include "functions.h"
#include <string>
#include <cctype>

#include <sstream> 
#include <iostream> 

#include <fstream> 
//Class notes 
/**
 * 
 * 
 * 
 * 
 * The output operator (<<) is used to output values from your program into a stream
The input operator (>>) is used to input values to your program from a stream
Standard streams in C++
std::cin tied to the standard input (typically the keyboard)
std::cout tied to the standard output (typically the monitor)
std::cerr tied to the standard error (typically the monitor), providing unbuffered output
std::clog tied to the standard error (typically the monitor), providing buffered output
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */


 using std::cout; 
 using std::cin; 

int main() {
    //[String Streams Picture]
    // // define an ostringstream, named sout 
    // std::ostringstream sout; // Creat a stream object for stream output 
    // sout << "Hello, ";
    // sout << "world!\n";

    // //cout<<"Hello, world";

    // std::ostringstream sout;

    // scout <<"Hello, world\n";

    // // we can print the contents of the sout stream on the console
    // std::cout << sout.str();
    // sout.str(""); // overwrite sout stream with an empty string
    // std::cout << sout.str();

    // // define an istringstream, named sin 
    // std::istringstream sin;
    // sin.str("This class is amazing");
    // string word;
    // while (sin >> word) {
    //     std::cout << word << std::endl;
    // }


    std::ostringstream sout; 
    sout << "Hello, world\n"; //stream type 

    std::string foo = sout.str(); //converts to string type. 

    sout << " and aliens";

    foo = sout.str();

    std::string word1;
    cin >> word1; //Connected to the keyboard

    
    std::istringstream sin; // this is empty --> reads to the first white space 
    sin.str("Hello, world"); //pushes the string in 
    std::string word2;
    sin>>word2;  // output "Hello,"

    std::string word3; 
    sin>>word3; //output "world"



    //reading from a file --->>type the directery when ready in the file 
    std::ifstream fin("../foo.txt"); //fin has the entire file fin is just the name 
    //reading from fin into the world 
    std::string word1;
    fin >> word1; 
    //must create your own error messagee
    if(!fin){
        
        
        std::cerr<<" the file does not exists "; 
    }

    //.eof means end of the file 
    while(fin.eof()) //run the while loop until the end of the file, if you are not atg the end of the file keep running while loopn, use 


    //part 2 of exercisse 
    

    return 0;


}  
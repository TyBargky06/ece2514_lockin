// ===== Lecture 07.1 - String streams and file I/O =====
// I/O STREAMS (see "Input and output (I/O) streams" page for details)
// - Output operator (<<): sends values from your program INTO a stream
// - Input operator  (>>): reads values FROM a stream into your program
// - Standard streams in C++:
//     std::cin  -> standard input  (typically the keyboard)
//     std::cout -> standard output (typically the monitor)
//     std::cerr -> standard error  (typically the monitor), UNBUFFERED output
//     std::clog -> standard error  (typically the monitor), BUFFERED output
// C/Java comparison:
//     std::cin  ~ scanf / Scanner(System.in)
//     std::cout ~ printf / System.out.println
//     std::cerr ~ fprintf(stderr, ...) / System.err.println

// ===== STRING STREAMS =====
// (see "Stream classes for strings" page for details)
// - #include <sstream> to create string stream objects
// - String streams provide a buffer to hold data, just like std::cin and std::cout
// - Unlike std::cin and std::cout, they are NOT connected to an I/O channel
//   (keyboard, monitor, etc.); the "channel" is a string in memory
// C/Java comparison:
//     reading from a string stream ~ sscanf / new Scanner(someString)
//     writing to a string stream   ~ sprintf / StringBuilder
#include <sstream> 
#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>

using std::vector; //// lets me write vector instead of std::vector all the time and repeating myself 
using std::string;  // lets me write string instead of std::string
using namespace std; // lets me write cout or cin instead of std::cout or std::cin all the time and repeating myself
// using namespace std brings in EVERYTHING from std (like Java's import java.util.*;)
//   -> with it, the two lines above aren't needed, but they don't hurt
//   -> risk: name collisions if I name something the same as a std name
// NEVER put using in a header (.h) file; always write std:: there
// using only shortens names; I still need #include <vector>, <string>, <iostream>


int main() {


//Example 1: 

  // ===== ostringstream: WRITE into a string =====
// std::ostringstream sout;   -> empty output stream, like cout but writes to a hidden string
// sout << "Hello, ";         -> adds text to the buffer (nothing prints yet)
// sout.str()                 -> GET the buffer contents as a std::string
// sout.str("")               -> SET/replace the buffer (empty string = clear it)
// Java: ostringstream ~ StringBuilder, << ~ .append(), .str() ~ .toString()
// C:    like sprintf into a char array
    std::ostringstream sout;                                            //The first builds a string with an ostringstream (output).  
    sout << "Hello, ";
    sout << "world!\n";

    // we can print the contents of the sout stream on the console
    cout << sout.str();
    sout.str(""); // overwrite sout stream with an empty string
    std::cout << sout.str();
    cout<< "-------------------------"<< '\n';

   // ===== istringstream: READ from a string =====
    // std::istringstream sin;    -> empty input stream, like cin but reads from a string
    // sin.str("some text");      -> load the string to read from
    // while (sin >> word)        -> reads one word at a time (splits on spaces)
    //                               true if a word was read, false when nothing is left
    // Java: like Scanner sc = new Scanner("some text"); while (sc.hasNext()) word = sc.next();
    // C:    like looping sscanf over a string
    // define an istringstream, named sin                                      
    std::istringstream sin;                                                //The second takes a string apart with an istringstream (input).
    sin.str("This class is amazing");
    string word;
    // ===== Why words stick together =====
// >> skips spaces and stores ONLY the word: word = "This", not "This "
// The original spaces are gone, so YOU must print a separator:
//   cout << word;              -> Thisclassisamazing
//   cout << word << ' ';       -> This class is amazing
//   cout << word << std::endl; -> one word per line (newline + flush)
//   cout << word << '\n';      -> one word per line (newline, no flush)
// Print '\n' after the loop so the next output starts on a new line
// ' ' and '\n' are single chars, same as C/Java
    while (sin >> word) {
        std::cout << word << std::endl; ;
    }
    cout<< "-------------------------"<< '\n';
    /**
     * Prints: 
     * Hello, world!
    -------------------------
    This
    class
    is
    amazing
     * 
     * 
     */

     //Example 2: FILE I/0
     // <fstream>   Header to read from and write into files


     // Case 1: Read from an existing file: 
      // define an ifstream, named fin that reads from an existing file
    string file_name = "foo.txt";
    std::ifstream fin(file_name);

    //MUST CREATE YOUR OWN ERROR MESSAGE --> ALWAYS CHECK TO SEE IF THE FILE EXISTS
    // check if the file is open
    if (!fin) {  // // check if the file is open
        std::cerr << "File does not exist!\n";
    }

    // Case 2: read from the file word by word
    string word1{};
    while (fin >> word1) { // While there's still stuff left to read
        std::cout << word1 << '\n';
    }// When fin goes out of scope, the file will be closed.
      cout<< "-------------------------"<< '\n';


    // Case 3: overwrote the existing file. 
    // define an ofstream, named fout that writes to a file
    string file2_name = "../foo.txt";
    //std::ofstream fout(file2_name);
    //fout << "ECE2514\n";

    // Case 4: Write to an existing file
     std::ofstream fout(file2_name, std::ios::app);
    
    if (!fout) { // Always check if you open an existing file
        std::cerr << "Uh oh, foo.txt could not be opened for writing!\n";
        return 1; // Print an error and exit
    }

    fout << "This is line 2\n";




    return 0;
}  
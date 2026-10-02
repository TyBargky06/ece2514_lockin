#include <iostream> // provides std::cout for printing
#include "functions.h" // provides all four function declarations and their required types

int main() { // begin program execution
    std::vector<int> numbers = {5,3,9,1,9,5}; // create the second-largest example
    int second = findSecondLargest(numbers); // call the function and store its returned integer
    std::cout << "Second largest: " << second << "\n"; // print the expected answer 5

    std::vector<int> original = {1,2,3,4,5}; // create the vector to rotate
    std::vector<int> rotated = rotateVector(original, 2); // store the new vector rotated right by 2

    std::cout << "Rotated: "; // print a label before the vector elements
    for (int number : rotated) { // visit each element of the returned vector
        std::cout << number << " "; // print the current element followed by a space
    } // end the printing loop
    std::cout << "\n"; // move subsequent output onto a new line

    std::string sentence = "the quick brown fox"; // create the longest-word example
    int length = longestWord(sentence); // call the function and store its returned length
    std::cout << "Longest word length: " << length << "\n"; // print the expected length 5

    std::string message = "Hello Aliens"; // create the string whose vowels will be removed
    removeVowels(message); // modify message directly; this function returns no value
    std::cout << "Without vowels: " << message << "\n"; // print the modified string Hll lns

    return 0; // finish the program successfully

    //g++ -std=c++17 main.cpp functions.cpp -o main.exe
    // run the compiled executable
    // .\main.exe
} 


// 1. RUN MAIN LOCALLY — SEE YOUR PROGRAM'S OUTPUT
// Save all edited files first: Ctrl+K, then S.
// Open the terminal in the project folder containing CMakeLists.txt.

// Configure the project once; repeat if the build configuration changes:
// cmake -S . -B build

// Build the program; repeat this after changing and saving code:
// cmake --build build

// Run main to see your printed output or enter requested input:
// .\build\main.exe

// If your executable is inside build\Debug instead, run:
// .\build\Debug\main.exe

// If compilation fails, fix the errors before running again.
// Running an old executable does NOT check your newest edits.
// No GitHub push or autograder submission is needed for local output.



// 2. RUN THE PROVIDED TEST FILE — CHECK EXPECTED RESULTS
// Open tests.cpp and read which tests are enabled.
// Uncomment the provided tests as instructed by your professor.
// Remove // from commented test lines or /* ... */ around test blocks.
// Keep the required test includes and complete TEST_CASE blocks.
// Do not change expected answers just to make a test pass.
// Save tests.cpp, functions.cpp, and functions.h.

// Configure if you have not already configured this project:
// cmake -S . -B build

// Rebuild so the executable includes your latest code and enabled tests:
// cmake --build build

// Run the test executable:
// .\build\tests.exe

// If the test executable is inside build\Debug instead, run:
// .\build\Debug\tests.exe

// Read the summary: passed assertions, failed assertions, and test cases.
// For a failure, compare the actual result with the expected result.
// Fix your function, save, rebuild, and rerun the tests.
// Repeat until all provided tests pass.

// Also check relevant edge cases in main:
// Empty vectors or strings; one element; duplicates; negative values.
// Boundary scores; zero repetitions; equal numbers; century years.
// Passing tests checks those cases, not every possible input.
// Local tests do NOT require a GitHub push or autograder submission.


// 3. PUSH TO GITHUB — THEN SUBMIT TO THE AUTOGRADER
// Use the exam repository supplied by your professor.
// Open the terminal inside that repository, not your general class folder.
// Save your files and run the local build/tests first.

// Check the repository and inspect which files changed:
// git status

// Confirm that this is the correct exam GitHub repository:
// git remote -v

// Stage your three solution files:
// git add functions.h functions.cpp main.cpp

// If other files must be submitted, stage their exact filenames too.
// Stage tests.cpp only if your professor expects your test-file changes.

// Record the staged changes in a local commit:
// git commit -m "Complete exam solutions"

// Upload your commit to the configured GitHub repository:
// git push

// Check that no intended changes remain uncommitted:
// git status

// Open GitHub and verify that your latest code and commit are visible.
// Open the exam's autograder submission link.
// Select the correct repository and branch, then submit.
// Wait for the result and check compilation errors or failed tests.

// Git push uploads code; it does NOT submit to the autograder.
// After a correction: save -> build -> test -> add -> commit -> push.
// Then resubmit to the autograder if needed.
// Your exam instructions allow only FIVE autograder submissions.

// If Git says "not a git repository," stop:
// Open the actual exam repository folder before using Git commands.
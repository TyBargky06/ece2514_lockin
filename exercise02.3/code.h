// =============================================================
// code.h
// -------------------------------------------------------------
// Header file: declares (but does not implement) the function
// that judges one round of Rock Paper Scissors. code.cpp,
// main.cpp, and tests.cpp all #include this file so they agree
// on the function's name, parameter types, and return type.
// =============================================================

#pragma once
// A modern, simpler alternative to the old #ifndef/#define/#endif
// "include guard" pattern. It tells the compiler "only ever
// process this exact file once per build," which prevents the
// declaration below from accidentally being pasted in twice if
// more than one .cpp file #includes "code.h" and they all get
// compiled together. Almost all modern compilers (including the
// one your course uses) support #pragma once.

int playRockPaperScissors(char computer_choice, char user_choice);
// This is a function PROTOTYPE (a declaration with no body/braces).
// It tells the compiler "this function exists somewhere -- here is
// its name, its parameter types, and its return type" -- the
// actual code that runs lives in code.cpp.
//
//   int                     -> the function returns a whole number:
//                              0 = draw, 1 = user wins, 2 = computer wins
//   playRockPaperScissors   -> the function's name; must be spelled
//                              exactly this way in code.cpp and
//                              wherever it's called (main.cpp, tests.cpp)
//   char computer_choice    -> 1st parameter: a single character
//                              holding the computer's move
//                              ('r' = rock, 'p' = paper, 's' = scissors)
//   char user_choice        -> 2nd parameter: a single character
//                              holding the user's move, same letters
//   ;                       -> semicolon ends a declaration (no body)
cmake_minimum_required(VERSION 3.9...3.19)
project(exercise CXX)

# require a C++11 compiler for all targets
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(part1 part1.cpp)
add_executable(part2 part2.cpp)

target_compile_options(part1 PRIVATE -Werror -Wall -Wextra -Wconversion -Wnarrowing -Wpedantic -Wno-sign-compare -Wno-unused-variable)
target_compile_options(part2 PRIVATE -Werror -Wall -Wextra -Wconversion -Wnarrowing -Wpedantic -Wno-sign-compare -Wno-unused-variable)


# -Werror: Treat warnings as errors. Without this flag a warning is generated when compiling, but you might miss it.
# -Wall: A better name would be -Wcommon. It enables common warnings like use of uninitialized variables.
# -Wextra: Some more common warnings not enabled by -Wall.
# -Wconversion: Enables warnings about conversions that might change the value like float to int.
# -Wpedantic: This enables strict standard conformance.
# -Wno-sign-compare: This disables warnings/errors for unsigned integers comparisons in for loops.
# -Wno-unused-variable: This disables warnings/errors for unused variables.
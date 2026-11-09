cmake_minimum_required( VERSION 3.10 )
project(exercise LANGUAGES CXX )

# require a C++17 compiler for all targets
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp)
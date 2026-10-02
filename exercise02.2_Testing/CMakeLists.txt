cmake_minimum_required( VERSION 3.10 )
project(exercise LANGUAGES CXX )

# require a C++17 compiler for all targets
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



# add Catch2 library
Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests code.h code.cpp tests.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
cmake_minimum_required (VERSION 3.18)
cmake_policy(VERSION 3.18)

#set(CMAKE_CXX_COMPILER "clang++")

include(FetchContent)
FetchContent_Declare(
  FetchedBux
  GIT_REPOSITORY https://github.com/buck-yeh/bux.git
  GIT_TAG        main
  SOURCE_DIR     ../bux
)
FetchContent_MakeAvailable(FetchedBux)

project(bracketPairing)

string(APPEND CMAKE_CXX_FLAGS "-Wall -Wextra -Wshadow -Wconversion -Wno-parentheses -Wno-unknown-pragmas -Wno-potentially-evaluated-expression -O3 -std=c++2a")

add_library(bracketPairing STATIC BracketBalance.cpp StrLiteralScanner.cpp)
target_include_directories(bracketPairing PRIVATE ../bux/include)
#add_dependencies(bracketPairing FetchedBux)

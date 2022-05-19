cmake_minimum_required (VERSION 3.18)
cmake_policy(VERSION 3.18)

#set(CMAKE_CXX_COMPILER_ID "Clang")

if(NOT DEFINED DEPENDEE_ROOT)
set(DEPENDEE_ROOT "..")
endif()

if(DEFINED FETCH_DEPENDEES)
include(FetchContent)
FetchContent_Declare(
  FetchedBux
  GIT_REPOSITORY https://github.com/buck-yeh/bux.git
  GIT_TAG        main
  SOURCE_DIR     ${DEPENDEE_ROOT}/bux
)
FetchContent_MakeAvailable(FetchedBux)
endif()

project(bracketPairing)

string(APPEND CMAKE_CXX_FLAGS " -Wall -Wextra -Wshadow -O3 -std=c++20")
IF(DEFINED FETCH_DEPENDEES)
    string(APPEND CMAKE_CXX_FLAGS " -I${FetchedBux_SOURCE_DIR}/include")
ELSE()
    string(APPEND CMAKE_CXX_FLAGS " -I../${DEPENDEE_ROOT}/bux/include")
ENDIF()

add_library(bracketPairing STATIC BracketBalance.cpp StrLiteralScanner.cpp)
target_include_directories(bracketPairing PRIVATE ${DEPENDEE_ROOT}/bux/include)
#add_dependencies(bracketPairing FetchedBux)

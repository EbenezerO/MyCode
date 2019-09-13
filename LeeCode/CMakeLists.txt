cmake_minimum_required(VERSION 3.14)
project(MyCode)

set(CMAKE_CXX_STANDARD 14)
set(debug)

include_directories()
add_executable(A4 sortList.cpp )
add_executable(B4 hasCycle.cpp)
add_executable(C4 detectCycle.cpp)
add_executable(D4 candy.cpp)
add_executable(E4 partition.cpp)
add_executable(F4 minCut.cpp)
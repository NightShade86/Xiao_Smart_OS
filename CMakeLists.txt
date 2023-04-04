cmake_minimum_required(VERSION 3.21)
project(C___Semester_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___Semester_Project main.cpp)

target_link_libraries(C___Semester_Project winmm)
cmake_minimum_required(VERSION 3.12)
project(TheMethodofProgramming C)

set(CMAKE_C_STANDARD 99)

add_executable(TheMethodofProgramming main.c chapter01/main.cpp)

add_subdirectory(chapter01)
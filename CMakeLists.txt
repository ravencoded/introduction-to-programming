cmake_minimum_required(VERSION 3.30)
project(introduction_to_programming C)

set(CMAKE_C_STANDARD 11)

add_executable(introduction_to_programming
        Lecture1/welcomeToC.c
        Lecture2/variables.c)

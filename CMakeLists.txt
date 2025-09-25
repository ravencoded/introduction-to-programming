cmake_minimum_required(VERSION 3.30)
project(introduction_to_programming C)

set(CMAKE_C_STANDARD 11)

add_executable(introduction_to_programming
        Lecture1/welcomeToC.c
        Lecture2/variables.c
        Lecture2/scanfPractice.c
        Lecture2/scanfPractice2.c
        Lecture3/ifelsePractice.c
        Lecture1/welcomeToCagain.c
        Lecture2/scanfPractice3.c
        Lecture2/scanfPractice4.c
        Lecture3/ifelsePractice2.c
        Lecture4/switchPractice.c
        Lecture6/whiledoWhileFor.c
)

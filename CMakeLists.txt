cmake_minimum_required(VERSION 4.1)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_library(untitled STATIC library.c
        Exercises/Chapter2/exercise_3/exercise_3.c
        "Projects/Chapter2/Project2/project2.c"
        Projects/Chapter2/Project4/project4.c
        Projects/Chapter2/Project5/project5.c
        Projects/Chapter2/Project6/project6.c
        Projects/Chapter2/Project7/project7.c
        Projects/Chapter2/Project8/project8.c
        Exercises/Chapter3/Exercise2/exercise2.c
        Exercises/Chapter3/Exercise6/exercise6.c
        Projects/Chapter3/Project1/project1.c
        Projects/Chapter3/Project2/project2.c
        Projects/Chapter3/Project3/project3.c
        Projects/Chapter3/Project4/project4.c
        Projects/Chapter3/Project5/project5.c
        Projects/Chapter3/Project6/project6.c
        Projects/Chapter4/Project1/project1.c
        Projects/Chapter4/Project2/project2.c
        Projects/Chapter4/Project4/project4.c
        Projects/Chapter4/Project5/project5.c
        Exercises/Chapter5/Exercise5/exercise5.c
)

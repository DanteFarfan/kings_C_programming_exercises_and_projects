cmake_minimum_required(VERSION 4.1)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_library(untitled STATIC library.c
        Exercises/exercise_3/exercise_3.c
        "Projects/Project2/project2.c"
        Projects/Project4/project4.c
        Projects/Project5/project5.c
        Projects/Project6/project6.c
        Projects/Project7/project7.c
        Projects/Project8/project8.c)

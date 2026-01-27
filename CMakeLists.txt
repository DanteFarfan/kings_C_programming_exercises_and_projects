cmake_minimum_required(VERSION 4.1)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_library(untitled STATIC library.c
        Exercises/exercise_3/exercise_3.c)

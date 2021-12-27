cmake_minimum_required(VERSION 3.21)
project(polynomes C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(polynomes
        polynome.c
        polynome.h main.c)

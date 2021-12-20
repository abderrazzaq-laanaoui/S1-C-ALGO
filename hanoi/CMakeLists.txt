cmake_minimum_required(VERSION 3.21)
project(hanoi C)

set(CMAKE_C_STANDARD 11)

add_executable(hanoi
        main.c)
target_link_libraries(hanoi m)

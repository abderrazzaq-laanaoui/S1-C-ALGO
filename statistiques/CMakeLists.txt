cmake_minimum_required(VERSION 3.21)
project(app1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(app1
        app.c
        statistiques.c
        statistiques.h)
target_link_libraries(app1 m)

cmake_minimum_required(VERSION 3.15)
project(Csem C)

set(CMAKE_C_STANDARD 99)

add_executable(Csem main.c matrix.c matrix.h list.c list.h node.c node.h)

target_link_libraries(Csem m)
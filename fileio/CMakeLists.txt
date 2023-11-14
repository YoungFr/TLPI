cmake_minimum_required(VERSION 3.0)

project(fileio)

include_directories(./include)

add_compile_options(-Wall -std=c99 -O2)

add_executable(copy copy.c get_num.c error_functions.c)

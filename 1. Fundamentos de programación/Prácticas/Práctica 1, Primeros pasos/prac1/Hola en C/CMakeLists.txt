cmake_minimum_required(VERSION 3.23)
project(Hola_en_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Hola_en_C
        hola.c)

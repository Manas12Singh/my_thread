cmake_minimum_required(VERSION 3.26)
project(my_thread C)

set(CMAKE_C_STANDARD 90)

add_executable(main.c
        my_thread.c
        my_thread.h
        main.c
)

cmake_minimum_required(VERSION 3.30)
project(dsa_class_practice)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(november-11th)
include_directories(november-12th)
include_directories(november-26th)
include_directories(october-22nd)
include_directories(october-28th)
include_directories(october-29th)

add_executable(dsa_class_practice
    november-11th/array.cpp
    november-12th/array-2d.cpp
    november-12th/complexity.cpp
    november-12th/loop.cpp
    november-12th/pointers.cpp
    november-26th/BigO.cpp
    october-22nd/001.cpp
    october-22nd/Amount.cpp
    october-22nd/Binary.cpp
    october-22nd/Greeting.cpp
    october-22nd/Hello.cpp
    october-22nd/Word.cpp
    october-28th/Diffrence.cpp
    october-28th/Hypothenuse.cpp
    october-28th/Overloading.cpp
    october-28th/Power.cpp
    october-29th/Exercise01.cpp
    october-29th/Fibonacci.cpp
    october-29th/OOP.cpp
    october-29th/Power.cpp
    october-29th/Printer.cpp
    october-29th/Recursion.cpp)

cmake_minimum_required(VERSION 3.16)
project(zad3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(/utf-8)
endif()

add_executable(zad3 main.cpp)

enable_testing()
add_test(NAME zad3 COMMAND zad3)
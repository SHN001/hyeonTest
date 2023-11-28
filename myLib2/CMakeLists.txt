cmake_minimum_required(VERSION 3.10)
project(myLib2)

add_library(myLib2 STATIC src/myLib2.cpp)

target_include_directories(myLib2 PUBLIC include)
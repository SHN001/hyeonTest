cmake_minimum_required(VERSION 3.10)

project(myLib1)

add_library(myLib1 STATIC src/myLib1.cpp)

target_include_directories(myLib1 PUBLIC include)
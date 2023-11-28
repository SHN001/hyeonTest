cmake_minimum_required(VERSION 3.10)
project(myDll1)

add_library(myDll1 SHARED src/myDll1.cpp)
target_include_directories(myDll1 PUBLIC include)
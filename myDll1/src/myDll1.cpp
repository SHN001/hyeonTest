#include <myDll1/myDll1.h>
#include <iostream>

#define FUNC_API

FUNC_API void myDll1()
{
    std::cout<< "myDll1" <<std::endl;
}
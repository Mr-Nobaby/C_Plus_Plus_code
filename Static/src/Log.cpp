#include "Log.h"
#include <iostream>

void Log(const char* msg)
{
    std::cout << msg << std::endl;
}

void LogNum(const int& num)
{
    std::cout << num << std::endl;
}
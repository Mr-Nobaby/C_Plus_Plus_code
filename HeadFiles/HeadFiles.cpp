// HeadFiles.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Log.h"
#include "Log.h"

void Log(const char* msg)
{
    std::cout << msg << std::endl;
}

int main()
{
    InitLog();
    Log("msg");
    std::cin.get();
}

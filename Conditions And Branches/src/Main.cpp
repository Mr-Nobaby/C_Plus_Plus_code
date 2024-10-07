// HeadFiles.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Log.h"




int main()
{
    int x = 5;
    //const char* ptr = "ptr test";
    const char* ptr = NULL;

    bool result = x == 6;
    if (ptr)
        Log("ptr");
    else
        Log("Null");
    
    std::cin.get();

}

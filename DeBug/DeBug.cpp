// HeadFiles.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Log.h"




int main()
{
    int num = 8;
    num++;
    const char* string = "Hello";

    for (int i = 0; i < 5; i++)
    {
         const char c = string[i];

         std::cout << c << std::endl;

        //Log(&c);
    }
    //InitLog();
    Log("msg");
    std::cin.get();

}

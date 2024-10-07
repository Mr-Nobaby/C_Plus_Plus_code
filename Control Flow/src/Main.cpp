// HeadFiles.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Log.h"


int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i>2)
			return 0;
		Log("Hello World");
		std::cout << i << std::endl;
	}
    std::cin.get();

}

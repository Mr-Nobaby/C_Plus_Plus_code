// Functions.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int Multiply(int a, int b)
{
    //return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}


int main()
{
    MultiplyAndLog(3, 5);
    MultiplyAndLog(54, 5);

    MultiplyAndLog(65, 76);

    std::cin.get();
}



#define  _CRT_SECURE_NO_WARNINGS 1
#define int_32 int
#include <iostream>
#include "log.h"



 int_32 Multiply(int a, int b)
{
	log("Multiply");
	return a * b;
}
//#include "test.h"


int main()
{
	std::cout << Multiply(4, 9) << std::endl; // 打印一个int占多少内存
	std::cout << sizeof(short); // 打印一个int占多少内存

	std::cin.get();
	return 0;
}
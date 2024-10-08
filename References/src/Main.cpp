#include <iostream>

#define Log(x) std::cout<< x << std::endl

void Increment(int* value)
{
	(*value)++;
}

void Increment2(int& value)
{
	value++;
}
int main()
{
	int var = 8;

	//int& ref = var;
	//ref = 0;
	//Log(ref);

	Increment(&var);
	Increment2(var);

	Log(var);

	std::cin.get();
}

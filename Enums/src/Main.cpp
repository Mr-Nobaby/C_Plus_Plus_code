#include <iostream>

#define Log(x) std::cout<< x << std::endl

enum Example : char
{
	A=2,
	B=4,
	C=9
};

int a = 0;
int b = 0;
int c = 0;



int main()
{
	int val = B;
	if (1 == val)
	{
		//Do Something
		Log(B);

	}

	std::cin.get();
}

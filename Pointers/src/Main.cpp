#include <iostream>

#define Log(x) std::cout<< x << std::endl

int main()
{
	//void* ptr = NULL;
	//void* ptr = nullptr;
	//Log(NULL);

	int var = 8;
	//double* var_ptr = (double*)&var;
	//void* var_ptr = &var;:
	int* var_ptr = &var;

	*var_ptr = 10;
	Log(var);

	char* buf = new char[8];
	memset(buf, 3, 8);

	char** buf_ptr = &buf;
	delete[] buf;
	std::cin.get();
}

#define  _CRT_SECURE_NO_WARNINGS 1

#include "log.h"

void log(const char* msg)
{
	std::cout << msg << std::endl;
}
void initLog()
{
	log("init successful");
}

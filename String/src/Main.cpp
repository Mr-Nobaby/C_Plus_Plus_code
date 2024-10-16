#include <iostream>
#include <string>
#include <stdlib.h>

void PrintString(const std::string& string)
{
    //string += 'd';

    std::cout << string << std::endl;
}

int main() 
{
    std::string name = "m f \0l";
    name += "Hello";
    name[1] = 's';
    int size = name.size();
    std::cout << "Modified Name: " << name.size() << std::endl;

    const wchar_t* name2 = L"mfl";
    std::cout << " Name: " << name2 << std::endl;

}

#include <iostream>

class Entity
{
public:
public:
    static const int size = 5;
    int example[size];
    Entity()
    {
        for (int i = 0; i < 5; i++)
            example[i] = 2;
    }
};


int main() {

    int example[5];
    int* ptr = example;
    example[0] = 12;
    example[4] = 4;
    for (int i = 0; i < sizeof(example)/4; i++)
    {
        std::cout << *(ptr+i) << std::endl;

    }

    int* ptr2 = new int[5];
    int count = sizeof(ptr2) / sizeof(int);
    std::cout << count << std::endl;

    delete[] ptr2;
    return 0;
}

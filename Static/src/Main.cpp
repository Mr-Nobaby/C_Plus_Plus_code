// HeadFiles.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
#include "Log.h"

int s_var;

void Function()
{

}
struct Entity
{
     int x, y;
    //static void Print()
    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};
//int Entity::x;
//int Entity::y;

static void Print(Entity e)
{
    std::cout << e.x << "," << e.y << std::endl;
}

int main()
{
    LogNum(s_var);
    //std::cout << s_var << std::endl;

    Entity e;
    e.x = 9;
    e.y = 7;
    //Entity e1 = { 2,7 };
    Entity e1;
    e1.x = 0;
    e1.y = 6;
    //int Entity::x = 1;
    //int Entity::y = 2;
    //Entity::Print();
    //Entity::Print();
    Print(e);
    Print(e1);
    std::cin.get();
}

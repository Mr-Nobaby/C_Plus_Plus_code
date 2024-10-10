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

//局部变量中的 static
void countCalls() 
{
    //函数内部定义的静态变量，其作用是使该变量在函数结束后不被销毁，
    //并且在函数的下一次调用时能够保留上次的值。静态局部变量只会在
    //程序执行时初始化一次。
    static int count = 0;  // 只初始化一次
    count++;
    std::cout << "函数已被调用 " << count << " 次" << std::endl;
}


class MyClass {
public:
    MyClass() 
    {
        count++;
    }
    //静态成员变量是类级别的变量，而不是属于某个具体的对象。
    //所有类的对象共享同一个静态成员变量。
    static int count;  // 静态成员变量声明
    //静态成员函数属于类本身，而不是类的某个对象。
    //它只能访问静态成员变量，不能访问非静态成员变量和成员函数。
    static void ShowCount()
    {
        std::cout << "当前数量: " << count << std::endl;
    }

};

// 静态成员变量定义
int MyClass::count = 0;

int main()
{
    //LogNum(s_var);
    ////std::cout << s_var << std::endl;

    //Entity e;
    //e.x = 9;
    //e.y = 7;
    ////Entity e1 = { 2,7 };
    //Entity e1;
    //e1.x = 0;
    //e1.y = 6;
    //int Entity::x = 1;
    //int Entity::y = 2;
    //Entity::Print();
    //Entity::Print();
    //Print(e);
    //Print(e1);

    //countCalls();
    //countCalls();
    //countCalls();

    MyClass obj1;
    //std::cout << "对象数量: " << MyClass::count << std::endl;
    obj1.ShowCount();

    MyClass obj2;
    //std::cout << "对象数量: " << MyClass::count << std::endl;
    obj2.ShowCount();

    MyClass::ShowCount();
    //std::cin.get();
}

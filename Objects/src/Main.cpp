#include<iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity(): m_Name("Unkown"){}
    Entity(const String& name): m_Name(name){}
    const String& GetName() const { return m_Name; }

};

class Example
{
public:
    Example()
    {
        std::cout << "Created Entity!" << std::endl;
    }
    Example(int x)
    {
        std::cout << "Created Entity with " << x << "!" << std::endl;
    }
};

void Function()
{
    Entity e1("mdl");

}

int main() 
{
    int a = 2;
    int* b = new int[5];
    delete[] b;
    //new 是 C++ 的语法，分配内存并调用构造函数。
    Entity* e = new Entity();
    //malloc 是 C 语言的标准库函数，只分配内存，不调用构造函数。
    Entity* e = (Entity*)malloc(sizeof(Entity));

    delete e;
    return 0;

}
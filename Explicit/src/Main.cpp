#include<iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
    int m_Age;
    
public:
    //explicit:防止构造函数或类型转换运算符进行隐式类型转换
    //它用于控制类的构造函数或类型转换函数，确保它们只能通过显式调用进行转换，而不能通过隐式方式自动触发。
    explicit Entity(int age)
        : m_Name("Unkown"),m_Age(age){}
    Entity(const String& name)
        : m_Name(name),m_Age(-1){}
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

void Print(const Entity& e)
{
    //printf("")
}

int main() 
{
    Print(34);
    Print(String("mdl"));
    Entity e = String("mdl");
    Entity b = 12;
}
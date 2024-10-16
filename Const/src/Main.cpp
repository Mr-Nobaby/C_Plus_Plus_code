#include <iostream>
#include <string>
#include <stdlib.h>

class Entity
{
public:
    Entity() : m_X(0), m_Y(0), m_Name("Default Name"), var(0), count(0) {}

    int GetX() const
    {
        var = 1;
        return m_X;
    }
    const std::string& GetName() const
    {
        count++;
        return m_Name;

    }
private:
    int m_X, m_Y;
    std::string m_Name;
    mutable int var;
    mutable int count;

};

void PrintEntity(const Entity& e)
{
    std::cout << e.GetX() << std::endl;
}

int main() 
{
    //在 const Entity e; 中调用非 const 方法
    const Entity e;
    e.GetName();
    const int MAX_AGE = 90;
    const int* a = new int;
    //*a = 2; 
    a = (int*)&MAX_AGE; 
    std::cout << *a << std::endl;

    int x = 9;
    auto f = [=]() mutable
        {
            x++;
            std::cout << x << std::endl;

        };
    f();
    std::cout << x << std::endl;

}

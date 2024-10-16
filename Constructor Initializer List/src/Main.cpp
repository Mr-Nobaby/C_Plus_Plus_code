#include <iostream>
#include <string>
#include <stdlib.h>

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

class Entity
{
private:
    int goat;
    std::string m_Name;
    Example m_exp;
public:
    Entity()
        :goat(0),m_Name("Unkown"), m_exp(4)
    {
        //m_exp = Example(3);
    }
    Entity(int x, const std::string& name)
        :goat(x), m_Name(name)
    {
    }
    const std::string& GetName() const{ return m_Name; }
    const int GetGoat() const { return goat; }

};


int main() 
{
    Entity e0;
    std::cout << e0.GetName() << std::endl;
    std::cout << e0.GetGoat() << std::endl;

    Entity e1(92,"mfl");
    std::cout << e1.GetName() << std::endl;
    std::cout << e1.GetGoat() << std::endl;

}

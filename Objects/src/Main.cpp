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
    //new �� C++ ���﷨�������ڴ沢���ù��캯����
    Entity* e = new Entity();
    //malloc �� C ���Եı�׼�⺯����ֻ�����ڴ棬�����ù��캯����
    Entity* e = (Entity*)malloc(sizeof(Entity));

    delete e;
    return 0;

}
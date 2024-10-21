#include<iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
    int m_Age;
    
public:
    //explicit:��ֹ���캯��������ת�������������ʽ����ת��
    //�����ڿ�����Ĺ��캯��������ת��������ȷ������ֻ��ͨ����ʽ���ý���ת����������ͨ����ʽ��ʽ�Զ�������
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
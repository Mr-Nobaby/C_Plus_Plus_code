#include<iostream>
#include <string>
#include <memory>

//using String = std::string;

class Entity
{
private:

public:
	int x, y;
	Entity()
	{
		std::cout << "Created Entity" << std::endl;

	}
	~Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;

	}
	void Print(){}
};


struct Vector
{
	float x, y;
};

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}
	~String()
	{
		delete[] m_Buffer;
	}
	String(const String& other)
		:m_Size(other.m_Size)
	{
		std::cout << "copied the string" << std::endl;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);

	}
	char& operator[](unsigned int index)
	{
		return m_Buffer[index]; 

	}
	friend std::ostream& operator<<(std::ostream& stream, const String& string);

};
std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;

}

void Print(const  String& str)
{
	std::cout << str << std::endl;

}
//1. ǳ���ƣ�Shallow Copy����
//ǳ������ָ�ڸ��ƶ���ʱ�������ƶ����ָ������ã�������Ϊ��̬������ڴ���ⲿ��Դ�����µĸ�����
//��ˣ�ǳ���ƺ����������Ṳ����ͬ�ĵײ����ݡ��������һ�������޸�����Щ��������ݣ���һ������Ҳ���ܵ�Ӱ�졣
//�� C++ �У�Ĭ�ϵĿ������캯���͸�ֵ������ͨ��ִ�е���ǳ���ƣ��ر��ǵ����������̬�����ڴ棨����ͨ��ָ�����ϵ����ݣ���
//2. ��ƣ�Deep Copy����
//�����ᴴ��һ�������ĸ���������Ϊ��̬������ڴ洴��һ���µĿ����������ǽ�������ָ�롣
//����ζ�Ÿ��ƺ������������ӵ�ж�������Դ���޸�����һ�����󲻻�Ӱ����һ����


int main() 
{
	int a = 9;
	int b = a;

	Vector* c = new Vector;
	Vector* d = c;

	String str1 = "mfl";
	String str2 = str1;

	str2[1] = 'o';
	Print(str1);
	Print(str2);

	d->x = 9;
}
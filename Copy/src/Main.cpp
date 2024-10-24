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
//1. 浅复制（Shallow Copy）：
//浅复制是指在复制对象时，仅复制对象的指针或引用，并不会为动态分配的内存或外部资源创建新的副本。
//因此，浅复制后的两个对象会共享相同的底层数据。如果其中一个对象修改了这些共享的数据，另一个对象也会受到影响。
//在 C++ 中，默认的拷贝构造函数和赋值操作符通常执行的是浅复制，特别是当对象包含动态分配内存（比如通过指针或堆上的数据）。
//2. 深复制（Deep Copy）：
//深复制则会创建一个独立的副本，包括为动态分配的内存创建一份新的拷贝，而不是仅仅复制指针。
//这意味着复制后，两个对象各自拥有独立的资源，修改其中一个对象不会影响另一个。


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
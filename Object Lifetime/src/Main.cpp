 #include<iostream>
#include <string>

using String = std::string;

class Entity
{
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
private:

};

//int* CreateArray()
//{
//	int array[5];
//	return array;
//}

class ScopePtr
{

private:
	Entity* m_Ptr;
public:
	ScopePtr(Entity* ptr)
		:m_Ptr(ptr){}
	~ScopePtr()
	{
		delete m_Ptr;
	}



};



int main() 
{

	{
		ScopePtr e = new Entity();
		//Entity* e = new Entity();
	}

}
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
	void Print()const { std::cout << "test" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		:m_Obj(entity)
	{

	}
	~ScopedPtr()
	{
		delete m_Obj;
	}
	Entity* GetEntity() { return m_Obj; }
	Entity* operator->()
	{
		return m_Obj;
	}
};

struct Vector3
{
	float x, y, z;
};

int main()
{
	//Entity e;
	//e.Print();
	//Entity* ptr = &e;
	//ptr->Print();

	//ScopedPtr entity = new Entity();
	//entity.GetEntity()->Print();
	//entity->Print();
	char offect = (char)&((Vector3*)NULL)->y;
	int offect2 = (int)&((Vector3*)NULL)->y;

	std::cout << offect << std::endl;
	std::cout << offect2 << std::endl;


}
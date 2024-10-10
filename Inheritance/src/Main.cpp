#include <iostream>

//#define Log(x) std::cout<< x << std::endl

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = Y = 0.0f;
	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

};

class Player : Entity
{
public:
	const char* name;

	//float X, Y;
	//void Move(float xa, float ya)
	//{
	//	X += xa;
	//	Y += ya;
	//}

	void PrintName()
	{
		std::cout << name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;
	std::cin.get();
}

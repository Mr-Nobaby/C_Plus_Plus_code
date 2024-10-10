#include <iostream>

//#define Log(x) std::cout<< x << std::endl

class Entity
{
public:
	float X, Y;

	Entity()
	{
		X = Y = 0.0f;
		std::cout << "Created Entity" << std::endl;

	}

	//Entity(float x, float y)
	//{
	//	X = x;
	//	Y = y;
	//}

	~Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;
	}

	void Init()
	{
		X = Y = 0.0f;
	}
	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

void Fun()
{
	Entity e;
	e.Print();
}

int main()
{

	Fun();

	//std::cin.get();
}

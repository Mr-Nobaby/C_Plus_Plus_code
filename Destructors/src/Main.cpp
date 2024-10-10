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

class Log
{
public:
	Log() = delete;
	static void Write()
	{

	}

private:
	//Log(){}
};

void Fun()
{
	Entity e;
	e.Print();
}

int main()
{
	Log::Write();
	//Log log;


	//Entity e(4.5, 6);
	//e.Init();
	//std::cout << e.X << "," << e.Y << std::endl;


	Fun();

	std::cin.get();
}

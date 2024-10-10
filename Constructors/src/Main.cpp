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

	Entity(float x, float y)
	{
		X = x;
		Y = y;
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


int main()
{
	Log::Write();
	//������ɾ����Ĭ�ϵĹ��캯�� Log() 
	// ����ֱ�Ӵ��� Log ��Ķ���
	//Log log;


	Entity e(4.5, 6);
	//e.Init();
	//std::cout << e.X << "," << e.Y << std::endl;

	e.Print();

	//std::cin.get();
}

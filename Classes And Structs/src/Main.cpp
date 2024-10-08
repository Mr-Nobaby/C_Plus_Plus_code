#include <iostream>

#define Log(x) std::cout<< x << std::endl


class Player
{
//public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;

	}
};

struct Player
{
//private:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;

	}
};


int main()
{
	Player player1;
	player1.speed = 2;
	player1.Move(2, 3);
	//Log(1);

	std::cin.get();
}

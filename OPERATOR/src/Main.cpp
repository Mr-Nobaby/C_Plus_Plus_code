#include<iostream>
#include <string>

using String = std::string;

struct Vector2
{
	float x, y;
	Vector2(float x,float y)
		:x(x),y(y) {}
	Vector2 Add(const Vector2& other) const
	{
		//return *this + other;
		return Vector2(x + other.x, y + other.y);

	}
	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 Multiple(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
	Vector2 operator*(const Vector2& other) const
	{
		return Multiple(other);
	}

	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2& other) const
	{
		return !(*this == other);
	}
	//Vector2 PowerUp(float x, float y)
	//{
	//	x *= 2;
	//	y *= 2;
	//}


};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << "," << other.y;
	return stream;
}

int main() 
{
	Vector2 pos(2.0f, 3.0f);
	Vector2 speed(3.0f, 5.0f);
	Vector2 powerUp(3.0f, 5.0f);

	Vector2 retult1 = pos.Add(speed.Multiple(powerUp));
	Vector2 retult2 = pos + speed * powerUp;

	std::cout << retult2 << std::endl;

}
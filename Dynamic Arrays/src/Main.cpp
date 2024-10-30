#include<iostream>
#include <string>
#include <memory>
#include <vector>

struct Vertex
{
	float x, y, z;
	Vertex(float x,float y,float z)
		:x(x),y(y),z(z){}

	Vertex(const Vertex& v)
		:x(v.x),y(v.y),z(v.z)
	{
		std::cout << "Copied" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}
int main()
{
	{
		std::vector<Vertex> v1;
		v1.reserve(3);
		v1.emplace_back(1, 2, 3);
		v1.emplace_back(4, 5, 6);
		v1.emplace_back(7, 8, 9);


		//for (int i = 0; i < v1.size(); i++)
		//{
		//	std::cout << v1[i] << std::endl;
		//}
		//v1.erase(v1.begin() + 1);
		//for (Vertex& v : v1)std::cout << v << std::endl;
	}
}
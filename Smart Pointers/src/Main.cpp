#include<iostream>
#include <string>
#include <memory>

using String = std::string;

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





int main() 
{

	{
		//std::unique_ptr<Entity> e(new Entity);
		std::unique_ptr<Entity> e = std::make_unique<Entity>();
		std::shared_ptr<Entity> sharedE = std::make_shared<Entity>();
		std::shared_ptr<Entity> sharedE(new Entity);


		e->Print();
	}

}
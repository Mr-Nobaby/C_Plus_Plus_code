#include <iostream>
#include <string>
//#define Log(x) std::cout<< x << std::endl

class Entity
{
public:
	virtual std::string GetName()
	{
		return "Entity";
	}

};

class Player : public Entity
{
public:
	Player(const std::string& name)
		: m_Name(name){}
	
	std::string GetName() override { return m_Name; }
private:
	std::string m_Name;

};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;

}

int main()
{
	Entity* e = new Entity();
	PrintName(e);
	Player* p = new Player("MFL");
	PrintName(p);

	Entity* entity = p;
	PrintName(p);

	std::cin.get();
}

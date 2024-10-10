#include <iostream>
#include <string>
//#define Log(x) std::cout<< x << std::endl

class Entity
{
public:
	//虚函数:允许基类的指针或引用在运行时调用派生类的函数。
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

class Animal {
public:
	// 定义一个虚函数 sound
	virtual void sound() {
		std::cout << "动物发出声音" << std::endl;
	}
};

class Dog : public Animal {
public:
	// 重写基类中的虚函数 sound
	void sound() override {
		std::cout << "狗在叫" << std::endl;
	}
};

class Cat : public Animal {
public:
	// 重写基类中的虚函数 sound
	void sound() override {
		std::cout << "猫在叫" << std::endl;
	}
};

int main()
{
	//Entity* e = new Entity();
	//PrintName(e);
	//Player* p = new Player("MFL");
	//PrintName(p);

	//Entity* entity = p;
	//PrintName(p);

	//std::cin.get();

	Animal* animal;  // 定义一个基类指针
	Dog dog;
	Cat cat;

	 //基类指针指向 Dog 对象
	animal = &dog;
	animal->sound();  // 调用 Dog 的 sound 函数

	// 基类指针指向 Cat 对象
	animal = &cat;
	animal->sound();  // 调用 Cat 的 sound 函数

	return 0;
}

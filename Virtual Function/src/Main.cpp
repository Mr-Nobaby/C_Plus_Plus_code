#include <iostream>
#include <string>
//#define Log(x) std::cout<< x << std::endl

class Entity
{
public:
	//�麯��:��������ָ�������������ʱ����������ĺ�����
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
	// ����һ���麯�� sound
	virtual void sound() {
		std::cout << "���﷢������" << std::endl;
	}
};

class Dog : public Animal {
public:
	// ��д�����е��麯�� sound
	void sound() override {
		std::cout << "���ڽ�" << std::endl;
	}
};

class Cat : public Animal {
public:
	// ��д�����е��麯�� sound
	void sound() override {
		std::cout << "è�ڽ�" << std::endl;
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

	Animal* animal;  // ����һ������ָ��
	Dog dog;
	Cat cat;

	 //����ָ��ָ�� Dog ����
	animal = &dog;
	animal->sound();  // ���� Dog �� sound ����

	// ����ָ��ָ�� Cat ����
	animal = &cat;
	animal->sound();  // ���� Cat �� sound ����

	return 0;
}

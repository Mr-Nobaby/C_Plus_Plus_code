#include <iostream>
#include <string>
#include <cmath>

//#define Log(x) std::cout<< x << std::endl

//��Ϊ�ӿ�ʹ��
//�ӿڿ������Ϊһ��������һ�����ʵ�ֵĺ��������������κ�ʵ��ϸ�ڵ��ࡣ
class Printable
{
public:
	virtual std::string GetClassName() = 0;

	virtual ~Printable() { std::cout << "Delete" << std::endl; }
};

class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override { return "Entity";  }
};

class Player : public Entity
{
public:
	Player(const std::string& name)
		: m_Name(name){}
	
	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }

private:
	std::string m_Name;

};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;

}
void Print(Printable& obj)
{
	std::cout << obj.GetClassName() << std::endl;
}


class IShape {
public:
	// ���麯��������ӿ�
	virtual void Draw() = 0;  // ÿ����״������ʵ�� Draw ����
	virtual double Area() = 0; // ÿ����״������ʵ�� Area ����
	
	virtual ~IShape() {}  // ������������ȷ������������ʱ��Դ��ȷ�ͷ�
};

class Circle : public IShape
{
private:
	double radius;
	double M_PI = 3.14;
public:
	Circle(double r):radius(r){}
	//ʵ�� Draw ����
	void Draw() override {
		std::cout << "Բ�ΰ뾶Ϊ" << radius << std::endl;
	}
	//ʵ�� Area ����
	double Area() override {
		return M_PI * radius * radius;
	}
};

class Rectangle : public IShape
{
private:
	double width,height;
public:
	Rectangle(double w,double h) :width(w),height(h){}
	//ʵ�� Draw ����
	void Draw() override {
		std::cout << "���γ��Ⱥ͸߶ȷֱ�Ϊ��" << width << " , " << height << std::endl;
	}
	//ʵ�� Area ����
	double Area() override {
		return width * height;
	}
};

int main()
{
	//Entity e;
	////PrintName(e);
	//Print(e);
	//Player p("MFL");
	//PrintName(& p);
	//Print(p);

	//Entity* entity = p;
	//PrintName(p);

	//std::cin.get();

	//// ʹ�ýӿ�ָ��
	//IShape* shape1 = new Circle(2);
	//IShape* shape2 = new Rectangle(2, 3);
	//// ���ýӿڷ���
	//shape1->Draw();
	//std::cout <<  "Բ�����: "  << shape1->Area()<< std::endl;

	//shape2->Draw();
	//std::cout << "���ε����: " << shape1->Area() << std::endl;

	// ʹ������
	Circle circle(2);
	Rectangle rectangle(3, 5);

	//Circle& shape1 = circle;
	//Rectangle& shape2 = rectangle;
	IShape& shape1 = circle;
	IShape& shape2 = rectangle;


	shape1.Draw();
	std::cout << "Բ�����: " << shape1.Area() << std::endl;
	shape2.Draw();
	std::cout << "���ε����: " << shape2.Area() << std::endl;
}

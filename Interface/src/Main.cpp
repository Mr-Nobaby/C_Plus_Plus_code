#include <iostream>
#include <string>
#include <cmath>

//#define Log(x) std::cout<< x << std::endl

//作为接口使用
//接口可以理解为一个定义了一组必须实现的函数，而不包含任何实现细节的类。
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
	// 纯虚函数，定义接口
	virtual void Draw() = 0;  // 每个形状都必须实现 Draw 方法
	virtual double Area() = 0; // 每个形状都必须实现 Area 方法
	
	virtual ~IShape() {}  // 虚析构函数，确保派生类析构时资源正确释放
};

class Circle : public IShape
{
private:
	double radius;
	double M_PI = 3.14;
public:
	Circle(double r):radius(r){}
	//实现 Draw 方法
	void Draw() override {
		std::cout << "圆形半径为" << radius << std::endl;
	}
	//实现 Area 方法
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
	//实现 Draw 方法
	void Draw() override {
		std::cout << "矩形长度和高度分别为：" << width << " , " << height << std::endl;
	}
	//实现 Area 方法
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

	//// 使用接口指针
	//IShape* shape1 = new Circle(2);
	//IShape* shape2 = new Rectangle(2, 3);
	//// 调用接口方法
	//shape1->Draw();
	//std::cout <<  "圆的面积: "  << shape1->Area()<< std::endl;

	//shape2->Draw();
	//std::cout << "矩形的面积: " << shape1->Area() << std::endl;

	// 使用引用
	Circle circle(2);
	Rectangle rectangle(3, 5);

	//Circle& shape1 = circle;
	//Rectangle& shape2 = rectangle;
	IShape& shape1 = circle;
	IShape& shape2 = rectangle;


	shape1.Draw();
	std::cout << "圆的面积: " << shape1.Area() << std::endl;
	shape2.Draw();
	std::cout << "矩形的面积: " << shape2.Area() << std::endl;
}

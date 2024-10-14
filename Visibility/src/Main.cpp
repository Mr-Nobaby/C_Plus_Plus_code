#include <iostream>

namespace MyNamespace {
    // 在命名空间中的全局变量
    int namespaceVar = 100;

    // 命名空间中的函数
    void displayNamespaceVar() {
        std::cout << "Namespace variable: " << namespaceVar << std::endl;
    }
}

// 全局作用域的外部链接变量
int globalVar = 200;

// 静态变量：仅在当前翻译单元可见（内部链接）
static int staticVar = 300;

class BaseClass {
public:
    // 公有成员，可以从类外部访问
    int publicVar;

    BaseClass() : publicVar(10), protectedVar(20), privateVar(30) {}

    // 公有成员函数
    void displayPublic() {
        std::cout << "Public variable: " << publicVar << std::endl;
        // 类内部可以访问所有成员
        std::cout << "Protected variable: " << protectedVar << std::endl;
        std::cout << "Private variable: " << privateVar << std::endl;
    }

protected:
    // 受保护成员，只有类和子类可访问
    int protectedVar;

private:
    // 私有成员，只有类的内部可访问
    int privateVar;
};

class DerivedClass : public BaseClass {
public:
    void displayFromDerived() {
        std::cout << "Accessing protected variable from DerivedClass: " << protectedVar << std::endl;
        // 无法访问 privateVar，因为它是 BaseClass 的私有成员
        // std::cout << "Accessing private variable: " << privateVar; // 错误！
    }
};

int main() {
    // 访问命名空间中的变量和函数
    std::cout << "Accessing namespace variable: " << MyNamespace::namespaceVar << std::endl;
    MyNamespace::displayNamespaceVar();

    // 访问全局变量
    std::cout << "Global variable: " << globalVar << std::endl;

    // 访问静态变量（内部链接变量）
    std::cout << "Static variable: " << staticVar << std::endl;

    // 创建基类和派生类对象
    BaseClass baseObj;
    DerivedClass derivedObj;

    // 访问公有成员
    baseObj.displayPublic();
    std::cout << "Accessing public variable from main: " << baseObj.publicVar << std::endl;

    // 访问受保护成员（通过派生类）
    derivedObj.displayFromDerived();

    derivedObj.displayPublic();
    std::cout << "derivedObj publicVar: " << derivedObj.publicVar << std::endl;

    // 无法在类外部访问私有成员或受保护成员
    // std::cout << baseObj.privateVar; // 错误！
    // std::cout << baseObj.protectedVar; // 错误！

    return 0;
}

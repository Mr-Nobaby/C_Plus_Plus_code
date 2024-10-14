#include <iostream>

namespace MyNamespace {
    // �������ռ��е�ȫ�ֱ���
    int namespaceVar = 100;

    // �����ռ��еĺ���
    void displayNamespaceVar() {
        std::cout << "Namespace variable: " << namespaceVar << std::endl;
    }
}

// ȫ����������ⲿ���ӱ���
int globalVar = 200;

// ��̬���������ڵ�ǰ���뵥Ԫ�ɼ����ڲ����ӣ�
static int staticVar = 300;

class BaseClass {
public:
    // ���г�Ա�����Դ����ⲿ����
    int publicVar;

    BaseClass() : publicVar(10), protectedVar(20), privateVar(30) {}

    // ���г�Ա����
    void displayPublic() {
        std::cout << "Public variable: " << publicVar << std::endl;
        // ���ڲ����Է������г�Ա
        std::cout << "Protected variable: " << protectedVar << std::endl;
        std::cout << "Private variable: " << privateVar << std::endl;
    }

protected:
    // �ܱ�����Ա��ֻ���������ɷ���
    int protectedVar;

private:
    // ˽�г�Ա��ֻ������ڲ��ɷ���
    int privateVar;
};

class DerivedClass : public BaseClass {
public:
    void displayFromDerived() {
        std::cout << "Accessing protected variable from DerivedClass: " << protectedVar << std::endl;
        // �޷����� privateVar����Ϊ���� BaseClass ��˽�г�Ա
        // std::cout << "Accessing private variable: " << privateVar; // ����
    }
};

int main() {
    // ���������ռ��еı����ͺ���
    std::cout << "Accessing namespace variable: " << MyNamespace::namespaceVar << std::endl;
    MyNamespace::displayNamespaceVar();

    // ����ȫ�ֱ���
    std::cout << "Global variable: " << globalVar << std::endl;

    // ���ʾ�̬�������ڲ����ӱ�����
    std::cout << "Static variable: " << staticVar << std::endl;

    // ������������������
    BaseClass baseObj;
    DerivedClass derivedObj;

    // ���ʹ��г�Ա
    baseObj.displayPublic();
    std::cout << "Accessing public variable from main: " << baseObj.publicVar << std::endl;

    // �����ܱ�����Ա��ͨ�������ࣩ
    derivedObj.displayFromDerived();

    derivedObj.displayPublic();
    std::cout << "derivedObj publicVar: " << derivedObj.publicVar << std::endl;

    // �޷������ⲿ����˽�г�Ա���ܱ�����Ա
    // std::cout << baseObj.privateVar; // ����
    // std::cout << baseObj.protectedVar; // ����

    return 0;
}

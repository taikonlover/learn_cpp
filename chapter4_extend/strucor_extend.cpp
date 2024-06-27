#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int i = 0) : x(i)
    {
        cout << "construct A-" << x << endl;
    }
    ~A()
    {
        cout << "Des A-" << x << endl;
    }
};

class B
{
    int y;

public:
    B(int i) : y(i)
    {
        cout << "construct B-" << y << endl;
    }
    ~B()
    {
        cout << "Des B-" << y << endl;
    }
};

class C
{
    int z;

public:
    C(int i) : z(i)
    {
        cout << "construct C-" << z << endl;
    }
    ~C()
    {
        cout << "Des C-" << z << endl;
    }
};
class D : public B
{
public:
    C c1, c2;
    A a0, a4;
    D() : a4(4), c2(2), c1(1), B(1) // 通过初始化列表指定基类的构造函数
    {
        cout << "Construct D-5" << endl;
    }
    ~D()
    {
        cout << "Des D-5" << endl;
    }
};

int main()
{
    D d;
}
/*
Construct B-1
Construct C-1
Construct C-2
Construct A-0
Construct A-4
Construct D-5
Des D-5
Des A-4
Des A-0
Des C-2
Des C-1
Des B-1
*/
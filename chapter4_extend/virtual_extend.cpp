#include <iostream>
using namespace std;

class E
{
public:
    E()
    {
        cout << "E";
    }
};

class A : public E
{
public:
    int b;
    A()
    {
        cout << "A";
    }
};
class B : virtual public A
{
public:
    int b1;
    B()
    {
        cout << "B";
    }
};

class C
{
public:
    int b2;
    C()
    {
        cout << "C";
    }
};

class D : public B, public C, virtual public A // 派生类只会调用 A 类构造函数一次，由最终派生类进行初始化
{
public:
    int d;
    D()
    {
        cout << "D";
    }
};

int main()
{
    D d;
}
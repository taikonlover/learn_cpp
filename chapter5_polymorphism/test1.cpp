#include <iostream>
using namespace std;
class B
{
public:
    int a = 10;
    virtual void f() { cout << "B::f" << endl; };
};
class D : public B
{
public:
    int c = 10;
    void f() { cout << "D::f" << c << endl; };
};

int main()
{
    D d, d1;
    B b;
    B &rB = d; // rB 的虚函数和类 d 的函数绑定
    rB.f();
    b.a = 20;
    rB = b;

    rB.f();
    d1.a = 30;
    rB = d1;
    rB.f();
}

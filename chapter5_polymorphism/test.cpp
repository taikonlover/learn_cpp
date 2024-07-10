#include <string>
#include <iostream>
using namespace std;
class A
{
public:
    void f(int i) { cout << "...A" << endl; }; //非虚函数
};
class B : public A
{
public:
    virtual void f(int i) { cout << "...B" << endl; } //虚函数
};
class C : public B
{
public:
    void f(int i) { cout << "...C" << endl; } //虚函数
};
class D : public C
{
public:
    void f(int) { cout << "...D" << endl; }
};
int main()
{
    A *pA, a;
    B *pB, b;
    C *pC;
    C c;
    D d;
    pA = &a;
    pA->f(1); //调用::f
    pB = &b;
    pB->f(1); //调用B::f
    pB = &c;
    pB->f(1); //调用C::f
    pB = &d;
    pB->f(1); //调用D::f
    pA = &d;
    pA->f(1);
    pC = &d;
    pC->f(1);
    return 0;
}

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
    C c;
    D d;
    pA = &a;
    pA->f(1); //调用A::f
    pB = &b;
    pB->f(1); //调用A::f
    pB = &c;
    pB->f(1); //调用A::f
    pB = &d;
    pB->f(1); //调用A::f
    return 0;
}

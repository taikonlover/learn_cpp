#include <iostream>
using namespace std;

class A
{
public:
    virtual void f()
    {
        cout << "A\n";
    }
};

class B : public A
{
public:
    void f()
    {
        cout << "B\n";
    }
};

class C : public B
{
public:
    void f()
    {
        cout << "C\n";
    }
};

int main()
{
    A a;
    B b, *p;
    C c;
    // p = &a;
    // p->f();
    p = &b;
    p->f();
    p = &c;
    p->f();
    return 0;
}
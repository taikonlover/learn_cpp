#include <iostream>
using namespace std;

class A
{
public:
    int b;
    A()
    {
        cout << "A";
    }
};
class B : public A
{
public:
    int b1;
    B()
    {
        cout << "B";
    }
};

class C : public A
{
public:
    int b2;
    C()
    {
        cout << "C";
    }
};

class D : public B, public C
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
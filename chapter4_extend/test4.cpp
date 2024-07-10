#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A";
    }
};

class B : virtual public A
{
public:
    B()
    {
        cout << "B";
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C";
    }
};

class D : virtual public C
{
public:
    D()
    {
        cout << "D";
    }
};

class E : virtual public A
{
public:
    E()
    {
        cout << "E";
    }
};

class F : public D, public E
{
public:
    F()
    {
        cout << "F";
    }
};

int main()
{
    F f;
}
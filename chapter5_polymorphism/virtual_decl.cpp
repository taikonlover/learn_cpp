#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "+A";
    }
    virtual ~A() // 不定义 virtual 指针 delete 会导致析构不彻底
    {
        cout << "~A";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "+B";
    }
    ~B()
    {
        cout << "~B";
    }
};

class C : public B
{
public:
    C()
    {
        cout << "+C";
    }
    ~C()
    {
        cout << "~C";
    }
};

int main()
{
    A *pA = new C;
    delete pA;
}
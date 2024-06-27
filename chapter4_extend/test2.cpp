#include <iostream>
using namespace std;
class G
{
public:
    int g;
    G(int a)
    {
        g = a;
        cout
            << "G";
    }
};

class A : virtual public G
{
public:
    A() : G(1)
    {
        cout << "A";
    }
};

class H
{
public:
    H()
    {
        cout << "H";
    }
};

class B : virtual public H
{
public:
    B()
    {
        cout << "B";
    }
};

class C : public A, virtual public G
{
public:
    C() : G(2)
    {
        cout << "C";
    }
};
class D : public B
{
public:
    D()
    {
        cout << "D";
    }
};

class F
{
public:
    F()
    {
        cout << "F";
    }
};

class E : virtual F, public D, public C
{
public:
    E() : G(2) // 声明虚基类的构造函数
    {
        cout << "E";
    }
};

int main()
{
    E e;
    cout << e.g;
}
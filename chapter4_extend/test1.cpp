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

class B : virtual public A
{
public:
    B()
    {
        cout << "B";
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "C";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D";
    }
};

int main()
{
    D d;
    d.B::b = 1; // 错误，b 产生二义性
    cout << 1;
}

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     A() { cout << "class A" << endl; }
// };
// class B : virtual public A
// {
// public:
//     B() { cout << "class B" << endl; }
// };
// class C : virtual public A
// {
// public:
//     C() { cout << "class C" << endl; }
// };
// class D : public B, public C
// {
// public:
//     D() { cout << "class D" << endl; }
// };
// main()
// {
//     D dd;
// }

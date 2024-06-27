#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void f() { cout << "A" << endl; }
    A(int x)
    {
        a = x;
        cout << "Virtual Bass A..." << endl;
    }
};
class B : virtual public A
{
public:
    void f() { cout << "B" << endl; }
    B(int i) : A(i)
    {
        cout << "Constructing B..." << endl;
    }
};
class C : virtual public A
{
    int x;

public:
    C(int i) : A(i)
    {
        cout << "Constructing C..." << endl;
        x = i;
    }
};

class ABC : public C, public B
{
public:
    ABC(int i, int j, int k) : C(i), B(j), A(i) // L1，这里必须对A进行初始化
    {
        cout << "Constructing ABC..." << endl;
    }
};
int main()
{
    ABC obj(1, 2, 3);
    obj.f();
}

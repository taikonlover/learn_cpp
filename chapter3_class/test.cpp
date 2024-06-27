#include <iostream>
using namespace std;
class A
{

public:
    int a = 10;
    A(int x)
    {
        a = x;
    }
};

class Test
{
private:
    int t = 10;

public:
    int &getT()
    {
        return this->t;
    }
    static int &getT(Test *p)
    {
        return p->t;
    }
    static A a;
};

A Test::a = A(10);
int main()
{
    Test t;
    auto &y = t.getT();
    cout << y << '\n';
    t.getT() = 20;
    cout << y << '\n';
    cout << Test::a.a;
    cout << Test::getT(&t);
    cout << t.getT(&t);
}
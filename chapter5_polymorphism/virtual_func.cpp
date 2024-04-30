#include <iostream>
using namespace std;

class B
{
public:
    void f() { cout << "bf "; }
    virtual void vf() { cout << "bvf "; }
    void ff()
    {
        vf();
        f();
    }
    virtual void vff()
    {
        vf();
        f();
    }
};

class D : public B
{
public:
    void f()
    {
        cout << "df ";
    }
    void ff()
    {
        f();
        vf();
    }
    void vf()
    {
        cout << "dvf ";
    }
};
int main()
{
    D d;
    B *pB = &d;
    pB->f();
    pB->ff();
    pB->vf();
    pB->vff();
}
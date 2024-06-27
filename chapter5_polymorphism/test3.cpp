// Eg5-14.cpp
#include <iostream>
#include <typeinfo>
using namespace std;
class B
{
    int x;

public:
    virtual void f() { cout << "1: B::f()" << endl; }
};
class D1 : public B
{
public:
    virtual void g() { cout << "2: D1::g()" << endl; }
};
class D2 : public B
{
    int x;

public:
    virtual void f() { cout << "3: D2::f() " << endl; }
    void h() { cout << "4: D2::h()\n"; }
};
void AccessB(B &pb)
{
    if (typeid(pb) == typeid(B))
        pb.f();
    else if (typeid(pb) == typeid(D1))
    {
        D1 pd1 = dynamic_cast<D1 &>(pb);
        pd1.g();
    }
    else if (typeid(pb) == typeid(D2))
    {
        D2 pd2 = dynamic_cast<D2 &>(pb);
        pd2.h();
    }
}
void AccessB1(B *pb)
{
    if (typeid(*pb) == typeid(B))
        pb->f();
    else if (typeid(*pb) == typeid(D1))
    {
        D1 *pd1 = dynamic_cast<D1 *>(pb);
        pd1->g();
    }
    else if (typeid(*pb) == typeid(D2))
    {
        D2 *pd2 = dynamic_cast<D2 *>(pb);
        pd2->h();
    }
}

int main()
{
    B b;
    D1 d1;
    D2 d2;
    AccessB(b);    //输出： 	1: B::f()
    AccessB(d1);   //输出:     	2: D1::g()
    AccessB(d2);   //输出:    	4: D2::h()
    AccessB1(&b);  //输出： 	1: B::f()
    AccessB1(&d1); //输出:     	2: D1::g()
    AccessB1(&d2); //输出:    	4: D2::h()
}

// dynamic_cast 是在运行时执行,主要用于多态基类的 指针 或 引用 与派生类 指针 或 引用 之间的转换
// const_cast、static_cast、reinterprete_cast是在编译时执行
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void f()
    {
        cout << "f in Base !" << endl;
    }
};
;
class Derived : public Base
{
    void f()
    {
        cout << "f in Derived !" << endl;
    }
};
int main()
{
    Base *pb, b;
    Derived d, *pd;
    pb = &d;
    //默认转换，编译时完成，是常用方式
    pb->f();
    pd = &d;
    pb = dynamic_cast<Base *>(&d);
    //向上转换
    pb->f();
    pb = dynamic_cast<Base *>(pd);
    //向上转换
    pb->f();
    pb = &b;
    pd = dynamic_cast<Derived *>(pb);
    // L1: 向下强制转换
    if (pd)
        cout << "ok";
    else
        cout << "error !\t";
    pd = dynamic_cast<Derived *>(&b);
    // L2: 向下强制转换
    if (pd)
        cout << "ok";
    else
        cout << "error !\t";
    pb = &d;
    pd = dynamic_cast<Derived *>(pb);
    // L3: 向下强制转换
    if (pd)
        cout << "ok !";
    else
        cout << "error !\t\n";
}
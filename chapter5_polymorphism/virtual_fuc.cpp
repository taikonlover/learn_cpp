#include <iostream>
using namespace std;

class Base
{
public:
    virtual void who(double a) // 静态函数，普通函数，构造函数, 内联函数不能声明 virtual, final 声明后续不能再重定义
    {
        cout << "Base\n";
    }
};

class first : public Base
{
public:
    void who(double a) override // 重定义, override 不是重定义报错，override 只能用于虚函数
    {
        cout << "first\n";
    }
};

class secd : public Base
{
public:
    void who(bool a) // 重载
    {
        cout << "secd";
    }
};

int main()
{
    Base *p;
    first fir;
    secd se;
    p = &fir;
    p->who(1);
    p = &se;
    p->who(1); // 只能提供指针和引用获得虚特性
}
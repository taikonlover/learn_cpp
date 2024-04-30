#include <iostream>
using namespace std;

class A
{
public:
    virtual int func() = 0; // 纯虚函数，含有纯虚函数的类是抽象类，派生类如果不重新定义基类的所有纯虚函数还是一个抽象类
};
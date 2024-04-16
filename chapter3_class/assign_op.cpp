#include <iostream>
using namespace std;
// 赋值运算符默认将右操作数的成员数据复制到左操作数

class X
{
public:
    X &operator=(const X &other) //赋值运算符的函数原型，参数列表可以有其他参数，但都需要有默认参数
    {
        if (this == &other)
            return *this;
        // ...
        return *this;
    }
};

int main()
{
    X a;
    X b;
    a = b;          // 隐式调用
    a.operator=(b); //显式调用
}
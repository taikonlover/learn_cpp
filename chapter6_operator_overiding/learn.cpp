#include <iostream>
using namespace std;
class X
{
public:
    int a;
    X(int a)
    {
        this->a = a;
    }

    X operator+(X b)
    {
        return a + b.a;
    }
};
X operator+(X a, X b)
{
    return X(a.a + b.a);
}

int main()
{
    X a(10);
    X c = 2 + a;
    cout << c.a;
}

/*
非类成员函数重载时可以解决次序交换和类型转换问题, 运算符调用时可以转换非类成员函数的第一个参数，
不能转换类成员函数的第一个参数，即类成员函数重载的运算符第一个参数必须是该类的对象
*/
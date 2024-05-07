#include <iostream>
using namespace std;

class Complex
{
public:
    double re = 0, im = 0;
    Complex operator+(const Complex &other) const
    {
        Complex ans;
        ans.re = this->re + other.re;
        ans.im = this->im + other.im;
        return ans;
    }
    Complex(double a = 0, double b = 0) : re(a), im(b) {}
    friend Complex operator-(Complex a, Complex b);
};
Complex operator-(Complex a, Complex b)
{
    return Complex(a.re + b.re, a.im + b.im);
}

int main()
{
    Complex obj1(1, 2), obj2(3, 4);
    Complex obj3 = obj1 + obj2;
    Complex obj4 = obj1.operator+(obj2);
    cout << obj3.re << ' ' << obj3.im << '\n';
    cout << obj4.re << ' ' << obj4.im << '\n';
}
/*
. .* :: ?: 四个运算符不能被重载
= [] () -> 只能用成员函数重载
重载运算符，不能改变运算符优先级和结合顺序
重载运算符不能使用默认参数，不能改变参数个数
不能创造新的运算符，
不能改变运算符原有的含义，比如：不能改变系统内置的整数和整数的加法
只能不能用静态成员函数重载运算符
系统默认合成赋值运算符(=)，取地址运算符(&)，成员访问运算符(. 和 ->)
*/
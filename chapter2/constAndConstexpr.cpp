#include <iostream>
using namespace std;

int main()
{
    int j, k = 9;
    const int i1 = 10 + k + 6;
    // constexpr int i2 = 10 + k + 6; //错误，constexpr 初始化不能带有变量，在编译阶段完成初始化
    const int i = 10;
    constexpr int j1 = i; // 正确，编译能确定i的值
    int *const p = &j;    // p 是 指针常量，指向的空间不能改变,但是对象的值可以改变， *p = 1; 是可以的；
    const int *pi = &j;   // 指向常量 的指针，不能通过pi 改变变量的值，但是 pi指向的空间可以改变
    // int *pint = &i; 错误，指向非常量的指针不能指向常量，但是 指针常量可以指向变量
    const int *const pj = &i; // 指向常量的指针常量
    int *const pk = p;        // 指针变量可以给指针常量赋值，反之不然
    double dval = 1 << 10;
    const int &ri = dval;
    // ri = 10; 错误
    dval = 100; // 右值引用
    const double &x = 20 + 10;
    // auto &r0 = 4.3; 错误，
    cout << dval << ' ' << ri;
}
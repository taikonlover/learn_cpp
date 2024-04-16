#include <iostream>
using namespace std;

int &getVar(int *pint) // 返回的引用的空间不能是被释放的空间
{
    return *pint;
}

int &get_(int x)
{
    return x; // 错误， x会在函数运行完后释放
}

int main()
{
    int i = 9;
    int &ir = i;
    ir = 99;
    cout << ir << '\n';
    // int &a; 引用声明要指明引用对象
    int a = 1;
    int *p = &a;
    int *&rp = p;
    // int &*ra = a; 错误
    int b[10], *c[10];
    int(&ra)[10] = b; // 数组的引用
    int &bb = b[0];
    int *(&rpa)[10] = c; // 指针的引用
    // int &ia[10] = b; 错误
    ra[3] = 0;
    rpa[3] = &i;
    int anInt = 10;
    int otherInt;
    otherInt = getVar(&anInt) * 12;
    getVar(&anInt) = 200;
    cout << anInt << ' ' << otherInt << '\n';
    // cout << "x " << get_(10);

    //右值引用 && 绑定运算过程中的临时对象
    double r = 10;
    double &lr1 = r;
    // double &lr = r + 10; 错误
    // double &&rr = r; 错误
    double &&rr = r + 10;
    r = 1;
    cout << r << ' ' << rr;
}
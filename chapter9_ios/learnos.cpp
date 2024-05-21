#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // cout.seekp(1); 移动写指针
    ios::skipws;
    ios::left;
    ios::right;
    ios::internal;
    ios::dec;
    ios::oct;
    ios::hex;
    ios::showbase;
    ios::showpoint;
    ios::uppercase;
    ios::scientific;
    ios::fixed;
    ios::unitbuf;

    ios::adjustfield; //
    ios::basefield;
    ios::floatfield;
    ios::showpos; // 显示正数的正号

    cout.setf(ios::skipws | ios::left);
    cout.setf(ios::oct, ios::basefield); // 消除后面一个参数标志位，再把前面的位置 1
    char ch = cout.fill();               // 返回当前的填充字符
    cout.precision(10);                  // 设置精度
    cout.precision();                    // 返回当前精度
    cout.fill('*');
    cout.setf(ios::left | ios::scientific | ios::showpoint, ios::adjustfield | ios::floatfield);
    cout.width(6); // 只对下一个输出有效
    cout.width();
    cout << -42;
    float y = 23.1415;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << y;
}
/*
0x0001 跳过空白符
0x0002 靠左对齐
0x0004 靠右对齐
0x0008 中间对齐
...

*/
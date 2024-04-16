// 多维数组作为参数时，只有第一维的大小可以省略，其它维大小不能省略
// 函数如果有声明，默认参数在函数声明时给出，定义时不能给出，默认参数都放在最右边

#include <iostream>
#include <string>
using namespace std;
int f(float r = 1.0);

int f(float r)
{
    return 1;
}

string name = "tom";
double h = 0.8;

void dog(string dogn = name, double h1 = h) // 全局变量的默认参数可以使用全局变量
{
    cout << dogn << h1 << '\n';
}
// 函数匹配顺序
// 平凡转换（数据范围没有变）数据类型不变
// 提升匹配 （扩大数据范围）
// 类型转换匹配
// 自定义转换匹配
// 顶层 const 不能用来区分参数表，因为顶层 const 既可以接受常量，也可以接受变量
#define abs(v) ((v) < 0 ? -(v) : (v))

int main()
{
    f();
    name = "jack";
    double h = 1.2;
    dog();
    int i = -2;
    int s = abs(i++);
    cout << s << ' ' << i;
}
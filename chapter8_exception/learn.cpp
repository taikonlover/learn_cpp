/*
运行时可能出现的异常
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0;
    try
    {
        if (b == 0)
            throw 1;
        cout << a / b;
    }
    catch (const char *a) // 可以用类型的变量和引用，数据类型必须精确匹配，允许常量和非常量之间的转换，派生类向基类的数据类型转换，数组转换成数据元素类型的指针，函数转换成函数指针
    {
        cout << a;
    }
    catch (...)
    {
    } //可以捕获任意类型的异常
    try
    {
        throw "冰点";
    }
    catch (char const *s)
    {
        cout << s;
    }
    catch (...)
    {
    } //可以捕获任意类型的异常
}

// void temperature(int t) throw(char *, int, float) {} // 声明可能产生的异常，throw() 表示不抛出异常
void temperature() noexcept {}             // 不会抛出异常
void temperature(char a) noexcept(true) {} // noexcept(bool) true 表示不会产生异常，flase 可能会产生异常
                                           /*
                                           编译器不会对抛出异常进行检测
                                           */
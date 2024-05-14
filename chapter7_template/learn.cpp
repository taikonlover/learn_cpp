#include <string.h>
template <typename T1, typename T2 = double>
T1 max(T1 a, T2 b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T1, typename T2, int T4> // 模板的普通类型为常量
void func(T1 a, T2 b)
{
    int c = 1 + T4;
}

template <typename T>
class stack
{
    int size;
    T *elem;
    // ......
public:
    void func1();
    void func();
};
/*
类模板需要显式实例化
类模板不允许使用
*/

template <typename T>
constexpr void stack<T>::func1() // 类外定义模板函数
{
}

template <typename T>
inline void stack<T>::func() // 类外定义模板函数
{
}

template <typename T = double> // 有默认值的模板，默认值靠右
void fun()
{
}

template <>
char *max(char *a, char *b) // 特化模板
{
    return strcmp(a, b) < 0 ? b : a;
}

inline char *max(char *a, char *b) // 普通 max 函数
{
    return strcmp(a, b) < 0 ? b : a;
}

/*
调用顺序：
普通函数
模板特化函数
调用模板函数，选择能够精确匹配的函数
多个函数都差不多多，产生二义性错误
*/

int main()
{
    int a = 1;
    double b = 2.0;
    max(a, b);               // 隐式实例化
    max<int, int>(1, 2.0);   // 显示实例化
    func<int, int, 7>(1, 2); // 模板含有非类型参数，需要显示调用
    stack<int> st;
    max(1, 'a'); // 相当于 max<int, char>(1, 'a');
}
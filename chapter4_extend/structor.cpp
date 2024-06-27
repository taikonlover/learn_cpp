#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int sa)
    {
        a = sa;
        cout << "a = " << a << " class A\n";
    }
};

class B : public A
{
    int b;

public:
    using A::A;
    // B() : A(3) // 指定直接基类的构造函数
    // {
    //     cout << "class B\n";
    // }
    B(int a, int b) : A(a)
    {
        cout << "a = " << a << ' ' << "b = \n";
    }
};

class C : public B
{
    int c;

public:
    C() : B(3)
    {
        cout << "class C\n";
    }
    using B::B; // 继承基类的构造函数，编译器生成对应的构造函数
    /**
     * 生成代码
     * C():B(){};
     * C(int x, int y):B(x,y){}
     * 而成员对象只是改变对象的访问权限，不产生代码
     */
    // C():B(){}
    // C(int x, int y):A(x){}
    // 如果基类的构造函数有多个缺省参数，继承时会产生多个构造函数，依次少一个缺省参数
    // 构造函数调用顺序： 基类 -> 对象成员 -> 派生类，如果基类和对象成员时按照声明顺序依次调用
};

int main()
{
    C objc;
    B b(3); // 继承了 A(int) 的构造函数，C++11
}
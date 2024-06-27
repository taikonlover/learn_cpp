#include <iostream>
using namespace std;

class E
{
public:
    E()
    {
        cout << "E";
    }
};

class A : public E
{
public:
    int b;
    A()
    {
        cout << "A";
    }
};
class B : public A
{
public:
    int b1;
    B()
    {
        cout << "B";
    }
};

class C : virtual A
{
public:
    int b2;
    C()
    {
        cout << "C";
    }
};

class F : virtual C
{
public:
    F()
    {
        cout << "F";
    }
};

class G
{
public:
    G()
    {
        cout << "G";
    }
};

class D : public B,
          public F,
          virtual E // 派生类只会调用 A 类构造函数一次，由最终派生类进行初始化，也就是构造时可以把基类的虚基类看成最终派生类的虚基类的部分
{
public:
    int d;
    D()
    {
        cout << "D";
    }
};

int main()
{
    D d;
    /**
     * 输出 EAEABCD
     */
}

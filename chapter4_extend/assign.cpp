#include <iostream>
using namespace std;

class A
{
};

class B : public A
{
public:
    int a;
    B() : A() {}
    B(const B &obj) : A(obj){}; // 拷贝构造函数

    B &operator=(const B &obj)
    {
        A::operator=(obj);
        // ...
    }
};
// 派生类对象可以赋值给基类对象
// 基类的指针可以指向派生类对象
// 基类的引用可以指向派生类对象
// 派生类对象可以转化为基类对象，反之不然
// 将派生类对象赋值给基类指针和引用，会进行隐性类型转换，而 A a = b（b是派生类对象）会进行拷贝构造，不会进行类型转换

int main()
{
    B a;
    A *pa = &a;
    B *pb = static_cast<B *>(pa); // 强制类型转换，基类指针转换为派生类指针
    pb->a = 1;
    cout << pb->a;
}
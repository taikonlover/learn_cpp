#include <iostream>
using namespace std;
class A
{
public:
    int i;
    A(int x)
    {
        i = x;
        cout << "constructor" << i << endl;
    }
    ~A()
    {
        cout << "destructor" << i << endl;
    }
    void move(int x) // 默认带有 this 指针 move(A* const this, int x)
    {
        this->i = x;
    }

    A &f()
    {
        return *this;
    }
};

class goods
{
    float fweight;
    static float totalWeight; //静态存储空间为类的所有对象共享

public:
    goods(float weight)
    {
        fweight = weight;
        totalWeight += weight;
        cout << "totalweight = " << totalWeight << endl;
    }
    ~goods()
    {
        totalWeight -= fweight;
        cout << "totalweight = " << totalWeight << endl;
    }
};

class integer
{
    static int staticint;
    int memberint;

public:
    void set(int n1, int n2)
    {
        staticint = n1;
        memberint = n2;
    }
    static void show() // 静态成员函数没有 this 指针，只能访问静态成员，其他函数能调用静态函数
    {
        cout << "static_int = " << staticint << endl;
    }
};

int integer::staticint = 0;
float goods::totalWeight = 0;

int main()
{
    A a(1);
    A b(2);
    A c(3);
    goods d(4);
    goods e(100);

    integer h;
    integer g;
    integer::show();
    h.set(1, 2);
    g.set(3, 4);
    integer::show();
    // h.show(); 某些c++中允， 与 integer::show()相同
    // g.show();
}
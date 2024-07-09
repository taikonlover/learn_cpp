#include <iostream>
using namespace std;

class X
{
    int x = 0;

public:
    // x &operator()(...);// 函数调用运算符重载
    X &operator()(int i)
    {
        this->x += i;
        return *this;
    } // 函数调用运算符重载
    void show()
    {
        cout
            << x;
    }
};

int main()
{
    X obj;
    obj(2);
}
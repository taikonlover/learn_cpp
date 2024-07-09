#include <iostream>
using namespace std;

class X
{
    int x = 2;

public:
    // returntype operator()(...); // 函数调用运算符重载
    int operator()(int i)
    {
        return x + i;
    } // 函数调用运算符重载
    void show()
    {
        cout << x;
    }
};

int main()
{
    X x;
    cout << x(1);
    x.show(); // 输出：1
    // x()(2);
    x.show();
    return 0;
}
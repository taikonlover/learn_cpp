#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    friend ostream &operator<<(ostream &os, const A &obj);
    friend ostream &operator>>(ostream &os, A &obj); // 第二个参数必须是引用
};

ostream &operator<<(ostream &os, const A &obj)
{
    os << obj.a;
    if (obj.b > 0)
        os << "+" << obj.b << "i" << '\n';
    else
        os << obj.b << "i" << '\n';
    return os;
}

ostream &operator>>(ostream &os, A &obj);

// int max(int a, int b)
// {
//     return a > b ? a : b;
// }

int main()
{
    A a;
    a.a = 1;
    a.b = 1;
    cout << a;
}
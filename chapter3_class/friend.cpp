#include <cmath>
using namespace std;

class point
{

    friend double f(point a, point b); // 友元函数，但不是X的成员函数
private:
    int x, y;
};
double f(point a, point b)
{ // 友元函数可以访问类的私有成员
    double x = a.x - b.x;
    double y = a.y - b.y;
    return sqrt(x * x + y * y);
}

class B;

class A
{
private:
    int x, y;

public:
    A(int i, int j)
    {
        x = i;
        y = j;
    }
    friend class B; // 友元类， 类 B 的所有成员函数可以访问类 A 的所有成员。
                    // 友元不受 public， private， protected的限制
    int sum(B b);
};

class B
{
private:
    int z;

public:
    friend int A::sum(B b);
};
int A::sum(B b) // 友元成员函数
{
    return x + y + b.z;
}

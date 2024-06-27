#include <cmath>
using namespace std;

class point
{

    friend double f(point a, point b); // 友元函数，但不是X的成员函数，可以访问该类的所有成员
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
    int sum(B b);   // 类 B 已经被声明，可以声明成员函数，但是不能定义
};

class B
{
private:
    int z;

public:
    friend int A::sum(B b); // 定义有元成员函数
};
int A::sum(B b) // 友元成员函数，类 A 和类 B 均定义可以定义该成员函数
{
    return x + y + b.z;
}

/**
 * 友元虽然使代码更加简洁，但是破坏了代码的封闭性和信息隐藏
 */

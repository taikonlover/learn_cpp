#include <iostream>
using namespace std;

const double PI = 3.1415926;

// union 默认为 public，且不能限定为 private
struct circle // struct 缺省为 public
{
    double perimeter();
    double area();
    void setR(double);
    double getR();

private:
    double r;
};

double circle::perimeter()
{
    return 2 * PI * r;
}

double circle::area()
{
    return PI * this->r * this->r;
}

void circle::setR(double R)
{
    this->r = R;
}

double circle::getR()
{
    return this->r;
}

class myclass // class 缺省为private
{
private: // 外部不可见
    // myclass A;
    myclass &A;
    myclass *B; // 可以是自身的指针和引用，不能是本身
    circle c;   // 可以是其他类
    // int a = 10; // 可以声明初始值
    // const int b = 10;
    // constexpr int b = 10; // 错误，不能定义 constexpr 的成员, (不能在编译阶段对数据成员赋值)
    static constexpr int b = 10; // 静态成员在编译阶段赋值
    decltype(8) d = 10;
    // auto a = 10; // 不能使用 auto定义成员，(没有对类成员赋值，不能用 auto)
    // 不能使用 register、和extern
    static const auto a = 10;
    int day, month, year;

public: // 外部可见
    int getDay()
    { // 类内定义默认 inline, 如果在函数声明，或者类外定义时声明为 inline，且符合内联的要求也可以编译成内联函数
        return day;
    }
    int getmonth();
    bool cmp() const; // 常量成员函数，不允许函数改变成员数据
    void addM() const;
};

class A
{
private:
    int x, y;

public:
    A(int x = 0, int y = 0) // 不能声明 const 函数
    {
        this->x = x;
        this->y = y;
    }
    // A() = default; // 编译器合成默认构造函数
    ~A() // 析构函数
    {
    }
};

// int f(int x) const; 错误，普通函数不能声明为 const

void myclass::addM() const
{ // const 不能省略
    // this->month++;  不能改变成员数据
    int M = 0;
    M++;
}

inline int myclass::getmonth()
{ // 外部定义需要声明 inline 才会内联
    return month;
}

class Tdate
{
    int day;
    const int pis;
    Tdate &d;

public:
    // Tdate() = default;
    Tdate(int a) : pis(10), d(*this) // 对const 常量，引用初始化， 初始化顺序按照类中的声明顺序初始化
    {
        day = a;
    }
    Tdate() : Tdate(10) // 委托构造函数，使用委托构造函数时，不能再使用其他初始化列表
    {
    }
    ~Tdate() {} // 析构函数，不含参数，每个类只有一个析构函数，不能重载，如果不写系统自动生成
};

int main()
{
    circle c;
    c.setR(4);
    cout << c.perimeter() << " " << c.area();
    A a, b(10, 10); // 因为类 A 的构造函数的参数有默认参数， A a 声明允许，默认构造函数为无参函数,或者都定义了默认参数
    A *p = new A[10];
    // Tdate onday;
    Tdate aday();
    Tdate CC(10);
    Tdate MM = 10; // 只有一个成员变量与 MM(10)等价
}
// 类内成员初始化顺序 默认初始值 -> 初始化列表->构造函数
// 无参构造函数初始化时如果时全局变量或者静态变量则数据成员初始化为 0， 局部变量不初始化
// 常量成员，引用成员，类对象成员，派生类构造函数对基类构造函数的调用需要使用初始化列表
// 静态成员的初始化，在类外定义初始化 type 类名::静态成员名 = 初始值
// 静态成员函数没有 this 指针， 一般只访问静态成员

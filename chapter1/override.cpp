/**
 * * 重载匹配顺序
 * 1. 准确匹配
 * 2. 提升匹配，在类型向宽类型匹配
 * 如：bool->int, char ->int, short->int, float ->double
 * 3. 标准转换匹配
 * 如：int<->double，double<->long double.
 * Derive *->base *,T*->void *,int ->unsigned int
 *
 * 注意：
 * 1. 参数列表唯一
 * 2. 避免二义性
 * 如：
 * int f(int& x);
 * double f(int  x);
 *
 * int x = 10;
 * f(x)?
 *
 * long abs(long num);
 * double abs(double num);
 *
 * abs(10)?
 *
 *
 * 顶层 const 是数据本身是常量，底层 const 与指针和引用类型有关，表示地址所指向的对象是常量。
 * const 参数可以接收 const 和非 const 同类型的实参，，容易在调用时产生二义性，编译错误
 * int f(int x, int y) { cout << "fa" << endl;}
 * int f(const int x, const int y) { cout << "fb" << endl;}
 * 底层 const 可以进行重载，不影响编译
 */

#include <iostream>
using namespace std;

void f(int &x) { cout << "f(int &)" << endl; }
void f(const int &x) { cout << "f(const int& )" << endl; }
void g(const int *x) { cout << "g(const int *)" << endl; }
void g(int *x) { cout << "g(int *)" << endl; }
int main()
{
    int x = 10;
    const int y = 9;
    f(x);  //调用f(int &x)
    f(y);  //调用f(const int &)
    g(&x); //调用g(int *x)，地址默认是 int*
    /**
     * const int x = 10;
     * g(&x); 调用 g(const int *)
     */
}

/**
 * 实参传递忽略顶层 const
 * int h(int x){};
 * int h(const int x){}; 编译错误
 * 底层 const 规则：非常量可以转化为非常量，常量不可以转换为非常量
 */

/**
 * 变量初始化方式
 * 1. int x = 0;
 * 2. int  x(0);
 * 3. int x{0};  C++11
 * 4. int x = {0}; C++11
 *
double d = 92.221, d1{ 92.221 }, d3{ d };
int x = d;
x = { 32 }; 			//C++11，赋值
d = { 32 }; 			//C++11
d = x;
// { }中的初始值是变量且存在丢失信息的风险，将出现编译错误
d = { x };                                     	//错误, C++11
int y = { d };                               	//错误, C++11
 */

/**
 * 默认初始化规则：
 * 如果有表达式，则安照表达式赋值
 * 全局变量、命名空间的变量、静态变量，被保存到全局变量区，默认初始化为0
 * 局部变量保存在栈区，malloc 的变量保存在堆区，堆栈区的变量不用默认值初始化
 */
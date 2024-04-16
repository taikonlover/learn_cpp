#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // auo_ptr 是独占型智能指针，一个存储空间只能被一个指针指向，c++98
    // 智能指针能自动delete释放
    auto_ptr<string> p1(new string("There is only one point to me."));
    auto_ptr<string> p2;
    p2 = p1;
    // cout << *p1; 运行错误
    cout << *p2;
    // p1 = new string("dd") 错误
    auto_ptr<string> p3(p2);
    cout << *p3;
    // cout << *p2; 错误

    // unique_ptr，不允许指针之间的赋值和初始化, c++11
    unique_ptr<int> p;
    // shared_ptr 允许多个指针指向同一个存储空间
    shared_ptr<int> p4(new int(9));

    // 智能指针只能在声明时分配内存，不能先声明，再分配空间
    // 智能指针只能指向堆中的空间
    // 智能指针不能指向普通指针
    // 普通指针只能通过get()成员函数获得地址指向智能指针的空间
    // 智能指针能相互赋值，除了 unique_ptr
    int x = 9;
    int *ip = new int(1);
    shared_ptr<int> p3;
    shared_ptr<int> sp(new int(8));
    // sp = &x 错误
    // sp = ip 错误
    // ip = sp 错误
    ip = sp.get();
    shared_ptr<int> sp1(ip);
    cout << "sp1 " << *sp1;
}
// new 和 delete 只能对动态分配的内存操作，不能对栈中的变量操作
// new, delete 是运算符，不是函数

#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2, *p3;
    p1 = new int;
    p2 = new int(10); // 分配内存并初始化为 10
    p3 = new int[10]; // 分配长度为10的int数组
    if (!p3)
    {
        cout << "allocation error!" << endl;
    }
    *p1 = 5;
    *p3 = 1;
    p3[1] = 2;
    delete p1;
    delete p2;
    // delete p3 错误，只会删除第一个空间
    delete[] p3;
}
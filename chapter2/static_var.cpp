#include <iostream>
#include <string>
using namespace std;
void f()
{
    static int i; // 静态变量生存期从声明开始，一直到程序结束
    int j = 0;
    i += 2;
    j += 2;
    cout << i << '\n';
    cout << j << '\n';
}

int main()
{
    f();
    // i = 2; 错误，i 的作用域只在函数中
    f();
    string str1;
    char *str2;
    cin >> str1;
    // cin.ignore(10);
    cin.getline(str2, 100);
    cout << str1 << str2;
    /*
    若输入
    hello
    micro visial
    str1 = "hello"
    str2 = ""

    */
}
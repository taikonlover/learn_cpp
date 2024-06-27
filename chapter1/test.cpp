#include <iostream>
#include <iomanip>
using namespace std;

int f(int **a) {}
int main()
{
    cout;
    setw(1);
    setprecision(3);
    int a[10][10];
    // f(a); 错误， a的类型是 int (*)[10] 与 int ** 不兼容
    int c = 10;
    const int &b = c + 2;
    c = 11;
    cout << c << ' ' << b;
}
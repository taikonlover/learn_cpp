#include <iostream>
#include <iomanip>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
// using std::cout; 只引入cout

int main()
{
    double a = M_PI;
    double b = 3.1576543;
    cout.fill('-');
    cout << setprecision(4) << a << ' ' << b << '\n'; // setprecision(n), setw(n) 在 iomanip 库中，保留n位有效数字
    cout << setw(7) << a << ' ' << b << '\n';         // setw(n) 占 n 位只对后一个数字有效
    cout << setiosflags(ios::left) << setw(7) << a << '|' << setw(7) << b << '|'
         << resetiosflags(ios::left) << setw(7) << b << '\n';
    string c("China!");
    string s1[10];
    string s(5, 'c');
    for (int i = 0; i < 10; i++)
    {
        s1[i] = c;
    }
    cout << c << ' ' << s1[0] << ' ' << s;
    char ch;
    cin.get(ch); // 输入一个字符，可以用来输入空白符(空格，换行，tab)
    cout << "ch: " << ch;
    char ch1[10];
    cin.getline(ch1, 10, '\n'); // getline(char*, int, char) 输入n个字符以指定字符结尾，默认为'\n'
                                //如果输入长度超过n输入流会关闭，后续输入都失效
    cin.clear();                // 可以使用clear()把输入流重新打开
    cin.ignore(1000, '\n');     // 清除前面多余的n 个输入，默认以'\n'结尾
    cout << "ch1:" << ch1 << '\n';
    cin >> ch1;
    cout << "ch1: " << ch1 << '\n';

    // C++ 中 NULL, 0 nullptr 等价
    void *pi;
    int *pj;
    pi = pj;        // void* 可以指向任何类型的空间
                    // pj = pi; 错误，void*要进行强制类型转换才能使用
    pj = (int *)pi; // 正确
}
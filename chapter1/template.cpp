#include <iostream>
using namespace std;

template <typename T>
T maxx(T a, T b, T c)
{
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    return a;
}

int main()
{
    cout << maxx(1, 2, 3) << '\n';
    cout << maxx(4.0, 2.0, 6.0) << '\n';
    return 0;
}
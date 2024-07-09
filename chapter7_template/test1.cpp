#include <iostream>
using namespace std;

template <typename T>
T min1(T a, T b)
{
    return a < b ? a : b;
}
int min1(int a, int b)
{
    cout << "1:";
    return a < b ? a : b;
}

template <>
double min1(double a, double b)
{
    cout << "2:";
    return a < b ? a : b;
}

int main()
{
    cout << min1(1, 2.0);
}
#include <iostream>
using namespace std;

void test(int t) throw(char const *, int, double) // c++11
{
    if (t == 0)
        throw "ice point!";
    if (t == 100)
        throw t;
    else
        throw 1.0 * t;
}

int main()
{
    try
    {
        test(0);
        test(100);
        test(12);
    }
    catch (...)
    {
        cout << "catch a expt";
    }
}
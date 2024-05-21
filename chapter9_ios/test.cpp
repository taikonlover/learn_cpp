#include <iostream>
using namespace std;

int main()
{
    cout.width(30);
    cout << 12345 << "-----\n";
    int d = -1234;
    cout.width(30);
    cout.setf(ios::showbase | ios::oct, ios::basefield);
    cout << d;
}
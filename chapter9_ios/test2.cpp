#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << 10 << endl;
    double n = -1234567890;
    double a = 123.45699999;
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout << double(n) << ' ' << a << '\n';
    cout.unsetf(ios::floatfield);
    cout.unsetf(ios::showpoint);
    cout << double(n) << ' ' << a << '\n'
         << endl;

    cout.fill('*');
}
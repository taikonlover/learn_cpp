#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout.width(6);
    cout << setw(6);
    cout.precision(10);
    cout << setprecision(10);
    cout.fill('*');
    cout << setfill('*');
    cout << setw(10) << setfill('*') << showbase << uppercase << showpoint << 10.0;
    cout << setiosflags(ios::showbase | ios::uppercase | ios::showpoint);   // 与cout.setf()等价
    cout << resetiosflags(ios::showbase | ios::uppercase | ios::showpoint); // 与 cout.unsetf() 等价
}
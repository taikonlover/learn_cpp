#include <iostream>
using namespace std;

int main()
{
    char c[30] = "this is string";
    double d = -1234.8976;
    cout.width(30);
    cout.fill('*');
    cout.setf(ios::left);
    cout << c << "----L1" << endl;
    cout.width(30);
    cout.setf(ios::right);
    cout << c << "----L2" << endl;
    cout.setf(ios::dec | ios::showbase | ios::showpoint);
    cout.width(30);
    cout << d << "----L3"
         << "\n";
    cout.precision(10);
    cout.width(30);
    cout << d << "----L4"
         << "\n";
    cout.width(30);
    cout.setf(ios::oct, ios::basefield);
    cout << 100 << "----L5"
         << "\n";

    char c1[100];
    cin.get(c1, 3);
    cout << c;
    cin.get(c, 3);
    cout << c;

    char ch;
    ch = cin.get();
    cout << ch;

    char ch1[100];
    cin.read(ch1, 10);
    cout << ch;

    char a;
    cout.width(20);
    cout << right << 10 << endl;
    cout << 11;
}
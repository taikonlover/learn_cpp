#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout.fill('*');
    cout.width(10);
    cout << setiosflags(ios::left) << setiosflags(ios::showpoint) << 123.45;
}
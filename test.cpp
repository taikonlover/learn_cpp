#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Sno;
    char name[10];
    cout << "input Sno:  ";
    cin >> Sno; // L1
    cout << "input name:  ";
    getchar();             // 读出空白符
    cin.getline(name, 10); // L2
    cout << "Sno:" << Sno << endl;
    cout << "name:" << name << endl;
}

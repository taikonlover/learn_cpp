#include <iostream>
#include <cstring>
using namespace std;

double f1(double r = 10)
{
    return 3.14 * r * r;
}

float c = 3.14;

struct stu
{
    char name[10];
    int num;
    char sex;
};

int main()
{
    int i = 3;
    const int &a = i;
    i = 5;
    double j = 3.14;
    const int &b = j + 1;
    cout << j << ' ' << b << '\n';
    cout << a << ' ' << i << '\n';
    int c = 5;
    cout << c << ' ' << ::c << '\n';
    cout << f1(1) << '\n';

    stu *p;
    p = new stu;
    strcpy(p->name, "Lihua");
    p->num = 10123;
    p->sex = 'M';
    cout << p->name << ' ' << p->num << ' ' << p->sex << '\n';
    delete p;

    return 0;
}
// Eg5-13.cpp
#include <iostream>
#include <typeinfo>
#include <sstream>
using namespace std;
class A
{
};
class B : public A
{
};
int main()
{

    A a, *p;
    B b;
    A &rA = b;
    p = &b;
    cout << "1: " << typeid(a).name() << endl;
    cout << "2: " << typeid(p).name() << endl;
    cout << "3: " << typeid(rA).name() << endl;
    cout << "4: " << typeid(3).name() << endl;
    cout << "5: " << typeid("this is string").name() << endl;
    cout << "6: " << typeid(4 + 9.8).name() << endl;
}

/**
 * 使用 typeid.exe | c++filt -t
 */
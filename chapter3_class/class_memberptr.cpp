#include <iostream>
using namespace std;

class circle
{
public:
    int r = 20;
    int getr()
    {
        return r;
    }
};

int main()
{
    circle c1;
    int circle::*ptr;
    ptr = &circle::r;
    cout << c1.*ptr << '\n';
    c1.*ptr = 10;
    int (circle::*funptr)();
    funptr = &circle::getr;
    cout << (c1.*funptr)();
}
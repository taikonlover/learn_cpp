#include <iostream>
using namespace std;

namespace ABC
{
    int count;
    struct student
    {
        char *name;
        int age;
        inline void dispace();
    };
    inline int min(int a, int b);
    void f() {}
    void g() {}
}

namespace B
{
    void f() {}
}
using namespace ABC;
using namespace B; // 把命名空间ABC和B引进来
// using std::cout;
void ABC::student::dispace()
{
    cout << this->name << ' ' << this->age;
}
int m = 10;
int main()
{
    ABC::count = 10;
    cout << ABC::count;
    ABC::f(); // 有重名，指明命名空间
    g();      // 没有重名，不用指明
    int m = 20;
    {
        int t = m;
        int m = 30;
        cout << t << '\n';
        cout << m << '\n';
        cout << ::m << '\n'; // 域选择运算符选择全局变量
    }
    cout << m << '\n';
    cout << ::m << '\n';
}

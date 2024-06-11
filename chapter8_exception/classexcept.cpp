/**/
#include <iostream>
#include <cstdlib>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        cout << "con A\n";
    }
    ~A()
    {
        cout << "A desctur\n";
    }
};
class B
{
    A obj[3];
    double *pb[10];

public:
    B()
    {
        cout << "B con\n";
        for (int i = 0; i < 10; i++)
        {
            // pb[i] = (double *)malloc(2000000000 * sizeof(double));
            try
            {
                pb[i] = new double[2000000000];
            }
            catch (bad_alloc) // 不会调用拷贝构造函数
            {
                throw i;
            }
            // if ((pb[i] == nullptr))
            // {
            //     throw i;
            // }
            // else
            // {
            //     cout << "B pb" << i << '\n';
            // }
        }
    }
    ~B()
    {
        cout << "B des";
        for (int i = 0; i < 10; i++)
        {
            delete[] pb[i];
        }
    }
};

int main()
{
    try
    {
        B b;
    }
    catch (int e)
    {
        cout << "err " << e << '\n';
    }
}

/*
catch(full){ 没有参数名，不会调用拷贝构造函数
}
*/
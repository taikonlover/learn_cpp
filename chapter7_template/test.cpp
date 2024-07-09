#include <iostream>
using namespace std;
template <typename T, typename D = double> //默认模板参数
int compare(T t = 0, D u = 0)
{
    if (t > u)
        return 1;
    else if (t < u)
        return -1;
    else
        return 0;
}
void main()
{
    cout << compare(10, 'a') << "\t";
    // compare<int,char>(10,'a')
    cout << compare<int, char>() << "\t";
    // compare<int,char>(0,0)
    cout << compare(2) << "\t";
    // compare<int,double>(20,0)
    cout << compare<int>() << endl;
    // compare<int,double>(0,0)
}

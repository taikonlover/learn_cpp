#include <iostream>
using namespace std;

class Full
{
    int a;

public:
    Full(int n) : a(n)
    {
    }
    void get()
    {
        cout << a << '\n';
    }
};

class stack
{
    int max = 3;
    int p = -1;
    int num[3];

public:
    void push(int a)
    {
        ++p;
        if (p >= 3)
        {
            throw Full(a);
        }
        else
        {
            num[p] = a;
        }
    }
};

int main()
{
    stack st;
    try
    {
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
    }
    catch (Full a)
    {
        a.get();
    }
}

/*
catch(full){ 没有参数名，不会调用拷贝构造函数
}
*/
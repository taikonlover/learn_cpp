#include <iostream>
using namespace std;

class Base
{
private:
    static int cnt;

protected:
    Base()
    {
        cnt++;
    }

public:
    static int get()
    {
        return cnt;
    }
};

class extend : public Base
{
public:
    extend()
    {
        cout << "extend constructor called" << endl;
    }
};

int Base::cnt = 0;

int main()
{
    extend e1;
    extend e2;
    cout << Base::get();
}
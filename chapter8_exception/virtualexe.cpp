#include <iostream>
using namespace std;

class basic
{
public:
    virtual void where()
    {
        cout << "Basic\n";
    }
};

class File : public basic
{
public:
    void where()
    {
        cout << "File \n";
    }
};

class disk : public basic
{
public:
    void where()
    {
        cout << "disk \n";
    }
};

int main()
{
    try
    {
        throw disk();
    }
    catch (basic &p)
    {
        p.where();
    }
}

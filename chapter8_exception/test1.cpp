
#include <iostream>
using namespace std;
void fc()
{
    try
    {
        throw "help...";
    }
    catch (int x)
    {
        cout << "in fc..int hanlder" << endl;
    }
    try
    {
        cout << "no error handle..." << endl;
    }
    catch (char *px)
    {
        cout << "in fc..char* hanlder" << endl;
    }
}
void fb()
{
    int *q = new int[10];
    try
    {
        fc();
        cout << "return form fc()" << endl;
    }
    catch (...)
    {
        delete[] q;
        throw;
    }
}
void fa()
{
    char *p = new char[10];
    try
    {
        fb();
        cout << "return from fb()" << endl;
    }
    catch (...)
    {
        delete[] p;
        throw;
    }
}
int main()
{
    try
    {
        fa();
        cout << "return from fa" << endl;
    }
    catch (...)
    {
        cout << "in main" << endl;
    }
    cout << "End" << endl;
}

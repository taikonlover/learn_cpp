#include <iostream>
using namespace std;

class Time
{
public:
    inline void setTime();
    inline void printTime();

private:
    int hour, second, minute;
};

int main()
{
    Time t1;
    t1.setTime();
    t1.printTime();
}

void Time::setTime()
{
    cin >> this->hour >> this->minute >> this->second;
}

void Time::printTime()
{
    cout << this->hour << ':' << this->minute << ':' << this->second;
}
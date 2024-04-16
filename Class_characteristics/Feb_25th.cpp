#include <iostream>
using namespace std;

class Student
{
private: // private 只能被成员函数（有元类除外）引用，默认为 private
    int num;
    char name[20];
    char sex;

public: // 外界可以调用
    void displace()
    {
        cout << "num: " << num << endl;
        cout << "name: " << name << endl;
        cout << "sex: " << sex << endl;
    }
    inline void displace1();
};

inline void Student::displace1()
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

int main()
{
    Student std1;
    std1.displace();
    std1.displace1();
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char *name;
    int age;

public:
    Person() {}
    Person(char *Name, int Age);
    ~Person();
    Person(const Person &other);
    Person &operator=(const Person &other);
    void setAge(int x) { age = x; }
    void print();
};
Person::Person(char *Name, int Age)
{
    name = new char[strlen(Name) + 1];
    strcpy(name, Name);
    age = Age;
    cout << "constructor ...." << endl;
}
Person::~Person()
{
    cout << "destructor..." << age << endl;
    delete[] name;
}
void Person::print()
{
    cout << name << "\t The Address of name: " << name << endl;
}
// 拷贝构造函数
Person::Person(const Person &other)
{
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    age = other.age;
    cout << "class Person copy structor\n";
}
// 赋值运算符重载函数
Person &Person::operator=(const Person &other)
{
    if (this == &other)
    {
        return *this;
    }
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    age = other.age;
    cout << "class Person copy operator\n";
    return *this;
}

Person test(Person a) // copy constructor
{
    cout << "2:";
    return a; // copy constructor
}

int main()
{
    Person obj1("lihua", 19); // constructor
    Person obj2;
    obj2 = obj1; // copy operator
    Person obj3;
    cout << "1:";
    obj3 = test(obj2); // copy operator
    cout << "3:";
    Person *obj4 = new Person(obj2); // copy constructor
    delete obj4;                     // destructor
    cout << "4:";
}
/*
执行结果：
constructor ....
class Person copy operator
1:class Person copy structor
2:class Person copy structor
class Person copy operator
destructor...19
destructor...19
3:class Person copy structor
destructor...19
4:destructor...19
destructor...19
destructor...19
*/

class A
{
public:
    void f() {}
};

class B
{
public:
    void f() {}
};

class C : public A, public B
{
};
// 基类的构造函数根据继承列表顺序依次调用
int main()
{
    C c;
    c.A::f();
    c.B::f();
}
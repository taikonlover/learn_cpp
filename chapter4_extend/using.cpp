class A
{
public:
    void f1();
    void f1(int x);
    void f1(int x, int y);

public:
    int a;

private:
    int b;

protected:
    int c;
};

class B : private A
{
public:
    void f1(char); // 隐藏基类的所有重载
    void f2()
    {
        A::f1(1); // 通过 基类名::函数名 调用被隐藏的基类函数
    }
    using A::f1; // 恢复基类被隐藏的函数

public:
    A::a; // 只能恢复属性， 不能提升或者下降, 可以使用 using 修改非 private 成员的权限

protected:
    using A::c;
};

int main()
{
    B b;
    // b.f1();
    b.f1();
}

// 静态成员被本类和派生类所共享
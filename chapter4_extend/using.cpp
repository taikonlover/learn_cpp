class A
{
public:
    void f1();
    void f1(int x);
    void f1(int x, int y);
    int a;
    void f2(int q) {}

private:
    int b;
    int c;
};

class B : protected A
{
public:
    void f1(char); // 隐藏基类的所有重载
    void f2()
    {
        A::f1(1); // 通过 基类名::函数名 调用被隐藏的基类函数
    }
    using A::f1; // 恢复基类被隐藏的基类 f1 所有重载函数

    // A::c; // 只能恢复属性， 不能提升或者下降, C++11 已被弃用
    // A::f2; // 需要放在同名的访问域

protected:
    // using A::c; 可以使用 using 修改非 private 成员的权限，不可以修改 private 权限
};

int main()
{
    B b;
    // b.f1();
    b.f1();
    // 对象名.基类::基类成员函数，可以用来调用被隐藏的重载, 且基类要为 public 继承
}

// 静态成员被本类和派生类所共享
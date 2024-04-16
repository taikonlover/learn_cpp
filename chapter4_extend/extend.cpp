class X
{
public:
    void getij();

protected:
    int i, j; // 继承的类可以访问，外部不可访问
};

class Y : public X // proted 和 public 属性不变，基类的 private 和不可访问成员都不可访问
{
public:
    void make_k();

private:
    int k;
};

void Y::make_k()
{
    k = i * j;
}

class A final // final 关键字让其他类不能被继承
{
};

// class B : A
// {
// }
/*
私有派生：
基类的公有成员和保护成员变成私有成员，基类的 private 和不可访问成员都不可访问
保护派生
基类的公有成员和保护成员变成保护成员，基类的 private 和不可访问成员都不可访问
class 缺省情况下为 public 派生
struct 缺省情况下为 private 派生
*/
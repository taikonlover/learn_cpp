class X
{
    int a;

public:
    X(int a);      // 可以把 a 转换为 X 类
    operator int() // int 的类型转换，没有函数返回值有 return 语句，返回对应类的对象
    {
        return a;
    }
};

int main()
{
    int num = 2;
    X x1 = num; // 和下面等价
    X x2(num);
}
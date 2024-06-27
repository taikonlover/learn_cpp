class point
{
public:
    int x, y;
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

class ID
{
public:
    ID(int id)
    {
        value = id;
    }

private:
    int value;
};

class student
{
public:
    student(char *pname = "no name", int ssID = 0) : id(ssID) // 构造函数不能显示调用
    {
        name = pname;
    }

public:
    char *name;
    ID id; // 只能访问公有成员
};

int main()
{
    point p[3] = {{1, 2}, {2, 4}, {3, 4}}; // 提供构造函数参数
}

/**
 * 没有构造函数的类系统会自己生成一个默认构造函数。可以定义对象数组
 * 有无参、所有参数都有默认参数，也可以定义对象数组
 * 否则需要通过列表的方式列出提供构造函数参数
 */

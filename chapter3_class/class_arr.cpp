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
    point p[3] = {{1, 2}, {2, 4}, {3, 4}};
}
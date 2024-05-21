#include <iostream>
using namespace std;

int main()
{
    char a[10];
    // cin >> a;
    // cout << a;
    cin.get(a, 1024, '\n'); // 从流中读取 1024 个字符，或遇到 '\n' 截止
    char c;
    c = cin.get(); // 读取一个字符
    cin.get(c).get(c).get(c);
    cin.read(a, 1024).read(a, 1024).read(a, 1024);
    cout << a;
    cin.ignore(10, EOF).ignore(10, EOF);
    cin.getline(a, 1024, '\n').get(c);
    cin.peek();
    cin.putback('a');
    // getline() 会把分隔符丢弃，get() 会把分隔符留在流里，
    // 如果要读入的数据量超过实际读入的数据量，getline 会出现错误， get 不会
    // cout << (x&y) << endl; x&y 要用()改变运算顺序
}

/*
cout 标准输出
cerr 标准错误输出(非缓冲方式)
clog 标准错误输出(缓冲方式)
cin  标准输入
*/
#include <fstream>
using namespace std;

int main()
{
    fstream fin("D:\\VS_source_file\\Learn_cpp\\chapter9_ios\\test.txt", ios::in | ios::out);
    char ch[100];
    int a;
    fin.read(ch, 10);
    fin.read((char *)&a, sizeof(a));
    fin.write((char *)&a, sizeof(a)); // 按块写；
    fin.get(*ch);                     // 按字节读入
    fin.put(*ch);                     // 按字节写
    fin.clear();
    fin.seekg(0, ios::beg);
}
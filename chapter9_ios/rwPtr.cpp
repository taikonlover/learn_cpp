#include <fstream>
using namespace std;

int main()
{
    fstream dataFile("D:\\VS_source_file\\Learn_cpp\\chapter9_ios\\test.txt", ios::in | ios::out);
    dataFile.seekg(0);           // 指定读指针
    dataFile.seekg(0, ios::beg); // 0 为偏移量，可为正负
    dataFile.tellg();
    ios::cur;          // 指针当前位置
    ios::beg;          // 文件开头
    ios::end;          // 文件结尾
    dataFile.seekp(0); // 指定写指针
    dataFile.seekg(0, ios::beg);
    dataFile.tellp();
}
#include <iostream>
#include <ios>
using namespace std;

int main()
{
    _Ios_Iostate::_S_badbit;
    ios_base::goodbit; // 正常状态
    ios_base::eofbit;  // 到达文件尾
    ios_base::failbit; // I/O 操作失败，流没有被破坏
    ios_base::badbit;  // 系统级故障，无法恢复
    cin.rdstate();
    cin.eof();
    cin.setstate(ios::goodbit);
    cin.clear();
    cin.clear(ios::goodbit);
    cin.eofbit;
}
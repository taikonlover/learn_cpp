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
    cin.eof();                  // 使用cin.eof() 判断或者直接if(cin)判断
    cin.setstate(ios::goodbit); // 设置标识位
    cin.clear();                // 清除状态位
    cin.clear(ios::goodbit);    //设置/清除指定状态位
    cin.eofbit;
}
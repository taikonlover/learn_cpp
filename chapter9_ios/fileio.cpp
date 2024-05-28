#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fin("clients.txt", ios::in);
    ifstream outfile;
    outfile.open("clients.txt", ios::in);
    ofstream fout("clients.txt", ios::out);
    ios::in;
    ios::out;
    ios::app; // append
    ios::ate; // 打开已有文件，并将读指针置于文件尾，如果不存在则打开出错
    ios::trunc;
    ios::binary;
    // ios::noreplace;
    // ios::nocreate;

    fstream dataFile("name.dat", ios::in | ios::out);
    if (!dataFile)
    {
        cout << "ERR";
    }
    if (dataFile.fail())
    {
        cout << "ERR";
    }
    dataFile.open("D:\\VS_source_file\\Learn_cpp\\chapter9_ios\\test.txt", ios::in | ios::out);
    dataFile << 10 << 20;
    int a;
    cout << a;
    cout << dataFile.eof();
    cout << dataFile.rdstate();
    dataFile.clear();
    dataFile.seekg(0, ios::beg);
    dataFile >> a;
    cout << a;
    dataFile.close();
}
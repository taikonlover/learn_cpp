#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 格式：
 * ostream& manip_name(ostream& stream){
 *     ...
 *     return stream;
 * }
 */
ostream &money(ostream &output) // 操纵符
{
    return output << "\t$";
}

ostream &setup(ostream &stream)
{
    stream.setf(ios::left);
    stream << setw(10) << setfill('$');
    return stream;
}

int main()
{
    cout << money << setup << 10;
}
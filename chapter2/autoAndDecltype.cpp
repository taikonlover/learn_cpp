int main()
{
    const auto &r0 = 4.3;  // 右值引用
    decltype(4) a = 10;    // int a = 10;
    decltype((4)) b = 10;  // int &bb = 10;
    const int &ic = 10;    // 常量引用可以应用右值
    decltype(ic) y = a;    // const int &y = a;
    decltype((ic)) y1 = a; // y1 为引用类型
    int i = 0;
    int *p = &i;
    decltype(*p) y2 = a; // int &y2 = a; !!!!!!
    int c[] = {1, 22, 3};
    auto p1 = c;     // int *p1 = a;
    decltype(c) p21; // int p2[3];
    const int j = 0;
    const int &r1 = j;
    auto &p2 = j;
    double d = 92.221, d1{92.221}, d3{d};
    int *x = new int(d);
    *x = {32}; // C++11
    d = {32};  // C++11
    d = *x;
    d = {*x};      //错误, C++11
    int y11 = {d}; //错误, C++11
}
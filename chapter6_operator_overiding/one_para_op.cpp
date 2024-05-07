class X
{
    int a;
    X &operator++();                // ++X
    X operator++(int);              // X++
    friend X &operator++(X &a);     // ++X
    friend X operator++(X &a, int); // X++
};
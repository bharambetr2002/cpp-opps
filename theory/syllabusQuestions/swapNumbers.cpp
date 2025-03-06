// Program : Swap two numbers

#include <iostream>
using namespace std;

int swapNo(int *c, int *d);
int main()
{
    int a = 10;
    int b = 20;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << b << endl;

    int c = 10;
    int d = 20;
    int swap2;
    swap2 = swapNo(&c, &d);
    cout << c << d << endl;

    int e = 10, f = 20;
    e = e + f;
    f = e - f;
    e = e - f;
    cout << e << f << endl;
}

int swapNo(int *c, int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    return 0;
};
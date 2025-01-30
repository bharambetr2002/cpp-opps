/*
in c we use headerfile stdio.h and uses printf, scanf
in c++ we use iostream as headerfile and uses cin for input and cout for output
*/

#include <iostream>
using namespace std;

int main()
{
    // Insertion Operator
    cout << "Hello World !!" << endl; // insertion operator is necessary here endl is used instead of "\n" to have a new line after print

    int a;
    // Extraction Operator
    cin >> a;
}
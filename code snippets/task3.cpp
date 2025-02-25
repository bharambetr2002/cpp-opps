// Check weather a user entered a number is even or not

#include <iostream>
using namespace std;
bool check(int);
int main()
{
    cout << "Enter the number : ";
    int number;
    cin >> number;
    bool flag;
    flag = check(number);
    if (flag == true)
    {
        cout << "Number is even.";
    }
    else
    {
        cout << "Number is odd";
    }
}
bool check(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//  Sum of Digits

#include <iostream>
using namespace std;

int sumDigit(int);

int main()
{
    cout << "Enter the number : ";
    int number;
    cin >> number;
    int sum;
    sum = sumDigit(number);
    cout << "The sum is " << sum;
}

int sumDigit(int num)
{
    int sum = 0;
    int digit;
    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}

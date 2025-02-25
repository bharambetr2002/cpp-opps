// Palindrome

#include <iostream>
using namespace std;

bool palindrome(int num)
{
    int original = num;
    int rev = 0, digit;

    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    return rev == original;
}

int main()
{
    cout << "Enter the number you want to check for palindrome: ";
    int num;
    cin >> num;

    bool check = palindrome(num);

    if (check)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not a palindrome";
    }
    return 0;
}

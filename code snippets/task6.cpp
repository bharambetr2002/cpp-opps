// accept an array of 5 int and display the array

#include <iostream>
using namespace std;

void display(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5];
    cout << "Enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    display(arr);
    return 0;
}

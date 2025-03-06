// Program : Calculate the area of rectangle

#include <iostream>
using namespace std;

int main()
{
    int height, width;
    cout << "Enter the height" << endl;
    cin >> height;
    cout << "\nEnter the width" << endl;
    cin >> width;

    int area;
    area = width * height;
    cout << "\nArea of rectangle is : " << area;
}
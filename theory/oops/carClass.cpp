#include <iostream>
using namespace std;

class Car // created a class called car
{
public:           // created public datatypes
    string brand; // data members or attributes or properties or class car
    string model; // data members or attributes or properties or class car
    int year;     // data members or attributes or properties or class car
}; // the semicolon is compalsury in the class end

int main()
{
    // creating an object of car
    Car carObj1;           // classname + object name = object no. 1
    carObj1.brand = "BMW"; // add string value to brand
    carObj1.year = 1999;   // add int value to model
    carObj1.model = "X5";  // add string value to model

    Car carObj2;           // classname + object name = Object no. 2
    carObj2.brand = "BAW"; // add string value to brand
    carObj2.year = 1989;   // add int value to model
    carObj2.model = "X9";  // add string value to model
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}

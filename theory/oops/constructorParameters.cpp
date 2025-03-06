#include <iostream>
using namespace std;

class Car // the class
{
public:                            // access specifier
    string brand;                  // attribute
    string model;                  // attribute
    int year;                      // attribute
    Car(string x, string y, int z) // constructor with paramters
    {
        brand = x;
        model = y;
        year = z;
    }
};
int main()
{
    // Creating car objects and calling the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
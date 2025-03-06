#include <iostream>
using namespace std;

class Vehicle // base clase
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "uut, tuut !";
    }
};

class Car : public Vehicle //derived class
{
public:
    string model = "Mustang";
};
int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + "" + myCar.model;
    return 0;
}
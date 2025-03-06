#include <iostream>
using namespace std;

class Car // created a class
{
public:                      // access specifier
    int speed(int maxSpeed); // created a method speed;
};
int Car::speed(int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    Car myObj;                // created a object of car
    cout << myObj.speed(200); // call the method with an argument
    return 0;
}
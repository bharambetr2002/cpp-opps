#include <iostream>
using namespace std;

class Employee
{
private:
    // private attribute
    int salary; // hidden attribute

public:
    void setSalary(int s) // the value from the main class 50000 is passed here.
    {
        salary = s; // the value of salary is set to 50000
    }
    int getSalary()
    {
        return salary; // returns the value of salary
    }
};
int main()
{
    Employee myObj;
    myObj.setSalary(50000);    // setting the value of salary using set method
    cout << myObj.getSalary(); // getting the value of salary using get method
    return 0;
}
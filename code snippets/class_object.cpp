/*
A class is a user defined data type that has data members and member function.

An oject is an instance of a class.

*/

#include <iostream>
using namespace std;

class car
{

public:
    int model;
    string name;
    int noofwheels;
    int noofmirros;
    void cameraWorking()
    {
        cout << "Camera is working" << endl;
    }
};

int main()
{
    car alto;
    alto.model = 1;
    alto.cameraWorking();
}

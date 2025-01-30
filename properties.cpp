#include <iostream>
using namespace std;

class car
{
    int model;    // Model number of the car
    string name;  // Name of the car
    string brand; // Brand of the car
    string color; // Color of the car

public:
    // Mutator - Sets the values of private data members
    void setData(int m, string n, string b, string c)
    {
        model = m;
        name = n;
        brand = b;
        color = c;
    }

    // Inspector - Gets the value of the model
    int getModel()
    {
        return model;
    }

    // Facilitator - Prints details about the car
    void report()
    {
        cout << "This car is manufactured by " << brand
             << " and the name is " << name
             << ". The model number is " << model
             << " and this car's beautiful color is " << color << "." << endl;
    }
};

int main()
{
    car alto;                                                   // Create an object of the car class
    alto.setData(24, "Alto LXI", "Maruti Suzuki", "Dark Grey"); // Set the data for the car

    // Print the model of the car using the inspector
    cout << "The model of the alto is " << alto.getModel() << endl;

    // Call the facilitator to display the car's full details
    alto.report();

    return 0; // Return 0 to indicate successful execution
}

#include <iostream>
using namespace std;

class MyClass // the class
{
public:       // Access specifier
    MyClass() // constructor
    {
        cout << "Hello World !";
    }
};
int main()
{
    MyClass myObj; // create an object of MyClass
    return 0;
}
#include <iostream>
using namespace std;

// Base class (parent)
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class.";
    }
};

// Derived class (child)
class MyChild : public MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in d1 class.";
    }
};

// Derived class (grandchild)
class MyGrandChild : public MyChild
{
public:
    void myFunction()
    {
        cout << "Some content in d2 class.";
    }
};

int main()
{
    MyChild myObj;
    myObj.myFunction();
    return 0;
}
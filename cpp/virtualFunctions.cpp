#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    virtual void display()
    {
        cout << "1. Displaying Base class variable var_base : " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "2. Displaying Base class variable var_base : " << var_base << endl;
        cout << "2. Displaying Derived class variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Base objBase;
    Derived objDerived;
    base_class_pointer = &objDerived;
    base_class_pointer->display();

    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base : " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base : " << var_base << endl;
        cout << "Displaying Derived class variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    // POINTER of BASE Class
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->var_base = 34;
    // base_pointer->var_derived = 134; ...not accessible
    base_pointer->display();

    // POINTER of DERIVED Class
    Derived *derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_base = 198;
    derived_pointer->var_derived = 98;
    derived_pointer->display();
    return 0;
}

// pointer jis class ka hoga ushi class ke sath binding hogi, jaise upar pointer base class ka hai lekin wo derived class ke object ko point kar raha hai, leink jab display function call hoga to wo base class ka display funtion hoga.
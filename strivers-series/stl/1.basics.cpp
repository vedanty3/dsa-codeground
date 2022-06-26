#include <bits/stdc++.h>
using namespace std;

// struct is a user defined data type, by default the field will be public.
struct my_data_type
{
    string str;
    int num;
    double d;
    char x;

    my_data_type(string str, double d)
    {
        this->str = str;
        this->d = d;
    }
};

// its a scope.
namespace ved
{
    int val = 10;
    int get_val()
    {
        return val * 10;
    }
}

int main()
{
    double val = 50.0;

    cout << val << endl;
    cout << ved::val << endl;
    cout << ved::get_val() << endl;

    // creating an instance of an object vedant of struct `my_data_type`.
    my_data_type *vedant = new my_data_type("vedant", 22.0 / 7.0);

    // this is how we can access different members of a particular class or struct. e.g. object_name->member_name;
    cout << vedant->d << endl;
    cout << vedant->str << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class copyConstructor
{
private:
    int value;

public:
    copyConstructor()
    {
    }
    void display(void)
    {
        cout << "The object holds value : " << value << endl;
    }
    copyConstructor(int value)
    {
        this->value = value;
    }

    copyConstructor(copyConstructor const &value)
    {
        cout << "copy constructor called" << endl;
    }
};

int main()
{
    copyConstructor o1(33);
    o1.display();
    copyConstructor o2(o1);

    // copyConstructor o2(o1);
    // o2.display();
    // copyConstructor o3=o1;
    // o3.display();
    // copyConstructor o4;
    // o4=o1;            // copy assignment operator.
    // o4.display();
    return 0;
}
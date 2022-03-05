#include <iostream>
using namespace std;

class Base
{
protected:
    int a;
    int b;
};

class Derived : public Base
{
public:
    Derived(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Derived d1(1, 2);
    d1.display();

    return 0;
}
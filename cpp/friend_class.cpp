#include <iostream>
using namespace std;
class calculator;
class complex
{
private:
    int real, img;
    friend class calculator;

public:
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
    void display(void)
    {
        cout << real << " + " << img << "i" << endl;
    }
};

class calculator
{
public:
    complex sum(complex o1, complex o2)
    {
        complex o3;
        o3.setdata((o1.real + o2.real), (o1.img + o2.img));
        return o3;
    }
};

int main()
{
    complex o1, o2, result;
    o1.setdata(10, 2);
    o2.setdata(15, 4);
    o1.display();
    o2.display();
    calculator add;
    result = add.sum(o1, o2);
    cout << "The addition of above two complex numbers is : ";
    result.display();
}

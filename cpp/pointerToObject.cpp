#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << img << endl;
    }
};

int main()
{
    Complex *c1 = new Complex(2, 3);
    // c1->getData();
    (*c1).getData();

    return 0;
}
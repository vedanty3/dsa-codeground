#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void print(void)
    {
        cout << real << " + " << img << "i" << endl;
    }

    Complex operator+(Complex const &o2)
    {
        this->real = real + o2.real;
        this->img = img + o2.img;
        Complex fnew(real, img);
        return fnew;
    }
};
int main()
{
    Complex o1(1, 2);
    Complex o2(4, 2);
    Complex o3 = o1 + o2;
    o1.print();
    o2.print();
    o3.print();

    return 0;
}
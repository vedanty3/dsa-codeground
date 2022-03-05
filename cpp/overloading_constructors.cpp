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
    Complex(int real)
    {
        this->real = real;
        this->img = 0;
    }
    void display(void)
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex o1(3, 4);
    Complex o2(1);
    o1.display();
    o2.display();

    return 0;
}
#include<iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    complex operator+(complex &o2)
    {
        this->real=real+o2.real;
        this->img=img+o2.img;
        complex fnew(real,img);
        return fnew;
    }

    void print(void)
    {
        cout<<real<<" + "<<img<<"i";
    }

};

int main()
{
    complex o1(2,3);
    complex o2(1,1);
    complex o3=o1+o2;
    o3.print();
}

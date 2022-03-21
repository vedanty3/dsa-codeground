#include<iostream>
using namespace std;

class complex
{
private:
    int real,img;
public:
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;

    }


    void plus(complex const &p2)
    {
        int x=this->real+p2.real;
        int y=this->img+p2.img;
        this->real=x;
        this->img=y;
    }

    void multiply(complex const &p2)
    {
        int x=this->real*p2.real-img*p2.img;
        int y=this->real*p2.img+img*p2.real;
        this->real=x;
        this->img=y;


    }

    void print(void)
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    complex p1(3,2);
    complex p2(1,3);
    p1.plus(p2);
    p1.print();
    p2.print();
    p1.multiply(p2);
    p1.print();

    return 0;
}

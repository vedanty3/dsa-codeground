#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    void setdata(int real,int img)
    {
        this->real=real;
        this->img=img;

    }

    void add(complex const &c1,complex const &c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }

    void display(void)
    {
        static int count;
        cout<<"Complex Number "<<count+1<<" is : ";
        cout<<real<<" + "<<img<<"i"<<endl;
        count++;
    }
};

int main()
{
    complex c1;
    complex c2;
    complex c3;
    c1.setdata(2,3);
    c2.setdata(2,1);
    c3.add(c1,c2);
    c1.display();
    c2.display();
    c3.display();


    return 0;
}

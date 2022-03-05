#include<iostream>
using namespace std;
class Y;
class X
{
private:
    int num1;
public:
    friend void sum(X o1,Y o2);
    void setdata(int a)
    {
        num1=a;
    }
};

class Y
{
private:
    int num2;
public:
    friend void sum(X o1,Y o2);
    void setvalue(int b)
    {
        num2=b;
    }
};


void sum(X o1,Y o2)
{
    cout<<"The sum of objects of above two classes is : "<<o1.num1+o2.num2;
}


int main()
{
    X o1;
    Y o2;
    o1.setdata(11);
    o2.setvalue(2);
    sum(o1,o2);


}

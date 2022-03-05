#include<iostream>
using namespace std;
class change2;
class change1
{
private:
    int num1;
public:
    friend void swap(change1 &o1,change2 &o2);
    void setdata(int n1)
    {
        num1=n1;
    }
    void display(void)
    {
        cout<<num1<<endl;

    }
};

class change2
{
private:
    int num2;
public:
    friend void swap(change1 &o1,change2 &o2);
    void setvalue(int n2)
    {
        num2=n2;
    }
    void print(void)
    {
        cout<<num2<<endl;

    }
};

void swap(change1 &o1,change2  &o2)
{
    int temp=o1.num1;
    o1.num1=o2.num2;
    o2.num2=temp;
}

int main()
{
    change1 o1;
    change2 o2;
    o1.setdata(4);
    o2.setvalue(3);
    cout<<"The values before swapping is : "<<endl;
    cout<<" o1 = ";
    o1.display();
    cout<<endl;
    cout<<" o2 = ";
    o2.print();

    swap(o1,o2);
    cout<<endl<<"The values after swapping is : "<<endl;
    cout<<" o1 = ";
    o1.display();
    cout<<endl;
    cout<<" o2 = ";
    o2.print();
}

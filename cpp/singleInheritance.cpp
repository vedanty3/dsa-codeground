#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    int data1;
    int data2;
    void getData();
    void displayData(int data);
};

void base::getData()
{
    data1=1;
    data2=2;
}

void base:: displayData(int data)
{
    cout<<data<<" "<<endl;
    cout<<data1<<" "<<endl;
    cout<<data2<<" "<<endl;
}


class derived: private base
{
public:
    int data3;
    void setData(void)
    {
        data3=3;
        getData();
        displayData(2);
    }
};




int main()
{
    derived d1;
    d1.setData();
    return 0;
}

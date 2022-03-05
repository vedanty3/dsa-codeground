#include<iostream>
using namespace std;

class staticmem
{
private:
    int id;
    static int count;
public:
    void setid(void)
    {
        cout<<"Enter employee Id : ";
        cin>>id;
        count++;
    }

    void displaydata(void)
    {
        cout<<"Employee Id : "<<id<<endl;
        cout<<"Employee Number : "<<count<<endl;

    }

    static void getcount(void)
    {
        cout<<"The value of count is : "<<count<<endl;

    }
};
int staticmem::count;

int main ()
{
    staticmem rahul,raj,mahesh;
    raj.setid();
    raj.displaydata();
    raj.getcount();
    rahul.setid();
    rahul.displaydata();
    rahul.getcount();
    mahesh.setid();
    mahesh.displaydata();
    mahesh.getcount();

    return 0;
}

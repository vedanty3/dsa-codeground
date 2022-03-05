#include<iostream>
using namespace std;
class details
{
private :
    int a,b;
public:
    void rollno(int x,int y);
    void rollcall()
    {
        cout<<"Rahul's roll no. is : "<<a<<endl;
        cout<<"Jays's roll no. is : "<<b<<endl;

    }

};

void details::rollno(int x, int y)
{
    a=x;
    b=y;

}

int main()
{
details rollnumber;
rollnumber.rollno(4,5);
rollnumber.rollcall();

}

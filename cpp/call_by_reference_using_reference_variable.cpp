#include<iostream>
using namespace std;
void change(int &a,int &b);
int main()
{
    int a,b;
    a=4;
    b=1;
    cout<<"Before swapping : "<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    change(a,b);
    cout<<"After swapping : "<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}

void change(int &a, int &b)                        //  void (can be replaced by) ------->  int &  and "return a"  at the end.....
{
    int temp =a;
    a=b;
    b=temp;
}


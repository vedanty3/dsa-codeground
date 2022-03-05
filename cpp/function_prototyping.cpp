#include<iostream>
using namespace std;
int sum(int a,int b);
void greet();
int main()
{

    int a,b;
    cout<<"Enter your first number : ";
    cin>>a;
    cout<<endl<<"Enter your second number : ";
    cin>>b;
    sum(a,b);
    greet();
}


int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;

}

void greet()
{
    cout<<"\n Hello, Good Morning ";

}

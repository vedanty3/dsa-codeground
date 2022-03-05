#include<iostream>
using namespace std;
void change(int *a,int* b);
int main()
{
    int a,b;
    a=4;
    b=1;
    cout<<"Before swapping : "<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    change(&a,&b);
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}

void change(int * a, int * b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}


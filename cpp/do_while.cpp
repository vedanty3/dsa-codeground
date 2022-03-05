#include<iostream>
using namespace std;
int main()
{
    int i=1;
    cout<<"******Multiplication Table of 6******"<<endl;
    do
    {
        cout<<"6 x "<<i<<" = ";
        cout<<6*i<<endl;
        i++;
    }
    while(i<=10);
    return 0;
}

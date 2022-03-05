#include<iostream>
using namespace std;

int fibonacci(int n)
{
if(n<2)
{
    return 1;

}
else
{
return (fibonacci(n-2)+ fibonacci(n-1));
}
}



int main()
{
    int  n;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"The "<<n<<"th term is : "<<fibonacci(n);




}

#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"Enter the number : ";
    cin>>n;


    if(n<0)
    {
        cout<<"Negative integers are not valid !";

    }

    else{
    for(int i=1;i<=n;++i)
    {
        factorial*=i;

    }
   cout<<"The factorial of number is : "<<factorial;
    }
return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,f1,f2,f;
    f1=0;
    f2=1;
    cout<<"Enter a number : ";
       cin>>n;
    cout<<f1<<" "<<f2<<" ";

    for(int i=2;i<n;++i)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<f<<" ";

    }

}

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter array size : ";
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }
    cout<<"Normal array : ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<"Reversed array : ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
    return 0;

    }

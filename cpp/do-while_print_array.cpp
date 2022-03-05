#include<iostream>
using namespace std;
int main()
{
    int a=0,i=0;
    cout<<"Enter array size : ";
    int n;
    cin>>n;
    int array[n];
    while(i<n)
    {
        cout<<"Enter "<<i<<"th element : ";
        cin>>array[i];
        i++;
    }
    cout<<"Your array is : ";
    while(a<n)
    {

        cout<<array[a]<<" ";
        a++;
    }
    return 0;
}

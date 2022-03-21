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
        cout<<"Enter "<<i<<"th element : ";
        cin>>array[i];
    }
    cout<<"Your array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    int start=0,end=n-1;
    while(start<=end)
    {

     swap(array[start],array[end]);

     start++;
     end--;
    }
    cout<<endl<<"The array is reversed : ";
    for(int i=0;i<n;i++)
    {

        cout<<array[i]<<" ";
    }
    return 0;

}

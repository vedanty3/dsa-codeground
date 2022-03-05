#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int sum = 0;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i<<"th"<<" element : ";
        cin>>array[i];
    }
    cout<<"The array elements you have entered are : "<<endl;
    for(int a=0;a<n;a++)
    {

        cout<<array[a]<<" "<<endl;
    }

    for(int i=0;i<n;i++)
    {
      sum=sum+array[i];

    }

    cout<<"The sum of array elements is : "<<sum<<endl<<endl;
    return 0;
}

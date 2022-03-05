#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter array size : ";
    int n;
    cin>>n;
    int array[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>array[i];

    }
     int largest=array[0];
     int smallest=array[0];

     cout<<"The array you have entered is : ";
     for(int i=0;i<n;i++)
     {
         cout<<array[i]<<" ";
     }

     for(int i=0;i<n;i++)
     {
         if(array[i]>largest)
         {
             largest=array[i];
         }
         if(array[i]<smallest)
         {
          smallest=array[i];

         }

     }
     cout<<endl<<"The largest element is : "<<largest<<endl;
     cout<<"The smallest element is : "<<smallest<<endl;
     return 0;
     }



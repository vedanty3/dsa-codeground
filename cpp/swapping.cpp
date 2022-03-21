#include<iostream>
using namespace std;
int main()
{
     int a,b,temp;
     cout<<"Enter a = ";
     cin>>a;
     cout<<"Enter b = ";
     cin>>b;
     cout<<"Before Swapping"<<endl;
     cout<<"a = "<<a<<endl;
     cout<<"b = "<<b<<endl;
   /*  temp=a;
     a=b;
     b=temp;   */

    //////////////////////////////////////////////////////////////////////////////
    /*  a=a^b;
     b=b^a;
     a=a^b;    */


//////////////////////////////////////////////////////////////

swap(a,b);


     cout<<"After Swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
     return 0;

}

#include<bits/stdc++.h>
using namespace std;


void prefix(char array[])
{

for(int e=strlen(array);e>='\0';e--)
{
    for(int s =0;s<=e;s++)
    {
     cout<<array[s];
    }

    cout<<endl;
}
}

int main()
{

    char array[100];
    cout<<"Enter your string : ";
    cin.getline(array,100);
    prefix(array);

}

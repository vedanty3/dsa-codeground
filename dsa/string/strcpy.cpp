#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char array[100]="hello";
char string[100]="world";
strcpy(array,string);                               // inbuilt function *** strcpy() *** ...
cout<<"Before : "<<endl;
cout<<"string 1 : "<<array<<endl;
cout<<"string 2 : "<<string<<endl;

for(int i=0;i<strlen(string);i++)
{
array[i]=string[i];

}

cout<<"After : "<<endl;
cout<<"string 1 : "<<array<<endl;
cout<<"string 2 : "<<string;

}

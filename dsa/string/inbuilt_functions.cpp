#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int len;
    char array[100];
    char string[100];
  //cout<<"Enter array size : ";
    cin.getline(array,100);
    cin.getline(string,100);
  //len=strlen(array);                                              // strlen ----> string length function...
  //cout<<"The length of string is : "<<len;
    if(strcmp(array,string)==0)                                     // strcmp ----> string compare function...
    {
        cout<< "equal ! ";

    }
    else
    {
        cout<<"not equal !";
    }
}

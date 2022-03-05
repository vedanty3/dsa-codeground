#include<iostream>
#include<cstring>
using namespace std;
bool mystrcmp(char srt1[],char str2[]);
int main()
{
char str1[100];
char str2[100];
cout<<"Enter first string : ";
cin.getline(str1,100);
cout<<"Enter second string : ";
cin.getline(str2,100);
if(mystrcmp(str1,str2))
{

    cout<<"Both strings are equal ! ";
}
else
{

    cout<<"not equal !";
}
}

bool mystrcmp(char str1[],char str2[])
{
    if(strlen(str1)!=strlen(str2)) return false;
    for(int i=0;i<strlen(str2);i++)
    {
        if(str1[i]!=str2[i]) return false;
    }

    return true;
}


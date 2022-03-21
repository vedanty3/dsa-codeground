#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100]="hello";
    char str2[100]="world";
    int n=strlen(str1);
    int m=strlen(str2);
    for(int i=0;i<=m;i++)
    {
        str1[i+n]=str2[i];

    }

    cout<<"After : "<<endl;
    cout<<"str1 : "<<str1<<endl;
    cout<<"str2 : "<<str2;


}

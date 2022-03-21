#include<iostream>
using namespace std;

int length(char array[]);
void reverse(char array[]);

int main()
{
    char array[100];
    cout<<"Enter your string : ";
    cin.getline(array,100);
    reverse(array);
    cout<<"The reversed string is : "<<array;

}

int length(char array[])
{
   int count=0;
   for(int i=0;array[i]!='\0';i++)
   {
       count++;
   }
    return count;
}

void reverse(char array[])
{
    int start=0,end=length(array)-1;
    while(start<end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
}


#include<iostream>
using namespace std;

int sum(int a,int b,int c)
{
    return a+b+c;                            // functions with same name...
}


int sum(int a,int b)
{
    return a+b;
}


int main()
{

cout<<sum(3,4)<<endl;
cout<<sum(4,4,4)<<endl;
return 0;

}

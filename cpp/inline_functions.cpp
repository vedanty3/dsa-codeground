#include<iostream>
using namespace std;
int product(int a,int b);
int main()
{
    int a,b;
    a=3;
    b=4;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;

}




inline int product(int a,int b)
{
    static int c=0;                                    // it will remain same every time when the function will be executed...
    c=c+1;
    return c;
}

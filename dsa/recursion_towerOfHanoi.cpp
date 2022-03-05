// we can directly solve it using formula ((2^(n))-1)


#include<bits/stdc++.h>
using namespace std;

int towerOfHanoi(int n)
{
    if(n==0)
    {
        return 0;
    }
    return towerOfHanoi(n-1)+1+towerOfHanoi(n-1);
}



int main()
{
    int n;
    cin>>n;
    cout<<towerOfHanoi(n)<<endl;
    return 0;
}
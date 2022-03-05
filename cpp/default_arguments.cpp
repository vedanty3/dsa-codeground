#include<iostream>
using namespace std;

float money(int investment,float profit=1.06)
{
    return investment*profit;

}

int main()
{
    int investment;
    investment=1000;
    cout<<"Your amount will be : "<<money(investment);

}

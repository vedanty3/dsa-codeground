#include<bits/stdc++.h>
using namespace std;

    
class destructor
{
    public:
    destructor(void)
    {
        cout<<"Constructor is created for object "<<endl;
    }

    ~destructor()
    {
        cout<<"Destructor called for object "<<endl;
    }


};


int main()
{
    destructor o1;
    destructor *o2=new destructor;
    delete o2;


    return 0;
}
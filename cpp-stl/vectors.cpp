#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> *vp=new vector<int>();  /// Created dynamically and needed to be deleted by the user...
    vector<int> v;                      /// Created statically and will be deleted once it's scope is over...

    for(int i=0; i<100; i++)
    {
        cout<<"Capacity : "<<v.capacity()<<endl;
        cout<<"Size : "<<v.size()<<endl;
        v.push_back(i+1);
    }
    /*
        cout<<endl<<endl;
        for(int i=0; i<100; i++)
        {
            cout<<v.at(i)<<" ";
        }
    */

    vector<int> v2(10,3);          /// initializing a vector "v2(10,3)", here 10 is size and 3 is values to be inserted at [i]th positions...
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2.at(i)<<endl;

    }

    sort(v2.begin(),v2.end());      /// #include<algorithm>

    vector<int> v3(100);           ///it is also correct...

    /*
    ///v[1]=21;

    ///v[4]=110;    /// this is not possible, garbage value will be printed...
    ///v[5]=120;




       cout<<v[0]<<" ";
       cout<<v[1]<<" ";
       cout<<v[2]<<" ";
       cout<<v[3]<<" ";
       cout<<v[4]<<" ";




    v.push_back(10);                  ///element will be inserted at last...
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();                    /// last element will be deleted...

    ///   cout<<v.at(4)<<endl;             /// using ".at" function is safer than using [], because it checks whether the index is valid or not...
    /// cout<<v.at(6)<<endl;             /// [] will print garbage value and ".at" function will return an error message...

    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";                      /// "cout<<v[i]<<" ";"

    }
    */

}

#include<iostream>
using namespace std;


int printarray(int array[7][7],int m,int n)                      /// passing the value of column is mandatory but row is not...
{

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<array[i][j]<<" ";

    }

cout<<endl;

}


}


int main()
{
    int m,n;
    int array[7][7]={{0}};
    printarray(array,7,7);
    return 0;
}

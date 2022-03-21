#include <iostream>
using namespace std;
int main()
{
    char array[100];
    cout << "Enter you string : \n";
    cin.getline(array, 100, '\n'); //   cin.getline()  syntax ---->  cin.getline(array name,size,delimitter)
    cout << array;
    return 0;
}

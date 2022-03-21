#include <iostream>
using namespace std;

int length(char input[]);

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter your string : ";
    char array[n];
    cin >> array;
    cout << "Your string is : " << array << endl;
    cout << "The length of your string is : " << length(array);
    return 0;
}

int length(char input[])
{

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

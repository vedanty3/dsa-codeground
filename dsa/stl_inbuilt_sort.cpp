#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Element at index " << i << " : ";
        cin >> array[i];
    }

    cout << "Your array is : ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
    cout << "Your array after performing Sorting is : ";
    sort(array, array + n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}
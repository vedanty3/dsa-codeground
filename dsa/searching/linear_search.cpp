#include <bits/stdc++.h> // Time Complexity = O(n)
using namespace std;

int linearSearch(int array[], int n, int key);

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> array[i];
    }

    int key;
    cout << "What value are you looking for ? " << endl;
    cin >> key;

    int pos = linearSearch(array, n, key);

    if (pos == -1)
    {
        cout << "value not found" << endl;
    }
    else
    {
        cout << "value is found at index " << pos << endl;
    }
}

int linearSearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }

    return -1;
}
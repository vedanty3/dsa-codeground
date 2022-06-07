/*
Time Complexity of :
Selection Sort : O(n^2)
Bubble Sort : O(n^2)
Optimized Bubble Sort : O(n)
Linear Search : O(n)
Binary Search : O(log n)
Space Complexity of Bubble Sort : O(1) - iteratively.
Space Complexity of Bubble Sort : O(log n) - recursively.

*/

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int array[], int n, int key);

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at " << i << "th index : ";
        cin >> array[i];
    }

    cout << "Your array is : ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    sort(array, array + n);

    cout << "Your array after sorting is : ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    int key;

    cout << endl;
    cout << "Enter the value you're looking for ? " << endl;
    cin >> key;

    int pos = binarySearch(array, n, key);

    if (pos == -1)
    {
        cout << "value not found" << endl;
    }
    else
    {
        cout << endl;
        cout << "the value " << key << " is found at index " << pos << endl;
    }

    return 0;
}

int binarySearch(int array[], int n, int key) /* optimized code for binary search */
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
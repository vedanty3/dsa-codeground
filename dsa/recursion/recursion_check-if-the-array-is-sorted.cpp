#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0 or n == 1)
        return true;

    if (arr[n - 2] > arr[n - 1])
        return false;

    isSorted(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7};

    if (isSorted(arr, 5))
        cout << "array is sorted";
    else
        cout << "array is unsorted";

    return 0;
}
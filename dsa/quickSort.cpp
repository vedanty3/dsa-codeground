#include <bits/stdc++.h>
using namespace std;

int partition(int array[], int start, int end);
void quickSort(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(array, start, end);
    quickSort(array, start, p - 1);
    quickSort(array, p + 1, end);
}

int partition(int array[], int start, int end)
{
    int i = start;
    int pivot = array[end];
    for (int j = start; j <= end - 1; j++)
    {
        if (array[j] < pivot)
        {
            swap(array[i], array[j]);
            i++;
        }
    }
    swap(array[i], array[end]);
    return i;
}

int main()
{
    int array[] = {7, 44, -2, -11, 2, 0, 1};
    cout << "Before Sorting : ";
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    quickSort(array, 0, 6);
    cout << "After Sorting : ";
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

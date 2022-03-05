#include <bits/stdc++.h> // merge sort has time complexity O(n * log n) in all three cases (worst, average and best).
using namespace std;

void mergeArrays(int x[], int y[], int array[], int start, int end);

void mergeSort(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    int x[100], y[100];
    for (int i = start; i <= mid; i++)
    {
        x[i] = array[i];
    }
    for (int i = mid + 1; i <= end; i++)
    {
        y[i] = array[i];
    }
    mergeSort(x, start, mid);
    mergeSort(y, mid + 1, end);
    mergeArrays(x, y, array, start, end);
}

void mergeArrays(int x[], int y[], int array[], int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;
    while (i <= mid && j <= end)
    {
        if (x[i] < y[j])
        {
            array[k] = x[i];
            i++;
            k++;
        }
        else
        {
            array[k] = y[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        array[k] = x[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        array[k] = y[j];
        k++;
        j++;
    }
}

int main()
{
    int array[] = {55, 31, -6, 2, 41, 1};
    mergeSort(array, 0, 5);
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
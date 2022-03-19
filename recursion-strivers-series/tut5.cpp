// Merge Sort

#include <bits/stdc++.h>
using namespace std;

void merge(int *array, int s, int e)
{
    int mid = s + (e - s) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[100];

    while (i <= mid and j <= e)
    {
        if (array[i] < array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = array[i++];
    }

    while (j <= e)
    {
        temp[k++] = array[j++];
    }

    for (int i = s; i <= e; i++)
    {
        array[i] = temp[i];
    }
}

void mergeSort(int array[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    mergeSort(array, s, mid);
    mergeSort(array, mid + 1, e);
    return merge(array, s, e);
}

int main()
{
    int array[] = {9, -99, 1, 4, 3, 7};

    for (auto i : array)
    {
        cout << i << " ";
    }
    cout << "\n";

    mergeSort(array, 0, 5);

    for (auto i : array)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
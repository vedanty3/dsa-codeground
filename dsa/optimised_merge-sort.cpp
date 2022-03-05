#include <bits/stdc++.h> // Space Complexity = O(n)
using namespace std;
void merge(int *array, int start, int end);

void mergeSort(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);
    return merge(array, start, end);
}

void merge(int *array, int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;

    int temp[100];
    while (i <= mid && j <= end)
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
    while (j <= end)
    {
        temp[k++] = array[j++];
    }
    for (int i = start; i <= end; i++)
    {
        array[i] = temp[i];
    }
}

int main()
{
    int array[] = {33, 1, 33, 4, 55, 6, -1, 1};
    mergeSort(array, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
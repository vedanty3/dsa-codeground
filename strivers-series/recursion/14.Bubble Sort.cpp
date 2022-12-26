#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        bool flag = false;
        for (int j = 0; j < arr.size() - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (!flag)
            break;
    }
}

void bubbleSortRecursive(vector<int> &arr, int n)
{
    if (n == 0 or n == 1)
        return;

    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    bubbleSortRecursive(arr, n - 1);
}

void printArray(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {-22, -99, -11};
    printArray(arr);
    bubbleSortRecursive(arr, arr.size());
    printArray(arr);

    return 0;
}
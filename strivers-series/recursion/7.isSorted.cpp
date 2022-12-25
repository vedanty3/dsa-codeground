#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int n)
{
    if (n == 1)
        return true;
    else if (arr[n - 1] < arr[n - 2])
    {
        return false;
    }
    isSorted(arr, n - 1);
}

int main()
{
    vector<int> arr = {22, -22, -2222, 10000};
    bool ans = isSorted(arr, arr.size());
    ans ? cout << "Array is sorted" << endl : cout << "Array is not sorted" << endl;

    return 0;
}
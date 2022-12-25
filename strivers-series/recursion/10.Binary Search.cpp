#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int target, int start, int end)
{
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return true;
    else if (arr[mid] > target)
        return binarySearch(arr, target, start, mid - 1);
    else
        return binarySearch(arr, target, mid + 1, end);
}

int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    bool ans = binarySearch(arr, -55, 0, arr.size() - 1);

    ans ? cout << "Element is present" << endl : cout << "Element is not present" << endl;

    return 0;
}
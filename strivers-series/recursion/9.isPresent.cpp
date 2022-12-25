#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<int> &arr, int element, int n)
{
    if (n == 0)
        return false;
    if (arr[n] == element)
        return true;

    isPresent(arr, element, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 33, 1, 44, 5, 22, 100, -11, 44};
    int num = -11;
    bool ans = isPresent(arr, num, arr.size() - 1);
    ans ? cout << num << " is present" << endl : cout << num << " is not present" << endl;

    return 0;
}
// Find first subset whose sum is divisible by k.

#include <bits/stdc++.h>
using namespace std;

bool subset(int arr[], vector<int> &ds, int n, int idx, int sum)
{
    if (n == idx)
    {
        if (sum % 3 == 0)
        {
            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
            return true;
        }

        return false;
    }

    ds.push_back(arr[idx]);
    if (subset(arr, ds, n, idx + 1, sum + arr[idx]) == true)
    {
        return true;
    }
    ds.pop_back();
    if (subset(arr, ds, n, idx + 1, sum - arr[idx]) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<int> ds;

    subset(arr, ds, 3, 0, 0);

    return 0;
}
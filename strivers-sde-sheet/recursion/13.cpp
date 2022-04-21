// Print the subsets whose sum is k (repetition is allowed).

#include <bits/stdc++.h>
using namespace std;

void subsetSum(int arr[], vector<int> &ds, int idx, int k, int n)
{
    if (idx == n)
    {
        if (k == 0)
        {
            cout << "[";
            for (auto i : ds)
            {
                cout << i << ", ";
            }
            cout << "]" << endl;
        }

        return;
    }

    if (arr[idx] <= k)
    {
        ds.push_back(arr[idx]);
        subsetSum(arr, ds, idx, k - arr[idx], n);
        ds.pop_back();
    }

    subsetSum(arr, ds, idx + 1, k, n);
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<int> ds;
    subsetSum(arr, ds, 0, 4, 3);

    return 0;
}
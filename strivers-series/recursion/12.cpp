// Printing Subsequences
// e.g. [1, 3, 2] = [1], [2], [3], [1, 3], [1, 2], [3, 2], [1, 3, 2], []

#include <bits/stdc++.h>
using namespace std;

void subsets(int arr[], vector<int> &ds, int idx, int n)
{
    if (idx == n)
    {
        cout << "[";
        for (auto i : ds)
        {
            cout << i << ",";
        }
        cout << "]" << endl;
        return;
    }

    ds.push_back(arr[idx]);
    subsets(arr, ds, idx + 1, n);
    ds.pop_back();
    subsets(arr, ds, idx + 1, n);
}

int main()
{
    int arr[] = {1, 3, 2};
    vector<int> ds;
    subsets(arr, ds, 0, 3);

    return 0;
}
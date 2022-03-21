#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(int *arr, int n)
{
    vector<int> result;
    unordered_map<int, bool> m;

    for (int i = 0; i < n; i++)
    {
        if (m.count(arr[i]) == 0)
        {
            result.push_back(arr[i]);
            m[arr[i]] = true;
        }
    }
    return result;
}

int main()
{
    int arr[] = {3, 44, 1, 3, 44, 2, 5, 66, 6, 66, 2, 1, 44, 3};

    vector<int> result = removeDuplicates(arr, 14);

    for (auto x : result)
    {
        cout << x << " ";
    }

    return 0;
}

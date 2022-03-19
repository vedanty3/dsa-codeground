#include <bits/stdc++.h>
using namespace std;

bool subsequenceSum(vector<int> &v, vector<int> &ds, int n, int idx, int sum, int s)
{
    if (idx == n)
    {
        if (s == sum)
        {
            for (auto i : ds)
            {
                cout << i << " ";
            }
            return true;
        }
        cout << endl;
        return false;
    }

    ds.push_back(v[idx]);
    s += v[idx];
    if (subsequenceSum(v, ds, n, idx + 1, sum, s) == true)
    {
        return true;
    }
    ds.pop_back();
    s -= v[idx];
    if (subsequenceSum(v, ds, n, idx + 1, sum, s) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> v = {1, 2, 1};
    int sum = 2;
    int n = v.size();
    int idx = 0;
    int s = 0;
    vector<int> ds;
    subsequenceSum(v, ds, n, idx, sum, s);
    return 0;
}
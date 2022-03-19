#include <bits/stdc++.h>
using namespace std;

int subsequenceSum(vector<int> &v, int n, int idx, int sum, int s)
{
    if (s > sum)
    {
        return 0;
    }
    if (idx == n)
    {
        if (s == sum)
        {
            return 1;
        }
        return 0;
    }

    s += v[idx];
    int l = subsequenceSum(v, n, idx + 1, sum, s);

    s -= v[idx];
    int r = subsequenceSum(v, n, idx + 1, sum, s);
    return l + r;
}

int main()
{
    vector<int> v = {1, 2, 1, 1};
    int sum = 3;
    int n = v.size();
    int idx = 0;
    int s = 0;
    cout << subsequenceSum(v, n, idx, sum, s) << endl;
    return 0;
}
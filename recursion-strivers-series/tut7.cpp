#include <bits/stdc++.h>
using namespace std;

void findSubsequences(vector<int> &tmp, vector<int> &v, int n, int idx)
{
    if (idx == n)
    {
        for (auto i : tmp)
        {
            cout << i << " ";
        }
        return;
    }

    tmp.push_back(v[idx]);
    findSubsequences(tmp, v, n, idx + 1);
    tmp.pop_back();
    findSubsequences(tmp, v, n, idx + 1);
}

int main()
{
    vector<int> v = {3, 1, 2};
    vector<int> tmp;
    int idx = 0;
    int n = v.size();
    findSubsequences(tmp, v, n, idx);

    return 0;
}
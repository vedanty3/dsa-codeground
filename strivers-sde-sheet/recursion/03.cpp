#include <bits/stdc++.h>
using namespace std;

void solve(int s, int e, vector<int> &v)
{
    if (s >= e)
    {
        return;
    }

    swap(v[s], v[e]);
    solve(s + 1, e - 1, v);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    solve(0, v.size() - 1, v);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}
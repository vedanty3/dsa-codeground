#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, e;
    cin >> v >> e;

    vector<vector<int>> matrix(v, vector<int>(v, 0));

    for (int i = 1; i <= e; i++)
    {
        int fv, sv;
        cin >> fv >> sv;
        matrix[fv][sv] = 1;
        matrix[sv][fv] = 1;
    }

    return 0;
}
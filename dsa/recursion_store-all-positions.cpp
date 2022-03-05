#include <bits/stdc++.h>
using namespace std;

void storePos(int array[], int n, int x, int i, vector<int> &ans)
{
    if (i == n)
    {
        return;
    }
    if (array[i] == x)
    {
        ans.push_back(i);
    }
    return storePos(array, n, x, i + 1, ans);
}

int main()
{
    int array[] = {2, 3, 44, 6, 8, 2, 3};
    vector<int> ans;
    storePos(array, 7, 3, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
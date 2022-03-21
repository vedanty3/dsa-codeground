#include <bits/stdc++.h>
using namespace std;

void count(int array[], int n, int x, int i, int &ans)
{
    if (i == n)
    {
        return;
    }
    if (array[i] == x)
    {
        ans++;
    }

    return count(array, n, x, i + 1, ans);
}

int main()
{
    int ans = 0;
    int array[] = {3, 3, 1, 8, 3, 1, 5, 6, 7};
    count(array, 9, 3, 0, ans);
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int storePos(int array[], int n, int x, int i, int out[], int j)
{
    if (i == n)
    {
        return 0;
    }
    if (array[i] == x)
    {
        out[j] = i;
        return 1 + storePos(array, n, x, i + 1, out, j + 1);
    }

    return 0 + storePos(array, n, x, i + 1, out, j);
}

int main()
{
    int out[9];
    int array[9] = {1, 2, 3, 4, 5, 2, 5, 5, 5};
    int count = storePos(array, 9, 5, 0, out, 0);
    for (int i = 0; i < count; i++)
    {
        cout << out[i] << " ";
    }
    cout << endl;
    return 0;
}
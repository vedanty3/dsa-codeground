#include <bits/stdc++.h>
using namespace std;

int count(int array[], int n, int x, int i)
{
    if (i == n)
    {
        return 0;
    }
    if (array[i] == x)
    {
        return (1 + count(array, n, x, i + 1));
    }
    else
    {
        return (0 + count(array, n, x, i + 1));
    }
}
int main()
{
    int array[] = {6, 4, 8, 3, 6, 4, 6, 7};
    cout << count(array, 8, 4, 0) << endl;

    return 0;
}

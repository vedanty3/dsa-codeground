#include <bits/stdc++.h>
using namespace std;
void allPos(int array[], int n, int x, int i)
{
    if (i == n)
    {
        return;
    }
    if (array[i] == x)
    {
        cout << i << " ";
    }
    return allPos(array, n, x, i + 1);
}

int main()
{
    int array[] = {1, 2, 4, 4, 4, 2, 2};
    allPos(array, 7, 4, 0);
    cout << endl;
    return 0;
}
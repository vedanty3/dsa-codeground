#include <bits/stdc++.h>
using namespace std;
int firstIndex(int array[], int n, int x, int i)
{
    if (n == i)
    {
        return -1;
    }
    if (array[i] == x)
    {
        return i;
    }

    return firstIndex(array, n, x, i + 1);
}
int main()
{
    int array[5] = {1, 3, 4, 5, 5};
    cout << "element found at index : " << firstIndex(array, 5, 5, 0) << endl;

    return 0;
}
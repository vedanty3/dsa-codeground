#include <bits/stdc++.h>
using namespace std;

bool isPresent(int array[], int n, int x)
{
    if (array[0] == x)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }

    return isPresent(array + 1, n - 1, x);
}

bool isPresent2(int array[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }

    bool remArr = isPresent2(array + 1, n - 1, x);
    if (remArr)
    {
        return true;
    }
    if (array[0] == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isPresent3(int array[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (array[n - 1] == x)
    {
        return true;
    }
    return isPresent3(array, n - 1, x);
}
bool isPresent4(int array[], int n, int x, int i)
{
    if (n == i)
    {
        return false;
    }
    if (array[i] == x)
    {
        return true;
    }

    return isPresent4(array, n, x, i + 1);
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    if (isPresent4(array, 5, 99, 0))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int array[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return array[0] + sumOfArray(array + 1, n - 1);
}

int sumOfArray2(int array[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return array[n - 1] + sumOfArray2(array, n - 1);
}

int sumOfArray3(int array[], int n, int i)
{
    if (n == i)
    {
        return 0;
    }

    return array[i] + sumOfArray3(array, n, i + 1);
}

int main()
{
    int i = 0;
    int array[5] = {1, 2, 3, 4, 5};
    cout << sumOfArray3(array, 5, 0) << endl;
    return 0;
}
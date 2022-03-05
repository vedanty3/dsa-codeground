#include <iostream>
using namespace std;

/*
int lastIndex(int array[], int x, int i)
{
    if (i == -1)
    {
        return -1;
    }
    if (array[i] == x)
    {
        return i;
    }

    return lastIndex(array, x, i - 1);
}

*/

/*
int lastIndex2(int array[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    if (array[n - 1] == x)
    {
        return (n - 1);
    }

    return lastIndex2(array, n - 1, x);
}
*/

int lastIndex3(int array[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }
    int inIndexRem = lastIndex3(array, n, x, i + 1);
    if (inIndexRem == -1)
    {
        if (array[i] == x)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return inIndexRem;
    }
}

int main()
{
    int array[] = {1, 2, 7, 7, 7, 4, 7, 6, 9};
    cout << lastIndex3(array, 9, 7, 0) << endl;

    return 0;
}
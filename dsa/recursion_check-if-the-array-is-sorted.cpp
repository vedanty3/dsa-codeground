#include <bits/stdc++.h>
using namespace std;

/*first way*/
bool isSorted(int array[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else if (array[0] > array[1])
    {
        return false;
    }

    // bool isSmallerSorted = isSorted(array + 1, n - 1);

    // if (isSmallerSorted)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return isSorted(array + 1, n - 1);
}

/* second way
bool isSorted(int array[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    bool isSmallerSorted = isSorted(array + 1, n - 1);
    if (!isSmallerSorted)
    {
        return false;
    }
    else if (array[0] > array[1])
    {
        return false;
    }

    else
    {
        return true;
    }
}
*/

/*  third way 
bool isSorted(int array[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (array[n - 2] > array[n - 1])
    {
        return false;
    }

    return isSorted(array, n - 1);
}
*/

int main()
{
    int array[5] = {1, 3, 8, 5, 6};
    if (isSorted(array, 5))
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << " not sorted" << endl;
    }

    return 0;
}
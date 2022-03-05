#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// intro sort = heap sort + quicksort + insertion sort

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n);
    for (auto &x : array)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
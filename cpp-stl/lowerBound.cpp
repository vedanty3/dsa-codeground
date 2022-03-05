#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 6 22 1 3 4 8 7
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int *ptr = lower_bound(array, array + n, 5);
    cout << *ptr << endl;
    return 0;
}
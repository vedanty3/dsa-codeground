// function object : function wrapped in a class so that it can be available like an object...

// Functors
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {44, 4, 2, 12, 3, 1, 22};
    // sort(arr, arr + 6);
    // sort(arr, arr + 6, greater<int>());
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
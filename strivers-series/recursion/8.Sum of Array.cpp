#include <bits/stdc++.h>
using namespace std;

int sumOfArray(vector<int> &arr, int sum, int n)
{
    if (n == 0)
        return sum + arr[0];
    else
    {
        sumOfArray(arr, sum + arr[n], n - 1);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int sum = sumOfArray(arr, 0, arr.size());

    cout << "The sum of array is " << sum << endl;

    return 0;
}
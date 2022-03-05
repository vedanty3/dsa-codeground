// Time Complexity = O(n)  - DP.
// Space Complexity = O(n) - DP (if array used).
// Time Complexity = O(2^n)  - Recursively.
// Time Complexity = O(n) - Iteratively.
// Space Complexity = O(1) - Iteratively.
// Space Complexity = O(n)  - Recursively.

#include <bits/stdc++.h>
using namespace std;

int fib1(int n)
{
    if (n == 0 or n == 1) // base case
    {
        return n;
    }

    int smallOutput1 = fib1(n - 1); // induction hypothesis (recursive case)
    int smallOutput2 = fib1(n - 2);

    return (smallOutput1 + smallOutput2); // calculation
}

// DP Approach 1
int fib2(int *array, int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }

    if (array[n] != 0)
    {
        return array[n];
    }

    int result = fib2(array, n - 1) + fib2(array, n - 2);
    array[n] = result;
    return result;
}

// DP Approach 2
int fib3(int n)
{
    int *array = new int[n + 1];
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    int output = array[n];
    delete[] array;
    return output;
}

int main()
{
    int n;
    cin >> n;
    int *array = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        array[i] = 0;
    }
    cout << fib3(n) << "\n";
    cout << fib2(array, n) << "\n";
    cout << fib1(n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n)
{
    if (n == 0) // base case
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }

    int smallOutput = pow(x, n - 1); // recursive case (induction hypothesis)
    int output = x * smallOutput;    // calculation
    return output;
}

int main()
{
    cout << pow(10, 3) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int countZeroes(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = countZeroes(n / 10);
    int last_digit = n % 10;
    if (last_digit == 0)
    {
        return (smallAns + 1);
    }
    else
    {
        return smallAns;
    }
}

int main()
{
    cout << countZeroes(700000) << endl;

    return 0;
}

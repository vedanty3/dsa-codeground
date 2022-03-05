#include <bits/stdc++.h>
using namespace std;

int multiply(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = multiply(m, n - 1);
    int ans = smallAns + m;
    return ans;
}

int main()
{
    cout << multiply(6, 10) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;
}

int main()
{
    int L = 3, R = 6;
    int res = solve(R) ^ solve(L - 1);
    cout << res << "\n";
    return 0;
}
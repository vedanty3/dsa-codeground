#include <bits/stdc++.h>
using namespace std;

/*
n = 10

1^0 = 1 -> 1
2^1 = 3 -> n+1
3^3 = 0 -> 0
4^0 = 4 -> n
5^4 = 1 -> 1
6^1 = 7 -> n+1
7^7 = 0 -> 0
8^0 = 8 -> n
9^8 = 1 -> 1
10^1 = 11 -> n+1
*/

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
    int n = 10;
    cout << solve(n) << endl;
    return 0;
}
// what if value of a becomes greater than 2 * 10^9 in doing a^b.

#include <bits/stdc++.h>
using namespace std;

const long long M = 1e18 + 7;
int binaryMulti(long long a, long long b);

int binaryExp(long long a, long long b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = binaryMulti(ans, a);
        }

        a = binaryMulti(a, a);
        b = b >> 1;
    }

    return ans;
}

int binaryMulti(long long a, long long b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }

        a = (a + a) % M;
        b = b >> 1;
    }

    return ans;
}

int main()
{
    system("cls");
    int a = 6, b = 9;
    cout << binaryExp(a, b) << endl;

    return 0;
}
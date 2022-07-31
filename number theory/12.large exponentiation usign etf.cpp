// Euler's Totient Function
#include <bits/stdc++.h>
using namespace std;

// if value of b is very large in doing (a^b)%M then.
// (a^b)%M = (a^(b % ETF(M)))%M
// ETF(n) or phi(n) = n * (multiplication of all distinct primes factors of n(1 - 1/p))
// ETF(prime number (n)) = n*(1-(1/n)) => n-1.
// (a^b)%M = (a^(b%(M-1)))%M.

int binaryExp(int a, int b, int M)
{
    a %= M;
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % M;
        a = (a * a) % M;
        b = b >> 1;
    }
    return ans;
}

int superPow(int a, vector<int> &b)
{
    int bmod = 0;
    for (auto it : b)
    {
        bmod = (bmod * 10 + it) % 1140;
    }

    return binaryExp(a, bmod, 1337);
}

int main()
{
    int a = 2;
    vector<int> b = {1, 0};
    int ans = superPow(a, b);
    cout << ans << endl;
}
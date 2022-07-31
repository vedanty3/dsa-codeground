#include <bits/stdc++.h>
using namespace std;

int const M = 1e9 + 7;

int binaryExp(int a, int b)
{
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

int main()
{
    int a = 16, b = 2;
    cout << binaryExp(a, b) << endl;

    return 0;
}
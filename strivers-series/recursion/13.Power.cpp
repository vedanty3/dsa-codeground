#include <bits/stdc++.h>
using namespace std;

double getPow(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    double ans = getPow(x, n / 2);
    if (n % 2 == 0)
        return ans * ans;
    else
        return ans * ans * x;
}

int main()
{
    int x, n;
    cin >> x >> n;
    double ans = -1;
    if (n < 0)
        ans = 1 / getPow(x, n);
    else
        ans = getPow(x, n);

    cout << x << "^" << n << " = " << ans << endl;

    return 0;
}
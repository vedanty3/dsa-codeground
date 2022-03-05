#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallAns = sum(n / 10);
    int last_digit = n % 10;

    return smallAns + last_digit;
}

int main()
{
    int n;
    cin >> n;
    int ans = sum(n);
    cout << ans << endl;
    return 0;
}
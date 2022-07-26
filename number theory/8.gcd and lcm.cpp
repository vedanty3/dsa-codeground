#include <bits/stdc++.h>
using namespace std;

int main()
{
    // LCM * HCF = a * b
    cout << "GCD: " << __gcd(12, 18) << endl;
    cout << "LCM: " << ((12 * 18) / __gcd(12, 18)) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<string> digits = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void sayDigits(int n)
{
    if (n == 0)
        return;
    int digit = n % 10;
    n /= 10;
    sayDigits(n);
    cout << digits[digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    sayDigits(n);

    return 0;
}
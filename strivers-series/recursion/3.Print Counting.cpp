#include <bits/stdc++.h>
using namespace std;

void printCnt(int n)
{
    if (n == 0)
        return;
    printCnt(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    printCnt(n);

    return 0;
}
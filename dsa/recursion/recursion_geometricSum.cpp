#include <bits/stdc++.h>
using namespace std;

double gSum(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double smallAns = gSum(k - 1);
    return smallAns + (1.0 / pow(2.0, k));
}

int main()
{
    cout << gSum(0) << endl;
    return 0;
}
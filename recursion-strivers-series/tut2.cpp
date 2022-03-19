#include <iostream>
using namespace std;

int solve(int n, int &sum)
{
    if (n < 1)
    {
        return sum;
    }

    sum += n;
    solve(n - 1, sum);

    return sum;
}

int main()
{
    int sum = 0;
    cout << solve(5, sum);
    return 0;
}
/*
#include <iostream>
using namespace std;

int minSteps(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int x = minSteps(n - 1);
    int y = INT_MAX;
    int z = INT_MAX;

    if (n % 2 == 0)
    {
        y = minSteps(n / 2);
    }

    if (n % 3 == 0)
    {
        z = minSteps(n / 3);
    }

    return min(x, min(y, z)) + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << "\n";

    return 0;
}
*/

/*
// Top-Down DP => Recursive
#include <iostream>
using namespace std;

int helper(int n, int *dp)
{
    if (n <= 1)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int x = helper(n - 1, dp);
    int y = INT_MAX;
    int z = INT_MAX;

    if (n % 2 == 0)
    {
        y = helper(n / 2, dp);
    }

    if (n % 3 == 0)
    {
        z = helper(n / 3, dp);
    }

    int ans = min(x, min(y, z)) + 1;
    return ans;
}

int minSteps(int n)
{
    int *dp = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    return helper(n, dp);
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << "\n";

    return 0;
}

*/

// Bottom-Up DP => = Iterative

#include <iostream>
using namespace std;

int minSteps(int n)
{
    int *dp = new int[n + 1];
    dp[0] = 0;
    dp[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        int x = dp[i - 1];
        int y = INT_MAX;
        int z = INT_MAX;

        if (i % 2 == 0)
        {
            y = dp[i / 2];
        }
        if (i % 3 == 0)
        {
            z = dp[i / 3];
        }

        dp[i] = min(x, min(y, z)) + 1;
    }

    int result = dp[n];
    delete[] dp;
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << "\n";

    return 0;
}
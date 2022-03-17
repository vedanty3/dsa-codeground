// https : // www.interviewbit.com/problems/0-1-knapsack/

int Solution::solve(vector<int> &price, vector<int> &wts, int W)
{
    int n = price.size();
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (wts[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                int incl = price[i - 1] + dp[i - 1][j - wts[i - 1]];
                int excl = dp[i - 1][j];
                dp[i][j] = max(incl, excl);
            }
        }
    }

    return dp[n][W];
}
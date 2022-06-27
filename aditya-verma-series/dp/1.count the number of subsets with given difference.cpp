#include <bits/stdc++.h>
using namespace std;

int count_subsets_with_given_sum(int arr[], int n, int sum)
{
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                dp[i][j] = 0;
            if (j == 0)
                dp[i][j] = 1;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
        }
    }

    return dp[n][sum];
}

int count_subsets_with_min_diff(int arr[], int n, int min_diff)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    int s1 = (min_diff + sum) / 2;

    return count_subsets_with_given_sum(arr, n, s1);
}

int main()
{
    int n = 4;
    int arr[n] = {1, 1, 2, 3};
    int min_diff = 1;

    int subsets_cnt = count_subsets_with_min_diff(arr, n, min_diff);

    cout << "Subsets with minimum difference: " << subsets_cnt;

    return 0;
}
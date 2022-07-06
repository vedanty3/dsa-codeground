#include <bits/stdc++.h>
using namespace std;

bool get_lcs(string str1, int m, string str2, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[m][n] == min(m, n);
}

int main()
{
    string str1 = "AXY", str2 = "ADXCPY";
    int m = str1.length(), n = str2.length();

    cout << get_lcs(str1, m, str2, n);

    return 0;
}
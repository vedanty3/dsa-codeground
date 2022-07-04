#include <bits/stdc++.h>
using namespace std;

string print_lcs(string str1, string str2)
{
    int m = str1.size(), n = str2.size();
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

    int i = m, j = n;
    string str_lcs = "";

    while (i > 0 and j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            str_lcs += str1[i - 1];
            i--, j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    reverse(str_lcs.begin(), str_lcs.end());

    return str_lcs;
}

int main()
{
    string text1 = "abcde", text2 = "ace";
    string str_lcs = print_lcs(text1, text2);
    cout << str_lcs << endl;

    return 0;
}
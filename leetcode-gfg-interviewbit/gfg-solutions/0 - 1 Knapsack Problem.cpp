// https : // practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

class Solution
{
public:
    int helper(int W, int wt[], int val[], int n)
    {
        if (W == 0 or n == -1)
        {
            return 0;
        }

        else if (wt[n] > W)
        {
            return helper(W, wt, val, n - 1);
        }

        else
        {
            return max(val[n] + helper(W - wt[n], wt, val, n - 1), helper(W, wt, val, n - 1));
        }
    }

    int knapSack(int W, int wt[], int val[], int n)
    {
        return helper(W, wt, val, n - 1);
    }
};

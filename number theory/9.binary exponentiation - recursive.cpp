// https : // leetcode.com/problems/powx-n/

class Solution
{
public:
    double helper(double x, int n)
    {
        if (n == 0)
            return 1;
        double res = helper(x, n / 2);
        if (n & 1)
            return x * res * res;
        else
            return res * res;
    }

    double myPow(double x, int n)
    {
        if (n < 0)
            return 1 / helper(x, n);
        return helper(x, n);
    }
};
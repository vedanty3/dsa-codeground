// https : // leetcode.com/problems/power-of-two/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0 or n == INT_MIN)
            return false;
        n = n & (n - 1);
        return n == 0;
    }
};
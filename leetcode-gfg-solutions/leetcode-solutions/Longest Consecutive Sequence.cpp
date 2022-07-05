// https : // leetcode.com/problems/longest-consecutive-sequence/

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int largest = 1;

        for (auto curr : st)
        {
            int prev = curr - 1;
            if (st.find(prev) == st.end())
            {
                int cnt = 1, next = curr + 1;
                while (st.find(next) != st.end())
                    next++, cnt++;
                largest = max(largest, cnt);
            }
        }

        return largest;
    }
};
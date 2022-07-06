// https : // leetcode.com/problems/single-number-iii/

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> ans;
        unordered_map<int, int> mpp;

        for (auto it : nums)
        {
            mpp[it]++;
        }

        for (auto it : mpp)
        {
            if (it.second == 1)
                ans.push_back(it.first);
        }

        return ans;
    }
};
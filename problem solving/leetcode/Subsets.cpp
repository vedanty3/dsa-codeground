// https : // leetcode.com/problems/subsets/

class Solution
{
public:
    void helper(vector<int> &nums, vector<vector<int>> &result, vector<int> &temp, int i)
    {
        if (i == nums.size())
        {
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        helper(nums, result, temp, i + 1);
        temp.pop_back();
        helper(nums, result, temp, i + 1);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int> temp;
        int n = 0;
        helper(nums, result, temp, 0);
        return result;
    }
};
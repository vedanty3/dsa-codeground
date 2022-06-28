// https : // leetcode.com/problems/two-sum/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int remaining_target = target - nums[i];

            if (m.find(remaining_target) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[remaining_target]);
            }

            m[nums[i]] = i;
        }

        return ans;
    }
};
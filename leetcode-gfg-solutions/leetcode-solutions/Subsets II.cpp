// https : // leetcode.com/problems/subsets-ii/

// Using Set
class Solution
{
public:
    void gen_subsets(vector<int> &nums, vector<int> &subset, set<vector<int>> &subsets, int idx)
    {
        if (idx == nums.size())
        {
            subsets.insert(subset);
            return;
        }

        subset.push_back(nums[idx]);
        gen_subsets(nums, subset, subsets, idx + 1);
        subset.pop_back();
        gen_subsets(nums, subset, subsets, idx + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> subset;
        set<vector<int>> subsets;
        sort(nums.begin(), nums.end());
        gen_subsets(nums, subset, subsets, 0);
        vector<vector<int>> all_subsets(subsets.begin(), subsets.end());
        return all_subsets;
    }
};

// Without using set
class Solution
{
public:
    void gen_subsets(vector<int> &nums, vector<int> &subset, vector<vector<int>> &subsets, int idx)
    {
        subsets.push_back(subset);
        for (int i = idx; i < nums.size(); i++)
        {
            if (i != idx and nums[i] == nums[i - 1])
                continue;
            subset.push_back(nums[i]);
            gen_subsets(nums, subset, subsets, i + 1);
            subset.pop_back();
        }
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> subset;
        vector<vector<int>> subsets;
        sort(nums.begin(), nums.end());
        gen_subsets(nums, subset, subsets, 0);
        return subsets;
    }
};
// https : // leetcode.com/problems/combination-sum-ii/

class Solution
{
public:
    void gen_combinations(vector<int> &candidates, vector<int> &combination, vector<vector<int>> &combinations, int target, int idx)
    {
        if (target == 0)
        {
            combinations.emplace_back(combination);
            return;
        }

        for (int i = idx; i < candidates.size(); i++)
        {
            if (i != idx and candidates[i] == candidates[i - 1])
                continue;
            if (target < candidates[i])
                break;
            combination.emplace_back(candidates[i]);
            gen_combinations(candidates, combination, combinations, target - candidates[i], i + 1);
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> combination;
        vector<vector<int>> combinations;
        sort(candidates.begin(), candidates.end());
        gen_combinations(candidates, combination, combinations, target, 0);
        return combinations;
    }
};
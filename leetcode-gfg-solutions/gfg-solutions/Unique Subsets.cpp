// https : // practice.geeksforgeeks.org/problems/subsets-1587115621/1

class Solution
{
public:
    void gen_subsets(vector<int> &arr, vector<int> &subset, set<vector<int>> &subsets, int idx)
    {
        if (idx == arr.size())
        {
            subsets.insert(subset);
            return;
        }

        subset.emplace_back(arr[idx]);
        gen_subsets(arr, subset, subsets, idx + 1);
        subset.pop_back();
        gen_subsets(arr, subset, subsets, idx + 1);
    }

    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        vector<int> subset;
        set<vector<int>> subsets;
        sort(arr.begin(), arr.end());
        gen_subsets(arr, subset, subsets, 0);
        vector<vector<int>> all_subsets(subsets.begin(), subsets.end());
        return all_subsets;
    }
};
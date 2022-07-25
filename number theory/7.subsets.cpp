#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> all_subsets;

    for (int i = 0; i < (1 << nums.size()); i++)
    {
        vector<int> subset;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i & (1 << j))
                subset.push_back(nums[j]);
        }
        all_subsets.push_back(subset);
    }

    return all_subsets;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> all_subsets = subsets(nums);

    for (auto subset : all_subsets)
    {
        cout << "[";
        for (auto ele : subset)
            cout << ele << ", ";
        cout << "]" << endl;
    }

    return 0;
}
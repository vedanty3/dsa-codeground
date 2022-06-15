// https : // leetcode.com/problems/3sum/

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            if (i == 0 or (i > 0 and nums[i] != nums[i - 1]))
            {
                int low = i + 1;
                int high = n - 1;
                int sum = 0 - nums[i];

                while (low < high)
                {
                    int add = nums[low] + nums[high];

                    if (sum == add)
                    {
                        ans.push_back({nums[i], nums[low], nums[high]});

                        while (low < high and nums[low] == nums[low + 1])
                        {
                            low++;
                        }

                        while (low < high and nums[high] == nums[high - 1])
                        {
                            high--;
                        }

                        low++;
                        high--;
                    }
                    else if (sum > add)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }

        return ans;
    }
};
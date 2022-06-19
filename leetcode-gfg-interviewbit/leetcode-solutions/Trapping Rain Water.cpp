// https : // leetcode.com/problems/trapping-rain-water/

// TC: O(N) & SC: (2N)
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int pre[height.size()];
        int suff[height.size()];

        int mx = height[0];
        pre[0] = mx;

        for (int i = 1; i < height.size(); i++)
        {
            mx = max(mx, height[i]);
            pre[i] = mx;
        }

        mx = height[height.size() - 1];
        suff[height.size() - 1] = mx;

        for (int i = height.size() - 2; i >= 0; i--)
        {
            mx = max(mx, height[i]);
            suff[i] = mx;
        }

        int sum = 0;

        for (int i = 0; i < height.size(); i++)
        {
            sum += min(pre[i], suff[i]) - height[i];
        }

        return sum;
    }
};

// TC: O(N) & SC: O(1)
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int left_max = 0;
        int right_max = 0;

        int water_trapped = 0;

        while (left <= right)
        {
            if (height[left] <= height[right])
            {
                if (height[left] > left_max)
                {
                    left_max = height[left];
                }
                else
                {
                    water_trapped += left_max - height[left];
                }

                left++;
            }
            else
            {
                if (height[right] > right_max)
                {
                    right_max = height[right];
                }
                else
                {
                    water_trapped += right_max - height[right];
                }

                right--;
            }
        }

        return water_trapped;
    }
};
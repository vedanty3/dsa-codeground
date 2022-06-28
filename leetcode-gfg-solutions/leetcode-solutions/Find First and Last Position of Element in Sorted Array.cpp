// https : // leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution
{
public:
    int firstPosition(vector<int> nums, int target)
    {
        int pos = -1;
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
            {
                pos = mid;
                e = mid - 1;
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        return pos;
    }

    int lastPosition(vector<int> nums, int target)
    {
        int pos = -1;
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
            {
                pos = mid;
                s = mid + 1;
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        return pos;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> pos(2);

        pos[0] = firstPosition(nums, target);
        pos[1] = lastPosition(nums, target);

        return pos;
    }
};
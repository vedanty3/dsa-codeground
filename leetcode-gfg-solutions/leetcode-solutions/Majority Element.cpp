// https://leetcode.com/problems/majority-element/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        int cnt = 0;
        int element = 0;

        for (auto num : nums)
        {
            if (cnt == 0)
            {
                element = num;
            }

            if (num == element)
            {
                cnt++;
            }

            else
            {
                cnt--;
            }
        }

        return element;
    }
};
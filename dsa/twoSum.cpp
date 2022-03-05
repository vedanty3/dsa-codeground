// https : //leetcode.com/problems/two-sum/
// to get indices

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            if (m.find(x) != m.end())
            {
                v.push_back(m[x]);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};

// to get values

vector<int> pairSum(vector<int> arr, int Sum)
{
    //Logic
    unordered_set<int> s;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {

        int x = Sum - arr[i];
        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        //insert the current no inside set
        s.insert(arr[i]);
    }
    return {};
}
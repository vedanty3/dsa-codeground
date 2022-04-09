// https : // leetcode.com/problems/top-k-frequent-elements/

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        vector<int> ans;
        unordered_map<int, int> m;

        for (auto i : nums)
        {
            m[i]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto i : m)
        {
            pq.push(make_pair(i.second, i.first));
        }

        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
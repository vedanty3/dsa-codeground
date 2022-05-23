#include <bits/stdc++.h>
using namespace std;

vector<int> kthLargest(vector<int> &arr, int k, vector<int> &ans)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);

        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    for (int i = 0; i < pq.size(); i++)
    {
        pq.pop();
        ans.push_back(pq.top());
    }

    return ans;
}

int main()
{
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    vector<int> ans;

    kthLargest(arr, k, ans);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
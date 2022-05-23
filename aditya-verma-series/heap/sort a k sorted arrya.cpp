#include <bits/stdc++.h>
using namespace std;

vector<int> kSorted(vector<int> &arr, int k, vector<int> &ans)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);

        if (pq.size() > k)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {6, 5, 3, 2, 8, 9, 10};
    int k = 3;
    vector<int> ans;

    kSorted(arr, k, ans);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
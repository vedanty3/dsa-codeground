#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_workers;
    cin >> num_workers;
    vector<vector<int>> ds;

    for (int i = 0; i < num_workers; i++)
    {
        int num_days;
        cin >> num_days;
        for (int j = 0; j < num_days; j++)
        {
            int day;
            cin >> day;
            ds[i].push_back(day);
        }
    }

    vector<int> masks;

    for (int i = 0; i < ds.size(); i++)
    {
        for (int j = 0; i < ds[i].size(); i++)
        {
            int mask = 1 << ds[i][j];
            masks[i] &= mask;
        }
    }

    int max_days = 0;

    for (int i = 0; i < masks.size() - 1; i++)
    {
        int is_max = 0;

        for (int j = i + 1; j < masks.size(); j++)
        {
            is_max = masks[i] & masks[j];
        }

        max_days = max(max_days, is_max);
    }

    cout << max_days << endl;

    return 0;
}
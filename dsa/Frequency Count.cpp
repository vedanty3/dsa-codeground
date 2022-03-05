// Amazon

#include <bits/stdc++.h>
using namespace std;

int frequencyCount1(vector<int> v, int key)
{
    int s = 0;
    int e = v.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (v[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}
int frequencyCount2(vector<int> v, int key)
{
    int s = 0;
    int e = v.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (v[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> v = {0, 1, 1, 2, 3, 3, 3, 3, 4, 5, 5, 5, 10};

    cout << frequencyCount2(v, 3) - frequencyCount1(v, 3) + 1 << "\n";

    cout << upper_bound(v.begin(), v.end(), 3) - lower_bound(v.begin(), v.end(), 3) << "\n";

    return 0;
}
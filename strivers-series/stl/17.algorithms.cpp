#include <bits/stdc++.h>
using namespace std;

static bool cmp(int a, int b)
{
    if (a >= b)
        return true;

    return false;
}

static bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if ((p1.first < p2.first) or (p1.first == p2.first and p1.second > p2.second))
        return true;

    return false;
}

int main()
{
    /*
    int arr[5] = {100, 20, -10, 22, 1};
    sort(arr, arr + 5);
    for (auto it : arr)
        cout << it << " ";
    cout << "\n";

    vector<int> ds = {100, 20, -10, 22, 1};
    // sort(ds.begin(), ds.begin() + 3);
    sort(ds.begin(), ds.end());
    reverse(ds.begin(), ds.end());
    for (auto it : ds)
        cout << it << " ";
    cout << "\n";

    cout << *max_element(ds.begin(), ds.end()) << endl;
    cout << *min_element(ds.begin(), ds.end()) << endl;
    cout << accumulate(ds.begin(), ds.end(), 0) << endl;

    vector<int> ans = {1, 1, 1, 20, -11, 22, 100};
    cout << count(ans.begin(), ans.end(), 1);
    vector<int> ans = {1, 2, 1, 20, 2, 3, 100};
    auto iter = find(ans.begin(), ans.end(), 3) - ans.begin();
    cout << iter << endl;

    // binary search
    vector<int> ans = {1, 1, 1, 20, -11, 22, 100};
    cout << binary_search(ans.begin(), ans.end(), 22) << endl;

    // lower bound: returns the first element not less than x
    vector<int> ans = {1, 1, 1, 20, -11, 22, 100};
    cout << *lower_bound(ans.begin(), ans.end(), -5) << endl;

    // upper bound: returns the first element just greater than x
    vector<int> ans = {1, 1, 1, 20, -11, 22, 100};
    cout << *upper_bound(ans.begin(), ans.end(), 50) << endl;

    vector<int> vec = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
    int x1 = 12;
    int x2 = 10;
    cout << lower_bound(vec.begin(), vec.end(), x1 + 1) - vec.begin() - 1 << endl;
    cout << upper_bound(vec.begin(), vec.end(), x2) - vec.begin() - 1 << endl;

   // number of times x appear = upper_bound - lower_bound

    // next_permutation
    string str1 = "abc";
    sort(str1.begin(), str1.end());
    cout << "NEXT PERMUTATIONS:->" << endl;
    do
        cout << str1 << endl;
    while (next_permutation(str1.begin(), str1.end()));

    cout << "PREVIOUS PERMUTATIONS:->" << endl;
    string str2 = "cba";
    do
        cout << str2 << endl;
    while (prev_permutation(str2.begin(), str2.end()));

    // comparator
    vector<int> nums = {10, 20, 30, 40, 50};
    sort(nums.begin(), nums.end(), cmp);
    for (auto num : nums)
        cout << num << " ";

    pair<int, int> arr[] = {{1, 4}, {5, 2}, {5, 9}};
    sort(arr, arr + 3, comparator);

    for (auto it : arr)
        cout << it.first << " " << it.second << endl;

    vector<int> ds = {1, 2, 3, 4, 5};
    sort(ds.begin(), ds.end(), greater<int>());
    for (auto i : ds)
        cout << i << " ";

    */
    return 0;
}
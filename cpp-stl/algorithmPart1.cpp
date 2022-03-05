#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto min = min_element(v.begin(), v.end());
    auto max = max_element(v.begin(), v.end());

    cout << "Min : " << (*min) << endl;
    cout << "Max : " << (*max) << endl;
    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "Sum : " << sum << endl;
    int ct = count(v.begin(), v.end(), 3);
    cout << "Count : " << ct << endl;

    vector<int>::iterator it = find(v.begin(), v.end(), 5);

    if (it != v.end())
    {
        cout << "Found : " << (*it) << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    reverse(v.begin() + 3, v.end());
    cout << "Reversed : ";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    string s = "vedant yetekar";
    reverse(s.begin(), s.end());
    cout << "String : " << s << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// implemented using red-black trees and can take multiple keys like multimaps(duplication allowed) O(log(n))

int main()
{
    multiset<string> s;
    s.insert("hello"); // O(log(n))
    s.insert("world");
    s.insert("cars");
    s.insert("cars");
    s.insert("buggati");
    auto it = s.find("cars"); // O(log(n))

    // if (it != s.end())
    // {
    //     s.erase(it); // delete first value of cars
    // }

    // s.erase("cars"); // deletes all values of cars

    for (auto &x : s)
    {
        cout << x << endl;
    }

    return 0;
}

/*

int main()
{
    int t;
    cin >> t;
    int n, k;
    cin >> n >> k;
    multiset<long long> bags;
    for (int i = 0; i < n; i++)
    {
        long long candy_ct;
        cin >> candy_ct;
        bags.insert(candy_ct);
    }
    long long total_candies = 0;
    for (int i = 0; i < k; i++)
    {
        auto last_it = (--bags.end());
        long long candy_ct = *last_it;
        total_candies += candy_ct;
        bags.erase(last_it);
        bags.insert(candy_ct / 2);
    }

    cout << total_candies << endl;

    return 0;
}
 */
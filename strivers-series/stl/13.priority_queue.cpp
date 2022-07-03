#include <bits/stdc++.h>
using namespace std;

int main()
{
    // max priority_queue
    priority_queue<int> max_pq;
    max_pq.emplace(10);
    max_pq.emplace(20);
    max_pq.emplace(30);
    max_pq.emplace(40);
    max_pq.push(50);

    cout << max_pq.size() << endl;
    cout << max_pq.top() << endl;

    while (!max_pq.empty())
    {
        cout << max_pq.top() << " ";
        max_pq.pop();
    }

    cout << "\n";

    priority_queue<pair<int, int>> ppq;
    ppq.push(make_pair(1, 1));
    ppq.push(make_pair(1, 2));
    ppq.push(make_pair(1, 3));
    ppq.push(make_pair(10, 2));

    while (!ppq.empty())
    {
        cout << ppq.top().first << " -> " << ppq.top().second << endl;
        ppq.pop();
    }

    cout << "\n";

    // min priority_queue

    // by using trick
    priority_queue<int> min_pq1;
    min_pq1.push(-10000);
    min_pq1.push(-1000);
    min_pq1.push(-100);
    min_pq1.push(-10);
    min_pq1.push(-1);

    while (!min_pq1.empty())
    {
        cout << min_pq1.top() * -1 << " ";
        min_pq1.pop();
    }

    cout << "\n";

    // Syntactical way:
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10000);
    min_pq.push(1000);
    min_pq.push(100);
    min_pq.push(10);
    min_pq.push(1);

    while (!min_pq.empty())
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }

    cout << "\n";

    return 0;
}
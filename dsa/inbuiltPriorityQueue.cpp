// MaxHeap
#include <bits/stdc++.h>
using namespace std;
/*

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout << "size: " << pq.size() << "\n";
    cout << "top: " << pq.top() << "\n";

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
*/

// Min Heap

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout << "size: " << pq.size() << "\n";
    cout << "top: " << pq.top() << "\n";

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void kSortedArray(int *array, int n, int k)
{
    priority_queue<int> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push(array[i]);
    }

    int s = 0;

    for (int i = k; i < n; i++)
    {
        array[s] = pq.top();
        pq.pop();
        s++;
        pq.push(array[i]);
    }

    while (!pq.empty())
    {
        array[s] = pq.top();
        pq.pop();
        s++;
    }
}

int main()
{
    int array[] = {10, 12, 6, 7, 9};
    int k = 3;
    kSortedArray(array, 5, k);

    for (auto i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
// Max Heap
/*
#include <bits/stdc++.h>
using namespace std;

void kSmallest(int *array, int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(array[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (array[i] < pq.top())
        {
            pq.pop();
            pq.push(array[i]);
        }
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    system("CLS");
    int array[] = {5, 6, 9, 12, 3, 13, 2};
    kSmallest(array, 7, 3);
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

void kSmallest(int *array, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] < pq.top())
        {
            pq.pop();
            pq.push(array[i]);
            cout << pq.top() << " ";
        }
    }
}

int main()
{
    system("CLS");
    int array[] = {5, 6, 9, 12, 3, 13, 2};
    kSmallest(array, 7, 3);
    return 0;
}
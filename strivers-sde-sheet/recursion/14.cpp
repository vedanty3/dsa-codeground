// Given a 2D matrix `path` starting from index path[0][0] reach the final index and print the path taken.You can only move in two directions Right[R] and Down[D].

// e.g. RRDD

#include <bits/stdc++.h>
using namespace std;

void findPaths(int i, int j, string s, vector<vector<int>> path)
{
    if (i >= path.size() or j >= path[0].size())
    {
        return;
    }

    if (i == path.size() - 1 and j == path[0].size() - 1)
    {
        cout << s << endl;
        return;
    }

    s += "D";
    findPaths(i + 1, j, s, path);
    s.pop_back();

    s += "R";
    findPaths(i, j + 1, s, path);
    s.pop_back();
}

int main()
{
    vector<vector<int>> path = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int i = 0;
    int j = 0;

    findPaths(i, j, "", path);

    return 0;
}
// You are given a 2D matrix `path` starting from the first index path[0][0] reach the end and print the path taken.You can move in four directions Left[L], Right[R], Down[D], Up[U].

// e.g. RRDLDR

#include <bits/stdc++.h>
using namespace std;

string dir = "DRUL";
int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};

void findPaths(int i, int j, string s, vector<vector<int>> &vis, vector<vector<int>> path)
{
    if (i >= path.size() or j >= path[0].size() or i < 0 or j < 0 or vis[i][j] == 1)
    {
        return;
    }

    if (i == path.size() - 1 and j == path[0].size() - 1)
    {
        cout << s << endl;
        return;
    }

    vis[i][j] = 1;

    for (int x = 0; x < 4; x++)
    {
        s += dir[x];
        findPaths(i + di[x], j + dj[x], s, vis, path);
        s.pop_back();
    }

    vis[i][j] = 0;
}

int main()
{
    vector<vector<int>> path = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    vector<vector<int>> vis(4, vector<int>(4, 0));

    findPaths(0, 0, "", vis, path);

    return 0;
}
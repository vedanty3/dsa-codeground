// NQueen

#include <bits/stdc++.h>
using namespace std;

int n = 4;

bool isSafe(int row, int col, vector<vector<int>> &mat)
{
    // row-- col--
    for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
    }

    // row col--
    for (int i = row, j = col; i >= 0 and j >= 0; i, j--)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
    }

    // row++ col--
    for (int i = row, j = col; i < n and j >= 0; i++, j--)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

bool NQueen(int col, vector<vector<int>> &mat)
{
    if (col == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        return true;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, mat))
        {
            mat[row][col] = 1;

            if (NQueen(col + 1, mat) == true)
            {
                return true;
            }

            mat[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> mat(4, vector<int>(4, 0));
    NQueen(0, mat);

    return 0;
}
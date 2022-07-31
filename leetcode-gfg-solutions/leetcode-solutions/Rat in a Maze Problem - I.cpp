// https : // practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

class Solution
{
public:
    void get_all_paths(int row, int col, int n, string path, vector<vector<int>> &m, vector<string> &all_paths)
    {
        if (row < 0 or row >= n or col < 0 or col >= n or m[row][col] == 0)
            return;
        if (row == n - 1 and col == n - 1)
            all_paths.push_back(path);

        m[row][col] = 0;
        get_all_paths(row + 1, col, n, path + "D", m, all_paths);
        get_all_paths(row - 1, col, n, path + "U", m, all_paths);
        get_all_paths(row, col + 1, n, path + "R", m, all_paths);
        get_all_paths(row, col - 1, n, path + "L", m, all_paths);
        m[row][col] = 1;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        string path = "";
        vector<string> all_paths;
        get_all_paths(0, 0, n, path, m, all_paths);
        return all_paths;
    }
};
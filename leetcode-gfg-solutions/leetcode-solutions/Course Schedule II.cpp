// https : // leetcode.com/problems/course-schedule-ii/

class Solution
{
public:
    bool checkDFS(int node, vector<int> &ans, vector<int> &vis, vector<int> &dfs_vis, vector<int> adj[])
    {
        vis[node] = 1;
        dfs_vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (checkDFS(it, ans, vis, dfs_vis, adj))
                    return true;
            }
            else if (dfs_vis[it])
                return true;
        }

        ans.push_back(node);
        dfs_vis[node] = 0;
        return false;
    }

    vector<int> findOrder(int n, vector<vector<int>> &prerequisites)
    {
        vector<int> vis(n + 1, 0);
        vector<int> dfs_vis(n + 1, 0);
        vector<int> adj[n];
        vector<int> ans;

        for (int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                if (checkDFS(i, ans, vis, dfs_vis, adj))
                    return {};
            }
        }
        return ans;
    }
};
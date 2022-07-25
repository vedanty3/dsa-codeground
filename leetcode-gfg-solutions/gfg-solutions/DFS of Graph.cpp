// https: // practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution
{
public:
    void solve(int i, vector<int> &vis, vector<int> &dfs, vector<int> adj[])
    {
        dfs.push_back(i);
        vis[i] = 1;
        for (auto it : adj[i])
        {
            if (!vis[it])
            {
                solve(it, vis, dfs, adj);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> dfs;
        vector<int> vis(V + 1, 0);
        solve(0, vis, dfs, adj);
        return dfs;
    }
};
// https : // practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution
{
public:
    bool checkDFS(int node, vector<int> &vis, vector<int> &dfs_vis, vector<int> adj[])
    {
        vis[node] = 1;
        dfs_vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                if (checkDFS(it, vis, dfs_vis, adj))
                    return true;
            }
            else if (dfs_vis[it])
                return true;
        }
        dfs_vis[node] = 0;
        return false;
    }

    bool isCyclic(int V, vector<int> adj[])
    {
        vector<int> vis(V + 1, 0);
        vector<int> dfs_vis(V + 1, 0);

        for (int i = 1; i < V; i++)
        {
            if (!vis[i])
            {
                if (checkDFS(i, vis, dfs_vis, adj))
                    return true;
            }
        }

        return false;
    }
};
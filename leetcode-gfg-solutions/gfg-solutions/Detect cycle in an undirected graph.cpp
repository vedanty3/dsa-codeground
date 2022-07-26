// https: // practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// BFS

class Solution
{
public:
    bool helper(int start, vector<int> &vis, vector<int> adj[])
    {
        queue<pair<int, int>> q;
        q.push({start, -1});
        vis[start] = 1;

        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto it : adj[node])
            {
                if (!vis[it])
                    vis[it] = 1, q.push({it, node});
                else if (parent != it)
                    return true;
            }
        }

        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
                if (helper(i, vis, adj))
                    return true;
        }
        return false;
    }
};

// DFS

class Solution
{
public:
    bool dfs_cycle(int node, int parent, vector<int> &vis, vector<int> adj[])
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1, dfs_cycle(it, node, vis, adj);
            }
            else if (parent != it and vis[it])
                return true;
        }

        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        vector<int> vis(V + 1, 0);

        for (int i = 1; i < V; i++)
        {
            if (!vis[i])
            {
                if (dfs_cycle(i, -1, vis, adj))
                    return true;
            }
        }
        return false;
    }
};
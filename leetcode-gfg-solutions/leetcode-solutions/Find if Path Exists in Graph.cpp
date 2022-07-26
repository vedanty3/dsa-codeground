// https : // leetcode.com/problems/find-if-path-exists-in-graph/

class Solution
{
public:
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {

        if (source == destination)
            return true;
        vector<int> adj[n];
        vector<int> vis(n + 1, 0);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        queue<int> q;
        q.push(source);
        vis[source] = 1;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            if (node == destination)
                return true;
            for (auto it : adj[node])
            {
                if (!vis[it])
                    vis[it] = 1, q.push(it);
            }
        }
        return false;
    }
};
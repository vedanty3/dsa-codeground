// https : // practice.geeksforgeeks.org/problems/bipartite-graph/1

// BFS
class Solution
{
public:
    bool checkBFS(int src, vector<int> &color, vector<int> adj[])
    {
        queue<int> q;
        q.push(src);
        color[src] = 0;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto it : adj[node])
            {
                if (color[it] == -1)
                {
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if (color[it] == color[node])
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool isBipartite(int V, vector<int> adj[])
    {
        vector<int> color(V + 1, -1);

        for (int i = 0; i < V; i++)
        {
            if (color[i] == -1)
            {
                if (!checkBFS(i, color, adj))
                    return false;
            }
        }
        return true;
    }
};

// DFS
class Solution
{
public:
    bool checkDFS(int src, vector<int> &color, vector<int> adj[])
    {
        if (color[src] == -1)
        {
            color[src] = 0;
        }

        for (auto it : adj[src])
        {
            if (color[it] == -1)
            {
                color[it] = 1 - color[src];
                if (!checkDFS(it, color, adj))
                    return false;
            }
            else if (color[it] == color[src])
                return false;
        }

        return true;
    }

    bool isBipartite(int V, vector<int> adj[])
    {
        vector<int> color(V + 1, -1);

        for (int i = 0; i < V; i++)
        {
            if (color[i] == -1)
            {
                if (!checkDFS(i, color, adj))
                    return false;
            }
        }
        return true;
    }
};
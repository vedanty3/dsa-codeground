// https : // practice.geeksforgeeks.org/problems/topological-sort/1

// DFS
class Solution
{
public:
    void find_topo_sort(int node, vector<int> &vis, stack<int> &st, vector<int> adj[])
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                find_topo_sort(it, vis, st, adj);
            }
        }

        st.emplace(node);
    }

    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<int> vis(V + 1, 0);
        vector<int> sorted_order;
        stack<int> st;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                find_topo_sort(i, vis, st, adj);
            }
        }

        while (!st.empty())
        {
            sorted_order.emplace_back(st.top());
            st.pop();
        }

        return sorted_order;
    }
};

// BFS (Kahn's Algorithm)
class Solution
{
public:
    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<int> indeg(V + 1, 0);
        vector<int> topo_sort;
        queue<int> q;

        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                indeg[it]++;
            }
        }

        for (int i = 0; i < V; i++)
        {
            if (!indeg[i])
                q.push(i);
        }

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            topo_sort.push_back(node);

            for (auto it : adj[node])
            {
                indeg[it]--;
                if (indeg[it] == 0)
                    q.push(it);
            }
        }
        return topo_sort;
    }
};
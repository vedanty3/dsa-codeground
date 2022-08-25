// https : // leetcode.com/problems/course-schedule/

class Solution
{
public:
    bool checkDFS(int node, vector<int> &vis, vector<int> dfs_vis, vector<int> adj[])
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

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> adj[numCourses + 1];
        vector<int> vis(numCourses + 1, 0);
        vector<int> dfs_vis(numCourses + 1, 0);

        for (int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        for (int i = 1; i < numCourses; i++)
        {
            if (!vis[i])
            {
                if (checkDFS(i, vis, dfs_vis, adj))
                    return false;
            }
        }
        return true;
    }
};

// Topological Sort
class Solution
{
public:
    void find_topo_sort(int node, vector<int> &vis, stack<int> &st, vector<int> adj[])
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
                find_topo_sort(it, vis, st, adj);
        }

        st.emplace(node);
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> vis(numCourses + 1, 0);
        vector<int> adj[numCourses];
        stack<int> st;
        unordered_map<int, int> mpp;
        int idx = 0;

        for (int i = 0; i < prerequisites.size(); i++)
        {
            if (prerequisites[i][0] == prerequisites[i][1])
                return false;
            adj[prerequisites[i][1]].emplace_back(prerequisites[i][0]);
        }

        for (int i = 0; i < numCourses; i++)
        {
            if (!vis[i])
                find_topo_sort(i, vis, st, adj);
        }

        while (!st.empty())
        {
            mpp[st.top()] = idx;
            st.pop();
            idx++;
        }

        for (int i = 0; i < numCourses; i++)
        {
            for (auto it : adj[i])
            {
                if (mpp[i] > mpp[it])
                    return false;
            }
        }

        return true;
    }
};
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
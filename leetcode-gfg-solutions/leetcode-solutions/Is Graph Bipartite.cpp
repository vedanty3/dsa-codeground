// https : // leetcode.com/problems/is-graph-bipartite/

class Solution
{
public:
    bool checkBFS(int src, vector<int> &color, vector<vector<int>> &graph)
    {
        queue<int> q;
        q.push(src);
        color[src] = 0;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto it : graph[node])
            {
                if (color[it] == -1)
                {
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if (color[it] == color[node])
                    return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>> &graph)
    {
        // vector<int>adj[graph.size()];
        vector<int> color(graph.size() + 1, -1);

        // for(int i=0; i<graph.size(); i++)
        // {
        //     for(int j=0; j<graph[i].size(); j++)
        //     {
        //         adj[i].push_back(graph[i][j]);
        //     }
        // }

        for (int i = 1; i < graph.size(); i++)
        {
            if (color[i] == -1)
            {
                if (!checkBFS(i, color, graph))
                    return false;
            }
        }

        return true;
    }
};
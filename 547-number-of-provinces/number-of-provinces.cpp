class Solution {
public:

    void DFS( unordered_map<int, vector<int>> &adj, int u, vector<bool> &visited) {
        visited[u] = true;

        for(int &v: adj[u])
        {
            if(!visited[v]) DFS(adj, v, visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        //making adj list

        unordered_map<int, vector<int>> adj;

        for(int i = 0; i < isConnected.size(); ++i)
        {
            for(int j = 0; j < isConnected[0].size(); ++j)
            {
                if(isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                adj[j].push_back(i);

                }
            }
        }

        //DFS
        int count = 0;
        vector<bool> visited(isConnected.size(), false);

        for(int i = 0; i < isConnected.size(); ++i)
        {
            if(!visited[i])
            {
                DFS(adj, i, visited);
                count++;
            }
        }

        return count;
    }
};
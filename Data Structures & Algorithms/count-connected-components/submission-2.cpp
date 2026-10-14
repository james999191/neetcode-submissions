class Solution {

public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        unordered_set<int> visit;

        for (const auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int res = 0;

        for (int i = 0; i < n; i ++){
            if (!visit.count(i)){
                dfs(i, visit, adj);
                res++;
            }
        }

        return res;


    }

    void dfs(int node, unordered_set<int>& visit, vector<vector<int>>& adj){
        visit.insert(node);

        for (int nei : adj[node]){
            if (!visit.count(nei)){
                dfs(nei, visit, adj);
            }
        }
    }
};
